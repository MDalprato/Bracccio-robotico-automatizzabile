//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
TAboutBox *AboutBox;
//--------------------------------------------------------------------- 
__fastcall TAboutBox::TAboutBox(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall TAboutBox::OKButtonClick(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------


void __fastcall TAboutBox::FormClose(TObject *Sender, TCloseAction &Action)
{
Home->GroupBox1->Enabled = true ;
}
//---------------------------------------------------------------------------

