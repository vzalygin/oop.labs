unit addStudent;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls,
  Domain, repository;

type

  { TAddStudentForm }

  TAddStudentForm = class(TForm)
    Button1: TButton;
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Edit4: TEdit;
    procedure Button1Click(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private

  public

  end;

var
  AddStudentForm: TAddStudentForm;

implementation

{$R *.lfm}

{ TAddStudentForm }

procedure TAddStudentForm.FormShow(Sender: TObject);
begin
  Edit1.Clear;
  Edit2.Clear;
  Edit3.Clear;
  Edit4.Clear;
end;

procedure TAddStudentForm.Button1Click(Sender: TObject);
var student: TStudent;
begin
  student.Init(edit1.text, edit2.text, edit3.text, StrToInt(edit4.text));
  Repo.Append(student);
  Hide;
end;

end.

