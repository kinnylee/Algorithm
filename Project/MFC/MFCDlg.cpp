
// MFCDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC.h"
#include "MFCDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCDlg �Ի���



CMFCDlg::CMFCDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFCDlg::IDD, pParent)
    , m_sText(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCDlg, CDialogEx)
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    ON_BN_CLICKED(IDC_BUTTON1, &CMFCDlg::OnBnClickedButton1)
    ON_MESSAGE(WM_INFO, &CMFCDlg::OnMessage)
END_MESSAGE_MAP()


// CMFCDlg ��Ϣ�������

BOOL CMFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMFCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



UINT ThreadProc(LPVOID pvParam)
{
    ThreadInfo *info = (ThreadInfo*)pvParam;
    for (int i = 0; i < info->m_nRange; ++i)
    {
        ::PostMessage(info->m_hWnd, WM_INFO, i * 2, i);
    }
    ::PostMessage(info->m_hWnd, WM_INFO, 0, -1);
    return 0;
}

void CMFCDlg::OnBnClickedButton1()
{
    m_info.m_nRange = 10;
    m_info.m_hWnd = m_hWnd;
    m_pThread = AfxBeginThread(ThreadProc, &m_info);
    if (nullptr == m_pThread)
    {
        AfxMessageBox(L"�����߳�ʧ��");
        return;
    }
}

HRESULT CMFCDlg::OnMessage(WPARAM wParam, LPARAM lParam)
{
    if (wParam == 0 && lParam == -1)
    {
        AfxMessageBox(L"���");
    }
    else
    {
        if (lParam)
        {
            AfxMessageBox(L"hello");
            Sleep(lParam * 1000);
        }
    }
    return 0;
}
