/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "napi/native_api.h"
#include <GLES3/gl32.h>
#include <native_buffer/native_buffer.h>
#include <native_image/native_image.h>
#include <native_window/external_window.h>

#define FAIL (-1)
#define ERROR_TWO (-2)
#define NO_ERROR 0
#define SUCCESS 0
#define PARAM_UNNORMAL (-1)
#define PARAM_0 0
#define ONEVAL 1

static OHNativeWindow *getNativeWindow()
{
    GLuint textureId = SUCCESS;
    glGenTextures(ONEVAL, &textureId);
    OH_NativeImage *image = OH_NativeImage_Create(textureId, GL_TEXTURE_2D);
    OHNativeWindow *nativeWindow = OH_NativeImage_AcquireNativeWindow(image);
    return nativeWindow;
}
static OHNativeWindowBuffer *getNativeWindowBuffer(OHNativeWindow *nativeWindow)
{
    int32_t code = SET_BUFFER_GEOMETRY;
    int32_t width = 0x100;
    int32_t height = 0x100;
    OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, code, width, height);
    OHNativeWindowBuffer *buffer = nullptr;
    int fenceFd;
    OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &buffer, &fenceFd);
    return buffer;
}

static napi_value OHNativeWindowDestroyNativeWindow(napi_env env, napi_callback_info info)
{
    int backInfo = NO_ERROR;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow == nullptr) {
        backInfo = FAIL;
    } else {
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowDestroyNativeWindowBuffer(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    OHNativeWindowBuffer *buffer = getNativeWindowBuffer(nativeWindow);
    if (buffer != nullptr) {
        backInfo = SUCCESS;
        OH_NativeWindow_DestroyNativeWindowBuffer(buffer);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowRequestBuffer(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        int fenceFd;
        OHNativeWindowBuffer *buffer = getNativeWindowBuffer(nativeWindow);
        backInfo = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, &buffer, &fenceFd);
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowFlushBuffer(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        int fenceFd = -1;
        struct Region *region = new Region();
        struct Region::Rect *rect = new Region::Rect();
        rect->x = 0x100;
        rect->y = 0x100;
        rect->w = 0x100;
        rect->h = 0x100;
        region->rects = rect;
        OHNativeWindowBuffer *buffer = getNativeWindowBuffer(nativeWindow);
        backInfo = OH_NativeWindow_NativeWindowFlushBuffer(nativeWindow, buffer, fenceFd, *region);
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowAbortBuffer(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        OHNativeWindowBuffer *buffer = getNativeWindowBuffer(nativeWindow);
        backInfo = OH_NativeWindow_NativeWindowAbortBuffer(nativeWindow, buffer);
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowHandleOpt(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        int code = SET_BUFFER_GEOMETRY;
        int32_t heightSet = 0x100;
        int32_t widthSet = 0x100;
        backInfo = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, code, heightSet, widthSet);
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowGetBufferHandleFromNative(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        OHNativeWindowBuffer *buffer = getNativeWindowBuffer(nativeWindow);
        BufferHandle *bufferHandle = OH_NativeWindow_GetBufferHandleFromNative(buffer);
        if (bufferHandle != nullptr) {
            backInfo = SUCCESS;
        }
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeObjectReference(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        backInfo = OH_NativeWindow_NativeObjectReference(nativeWindow);
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeObjectUnreference(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        backInfo = OH_NativeWindow_NativeObjectUnreference(nativeWindow);
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowGetNativeObjectMagic(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        backInfo = OH_NativeWindow_GetNativeObjectMagic(nativeWindow);
        if (backInfo >= NO_ERROR) {
            backInfo = SUCCESS;
        }
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowSetScalingMode(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        OHScalingMode scalingMode = OHScalingMode::OH_SCALING_MODE_SCALE_TO_WINDOW;
        backInfo = OH_NativeWindow_NativeWindowSetScalingMode(nativeWindow, PARAM_UNNORMAL, scalingMode);
        if (backInfo >= NO_ERROR) {
            backInfo = SUCCESS;
        }
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowRequestBufferAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        int fenceFd = PARAM_0;
        backInfo = OH_NativeWindow_NativeWindowRequestBuffer(nativeWindow, nullptr, &fenceFd);
        if (backInfo != 0) {
            backInfo = FAIL;
        }
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowFlushBufferAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        int fenceFd = -1;
        struct Region *region = new Region();
        struct Region::Rect *rect = new Region::Rect();
        rect->x = 0x100;
        rect->y = 0x100;
        rect->w = 0x100;
        rect->h = 0x100;
        region->rects = rect;
        backInfo = OH_NativeWindow_NativeWindowFlushBuffer(nativeWindow, nullptr, fenceFd, *region);
        if (backInfo != 0) {
            backInfo = FAIL;
        }
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowAbortBufferAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        OHNativeWindowBuffer *buffer = nullptr;
        backInfo = OH_NativeWindow_NativeWindowAbortBuffer(nativeWindow, buffer);
        if (backInfo != NO_ERROR) {
            backInfo = FAIL;
        }
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;

    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowHandleOptAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    int code = SET_BUFFER_GEOMETRY;
    int32_t heightSet = 0x100;
    int32_t widthSet = 0x100;
    backInfo = OH_NativeWindow_NativeWindowHandleOpt(nullptr, code, heightSet, widthSet);
    if (backInfo != NO_ERROR) {
        backInfo = FAIL;
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowGetBufferHandleFromNativeAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    BufferHandle *bufferHandle = OH_NativeWindow_GetBufferHandleFromNative(nullptr);
    if (bufferHandle != nullptr) {
        backInfo = SUCCESS;
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeObjectReferenceAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    backInfo = OH_NativeWindow_NativeObjectReference(nullptr);
    if (backInfo != NO_ERROR) {
        backInfo = FAIL;
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeObjectUnreferenceAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    backInfo = OH_NativeWindow_NativeObjectUnreference(nullptr);
    if (backInfo != NO_ERROR) {
        backInfo = FAIL;
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowGetNativeObjectMagicAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    backInfo = OH_NativeWindow_GetNativeObjectMagic(nullptr);
    if (backInfo != NO_ERROR) {
        backInfo = FAIL;
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowSetScalingModeAbnormal(napi_env env, napi_callback_info info)
{
    OHScalingMode scalingMode = OHScalingMode::OH_SCALING_MODE_SCALE_TO_WINDOW;
    int backInfo = FAIL;
    backInfo = OH_NativeWindow_NativeWindowSetScalingMode(nullptr, PARAM_UNNORMAL, scalingMode);
    if (backInfo != NO_ERROR) {
        backInfo = FAIL;
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowSetMetaDataAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        OH_NativeWindow_NativeWindowSetMetaData(nativeWindow, PARAM_UNNORMAL, PARAM_0, nullptr);
        if (backInfo != NO_ERROR) {
            backInfo = FAIL;
        }
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;

    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowSetMetaDataSetAbnormal(napi_env env, napi_callback_info info)
{
    OHHDRMetadataKey key = OHHDRMetadataKey::OH_METAKEY_HDR10_PLUS;
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        backInfo = OH_NativeWindow_NativeWindowSetMetaDataSet(nativeWindow, PARAM_UNNORMAL, key, PARAM_0, nullptr);
        if (backInfo != NO_ERROR) {
            backInfo = FAIL;
        }
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}

static napi_value OHNativeWindowNativeWindowSetTunnelHandleAbnormal(napi_env env, napi_callback_info info)
{
    int backInfo = FAIL;
    OHNativeWindow *nativeWindow = getNativeWindow();
    if (nativeWindow != nullptr) {
        backInfo = OH_NativeWindow_NativeWindowSetTunnelHandle(nativeWindow, nullptr);
        if (backInfo != NO_ERROR) {
            backInfo = FAIL;
        }
        OH_NativeWindow_DestroyNativeWindow(nativeWindow);
    }
    napi_value result = nullptr;
    napi_create_int32(env, backInfo, &result);
    return result;
}
EXTERN_C_START
napi_property_descriptor desc[] = {
    {"oHNativeWindowDestroyNativeWindow", nullptr, OHNativeWindowDestroyNativeWindow, nullptr, nullptr, nullptr,
     napi_default, nullptr},
    {"oHNativeWindowDestroyNativeWindowBuffer", nullptr, OHNativeWindowDestroyNativeWindowBuffer, nullptr, nullptr,
     nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowRequestBuffer", nullptr, OHNativeWindowNativeWindowRequestBuffer, nullptr, nullptr,
     nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowFlushBuffer", nullptr, OHNativeWindowNativeWindowFlushBuffer, nullptr, nullptr,
     nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowAbortBuffer", nullptr, OHNativeWindowNativeWindowAbortBuffer, nullptr, nullptr,
     nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowHandleOpt", nullptr, OHNativeWindowNativeWindowHandleOpt, nullptr, nullptr, nullptr,
     napi_default, nullptr},
    {"oHNativeWindowGetBufferHandleFromNative", nullptr, OHNativeWindowGetBufferHandleFromNative, nullptr, nullptr,
     nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeObjectReference", nullptr, OHNativeWindowNativeObjectReference, nullptr, nullptr, nullptr,
     napi_default, nullptr},
    {"oHNativeWindowNativeObjectUnreference", nullptr, OHNativeWindowNativeObjectUnreference, nullptr, nullptr,
     nullptr, napi_default, nullptr},
    {"oHNativeWindowGetNativeObjectMagic", nullptr, OHNativeWindowGetNativeObjectMagic, nullptr, nullptr, nullptr,
     napi_default, nullptr},
    {"oHNativeWindowNativeWindowSetScalingMode", nullptr, OHNativeWindowNativeWindowSetScalingMode, nullptr,
     nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowRequestBufferAbnormal", nullptr, OHNativeWindowNativeWindowRequestBufferAbnormal,
     nullptr, nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowFlushBufferAbnormal", nullptr, OHNativeWindowNativeWindowFlushBufferAbnormal,
     nullptr, nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowAbortBufferAbnormal", nullptr, OHNativeWindowNativeWindowAbortBufferAbnormal,
     nullptr, nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowHandleOptAbnormal", nullptr, OHNativeWindowNativeWindowHandleOptAbnormal, nullptr,
     nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowGetBufferHandleFromNativeAbnormal", nullptr, OHNativeWindowGetBufferHandleFromNativeAbnormal,
     nullptr, nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeObjectReferenceAbnormal", nullptr, OHNativeWindowNativeObjectReferenceAbnormal, nullptr,
     nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeObjectUnreferenceAbnormal", nullptr, OHNativeWindowNativeObjectUnreferenceAbnormal,
     nullptr, nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowGetNativeObjectMagicAbnormal", nullptr, OHNativeWindowGetNativeObjectMagicAbnormal, nullptr,
     nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowSetScalingModeAbnormal", nullptr, OHNativeWindowNativeWindowSetScalingModeAbnormal,
     nullptr, nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowSetMetaDataAbnormal", nullptr, OHNativeWindowNativeWindowSetMetaDataAbnormal,
     nullptr, nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowSetMetaDataSetAbnormal", nullptr, OHNativeWindowNativeWindowSetMetaDataSetAbnormal,
     nullptr, nullptr, nullptr, napi_default, nullptr},
    {"oHNativeWindowNativeWindowSetTunnelHandleAbnormal", nullptr,
     OHNativeWindowNativeWindowSetTunnelHandleAbnormal, nullptr, nullptr, nullptr, napi_default, nullptr},
};
static napi_value Init(napi_env env, napi_value exports)
{
    desc;
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);

    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "native",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterModule(void) { napi_module_register(&demoModule); }