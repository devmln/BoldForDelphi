(*****************************************)
(*      This file is autogenerated       *)
(*   Any manual changes will be LOST!    *)
(*****************************************)
(* Generated 2002-04-05 15:06:42         *)
(*****************************************)
(* This file should be stored in the     *)
(* same directory as the form/datamodule *)
(* with the corresponding model          *)
(*****************************************)
(* Copyright notice:                     *)
(* (c) Boldsoft                          *)
(*****************************************)

{$IFNDEF MultilangClasses_Interface.inc}
{$DEFINE MultilangClasses_Interface.inc}

{$IFNDEF MultilangClasses_unitheader}
unit MultilangClasses;
{$ENDIF}

interface

uses
  // interface uses
  // interface dependencies
  // attribute classes
  BoldAttributes,
  BoldMLAttributes,
  MLTestVSAttributes,
  // other
  Classes,
  Controls, // for TDate
  SysUtils,
  BoldDefs,
  BoldSubscription,
  BoldDeriver,
  BoldElements,
  BoldDomainElement,
  BoldSystemRT,
  BoldSystem;

type
  { forward declarations of all classes }

  TBusinessClassesRoot = class;
  TBusinessClassesRootList = class;
  TBuilding = class;
  TBuildingList = class;
  TLanguageClass = class;
  TLanguageClassList = class;
  TMLValueSetHolder = class;
  TMLValueSetHolderList = class;
  TOwnership = class;
  TOwnershipList = class;
  TPerson = class;
  TPersonList = class;
  THouseKindClass = class;
  THouseKindClassList = class;
  TPersonCategoryClass = class;
  TPersonCategoryClassList = class;

  TBusinessClassesRoot = class(TBoldObject)
  private
  protected
  public
  end;

  TBuilding = class(TBusinessClassesRoot)
  private
    function _Get_M_Address: TBAString;
    function _GetAddress: String;
    procedure _SetAddress(NewValue: String);
    function _Get_M_TotalRent: TBACurrency;
    function _GetTotalRent: Currency;
    procedure _SetTotalRent(NewValue: Currency);
    function _Get_M_Description: TBAMLString;
    function _GetDescription: String;
    procedure _SetDescription(NewValue: String);
    function _Get_M_HouseTypeAttr: TBAHousekind;
    function _GetHouseTypeAttr: integer;
    procedure _SetHouseTypeAttr(NewValue: integer);
    function _GetOwners: TPersonList;
    function _GetOwnership: TOwnershipList;
    function _GetResidents: TPersonList;
  protected
    procedure CompleteCreate; override;
  public
    property M_Address: TBAString read _Get_M_Address;
    property M_TotalRent: TBACurrency read _Get_M_TotalRent;
    property M_Description: TBAMLString read _Get_M_Description;
    property M_HouseTypeAttr: TBAHousekind read _Get_M_HouseTypeAttr;
    property M_Owners: TPersonList read _GetOwners;
    property M_Ownership: TOwnershipList read _GetOwnership;
    property M_Residents: TPersonList read _GetResidents;
    property Address: String read _GetAddress write _SetAddress;
    property TotalRent: Currency read _GetTotalRent write _SetTotalRent;
    property Description: String read _GetDescription write _SetDescription;
    property HouseTypeAttr: integer read _GetHouseTypeAttr write _SetHouseTypeAttr;
    property Owners: TPersonList read _GetOwners;
    property Ownership: TOwnershipList read _GetOwnership;
    property Residents: TPersonList read _GetResidents;
  end;

  TLanguageClass = class(TBusinessClassesRoot)
  private
    function _Get_M_LanguageNumber: TBAInteger;
    function _GetLanguageNumber: Integer;
    procedure _SetLanguageNumber(NewValue: Integer);
    function _Get_M_LanguageName: TBAString;
    function _GetLanguageName: String;
    procedure _SetLanguageName(NewValue: String);
  protected
  public
    property M_LanguageNumber: TBAInteger read _Get_M_LanguageNumber;
    property M_LanguageName: TBAString read _Get_M_LanguageName;
    property LanguageNumber: Integer read _GetLanguageNumber write _SetLanguageNumber;
    property LanguageName: String read _GetLanguageName write _SetLanguageName;
  end;

  TMLValueSetHolder = class(TBusinessClassesRoot)
  private
    function _Get_M_IntValue: TBAInteger;
    function _GetIntValue: Integer;
    procedure _SetIntValue(NewValue: Integer);
    function _Get_M_Description: TBAMLString;
    function _GetDescription: String;
    procedure _SetDescription(NewValue: String);
    function _Get_M_ShortDescription: TBAMLString;
    function _GetShortDescription: String;
    procedure _SetShortDescription(NewValue: String);
  protected
  public
    property M_IntValue: TBAInteger read _Get_M_IntValue;
    property M_Description: TBAMLString read _Get_M_Description;
    property M_ShortDescription: TBAMLString read _Get_M_ShortDescription;
    property IntValue: Integer read _GetIntValue write _SetIntValue;
    property Description: String read _GetDescription write _SetDescription;
    property ShortDescription: String read _GetShortDescription write _SetShortDescription;
  end;

  TOwnership = class(TBusinessClassesRoot)
  private
    function _GetOwners: TPerson;
    function _Get_M_Owners: TBoldObjectReference;
    function _GetOwnedBuildings: TBuilding;
    function _Get_M_OwnedBuildings: TBoldObjectReference;
  protected
  public
    property M_Owners: TBoldObjectReference read _Get_M_Owners;
    property M_OwnedBuildings: TBoldObjectReference read _Get_M_OwnedBuildings;
    property Owners: TPerson read _GetOwners;
    property OwnedBuildings: TBuilding read _GetOwnedBuildings;
  end;

  TPerson = class(TBusinessClassesRoot)
  private
    function _Get_M_Assets: TBACurrency;
    function _GetAssets: Currency;
    procedure _SetAssets(NewValue: Currency);
    function _Get_M_FirstName: TBAString;
    function _GetFirstName: String;
    procedure _SetFirstName(NewValue: String);
    function _Get_M_LastName: TBAString;
    function _GetLastName: String;
    procedure _SetLastName(NewValue: String);
    function _Get_M_MotherTounge: TBALanguage;
    function _GetMotherTounge: integer;
    procedure _SetMotherTounge(NewValue: integer);
    function _Get_M_PersonCategoryAttr: TBAPersonCategory;
    function _GetPersonCategoryAttr: integer;
    procedure _SetPersonCategoryAttr(NewValue: integer);
    function _GetOwnedBuildings: TBuildingList;
    function _GetOwnership: TOwnershipList;
    function _GetHome: TBuilding;
    function _Get_M_Home: TBoldObjectReference;
    procedure _SetHome(value: TBuilding);
  protected
    procedure CompleteCreate; override;
  public
    property M_Assets: TBACurrency read _Get_M_Assets;
    property M_FirstName: TBAString read _Get_M_FirstName;
    property M_LastName: TBAString read _Get_M_LastName;
    property M_MotherTounge: TBALanguage read _Get_M_MotherTounge;
    property M_PersonCategoryAttr: TBAPersonCategory read _Get_M_PersonCategoryAttr;
    property M_OwnedBuildings: TBuildingList read _GetOwnedBuildings;
    property M_Ownership: TOwnershipList read _GetOwnership;
    property M_Home: TBoldObjectReference read _Get_M_Home;
    property Assets: Currency read _GetAssets write _SetAssets;
    property FirstName: String read _GetFirstName write _SetFirstName;
    property LastName: String read _GetLastName write _SetLastName;
    property MotherTounge: integer read _GetMotherTounge write _SetMotherTounge;
    property PersonCategoryAttr: integer read _GetPersonCategoryAttr write _SetPersonCategoryAttr;
    property OwnedBuildings: TBuildingList read _GetOwnedBuildings;
    property Ownership: TOwnershipList read _GetOwnership;
    property Home: TBuilding read _GetHome write _SetHome;
  end;

  THouseKindClass = class(TMLValueSetHolder)
  private
  protected
  public
  end;

  TPersonCategoryClass = class(TMLValueSetHolder)
  private
  protected
  public
  end;

  TBusinessClassesRootList = class(TBoldObjectList)
  protected
    function GetBoldObject(index: Integer): TBusinessClassesRoot;
    procedure SetBoldObject(index: Integer; NewObject: TBusinessClassesRoot);
  public
    function Includes(anObject: TBusinessClassesRoot): Boolean;
    function IndexOf(anObject: TBusinessClassesRoot): Integer;
    procedure Add(NewObject: TBusinessClassesRoot);
    function AddNew: TBusinessClassesRoot;
    procedure Insert(index: Integer; NewObject: TBusinessClassesRoot);
    property BoldObjects[index: Integer]: TBusinessClassesRoot read GetBoldObject write SetBoldObject; default;
  end;

  TBuildingList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TBuilding;
    procedure SetBoldObject(index: Integer; NewObject: TBuilding);
  public
    function Includes(anObject: TBuilding): Boolean;
    function IndexOf(anObject: TBuilding): Integer;
    procedure Add(NewObject: TBuilding);
    function AddNew: TBuilding;
    procedure Insert(index: Integer; NewObject: TBuilding);
    property BoldObjects[index: Integer]: TBuilding read GetBoldObject write SetBoldObject; default;
  end;

  TLanguageClassList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TLanguageClass;
    procedure SetBoldObject(index: Integer; NewObject: TLanguageClass);
  public
    function Includes(anObject: TLanguageClass): Boolean;
    function IndexOf(anObject: TLanguageClass): Integer;
    procedure Add(NewObject: TLanguageClass);
    function AddNew: TLanguageClass;
    procedure Insert(index: Integer; NewObject: TLanguageClass);
    property BoldObjects[index: Integer]: TLanguageClass read GetBoldObject write SetBoldObject; default;
  end;

  TMLValueSetHolderList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TMLValueSetHolder;
    procedure SetBoldObject(index: Integer; NewObject: TMLValueSetHolder);
  public
    function Includes(anObject: TMLValueSetHolder): Boolean;
    function IndexOf(anObject: TMLValueSetHolder): Integer;
    procedure Add(NewObject: TMLValueSetHolder);
    function AddNew: TMLValueSetHolder;
    procedure Insert(index: Integer; NewObject: TMLValueSetHolder);
    property BoldObjects[index: Integer]: TMLValueSetHolder read GetBoldObject write SetBoldObject; default;
  end;

  TOwnershipList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TOwnership;
    procedure SetBoldObject(index: Integer; NewObject: TOwnership);
  public
    function Includes(anObject: TOwnership): Boolean;
    function IndexOf(anObject: TOwnership): Integer;
    procedure Add(NewObject: TOwnership);
    function AddNew: TOwnership;
    procedure Insert(index: Integer; NewObject: TOwnership);
    property BoldObjects[index: Integer]: TOwnership read GetBoldObject write SetBoldObject; default;
  end;

  TPersonList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TPerson;
    procedure SetBoldObject(index: Integer; NewObject: TPerson);
  public
    function Includes(anObject: TPerson): Boolean;
    function IndexOf(anObject: TPerson): Integer;
    procedure Add(NewObject: TPerson);
    function AddNew: TPerson;
    procedure Insert(index: Integer; NewObject: TPerson);
    property BoldObjects[index: Integer]: TPerson read GetBoldObject write SetBoldObject; default;
  end;

  THouseKindClassList = class(TMLValueSetHolderList)
  protected
    function GetBoldObject(index: Integer): THouseKindClass;
    procedure SetBoldObject(index: Integer; NewObject: THouseKindClass);
  public
    function Includes(anObject: THouseKindClass): Boolean;
    function IndexOf(anObject: THouseKindClass): Integer;
    procedure Add(NewObject: THouseKindClass);
    function AddNew: THouseKindClass;
    procedure Insert(index: Integer; NewObject: THouseKindClass);
    property BoldObjects[index: Integer]: THouseKindClass read GetBoldObject write SetBoldObject; default;
  end;

  TPersonCategoryClassList = class(TMLValueSetHolderList)
  protected
    function GetBoldObject(index: Integer): TPersonCategoryClass;
    procedure SetBoldObject(index: Integer; NewObject: TPersonCategoryClass);
  public
    function Includes(anObject: TPersonCategoryClass): Boolean;
    function IndexOf(anObject: TPersonCategoryClass): Integer;
    procedure Add(NewObject: TPersonCategoryClass);
    function AddNew: TPersonCategoryClass;
    procedure Insert(index: Integer; NewObject: TPersonCategoryClass);
    property BoldObjects[index: Integer]: TPersonCategoryClass read GetBoldObject write SetBoldObject; default;
  end;

function GeneratedCodeCRC: String;

implementation

{$ENDIF}
