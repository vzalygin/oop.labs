unit repo;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Domain;

type
  TSource = file of TStudent;
  TRepo = object
  public
    Students: array of TStudent;
    Source: TSource;
  public
    constructor Init(path: string);
    procedure Load;
    procedure Save;
end;

implementation

constructor TRepo.Init(path: string);
begin
  if not FileExists(path) then
    FileCreate(path);
  AssignFile(Source, path);
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

