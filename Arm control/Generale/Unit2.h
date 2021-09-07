//----------------------------------------------------------------------------
#ifndef Unit2H
#define Unit2H
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
#include <Menus.hpp>
//----------------------------------------------------------------------------
class Tkeyboard : public TForm
{
__published:
        TTimer *pos_automatik;
        TMainMenu *MainMenu1;
        TMenuItem *Opzioni1;
        TMenuItem *Disattivaancoraggiopadre1;
        TGroupBox *GroupBox1;
        TButton *OKBtn;
        TMemo *Memo1;
        void __fastcall pos_automatikTimer(TObject *Sender);
        void __fastcall OKBtnClick(TObject *Sender);
        void __fastcall Disattivaancoraggiopadre1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:
public:
	virtual __fastcall Tkeyboard(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE Tkeyboard *keyboard;
//----------------------------------------------------------------------------
#endif    
