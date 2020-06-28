cmake_minimum_required(VERSION 2.8.9)
project(GameServer)
SET(PROJECT_ROOT_PATH ".")

include_directories(./ ../2_StaticData ../9_ThirdPart/SQLite ../2_WatcherClient ../2_PublicData ../3_ServerEngine ../3_ServerEngine/Common ../3_ServerEngine/DBInterface ../9_ThirdPart/protobuf/src ../9_ThirdPart/Lua ../1_Message ../2_LogData ../2_ServerData ../2_WatcherClient)
link_directories(../9_ThirdPart/libs)


#消息
set(PROTO Proto)
FILE(GLOB PROTO "../1_Message/Game_Define.pb.cc" 
				"../1_Message/Game_Define.pb.h"
	            "../1_Message/Msg_Copy.pb.cc" 
				"../1_Message/Msg_Copy.pb.h"
	            "../1_Message/Msg_Game.pb.cc" 
				"../1_Message/Msg_Game.pb.h"
	            "../1_Message/Msg_LoginCltData.pb.cc" 
				"../1_Message/Msg_LoginCltData.pb.h"
	            "../1_Message/Msg_Move.pb.cc" 
				"../1_Message/Msg_Move.pb.h")


#游戏逻辑相关
set(SCENE_LOGICAL Scenelogic)
FILE(GLOB SCENE_LOGICAL "SceneLogic_Arena.cpp"
	                    "SceneLogic_Arena.h"
						"SceneLogic_Base.cpp"
						"SceneLogic_Base.h"
						"SceneLogic_City.cpp"
						"SceneLogic_City.h"
						"SceneLogic_None.cpp"
						"SceneLogic_None.h"
						"SceneLogic_Normal.cpp"
						"SceneLogic_Normal.h"
						"SceneLogic_Team.cpp"
						"SceneLogic_Team.h"
						"WinCondition.cpp"
						"WinCondition.h")

#场景对象
set(SCENE_OBJECT SceneObject)
FILE(GLOB SCENE_OBJECT "BuffObject.cpp"
					   "BuffObject.h"
					   "BulletObject.cpp"
					   "BulletObject.h"
					   "MapObject.cpp"
					   "MapObject.h"
					   "SceneObject.cpp"
					   "SceneObject.h"
					   "SkillObject.cpp"
					   "SkillObject.h")

#Staic Data
set(STATIC_DATA StaticData)
FILE(GLOB STATIC_DATA "../2_StaticData/*.cpp" "../2_StaticData/*.h")

#Watcher Client
set(WATCHER_CLIENT WatcherClient)
FILE(GLOB WATCHER_CLIENT "../2_WatcherClient/WatcherClient.cpp" "../2_WatcherClient/WatcherClient.h")


#header file code
set(HEADER_CODE_FILE HeaderFiles)
FILE(GLOB HEADER_CODE_FILE "GameService.h"
						   "GameStruct.h"
						   "Grid.h"
						   "GridManager.h"
						   "MonsterCreator.h"
						   "Scene.h"
						   "SceneManager.h"
						   "SceneXmlMgr.h"
						   "stdafx.h"
						   "WatcherClient.h"
)

#source file code
set(SOURCE_CODE_FILE SourceFiles)
FILE(GLOB SOURCE_CODE_FILE "GameService.cpp"
						   "GameStruct.cpp"
						   "Grid.cpp"
						   "GridManager.cpp"
						   "MonsterCreator.cpp"
						   "Scene.cpp"
						   "SceneManager.cpp"
						   "SceneXmlMgr.cpp"
						   "stdafx.cpp"
						   "WatcherClient.cpp"
							"Main.cpp"
)


source_group(Proto FILES ${PROTO} )
source_group(Scenelogic FILES ${SCENE_LOGICAL} )
source_group(SceneObject FILES ${SCENE_OBJECT} )
source_group(StaticData FILES ${STATIC_DATA} )
source_group(WatcherClient FILES ${WATCHER_CLIENT} )
source_group(HeaderFiles FILES ${HEADER_CODE_FILE} )
source_group(SourceFiles FILES ${SOURCE_CODE_FILE} )



# Target
add_executable(GameServer 
	${SCENE_LOGICAL}	
	${SCENE_OBJECT}	
	${STATIC_DATA}	
	${WATCHER_CLIENT}	
    ${PROTO}	
	${HEADER_CODE_FILE}	
	${SOURCE_CODE_FILE}	
)


if(MSVC)
	target_link_libraries(GameServer ServerEngine Protobuf SQLite lua)
	ADD_DEFINITIONS(-D_CONSOLE -D_CRT_SECURE_NO_WARNINGS)
else()
	target_link_libraries(GameServer ServerEngine Protobuf SQLite lua)
	ADD_DEFINITIONS(-D_CONSOLE -D_CRT_SECURE_NO_WARNINGS)
endif()


if(CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -pthread -std=c++11")
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -pthread -std=c++11")
endif()

