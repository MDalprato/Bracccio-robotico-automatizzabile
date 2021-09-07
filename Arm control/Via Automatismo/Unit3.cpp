//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
Tview *view;
//---------------------------------------------------------------------
__fastcall Tview::Tview(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------

void __fastcall Tview::Esci1Click(TObject *Sender)
{
Close();	
}
//---------------------------------------------------------------------------

void __fastcall Tview::Timer1Timer(TObject *Sender)
{
Shape1->Brush->Color = clBlue ;
Shape2->Brush->Color = clBlue ;
Shape3->Brush->Color = clBlue ;
Shape4->Brush->Color = clBlue ;
Shape6->Brush->Color = clBlue ;


}
//---------------------------------------------------------------------------

void __fastcall Tview::FormActivate(TObject *Sender)
{
Form1->Left = 50 ;
view->Left = Form1->Left + Form1->Width  + 10 ;
}
//---------------------------------------------------------------------------

