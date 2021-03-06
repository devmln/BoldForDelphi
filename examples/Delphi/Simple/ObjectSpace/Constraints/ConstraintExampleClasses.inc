{**********************************************************}
   {                                                          }
   {       Bold for Delphi Stub File                          }
   {                                                          }
   {       Autogenerated file for method implementations      }
   {                                                          }
   {**********************************************************}

// 
{$INCLUDE ConstraintExampleClasses_Interface.inc}

function TBusinessClassesRoot.MayUpdate: Boolean;
var
  message: string;
  Failure: TBoldFailureReason;
begin
  // this method will be run automatically for new and deleted objects, but not for objects
  // that just update some members.

  result := true;

  if BoldExistenceState = besExisting then
  begin
    result := EvaluateExpressionAsString('constraints->select(a|not a)->size = 0', brDefault) = 'Y';
    if not result then
    begin
      // retrieve the message from the first broken constraint
      message := EvaluateExpressionAsString('constraints->select(a|not a)->first', 10);
      Failure := TBoldFailureReason.Create(Message, self);
      failure.MessageFormatStr := 'Validation error for %s: %2:s';
      SetBoldLastFailureReason(Failure);
    end;
  end;
  result := result and inherited MayUpdate;
end;

function TBusinessClassesRoot.ReceiveQueryFromOwned(Originator: TObject; OriginalEvent: TBoldEvent; const Args: array of const; Subscriber: TBoldSubscriber): Boolean;
begin
  result := inherited ReceiveQueryFromOwned(Originator, OriginalEvent, Args, Subscriber);

  // we must catch the update of our members.

  if (OriginalEvent = bqMayUpdate) and (Originator is TBoldMember) and (TBoldmember(Originator).OwningObject = self) then
    result := result and MayUpdate
end;

procedure TOrder.CompleteCreate;
begin
  inherited;
  orderDate := now;
end;
