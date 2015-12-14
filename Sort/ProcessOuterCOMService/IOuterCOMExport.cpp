// IOuterCOMExport.cpp : CIOuterCOMExport 的实现

#include "stdafx.h"
#include "comutil.h"

#include "IOuterCOMExport.h"


// CIOuterCOMExport



STDMETHODIMP CIOuterCOMExport::SetName(BSTR strName)
{
    // TODO:  在此添加实现代码
    m_pName =_bstr_t(strName);
    return S_OK;
}


STDMETHODIMP CIOuterCOMExport::GetName(BSTR* strName)
{
    // TODO:  在此添加实现代码
    *strName = ::SysAllocString(_bstr_t(m_pName));
    return S_OK;
}
