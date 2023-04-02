unit Lines;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Figure, Graphics;

type
  TLine = object(TFigure)
    constructor Init(c, x1, y1, x2, y2: integer);
    procedure Draw(const canvas: TCanvas); virtual;
  end;

implementation

constructor TLine.Init(c, x1, y1, x2, y2: integer);
begin
  inherited Init(c, x1, y1, x2, y2);
end;

procedure TLine.Draw(const canvas: TCanvas);
var
  x1, y1, x2, y2: integer;
begin
  x1 := self.BeginX;
  y1 := self.BeginY;
  x2 := self.EndX;
  y2 := self.EndY;

  canvas.Brush.Color:=self.Color;
  canvas.Pen.Color:=self.Color;
  canvas.Pen.Width:=4;
  canvas.Line(x1, y1, x2, y2);
end;

end.
