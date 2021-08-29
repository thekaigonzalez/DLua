all:
	gcc run_lua.c -c -llua5.3
	dmd build_lua.d run_lua.o -L-llua5.3

