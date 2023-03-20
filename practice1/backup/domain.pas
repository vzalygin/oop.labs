unit domain;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils;

type
  TRating = 0..100;
  TGroupBy = array of array of TStudent;
  TPredicate = function(a, b: TStudent): boolean;

  TStudent = object
  public
    Name: string[40];
    LastName: string[40];
    Group: string[40];
    Rating: TRating;
  public
    constructor Init(
      NewName: string;
      NewLastName: string;
      NewGroup: string;
      NewRating: TRating);
    function IsEquals(another: TStudent): boolean;
    function ToString: string;
  end;

function isNamesakes(a, b: TStudent): boolean;
function isGroupmates(a, b: TStudent): boolean;

implementation

constructor TStudent.Init(
  NewName: string;
  NewLastName: string;
  NewGroup: string;
  NewRating: TRating);
begin
  Name := NewName;
  LastName := NewLastName;
  Group := NewGroup;
  Rating := NewRating;
end;

function TStudent.IsEquals(another: TStudent): boolean;
begin
  Result :=
    (Name = another.Name) and
    (LastName = another.LastName) and
    (Group = another.Group) and
    (Rating = another.Rating);
end;

function TStudent.ToString: string;
begin
  Result :=
    Name + ' ' + LastName +
    ' (группа ' + Group + ') ' +
    IntToStr(Rating) + '/100';
end;

function isNamesakes(a, b: TStudent): boolean;
begin
  Result := a.LastName = b.LastName;
end;

function isGroupmates(a, b: TStudent): boolean;
begin
  Result := a.Group = b.Group;
end;

end.
