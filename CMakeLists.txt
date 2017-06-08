cmake_minimum_required(VERSION 3.0)
project(SteamWorkshopUploader)

if(NOT CMAKE_BUILD_TYPE)
    # Default to a debug build type for ease
    set(CMAKE_BUILD_TYPE Debug)
endif()

include_directories("${STEAM_INCLUDE}")

set(CMAKE_CXX_FLAGS_DEBUG -DDEBUG)

add_library(steam_api SHARED IMPORTED)
set_target_properties(steam_api PROPERTIES BUILD_WITH_INSTALL_RPATH
    TRUE IMPORTED_LOCATION libsteam_api.so)
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
