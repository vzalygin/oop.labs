unit main;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, ExtCtrls, Menus,
  StdCtrls, ActnList, Lines, Tickers, Figure;

type

  { TMainForm }

  TMainForm = class(TForm)
    AmplitudeEdit: TEdit;
    OscillationEdit: TEdit;
    PaintBox: TPaintBox;
    LineButton: TRadioButton;
    TickerButton: TRadioButton;
    RadioGroup1: TRadioGroup;
    Timer: TTimer;
    procedure FormCreate(Sender: TObject);
    procedure OnTimer(Sender: TObject);
    procedure PaintBoxMouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: integer);
  private
    Figures: array of TFigure;
    Count: integer;
    Time: double;
    function GetFigure: integer;
    function GetAmplitude: double;
    function GetOscillation: double;
    procedure ClearCanvas;
    procedure DrawFigures;
  public

  end;

var
  MainForm: TMainForm;

const
  Delta = 58;

implementation

{$R *.lfm}

procedure TMainForm.ClearCanvas;
begin
  //canvas.Brush.Color := $FFFFFF;
  //canvas.FillRect(180, 0, 400+180, 400);
end;

procedure TMainForm.DrawFigures;
var
  i: integer;
begin
  ClearCanvas;
  for i := 0 to high(figures) do
    figures[i].Draw(canvas, time);
end;

{ TMainForm }

function TMainForm.GetFigure: integer;
begin
  if TRadioButton(RadioGroup1.Controls[0]).Checked then
    Result := 0
  else
    Result := 1;
end;

function TMainForm.GetAmplitude: double;
begin
  if AmplitudeEdit.Text <> '' then
    Result := StrToFloat(AmplitudeEdit.Text)
  else
    Result := 0.0;
end;

function TMainForm.GetOscillation: double;
begin
  if OscillationEdit.Text <> '' then
    Result := StrToFloat(OscillationEdit.Text)
  else
    Result := 0.0;
end;

procedure TMainForm.FormCreate(Sender: TObject);
begin
  Timer.Interval := Delta;
end;

procedure TMainForm.OnTimer(Sender: TObject);
begin
  Time += Delta / 1000;
  DrawFigures;
end;

procedure TMainForm.PaintBoxMouseDown(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: integer);
var
  line: TLine;
  ticker: TTicker;
begin
  Count += 1;
  SetLength(Figures, Count);
  case GetFigure of
    0: begin
      line.Init(GetAmplitude, GetOscillation, x+180, y);
      Figures[Count - 1] := line;
    end;
    1: begin
      ticker.Init(GetAmplitude, GetOscillation, x+180, y);
      Figures[Count - 1] := ticker;
    end;
  end;
end;

end.
