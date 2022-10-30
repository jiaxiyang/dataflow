cmake_minimum_required(VERSION 3.12)

message(STATUS "CMAKE_ROOT: " ${CMAKE_ROOT})

project(
  dataflow
  VERSION 1.0.0
  LANGUAGES CXX)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_library(${PROJECT_NAME} INTERFACE)
target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_17)
target_include_directories(
  ${PROJECT_NAME} INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                            $<INSTALL_INTERFACE:include/>)
target_include_directories(${PROJECT_NAME}
                           INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/3rd-party/)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include DESTINATION output)

add_subdirectory(examples)
