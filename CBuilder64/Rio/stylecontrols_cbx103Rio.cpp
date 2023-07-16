//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop
USEFORMNS("scOpenFileDialog.pas", Scopenfiledialog, scOpenFileDlgForm);
USEFORMNS("scPrinterDialog.pas", Scprinterdialog, scPrintDlgFrm);
USEFORMNS("scSelectPathDialog.pas", Scselectpathdialog, scSelPathDlgForm);
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
