﻿// MyDlg2.cpp: 实现文件
//

#include "pch.h"
#include "4.7-2.h"
#include "MyDlg2.h"
#include "afxdialogex.h"


// MyDlg2 对话框

IMPLEMENT_DYNAMIC(MyDlg2, CDialogEx)

MyDlg2::MyDlg2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(_T(""))
	, y(_T(""))
{

}

MyDlg2::~MyDlg2()
{
}

void MyDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
}


BEGIN_MESSAGE_MAP(MyDlg2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg2::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg2 消息处理程序


void MyDlg2::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString s;
	  this->UpdateData(true);
	s = x;
	x = y;
	y = s;
	UpdateData(false);

}
