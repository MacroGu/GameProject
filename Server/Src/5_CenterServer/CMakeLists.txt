cmake_minimum_required(VERSION 2.8.9)
project(CenterServer)
SET(PROJECT_ROOT_PATH ".")

include_directories(./ ../3_ServerEngine ../3_ServerEngine/Common ../3_ServerEngine/DBInterface ../2_ServerData ../9_ThirdPart/Mysql ../1_Message ../2_PublicData ../2_WatcherClient)
link_directories(../9_ThirdPart/libs)


#消息
set(PROTO Proto)
FILE(GLOB PROTO "../1_Message/Msg_Game.pb.cc" 
				"../1_Message/Msg_Game.pb.h")


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
source_group(HeaderFiles FILES ${HEADER_CODE_FILE} )
source_group(SourceFiles FILES ${SOURCE_CODE_FILE} )
source_group(WatcherClient FILES ${WATCHER_CLIENT} )



# Target
add_executable(CenterServer
    ${PROTO}	
	${WATCHER_CLIENT}	
	${HEADER_CODE_FILE}	
	${SOURCE_CODE_FILE}	
)



if(MSVC)
	target_link_libraries(CenterServer ServerEngine Protobuf )
	ADD_DEFINITIONS(-D_CONSOLE -D_CRT_SECURE_NO_WARNINGS)
else()
	target_link_libraries(CenterServer ServerEngine Protobuf )
	ADD_DEFINITIONS(-D_CONSOLE -D_CRT_SECURE_NO_WARNINGS)
endif()


if(CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -pthread -std=c++11")
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -pthread -std=c++11")
endif()

