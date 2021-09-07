//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tviewer *viewer;
//---------------------------------------------------------------------------
__fastcall Tviewer::Tviewer(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tviewer::Esci1Click(TObject *Sender)
{
Close();	
}
//---------------------------------------------------------------------------

