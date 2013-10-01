cmake_minimum_required(VERSION 2.8)
include(FRCDeploy)

project(gruntmaster6000)
find_package(WPILib)
include_directories(${WPILib_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCE_CODE *.cpp)

add_executable(gruntmaster6000 ${SOURCE_CODE})
target_link_libraries(gruntmaster6000 ${WPILib_LIBRARY})

add_make_deploy(hello 10.47.74.2) # where your team number is xxyy

