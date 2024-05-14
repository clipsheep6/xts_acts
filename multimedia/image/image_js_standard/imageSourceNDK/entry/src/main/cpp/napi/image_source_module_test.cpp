#include <hilog/log.h>
#include "image_source_module_test.h"
#include <securec.h>
#ifndef _WIN32
#include "securec.h"
#else
#include "memory.h"
#endif

#undef LOG_TAG
#define LOG_TAG "ImageSourceNative"

#define SHOW_LOG
#ifdef SHOW_LOG
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, 0xD002B05, "ImageSourceNative"};

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

ImageSourceNative::ImageSourceNative()
{
}

ImageSourceNative::~ImageSourceNative()
{
}

int32_t ImageSourceNative::GetImageSource(int32_t fd, OH_ImageSourceNative **source)
{
    int32_t ret = OH_ImageSourceNative_CreateFromFd(fd, source);
    if (ret != 0) {
        IMG_TST_LOGE("OH_ImageSourceNative_CreateFromFd failed: err = %{public}d.", ret);
        return ret;
    }
    return ret;
}

int32_t ImageSourceNative::GetImageSourceMimeType(OH_ImageSourceNative *source, Image_MimeType *mimetype)
{
    OH_ImageSource_Info *info = nullptr;
    int32_t error = OH_ImageSourceInfo_Create(&info);
    if (error != 0) {
        OH_ImageSourceNative_Release(source);
        return error;
    }
    int32_t index = 0;
    error = OH_ImageSourceNative_GetImageInfo(source, index, info);
    if (error != 0) {
        OH_ImageSourceInfo_Release(info);
        OH_ImageSourceNative_Release(source);
        return 101;
    }
    error = OH_ImageSourceInfo_GetMimeType(info, mimetype);
    if (error != 0) {
        OH_ImageSourceInfo_Release(info);
        OH_ImageSourceNative_Release(source);
        return 102;
    }
    OH_ImageSourceInfo_Release(info);
    OH_ImageSourceNative_Release(source);
    return error;
}