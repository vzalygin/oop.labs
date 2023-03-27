unit rectangles;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Figure, Graphics;

type TRect = object(TFigure)
  constructor Init(c, x1, y1, x2, y2: integer);
  procedure Draw(const canvas: TCanvas); virtual;
  end;

implementation

constructor TRect.Init(c, x1, y1, x2, y2: integer);
begin
  inherited Init(c, x1, y1, x2, y2)
end;

procedure TRect.Draw(const canvas: TCanvas);
var x1, y1, x2, y2, tmp: integer;
begin
  x1 := self.BeginX+180;
  y1 := self.BeginY;
  x2 := self.EndX_180;
  y2 := self.EndY;
  if x1 < x2 then begin
    tmp := x1;
    x1 := x2;
    x2 := tmp;
  end;
  if y1 < y2 then begin
    tmp := y1;
    y1 := y2;
    y2 := tmp;
  end;
  canvas.Brush.Color:=self.Color;
  canvas.Pen.Color:=self.Color;
  canvas.Pen.Width:=4;
  canvas.Rectangle(x1, y1, x2, y2);
end;

end.

