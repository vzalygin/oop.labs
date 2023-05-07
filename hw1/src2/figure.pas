unit Figure;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Graphics, Vec;

type
  TFigure = object
  public
    constructor Init(amplitude, oscillation: double; x, y: integer);
    procedure Draw(const canvas: TCanvas; time: double); virtual; abstract;
  public
    coords: vector;
    size: vector;
    amplitude, oscillation: double;
  end;

implementation

constructor TFigure.Init(amplitude, oscillation: double; x, y: integer);
begin
  self.coords.Init(x, y);
  self.size.Init(100, 0);
  self.amplitude := amplitude;
  self.oscillation := oscillation;
end;

end.
