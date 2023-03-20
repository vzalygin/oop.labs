unit repository;

{$mode delphi}{$H+}

interface

uses
  Classes, SysUtils, Domain;

type
  TSource = file of TStudent;
  TGroupBy = array of array of TStudent;
  TPredicate = function(a, b: TStudent): boolean;

  TRepo = object
  public
    Students: array of TStudent;
    Source: TSource;
  public
    constructor Init(path: string);
    procedure Append(student: TStudent);
    procedure Remove(i: integer);
    function GroupBy(pred: TPredicate): TGroupBy;
    procedure Load;
    procedure Save;
end;

var Repo: TRepo;

implementation

constructor TRepo.Init(path: string);
begin
  if not FileExists(path) then
    FileCreate(path);
  AssignFile(Source, path);
end;

procedure TRepo.Append(student: TStudent);
begin
  SetLength(Students, Length(Students)+1);
  Students[Length(Students)-1] := student;
  Save;
end;

procedure TRepo.Remove(i: integer);
begin
  if (Length(Students) > 0) and (i > -1) then begin
    Students[i] := Students[Length(Students)-1];
    SetLength(Students, Length(Students)-1);
  end;
  Save;
end;

function TRepo.GroupBy(pred: TPredicate): TGroupBy;
var i, j: integer;
    found: boolean;
begin
  for i := 0 to High(Students) do begin
    found := false;
    j := 0;
    while (j < Length(Result)) and not found do begin
      if pred(Students[i], Result[j][0]) then begin
        SetLength(Result[j], Length(Result[j]) + 1);
        Result[j][Length(Result[j])-1] := Students[i];
        found := true;
      end;
      j += 1;
    end;
    if not found then begin
      j := Length(Result);
      SetLength(Result, j+1);
      SetLength(Result[j], 1);
      Result[j][0] := Students[i];
    end;
  end;
end;

procedure TRepo.Load;
var length, i: integer;
begin
  reset(Source);
  length := FileSize(Source);
  SetLength(Students, length);
  i := 0;
  while not eof(Source) do begin
    Read(Source, Students[i]);
    i += 1;
  end;
  close(Source);
end;

procedure TRepo.Save;
var i: integer;
begin
  rewrite(Source);
  for i := 0 to High(Students) do begin
    Write(Source, Students[i]);
  end;
  close(Source);
end;

end.

