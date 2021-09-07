
//---------------------------------------------------------------------------
#include <vcl.h>
#include <fotone.h>
#include <usb.h>
#pragma hdrstop

#include "Unit1.h"

#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THome *Home;
Fotone* object = new Fotone();
//******************** dichiarazione variabili pubbliche *************

int   time1=0  ; // variabile di tempo rotellina mouse
int led=0 ;   // stato della luce led
int xy =0; // stato informazioni visibili o no
int ab =0; // stato menu comandi extra rapidi
int ac =0 ; // sato menu keyboard
int gie =0 ; // abilitazione generale tastiera


//---------------------------------------------------------------------------
__fastcall THome::THome(TComponent* Owner)
        : TForm(Owner)
{


// ** Controlla se la scheda USB è conessa
if ( object->Connect())
{
// conessa
object->OutputWriteAll(0); // resetta tutte le porte
GroupBox1->Enabled = true ;
usbsts->Caption = "Scheda USB conessa";



}
else
{
// non conessa
Close();
}




}
//---------------------------------------------------------------------------

void __fastcall THome::GroupBox1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
// **** Resetto colori ******
centro->Brush->Color = clWhite ;
sinistra->Brush->Color = clWhite ;
destra->Brush->Color = clWhite ;
spalla_su->Brush->Color = clWhite ;
spalla_giu->Brush->Color = clWhite ;
gomito_su->Brush->Color = clWhite ;
gomito_giu->Brush->Color = clWhite ;
polso_su->Brush->Color = clWhite ;
polso_giu->Brush->Color = clWhite ;


viewer->Shape2->Brush->Color = clBlue ;
viewer->Shape3->Brush->Color = clBlue ;
viewer->Shape4->Brush->Color = clBlue ;
viewer->Shape5->Brush->Color = clBlue ;
viewer->Shape6->Brush->Color = clBlue ;




object->OutputReset(0);
object->OutputReset(1);
object->OutputReset(2);
object->OutputReset(3);
object->OutputReset(4);
object->OutputReset(5);
object->OutputReset(6);




}
//---------------------------------------------------------------------------


void __fastcall THome::centroMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{

//***** Coloro di blu e fermo tutti i movimenti ****
centro->Brush->Color = clBlue ;



}
//---------------------------------------------------------------------------


void __fastcall THome::spalla_giuMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
// **** muovi spalla in giu ****
spalla_giu->Brush->Color = clBlue ;
viewer->Shape3->Brush->Color = clRed ;
object->OutputSet(1);
object->OutputSet(6);


}
//---------------------------------------------------------------------------

void __fastcall THome::spalla_suMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
// **** muovi spalla in su ****
spalla_su->Brush->Color = clBlue ;
viewer->Shape3->Brush->Color = clRed ;

object->OutputSet(1);
object->OutputSet(5);


}
//---------------------------------------------------------------------------


void __fastcall THome::destraMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
// **** muovi a destra ****
destra->Brush->Color = clBlue ;
viewer->Shape4->Brush->Color = clRed ;
object->OutputSet(2);
object->OutputSet(6);

}
//---------------------------------------------------------------------------

void __fastcall THome::sinistraMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
// **** muovi a sinistra ****
sinistra->Brush->Color = clBlue ;
viewer->Shape4->Brush->Color = clRed ;
object->OutputSet(2);
object->OutputSet(5);

}
//---------------------------------------------------------------------------

void __fastcall THome::gomito_giuMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
// **** muovi gomito in giu ****
gomito_giu->Brush->Color = clBlue ;
viewer->Shape2->Brush->Color = clRed ;
object->OutputSet(1);
object->OutputSet(4);

}
//---------------------------------------------------------------------------

void __fastcall THome::gomito_suMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
// **** muovi gomito in su ****
gomito_su->Brush->Color = clBlue ;
viewer->Shape2->Brush->Color = clRed ;
object->OutputSet(1);
object->OutputSet(3);

}
//---------------------------------------------------------------------------

void __fastcall THome::Esci1Click(TObject *Sender)
{
GroupBox1->Enabled = false ;
Close();        
}
//---------------------------------------------------------------------------

void __fastcall THome::polso_suMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
// **** muovi gomito in giu ****
polso_su->Brush->Color = clBlue ;
viewer->Shape5->Brush->Color = clRed ;
object->OutputSet(2);
object->OutputSet(4);
led_0->Brush->Color = clWhite ;
}
//---------------------------------------------------------------------------

void __fastcall THome::polso_giuMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
// **** muovi gomito in giu ****
polso_giu->Brush->Color = clBlue ;
viewer->Shape5->Brush->Color = clRed ;
object->OutputSet(2);
object->OutputSet(3);
led_0->Brush->Color = clWhite ;
}
//---------------------------------------------------------------------------

void __fastcall THome::sensori_finecorsaTimer(TObject *Sender)
{

//************ Finecorsa di polso in giu **************
if ( object->InputRead(6))
{
if ( polso_su->Brush->Color == clBlue)
{
polso_su->Enabled = false ;
polso_su->Brush->Color = clRed;
object->OutputReset(2);
object->OutputReset(4);
Beep();
}
}
else
{
polso_su->Enabled = true ;
}
//***********************************************

//************ Finecorsa di sinistra **************
if ( object->InputRead(1))
{
if ( sinistra->Brush->Color == clBlue)
{
sinistra->Enabled = false ;
sinistra->Brush->Color = clRed;
object->OutputReset(2);
object->OutputReset(5);
Beep();
}
}
else
{
sinistra->Enabled = true ;
}
//***********************************************






//************ Finecorsa di destra **************
if ( object->InputRead(0))
{

if ( destra->Brush->Color == clBlue)
{

destra->Enabled = false ;
destra->Brush->Color = clRed;
object->OutputReset(2);
object->OutputReset(6);
Beep();
}
}
else
{
destra->Enabled = true ;
}
//***********************************************



//************ Finecorsa spalla in su **************
if ( object->InputRead(2))
{
if ( spalla_su->Brush->Color == clBlue)
{
spalla_su->Enabled = false ;
spalla_su->Brush->Color = clRed;
object->OutputReset(1);
object->OutputReset(6);
Beep();
}
}
else
{
spalla_su->Enabled = true ;
}
//***********************************************




//************ Finecorsa spalla in giu **************
if ( object->InputRead(3))
{
if ( spalla_giu->Brush->Color == clBlue)
{
spalla_giu->Enabled = false ;
spalla_giu->Brush->Color = clRed;
object->OutputReset(1);
object->OutputReset(5);
Beep();
}
}
else
{
spalla_giu->Enabled = true ;
}
//***********************************************



//************ Finecorsa gomito in giu **************
if ( object->InputRead(4))
{
if ( gomito_giu->Brush->Color == clBlue)
{
gomito_giu->Enabled = false ;
gomito_giu->Brush->Color = clRed;
object->OutputReset(1);
object->OutputReset(4);
Beep();
}
}
else
{
gomito_giu->Enabled = true ;
}
//***********************************************



















}
//---------------------------------------------------------------------------





void __fastcall THome::wheel_downTimer(TObject *Sender)
{

// **************************************************************************
// ********** Routine per l'apertura della pinza ****************************
// **************************************************************************

if ( time1 == 2 )
{
time1 =0;
sts_pinza->Caption = "Pinza ferma" ;
wheel_down->Enabled = false ;
object->OutputReset(0);
object->OutputReset(5);
GroupBox1->Enabled = true ;

}
else
{
time1 = time1 + 1 ;
sts_pinza->Caption = "Apertura Pinza" ;
object->OutputSet(0);
object->OutputSet(5);
GroupBox1->Enabled = false ;


}

// **************************************************************************
// **************************************************************************
// **************************************************************************

}
//---------------------------------------------------------------------------


void __fastcall THome::FormMouseWheelDown(TObject *Sender,
      TShiftState Shift, TPoint &MousePos, bool &Handled)
{
viewer->Shape6->Brush->Color = clRed ;


if ( PagesDlg->w_pinza->Checked == true )
{
wheel_down->Enabled = true ;
}

if ( PagesDlg->w_polso->Checked == true )
{
weel_up_polso->Enabled = true ;
}

if ( PagesDlg->w_gomito->Checked == true )
{
weel_down_gomito->Enabled = true ;
}


if ( PagesDlg->w_spalla->Checked == true )
{
weel_down_spalla->Enabled = true ;
}

}
//---------------------------------------------------------------------------



void __fastcall THome::FormMouseWheelUp(TObject *Sender, TShiftState Shift,
      TPoint &MousePos, bool &Handled)
{
viewer->Shape6->Brush->Color = clRed ;



if ( PagesDlg->w_pinza->Checked == true )
{
wheel_up->Enabled = true ;
}

if ( PagesDlg->w_polso->Checked == true )
{
weel_down_polso->Enabled = true ;
}

if ( PagesDlg->w_gomito->Checked == true )
{
weel_up_gomito->Enabled = true ;
}

if ( PagesDlg->w_spalla->Checked == true )
{
weel_up_spalla->Enabled = true ;
}




}
//---------------------------------------------------------------------------

void __fastcall THome::wheel_upTimer(TObject *Sender)
{

//************ Finecorsa della pinza **************

if ( object->InputRead(5))
{
wheel_up->Enabled = false ;
object->OutputReset(0);
object->OutputReset(6);

}

else
{
// **************************************************************************
// ********** Routine per la chiusura della pinza ***************************
// **************************************************************************

if ( time1 == 2 )
{
time1 =0;
sts_pinza->Caption = "Pinza Ferma" ;
wheel_up->Enabled = false ;
object->OutputReset(0);
object->OutputReset(6);
GroupBox1->Enabled = true ;


}
else
{
time1 = time1 + 1 ;
sts_pinza->Caption = "Chiusura Pinza" ;
object->OutputSet(0);
object->OutputSet(6);
GroupBox1->Enabled = false ;


}

// **************************************************************************
// **************************************************************************
// **************************************************************************

}
}
//---------------------------------------------------------------------------

void __fastcall THome::led_0MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{

led = !led ;
if ( led == 1 )
{
led_0->Brush->Color = clBlue ;
object->OutputSet(7);


}
else
{
led_0->Brush->Color = clWhite ;
object->OutputReset(7);

}


}
//---------------------------------------------------------------------------


void __fastcall THome::FormClose(TObject *Sender, TCloseAction &Action)
{
object->OutputWriteAll(0); // resetta tutte le porte        
}
//---------------------------------------------------------------------------


void __fastcall THome::Informazionisulprogramma1Click(TObject *Sender)
{
AboutBox->Visible = true ;
GroupBox1->Enabled = false ;
}
//---------------------------------------------------------------------------



void __fastcall THome::Informazionisullosviluppatore1Click(TObject *Sender)
{
AboutBox1->Visible = true ;
GroupBox1->Enabled = false ;
}
//---------------------------------------------------------------------------

void __fastcall THome::Statoschedausb1Click(TObject *Sender)
{
PagesDlg->Visible = true ;
GroupBox1->Enabled = false ;
}
//---------------------------------------------------------------------------

void __fastcall THome::input_readTimer(TObject *Sender)
{


wheel_up->Interval = wheel->Caption.ToInt();
wheel_down->Interval = wheel->Caption.ToInt();

weel_up_polso->Interval = wheel->Caption.ToInt();
weel_down_polso->Interval = wheel->Caption.ToInt();


weel_up_gomito->Interval = wheel->Caption.ToInt();
weel_down_gomito->Interval = wheel->Caption.ToInt();

weel_up_spalla->Interval = wheel->Caption.ToInt();
weel_down_spalla->Interval = wheel->Caption.ToInt();

// informazioni per il form dlg ********************************
PagesDlg->ing_read->Caption = object->InputReadAll();
sens_att->Caption = object->InputReadAll();
PagesDlg->Usb_status->Caption = "Scheda USB conessa corettamente" ;
//**************************************************************

// ** lettura ingressi e riporto nella form dlg ****************

//****INGRESo 0 **********************

if ( object->InputRead(0))
{
PagesDlg->CheckBox1->Checked = true ;
PagesDlg->CheckBox1->Color = clRed ;
rapidi->s1->Checked = true ;
}
else
{
PagesDlg->CheckBox1->Checked = false ;
PagesDlg->CheckBox1->Color = clSilver;
rapidi->s1->Checked = false ;
}

// ************************************

// *** INGRESSo 1 *********************

if ( object->InputRead(1))
{
PagesDlg->CheckBox2->Checked = true ;
PagesDlg->CheckBox2->Color = clRed ;
rapidi->s2->Checked = true ;
}
else
{
PagesDlg->CheckBox2->Checked = false ;
PagesDlg->CheckBox2->Color = clSilver;
rapidi->s2->Checked = false ;

}

// ************************************

// *** INGRESSo 2 *********************

if ( object->InputRead(2))
{
PagesDlg->CheckBox3->Checked = true ;
PagesDlg->CheckBox3->Color = clRed ;
rapidi->s3->Checked = true ;
}
else
{
PagesDlg->CheckBox3->Checked = false ;
PagesDlg->CheckBox3->Color = clSilver;
rapidi->s3->Checked = false ;
}

// ************************************

// *** INGRESSo 3 *********************

if ( object->InputRead(3))
{
PagesDlg->CheckBox4->Checked = true ;
PagesDlg->CheckBox4->Color = clRed ;
rapidi->s4->Checked = true ;
}
else
{
PagesDlg->CheckBox4->Checked = false ;
PagesDlg->CheckBox4->Color = clSilver;
rapidi->s4->Checked = false ;
}

// ************************************


// *** INGRESSo 4 *********************

if ( object->InputRead(4))
{
PagesDlg->CheckBox5->Checked = true ;
PagesDlg->CheckBox5->Color = clRed ;
rapidi->s5->Checked = true ;
}
else
{
PagesDlg->CheckBox5->Checked = false ;
PagesDlg->CheckBox5->Color = clSilver;
rapidi->s5->Checked = false ;
}

// ************************************

// *** INGRESSo 5 *********************

if ( object->InputRead(5))
{
PagesDlg->CheckBox6->Checked = true ;
PagesDlg->CheckBox6->Color = clRed ;
rapidi->s6->Checked = true ;
}
else
{
PagesDlg->CheckBox6->Checked = false ;
PagesDlg->CheckBox6->Color = clSilver;
rapidi->s6->Checked = false ;
}

// ************************************

// *** INGRESSo 6 *********************

if ( object->InputRead(6))
{
PagesDlg->CheckBox7->Checked = true ;
PagesDlg->CheckBox7->Color = clRed ;
rapidi->s7->Checked = true ;
}
else
{
PagesDlg->CheckBox7->Checked = false ;
PagesDlg->CheckBox7->Color = clSilver;
rapidi->s7->Checked = false ;
}

// ************************************

// *** INGRESSo 7 *********************

if ( object->InputRead(7))
{
PagesDlg->CheckBox8->Checked = true ;
PagesDlg->CheckBox8->Color = clRed ;
rapidi->s8->Checked = true ;
}
else
{
PagesDlg->CheckBox8->Checked = false ;
PagesDlg->CheckBox8->Color = clSilver;
rapidi->s8->Checked = false ;
}

// ************************************

// ************** fine lettura *****************************************
















}
//---------------------------------------------------------------------------


void __fastcall THome::N1Click(TObject *Sender)
{
GroupBox1->Enabled = false ;
        
}
//---------------------------------------------------------------------------

void __fastcall THome::Statoingressi1Click(TObject *Sender)
{
GroupBox1->Enabled = false ;        
}
//---------------------------------------------------------------------------


void __fastcall THome::Button1Click(TObject *Sender)
{
PagesDlg->Usb_status->Caption = "ciao" ;
}
//---------------------------------------------------------------------------





void __fastcall THome::Mostrainformazionigenerali1Click(TObject *Sender)
{

if (xy==0 )
{
xy = 1;
usbsts->Visible = true ;
wheel->Visible = true ;
prec_pinza->Visible = true ;
sts_pinza->Visible = true ;
sens_att->Visible = true ;
c_sens->Visible = true ;
Mostrainformazionigenerali1->Caption = "Nascondi infromazioni generali" ;

}
else
{

xy = 0;
usbsts->Visible = false ;
wheel->Visible = false ;
prec_pinza->Visible = false ;
sts_pinza->Visible = false ;
sens_att->Visible = false ;
c_sens->Visible = false ;
Mostrainformazionigenerali1->Caption = "Mostra infromazioni generali" ;

}



}
//---------------------------------------------------------------------------



void __fastcall THome::weel_down_polsoTimer(TObject *Sender)
{

// **************************************************************************
// ********** Routine per spostamento polso ****************************
// **************************************************************************
if ( object->InputRead(6))
{
weel_down_polso->Enabled = false ;
}
else
{
if ( time1 == 2 )
{
time1 =0;
weel_down_polso->Enabled = false ;
object->OutputReset(2);
object->OutputReset(4);
GroupBox1->Enabled = true ;

}
else
{
time1 = time1 + 1 ;
object->OutputSet(2);
object->OutputSet(4);
GroupBox1->Enabled = false ;


}
}

// **************************************************************************
// **************************************************************************
// **************************************************************************

}
//---------------------------------------------------------------------------


void __fastcall THome::weel_up_polsoTimer(TObject *Sender)
{

// **************************************************************************
// ********** Routine per spostamento polso ****************************
// **************************************************************************

if ( time1 == 2 )
{
time1 =0;
weel_up_polso->Enabled = false ;
object->OutputReset(2);
object->OutputReset(3);
GroupBox1->Enabled = true ;

}
else
{
time1 = time1 + 1 ;
object->OutputSet(2);
object->OutputSet(3);
GroupBox1->Enabled = false ;


}

// **************************************************************************
// **************************************************************************
// **************************************************************************
}
//---------------------------------------------------------------------------

void __fastcall THome::weel_down_gomitoTimer(TObject *Sender)
{

// **************************************************************************
// ********** Routine per spostamento gomito****************************
// **************************************************************************



if ( time1 == 2 )
{
time1 =0;
weel_down_gomito->Enabled = false ;
object->OutputReset(1);
object->OutputReset(3);
GroupBox1->Enabled = true ;

}
else
{
time1 = time1 + 1 ;
object->OutputSet(1);
object->OutputSet(3);
GroupBox1->Enabled = false ;



}

}
//---------------------------------------------------------------------------


void __fastcall THome::weel_up_gomitoTimer(TObject *Sender)
{

// **************************************************************************
// ********** Routine per spostamento gomito****************************
// **************************************************************************

if ( object->InputRead(4))
{
weel_down_gomito->Enabled = false ;
 object->OutputReset(1);
object->OutputReset(3);
}
else
{

if ( time1 == 2 )
{
time1 =0;
weel_up_gomito->Enabled = false ;
object->OutputReset(1);
object->OutputReset(4);
GroupBox1->Enabled = true ;

}
else
{
time1 = time1 + 1 ;
object->OutputSet(1);
object->OutputSet(4);
GroupBox1->Enabled = false ;


}
}
}
//---------------------------------------------------------------------------

void __fastcall THome::weel_down_spallaTimer(TObject *Sender)
{

// **************************************************************************
// ********** Routine per spostamento spalla****************************
// **************************************************************************

if ( object->InputRead(2))
{
weel_down_spalla->Enabled = false ;
object->OutputReset(1);
object->OutputReset(5);
}
else
{
if ( time1 == 2 )
{
time1 =0;
weel_down_spalla->Enabled = false ;
object->OutputReset(1);
object->OutputReset(5);
GroupBox1->Enabled = true ;

}
else
{
time1 = time1 + 1 ;
object->OutputSet(1);
object->OutputSet(5);
GroupBox1->Enabled = false ;


}
}
}
//---------------------------------------------------------------------------

void __fastcall THome::weel_up_spallaTimer(TObject *Sender)
{

// **************************************************************************
// ********** Routine per spostamento spalla****************************
// **************************************************************************

if ( object->InputRead(3))
{
weel_up_spalla->Enabled = false ;
object->OutputReset(1);
object->OutputReset(6);
}
else
{
if ( time1 == 2 )
{
time1 =0;
weel_up_spalla->Enabled = false ;
object->OutputReset(1);
object->OutputReset(6);
GroupBox1->Enabled = true ;

}
else
{
time1 = time1 + 1 ;
object->OutputSet(1);
object->OutputSet(6);
GroupBox1->Enabled = false ;


}
}
}

//---------------------------------------------------------------------------


void __fastcall THome::MostraCOmnadiExtraRapidi1Click(TObject *Sender)
{


if ( ab == 0 )
{
ab = 1 ;
// apro il form e imposto di mettorlo vicino a lui
rapidi->Visible = true ;
rapidi->Left =  Home->Width + Home->Left + 10   ;
rapidi->Top = Home->Top ;
rapidi->pos_auto->Enabled = true ;
MostraCOmnadiExtraRapidi1->Caption = "Nascondi comandi rapidi" ;

}
else
{
ab = 0 ;
MostraCOmnadiExtraRapidi1->Caption = "Mostra Comandi Extra Rapidi";
rapidi->Visible = false ;

}

}
//---------------------------------------------------------------------------


void __fastcall THome::Opzioni1Click(TObject *Sender)
{
if ( rapidi->Visible ==false )
{
ab =0;
}
}
//---------------------------------------------------------------------------


void __fastcall THome::Controllodatestiera1Click(TObject *Sender)
{
if ( gie == 0 )
{

Home->SetFocus ();

GroupBox1->Enabled = false ;

gie = 1 ;

ac = 1 ;
Controllodatestiera1->Caption = "Disattiva controlli da tastiera" ;

}
else
{
GroupBox1->Enabled = true  ;

gie = 0 ;
ac = 0 ;
Controllodatestiera1->Caption = "Attiva controlli da tastiera" ;
}

}
//---------------------------------------------------------------------------






void __fastcall THome::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if ( gie ==1 )

{
//***** controllo tasti keyboard **********************************************
//*****************************************************************************

//************ tasto di destra ************************************************

if (GetAsyncKeyState('D'))
{
muovi_destra->Enabled = true ;

}
else
{
muovi_destra->Enabled = false ;
}
//************* tasto dii sinistra *******************************************
if (GetAsyncKeyState('A'))
{
muovi_sinistra->Enabled = true ;

}
else
{
muovi_sinistra->Enabled = false ;
}
//************* tasto spalla su *******************************************
if (GetAsyncKeyState('W'))
{
spalla_su_key->Enabled = true ;

}
else
{
spalla_su_key->Enabled = false ;
}
//************* tasto spalla giu*******************************************

if (GetAsyncKeyState('S'))
{
spalla_giu_key->Enabled = true ;

}
else
{
spalla_giu_key->Enabled = false ;
}













}



}
//---------------------------------------------------------------------------





void __fastcall THome::muovi_destraTimer(TObject *Sender)
{
// **************** CODIFICA GENERICA LETTURA DATO E APPLICAZIONE MOVIMENTO ****

if ( object->InputRead(0))    // LETTURA FINECORSA
{
                               // FINECORSA ATTIVO
}
else
{                               // FINECORSA NON ATTIVO
if (GetAsyncKeyState('D'))
{
// **** muovi a destra ****
destra->Brush->Color = clBlue ;
object->OutputSet(2);
object->OutputSet(6);
}
else
{
destra->Brush->Color = clWhite ;
object->OutputReset(2);
object->OutputReset(6);
muovi_destra->Enabled = false ;
}
}






}
//---------------------------------------------------------------------------

void __fastcall THome::muovi_sinistraTimer(TObject *Sender)
{
// **************** CODIFICA GENERICA LETTURA DATO E APPLICAZIONE MOVIMENTO ****

if ( object->InputRead(1))    // LETTURA FINECORSA
{
                               // FINECORSA ATTIVO
}
else
{                               // FINECORSA NON ATTIVO
if (GetAsyncKeyState('A'))
{
// **** muovi a destra ****
sinistra->Brush->Color = clBlue ;
object->OutputSet(2);
object->OutputSet(5);
}
else
{
sinistra->Brush->Color = clWhite ;
object->OutputReset(2);
object->OutputReset(5);
muovi_sinistra->Enabled = false ;
}
}

}
//---------------------------------------------------------------------------

void __fastcall THome::spalla_su_keyTimer(TObject *Sender)
{
// **************** CODIFICA GENERICA LETTURA DATO E APPLICAZIONE MOVIMENTO ****

if ( object->InputRead(3))    // LETTURA FINECORSA
{
spalla_giu->Brush->Color = clRed ;
spalla_su_key->Enabled = false ;
object->OutputReset(1);
object->OutputReset(6);
                               // FINECORSA ATTIVO
}
else
{                               // FINECORSA NON ATTIVO
if (GetAsyncKeyState('W'))
{
// **** muovi a destra ****
spalla_giu->Brush->Color = clBlue ;
object->OutputSet(1);
object->OutputSet(6);
}
else
{
spalla_giu->Brush->Color = clWhite ;
object->OutputReset(1);
object->OutputReset(6);
spalla_su_key->Enabled = false ;
}
}
}
//---------------------------------------------------------------------------



void __fastcall THome::spalla_giu_keyTimer(TObject *Sender)
{
// **************** CODIFICA GENERICA LETTURA DATO E APPLICAZIONE MOVIMENTO ****

if ( object->InputRead(2))    // LETTURA FINECORSA
{
spalla_su->Brush->Color = clRed ;
spalla_giu_key->Enabled = false ;
object->OutputReset(1);
object->OutputReset(5);
                               // FINECORSA ATTIVO
}
else
{                               // FINECORSA NON ATTIVO
if (GetAsyncKeyState('S'))
{
// **** muovi a destra ****
spalla_su->Brush->Color = clBlue ;
object->OutputSet(1);
object->OutputSet(5);
}
else
{
spalla_su->Brush->Color = clWhite ;
object->OutputReset(1);
object->OutputReset(5);
spalla_giu_key->Enabled = false ;
}
}
}
//---------------------------------------------------------------------------





void __fastcall THome::MostraWiever1Click(TObject *Sender)
{
viewer->Visible = true ;
viewer->Top = Home->Top ;
viewer->Left = Home->Left + Home->Width + 20 ;
}
//---------------------------------------------------------------------------




void __fastcall THome::FormActivate(TObject *Sender)
{
object->OutputWriteAll (0);




}
//---------------------------------------------------------------------------



