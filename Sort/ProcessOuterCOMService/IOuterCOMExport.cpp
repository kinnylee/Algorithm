// IOuterCOMExport.cpp : CIOuterCOMExport ��ʵ��

#include "stdafx.h"
#include "comutil.h"

#include "IOuterCOMExport.h"


// CIOuterCOMExport



STDMETHODIMP CIOuterCOMExport::SetName(BSTR strName)
{
    // TODO:  �ڴ����ʵ�ִ���
    m_pName =_bstr_t(strName);
    return S_OK;
}


STDMETHODIMP CIOuterCOMExport::GetName(BSTR* strName)
{
    // TODO:  �ڴ����ʵ�ִ���
    *strName = ::SysAllocString(_bstr_t(m_pName));
    return S_OK;
}
