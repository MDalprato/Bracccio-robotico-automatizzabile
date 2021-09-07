//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
Tdriv *driv;
//---------------------------------------------------------------------
__fastcall Tdriv::Tdriv(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------


void __fastcall Tdriv::Timer1Timer(TObject *Sender)
{
Shape1->Brush->Color = clWhite ;
Shape2->Brush->Color = clWhite ;
Shape3->Brush->Color = clWhite ;
Shape4->Brush->Color = clWhite ;
Shape5->Brush->Color = clWhite ;
}
//---------------------------------------------------------------------------


