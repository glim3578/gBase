
// gBase.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CgBaseApp:
// �� Ŭ������ ������ ���ؼ��� gBase.cpp�� �����Ͻʽÿ�.
//

class CgBaseApp : public CWinApp
{
public:
	CgBaseApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CgBaseApp theApp;