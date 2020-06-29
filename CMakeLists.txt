cmake_minimum_required(VERSION 3.17)

project(accountingPositions)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

file(GLOB CPP_SOURCES "source/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(${PROJECT_NAME} ${CPP_SOURCES})

set_target_properties(PROPERTIES LINKER_LANGUAGE CXX)