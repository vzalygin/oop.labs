unit main;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, ExtCtrls, Menus,
  StdCtrls, ActnList, Lines, Rectangles, Figure;

type

  { TMainForm }

  TMainForm = class(TForm)
    PaintBox: TPaintBox;
    LineButton: TRadioButton;
    BlueButton: TRadioButton;
    GreenButton: TRadioButton;
    RedButton: TRadioButton;
    RadioGroup2: TRadioGroup;
    RectButton: TRadioButton;
    RadioGroup1: TRadioGroup;
    procedure FormCreate(Sender: TObject);
    procedure PaintBoxMouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: integer);
    procedure PaintBoxMouseMove(Sender: TObject; Shift: TShiftState; X, Y: integer);
    procedure PaintBoxMouseUp(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: integer);
  private
    Figures: array of TFigure;
    Count: integer;
    IsDrawing: boolean;
    function GetColor: integer;
    function GetFigure: integer;
  public

  end;

var
  MainForm: TMainForm;

implementation

{$R *.lfm}

procedure ClearCanvas(canvas: TCanvas);
begin
  canvas.Brush.Color := $FFFFFF;
  canvas.FillRect(0, 0, 400, 400);
end;

procedure DrawFigures(canvas: TCanvas; figures: array of TFigure);
var
  i: integer;
begin
  ClearCanvas(canvas);
  for i := 0 to high(figures) do
    figures[i].Draw(canvas);
end;

{ TMainForm }

function TMainForm.GetColor: integer;
begin
  if TRadioButton(RadioGroup2.Controls[0]).Checked then
    Result := $0000FF
  else if TRadioButton(RadioGroup2.Controls[1]).Checked then
    Result := $00FF00
  else if TRadioButton(RadioGroup2.Controls[2]).Checked then
    Result := $FF0000
  else
    Result := $000000;
end;

function TMainForm.GetFigure: integer;
begin
  if TRadioButton(RadioGroup1.Controls[0]).Checked then
    Result := 0
  else
    Result := 1;
end;

procedure TMainForm.FormCreate(Sender: TObject);
begin
  ClearCanvas(PaintBox.Canvas);
end;

procedure TMainForm.PaintBoxMouseDown(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: integer);
var
  line: TLine;
  rect: TRect;
begin
  IsDrawing := True;
  Count += 1;
  SetLength(Figures, Count);
  case GetFigure of
    0: begin
      line.Init(GetColor, x, y, x, y);
      Figures[Count - 1] := line;
    end;
    1: begin
      rect.Init(GetColor, x, y, x, y);
      Figures[Count - 1] := rect;
    end;
  end;
  DrawFigures(PaintBox.canvas, Figures);
end;

procedure TMainForm.PaintBoxMouseMove(Sender: TObject; Shift: TShiftState;
  X, Y: integer);
begin
  if IsDrawing then
  begin
    Figures[Count - 1].EndX := x;
    Figures[Count - 1].EndY := y;
    DrawFigures(PaintBox.canvas, Figures);
  end;
end;

procedure TMainForm.PaintBoxMouseUp(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: integer);
begin
  IsDrawing := False;
end;

end.
