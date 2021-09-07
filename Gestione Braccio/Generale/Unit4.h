//----------------------------------------------------------------------------
#ifndef Unit4H
#define Unit4H
//----------------------------------------------------------------------------
#include <vcl\System.hpp>
#include <vcl\Windows.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Classes.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\ExtCtrls.hpp>
#include <jpeg.hpp>
//----------------------------------------------------------------------------
class TAboutBox1 : public TForm
{
__published:
	TPanel *Panel1;
	TLabel *ProductName;
	TLabel *Version;
	TLabel *Copyright;
	TLabel *Comments;
	TButton *OKButton;
        TImage *Image1;
	TImage *Image2;
        void __fastcall OKButtonClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:
public:
	virtual __fastcall TAboutBox1(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TAboutBox1 *AboutBox1;
//----------------------------------------------------------------------------
#endif    
