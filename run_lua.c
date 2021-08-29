#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

void run_lua_code(void)
{
 lua_State* L = luaL_newstate();
 luaL_openlibs(L);
 luaL_dofile(L, "./hello.lua");
}
