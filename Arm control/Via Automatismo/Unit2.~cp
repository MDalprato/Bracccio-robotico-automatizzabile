//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
Tproject_name *project_name;
//---------------------------------------------------------------------
__fastcall Tproject_name::Tproject_name(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------


void __fastcall Tproject_name::CancelBtnClick(TObject *Sender)
{
  Application->MessageBox("Attenzione , Non verrà creato nessun progetto "
			    ,
                            NULL, NULL);


Close();
}
//---------------------------------------------------------------------------

void __fastcall Tproject_name::OKBtnClick(TObject *Sender)
{
Form1->SalvaProgetto1->Caption = "Salva Progetto  -  " +  Edit1->Text  ;
Form1->Caption =  "Automatik Control Software for Mark 1  -  " + Edit1->Text ;
Form1->Label6->Caption =  Edit1->Text  ;
Close();

}
//---------------------------------------------------------------------------

