//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop
USEFORMNS("scOpenFileDialog.pas", Scopenfiledialog, scOpenFileDlgForm);
USEFORMNS("scSelectPathDialog.pas", Scselectpathdialog, scSelPathDlgForm);
USEFORMNS("scPrinterDialog.pas", Scprinterdialog, scPrintDlgFrm);
USEFORMNS("scColorDialog.pas", Sccolordialog, scColorDlgFrm);
USEFORMNS("scBitmapEditor.pas", Scbitmapeditor, scBitmapEditorForm);
USEFORMNS("scFontViewer.pas", Scfontviewer, FontViewerForm);
USEFORMNS("scFontDialog.pas", Scfontdialog, scFontDlgFrm);
USEFORMNS("scMsgDialog.pas", Scmsgdialog, scMsgDlgForm);
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
