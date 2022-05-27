/*
 * Copyright (C) 2021-2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AVMETADATAHELPER_TEST_H
#define AVMETADATAHELPER_TEST_H

#include "securec.h"
#include "avmetadatahelper.h"
#include "mediatest_log.h"
#include "jpeglib.h"

namespace {
    static const int32_t RET_OK = 0;
    static const int32_t PARA_MAX_LEN = 256;
    static const int32_t dstWidthMin = 32;
    static const int32_t dstHeightMin = 32;
    static const int32_t dstWidthMax = 7680;
    static const int32_t dstHeightMax = 4320;
}

namespace TestAVMetadataBasic {
class TestParamsConfig {
public:
    static TestParamsConfig &GetInstance()
    {
        static TestParamsConfig config;
        return config;
    }
    std::string GetMountPath() const
    {
        return mountPath_;
    }
    void SetMountPath(std::string mountPath)
    {
        mountPath_ = mountPath;
    }
    void InitMountPath();
    std::string GetUri();
    bool StrToInt64(const std::string &str, int64_t &value);
    std::string GetPrettyDuration(int64_t duration);
    bool CompareMetadata(int32_t key, const std::string &result, const std::string &expected);
    bool CompareMetadata(const std::unordered_map<int32_t, std::string> &result,
                         const std::unordered_map<int32_t, std::string> &expected);
private:
    TestParamsConfig();
    ~TestParamsConfig();
    std::string mountPath_ = "";
};
}

namespace OHOS {
namespace Media {
static const int RGB888_PIXEL_BYTES = 3;
static const int RGB565_PIXEL_BYTES = 2;
static const unsigned short RGB565_MASK_RED = 0x001F;
static const unsigned short RGB565_MASK_GREEN = 0x07E0;
static const unsigned short RGB565_MASK_BLUE = 0xF800;
static const unsigned char SHIFT_2_BIT = 2;
static const unsigned char SHIFT_3_BIT = 3;
static const unsigned char SHIFT_5_BIT = 5;
static const unsigned char SHIFT_11_BIT = 11;
static const unsigned char R_INDEX = 2;
static const unsigned char G_INDEX = 1;
static const unsigned char B_INDEX = 0;

class TestAVMetadataHelper {
public:
    std::shared_ptr<OHOS::Media::AVMetadataHelper> avMetadataHelper_ = nullptr;
    TestAVMetadataHelper();
    ~TestAVMetadataHelper();
    DISALLOW_COPY_AND_MOVE(TestAVMetadataHelper);
    bool CreateAVMetadataHelper();
    int32_t SetSource(const std::string &uri, int32_t usage);
    int32_t SetSource(const std::string &path, int64_t offset, int64_t size, int32_t usage);
    void PrintMetadata();
    std::string ResolveMetadata(int32_t key);
    std::unordered_map<int32_t, std::string> ResolveMetadata();
    std::shared_ptr<PixelMap> FetchFrameAtTime(int64_t timeUs, int32_t option, PixelMapParams param);
    std::shared_ptr<AVSharedMemory> FetchArtPicture();
    void Release();
    void FrameToFile(std::shared_ptr<PixelMap> frame, const char *fileName, int64_t timeUs, int32_t queryOption);
    void SurfaceToFile(std::shared_ptr<AVSharedMemory> frame, const char *fileName);
    void FrameToJpeg(std::shared_ptr<PixelMap> frame, const char *fileName, int64_t timeUs, int32_t queryOption);
private:
    int32_t RGB565ToRGB888(const unsigned short *rgb565Buf, int rgb565Size, unsigned char *rgb888Buf, int rgb888Size);
    int32_t Rgb888ToJpeg(const std::string_view &filename, const uint8_t *rgbData, int width, int height);
    struct jpeg_compress_struct jpeg;
    struct jpeg_error_mgr jerr;
};
}
}
#endif
