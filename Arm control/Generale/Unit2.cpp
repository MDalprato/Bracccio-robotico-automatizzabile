//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Windows.h"

#include "Unit2.h"
#include "Unit1.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
Tkeyboard *keyboard;
int pos1 = 0 ; // ***** varibile di stallo posizionamneto
//---------------------------------------------------------------------
__fastcall Tkeyboard::Tkeyboard(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall Tkeyboard::pos_automatikTimer(TObject *Sender)
{


keyboard->Top = Home->Top ;
keyboard->Left = Home->Left - keyboard->Width - 10 ;
}
//---------------------------------------------------------------------------

void __fastcall Tkeyboard::OKBtnClick(TObject *Sender)
{
Close ();
   
}
//---------------------------------------------------------------------------










void __fastcall Tkeyboard::Disattivaancoraggiopadre1Click(TObject *Sender)

{
if ( pos1 == 0 )
{
pos_automatik->Enabled = false ;
pos1 = 1 ;
Disattivaancoraggiopadre1->Caption= "Attiva ancoraggio padre " ;
}
else
{
pos_automatik->Enabled = true  ;
pos1 = 0 ;
Disattivaancoraggiopadre1->Caption= "Disattiva ancoraggio padre" ;
}


}
//---------------------------------------------------------------------------




















void __fastcall Tkeyboard::FormClose(TObject *Sender, TCloseAction &Action)
{
Home->GroupBox1->Enabled = true ;

Home->Controllodatestiera1->Caption = "Mostra controlli da tastiera" ;

}
//---------------------------------------------------------------------------


