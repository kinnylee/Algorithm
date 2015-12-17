// OuterCOMExport.h : COuterCOMExport ������

#pragma once
#include "resource.h"       // ������



#include "ProcessOuterCOMServer_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif

using namespace ATL;


// COuterCOMExport

class ATL_NO_VTABLE COuterCOMExport :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<COuterCOMExport, &CLSID_OuterCOMExport>,
	public IDispatchImpl<IOuterCOMExport, &IID_IOuterCOMExport, &LIBID_ProcessOuterCOMServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	COuterCOMExport()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_OUTERCOMEXPORT)


BEGIN_COM_MAP(COuterCOMExport)
	COM_INTERFACE_ENTRY(IOuterCOMExport)
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

public:
    STDMETHOD(SetName)(BSTR sName);
    STDMETHOD(GetName)(BSTR* sName);


private:
    wchar_t *m_pName;
};

OBJECT_ENTRY_AUTO(__uuidof(OuterCOMExport), COuterCOMExport)
