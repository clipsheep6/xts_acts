# the minimum version of CMake.
cmake_minimum_required(VERSION 3.4.1)
project(nkd_xts_test)

set(NATIVERENDER_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${NATIVERENDER_ROOT_PATH}
                    ${NATIVERENDER_ROOT_PATH}/include)

add_library(imagePixelmap SHARED imagePixelmap.cpp)
target_link_libraries(imagePixelmap PUBLIC libace_napi.z.so libpixelmap_ndk.z.so)