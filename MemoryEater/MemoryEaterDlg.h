// MemoryEaterDlg.h : header file
//

#pragma once


// CMemoryEaterDlg dialog
class CMemoryEaterDlg : public CDialog
{
// Construction
public:
	CMemoryEaterDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MEMORYEATER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnStart();
	DECLARE_MESSAGE_MAP()
};
