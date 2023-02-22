
// CGMFC20230221.h : main header file for the CGMFC20230221 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CCGMFC20230221App:
// See CGMFC20230221.cpp for the implementation of this class
//

class CCGMFC20230221App : public CWinApp
{
public:
	CCGMFC20230221App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCGMFC20230221App theApp;
