// ProcessOuterCOMServer.cpp : WinMain µÄÊµÏÖ


#include "stdafx.h"
#include "resource.h"
#include "ProcessOuterCOMServer_i.h"
#include "xdlldata.h"


using namespace ATL;


class CProcessOuterCOMServerModule : public ATL::CAtlExeModuleT< CProcessOuterCOMServerModule >
{
public :
	DECLARE_LIBID(LIBID_ProcessOuterCOMServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_PROCESSOUTERCOMSERVER, "{B0843EAA-673F-4DB5-B743-7E4489968075}")
	};

CProcessOuterCOMServerModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

