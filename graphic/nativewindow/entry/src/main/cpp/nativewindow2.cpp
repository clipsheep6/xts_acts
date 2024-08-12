//
// Created on 2024/8/7.
//
// Node APIs are not fully supported. To solve the compilation error of the interface cannot be found,
// please include "napi/native_api.h".

#include "napi/native_api.h"
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


napi_value testNativeWindowNativeWindowHandleOptSetGetFormatNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();

    OH_NativeBuffer_Format arr[] = {
        NATIVEBUFFER_PIXEL_FMT_CLUT8,        NATIVEBUFFER_PIXEL_FMT_CLUT1,        NATIVEBUFFER_PIXEL_FMT_CLUT4,
        NATIVEBUFFER_PIXEL_FMT_RGB_565,      NATIVEBUFFER_PIXEL_FMT_RGBA_5658,    NATIVEBUFFER_PIXEL_FMT_RGBX_4444,
        NATIVEBUFFER_PIXEL_FMT_RGBA_4444,    NATIVEBUFFER_PIXEL_FMT_RGB_444,      NATIVEBUFFER_PIXEL_FMT_RGBX_5551,
        NATIVEBUFFER_PIXEL_FMT_RGBA_5551,    NATIVEBUFFER_PIXEL_FMT_RGB_555,      NATIVEBUFFER_PIXEL_FMT_RGBX_8888,
        NATIVEBUFFER_PIXEL_FMT_RGBA_8888,    NATIVEBUFFER_PIXEL_FMT_RGB_888,      NATIVEBUFFER_PIXEL_FMT_BGR_565,
        NATIVEBUFFER_PIXEL_FMT_BGRX_4444,    NATIVEBUFFER_PIXEL_FMT_BGRA_4444,    NATIVEBUFFER_PIXEL_FMT_BGRX_5551,
        NATIVEBUFFER_PIXEL_FMT_BGRA_5551,    NATIVEBUFFER_PIXEL_FMT_BGRX_8888,    NATIVEBUFFER_PIXEL_FMT_BGRA_8888,
        NATIVEBUFFER_PIXEL_FMT_YUV_422_I,    NATIVEBUFFER_PIXEL_FMT_YCBCR_422_SP, NATIVEBUFFER_PIXEL_FMT_YCRCB_422_SP,
        NATIVEBUFFER_PIXEL_FMT_YCBCR_420_SP, NATIVEBUFFER_PIXEL_FMT_YCRCB_420_SP, NATIVEBUFFER_PIXEL_FMT_YCBCR_422_P,
        NATIVEBUFFER_PIXEL_FMT_YCRCB_422_P,  NATIVEBUFFER_PIXEL_FMT_YCBCR_420_P,  NATIVEBUFFER_PIXEL_FMT_YCRCB_420_P,
        NATIVEBUFFER_PIXEL_FMT_YUYV_422_PKG, NATIVEBUFFER_PIXEL_FMT_UYVY_422_PKG, NATIVEBUFFER_PIXEL_FMT_YVYU_422_PKG,
        NATIVEBUFFER_PIXEL_FMT_VYUY_422_PKG, NATIVEBUFFER_PIXEL_FMT_RGBA_1010102, NATIVEBUFFER_PIXEL_FMT_YCBCR_P010,
        NATIVEBUFFER_PIXEL_FMT_YCRCB_P010,   NATIVEBUFFER_PIXEL_FMT_RAW10,        NATIVEBUFFER_PIXEL_FMT_VENDER_MASK,
        NATIVEBUFFER_PIXEL_FMT_BUTT};

    for (int i = 0; i < sizeof(arr) / sizeof(OH_NativeBuffer_Format); ++i) {
        auto flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_FORMAT, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1, &result);
            return result;
        }
        int32_t format;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_FORMAT, &format);
        if (flag != 0) {
            napi_create_int32(env, 2, &result);
            return result;
        }
        if (format != arr[i]) {
            napi_create_int32(env, 3, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptSetGetFormatAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t flag;
    int32_t arr[] = {-2147483648, -2147483647, -1000000, -100, -1, 0, 1, 100000, 2147483647};

    for (int i = 0; i < sizeof(arr) / sizeof(OH_NativeBuffer_Format); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_FORMAT, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 1, &result);
            return result;
        }
        int32_t format;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_FORMAT, &format);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 2, &result);
            return result;
        }
        if (format != arr[i]) {
            napi_create_int32(env, (i + 1) * 1000 + 3, &result);
            return result;
        }
    }

    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_FORMAT, "ab%^！#8c");
    if (flag == 0) { // 应为非0
        napi_create_int32(env, 100001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_FORMAT, NULL);
    if (flag != 0) { // 应为成功
        napi_create_int32(env, 100002, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptSetGetUsageNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t flag;
    int32_t arr[] = {-2147483648, -1000, -1, 0, 1, 1000, 100000000, 2147483647};

    for (int i = 0; i < sizeof(arr) / sizeof(OH_NativeBuffer_Usage); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_USAGE, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 1, &result);
            return result;
        }
        int32_t usage;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_USAGE, &usage);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 2, &result);
            return result;
        }
        if (usage != arr[i]) {
            napi_create_int32(env, (i + 1) * 1000 + 3, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptSetGetUsageAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t flag;
    long long arr[] = {-999999999999999999, 999999999999999999};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_USAGE, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 1, &result);
            return result;
        }
        int32_t usage;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_USAGE, &usage);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 2, &result);
            return result;
        }
        if (usage == arr[i]) { // 不应相同
            napi_create_int32(env, (i + 1) * 1000 + 3, &result);
            return result;
        }
    }

    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_USAGE, "");
    if (flag != 0) {
        napi_create_int32(env, 100001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_USAGE, NULL);
    if (flag != 0) {
        napi_create_int32(env, 100001, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetGetStrideNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t arr[] = {-2147483647, -1000, -1, 0, 1, 1000, 2147483647};
    for (int i = 0; i < sizeof(arr) / sizeof(int32_t); ++i) {
        int32_t stride;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_STRIDE, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_STRIDE, &stride);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] != stride) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptSetGetStrideAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    int32_t flag;
    int32_t stride;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    long long arr[] = {-99999999999999999, -2147483648, static_cast<long long>(99999999999999999), 1ll << 63};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_STRIDE, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_STRIDE, &stride);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] == stride) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_STRIDE, NULL);
    if (flag != 0) {
        napi_create_int32(env, 1000001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_STRIDE, "sdasda213!");
    if (flag != 0) {
        napi_create_int32(env, 2000001, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetGetSwapIntervalNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t arr[] = {-2147483647, -1000, -1, 0, 1, 1000, 2147483647};
    for (int i = 0; i < sizeof(arr) / sizeof(int32_t); ++i) {
        int32_t interval;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_SWAP_INTERVAL, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_SWAP_INTERVAL, &interval);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] != interval) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptSetGetSwapIntervalAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    int32_t flag;
    int32_t stride;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    long long arr[] = {-99999999999999999, -2147483648, static_cast<long long>(99999999999999999), 1ll << 63};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_STRIDE, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_STRIDE, &stride);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] == stride) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_STRIDE, NULL);
    if (flag != 0) {
        napi_create_int32(env, 1000001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_STRIDE, "sdasda213!");
    if (flag != 0) {
        napi_create_int32(env, 2000001, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetGetColorGamutNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t arr[] = {-2147483647, -1000, -1, 0, 1, 1000, 2147483647};
    for (int i = 0; i < sizeof(arr) / sizeof(int32_t); ++i) {
        int32_t gamut;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_COLOR_GAMUT, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_COLOR_GAMUT, &gamut);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] != gamut) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptSetGetColorGamutAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    int32_t flag;
    int32_t gamut;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    long long arr[] = {-99999999999999999, -2147483648, static_cast<long long>(99999999999999999), 1ll << 63};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_COLOR_GAMUT, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_COLOR_GAMUT, &gamut);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] == gamut) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_COLOR_GAMUT, NULL);
    if (flag != 0) {
        napi_create_int32(env, 1000001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_COLOR_GAMUT, "sdasda213!");
    if (flag != 0) {
        napi_create_int32(env, 2000001, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetGetTransformNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t arr[] = {-2147483647, -1000, -1, 0, 1, 1000, 2147483647};
    for (int i = 0; i < sizeof(arr) / sizeof(int32_t); ++i) {
        int32_t transform;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_TRANSFORM, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_TRANSFORM, &transform);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] != transform) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptSetGetTransformAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    int32_t flag;
    int32_t gamut;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    long long arr[] = {-99999999999999999, -2147483648, static_cast<long long>(99999999999999999), 1ll << 63};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_TRANSFORM, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_TRANSFORM, &gamut);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] == gamut) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_TRANSFORM, NULL);
    if (flag != 0) {
        napi_create_int32(env, 1000001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_TRANSFORM, "sdasda213!");
    if (flag != 0) {
        napi_create_int32(env, 2000001, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetUiTimeStampNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    uint64_t arr[] = {0, 1, 1000, 1ull << 63, 999999999999999999};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_UI_TIMESTAMP, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowNativeWindowHandleOptSetUiTimeStampAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int64_t arr[] = {-(1ll << 63), -((1ll << 63) - 1), 1ll << 63};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_UI_TIMESTAMP, arr[i]);
        if (flag == 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_UI_TIMESTAMP, "sdasda213!");
    if (flag == 0) {
        napi_create_int32(env, 100001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_UI_TIMESTAMP, NULL);
    if (flag == 0) {
        napi_create_int32(env, 200001, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptGetBufferQueueSize(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t size;

    int32_t flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_BUFFERQUEUE_SIZE, &size);
    if (flag != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    if (size != 3) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetHdrWhitePointBrightnessNormal(napi_env env,
                                                                                 napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t brightness;

    float arr[] = {0.0f, 0.00001f, 0.5f, 0.123456f, 0.99999f, 1.0f};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        int32_t flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_HDR_WHITE_POINT_BRIGHTNESS, brightness);
        if (flag != 0) {
            napi_create_int32(env, i + 1, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetHdrWhitePointBrightnessAbnormal(napi_env env,
                                                                                   napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t brightness;

    float arr[] = {-0.1f, 1.1f, -100, 0, 100};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        int32_t flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_HDR_WHITE_POINT_BRIGHTNESS, brightness);
        if (flag == 0) {
            napi_create_int32(env, i + 1, &result);
            return result;
        }
    }
    int32_t flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_HDR_WHITE_POINT_BRIGHTNESS, "test123@@#");
    if (flag == 0) {
        napi_create_int32(env, 1001, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetSdrWhitePointBrightnessNormal(napi_env env,
                                                                                 napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t brightness;

    float arr[] = {0.0f, 0.00001f, 0.5f, 0.123456f, 0.99999f, 1.0f};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        int32_t flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_SDR_WHITE_POINT_BRIGHTNESS, brightness);
        if (flag != 0) {
            napi_create_int32(env, i + 1, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetSdrWhitePointBrightnessAbnormal(napi_env env,
                                                                                   napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t brightness;

    float arr[] = {-0.1f, 1.1f, -100, 0, 100};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        int32_t flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_SDR_WHITE_POINT_BRIGHTNESS, brightness);
        if (flag == 0) {
            napi_create_int32(env, i + 1, &result);
            return result;
        }
    }
    int32_t flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_SDR_WHITE_POINT_BRIGHTNESS, "test123@@#");
    if (flag == 0) {
        napi_create_int32(env, 1001, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetGetSourceTypeNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t sourceType;
    int32_t flag;

    int32_t arr[] = {OH_SURFACE_SOURCE_DEFAULT, OH_SURFACE_SOURCE_UI, OH_SURFACE_SOURCE_GAME, OH_SURFACE_SOURCE_CAMERA,
                     OH_SURFACE_SOURCE_VIDEO};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_SOURCE_TYPE, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_SOURCE_TYPE, &sourceType);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (sourceType != arr[i]) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetGetSourceTypeAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int64_t arr[] = {-(1L << 31), -((1L << 31) - 1), -1000, -1, 5, 1000, (1L >> 31) - 1, 1L >> 31};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_SOURCE_TYPE, arr[i]);
        if (flag == 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        int32_t sourceType;
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_SOURCE_TYPE, &sourceType);
        if (flag == 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (sourceType == arr[i]) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_SOURCE_TYPE, "sdasda213!");
    if (flag == 0) {
        napi_create_int32(env, 100001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_SOURCE_TYPE, NULL);
    if (flag == 0) {
        napi_create_int32(env, 200001, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetGetAppFrameworkTypeNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    int32_t flag;
    char *frameworkType;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    const char *arr[] = {NULL,       "",     "   ",      "0123",
                   "应用框架", "Test", "!@#$%&*(", "这里一共是二十一个汉字这里一共是二十一个汉"};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_APP_FRAMEWORK_TYPE, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_APP_FRAMEWORK_TYPE, &frameworkType);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] == frameworkType) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowHandleOptSetGetAppFrameworkTypeAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    int32_t flag;
    char *frameworkType;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    const char *arr[] = {"这里一共是二十二个汉字这里一共是二十二个汉字",
                        "64test64!@#$%&*64test64test64aaa64test64!@#$%&*64test64test64aaa",
                        "63test63!@#$%&*63test63test63aaa63test63!@#$%&*63test63test63aa",
                        "65test65!@#$%&*65test65test65aaa65test65!@#$%&*65test65test65aaaa"};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_APP_FRAMEWORK_TYPE, arr[i]);
        if (flag == 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_APP_FRAMEWORK_TYPE, &frameworkType);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (arr[i] == frameworkType) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }

    // frameworkType = 0
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_APP_FRAMEWORK_TYPE, 0);
    if (flag == 0) {
        napi_create_int32(env, 1000001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_APP_FRAMEWORK_TYPE, &frameworkType);
    if (flag != 0) {
        napi_create_int32(env, 1000002, &result);
        return result;
    }
    if (0 == frameworkType) {
        napi_create_int32(env, 1000003, &result);
        return result;
    }

    // frameworkType = 135
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, SET_APP_FRAMEWORK_TYPE, 135);
    if (flag == 0) {
        napi_create_int32(env, 2000001, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowHandleOpt(nativeWindow, GET_APP_FRAMEWORK_TYPE, &frameworkType);
    if (flag != 0) {
        napi_create_int32(env, 2000002, &result);
        return result;
    }
    if (0 == frameworkType) {
        napi_create_int32(env, 2000003, &result);
        return result;
    }


    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowSetSetScalingModeV2Nullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    int32_t flag;
    flag = OH_NativeWindow_NativeWindowSetScalingModeV2(nullptr, OH_SCALING_MODE_FREEZE_V2);
    if (flag == 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    flag = OH_NativeWindow_NativeWindowSetScalingModeV2(nativeWindow, static_cast<OHScalingModeV2>(100));
    if (flag == 0) {
        napi_create_int32(env, 2, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowNativeWindowSetScalingModeV2ScalingMode(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    int32_t flag;
    OHScalingModeV2 arr[] = {OH_SCALING_MODE_FREEZE_V2, OH_SCALING_MODE_SCALE_TO_WINDOW_V2,
                             OH_SCALING_MODE_SCALE_CROP_V2, OH_SCALING_MODE_NO_SCALE_CROP_V2,
                             OH_SCALING_MODE_SCALE_FIT_V2};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_NativeWindowSetScalingModeV2(nativeWindow, OH_SCALING_MODE_FREEZE_V2);
        if (flag != 0) {
            napi_create_int32(env, i + 1, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowGetColorSpaceFirst(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    int32_t flag;
    OH_NativeBuffer_ColorSpace colorSpace;
    flag = OH_NativeWindow_GetColorSpace(nativeWindow, &colorSpace);
    if (flag != 50002000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowSetColorSpaceNormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    int32_t flag;
    OH_NativeBuffer_ColorSpace arr[] = {OH_COLORSPACE_NONE,
                                        OH_COLORSPACE_BT601_EBU_FULL,
                                        OH_COLORSPACE_BT601_SMPTE_C_FULL,
                                        OH_COLORSPACE_BT709_FULL,
                                        OH_COLORSPACE_BT2020_HLG_FULL,
                                        OH_COLORSPACE_BT2020_PQ_FULL,
                                        OH_COLORSPACE_BT601_EBU_LIMIT,
                                        OH_COLORSPACE_BT601_SMPTE_C_LIMIT,
                                        OH_COLORSPACE_BT709_LIMIT,
                                        OH_COLORSPACE_BT2020_HLG_LIMIT,
                                        OH_COLORSPACE_BT2020_PQ_LIMIT,
                                        OH_COLORSPACE_SRGB_FULL,
                                        OH_COLORSPACE_P3_FULL,
                                        OH_COLORSPACE_P3_HLG_FULL,
                                        OH_COLORSPACE_P3_PQ_FULL,
                                        OH_COLORSPACE_ADOBERGB_FULL,
                                        OH_COLORSPACE_SRGB_LIMIT,
                                        OH_COLORSPACE_P3_LIMIT,
                                        OH_COLORSPACE_P3_HLG_LIMIT,
                                        OH_COLORSPACE_P3_PQ_LIMIT,
                                        OH_COLORSPACE_ADOBERGB_LIMIT,
                                        OH_COLORSPACE_LINEAR_SRGB,
                                        OH_COLORSPACE_LINEAR_BT709,
                                        OH_COLORSPACE_LINEAR_P3,
                                        OH_COLORSPACE_LINEAR_BT2020,
                                        OH_COLORSPACE_DISPLAY_SRGB,
                                        OH_COLORSPACE_DISPLAY_P3_SRGB,
                                        OH_COLORSPACE_DISPLAY_P3_HLG,
                                        OH_COLORSPACE_DISPLAY_P3_PQ,
                                        OH_COLORSPACE_DISPLAY_BT2020_SRGB,
                                        OH_COLORSPACE_DISPLAY_BT2020_HLG,
                                        OH_COLORSPACE_DISPLAY_BT2020_PQ};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        flag = OH_NativeWindow_SetColorSpace(nativeWindow, arr[i]);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 1, &result);
            return result;
        }
        OH_NativeBuffer_ColorSpace colorSpace;
        flag = OH_NativeWindow_GetColorSpace(nativeWindow, &colorSpace);
        if (flag != 0) {
            napi_create_int32(env, (i + 1) * 1000 + 2, &result);
            return result;
        }
        if (colorSpace != arr[i]) {
            napi_create_int32(env, (i + 1) * 1000 + 3, &result);
            return result;
        }
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowSetColorSpaceNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    flag = OH_NativeWindow_SetColorSpace(nullptr, OH_COLORSPACE_NONE);
    if (flag != 40001000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowSetColorSpaceAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;
    OHNativeWindow *nativeWindow = InitNativeWindow();

    int32_t flag;
    flag = OH_NativeWindow_SetColorSpace(nativeWindow, static_cast<OH_NativeBuffer_ColorSpace>(114514));
    if (flag != 40001000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowGetColorSpaceNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OH_NativeBuffer_ColorSpace ret;
    flag = OH_NativeWindow_GetColorSpace(nullptr, &ret);
    if (flag != 40001000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowGetMetadataValueFirst(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t ret1;
    uint8_t *ret2;
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowSetDynamicMetadataValue(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t ret1;
    uint8_t *ret2;
    uint8_t *buffer;

    // 1. X=-1 set调用失败 get调用失败
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, -1, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 1001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 1002, &result);
        return result;
    }
    // 2. X=0 set调用失败 get调用失败
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 0, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 2001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 2002, &result);
        return result;
    }
    // 3. X=1 set调用成功 get调用成功 两者一致
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 1, new uint8_t[1]);
    if (flag != 0) {
        napi_create_int32(env, 3001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 3002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 1) != 0) {
        napi_create_int32(env, 3003, &result);
        return result;
    }
    // 4. X=60 set调用成功 get调用成功 两者一致
    buffer = new uint8_t[60];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 60, buffer);
    if (flag != 0) {
        napi_create_int32(env, 4001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 4002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 60) != 0) {
        napi_create_int32(env, 4003, &result);
        return result;
    }
    delete[] buffer;
    // 5. X=2999 set调用成功 get调用成功 两者一致
    buffer = new uint8_t[2999];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 2999, buffer);
    if (flag != 0) {
        napi_create_int32(env, 5001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 5002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 2999) != 0) {
        napi_create_int32(env, 5003, &result);
        return result;
    }
    delete[] buffer;
    // 6. X=3000 set调用成功 get调用成功 两者一致
    buffer = new uint8_t[3000];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 3000, buffer);
    if (flag != 0) {
        napi_create_int32(env, 6001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 6002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 3000) != 0) {
        napi_create_int32(env, 6003, &result);
        return result;
    }
    delete[] buffer;
    // 7. X=3001 set调用失败 get调用失败
    buffer = new uint8_t[3001];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 3001, buffer);
    if (flag != 40001000) {
        napi_create_int32(env, 7001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 7002, &result);
        return result;
    }
    delete[] buffer;
    // 8. X=100000000 set调用失败 get调用失败
    buffer = new uint8_t[100000000];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 100000000, buffer);
    if (flag != 40001000) {
        napi_create_int32(env, 8001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 8002, &result);
        return result;
    }
    delete[] buffer;

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowSetMetadataValueTimes(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t ret1;
    uint8_t *ret2;
    uint8_t *buffer;

    for (int i = 0; i < 60; ++i) {
        buffer = new uint8_t[60];
        flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 60, buffer);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 1, &result);
            return result;
        }
        flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
        if (flag != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 2, &result);
            return result;
        }
        if (memcmp(buffer, ret2, 60) != 0) {
            napi_create_int32(env, 1000 * (i + 1) + 3, &result);
            return result;
        }
    }
    
    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowSetStaticMetadataValue(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t ret1;
    uint8_t *ret2;
    uint8_t *buffer;

    // 1. X=-1 set调用失败 get调用失败
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, -1, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 1001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 1002, &result);
        return result;
    }
    // 2. X=0 set调用失败 get调用失败
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, 0, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 2001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 2002, &result);
        return result;
    }
    // 3. X=1 set调用成功 get调用成功 两者一致
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, 1, new uint8_t[1]);
    if (flag != 0) {
        napi_create_int32(env, 3001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 3002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 1) != 0) {
        napi_create_int32(env, 3003, &result);
        return result;
    }
    // 4. X=60 set调用成功 get调用成功 两者一致
    buffer = new uint8_t[60];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, 60, buffer);
    if (flag != 0) {
        napi_create_int32(env, 4001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 4002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 60) != 0) {
        napi_create_int32(env, 4003, &result);
        return result;
    }
    delete[] buffer;
    // 5. X=2999 set调用成功 get调用成功 两者一致
    buffer = new uint8_t[2999];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, 2999, buffer);
    if (flag != 0) {
        napi_create_int32(env, 5001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 5002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 2999) != 0) {
        napi_create_int32(env, 5003, &result);
        return result;
    }
    delete[] buffer;
    // 6. X=3000 set调用成功 get调用成功 两者一致
    buffer = new uint8_t[3000];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, 3000, buffer);
    if (flag != 0) {
        napi_create_int32(env, 6001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 6002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 3000) != 0) {
        napi_create_int32(env, 6003, &result);
        return result;
    }
    delete[] buffer;
    // 7. X=3001 set调用失败 get调用失败
    buffer = new uint8_t[3001];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, 3001, buffer);
    if (flag != 40001000) {
        napi_create_int32(env, 7001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 7002, &result);
        return result;
    }
    delete[] buffer;
    // 8. X=100000000 set调用失败 get调用失败
    buffer = new uint8_t[100000000];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, 100000000, buffer);
    if (flag != 40001000) {
        napi_create_int32(env, 8001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_STATIC_METADATA, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 8002, &result);
        return result;
    }
    delete[] buffer;

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowSetMetadataValue(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    int32_t ret1;
    uint8_t *ret2;
    uint8_t *buffer;

    // 1. X=-1 set调用失败 get调用失败
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, -1, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 1001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 1002, &result);
        return result;
    }
    // 2. X=0 set调用失败 get调用失败
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, 0, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 2001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 2002, &result);
        return result;
    }
    // 3. X=1 set调用成功 get调用成功 两者一致
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, 1, new uint8_t[1]);
    if (flag != 0) {
        napi_create_int32(env, 3001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 3002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 1) != 0) {
        napi_create_int32(env, 3003, &result);
        return result;
    }
    // 4. X=60 set调用成功 get调用成功 两者一致
    buffer = new uint8_t[60];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, 60, buffer);
    if (flag != 0) {
        napi_create_int32(env, 4001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 4002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 60) != 0) {
        napi_create_int32(env, 4003, &result);
        return result;
    }
    delete[] buffer;
    // 5. X=2999 set调用成功 get调用成功 两者一致
    buffer = new uint8_t[2999];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, 2999, buffer);
    if (flag != 0) {
        napi_create_int32(env, 5001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 5002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 2999) != 0) {
        napi_create_int32(env, 5003, &result);
        return result;
    }
    delete[] buffer;
    // 6. X=3000 set调用成功 get调用成功 两者一致
    buffer = new uint8_t[3000];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, 3000, buffer);
    if (flag != 0) {
        napi_create_int32(env, 6001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 6002, &result);
        return result;
    }
    if (memcmp(buffer, ret2, 3000) != 0) {
        napi_create_int32(env, 6003, &result);
        return result;
    }
    delete[] buffer;
    // 7. X=3001 set调用失败 get调用失败
    buffer = new uint8_t[3001];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, 3001, buffer);
    if (flag != 40001000) {
        napi_create_int32(env, 7001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 7002, &result);
        return result;
    }
    delete[] buffer;
    // 8. X=100000000 set调用失败 get调用失败
    buffer = new uint8_t[100000000];
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, 100000000, buffer);
    if (flag != 40001000) {
        napi_create_int32(env, 8001, &result);
        return result;
    }
    flag = OH_NativeWindow_GetMetadataValue(nativeWindow, OH_HDR_METADATA_TYPE, &ret1, &ret2);
    if (flag != 50002000) {
        napi_create_int32(env, 8002, &result);
        return result;
    }
    delete[] buffer;

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowSetNullMetadataValue(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    uint8_t *buffer = new uint8_t[60];
    flag =
        OH_NativeWindow_SetMetadataValue(nativeWindow, static_cast<OH_NativeBuffer_MetadataKey>(1919810), 60, buffer);
    if (flag != 50002000) {
        napi_create_int32(env, FAIL, &result);
        return result;
    }

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowSetMetadataValueNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    uint8_t *buffer = new uint8_t[60];
    flag = OH_NativeWindow_SetMetadataValue(nullptr, OH_HDR_DYNAMIC_METADATA, 60, buffer);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 60, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    delete[] buffer;

    napi_create_int32(env, SUCCESS, &result);
    return result;
}


napi_value testNativeWindowGetMetadataValueAbnormal(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    uint8_t *buffer = new uint8_t[60];
    flag = OH_NativeWindow_SetMetadataValue(nullptr, OH_HDR_DYNAMIC_METADATA, 60, buffer);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    flag = OH_NativeWindow_SetMetadataValue(nativeWindow, OH_HDR_DYNAMIC_METADATA, 60, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    delete[] buffer;

    napi_create_int32(env, SUCCESS, &result);
    return result;
}

napi_value testNativeWindowGetMetadataValueNullptr(napi_env env, napi_callback_info info) {
    napi_value result = nullptr;

    int32_t flag;
    OHNativeWindow *nativeWindow = InitNativeWindow();
    uint8_t *buffer = new uint8_t[60];
    int32_t ret1;
    uint8_t *ret2;
    // 1.
    flag = OH_NativeWindow_SetMetadataValue(nullptr, OH_HDR_DYNAMIC_METADATA, 60, buffer);
    if (flag != 0) {
        napi_create_int32(env, 1, &result);
        return result;
    }
    // 2.
    flag = OH_NativeWindow_GetMetadataValue(nullptr, OH_HDR_DYNAMIC_METADATA, &ret1, nullptr);
    if (flag != 40001000) {
        napi_create_int32(env, 2, &result);
        return result;
    }
    // 3.
    flag = OH_NativeWindow_GetMetadataValue(nullptr, OH_HDR_DYNAMIC_METADATA, nullptr, &ret2);
    if (flag != 40001000) {
        napi_create_int32(env, 3, &result);
        return result;
    }
    // 4.
    flag = OH_NativeWindow_GetMetadataValue(nullptr, OH_HDR_DYNAMIC_METADATA, &ret1, &ret2);
    if (flag != 0) {
        napi_create_int32(env, 4, &result);
        return result;
    }
    if (memcmp(ret2, buffer, 60)) {
        napi_create_int32(env, 5, &result);
        return result;
    }
    delete[] buffer;

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