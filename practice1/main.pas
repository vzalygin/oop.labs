unit main;

{$mode delphi}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls,
  Repository, Domain, AddStudent, Gist;

type

  { TMainForm }

  TMainForm = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    Button4: TButton;
    Button5: TButton;
    Button6: TButton;
    Button7: TButton;
    ListBox1: TListBox;
    procedure Button4Click(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure Button6Click(Sender: TObject);
    procedure Button7Click(Sender: TObject);
    procedure LoadStudents;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    isSpecialMode: boolean;
  public

  end;

var
  MainForm: TMainForm;

implementation

{$R *.lfm}

{ TMainForm }



procedure TMainForm.LoadStudents;
var
  i: integer;
begin
  ListBox1.Clear;
  for i := 0 to High(Repo.Students) do
  begin
    ListBox1.Items.Add(Repo.Students[i].ToString);
  end;
  isSpecialMode := False;
end;

procedure TMainForm.FormCreate(Sender: TObject);
begin
  Repo.Init('students.dat');
  Repo.Load;
end;

procedure TMainForm.Button1Click(Sender: TObject);
begin
  AddStudentForm.Show;
end;

procedure TMainForm.Button2Click(Sender: TObject);
begin
  if not isSpecialMode then
  begin
    Repo.Remove(ListBox1.ItemIndex);
    LoadStudents;
  end;
end;

procedure TMainForm.Button3Click(Sender: TObject);
begin
  LoadStudents;
end;

procedure TMainForm.Button4Click(Sender: TObject);
var
  namesakes: TGroupBy;
  i, j: integer;
begin
  namesakes := Repo.GroupBy(isNamesakes);
  isSpecialMode := True;
  ListBox1.Clear;
  for i := 0 to High(namesakes) do
  begin
    ListBox1.Items.Add('Фамилия: ' + namesakes[i][0].LastName);
    for j := 0 to High(namesakes[i]) do
    begin
      ListBox1.Items.Add('  ' + namesakes[i][j].ToString);
    end;
  end;
end;

procedure TMainForm.Button5Click(Sender: TObject);
var
  groupmates: TGroupBy;
  StudentsAmountStr: string;
  i, StudentsAmountInt: integer;
begin
  InputQuery('Фильтр',
    'Порог фильтрации групп по количеству студентов (>=)',
    StudentsAmountStr);
  StudentsAmountInt := StrToInt(StudentsAmountStr);
  groupmates := Repo.GroupBy(isGroupmates);
  ListBox1.Clear;
  ListBox1.Items.Add('Группы, в которых студентов неменьше ' + StudentsAmountStr);
  isSpecialMode := True;
  for i := 0 to High(groupmates) do
  begin
    if Length(groupmates[i]) >= StudentsAmountInt then
      ListBox1.Items.Add('Группа ' + groupmates[i][0].Group +
        '; Количество учащихся: ' + IntToStr(Length(groupmates[i])));
  end;
end;

procedure TMainForm.Button6Click(Sender: TObject);
var i: integer;
begin
  ListBox1.Clear;
  ListBox1.Items.Add('Студенты, рейтинг которых неменьше 60');
  for i := 0 to High(Repo.Students) do
    if Repo.Students[i].Rating >= 60 then
      ListBox1.Items.Add(Repo.Students[i].ToString);
end;

procedure TMainForm.Button7Click(Sender: TObject);
begin
  GistForm.Show;
end;

end.
