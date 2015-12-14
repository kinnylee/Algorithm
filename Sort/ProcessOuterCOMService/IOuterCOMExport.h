// IOuterCOMExport.h : CIOuterCOMExport ������

#pragma once
#include "resource.h"       // ������



#include "ProcessOuterCOMService_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif

using namespace ATL;


// CIOuterCOMExport

class ATL_NO_VTABLE CIOuterCOMExport :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CIOuterCOMExport, &CLSID_IOuterCOMExport>,
	public IDispatchImpl<IIOuterCOMExport, &IID_IIOuterCOMExport, &LIBID_ProcessOuterCOMServiceLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CIOuterCOMExport()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_IOUTERCOMEXPORT)


BEGIN_COM_MAP(CIOuterCOMExport)
	COM_INTERFACE_ENTRY(IIOuterCOMExport)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

private:
    wchar_t *m_pName;

public:

    STDMETHOD(SetName)(BSTR strName);
    STDMETHOD(GetName)(BSTR* strName);
};

OBJECT_ENTRY_AUTO(__uuidof(IOuterCOMExport), CIOuterCOMExport)
