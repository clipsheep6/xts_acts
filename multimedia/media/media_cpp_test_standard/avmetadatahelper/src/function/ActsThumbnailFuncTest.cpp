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
