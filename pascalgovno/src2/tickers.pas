unit Tickers;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Figure, Graphics, Vec;

type
  TTicker = object(TFigure)
    constructor Init(amplitudeT, oscillationT: double; xT, yT: integer);
    procedure Draw(var canvas: TCanvas; time: double); virtual;
  end;

implementation

constructor TTicker.Init(amplitudeT, oscillationT: double; xT, yT: integer);
begin
  inherited Init(amplitudeT, oscillationT, xT, yT);
end;

procedure TTicker.Draw(var canvas: TCanvas; time: double);
var
  alpha: double;
  shift: Vector;
begin
  alpha := 2 * Pi * (time / oscillation);
  alpha := sin(alpha) * amplitude / 180 * Pi;
  shift := size.Rotate(alpha);
  shift := shift.Rotate(-Pi / 2);

  canvas.Brush.Color := $FFFFFF;
  canvas.Pen.Color := $000000;
  canvas.Pen.Width := 2;
  canvas.Ellipse(coords.x + shift.x - 10, coords.y + shift.y - 10,
    coords.x + shift.x + 10, coords.y + shift.y + 10);
  canvas.Line(coords.x, coords.y, coords.x + shift.x, coords.y + shift.y);
end;

end.
