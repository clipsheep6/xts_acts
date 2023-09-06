# the minimum version of CMake.
cmake_minimum_required(VERSION 3.4.1)
project(MyApplication2)

set(NATIVERENDER_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${NATIVERENDER_ROOT_PATH}
                    ${NATIVERENDER_ROOT_PATH}/include)

add_library(libresmgrndk SHARED napi/global_napi_test.cpp)
target_link_libraries(libresmgrndk PUBLIC libace_napi.z.so libc++.a librawfile.z.so)