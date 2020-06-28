cmake_minimum_required(VERSION 2.8)
project(lua)
 
include_directories(
    "${PROJECT_SOURCE_DIR}"
)
 
add_library (lua
    lapi.c
	lauxlib.c
	lbaselib.c
	lbitlib.c
    lcode.c
	lcorolib.c
	lctype.c
	ldblib.c
    ldebug.c
	ldo.c
	ldump.c
	lfunc.c
    lgc.c
	linit.c
	liolib.c
	llex.c
    lmathlib.c
	lmem.c
	loadlib.c
	lobject.c
    lopcodes.c
	loslib.c
	lparser.c
	lstate.c
    lstring.c
	lstrlib.c
	ltable.c
	ltablib.c
    ltm.c
	lundump.c
	lvm.c
	lzio.c
)