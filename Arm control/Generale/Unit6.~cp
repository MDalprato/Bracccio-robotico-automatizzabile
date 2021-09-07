//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"

#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
Trapidi *rapidi;
int auto1=0 ;
//---------------------------------------------------------------------
__fastcall Trapidi::Trapidi(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------

void __fastcall Trapidi::pos_autoTimer(TObject *Sender)
{
rapidi->Left =  Home->Width + Home->Left + 10   ;
rapidi->Top = Home->Top ;

PagesDlg->w_pinza->Checked = w_pinza1->Checked ;
PagesDlg->w_polso->Checked = w_polso1->Checked ;
PagesDlg->w_spalla->Checked = w_spalla1->Checked ;
PagesDlg->w_gomito->Checked = w_gomito1->Checked ;
PagesDlg->n_wheel->Caption = ScrollBar1->Position ;
PagesDlg->ScrollBar1->Position =  ScrollBar1->Position ;
}
//---------------------------------------------------------------------------

void __fastcall Trapidi::OKBtnClick(TObject *Sender)
{
Close ();


}
//---------------------------------------------------------------------------

void __fastcall Trapidi::FormClose(TObject *Sender, TCloseAction &Action)
{
pos_auto->Enabled = false ;
Home->MostraCOmnadiExtraRapidi1->Caption = "Mostra Comandi Extra Rapidi";
}
//---------------------------------------------------------------------------


void __fastcall Trapidi::FormActivate(TObject *Sender)
{

ScrollBar1->Position = PagesDlg->ScrollBar1->Position ;
}
//---------------------------------------------------------------------------


void __fastcall Trapidi::Disattivaancoraggiopadre1Click(TObject *Sender)
{
// **** procedura per disattivare il posizionamento automatico o meno
if ( auto1 == 0 )
{
pos_auto->Enabled = false ;
auto1 = 1  ;

Disattivaancoraggiopadre1->Caption = "Attiva ancoraggio padre" ;

}
else
{
pos_auto->Enabled = true  ;
auto1 = 0 ;
Disattivaancoraggiopadre1->Caption = "Disattiva ancoraggio padre" ;
}





}
//---------------------------------------------------------------------------


