//---------------------------------------------------------------------------
#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class THome : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TMainMenu *MainMenu1;
        TMenuItem *Opzioni1;
        TMenuItem *Statoschedausb1;
        TMenuItem *Esci1;
        TMenuItem *Info1;
        TMenuItem *Informazionisulprogramma1;
        TMenuItem *Informazionisullosviluppatore1;
        TShape *spalla_giu;
        TShape *destra;
        TShape *spalla_su;
        TShape *sinistra;
        TShape *gomito_giu;
        TShape *gomito_su;
        TShape *polso_su;
        TShape *polso_giu;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TTimer *sensori_finecorsa;
        TTimer *wheel_down;
        TLabel *sts_pinza;
        TTimer *wheel_up;
        TShape *led_0;
        TLabel *Label10;
        TTimer *input_read;
        TLabel *usbsts;
        TLabel *wheel;
        TMenuItem *Mostrainformazionigenerali1;
        TLabel *prec_pinza;
        TLabel *sens_att;
        TLabel *c_sens;
        TTimer *weel_down_polso;
        TTimer *weel_up_polso;
        TTimer *weel_down_gomito;
        TTimer *weel_up_gomito;
        TTimer *weel_down_spalla;
        TTimer *weel_up_spalla;
        TMenuItem *MostraCOmnadiExtraRapidi1;
        TShape *centro;
        TMenuItem *Controllodatestiera1;
        TTimer *muovi_destra;
        TTimer *muovi_sinistra;
        TTimer *spalla_su_key;
        TTimer *spalla_giu_key;
	TMenuItem *Viewer1;
	TMenuItem *MostraWiever1;
        void __fastcall GroupBox1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall centroMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall spalla_giuMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall spalla_suMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall destraMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall sinistraMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall gomito_giuMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall gomito_suMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Esci1Click(TObject *Sender);
        void __fastcall polso_suMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall polso_giuMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall sensori_finecorsaTimer(TObject *Sender);
        void __fastcall wheel_downTimer(TObject *Sender);
        void __fastcall FormMouseWheelDown(TObject *Sender,
          TShiftState Shift, TPoint &MousePos, bool &Handled);
        void __fastcall FormMouseWheelUp(TObject *Sender,
          TShiftState Shift, TPoint &MousePos, bool &Handled);
        void __fastcall wheel_upTimer(TObject *Sender);
        void __fastcall led_0MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Informazionisulprogramma1Click(TObject *Sender);
        void __fastcall Informazionisullosviluppatore1Click(
          TObject *Sender);
        void __fastcall Statoschedausb1Click(TObject *Sender);
        void __fastcall input_readTimer(TObject *Sender);
        void __fastcall N1Click(TObject *Sender);
        void __fastcall Statoingressi1Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Mostrainformazionigenerali1Click(TObject *Sender);
        void __fastcall weel_down_polsoTimer(TObject *Sender);
        void __fastcall weel_up_polsoTimer(TObject *Sender);
        void __fastcall weel_down_gomitoTimer(TObject *Sender);
        void __fastcall weel_up_gomitoTimer(TObject *Sender);
        void __fastcall weel_down_spallaTimer(TObject *Sender);
        void __fastcall weel_up_spallaTimer(TObject *Sender);
        void __fastcall MostraCOmnadiExtraRapidi1Click(TObject *Sender);
        void __fastcall Opzioni1Click(TObject *Sender);
        void __fastcall Controllodatestiera1Click(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall muovi_destraTimer(TObject *Sender);
        void __fastcall muovi_sinistraTimer(TObject *Sender);
        void __fastcall spalla_su_keyTimer(TObject *Sender);
        void __fastcall spalla_giu_keyTimer(TObject *Sender);
	void __fastcall MostraWiever1Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall THome(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THome *Home;
//---------------------------------------------------------------------------
#endif
