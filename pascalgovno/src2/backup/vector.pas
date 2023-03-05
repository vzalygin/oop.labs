unit Vector;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils;

type
  Vector = object
    procedure Init(x, y: integer);
    function Rotate(alpha: double): Vector;
  private
    x, y: integer;
  end;

implementation

procedure Init(x, y: integer);
begin
  self.x := x;
  self.y := y;
end;

function Rotate(alpha: double): Vector;
begin

end;

end.
