//----------------------------------------------------------------------------
#ifndef Unit7H
#define Unit7H
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
#include <ComCtrls.hpp>
//----------------------------------------------------------------------------
class THelp : public TForm
{
__published:        
	TButton *OKBtn;
	TBevel *Bevel1;
        TRichEdit *RichEdit1;
        void __fastcall OKBtnClick(TObject *Sender);
private:
public:
	virtual __fastcall THelp(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE THelp *Help;
//----------------------------------------------------------------------------
#endif    
