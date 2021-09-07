//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit1.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
Tfltxt *fltxt;
//--------------------------------------------------------------------- 
__fastcall Tfltxt::Tfltxt(TComponent* AOwner)
	: TOKBottomDlg(AOwner)
{
}
//--------------------------------------------------------------------- 
void __fastcall Tfltxt::HelpBtnClick(TObject *Sender)
{
	Application->HelpContext(HelpContext);
}
//---------------------------------------------------------------------

void __fastcall Tfltxt::CancelBtnClick(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall Tfltxt::FormActivate(TObject *Sender)
{
Azioni->Text = Form1->lista_azioni->Items->Text ;
Tempi->Text = Form1->lista_tempo->Items->Text ;

}
//---------------------------------------------------------------------------


void __fastcall Tfltxt::OKBtnClick(TObject *Sender)
{

Form1->lista_azioni->Items->Text =  Azioni->Text ;


Form1->lista_tempo->Items->Text = Tempi->Text ;
Close();

}
//---------------------------------------------------------------------------

