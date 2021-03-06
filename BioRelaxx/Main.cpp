//01/16/2010 C. Germany Visual Studio 2008 MFC Template
/*
Notes: This is a MFC template to create graphical C++ apps without
using the Visual Studio 2008 wizards. It is stripped down to
a bare minimum of code so apps are as simplified as possible.
You must disable some automated features and manually set a
few properties for projects using this template.
1. Create an EMPTY Win32 project. Click -> "File" -> -> "New"
-> "Project" -> "Win32" -> "Win32 Project".
2. Name is and select a directory.
3. Select "Application Settings" -> "Empty Project" then click "Finish".
4. Rt-click project, select "Properties" -> "Configuration Properties"
-> "General" -> "Use of MFC" and change it to
"Use MFC in a Static Library". This will give you MFC components.
5. Disable Incremental Linking. Rt-click project, select "Properties"
-> "Configuration Properties" -> "Linker" -> "General" ->
"Enable Incremental Linking" and set it to "NO".
6. Add a resources file. Rt-click resources and add a DIALOG object.
7. Change the enumerated constant to match the Dialog name.
8. Note that unlike 2003, when calling SetWindowText() in 2008 the
string passed in must be cast/converted using "L".
*/
//-----------------------------------------------------------------------------------------
#include <afxwin.h>      //MFC core and standard components
#include "resource.h"    //main symbols
//-----------------------------------------------------------------------------------------
//Globals
//-------------Buttons-----------------------
CButton * pTRAININGSTART;
CButton * pAUDIO;
CButton * pDESIGN;
CButton * pBENUTZER;
CButton * pHILFE;
CButton * pINFO;
CButton * pBEENDEN;
//---------------------------------------------
CEdit * pHEADERBENUTZER;
//--------Images-------------------------------------
CStatic* pSTATICBOTTOM;
CStatic* pSTATICTOPLEFT;
CStatic* pSTATICTOP;
CStatic* pSTATICLEFT;
CStatic* pSTATICMIDDLE;
//------------------------------------------------

class BioRelaxx_FORM : public CDialog
{
public:
	BioRelaxx_FORM(CWnd* pParent = NULL) : CDialog(BioRelaxx_FORM::IDD, pParent)
	{    }
	// Dialog Data, name of dialog form
	enum { IDD = IDD_INTERFACE1 };
protected:
	virtual void DoDataExchange(CDataExchange* pDX) { CDialog::DoDataExchange(pDX); }
	//Called right after constructor. Initialize things here.
	virtual BOOL OnInitDialog()
	{
		CDialog::OnInitDialog();
	//		TEST = (CEdit *)GetDlgItem(IDC_TEST);
	//		TEST->SetWindowText(L"Hello!");
		pTRAININGSTART = (CButton*) GetDlgItem(CB_TRAININGSTART);
		pAUDIO = (CButton*)GetDlgItem(CB_AUDIO);
		pDESIGN = (CButton*)GetDlgItem(CB_DESIGN);
		pBENUTZER = (CButton*)GetDlgItem(CB_BENUTZER);
		pHILFE = (CButton*)GetDlgItem(CB_HILFE);
		pINFO = (CButton*)GetDlgItem(CB_INFO);
		pBEENDEN = (CButton*)GetDlgItem(CB_BEENDEN);
		pHEADERBENUTZER = (CEdit*)GetDlgItem()



		return true;
	}
public:
	DECLARE_MESSAGE_MAP()
};
//-----------------------------------------------------------------------------------------
class TheGame : public CWinApp
{
public:
	TheGame() {  }
public:
	virtual BOOL InitInstance()
	{
		CWinApp::InitInstance();
//		SetRegistryKey(_T("Hills Of Darkness"));
		BioRelaxx_FORM dlg;
		m_pMainWnd = &dlg;
		INT_PTR nResponse = dlg.DoModal();
		return FALSE;
	} //close function
};
//-----------------------------------------------------------------------------------------
//Need a Message Map Macro for both CDialog and CWinApp
BEGIN_MESSAGE_MAP(BioRelaxx_FORM, CDialog)
END_MESSAGE_MAP()
//-----------------------------------------------------------------------------------------
TheGame theApp;  //Starts the Application

