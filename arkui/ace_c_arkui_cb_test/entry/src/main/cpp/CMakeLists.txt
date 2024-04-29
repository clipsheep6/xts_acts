# the minimum version of CMake.
cmake_minimum_required(VERSION 3.4.1)
project(XComponent)

set(NATIVERENDER_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
add_definitions(-DOHOS_PLATFORM)

include_directories(
    ${NATIVERENDER_ROOT_PATH}
    ${NATIVERENDER_ROOT_PATH}/include
)

add_library(nativerender SHARED
    manager/plugin_manager.cpp
    napi_init.cpp
    toggle/toggle_onchange_test.cpp
    toggle/toggle_enabled_test.cpp
    scroll/scroll_nestedscroll_test.cpp
    scroll/scroll_onscroll_test.cpp
    scroll/scroll_onscrollframebegin_test.cpp
    scroll/scroll_onscrollstart_test.cpp
    scroll/scroll_onscrollstop_test.cpp
    scroll/scroll_onappear_test.cpp
    scroll/scroll_onscrolledge_test.cpp
    scroll/scroll_scrolledge_test.cpp
    scroll/scroll_hittestbehavior_test.cpp
)

find_library(
    # Sets the name of the path variable.
    hilog-lib
    # Specifies the name of the NDK library that
    # you want CMake to locate.
    hilog_ndk.z
)

find_library(
    # Sets the name of the path variable.
    libace-lib
    # Specifies the name of the NDK library that
    # you want CMake to locate.
    ace_ndk.z
)

find_library(
    # Sets the name of the path variable.
    libnapi-lib
    # Specifies the name of the NDK library that
    # you want CMake to locate.
    ace_napi.z
)

find_library(
    # Sets the name of the path variable.
    libuv-lib
    # Specifies the name of the NDK library that
    # you want CMake to locate.
    uv
)

target_link_libraries(nativerender PUBLIC
    ${hilog-lib} ${libace-lib} ${libnapi-lib} ${libuv-lib})