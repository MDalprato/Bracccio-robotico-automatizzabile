//---------------------------------------------------------------------
#include <vcl.h>

#pragma hdrstop
// include i form AboutBox
#include "Unit1.h"
#include "Unit4.h"
#include "Unit3.h"
#include "Unit5.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
int inibisci =0 ;
TPagesDlg *PagesDlg;

//---------------------------------------------------------------------
__fastcall TPagesDlg::TPagesDlg(TComponent* AOwner)
	: TForm(AOwner)
{
if ( Home->usbsts->Caption =="Scheda USB conessa" )
{
sand_data->Caption = "Interfaccia libera , è possibile comunicare";
}
else
{
sand_data->Caption = "Testativo di conessione fallito ";
}

}
//---------------------------------------------------------------------

void __fastcall TPagesDlg::CancelBtnClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------





void __fastcall TPagesDlg::HelpBtnClick(TObject *Sender)
{
AboutBox->Visible = true ;
}
//---------------------------------------------------------------------------





void __fastcall TPagesDlg::OKBtnClick(TObject *Sender)
{
Close();

}
//---------------------------------------------------------------------------

void __fastcall TPagesDlg::FormClose(TObject *Sender, TCloseAction &Action)
{
Home->GroupBox1->Enabled = true ;
}
//---------------------------------------------------------------------------

void __fastcall TPagesDlg::ScrollBar1Change(TObject *Sender)
{
n_wheel->Caption = ScrollBar1->Position ;
Home->wheel->Caption =    ScrollBar1->Position ;


}
//---------------------------------------------------------------------------




void __fastcall TPagesDlg::w_pinzaClick(TObject *Sender)
{
// se selzionato , abilito gestione pinza
if ( w_pinza->Checked == true )
{
GroupBox1->Caption = "Sensibilità pinza" ;

}

}
//---------------------------------------------------------------------------

void __fastcall TPagesDlg::w_polsoClick(TObject *Sender)
{
// se selzionato , abilito gestione polso
if ( w_polso->Checked == true )
{
GroupBox1->Caption = "Sensibilità polso" ;

}
}
//---------------------------------------------------------------------------

void __fastcall TPagesDlg::w_spallaClick(TObject *Sender)
{
// se selzionato , abilito gestione spalla
if ( w_spalla->Checked == true )
{
GroupBox1->Caption = "Sensibilità spalla" ;

}
}
//---------------------------------------------------------------------------

void __fastcall TPagesDlg::w_gomitoClick(TObject *Sender)
{
// se selzionato , abilito gestione gomito
if ( w_gomito->Checked == true )
{
GroupBox1->Caption = "Sensibilità gomito" ;

}
}
//---------------------------------------------------------------------------




void __fastcall TPagesDlg::CheckBox9Click(TObject *Sender)
{

if (CheckBox9->Checked ==true  )
{
Home->sensori_finecorsa->Enabled = false ;

}
else
{

Home->sensori_finecorsa->Enabled = true ;
}

}
//---------------------------------------------------------------------------


