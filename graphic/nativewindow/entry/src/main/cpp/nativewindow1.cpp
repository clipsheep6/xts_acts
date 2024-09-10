//
// Created on 2024/8/6.
//
// Node APIs are not fully supported. To solve the compilation error of the interface cannot be found,
// please include "napi/native_api.h".

#include "napi/native_api.h"
#include <IPCKit/ipc_cparcel.h>
#include <bits/alltypes.h>
#include <GLES2/gl2.h>
#include <multimedia/player_framework/native_avcodec_base.h>
#include <native_image/native_image.h>
#include <native_window/external_window.h>
#include <native_buffer/native_buffer.h>
#include <string>

#define SUCCESS 0
#define FAIL (-1)

static OHNativeWindow *InitNativeWindow() {
    GLuint textureId;
    glGenTextures(1, &textureId);
    auto _image = OH_NativeImage_Create(textureId, GL_TEXTURE_2D);
    OHNativeWindow *nativeWindow = OH_NativeImage_AcquireNativeWindow(_image);
    int code = SET_BUFFER_GEOMETRY;
    int32_t width_ = 0x100;
    int32_t height_ = 0x100;
    int32_t ret = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, code, width_, height_);
    code = SET_USAGE;
    int32_t usage = NATIVEBUFFER_USAGE_CPU_READ | NATIVEBUFFER_USAGE_CPU_WRITE | NATIVEBUFFER_USAGE_MEM_DMA;
    ret = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, code, usage);
    return nativeWindow;
}


// Native Window Test
napi_value testNativeWindowCreateNativeWindowNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto p = OH_NativeWindow_CreateNativeWindow(nullptr);
    if (p == nullptr) {
        napi_create_int32(env, SUCCESS, &result);
    } else {
        napi_create_int32(env, FAIL, &result);
    }
    return result;
}

napi_value testNativeWindowDestroyNativeWindowNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OH_NativeWindow_DestroyNativeWindow(nullptr);
    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowGetSurfaceIdNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto r = OH_NativeWindow_GetSurfaceId(nullptr, 0);
    if (40001000 == r) {
        napi_create_int32(env, SUCCESS, &result);
    } else {
        napi_create_int32(env, FAIL, &result);
    }
    return result;
}

napi_value testNativeWindowCreateNativeWindowNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    auto window = OH_NativeWindow_CreateNativeWindow(nullptr);
    if (window == nullptr) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }
    uint64_t surfaceId1, surfaceId2;
    OH_NativeWindow_GetSurfaceId(window, &surfaceId1);
    OH_NativeWindow_DestroyNativeWindow(window);
    OH_NativeWindow_GetSurfaceId(window, &surfaceId2);
    if (surfaceId1 == surfaceId2) {
        napi_create_int32(env, SUCCESS, &result);
    } else {
        napi_create_int32(env, FAIL, &result);
    }
    return result;
}


napi_value testNativeWindowCreateNativeWindowFromSurfaceIdNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 设置OH_NativeWindow_CreateNativeWindowFromSurfaceId()的surfaceId=nullptr，其他参数正常调用该接口
    OHNativeWindow *nativeWindow = nullptr;
    auto flag = OH_NativeWindow_CreateNativeWindowFromSurfaceId(0, &nativeWindow);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    GLuint textureId;
    glGenTextures(1, &textureId);
    auto _image = OH_NativeImage_Create(textureId, GL_TEXTURE_2D);
    auto _nativeWindow = OH_NativeImage_AcquireNativeWindow(_image);
    uint64_t surfaceId;
    OH_NativeWindow_GetSurfaceId(_nativeWindow, &surfaceId);
    // 设置OH_NativeWindow_CreateNativeWindowFromSurfaceId()的window=nullptr,，其他参数正常调用该接口
    flag = OH_NativeWindow_CreateNativeWindowFromSurfaceId(surfaceId, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowCreateNativeWindowFromSurfaceIdNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 创建surface实例 获取id
    GLuint textureId;
    glGenTextures(1, &textureId);
    auto _image = OH_NativeImage_Create(textureId, GL_TEXTURE_2D);
    auto _nativeWindow = OH_NativeImage_AcquireNativeWindow(_image);
    uint64_t surfaceId;
    OH_NativeWindow_GetSurfaceId(_nativeWindow, &surfaceId);

    // 声明nativeWindow空指针为window
    OHNativeWindow *nativeWindow = nullptr;
    auto flag = OH_NativeWindow_CreateNativeWindowFromSurfaceId(surfaceId, &nativeWindow);
    // 接口执行成功，返回错误码0 | 声明的window指针指向NativeWindow实例
    if (flag != 0 || nativeWindow == nullptr) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    // 声明一个surfaceId2
    uint64_t surfaceId2;
    flag = OH_NativeWindow_GetSurfaceId(nativeWindow, &surfaceId2);
    // 接口调用成功，返回错误码0 | get获取surfaceId2与surfaceId一致
    if (flag != 0 || surfaceId2 != surfaceId) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    OH_NativeWindow_DestroyNativeWindow(nativeWindow);

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowCreateNativeWindowFromSurfaceIdSurfaceId(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 创建surface实例 获取一个正常的id
    GLuint textureId;
    glGenTextures(1, &textureId);
    auto _image = OH_NativeImage_Create(textureId, GL_TEXTURE_2D);
    auto _nativeWindow = OH_NativeImage_AcquireNativeWindow(_image);
    uint64_t surfaceId;
    OH_NativeWindow_GetSurfaceId(_nativeWindow, &surfaceId);

    // 调用该接口，查看执行结果
    uint64_t ids[] = {0, 1, surfaceId, 0xFFFFFFFF};
    for (int i = 0; i < sizeof(ids) / sizeof(uint64_t); i += 1) {
        uint64_t tmpId = ids[i];
        OHNativeWindow *nativeWindow = nullptr;
        auto flag = OH_NativeWindow_CreateNativeWindowFromSurfaceId(tmpId, &nativeWindow);
        // 只有样例3成功
        if (i == 2) {
            if (flag != SUCCESS) {
                napi_create_int32(env, i + 1, &result);
                return result;
            }
        } else {
            if (flag == SUCCESS) {
                napi_create_int32(env, 1 + 1, &result);
                return result;
            }
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowCreateNativeWindowBufferFromNativeBufferNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto buffer = OH_NativeWindow_CreateNativeWindowBufferFromNativeBuffer(nullptr);
    if (buffer == nullptr) {
        napi_create_int32(env, SUCCESS, &result);
    } else {
        napi_create_int32(env, FAIL, &result);
    }
    return result;
}


napi_value testNativeWindowCreateNativeWindowBufferFromSurfaceBufferNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto buffer = OH_NativeWindow_CreateNativeWindowBufferFromSurfaceBuffer(nullptr);
    if (buffer == nullptr) {
        napi_create_int32(env, SUCCESS, &result);
    } else {
        napi_create_int32(env, FAIL, &result);
    }
    return result;
}


napi_value testNativeWindowDestroyNativeWindowBufferNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OH_NativeWindow_DestroyNativeWindowBuffer(nullptr);
    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowGetBufferHandleFromNativeNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto ptr = OH_NativeWindow_GetBufferHandleFromNative(nullptr);
    if (ptr == nullptr) {
        napi_create_int32(env, SUCCESS, &result);
    } else {
        napi_create_int32(env, FAIL, &result);
    }
    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowCreateNativeWindowBufferFromNativeBufferNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native buffer 实例
    OH_NativeBuffer_Config config{
        .width = 0x100,
        .height = 0x100,
        .format = NATIVEBUFFER_PIXEL_FMT_RGBA_8888,
        .usage = NATIVEBUFFER_USAGE_CPU_READ | NATIVEBUFFER_USAGE_CPU_WRITE | NATIVEBUFFER_USAGE_MEM_DMA,
    };
    OH_NativeBuffer *buffer = OH_NativeBuffer_Alloc(&config);
    if (buffer == nullptr) {
        napi_create_int32(env, -1, &result);
        return result;
    }

    // 1.
    auto nativeWindowBuffer = OH_NativeWindow_CreateNativeWindowBufferFromNativeBuffer(buffer);
    // 接口执行成功，返回非空指针
    if (nativeWindowBuffer == nullptr) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    // 2.
    auto bufferHandle = OH_NativeWindow_GetBufferHandleFromNative(nativeWindowBuffer);
    if (bufferHandle == nullptr) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    // 3.
    OH_NativeWindow_DestroyNativeWindowBuffer(nativeWindowBuffer);

    // 4.
    bufferHandle = OH_NativeWindow_GetBufferHandleFromNative(nativeWindowBuffer);
    if (bufferHandle != nullptr) {
        napi_create_int32(env, 4, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowCreateNativeWindowBufferFromNativeBufferMuch(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native buffer 实例
    OH_NativeBuffer_Config config{
        .width = 0x100,
        .height = 0x100,
        .format = NATIVEBUFFER_PIXEL_FMT_RGBA_8888,
        .usage = NATIVEBUFFER_USAGE_CPU_READ | NATIVEBUFFER_USAGE_CPU_WRITE | NATIVEBUFFER_USAGE_MEM_DMA,
    };
    OH_NativeBuffer *buffer = OH_NativeBuffer_Alloc(&config);
    if (buffer == nullptr) {
        napi_create_int32(env, -1, &result);
        return result;
    }

    for (int i = 0; i < 500; i += 1) {
        auto ptr = OH_NativeWindow_CreateNativeWindowBufferFromNativeBuffer(buffer);
        if (ptr == nullptr) {
            napi_create_int32(env, i + 1, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowRequestBufferNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindowBuffer *oHNativeWindowBuffer;
    int fenceFd;

    auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nullptr, &oHNativeWindowBuffer, &fenceFd);
    if (flag != 40001000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowAbortBufferNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native window 实例
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *oHNativeWindowBuffer;

    // 1. window 为空指针
    auto flag = OH_NativeWindow_NativeWindowAbortBuffer(nullptr, oHNativeWindowBuffer);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    // 2. buffer 为空指针
    flag = OH_NativeWindow_NativeWindowAbortBuffer(nativeWindow, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowRequestAbortBufferNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native window 实例
    OHNativeWindow *nativeWindow = InitNativeWindow();

    // 0. 新建 native window buffer 指针
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;

    // 1.
    int fenceFd = -1;
    auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);
    if (flag != 0 || nativeWindowBuffer == nullptr) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    // 2.
    flag = OH_NativeWindow_NativeWindowAbortBuffer(nativeWindow, nativeWindowBuffer);
    if (flag != 0) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowRequestAbortBufferAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native window 实例
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;

    // 1.
    int fenceFd = 0;
    auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);
    if (flag != 0 || nativeWindowBuffer == nullptr) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    // 2.
    flag = OH_NativeWindow_NativeWindowAbortBuffer(nativeWindow, nativeWindowBuffer);
    if (flag != 0) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    // 3.
    flag = OH_NativeWindow_NativeWindowAbortBuffer(nativeWindow, nativeWindowBuffer);
    if (flag == 0) {
        napi_create_int32(env, 3, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowRequestBufferFenceFdNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native window 实例
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;

    int32_t ls[] = {-5, -1, 0, 1, 10000};
    for (int i = 0; i < sizeof(ls) / sizeof(int); i += 1) {
        int fenceFd = ls[i];
        auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);
        if (flag != 0) {
            napi_create_int32(env, 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowAbortBuffer(nativeWindow, nativeWindowBuffer);
        if (flag != 0) {
            napi_create_int32(env, 2, &result);
            return result;
        }
    }
    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowRequestBufferFenceFdAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native window 实例
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;

    int32_t *fenceFd1 = NULL;
    auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, fenceFd1);
    if (flag == 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    int32_t *fenceFd2 = nullptr;
    flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, fenceFd2);
    if (flag == 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowRequestAbortBufferMax(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native window 实例
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;

    for (int i = 0; i < 5; ++i) {
        int fenceFd = -1;
        auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);
        if (i >= 4) {
            if (flag == 0) {
                napi_create_int32(env, FAIL, &result);
                return result;
            }
        } else {
            if (flag != 0) {
                napi_create_int32(env, i + 1, &result);
                return result;
            }
        }
    }
    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowRequestAbortBufferErrorCode(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native window 实例
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int requestFenceFd = 0;

    // 1.
    auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &requestFenceFd);
    if (flag != 0) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }
    if (nativeWindowBuffer == nullptr || requestFenceFd != -1) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }
    // 2.
    Region::Rect rect{
        .x = 0x100,
        .y = 0x100,
        .w = 0x100,
        .h = 0x100,
    };
    Region region{.rects = &rect};
    flag = OH_NativeWindow_NativeWindowFlushBuffer(nativeWindow, nativeWindowBuffer, requestFenceFd, region);
    if (flag != 0) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }
    // 3.
    flag = OH_NativeWindow_NativeWindowAbortBuffer(nativeWindow, nativeWindowBuffer);
    if (flag != 41207000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowWriteToParcelErrptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native window 实例
    OHNativeWindow *nativeWindow = InitNativeWindow();
    // 0. 已存在OHIPCParcel
    OHIPCParcel *parcel = OH_IPCParcel_Create();

    // 1.
    auto flag = OH_NativeWindow_WriteToParcel(nullptr, parcel);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    // 2.
    flag = OH_NativeWindow_WriteToParcel(nativeWindow, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowReadFromParcelErrptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = nullptr;
    // 0. 已存在OHIPCParcel
    OHIPCParcel *parcel = OH_IPCParcel_Create();

    // 1.
    auto flag = OH_NativeWindow_ReadFromParcel(parcel, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    // 2.
    flag = OH_NativeWindow_ReadFromParcel(nullptr, &nativeWindow);
    if (flag != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowWRParcelNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0. 创建 native window 实例
    GLuint textureId;
    glGenTextures(1, &textureId);
    auto _image = OH_NativeImage_Create(textureId, GL_TEXTURE_2D);
    auto nativeWindow1 = OH_NativeImage_AcquireNativeWindow(_image);
    // 0. 已存在OHIPCParcel
    OHIPCParcel *parcel1 = OH_IPCParcel_Create();

    auto flag = OH_NativeWindow_WriteToParcel(nativeWindow1, parcel1);
    if (flag != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    OHNativeWindow *nativeWindow2;
    flag = OH_NativeWindow_ReadFromParcel(parcel1, &nativeWindow2);
    if (flag != 0) {
        napi_create_int32(env, 2, &result);
        return result;
    }
    if (nativeWindow1 != nativeWindow2) {
        napi_create_int32(env, 3, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowWriteToParcelAbNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0.
    GLuint textureId;
    glGenTextures(1, &textureId);
    auto _image = OH_NativeImage_Create(textureId, GL_TEXTURE_2D);
    OHNativeWindow *window1 = OH_NativeImage_AcquireNativeWindow(_image);
    OHIPCParcel *parcel1 = OH_IPCParcel_Create();

    // 1.
    auto flag = OH_NativeWindow_ReadFromParcel(parcel1, &window1);
    if (flag == 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowReadFromParcelAbNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0.
    OHNativeWindow *window1 = InitNativeWindow();
    OHIPCParcel *parcel1 = OH_IPCParcel_Create();

    // 1.
    auto flag = OH_NativeWindow_WriteToParcel(window1, parcel1);
    if (flag != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    // 2.
    flag = OH_NativeWindow_WriteToParcel(window1, parcel1);
    if (flag == 0) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowWRParcelDifferent(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0.
    OHNativeWindow *window1 = InitNativeWindow();
    OHNativeWindow *window2 = InitNativeWindow();
    OHIPCParcel *parcel1 = OH_IPCParcel_Create();
    OHIPCParcel *parcel2 = OH_IPCParcel_Create();

    // 1.
    auto flag = OH_NativeWindow_WriteToParcel(window1, parcel1);
    if (flag != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    // 2.
    flag = OH_NativeWindow_WriteToParcel(window1, parcel2);
    if (flag == 0) {
        napi_create_int32(env, 2, &result);
        return result;
    }
    // 3.
    flag = OH_NativeWindow_WriteToParcel(window2, parcel1);
    if (flag == 0) {
        napi_create_int32(env, 3, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowFlushBufferNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0.
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    Region::Rect rect{
        .x = 0x100,
        .y = 0x100,
        .w = 0x100,
        .h = 0x100,
    };
    Region region{.rects = &rect};
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);

    // 1.
    auto flag = OH_NativeWindow_NativeWindowFlushBuffer(nullptr, nativeWindowBuffer, fenceFd, region);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    // 2.
    flag = OH_NativeWindow_NativeWindowFlushBuffer(nativeWindow, nullptr, fenceFd, region);
    if (flag != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowFlushBufferNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0.
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    Region::Rect rect{
        .x = 0x100,
        .y = 0x100,
        .w = 0x100,
        .h = 0x100,
    };
    Region region{.rects = &rect};
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);

    // 1.
    auto flag = OH_NativeWindow_NativeWindowFlushBuffer(nativeWindow, nativeWindowBuffer, fenceFd, region);
    if (flag != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    // 2.
    flag = OH_NativeWindow_NativeWindowFlushBuffer(nativeWindow, nativeWindowBuffer, fenceFd, region);
    if (flag != 41207000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowFlushBufferAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0.
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    Region::Rect rect{
        .x = 0x100,
        .y = 0x100,
        .w = 0x100,
        .h = 0x100,
    };
    Region region{.rects = &rect};
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);

    // 1.
    int fenceFdList[] = {-999999999, -1000, -1, 0, 1, 1000, 999999999};
    for (int i = 0; i < sizeof(fenceFdList) / sizeof(int); ++i) {
        auto flag = OH_NativeWindow_NativeWindowFlushBuffer(nativeWindow, nativeWindowBuffer, fenceFd, region);
        if (flag != 0) {
            napi_create_int32(env, i + 1, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowFlushBufferErrorCode(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0.
    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    Region::Rect rect{
        .x = 0x100,
        .y = 0x100,
        .w = 0x100,
        .h = 0x100,
    };
    Region region{.rects = &rect};
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);

    OH_NativeBuffer_Config config{
        .width = 0x100,
        .height = 0x100,
        .format = NATIVEBUFFER_PIXEL_FMT_RGBA_8888,
        .usage = NATIVEBUFFER_USAGE_CPU_READ | NATIVEBUFFER_USAGE_CPU_WRITE | NATIVEBUFFER_USAGE_MEM_DMA,
    };
    OH_NativeBuffer *newBuffer = OH_NativeBuffer_Alloc(&config);

    // 1.
    int arr[] = {-999999999, -1000, -1, 0, 1, 1000, 999999999};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        auto flag = OH_NativeWindow_NativeWindowFlushBuffer(nativeWindow, nativeWindowBuffer, arr[i], region);
        if (flag != 41210000) {
            napi_create_int32(env, FAIL, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowGetLastFlushedBufferV2Nullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd;
    float matrix[16];

    // 1.
    auto flag = OH_NativeWindow_GetLastFlushedBufferV2(nullptr, &nativeWindowBuffer, &fenceFd, matrix);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    // 2.
    flag = OH_NativeWindow_GetLastFlushedBufferV2(nativeWindow, nullptr, &fenceFd, matrix);
    if (flag != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowGetLastFlushedBufferNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd;
    float matrix[16];

    // 1.
    auto flag = OH_NativeWindow_GetLastFlushedBuffer(nullptr, &nativeWindowBuffer, &fenceFd, matrix);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    // 2.
    flag = OH_NativeWindow_GetLastFlushedBuffer(nativeWindow, nullptr, &fenceFd, matrix);
    if (flag != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowGetLastFlushedBufferV2Normal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd;
    float matrix[16];

    auto flag = OH_NativeWindow_GetLastFlushedBufferV2(nativeWindow, &nativeWindowBuffer, &fenceFd, matrix);
    if (flag != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowGetLastFlushedBufferNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd;
    float matrix[16];

    auto flag = OH_NativeWindow_GetLastFlushedBufferV2(nativeWindow, &nativeWindowBuffer, &fenceFd, matrix);
    if (flag != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowGetLastFlushedBufferV2ErrorCode(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd;

    // 1.
    bool flag = true;
    while (flag) {
        auto a = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);
        if (a == 40601000) {
            flag = false;
        }
    }
    // 2.
    float matrix[16];
    auto flag1 = OH_NativeWindow_GetLastFlushedBufferV2(nativeWindow, &nativeWindowBuffer, &fenceFd, matrix);
    if (flag1 != 41207000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowSetBufferHold(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto nativeWindow = InitNativeWindow();

    OH_NativeWindow_SetBufferHold(nullptr);
    OH_NativeWindow_SetBufferHold(nativeWindow);

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowGetNativeObjectMagicNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    auto flag = OH_NativeWindow_GetNativeObjectMagic(nullptr);
    if (flag != -1) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }
    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowGetNativeObjectMagicNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer;
    int fenceFd = -1;
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);


    auto magicId = OH_NativeWindow_GetNativeObjectMagic(nativeWindow);
    if (magicId == -1) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    auto magicId2 = OH_NativeWindow_GetNativeObjectMagic(nativeWindowBuffer);
    if (magicId2 == -1) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    if (magicId != magicId2) {
        napi_create_int32(env, 3, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeObjectReferenceNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;


    auto magicId = OH_NativeWindow_NativeObjectReference(nullptr);
    if (magicId != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    magicId = OH_NativeWindow_NativeObjectReference(nativeWindowBuffer);
    if (magicId != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeObjectReferenceNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);


    auto magicId = OH_NativeWindow_NativeObjectReference(nativeWindow);
    if (magicId != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    magicId = OH_NativeWindow_NativeObjectReference(nativeWindowBuffer);
    if (magicId != 0) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeObjectUnreferenceNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;


    auto magicId = OH_NativeWindow_NativeObjectUnreference(nullptr);
    if (magicId != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    magicId = OH_NativeWindow_NativeObjectUnreference(nativeWindowBuffer);
    if (magicId != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeObjectUnreferenceNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);


    auto magicId = OH_NativeWindow_NativeObjectUnreference(nativeWindow);
    if (magicId != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    magicId = OH_NativeWindow_NativeObjectUnreference(nativeWindowBuffer);
    if (magicId != 0) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowAttachBufferNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);


    auto flag = OH_NativeWindow_NativeWindowAttachBuffer(nullptr, nativeWindowBuffer);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }


    flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowDetachBufferNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);


    auto flag = OH_NativeWindow_NativeWindowDetachBuffer(nullptr, nativeWindowBuffer);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }


    flag = OH_NativeWindow_NativeWindowDetachBuffer(nativeWindow, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowDetachBufferNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);
    if (flag != 0) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    flag = OH_NativeWindow_NativeWindowDetachBuffer(nativeWindow, nativeWindowBuffer);
    if (flag != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }


    flag = OH_NativeWindow_NativeWindowDetachBuffer(nativeWindow, nativeWindowBuffer);
    if (flag != 41210000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    OH_NativeWindow_DestroyNativeWindow(nativeWindow);

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowAttachBufferErrorCode(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nwb1, *nwb2, *nwb3, *nwb4;
    int fenceFd = -1;
    OHNativeWindowBuffer **arr[] = {&nwb1, &nwb2, &nwb3, &nwb4};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        fenceFd = -1;
        auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, arr[i], &fenceFd);
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        auto flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow, *arr[i]);
        if (i == sizeof(arr) / sizeof(arr[0]) - 1) {
            if (flag != 41209000) {
                napi_create_int32(env, FAIL, &result);
                return result;
            }
        } else {
            if (flag != 0) {
                napi_create_int32(env, FAIL, &result);
                return result;
            }
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowAttachBufferNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;
    auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);
    if (flag != 0) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow, nativeWindowBuffer);
    if (flag != 41208000) {
        napi_create_int32(env, 1, &result);
        return result;
    }


    flag = OH_NativeWindow_NativeWindowDetachBuffer(nativeWindow, nativeWindowBuffer);
    if (flag != 41210000) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow, nativeWindowBuffer);
    if (flag != 0) {
        napi_create_int32(env, 3, &result);
        return result;
    }


    OH_NativeWindow_DestroyNativeWindow(nativeWindow);

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowDetachBufferErrorCode(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer = nullptr;
    int fenceFd = -1;

    // 1.
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &nativeWindowBuffer, &fenceFd);
    if (nativeWindowBuffer != nullptr) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }
    // 2.
    Region::Rect rect{
        .x = 0x100,
        .y = 0x100,
        .w = 0x100,
        .h = 0x100,
    };
    Region region{.rects = &rect};
    auto flag = OH_NativeWindow_NativeWindowFlushBuffer(nativeWindow, nativeWindowBuffer, 0, region);
    if (flag != 0) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }
    // 3.
    flag = OH_NativeWindow_NativeWindowDetachBuffer(nativeWindow, nativeWindowBuffer);
    if (flag != 41207000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    OH_NativeWindow_DestroyNativeWindow(nativeWindow);

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowAtDetachDifferentBufferNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    OHNativeWindowBuffer *nativeWindowBuffer1, *nativeWindowBuffer2, *nativeWindowBuffer3, *nativeWindowBuffer4;
    int fenceFd = -1;
    OHNativeWindowBuffer **nativeWindowBuffers[] = {&nativeWindowBuffer1, &nativeWindowBuffer2, &nativeWindowBuffer3,
                                                    &nativeWindowBuffer4};
    for (int i = 0; i < 4; ++i) {
        auto flag = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, nativeWindowBuffers[i], &fenceFd);
        if (flag != 0) {
            napi_create_int32(env, 1000 + i + 1, &result);
            return result;
        }
    }

    for (int i = 0; i < 4; ++i) {
        auto flag = OH_NativeWindow_NativeWindowDetachBuffer(nativeWindow, *nativeWindowBuffers[i]);
        if (flag != 0) {
            napi_create_int32(env, 2000 + i + 1, &result);
            return result;
        }
    }

    for (int i = 0; i < 4; ++i) {
        auto flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow, *nativeWindowBuffers[i]);
        if (flag != 0) {
            napi_create_int32(env, 3000 + i + 1, &result);
            return result;
        }
    }

    OH_NativeWindow_DestroyNativeWindow(nativeWindow);

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowAtDetachDifferentBufferAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    // 0.
    OHNativeWindow *nativeWindow1 = InitNativeWindow();
    OHNativeWindow *nativeWindow2 = InitNativeWindow();
    OH_NativeBuffer_Config config{
        .width = 0x100,
        .height = 0x100,
        .format = NATIVEBUFFER_PIXEL_FMT_RGBA_8888,
        .usage = NATIVEBUFFER_USAGE_CPU_READ | NATIVEBUFFER_USAGE_CPU_WRITE | NATIVEBUFFER_USAGE_MEM_DMA,
    };
    OH_NativeBuffer *nativeBuffer = OH_NativeBuffer_Alloc(&config);

    // 1.
    OHNativeWindowBuffer *nativeWindowBuffer1 = nullptr, *nativeWindowBuffer2 = nullptr;
    int fenceFd = -1;
    nativeWindowBuffer1 = OH_NativeWindow_CreateNativeWindowBufferFromNativeBuffer(nativeBuffer);
    if (nativeWindowBuffer1 == nullptr) {
        napi_create_int32(env, 1001, &result);
        return result;
    }
    nativeWindowBuffer2 = OH_NativeWindow_CreateNativeWindowBufferFromNativeBuffer(nativeBuffer);
    if (nativeWindowBuffer2 == nullptr) {
        napi_create_int32(env, 1002, &result);
        return result;
    }

    // 2.
    int32_t flag;
    flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow1, nativeWindowBuffer1);
    if (flag != 0) {
        napi_create_int32(env, 2001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow1, nativeWindowBuffer1);
    if (flag != 0) {
        napi_create_int32(env, 2002, &result);
        return result;
    }

    // 3.
    flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow2, nativeWindowBuffer1);
    if (flag == 0) {
        napi_create_int32(env, 3001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow1, nativeWindowBuffer2);
    if (flag == 0) {
        napi_create_int32(env, 3002, &result);
        return result;
    }

    // 4.
    flag = OH_NativeWindow_NativeWindowDetachBuffer(nativeWindow1, nativeWindowBuffer1);
    if (flag != 0) {
        napi_create_int32(env, 4001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowDetachBuffer(nativeWindow2, nativeWindowBuffer2);
    if (flag != 0) {
        napi_create_int32(env, 4002, &result);
        return result;
    }

    // 5.
    flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow2, nativeWindowBuffer1);
    if (flag != 0) {
        napi_create_int32(env, 5001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowAttachBuffer(nativeWindow1, nativeWindowBuffer2);
    if (flag != 0) {
        napi_create_int32(env, 5002, &result);
        return result;
    }

    // 6.
    OH_NativeWindow_DestroyNativeWindow(nativeWindow1);
    OH_NativeWindow_DestroyNativeWindow(nativeWindow2);

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int code = SET_BUFFER_GEOMETRY;
    auto flag = OH_NativeWindow_NativeWindowHandleOpt(nullptr, code, 100, 100);
    if (flag != 40001000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetGetBufferGeometryNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();

    int arr[][2] = {{0, 0},        {2147483647, 2147483647},   {100, 100}, {-1000, -1000}, {-1000, 1000},
                    {1000, -1000}, {-2147483647, -2147483647}, {-1, -1}};
    for (int i = 0; i < sizeof(arr) / sizeof(int[2]); ++i) {
        int width = arr[i][0];
        int height = arr[i][1];
        auto flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_BUFFER_GEOMETRY, width, height);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 1, &result);
            return result;
        }
        int _width, _height;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_BUFFER_GEOMETRY, &_width, &_height);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 2, &result);
            return result;
        }
        if (width != _width || height != _height) {
            napi_create_int32(env, (i + 1) * 1000 + 3, &result);
            return result;
        }
    }

    OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptSetGetBufferGeometryAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    int32_t flag;
    int32_t width, height;

    // 1.
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_BUFFER_GEOMETRY, NULL, NULL);
    if (flag == 0) { // 应为 非0
        napi_create_int32(env, 1001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_BUFFER_GEOMETRY, &width, &height);
    if (flag != 0) { // 应为 成功
        napi_create_int32(env, 1002, &result);
        return result;
    }
    if (width != 0 || height != 0) {
        napi_create_int32(env, 1003, &result);
        return result;
    }
    // 2.
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_BUFFER_GEOMETRY, 2147483648, 2147483648);
    if (flag != 0) { // 应为 非0
        napi_create_int32(env, 2001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_BUFFER_GEOMETRY, &width, &height);
    if (flag != 0) { // 应为 成功
        napi_create_int32(env, 2002, &result);
        return result;
    }
    if (width != 0 || height != 0) {
        napi_create_int32(env, 2003, &result);
        return result;
    }
    // 3.
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_BUFFER_GEOMETRY, "abc", "abc");
    if (flag != 0) { // 应为 失败
        napi_create_int32(env, 2001, &result);
        return result;
    }

    OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    napi_create_int32(env, SUCCESS, &result);
    return result;
}

/*
napi_value OHAbcDef(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    napi_create_int32(env, SUCCESS, &result);
    return result;
}
*/