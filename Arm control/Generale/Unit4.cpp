//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
TAboutBox1 *AboutBox1;
//--------------------------------------------------------------------- 
__fastcall TAboutBox1::TAboutBox1(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall TAboutBox1::OKButtonClick(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------


void __fastcall TAboutBox1::FormClose(TObject *Sender,
      TCloseAction &Action)
{
Home->GroupBox1->Enabled = true ;

}
//---------------------------------------------------------------------------

