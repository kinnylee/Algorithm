// OuterCOMExport.cpp : COuterCOMExport 的实现
#include "stdafx.h"
#include "OuterCOMExport.h"
#include "comutil.h"


// COuterCOMExport



STDMETHODIMP COuterCOMExport::SetName(BSTR sName)
{
    // TODO:  在此添加实现代码
    m_pName = _bstr_t(sName);
    return S_OK;
}


STDMETHODIMP COuterCOMExport::GetName(BSTR* sName)
{
    // TODO:  在此添加实现代码
    *sName = ::SysAllocString(_bstr_t(m_pName));
    return S_OK;
}
