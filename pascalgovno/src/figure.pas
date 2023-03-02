unit figure;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Graphics;

type
  TFigure = object
    constructor Init(color, beginX, beginY, endX, endY: integer);
    procedure Draw(var canvas: TCanvas); virtual;

  public
    Color, BeginX, BeginY, EndX, EndY: integer;
  end;

implementation

constructor TFigure.Init(color, beginX, beginY, endX, endY: integer);
begin
  self.Color := color;
  self.BeginX := beginX;
  self.BeginY := BeginY;
  self.EndX := endX;
  self.EndY := endY;
end;

procedure TFigure.Draw(var canvas: TCanvas);
begin
  canvas.Brush.Color := clblue;
  canvas.Pen.Width := 4;
  Canvas.Pen.Color := clBlue;
  Canvas.Pen.Style := psSolid;
  Canvas.MoveTo(10, 10);
  Canvas.LineTo(50, 50);
end;

end.
