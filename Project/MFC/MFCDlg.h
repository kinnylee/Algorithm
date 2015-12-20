
// MFCDlg.h : ͷ�ļ�
//

#pragma once


typedef struct _ThreadInfo
{
    int m_nRange;
    HWND m_hWnd;
}ThreadInfo;

UINT ThreadProc(LPVOID pvParam);

// CMFCDlg �Ի���
class CMFCDlg : public CDialogEx
{
// ����
public:
	CMFCDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
