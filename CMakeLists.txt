cmake_minimum_required(VERSION 3.0)
project(SteamWorkshopUploader)

include_directories("${STEAM_INCLUDE}")
message(STATUS ${STEAM_INCLUDE})

set(CMAKE_CXX_FLAGS_DEBUG -DDEBUG)

add_library(steam_api SHARED IMPORTED)
set_target_properties(steam_api PROPERTIES BUILD_WITH_INSTALL_RPATH
    TRUE IMPORTED_LOCATION libsteam_api.so)
#set_target_properties(steam_api PROPERTIES BUILD_WITH_INSTALL_RPATH
#    TRUE IMPORTED_LOCATION steam_api.dll)
cmake_policy(SET CMP0015 NEW)
link_directories(.)

#SET(CMAKE_SKIP_BUILD_RPATH  FALSE)
#SET(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)
#SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
#SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_executable(SteamWorkshopUploader main.cpp process_steam.cpp
    process_steam.h util.cpp util.h)

target_link_libraries(SteamWorkshopUploader steam_api)
