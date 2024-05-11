#include <hilog/log.h>
#include "pixel_map_module_test.h"
#include <securec.h>
#ifndef _WIN32
#include "securec.h"
#else
#include "memory.h"
#endif

#undef LOG_TAG
#define LOG_TAG "ImagePixelMapNative"

#define SHOW_LOG
#ifdef SHOW_LOG
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, 0xD002B05, "ImagePixelMapNative"};

#define MY_HILOG(op, fmt, args...) \
    do {                                  \
        op(LABEL, "{%{public}s:%{public}d} " fmt, __FUNCTION__, __LINE__, ##args);  \
    } while (0)
#define DEBUG_LOG(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Info, fmt, ##__VA_ARGS__)

#define IMG_TST_LOGF(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Fatal, fmt, ##__VA_ARGS__)
#define IMG_TST_LOGE(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Error, fmt, ##__VA_ARGS__)
#define IMG_TST_LOGW(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Warn, fmt, ##__VA_ARGS__)
#define IMG_TST_LOGI(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Info, fmt, ##__VA_ARGS__)
#define IMG_TST_LOGD(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Debug, fmt, ##__VA_ARGS__)
#else
#define IMG_TST_LOGF(...)
#define IMG_TST_LOGE(...)
#define IMG_TST_LOGW(...)
#define IMG_TST_LOGI(...)
#define IMG_TST_LOGD(...)
#endif

ImagePixelMapNative::ImagePixelMapNative()
{
}

ImagePixelMapNative::~ImagePixelMapNative()
{
}

int32_t ImagePixelMapNative::GetPixelmap(int32_t fd, OH_PixelmapNative **pixelmap)
{
    OH_ImageSourceNative* res = nullptr;
    int32_t ret1 = OH_ImageSourceNative_CreateFromFd(fd, &res);
    if (ret1 != IMAGE_SUCCESS) {
        IMG_TST_LOGE("OH_ImageSourceNative_CreateFromFd failed: err = %{public}d.", ret1);
        return ret1;
    }
    OH_DecodingOptions* options = nullptr;
    int32_t ret2 = OH_DecodingOptions_Create(&options);
    if (ret2 != IMAGE_SUCCESS) {
        OH_ImageSourceNative_Release(res);
        IMG_TST_LOGE("OH_DecodingOptions_Create failed: err = %{public}d.", ret2);
        return ret2;
    }
    int32_t ret3 = OH_ImageSourceNative_CreatePixelmap(res, options, pixelmap);
    if (ret3 != IMAGE_SUCCESS) {
        OH_ImageSourceNative_Release(res);
        OH_DecodingOptions_Release(options);
        IMG_TST_LOGE("OH_ImageSourceNative_CreatePixelmap failed: err = %{public}d.", ret3);
        return ret3;
    }
    OH_ImageSourceNative_Release(res);
    OH_DecodingOptions_Release(options);
    IMG_TST_LOGE("OH_ImageSourceNative_CreatePixelmap success!!!!!");
    return ret3;
}
int32_t ImagePixelMapNative::ConvertPixelmapToNapi(napi_env env, OH_PixelmapNative *pixelmap, napi_value *res)
{
    IMG_TST_LOGE("ConvertPixelmapToNapi here.");
    int32_t ret = OH_PixelmapNative_ConvertPixelmapToNapi(env, pixelmap, res);
    if (ret != 0 || *res == nullptr) {
        OH_PixelmapNative_Release(pixelmap);
        return IMAGE_BAD_PARAMETER;
    }
    OH_PixelmapNative_Release(pixelmap);
    return ret;
}

int32_t ImagePixelMapNative::ConvertPixelmapFromNapi(napi_env env, napi_value source, OH_PixelmapNative **pixelmap)
{
    IMG_TST_LOGE("ConvertPixelmapFromNapi here.");
    int32_t PixelFormat = OH_PixelmapNative_ConvertPixelmapFromNapi(env, source, pixelmap);
    if (pixelmap == nullptr)
    {
        return 1000;
    }
    return PixelFormat;
}

int32_t ImagePixelMapNative::GetPixelmapPixelFormat(napi_env env, OH_PixelmapNative *pixelmap, napi_value *format)
{
    IMG_TST_LOGE("GetPixelmapPixelFormat here.");
    OH_Pixelmap_ImageInfo *info = nullptr; 
    int ret1 = OH_PixelmapImageInfo_Create(&info);
    if (ret1 != 0) {
        OH_PixelmapImageInfo_Release(info);
        return 101;
    }
    int32_t ret2 = OH_PixelmapNative_GetImageInfo(pixelmap, info);
    if (ret2 != 0 || info == nullptr) {
        OH_PixelmapNative_Release(pixelmap);
        OH_PixelmapImageInfo_Release(info);
        return 102;
    }
    
    int32_t PixelFormat = 0;
    int32_t ret3 = OH_PixelmapImageInfo_GetPixelFormat(info, &PixelFormat);
    if (ret3 != IMAGE_SUCCESS) {
        OH_PixelmapNative_Release(pixelmap);
        OH_PixelmapImageInfo_Release(info);
        return ret3;
    }
    OH_PixelmapNative_Release(pixelmap);
    OH_PixelmapImageInfo_Release(info);
    napi_create_int32(env, PixelFormat, format);
    return ret1;
}