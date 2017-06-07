cmake_minimum_required(VERSION 3.0)
project(SteamWorkshopUploader)

if(NOT CMAKE_BUILD_TYPE)
    # Default to a debug build type for ease
    set(CMAKE_BUILD_TYPE Debug)
endif()

include_directories("${STEAM_INCLUDE}")

set(CMAKE_CXX_FLAGS_DEBUG -DDEBUG)

add_executable(SteamWorkshopUploader main.cpp process_steam.cpp
    process_steam.h util.cpp util.h)

target_link_libraries(SteamWorkshopUploader "${STEAM_LIB}")
