// OuterCOMExport.cpp : COuterCOMExport ��ʵ��
#include "stdafx.h"
#include "OuterCOMExport.h"
#include "comutil.h"


// COuterCOMExport



STDMETHODIMP COuterCOMExport::SetName(BSTR sName)
{
    // TODO:  �ڴ����ʵ�ִ���
    m_pName = _bstr_t(sName);
    return S_OK;
}


STDMETHODIMP COuterCOMExport::GetName(BSTR* sName)
{
    // TODO:  �ڴ����ʵ�ִ���
    *sName = ::SysAllocString(_bstr_t(m_pName));
    return S_OK;
}
