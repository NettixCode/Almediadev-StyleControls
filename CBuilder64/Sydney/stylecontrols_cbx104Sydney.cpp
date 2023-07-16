//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop
USEFORMNS("scSelectPathDialog.pas", Scselectpathdialog, scSelPathDlgForm);
USEFORMNS("scMsgDialog.pas", Scmsgdialog, scMsgDlgForm);
USEFORMNS("scPrinterDialog.pas", Scprinterdialog, scPrintDlgFrm);
USEFORMNS("scOpenFileDialog.pas", Scopenfiledialog, scOpenFileDlgForm);
USEFORMNS("scColorDialog.pas", Sccolordialog, scColorDlgFrm);
USEFORMNS("scFontDialog.pas", Scfontdialog, scFontDlgFrm);
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Package source.
//---------------------------------------------------------------------------


#pragma argsused
extern "C" int _libmain(unsigned long reason)
{
	return 1;
}
//---------------------------------------------------------------------------
