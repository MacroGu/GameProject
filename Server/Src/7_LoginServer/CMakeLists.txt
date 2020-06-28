cmake_minimum_required(VERSION 2.8.9)
project(LoginServer)
SET(PROJECT_ROOT_PATH ".")

include_directories(./ ../3_ServerEngine ../3_ServerEngine/Common ../3_ServerEngine/DBInterface ../2_PublicData ../2_StaticData ../9_ThirdPart/SQLite ../2_ServerData ../9_ThirdPart/Mysql ../1_Message ../2_LogData ../2_ServerData ../2_WatcherClient)
link_directories(../9_ThirdPart/libs)	


#消息
set(PROTO Proto)
FILE(GLOB PROTO "../1_Message/Msg_Game.pb.cc" 
				"../1_Message/Msg_Game.pb.h"
				"../1_Message/Msg_ID.pb.cc" 
				"../1_Message/Msg_ID.pb.h")


#Staic Data
set(STATIC_DATA StaticData)
FILE(GLOB STATIC_DATA "../2_StaticData/*.cpp" "../2_StaticData/*.h")

#header file code
set(HEADER_CODE_FILE HeaderFiles)
FILE(GLOB HEADER_CODE_FILE "./*.h")


#source file code
set(SOURCE_CODE_FILE SourceFiles)
FILE(GLOB SOURCE_CODE_FILE "./*.cpp")

#Watcher Client
set(WATCHER_CLIENT WatcherClient)
FILE(GLOB WATCHER_CLIENT "../2_WatcherClient/WatcherClient.cpp" "../2_WatcherClient/WatcherClient.h")


source_group(Proto FILES ${PROTO} )
source_group(StaticData FILES ${STATIC_DATA} )
source_group(WatcherClient FILES ${WATCHER_CLIENT} )
source_group(HeaderFiles FILES ${HEADER_CODE_FILE} )
source_group(SourceFiles FILES ${SOURCE_CODE_FILE} )



# Target
add_executable(LoginServer
    ${PROTO}	
	${STATIC_DATA}	
	${WATCHER_CLIENT}	
	${HEADER_CODE_FILE}	
	${SOURCE_CODE_FILE}	
)


if(MSVC)
	target_link_libraries(LoginServer ServerEngine Protobuf libmysql ws2_32 SQLite)
	ADD_DEFINITIONS(-D_CONSOLE -D_CRT_SECURE_NO_WARNINGS)
else()
	target_link_libraries(LoginServer ServerEngine Protobuf mysqlclient pthread SQLite)
	ADD_DEFINITIONS(-D_CONSOLE -D_CRT_SECURE_NO_WARNINGS)
endif()


if(CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -pthread -std=c++11")
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -pthread -std=c++11")
endif()

