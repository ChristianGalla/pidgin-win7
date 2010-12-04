
#define INITGUID
#include <windows.h>
#include <wtypes.h>
#include <shobjidl.h>
#include <shlguid.h>
//#include <propkeydef.h>
//#include <propsys.h>
#include <initguid.h>

#include <glib.h>

#ifndef PURPLE_PLUGINS
#	define PURPLE_PLUGINS
#endif

#include "core.h"
#include "savedstatuses.h"
#include "signals.h"
#include "status.h"
#include "plugin.h"
#include "debug.h"

#ifndef _
#define _(a) (a)
#endif

#ifndef PIDGIN_PLUGIN_TYPE
#define PIDGIN_UI "gtk-gaim"
#define PIDGIN_PLUGIN_TYPE PIDGIN_UI
#endif

#ifndef __RPC__in
#define __RPC__in
#define __RPC__in_opt
#define __RPC__in_string
#define __RPC__in_opt_string
#endif
#ifndef __RPC__out
#define __RPC__out
#define __RPC__deref_out
#define __RPC__deref_out_opt
#endif

/* Forward Declarations */ 

#ifndef __IObjectArray_FWD_DEFINED__
#define __IObjectArray_FWD_DEFINED__
typedef interface IObjectArray IObjectArray;
#endif 	/* __IObjectArray_FWD_DEFINED__ */


#ifndef __IObjectCollection_FWD_DEFINED__
#define __IObjectCollection_FWD_DEFINED__
typedef interface IObjectCollection IObjectCollection;
#endif 	/* __IObjectCollection_FWD_DEFINED__ */

#ifndef __ICustomDestinationList_FWD_DEFINED__
#define __ICustomDestinationList_FWD_DEFINED__
typedef interface ICustomDestinationList ICustomDestinationList;
#endif 	/* __ICustomDestinationList_FWD_DEFINED__ */

#ifndef __IPropertyStore_FWD_DEFINED__
#define __IPropertyStore_FWD_DEFINED__
typedef interface IPropertyStore IPropertyStore;
#endif 	/* __IPropertyStore_FWD_DEFINED__ */

#ifndef __IObjectArray_INTERFACE_DEFINED__
#define __IObjectArray_INTERFACE_DEFINED__

typedef struct IObjectArrayVtbl
{
	BEGIN_INTERFACE
	
	HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
		__RPC__in IObjectArray * This,
		/* [in] */ __RPC__in REFIID riid,
		/* [annotation][iid_is][out] */ 
		__RPC__deref_out  void **ppvObject);
	
	ULONG ( STDMETHODCALLTYPE *AddRef )( 
		__RPC__in IObjectArray * This);
	
	ULONG ( STDMETHODCALLTYPE *Release )( 
		__RPC__in IObjectArray * This);
	
	HRESULT ( STDMETHODCALLTYPE *GetCount )( 
		__RPC__in IObjectArray * This,
		/* [out] */ __RPC__out UINT *pcObjects);
	
	HRESULT ( STDMETHODCALLTYPE *GetAt )( 
		__RPC__in IObjectArray * This,
		/* [in] */ UINT uiIndex,
		/* [in] */ __RPC__in REFIID riid,
		/* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
	
	END_INTERFACE
} IObjectArrayVtbl;

interface IObjectArray
{
	CONST_VTBL struct IObjectArrayVtbl *lpVtbl;
};

EXTERN_C const IID IID_IObjectArray = {0x92CA9DCD,0x5622,0x4bba,{0xA8,0x05,0x5E,0x9F,0x54,0x1B,0xD8,0xC9}}; // 92CA9DCD-5622-4bba-A805-5E9F541BD8C9

#endif  // __IObjectArray_INTERFACE_DEFINED__

#ifndef __IObjectCollection_INTERFACE_DEFINED__
#define __IObjectCollection_INTERFACE_DEFINED__

typedef struct IObjectCollectionVtbl
{
	BEGIN_INTERFACE
	
	HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
		__RPC__in IObjectCollection * This,
		/* [in] */ __RPC__in REFIID riid,
		/* [annotation][iid_is][out] */ 
		__RPC__deref_out  void **ppvObject);
	
	ULONG ( STDMETHODCALLTYPE *AddRef )( 
		__RPC__in IObjectCollection * This);
	
	ULONG ( STDMETHODCALLTYPE *Release )( 
		__RPC__in IObjectCollection * This);
	
	HRESULT ( STDMETHODCALLTYPE *GetCount )( 
		__RPC__in IObjectCollection * This,
		/* [out] */ __RPC__out UINT *pcObjects);
	
	HRESULT ( STDMETHODCALLTYPE *GetAt )( 
		__RPC__in IObjectCollection * This,
		/* [in] */ UINT uiIndex,
		/* [in] */ __RPC__in REFIID riid,
		/* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
	
	HRESULT ( STDMETHODCALLTYPE *AddObject )( 
		__RPC__in IObjectCollection * This,
		/* [in] */ __RPC__in_opt IUnknown *punk);
	
	HRESULT ( STDMETHODCALLTYPE *AddFromArray )( 
		__RPC__in IObjectCollection * This,
		/* [in] */ __RPC__in_opt IObjectArray *poaSource);
	
	HRESULT ( STDMETHODCALLTYPE *RemoveObjectAt )( 
		__RPC__in IObjectCollection * This,
		/* [in] */ UINT uiIndex);
	
	HRESULT ( STDMETHODCALLTYPE *Clear )( 
		__RPC__in IObjectCollection * This);
	
	END_INTERFACE
} IObjectCollectionVtbl;

interface IObjectCollection
{
	CONST_VTBL struct IObjectCollectionVtbl *lpVtbl;
};

EXTERN_C const IID IID_IObjectCollection = {0x5632b1a4,0xe38a,0x400a,{0x92,0x8a,0xd4,0xcd,0x63,0x23,0x02,0x95}}; // 5632b1a4-e38a-400a-928a-d4cd63230295

#endif  // __IObjectCollection_INTERFACE_DEFINED__



#ifndef __ICustomDestinationList_INTERFACE_DEFINED__
#define __ICustomDestinationList_INTERFACE_DEFINED__


typedef /* [v1_enum] */ enum tagKNOWNDESTCATEGORY {
  KDC_FREQUENT = 1,
  KDC_RECENT = (KDC_FREQUENT + 1)
} KNOWNDESTCATEGORY;

typedef struct ICustomDestinationListVtbl
{
	BEGIN_INTERFACE
	
	HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
		__RPC__in ICustomDestinationList * This,
		/* [in] */ __RPC__in REFIID riid,
		/* [annotation][iid_is][out] */ 
		__RPC__deref_out  void **ppvObject);
	
	ULONG ( STDMETHODCALLTYPE *AddRef )( 
		__RPC__in ICustomDestinationList * This);
	
	ULONG ( STDMETHODCALLTYPE *Release )( 
		__RPC__in ICustomDestinationList * This);
	
	HRESULT ( STDMETHODCALLTYPE *SetAppID )( 
		__RPC__in ICustomDestinationList * This,
		/* [string][in] */ __RPC__in_string LPCWSTR pszAppID);
	
	HRESULT ( STDMETHODCALLTYPE *BeginList )( 
		__RPC__in ICustomDestinationList * This,
		/* [out] */ __RPC__out UINT *pcMinSlots,
		/* [in] */ __RPC__in REFIID riid,
		/* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
	
	HRESULT ( STDMETHODCALLTYPE *AppendCategory )( 
		__RPC__in ICustomDestinationList * This,
		/* [string][in] */ __RPC__in_string LPCWSTR pszCategory,
		/* [in] */ __RPC__in_opt IObjectArray *poa);
	
	HRESULT ( STDMETHODCALLTYPE *AppendKnownCategory )( 
		__RPC__in ICustomDestinationList * This,
		/* [in] */ KNOWNDESTCATEGORY category);
	
	HRESULT ( STDMETHODCALLTYPE *AddUserTasks )( 
		__RPC__in ICustomDestinationList * This,
		/* [in] */ __RPC__in_opt IObjectArray *poa);
	
	HRESULT ( STDMETHODCALLTYPE *CommitList )( 
		__RPC__in ICustomDestinationList * This);
	
	HRESULT ( STDMETHODCALLTYPE *GetRemovedDestinations )( 
		__RPC__in ICustomDestinationList * This,
		/* [in] */ __RPC__in REFIID riid,
		/* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
	
	HRESULT ( STDMETHODCALLTYPE *DeleteList )( 
		__RPC__in ICustomDestinationList * This,
		/* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszAppID);
	
	HRESULT ( STDMETHODCALLTYPE *AbortList )( 
		__RPC__in ICustomDestinationList * This);
	
	END_INTERFACE
} ICustomDestinationListVtbl;

interface ICustomDestinationList
{
	CONST_VTBL struct ICustomDestinationListVtbl *lpVtbl;
};

EXTERN_C const IID IID_ICustomDestinationList = {0x6332debf,0x87b5,0x4670,{0x90,0xc0,0x5e,0x57,0xb4,0x08,0xa4,0x9e}}; // 6332debf-87b5-4670-90c0-5e57b408a49e;

#endif  // __ICustomDestinationList_INTERFACE_DEFINED__

const CLSID CLSID_DestinationList = {
  0x77f10cf0, 0x3db5, 0x4966, {0xb5, 0x20, 0xb7, 0xc5, 0x4f, 0xd3, 0x5e, 0xd6}
};

const CLSID CLSID_EnumerableObjectCollection = {
  0x2d3468c1, 0x36a7, 0x43b6, {0xac, 0x24, 0xd3, 0xf0, 0x2f, 0xd9, 0x60, 0x7a}
};

#ifndef DEFINE_PROPERTYKEY
typedef struct {
  GUID  fmtid;
  DWORD pid;
} PROPERTYKEY;
#define REFPROPERTYKEY const PROPERTYKEY * __MIDL_CONST
#define REFPROPVARIANT const PROPVARIANT * __MIDL_CONST
#ifdef INITGUID
#define DEFINE_PROPERTYKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) EXTERN_C const PROPERTYKEY /*DECLSPEC_SELECTANY*/ name = { { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }, pid }
#else
#define DEFINE_PROPERTYKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) EXTERN_C const PROPERTYKEY name
#endif // INITGUID 
#endif // DEFINE_PROPERTYKEY

#if 1
DEFINE_PROPERTYKEY(PKEY_Title, 0xF29F85E0, 0x4FF9, 0x1068, 0xAB, 0x91, 0x08, 0x00, 0x2B, 0x27, 0xB3, 0xD9, 2);

#ifndef __IPropertyStore_INTERFACE_DEFINED__
#define __IPropertyStore_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPropertyStore = { 0x886d8eeb, 0x8cf2, 0x4446, { 0x8d, 0x02, 0xcd, 0xba, 0x1d, 0xbd, 0xcf, 0x99 } };

typedef struct IPropertyStoreVtbl
{
	BEGIN_INTERFACE
	
	HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
		IPropertyStore * This,
		/* [in] */ __RPC__in REFIID riid,
		/* [iid_is][out] */ 
		__RPC__deref_out  void **ppvObject);
	
	ULONG ( STDMETHODCALLTYPE *AddRef )( 
		IPropertyStore * This);
	
	ULONG ( STDMETHODCALLTYPE *Release )( 
		IPropertyStore * This);
	
	HRESULT ( STDMETHODCALLTYPE *GetCount )( 
		IPropertyStore * This,
		/* [out] */ __RPC__out DWORD *cProps);
	
	HRESULT ( STDMETHODCALLTYPE *GetAt )( 
		IPropertyStore * This,
		/* [in] */ DWORD iProp,
		/* [out] */ __RPC__out PROPERTYKEY *pkey);
	
	HRESULT ( STDMETHODCALLTYPE *GetValue )( 
		IPropertyStore * This,
		/* [in] */ __RPC__in REFPROPERTYKEY key,
		/* [out] */ __RPC__out PROPVARIANT *pv);
	
	HRESULT ( STDMETHODCALLTYPE *SetValue )( 
		IPropertyStore * This,
		/* [in] */ __RPC__in REFPROPERTYKEY key,
		/* [in] */ __RPC__in REFPROPVARIANT propvar);
	
	HRESULT ( STDMETHODCALLTYPE *Commit )( 
		IPropertyStore * This);
	
	END_INTERFACE
} IPropertyStoreVtbl;

interface IPropertyStore
{
	CONST_VTBL struct IPropertyStoreVtbl *lpVtbl;
};

    
#endif /* __IPropertyStore_INTERFACE_DEFINED__ */
#endif /* if 0 */

/*
extern "C" const CLSID CLSID_TaskbarList              = {0x56fdf344,0xfd6d,0x11d0,{0x95,0x8a,0x00,0x60,0x97,0xc9,0xa0,0x90}}; // 56fdf344-fd6d-11d0-958a-006097c9a090;
extern "C" const IID IID_ITaskbarList                 = {0x56FDF342,0xFD6D,0x11d0,{0x95,0x8A,0x00,0x60,0x97,0xC9,0xA0,0x90}}; // 56FDF342-FD6D-11d0-958A-006097C9A090;
extern "C" const IID IID_ITaskbarList2                = {0x602D4995,0xB13A,0x429b,{0xA6,0x6E,0x19,0x35,0xE4,0x4F,0x43,0x17}}; // 602D4995-B13A-429b-A66E-1935E44F4317;
extern "C" const IID IID_ICustomDestinationList         = {0x6332debf,0x87b5,0x4670,{0x90,0xc0,0x5e,0x57,0xb4,0x08,0xa4,0x9e}}; // 6332debf-87b5-4670-90c0-5e57b408a49e
extern "C" const IID IID_IObjectArray                   = {0x92CA9DCD,0x5622,0x4bba,{0xA8,0x05,0x5E,0x9F,0x54,0x1B,0xD8,0xC9}}; // 92CA9DCD-5622-4bba-A805-5E9F541BD8C9
extern "C" const IID IID_IObjectCollection              = {0x5632b1a4,0xe38a,0x400a,{0x92,0x8a,0xd4,0xcd,0x63,0x23,0x02,0x95}}; // 5632b1a4-e38a-400a-928a-d4cd63230295
extern "C" const IID IID_ITaskbarList3                  = {0xea1afb91,0x9e28,0x4b86,{0x90,0xe9,0x9e,0x9f,0x8a,0x5e,0xef,0xaf}}; // ea1afb91-9e28-4b86-90e9-9e9f8a5eefaf
extern "C" const CLSID CLSID_CustomDestinationList      = {0x77f10cf0,0x3db5,0x4966,{0xb5,0x20,0xb7,0xc5,0x4f,0xd3,0x5e,0xd6}};
extern "C" const CLSID CLSID_EnumerableObjectCollection = {0x2d3468c1,0x36a7,0x43b6,{0xac,0x24,0xd3,0xf0,0x2f,0xd9,0x60,0x7a}};
*/

void pidgin_win7_create_jumplist(ICustomDestinationList *pcdl);
void pidgin_win7_delete_jumplist(ICustomDestinationList *pcdl);
IShellLink *pidgin_win7_create_shell_link(const char *title, const char *icon, 
	const char *path, const char *args, const char *description);
void pidgin_win7_add_tasks();

static gboolean uri_handler(const char *proto, const char *cmd, GHashTable *params);

static gboolean
plugin_load(PurplePlugin *plugin)
{
	ICustomDestinationList *pcdl;
	purple_debug_info("win7", "plugin_load\n");
	if (SUCCEEDED(CoCreateInstance(&CLSID_DestinationList, NULL, CLSCTX_INPROC_SERVER, &IID_ICustomDestinationList, (void**)&pcdl)))
	{
		plugin->extra = pcdl;
		pidgin_win7_create_jumplist(pcdl);
		
		purple_signal_connect(purple_get_core(), "uri-handler", plugin, PURPLE_CALLBACK(uri_handler), NULL);
		return TRUE;
	} else {
		return FALSE;
	}
}

static gboolean
plugin_unload(PurplePlugin *plugin)
{
	ICustomDestinationList *pcdl = (ICustomDestinationList *)plugin->extra;
	purple_debug_info("win7", "plugin_unload\n");
	if (pcdl)
	{
		pidgin_win7_delete_jumplist(pcdl);
		
		purple_signal_disconnect(purple_get_core(), "uri-handler", plugin, PURPLE_CALLBACK(uri_handler));
	}
	return TRUE;
}

static void
plugin_init(PurplePlugin *plugin)
{
}

static PurplePluginInfo info = 
{
	PURPLE_PLUGIN_MAGIC,
	2,
	0,
	PURPLE_PLUGIN_STANDARD,
	PIDGIN_PLUGIN_TYPE,
	0,
	NULL,
	PURPLE_PRIORITY_DEFAULT,

	"eionrobb-pidgin-win7",
	"Pidgin-Win7",
	"0.1",
	"Win7 Extensions for Pidgin",
	"",
	"Eion Robb <eionrobb@gmail.com>",
	"", //URL
	
	plugin_load,
	plugin_unload,
	NULL,
	
	NULL,
	NULL,
	NULL,
	NULL,
	
	NULL,
	NULL,
	NULL,
	NULL
};

PURPLE_INIT_PLUGIN(pidginwin7, plugin_init, info);

static void
dump_hash_table(gchar *key, gchar *value, gpointer data)
{
	printf("'%s' = '%s'\n", key, value);
}

static PurpleSavedStatus *
create_transient_status(PurpleStatusPrimitive primitive, PurpleStatusType *status_type)
{
	PurpleSavedStatus *saved_status = purple_savedstatus_new(NULL, primitive);

	if(status_type != NULL) {
		GList *tmp, *active_accts = purple_accounts_get_all_active();
		for (tmp = active_accts; tmp != NULL; tmp = tmp->next) {
			purple_savedstatus_set_substatus(saved_status,
				(PurpleAccount*) tmp->data, status_type, NULL);
		}
		g_list_free(active_accts);
	}

	return saved_status;
}

static gboolean
uri_handler(const char *proto, const char *cmd, GHashTable *params)
{
	gchar *temp;
	PurpleSavedStatus *saved_status;
	PurpleStatusPrimitive primitive = PURPLE_STATUS_UNSET;

	//only deal with win7: uri's
	if (!g_str_equal(proto, "win7"))
		return FALSE;

	purple_debug_info("win7", "uri_handler cmd: %s\n", cmd);
	//lets have a look at the hash table!
	purple_debug_info("win7", "dumping uri handler hashtable\n");
	g_hash_table_foreach(params, (GHFunc)dump_hash_table, NULL);
	
	if ((temp = (gchar *)g_hash_table_lookup(params, "status")))
	{
		purple_debug_info("win7", "set status to %s\n", temp);
		if (g_str_equal(temp, "available"))
		{
			primitive = PURPLE_STATUS_AVAILABLE;
		} else if (g_str_equal(temp, "away"))
		{
			primitive = PURPLE_STATUS_AWAY;
		} else if (g_str_equal(temp, "unavailable"))
		{
			primitive = PURPLE_STATUS_UNAVAILABLE;
		} else if (g_str_equal(temp, "invisible"))
		{
			primitive = PURPLE_STATUS_INVISIBLE;
		} else if (g_str_equal(temp, "offline"))
		{
			primitive = PURPLE_STATUS_OFFLINE;
		}
		saved_status = purple_savedstatus_find_transient_by_type_and_message(primitive, NULL);
		if (saved_status == NULL)
			saved_status = create_transient_status(primitive, NULL);
		purple_savedstatus_activate(saved_status);
		
		return TRUE;
	}
	
	//we don't know how to handle this
	return FALSE;
}
