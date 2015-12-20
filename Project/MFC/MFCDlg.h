
// MFCDlg.h : 头文件
//

#pragma once


typedef struct _ThreadInfo
{
    int m_nRange;
    HWND m_hWnd;
}ThreadInfo;

UINT ThreadProc(LPVOID pvParam);

// CMFCDlg 对话框
class CMFCDlg : public CDialogEx
{
// 构造
public:
	CMFCDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
    afx_msg HRESULT OnMessage(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButton1();


private:
    CWinThread *m_pThread;
    ThreadInfo m_info;
public:
    CString m_sText;
};
