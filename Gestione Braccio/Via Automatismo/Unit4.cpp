//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
Tinfo *info;
//--------------------------------------------------------------------- 
__fastcall Tinfo::Tinfo(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------

void __fastcall Tinfo::OKButtonClick(TObject *Sender)
{
Close();	
}
//---------------------------------------------------------------------------

void __fastcall Tinfo::Timer1Timer(TObject *Sender)
{

if ( Copyright->Left < 120 )

{

Copyright->Left =  Copyright->Left +1 ;
}

else
{

Timer2->Enabled = true ;
Timer1->Enabled = false; ;

}



}
//---------------------------------------------------------------------------

void __fastcall Tinfo::Timer2Timer(TObject *Sender)
{

Copyright->Left =  Copyright->Left -1   ;

if ( Copyright->Left < 8 )

{

Timer1->Enabled = true ;
Timer2->Enabled = false; ;


}


}
//---------------------------------------------------------------------------

