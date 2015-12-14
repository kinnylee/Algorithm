

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Dec 14 23:29:35 2015
 */
/* Compiler settings for ProcessOuterCOMService.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ProcessOuterCOMService_i_h__
#define __ProcessOuterCOMService_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIOuterCOMExport_FWD_DEFINED__
#define __IIOuterCOMExport_FWD_DEFINED__
typedef interface IIOuterCOMExport IIOuterCOMExport;

#endif 	/* __IIOuterCOMExport_FWD_DEFINED__ */


#ifndef __IOuterCOMExport_FWD_DEFINED__
#define __IOuterCOMExport_FWD_DEFINED__

#ifdef __cplusplus
typedef class IOuterCOMExport IOuterCOMExport;
#else
typedef struct IOuterCOMExport IOuterCOMExport;
#endif /* __cplusplus */

#endif 	/* __IOuterCOMExport_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IIOuterCOMExport_INTERFACE_DEFINED__
#define __IIOuterCOMExport_INTERFACE_DEFINED__

/* interface IIOuterCOMExport */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIOuterCOMExport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96992788-E884-4972-8C90-C964D03DFC5E")
    IIOuterCOMExport : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR strName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *strName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIOuterCOMExportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIOuterCOMExport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIOuterCOMExport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIOuterCOMExport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIOuterCOMExport * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIOuterCOMExport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIOuterCOMExport * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIOuterCOMExport * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IIOuterCOMExport * This,
            /* [in] */ BSTR strName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IIOuterCOMExport * This,
            /* [retval][out] */ BSTR *strName);
        
        END_INTERFACE
    } IIOuterCOMExportVtbl;

    interface IIOuterCOMExport
    {
        CONST_VTBL struct IIOuterCOMExportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIOuterCOMExport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIOuterCOMExport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIOuterCOMExport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIOuterCOMExport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIOuterCOMExport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIOuterCOMExport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIOuterCOMExport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IIOuterCOMExport_SetName(This,strName)	\
    ( (This)->lpVtbl -> SetName(This,strName) ) 

#define IIOuterCOMExport_GetName(This,strName)	\
    ( (This)->lpVtbl -> GetName(This,strName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIOuterCOMExport_INTERFACE_DEFINED__ */



#ifndef __ProcessOuterCOMServiceLib_LIBRARY_DEFINED__
#define __ProcessOuterCOMServiceLib_LIBRARY_DEFINED__

/* library ProcessOuterCOMServiceLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ProcessOuterCOMServiceLib;

EXTERN_C const CLSID CLSID_IOuterCOMExport;

#ifdef __cplusplus

class DECLSPEC_UUID("1B7351AC-671A-4131-957C-42DC82FCA70E")
IOuterCOMExport;
#endif
#endif /* __ProcessOuterCOMServiceLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


