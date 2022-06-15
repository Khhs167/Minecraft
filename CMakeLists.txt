cmake_minimum_required(VERSION 2.8.9)
project(Minecraft)

include_directories(include, raylib/src)
 
file(GLOB_RECURSE SOURCES "src/*.cpp")

find_package(raylib REQUIRED) # Requires at least version 3.0
 
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} raylib)