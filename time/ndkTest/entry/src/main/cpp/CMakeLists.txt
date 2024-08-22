# the minimum version of CMake.
cmake_minimum_required(VERSION 3.4.1)
project(TimeServiceNdk)

set(NATIVERENDER_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${NATIVERENDER_ROOT_PATH}
                    ${NATIVERENDER_ROOT_PATH}/include)

add_library(timeservicendk SHARED time_service_ndk_test.cpp)
target_link_libraries(timeservicendk PUBLIC libace_napi.z.so libtime_service_ndk.so)