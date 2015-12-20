
// MFCDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC.h"
#include "MFCDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCDlg 对话框



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


// CMFCDlg 消息处理程序

BOOL CMFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
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
        AfxMessageBox(L"创建线程失败");
        return;
    }
}

HRESULT CMFCDlg::OnMessage(WPARAM wParam, LPARAM lParam)
{
    if (wParam == 0 && lParam == -1)
    {
        AfxMessageBox(L"完成");
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
