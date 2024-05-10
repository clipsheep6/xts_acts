#include <hilog/log.h>
#include "image_source_module_test.h"
#include "string.h"
#include <securec.h>
#ifndef _WIN32
#include "securec.h"
#else
#include "memory.h"
#endif

#undef LOG_TAG
#define LOG_TAG "ImageSourceModuleTest"

#define SHOW_LOG
#ifdef SHOW_LOG
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, 0xD002B05, "ImageSourceModuleTest"};

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

ImageSourceModuleTest::ImageSourceModuleTest()
{
}

ImageSourceModuleTest::~ImageSourceModuleTest()
{
}

Image_ErrorCode ImageSourceModuleTest::GetImageProperty(int32_t fd, std::string *val)
{
    OH_ImageSourceNative *source;
    Image_ErrorCode ret = OH_ImageSourceNative_CreateFromFd(fd, &source);
    if (ret != IMAGE_SUCCESS) {
        OH_ImageSourceNative_Release(source);
        IMG_TST_LOGE("OH_ImageSourceNative_CreateFromFd failed: err = %{public}d.", ret);
        return ret;
    }

    Image_String value;
    Image_String key;
    std::string str = "GIFLoopCount";
    key.size = str.size();
    key.data = static_cast<char *>(malloc(key.size));
    memcpy_s(key.data, key.size, str.c_str(), str.size());

    ret = OH_ImageSourceNative_GetImageProperty(source, &key, &value);
    if (ret != IMAGE_SUCCESS) {
        OH_ImageSourceNative_Release(source);
        IMG_TST_LOGE("OH_ImageSourceNative_GetImageProperty failed: err = %{public}d.", ret);
        return ret;
    }
    *val = std::string(value.data, value.size);
    free(value.data);
    free(key.data);
    OH_ImageSourceNative_Release(source);
    return ret;
}