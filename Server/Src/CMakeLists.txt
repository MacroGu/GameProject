cmake_minimum_required(VERSION 2.8.9)
project(GameProject)
set(CMAKE_VERBOSE_MAKEFILE OFF)
# Add the source in project root directory
aux_source_directory(. DIRSRCS)
# Add header file include directories
include_directories(./ ./9_ThirdPart/Protobuf ./9_ThirdPart/lua ./9_ThirdPart/SQLite ./9_ThirdPart/Mysql )

# Add block directories
add_subdirectory(9_ThirdPart/Protobuf)
add_subdirectory(9_ThirdPart/SQLite)
add_subdirectory(9_ThirdPart/Lua)
add_subdirectory(3_ServerEngine)
add_subdirectory(5_ProxyServer)
add_subdirectory(6_GameServer)
add_subdirectory(4_DBServer)
add_subdirectory(7_AccountServer)
add_subdirectory(5_CenterServer)
add_subdirectory(8_LogicServer)
add_subdirectory(7_LoginServer)
add_subdirectory(4_LogServer)
add_subdirectory(5_WatchServer)


if(CMAKE_COMPILER_IS_GNUCXX)
	add_definitions(-std=c++11)
endif()
