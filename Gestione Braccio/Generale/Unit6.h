//----------------------------------------------------------------------------
#ifndef Unit6H
#define Unit6H
//----------------------------------------------------------------------------
#include <vcl\System.hpp>
#include <vcl\Windows.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Classes.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Controls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Menus.hpp>
//----------------------------------------------------------------------------
class Trapidi : public TForm
{
__published:        
	TButton *OKBtn;
        TGroupBox *GroupBox1;
        TTimer *pos_auto;
        TGroupBox *GroupBox6;
        TRadioButton *w_pinza1;
        TRadioButton *w_polso1;
        TRadioButton *w_spalla1;
        TRadioButton *w_gomito1;
        TScrollBar *ScrollBar1;
        TLabel *Label1;
        TGroupBox *GroupBox3;
        TRadioButton *s1;
        TRadioButton *s2;
        TRadioButton *s3;
        TRadioButton *s4;
        TRadioButton *s5;
        TRadioButton *s6;
        TRadioButton *s8;
        TRadioButton *s7;
        TMainMenu *MainMenu1;
        TMenuItem *Opzioni1;
        TMenuItem *Disattivaancoraggiopadre1;
        void __fastcall pos_autoTimer(TObject *Sender);
        void __fastcall OKBtnClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Disattivaancoraggiopadre1Click(TObject *Sender);
private:
public:
	virtual __fastcall Trapidi(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE Trapidi *rapidi;
//----------------------------------------------------------------------------
#endif    
