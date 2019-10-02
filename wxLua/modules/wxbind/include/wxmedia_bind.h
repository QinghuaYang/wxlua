// ---------------------------------------------------------------------------
// wxmedia.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxmedia_H__
#define __HOOK_WXLUA_wxmedia_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"
#include "wxbind/include/wxcore_bind.h"
#include "wxbind/include/wxnet_bind.h"

#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 34
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 34
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_BINDWXMEDIA wxLuaBinding_wxmedia : public wxLuaBinding
{
public:
    wxLuaBinding_wxmedia();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxmedia)
};


// initialize wxLuaBinding_wxmedia for all wxLuaStates
extern WXDLLIMPEXP_BINDWXMEDIA wxLuaBinding* wxLuaBinding_wxmedia_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
    #include "wx/mediactrl.h"
#endif // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL
    extern WXDLLIMPEXP_DATA_BINDWXMEDIA(int) wxluatype_wxMediaCtrl;
    extern WXDLLIMPEXP_DATA_BINDWXMEDIA(int) wxluatype_wxMediaEvent;
#endif // wxLUA_USE_wxMediaCtrl && wxUSE_MEDIACTRL



#endif // __HOOK_WXLUA_wxmedia_H__

