//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit1.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
Tsaves *saves;
//---------------------------------------------------------------------
__fastcall Tsaves::Tsaves(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------


void __fastcall Tsaves::CancelBtnClick(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall Tsaves::OKBtnClick(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall Tsaves::CheckBox1Click(TObject *Sender)
{

if (  CheckBox1->Checked == true )
{
Form1->autosave->Enabled = true ;
Form1->autos->Checked = true ;
CheckBox1->Checked = true ;
}
else
{
Form1->autosave->Enabled = false ;
Form1->autos->Checked = false ;
CheckBox1->Checked = false ;
}
}
//---------------------------------------------------------------------------

void __fastcall Tsaves::TrackBar1Change(TObject *Sender)
{
CheckBox1->Checked = false ;
Form1->autosave->Interval =  TrackBar1->Position * 60 * 1000;
Label4->Caption =     TrackBar1->Position        ;
}
//---------------------------------------------------------------------------

