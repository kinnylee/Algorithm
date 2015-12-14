// ProcessOuterCOMService.cpp : WinMain µÄÊµÏÖ


#include "stdafx.h"
#include "resource.h"
#include "ProcessOuterCOMService_i.h"
#include "xdlldata.h"


using namespace ATL;


class CProcessOuterCOMServiceModule : public ATL::CAtlExeModuleT< CProcessOuterCOMServiceModule >
{
public :
	DECLARE_LIBID(LIBID_ProcessOuterCOMServiceLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_PROCESSOUTERCOMSERVICE, "{D8A8CB29-9FAC-455B-BA06-9C070EFC8947}")
	};

CProcessOuterCOMServiceModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

