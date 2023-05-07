unit Lines;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Figure, Graphics, Crt, Vec;

type
  TLine = object(TFigure)
    constructor Init(amplitudeT, oscillationT: double; xT, yT: integer);
    procedure Draw(const canvas: TCanvas; time: double); virtual;
  end;

implementation

constructor TLine.Init(amplitudeT, oscillationT: double; xT, yT: integer);
begin
  inherited Init(amplitudeT, oscillationT, xT, yT);
end;

procedure TLine.Draw(canvas: TCanvas; time: double);
var
  alpha: double;
  shift: Vector;
begin
  alpha := 2 * Pi * (time / oscillation);
  alpha := sin(alpha) * amplitude / 180 * Pi;
  shift := size.Rotate(alpha);
  shift := shift.Rotate(-Pi / 2);

  canvas.Brush.Color := $000000;
  canvas.Pen.Color := $000000;
  canvas.Pen.Width := 2;
  canvas.Line(coords.x, coords.y, coords.x + shift.x, coords.y + shift.y);
end;

end.
