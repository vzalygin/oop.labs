unit gist;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, TAGraph, TASources,
  TASeries, TACustomSource, TADbSource, Repository, Domain;

type

  { TForm1 }

  TForm1 = class(TForm)
    Chart1: TChart;
    Chart1BarSeries1: TBarSeries;
    ChartSource: TRandomChartSource;
    ListChartSource1: TListChartSource;
    procedure FormShow(Sender: TObject);
    function ListChartSource1Compare(AItem1, AItem2: Pointer): integer;
  private

  public

  end;

var
  GistForm: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.FormShow(Sender: TObject);
var groupmates: TGroupBy;
    i, j: integer;
    avr: double;
begin
  groupmates := Repo.GroupBy(isGroupmates);
  ListChartSource1.Clear;
  for i := 0 to High(groupmates) do
  begin
    avr := 0;
    for j := 0 to High(groupmates[i]) do
        avr += groupmates[i][j].Rating;
    avr /= Length(groupmates[i]);
    ListChartSource1.Add(i, avr, groupmates[i][0].Group);
  end;
end;

function TForm1.ListChartSource1Compare(AItem1, AItem2: Pointer): integer;

begin

end;

end.
