# the minimum version of CMake.
cmake_minimum_required(VERSION 3.5)
project(004-DEMO)

set(NATIVERENDER_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${NATIVERENDER_ROOT_PATH}
                    ${NATIVERENDER_ROOT_PATH}/include)

add_library(entry SHARED 004-NDK.cpp)
target_link_libraries(entry PUBLIC libace_napi.z.so)
target_link_libraries(entry PUBLIC libimage_source_ndk.z.so)
target_link_libraries(entry PUBLIC libhilog_ndk.z.so)

target_link_libraries(entry PUBLIC libimage_source.so)
target_link_libraries(entry PUBLIC libpixelmap.so)
target_link_libraries(entry PUBLIC libimage_packer.so)