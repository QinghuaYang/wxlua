// ---------------------------------------------------------------------------
// wxpropgrid.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxpropgrid_H__
#define __HOOK_WXLUA_wxpropgrid_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"
#include "wxbind/include/wxcore_bind.h"

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
class WXDLLIMPEXP_BINDWXPROPGRID wxLuaBinding_wxpropgrid : public wxLuaBinding
{
public:
    wxLuaBinding_wxpropgrid();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxpropgrid)
};


// initialize wxLuaBinding_wxpropgrid for all wxLuaStates
extern WXDLLIMPEXP_BINDWXPROPGRID wxLuaBinding* wxLuaBinding_wxpropgrid_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------



#endif // __HOOK_WXLUA_wxpropgrid_H__

