unit vec;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils;

type
  vector = object
    procedure Init(x, y: integer);
    function Rotate(alpha: double): Vector;
    function Add(vec: Vector): Vector;
  public
    x, y: integer;
  end;

implementation

procedure Vector.Init(x, y: integer);
begin
  self.x := x;
  self.y := y;
end;

function Vector.Rotate(alpha: double): Vector;
var x1, y1: integer;
    res: Vector;
begin
  x1 := trunc(+cos(alpha)*x + sin(alpha)*y);
  y1 := trunc(-sin(alpha)*x + cos(alpha)*y);
  res.Init(x1, y1);
  Result := res;
end;

end.
