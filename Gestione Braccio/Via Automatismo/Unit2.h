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
//----------------------------------------------------------------------------
class Tproject_name : public TForm
{
__published:        
	TButton *OKBtn;
	TButton *CancelBtn;
	TBevel *Bevel1;
	TEdit *Edit1;
	TLabel *Label1;
	void __fastcall CancelBtnClick(TObject *Sender);
	void __fastcall OKBtnClick(TObject *Sender);
private:
public:
	virtual __fastcall Tproject_name(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE Tproject_name *project_name;
//----------------------------------------------------------------------------
#endif    
