
// CGMFC20230221View.h : interface of the CCGMFC20230221View class
//

#pragma once


class CCGMFC20230221View : public CView
{
protected: // create from serialization only
	CCGMFC20230221View() noexcept;
	DECLARE_DYNCREATE(CCGMFC20230221View)

// Attributes
public:
	CCGMFC20230221Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CCGMFC20230221View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CGMFC20230221View.cpp
inline CCGMFC20230221Doc* CCGMFC20230221View::GetDocument() const
   { return reinterpret_cast<CCGMFC20230221Doc*>(m_pDocument); }
#endif

