//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("Automatik.res");
USEFORM("Unit1.cpp", Form1);
USELIB("..\..\Interfaccia USB\Per Builder\lib\libfotone.lib");
USELIB("..\..\Interfaccia USB\Per Builder\lib\libusb.lib");
USEFORM("Unit2.cpp", project_name);
USEFORM("Unit3.cpp", view);
USEFORM("Unit4.cpp", info);
USEFORM("Unit5.cpp", driv);
USEFORM("Unit6.cpp", Form6);
USEFORM("Unit7.cpp", Help);
USEFORM("Unit8.cpp", saves);
USEFORM("..\..\..\..\..\PROGRAMMI\BORLAND\CBUILDER4\OBJREPOS\OKCANCL1.cpp", OKBottomDlg);
USEFORM("Unit9.cpp", fltxt);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(Tproject_name), &project_name);
                 Application->CreateForm(__classid(Tview), &view);
                 Application->CreateForm(__classid(Tinfo), &info);
                 Application->CreateForm(__classid(Tdriv), &driv);
                 Application->CreateForm(__classid(TForm6), &Form6);
                 Application->CreateForm(__classid(THelp), &Help);
                 Application->CreateForm(__classid(Tsaves), &saves);
                 Application->CreateForm(__classid(Tfltxt), &fltxt);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
