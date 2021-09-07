//---------------------------------------------------------------------------
#include <vcl.h>
#include <fotone.h>
#include <stdio.h>
#include <time.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TForm1 *Form1;
Fotone *object = new Fotone ;

// *********** Dichiarazione varibili pubbliche *****************************

int ck1 = 0 ; // variabile del clock
int posizione = 0; // posizione item delle 2 listbox
int fattsmor = 0 ; // fattore di smorzamento ... un marone !




//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{





if ( object->Connect())
{

}
else
{
Close();
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Esci1Click(TObject *Sender)
{
Close();
object->OutputWriteAll(0);
       
}
//---------------------------------------------------------------------------

void __fastcall TForm1::closeClick(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::clear_listsClick(TObject *Sender)
{
// ****** cancella le liste *************************************************

lista_azioni->Items->Clear();
lista_tempo->Items->Clear();

lista_azioni->Items->Add ( "########### Automatik v 1.0.0 ############" );
lista_tempo->Items->Add ("2") ;

lista_azioni->Items->Add ( "############# Inizio Script ##############" );
lista_tempo->Items->Add ("2") ;

lista_tempo->ItemIndex = 0 ;
lista_azioni->ItemIndex = 0 ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::lista_azioniClick(TObject *Sender)
{
coreggi->Text = lista_azioni->Items->Strings[lista_azioni->ItemIndex] ;
Edit1->Text =  lista_tempo->Items->Strings[lista_azioni->ItemIndex] ;

// seleziono stessa poszione nell'altra lista

lista_tempo->ItemIndex = lista_azioni->ItemIndex ;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::lista_tempoClick(TObject *Sender)
{

// seleziono stessa poszione nell'altra lista

lista_azioni->ItemIndex = lista_tempo->ItemIndex ;


}
//---------------------------------------------------------------------------


void __fastcall TForm1::inserisciClick(TObject *Sender)
{
StatusBar1->SimpleText = "Inserimento azione e tempo" ;


// **** inserisco tempo e azione nelle rispettive liste

        if (azioni->Text == "Seleziona Azione" )
{
// Rilascia messaggio di errore se non si seleziona nessun operazione

  Application->MessageBox("Attenzione , selezionare "
			    "un'azione da eseguire .",
                            NULL, NULL);


}
        else
{

lista_azioni->Items->Add ( azioni->Text ) ;

lista_tempo->Items->Add ( durata->Text ) ;


}

}


//---------------------------------------------------------------------------


void __fastcall TForm1::ckTimer(TObject *Sender)
{
// ******************** TIMER DEL CLOCK **************************************

ck1 = ck1 + 1; // **** incremento clock
ck1_label->Caption = ck1 ;

// ***************************************************************************

}
//---------------------------------------------------------------------------














void __fastcall TForm1::FormCreate(TObject *Sender)
{
lista_azioni->Items->Add ( "########### Automatik v 1.0.0 ############" );
lista_tempo->Items->Add ("2") ;

lista_azioni->Items->Add ( "############# Inizio Script ##############" );
lista_tempo->Items->Add ("2") ;

lista_tempo->ItemIndex = 0 ;
lista_azioni->ItemIndex = 0 ;



}
//---------------------------------------------------------------------------


void __fastcall TForm1::clockTimer(TObject *Sender)
{

// **** conteggio timer *****
ck1 = ck1 + 1 ;
ck1_label->Caption = ck1 ;
// **************************

}
//---------------------------------------------------------------------------

void __fastcall TForm1::timer_avvioTimer(TObject *Sender)
{
// **** EFFETTUA UN CONTROLLO E SCENDE DI SELEZIONE *********************

int a = lista_tempo->Items->Capacity ;

if (  lista_tempo->Items->Capacity == lista_tempo->ItemIndex +1 )
{
// **** se raggiunto il massimo livello
clock->Enabled = false ;
ck1_label->Caption  = "0" ;
ck1 = 0 ;
timer_avvio->Enabled = false ;

}
else
{



if ( ck1 == lista_tempo->Items->Strings[lista_tempo->ItemIndex].ToInt()  )

{


ck1 = 0 ; // resetto conteggio
lista_azioni->ItemIndex = lista_azioni->ItemIndex + 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex + 1  ;
object->OutputWriteAll(0);


}
}
}

//---------------------------------------------------------------------------


void __fastcall TForm1::startClick(TObject *Sender)
{
autosave->Enabled = false ;

StatusBar1->SimpleText = "Avvio esecuzione programma" ;
// avvia timer

//*************

avvio->Enabled = true ;
lista_azioni->ItemIndex = posizione ;
timer_avvio->Enabled = true ;
clock->Enabled = true ;

azione_tmr->Enabled = true ;


// **** Cambio blocco sistema ****

lista_azioni->ItemIndex = lista_azioni->Items->Capacity - 1 ;
lista_tempo->ItemIndex = lista_tempo->Items->Capacity - 1 ;

lista_azioni->Items->Strings[lista_azioni->ItemIndex] =  "########### END TERMINAL ############" ;

lista_tempo->Items->Strings[lista_tempo->ItemIndex] = "2" ;

lista_azioni->ItemIndex = posizione ;
lista_tempo->ItemIndex = posizione ;



}
//---------------------------------------------------------------------------





void __fastcall TForm1::azione_tmrTimer(TObject *Sender)
{
// **** lettura azione ******

azione_label->Caption =  lista_azioni->Items->Strings[lista_azioni->ItemIndex];

// **** lettura durata ******

timing->Caption =  lista_tempo->Items->Strings[lista_tempo->ItemIndex] + " unità" ;

	
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
if ( lista_azioni->ItemIndex == lista_azioni->Items->Capacity -1 )
{
}
else
{

lista_azioni->ItemIndex = lista_azioni->ItemIndex + 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex + 1  ;
}

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{

if (  lista_azioni->ItemIndex == 0 )
{
lista_azioni->ItemIndex = 0 ;
lista_tempo->ItemIndex  = 0 ;
}
else
{
lista_azioni->ItemIndex = lista_azioni->ItemIndex - 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex - 1  ;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{




if ( lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "############# Inizio Script ##############" )
{
// da non eseguire
  Application->MessageBox("Attenzione , non è possibile cancellare  "
			    "l'azione di inizio script",
                            NULL, NULL);
}
else
{

if ( lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "########### Automatik v 1.0.0 ############" )
{
// da non eseguire
  Application->MessageBox("Attenzione , non è possibile cancellare  "
			    "l'azione di intestazione ",
                            NULL, NULL);
}
else
{




      if (coreggi->Text == "Seleziona Azione" )
{
// Rilascia messaggio di errore se non si seleziona nessun operazione

  Application->MessageBox("Attenzione , selezionare "
			    "un'azione da coreggere.",
                            NULL, NULL);


}
        else
{
lista_azioni->Items->Strings[lista_azioni->ItemIndex] = coreggi->Text ;
lista_tempo->Items->Strings[lista_tempo->ItemIndex] = Edit1->Text ;
}
}
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
object->OutputWriteAll(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
object->OutputWriteAll(0);
ck1 = 0 ;
clock->Enabled = false ;
avvio->Enabled = false ;
azione_tmr->Enabled = false ;
timer_avvio->Enabled = false ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::avvioTimer(TObject *Sender)
{

// ***************** TIMER PER I MOVIMENTI ****************************

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "########### END TERMINAL ############")
{

avvio->Enabled = false ;

if (  autos->Checked == true )
{
autosave->Enabled = true ;
}
else
{
autosave->Enabled = false ;
}



}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Return")
{

object->OutputWriteAll(0);
ck1 = 0 ;
clock->Enabled = false ;
avvio->Enabled = false ;
azione_tmr->Enabled = false ;
timer_avvio->Enabled = false ;

StatusBar1->SimpleText = "Avvio esecuzione programma" ;
// avvia timer

//*************

avvio->Enabled = true ;
lista_azioni->ItemIndex = posizione ;
timer_avvio->Enabled = true ;
clock->Enabled = true ;

azione_tmr->Enabled = true ;


// **** Cambio blocco sistema ****

lista_azioni->ItemIndex = lista_azioni->Items->Capacity - 1 ;
lista_tempo->ItemIndex = lista_tempo->Items->Capacity - 1 ;

lista_tempo->Items->Strings[lista_tempo->ItemIndex] = "2" ;

lista_azioni->ItemIndex = posizione;
lista_tempo->ItemIndex = posizione ;



}



if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Open Viewer")
{
view->Visible = true ;

}


if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Open Out")
{
driv->Visible = true ;

}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Close Out")
{
driv->Visible = false ;

}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Close Viewer")
{
view->Visible = false ;

}



if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Muovi a destra")
{

object->OutputSet (2);
object->OutputSet (6);
view->Shape1->Brush->Color = clRed ;

driv->Shape1->Brush->Color = clRed ;


}


if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Muovi a destra - auto")
{
if ( object->InputRead(0))
{
object->OutputReset (2);
object->OutputReset (6);

ck1 = 0 ; // resetto conteggio
lista_azioni->ItemIndex = lista_azioni->ItemIndex + 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex + 1  ;
object->OutputWriteAll(0);


}
else
{
object->OutputSet (2);
object->OutputSet (6);
view->Shape1->Brush->Color = clRed ;
driv->Shape1->Brush->Color = clRed ;
}
}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Muovi a sinistra - auto")
{
if ( object->InputRead(1))
{
object->OutputReset (2);
object->OutputReset (5);

ck1 = 0 ; // resetto conteggio
lista_azioni->ItemIndex = lista_azioni->ItemIndex + 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex + 1  ;
object->OutputWriteAll(0);
}
else
{
object->OutputSet (2);
object->OutputSet (5);
view->Shape1->Brush->Color = clRed ;
driv->Shape1->Brush->Color = clRed ;
}
}


if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Muovi a sinistra")
{
object->OutputSet (2);
object->OutputSet (5);
view->Shape1->Brush->Color = clRed ;
driv->Shape1->Brush->Color = clRed ;



}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Spalla in su")
{
object->OutputSet (1);
object->OutputSet (5);
view->Shape2->Brush->Color = clRed ;
driv->Shape2->Brush->Color = clRed ;



}


if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Spalla in giu")
{
object->OutputSet (1);
object->OutputSet (6);
view->Shape2->Brush->Color = clRed ;
driv->Shape2->Brush->Color = clRed ;




}


if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Gomito in su")
{
object->OutputSet (1);
object->OutputSet (3);
view->Shape3->Brush->Color = clRed ;
driv->Shape3->Brush->Color = clRed ;




}
if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Gomito in giu")
{
object->OutputSet (1);
object->OutputSet (4);
view->Shape3->Brush->Color = clRed ;
driv->Shape3->Brush->Color = clRed ;




}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Polso in su")
{
object->OutputSet (2);
object->OutputSet (3);
view->Shape4->Brush->Color = clRed ;
driv->Shape4->Brush->Color = clRed ;




}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Polso in giu")
{
object->OutputSet (2);
object->OutputSet (4);
view->Shape4->Brush->Color = clRed ;
driv->Shape4->Brush->Color = clRed ;


}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Polso in giu - auto")
{
if ( object->InputRead(6))
{
object->OutputReset (2);
object->OutputReset (4);

ck1 = 0 ; // resetto conteggio
lista_azioni->ItemIndex = lista_azioni->ItemIndex + 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex + 1  ;
object->OutputWriteAll(0);

}
else
{
object->OutputSet (2);
object->OutputSet (4);
view->Shape4->Brush->Color = clRed ;
driv->Shape4->Brush->Color = clRed ;
}
}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Chiudi pinza - auto")
{
if ( object->InputRead(5))
{
object->OutputReset (0);
object->OutputReset (6);


}
else
{
object->OutputSet (0);
object->OutputSet (6);
view->Shape6->Brush->Color = clRed ;
driv->Shape5->Brush->Color = clRed ;
}
}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Gomito in giu - auto")
{
if ( object->InputRead(4))
{
object->OutputReset (1);
object->OutputReset (4);

ck1 = 0 ; // resetto conteggio
lista_azioni->ItemIndex = lista_azioni->ItemIndex + 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex + 1  ;
object->OutputWriteAll(0);
}
else
{
object->OutputSet (1);
object->OutputSet (4);
view->Shape3->Brush->Color = clRed ;
driv->Shape3->Brush->Color = clRed ;
}
}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Spalla in giu - auto")
{
if ( object->InputRead(3))
{
object->OutputReset (1);
object->OutputReset (6);

ck1 = 0 ; // resetto conteggio
lista_azioni->ItemIndex = lista_azioni->ItemIndex + 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex + 1  ;
object->OutputWriteAll(0);
}
else
{
object->OutputSet (1);
object->OutputSet (6);
view->Shape2->Brush->Color = clRed ;
driv->Shape2->Brush->Color = clRed ;
}
}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Spalla in su - auto")
{
if ( object->InputRead(2))
{
object->OutputReset (1);
object->OutputReset (5);

ck1 = 0 ; // resetto conteggio
lista_azioni->ItemIndex = lista_azioni->ItemIndex + 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex + 1  ;
object->OutputWriteAll(0);
}
else
{
object->OutputSet (1);
object->OutputSet (5);
view->Shape2->Brush->Color = clRed ;
driv->Shape2->Brush->Color = clRed ;
}
}




if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Apri pinza")
{
object->OutputSet (0);
object->OutputSet (5);
view->Shape6->Brush->Color = clRed ;
driv->Shape5->Brush->Color = clRed ;



}
if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Chiudi pinza")
{

object->OutputSet (0);
object->OutputSet (6);
view->Shape6->Brush->Color = clRed ;
driv->Shape5->Brush->Color = clRed ;

}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Accendi Led")
{

object->OutputSet (7);


}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Spegni Led")
{

object->OutputReset (7);


}




}
//---------------------------------------------------------------------------

void __fastcall TForm1::azioniChange(TObject *Sender)
{

if ( azioni->Text == "End Terminal" )
{
start->Enabled = true ;
}

if ( azioni->Text == "Muovi a sinistra - auto" )
{

}

if ( azioni->Text == "Muovi a destra - auto" )
{

}

if ( azioni->Text == "Spalla in su - auto" )
{

}

if ( azioni->Text == "Spalla in giu - auto" )
{

}

if ( azioni->Text == "Gomito in giu - auto" )
{

}

if ( azioni->Text == "Polso in giu - auto" )
{

}










}
//---------------------------------------------------------------------------

void __fastcall TForm1::ritorn_BTClick(TObject *Sender)
{

lista_azioni->ItemIndex = posizione ;
timer_avvio->Enabled = true ;
clock->Enabled = true ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ritClick(TObject *Sender)
{
timer_avvio->Enabled = false ;
// avvia timer

//*************


avvio->Enabled = false ;




clock->Enabled = true ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ritornoTimer(TObject *Sender)
{

// ***************** TIMER PER I MOVIMENTI di ritorno****************************


if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Muovi a destra")
{
object->OutputSet (2);
object->OutputSet (5);




}


if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Muovi a sinistra")
{
object->OutputSet (2);
object->OutputSet (6);




}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Spalla in su")
{
object->OutputSet (1);
object->OutputSet (6);




}


if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Spalla in giu")
{
object->OutputSet (1);
object->OutputSet (5);




}


if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Gomito in su")
{
object->OutputSet (1);
object->OutputSet (4);




}
if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Gomito in giu")
{
object->OutputSet (1);
object->OutputSet (3);




}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Polso in su")
{
object->OutputSet (2);
object->OutputSet (4);



}

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Polso in giu")
{
object->OutputSet (2);
object->OutputSet (3);



}
if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Apri pinza")
{
object->OutputSet (0);
object->OutputSet (6);




}
if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "Chiudi pinza")
{
object->OutputSet (0);
object->OutputSet (5);





}

// ********************** fine

if (lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "############# Inizio Script ##############"  )
{
avvio->Enabled = false ;


}





}
//---------------------------------------------------------------------------

void __fastcall TForm1::timer_ritornoTimer(TObject *Sender)
{


if (  lista_tempo->ItemIndex == 0 )
{
// **** se raggiunto il massimo livello

clock->Enabled = false ;
ck1_label->Caption  = "0" ;
ck1 = 0 ;
timer_avvio->Enabled = false ;

}
else
{



if ( ck1 == lista_tempo->Items->Strings[lista_tempo->ItemIndex].ToInt()  )

{



ck1 = 0 ; // resetto conteggio
lista_azioni->ItemIndex = lista_azioni->ItemIndex - 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex - 1  ;
object->OutputWriteAll(0);


}
}
}
//---------------------------------------------------------------------------











void __fastcall TForm1::Caricalistaazioni1Click(TObject *Sender)
{

timer_avvio->Enabled = false ;
avvio->Enabled = false ;
azione_tmr->Enabled = false ;
object->OutputWriteAll(0);



if(OpenDialog1->Execute())
{


lista_azioni->Items->LoadFromFile(OpenDialog1->FileName);
StatusBar1->SimpleText = "Caricato progetto  " + OpenDialog1->FileName  ;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Aprilistatempi1Click(TObject *Sender)
{
timer_avvio->Enabled = false ;
avvio->Enabled = false ;
azione_tmr->Enabled = false ;
object->OutputWriteAll(0);


StatusBar1->SimpleText = "Apertura file in corso ..." ;
if(OpenDialog2->Execute())
{
lista_tempo->Items->LoadFromFile(OpenDialog2->FileName);
StatusBar1->SimpleText = "Caricato progetto" + OpenDialog2->FileName  ;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Salvalistaazioni1Click(TObject *Sender)
{
object->OutputWriteAll(0);
StatusBar1->SimpleText = "Salvataggio file in corso ..." ;

SaveDialog1->FileName = Label6->Caption + ".mka" ; ;

if ( SaveDialog1->Execute() )
  {
    lista_azioni->Items->SaveToFile(SaveDialog1->FileName);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Salvalistaazioni2Click(TObject *Sender)
{
object->OutputWriteAll(0);
StatusBar1->SimpleText = "Salvataggio file in corso ..." ;
SaveDialog2->FileName = Label6->Caption + ".mkt" ;
if ( SaveDialog2->Execute() )
  {
    lista_tempo->Items->SaveToFile(SaveDialog2->FileName);
  }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormActivate(TObject *Sender)
{
StatusBar1->SimpleText = "Automatik Control Software avviato correttamente" ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::brTimer(TObject *Sender)
{
if ( barsave->Position == barsave->Max )
{
barsave->Position = 0 ;
}

barsave->Position =  barsave->Position + 100;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Inserisci1Click(TObject *Sender)
{

StatusBar1->SimpleText = "Avvio esecuzione programma" ;
// avvia timer

//*************

avvio->Enabled = true ;
lista_azioni->ItemIndex = posizione ;
timer_avvio->Enabled = true ;
clock->Enabled = true ;

azione_tmr->Enabled = true ;


// **** Cambio blocco sistema ****

lista_azioni->ItemIndex = lista_azioni->Items->Capacity - 1 ;
lista_tempo->ItemIndex = lista_tempo->Items->Capacity - 1 ;

lista_azioni->Items->Strings[lista_azioni->ItemIndex] =  "########### END TERMINAL ############" ;

lista_tempo->Items->Strings[lista_tempo->ItemIndex] = "2" ;

lista_azioni->ItemIndex = posizione ;
lista_tempo->ItemIndex = posizione ;


	
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Fermabraccio1Click(TObject *Sender)
{
object->OutputWriteAll(0);
ck1 = 0 ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Up1Click(TObject *Sender)
{

if (  lista_azioni->ItemIndex == 0 )
{
lista_azioni->ItemIndex = 0 ;
lista_tempo->ItemIndex  = 0 ;
}
else
{
lista_azioni->ItemIndex = lista_azioni->ItemIndex - 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex - 1  ;
}
	
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cancellaliste1Click(TObject *Sender)
{
// ****** cancella le liste *************************************************

lista_azioni->Items->Clear();
lista_tempo->Items->Clear();

lista_azioni->Items->Add ( "########### Automatik v 1.0.0 ############" );
lista_tempo->Items->Add ("2") ;

lista_azioni->Items->Add ( "############# Inizio Script ##############" );
lista_tempo->Items->Add ("2") ;

lista_tempo->ItemIndex = 0 ;
lista_azioni->ItemIndex = 0 ;	
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Down1Click(TObject *Sender)
{
if ( lista_azioni->ItemIndex == lista_azioni->Items->Capacity -1 )
{
}
else
{

lista_azioni->ItemIndex = lista_azioni->ItemIndex + 1  ;
lista_tempo->ItemIndex = lista_tempo->ItemIndex + 1  ;
}	
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Correggi1Click(TObject *Sender)
{



if ( lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "############# Inizio Script ##############" )
{
// da non eseguire
  Application->MessageBox("Attenzione , non è possibile cancellare  "
			    "l'azione di inizio script",
                            NULL, NULL);
}
else
{

if ( lista_azioni->Items->Strings[lista_azioni->ItemIndex] == "########### Automatik v 1.0.0 ############" )
{
// da non eseguire
  Application->MessageBox("Attenzione , non è possibile cancellare  "
			    "l'azione di intestazione ",
                            NULL, NULL);
}
else
{




      if (coreggi->Text == "Seleziona Azione" )
{
// Rilascia messaggio di errore se non si seleziona nessun operazione

  Application->MessageBox("Attenzione , selezionare "
			    "un'azione da coreggere.",
                            NULL, NULL);


}
        else
{
lista_azioni->Items->Strings[lista_azioni->ItemIndex] = coreggi->Text ;
lista_tempo->Items->Strings[lista_tempo->ItemIndex] = Edit1->Text ;
}
}
}
	
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Nomeprogetto1Click(TObject *Sender)
{
project_name->Visible = true ;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::MostraViewer1Click(TObject *Sender)
{
view->Visible = true ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SalvaProgetto1Click(TObject *Sender)
{
timer_avvio->Enabled = false ;
avvio->Enabled = false ;
azione_tmr->Enabled = false ;
object->OutputWriteAll(0);




SaveDialog1->FileName = Label6->Caption + ".mka" ; ;
SaveDialog2->FileName = Label6->Caption + ".mkt" ;

if ( SaveDialog1->Execute() )
  {
  if ( SaveDialog2->Execute() )
  {
    lista_azioni->Items->SaveToFile(SaveDialog1->FileName);
    lista_tempo->Items->SaveToFile(SaveDialog2->FileName);
    StatusBar1->SimpleText = "Progetto Salvato correttamente" ;
     }
  }



}
//---------------------------------------------------------------------------

void __fastcall TForm1::ApriProgetto1Click(TObject *Sender)
{
timer_avvio->Enabled = false ;
avvio->Enabled = false ;
azione_tmr->Enabled = false ;
object->OutputWriteAll(0);


if(OpenDialog1->Execute())
{

if(OpenDialog2->Execute())
{
lista_tempo->Items->LoadFromFile(OpenDialog2->FileName);
 lista_azioni->Items->LoadFromFile(OpenDialog1->FileName);
     StatusBar1->SimpleText = "Progetto Caricato correttamente" ;
     Form1->Caption = "Automatik Control Software for Mark 1 - "  +  (OpenDialog1->FileName      );


}




}



}
//---------------------------------------------------------------------------



void __fastcall TForm1::InformazioniSviluppatore1Click(TObject *Sender)
{
info->Visible = true ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InterrompiilProgramma1Click(TObject *Sender)
{
avvio->Enabled = false ;

object->OutputWriteAll (0);
ck1 = 0 ;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Mostrauscite1Click(TObject *Sender)
{
driv->Visible = true ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Help2Click(TObject *Sender)
{
Help->Visible = true ;
}
//---------------------------------------------------------------------------









void __fastcall TForm1::timeinbassoTimer(TObject *Sender)
{
// data e ora  *************************************

char dateStr [9];
char timeStr [9];
_strdate( dateStr);
_strtime( timeStr );

// **************************************************


  StatusBar1->SimpleText =  timeStr  ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::autosClick(TObject *Sender)
{
if (  autos->Checked == true )
{
br->Enabled = true ;
barsave->Max =   autosave->Interval ;

autosave->Enabled = true ;
saves->CheckBox1->Checked = true ;
}
else
{
barsave->Position = 0 ;
br->Enabled = false ;
autosave->Enabled = false ;
saves->CheckBox1->Checked = false ;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::autosaveTimer(TObject *Sender)
{

 br->Enabled = false ;

timer_avvio->Enabled = false ;
avvio->Enabled = false ;
azione_tmr->Enabled = false ;
object->OutputWriteAll(0);


autosave->Enabled = false ;


SaveDialog1->FileName = Label6->Caption + ".mka" ; ;
SaveDialog2->FileName = Label6->Caption + ".mkt" ;

  if ( SaveDialog1->Execute() )
  {

    autosave->Enabled = true ;
     br->Enabled = true ;



  if ( SaveDialog2->Execute() )
  {
    lista_azioni->Items->SaveToFile(SaveDialog1->FileName);
    lista_tempo->Items->SaveToFile(SaveDialog2->FileName);
    StatusBar1->SimpleText = "Progetto Salvato correttamente" ;
    autosave->Enabled = true ;
     br->Enabled = true ;


     }




  }
  else
  {
   autosave->Enabled = true ;
   br->Enabled = true ;
  
  }


}
//---------------------------------------------------------------------------





void __fastcall TForm1::Settaa20Minuti1Click(TObject *Sender)
{
autosave->Interval = 1200000 ;
autosave->Enabled = true ;
autos->Checked = true ;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Settaa30Minuti1Click(TObject *Sender)
{
autosave->Interval = 1800000 ;
autosave->Enabled = true ;
autos->Checked = true ;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Settaa1Minuto1Click(TObject *Sender)
{
saves->Visible = true ;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Elaboracomefileditesto1Click(TObject *Sender)
{
fltxt->Visible = true ;
}
//---------------------------------------------------------------------------

