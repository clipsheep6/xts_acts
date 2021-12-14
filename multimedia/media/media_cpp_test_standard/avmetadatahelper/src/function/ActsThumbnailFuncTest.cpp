/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#include "ActsAVMetadataFuncTest.h"
#include "securec.h"
#include "gtest/gtest.h"

using namespace std;
using namespace OHOS;
using namespace OHOS::Media;
using namespace testing::ext;
using namespace TestAVMetadataBasic;

/**
    * @tc.number    : GetThumbnail
    * @tc.name      : Get Thumbnail
    * @tc.desc      : Get THUMBNAIL Function case
*/
void ActsAVMetadataFuncTest::GetThumbnail(const std::string uri)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));

    struct PixelMapParams param = {-1, -1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 5000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);

    param = {-1, -1, PixelFormat::RGB_888};
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 0;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_1800
    * @tc.name      : Resolution 128x72
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_1800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_128_72.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_1900
    * @tc.name      : Resolution 128x96
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_1900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_128_96.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2000
    * @tc.name      : Resolution 160x120
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_160_120.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2100
    * @tc.name      : Resolution 170x170
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_170_170.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2200
    * @tc.name      : Resolution 320x134
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_320_134.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2300
    * @tc.name      : Resolution 320x180
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_320_180.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2400
    * @tc.name      : Resolution 320x240
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_320_240.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2500
    * @tc.name      : Resolution 320x256
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_320_256.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2600
    * @tc.name      : Resolution 320x320
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_320_320.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2700
    * @tc.name      : Resolution 480x270
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_480_270.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2800
    * @tc.name      : Resolution 480x320
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_480_320.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2900
    * @tc.name      : Resolution 480x348
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_480_348.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3000
    * @tc.name      : Resolution 480x360
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_480_360.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3100
    * @tc.name      : Resolution 480x480
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_480_480.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3200
    * @tc.name      : Resolution 640x268
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_268.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3300
    * @tc.name      : Resolution 640x320
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3400
    * @tc.name      : Resolution 640x360
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_360.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3500
    * @tc.name      : Resolution 640x480
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_480.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3600
    * @tc.name      : Resolution 640x512
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_512.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3700
    * @tc.name      : Resolution 640x640
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_640.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3800
    * @tc.name      : Resolution 720x480
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_720_480.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_3900
    * @tc.name      : Resolution 720x576
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_720_576.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4000
    * @tc.name      : Resolution 768x480
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_768_480.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4100
    * @tc.name      : Resolution 800x450
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_800_450.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4200
    * @tc.name      : Resolution 800x600
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_800_600.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4300
    * @tc.name      : Resolution 800x640
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_800_640.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4400
    * @tc.name      : Resolution 800x800
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_800_800.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4500
    * @tc.name      : Resolution 960x402
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_960_402.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4600
    * @tc.name      : Resolution 960x540
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_960_540.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4700
    * @tc.name      : Resolution 960x640
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_960_640.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4800
    * @tc.name      : Resolution 960x768
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_960_768.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_4900
    * @tc.name      : Resolution 1024x512
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1024_512.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5000
    * @tc.name      : Resolution 1024x576
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1024_576.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5100
    * @tc.name      : Resolution 1024x1024
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1024_1024.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5200
    * @tc.name      : Resolution 1080x720
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1080_720.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5300
    * @tc.name      : Resolution 1152x720
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1152_720.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5400
    * @tc.name      : Resolution 1280x536
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1280_536.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5500
    * @tc.name      : Resolution 1280x720
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1280_720.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5600
    * @tc.name      : Resolution 1280x1024
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1280_1024.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5700
    * @tc.name      : Resolution 1440x720
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1440_720.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5800
    * @tc.name      : Resolution 1440x810
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1440_810.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_5900
    * @tc.name      : Resolution 1600x800
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1600_800.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_6000
    * @tc.name      : Resolution 1600x900
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_6000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1600_900.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_6100
    * @tc.name      : Resolution 1728x1080
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_6100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1728_1080.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_6200
    * @tc.name      : Resolution 1920x960
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_6200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1904_1072.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_6300
    * @tc.name      : Resolution 1920x1080
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_6300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1912_1080.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0100
    * @tc.name      : 01.MP4 (H264+AAC)
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0200
    * @tc.name      : 02.MP4 (H264+MP3)
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_MP3.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0300
    * @tc.name      : 02.MP4 (MPEG2+AAC)
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG2_AAC.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0400
    * @tc.name      : 02.MP4 (MPEG2+MP3)
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG2_MP3.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0500
    * @tc.name      : 02.MP4 (MPEG4+AAC)
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG4_AAC.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0600
    * @tc.name      : 02.MP4 (MPEG4+MP3)
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG4_MP3.mp4");
    GetThumbnail(uri);
}
