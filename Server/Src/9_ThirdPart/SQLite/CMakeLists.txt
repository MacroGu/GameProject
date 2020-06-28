cmake_minimum_required(VERSION 2.8)
project(SQLite)
 
include_directories(
    "${PROJECT_SOURCE_DIR}"
)
 
add_library (SQLite
    shell.c
	sqlite3.c
)


if(MSVC)
else()
	target_link_libraries(SQLite dl)
endif()
