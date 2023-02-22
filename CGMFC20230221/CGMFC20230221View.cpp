
// CGMFC20230221View.cpp : implementation of the CCGMFC20230221View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "CGMFC20230221.h"
#endif

#include "CGMFC20230221Doc.h"
#include "CGMFC20230221View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCGMFC20230221View

IMPLEMENT_DYNCREATE(CCGMFC20230221View, CView)

BEGIN_MESSAGE_MAP(CCGMFC20230221View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CCGMFC20230221View construction/destruction

CCGMFC20230221View::CCGMFC20230221View() noexcept
{
	// TODO: add construction code here

}

CCGMFC20230221View::~CCGMFC20230221View()
{
}

BOOL CCGMFC20230221View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CCGMFC20230221View drawing

void CCGMFC20230221View::OnDraw(CDC* /*pDC*/)
{
	CCGMFC20230221Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CCGMFC20230221View printing

BOOL CCGMFC20230221View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCGMFC20230221View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCGMFC20230221View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CCGMFC20230221View diagnostics

#ifdef _DEBUG
void CCGMFC20230221View::AssertValid() const
{
	CView::AssertValid();
}

void CCGMFC20230221View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCGMFC20230221Doc* CCGMFC20230221View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCGMFC20230221Doc)));
	return (CCGMFC20230221Doc*)m_pDocument;
}
#endif //_DEBUG


// CCGMFC20230221View message handlers
