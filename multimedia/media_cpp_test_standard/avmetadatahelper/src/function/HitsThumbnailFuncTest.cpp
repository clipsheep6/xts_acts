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

#include "HitsAVMetadataFuncTest.h"
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
void HitsAVMetadataFuncTest::GetThumbnail(const std::string uri)
{
    std::shared_ptr < TestAVMetadataHelper > helper = std::make_shared < TestAVMetadataHelper >();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, 0, 0, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = { -1, -1, PixelFormat::RGB_565 };

    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr < PixelMap > frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 5000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);

    timeUs = 0;
    queryOption = AVMetadataQueryOption::AV_META_QUERY_PREVIOUS_SYNC;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 5000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);

    timeUs = 0;
    queryOption = AV_META_QUERY_CLOSEST_SYNC;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 5000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);

    timeUs = 0;
    queryOption = AVMetadataQueryOption::AV_META_QUERY_CLOSEST;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 5000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
}

/**
    * @tc.number    : GetAbnormalThumbnail
    * @tc.name      : Get Thumbnail
    * @tc.desc      : Get THUMBNAIL Function case
*/
void HitsAVMetadataFuncTest::GetAbnormalThumbnail(const std::string uri)
{
    std::shared_ptr < TestAVMetadataHelper > helper = std::make_shared < TestAVMetadataHelper >();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, 0, 0, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = { -1, -1, PixelFormat::RGB_565 };

    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr < PixelMap > frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);

    timeUs = 5000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_webm_0001
    * @tc.name      : get fetchframe  from none_abnormal_vorbis.webm
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_webm_0100, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/none_abnormal_vorbis.webm");
GetAbnormalThumbnail (uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_webm_0002
    * @tc.name      : get fetchframe  from vp8_none_audio.webm
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_webm_0200, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/vp8_none_audio.webm");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_webm_0003
    * @tc.name      : get fetchframe  from vp8_none_audio_640x480_30r.webm
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_webm_0300, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/vp8_none_audio_640x480_30r.webm");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_webm_0004
    * @tc.name      : get fetchframe  from vp8_vorbis_1080p_60r.webm
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_webm_0400, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/vp8_vorbis_1080p_60r.webm");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_webm_0005
    * @tc.name      : get fetchframe  from vp8_vorbis_270p_10r.webm
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_webm_0500, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/vp8_vorbis_270p_10r.webm");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_webm_0006
    * @tc.name      : get fetchframe  from vp8_vorbis_480p_25r.webm
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_webm_0600, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/vp8_vorbis_480p_25r.webm");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_webm_0007
    * @tc.name      : get fetchframe  from vp8_vorbis_640x480_25r.webm
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_webm_0700, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/vp8_vorbis_640x480_25r.webm");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_webm_0008
    * @tc.name      : get fetchframe  fromvp8_vorbis_720p_30r.webm
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_webm_0800, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/vp8_vorbis_720p_30r.webm");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_2800
    * @tc.name      : Resolution 480x320
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_2800, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3500, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_3800, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_4900, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5200, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_5500, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_6300, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0100, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0200, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0300, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0400, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0500, Function | MediumTest | Level0)
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
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0600, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/MPEG4_MP3.mp4");
GetThumbnail(uri);
}


/**
    * @tc.number    :  SUB_MEDIA_THUMBNAIL_FORMAT_TS_0001
    * @tc.name      : 02.ts (h264+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0100, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_aac_1080p_60r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0002
    * @tc.name      : 02.ts (h264+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0200, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_aac_270p_10r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0003
    * @tc.name      : 02.ts (h264+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0300, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_aac_480p_25r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0004
    * @tc.name      : 02.ts (h264+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0400, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_aac_640x480_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0005
    * @tc.name      : 02.ts (h264+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0500, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_aac_720p_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0006
    * @tc.name      : 02.ts (h264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0600, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_mp3_1080p_60r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0007
    * @tc.name      : 02.ts (h264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0700, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_mp3_270p_10r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0008
    * @tc.name      : 01.ts (H264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0800, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_mp3_480p_25r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0009
    * @tc.name      : 02.ts (H264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0900, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_mp3_640x480_25r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0010
    * @tc.name      : 02.ts (H264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1000, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_mp3_720p_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0011
    * @tc.name      : 02.ts
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1100, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_none_audio.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0012
    * @tc.name      : Resolution 640x480
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1200, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_none_audio_640x480_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0013
    * @tc.name      : 02.ts(MPEG2+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1300, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_aac_1080p_60r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0014
    * @tc.name      : 02.ts(MPEG2+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1400, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_aac_270p_10r.ts");
GetThumbnail(uri);
}


/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0015
    * @tc.name      : 02.ts(MPEG2+aac)�?
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1500, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_aac_480p_25r.ts");
GetThumbnail(uri);
}


/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0016
    * @tc.name      : 02.ts(MPEG2+aac)�?
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1600, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_aac_640x480_30r.ts");
GetThumbnail(uri);
}


/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0017
    * @tc.name      : 02.ts(MPEG2+aac)�?
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1700, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_aac_720p_30r.ts");
GetThumbnail(uri);
}


/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0018
    * @tc.name      : 02.ts(MPEG2+mp3)�?
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1800, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_mp3_1080p_60r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0019
    * @tc.name      : 02.ts(MPEG2+mp3)�?
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1900, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_mp3_270p_10r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0020
    * @tc.name      : 02.ts(MPEG2+mp3)�?
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2000, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_mp3_480p_25r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0021
    * @tc.name      : 02.ts(MPEG2+mp3)�?
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2100, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_mp3_640x480_25r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0022
    * @tc.name      : 02.ts(MPEG2+mp3)�?
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2200, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_mp3_720p_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0023
    * @tc.name      : 02.ts(mpeg2+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2300, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_none_audio.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0024
    * @tc.name      : 02.ts(mpeg2+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2400, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_none_audio_640x480_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0025
    * @tc.name      : 02.ts(mpeg2+aac)
    * @tc.desc      : Get THUMBNAIL
*/

HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2500, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_1080p_60r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0026
    * @tc.name      : 02.ts(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2600, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_270p_10r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0027
    * @tc.name      : 02.ts(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2700, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_480p_25r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0028
    * @tc.name      : 02.ts(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2800, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_640x480_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0029
    * @tc.name      : 02.ts(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2900, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_720p_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0030
    * @tc.name      : 02.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3000, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_mp3_1080p_60r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0031
    * @tc.name      : 02.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3100, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_mp3_270p_10r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0032
    * @tc.name      :  02.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3200, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_mp3_480p_25r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0033
    * @tc.name      : 02.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3300, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_mp3_640x480_25r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0034
    * @tc.name      : 02.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3400, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_mp3_720p_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0035
    * @tc.name      : 02.ts(mpeg4+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3500, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_none_audio.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0036
    * @tc.name      : 02.ts(mpeg4+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3600, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_none_audio_640x480_30r.ts");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0034
    * @tc.name      : 02.ts(one_video_aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3700, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/none_abnormal_aac.ts");
GetAbnormalThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0034
    * @tc.name      : 02.ts(none_abnormal_mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3800, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/none_abnormal_mp3.ts");
GetAbnormalThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0001
    * @tc.name      : 02.mkv(h263+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0100, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_aac_1408x1152_30r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0002
    * @tc.name      : 02.mkv(h263+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0200, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_aac_1408x1152_60r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0003
    * @tc.name      : 02.mkv(h263+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0300, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_aac_352x288_30r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0004
    * @tc.name      : 02.mkv(h263+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0400, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_aac_640x480_30r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0005
    * @tc.name      : 02.mkv(h263+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0500, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_mp3_128x96_10r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0006
    * @tc.name      : 02.mkv(h263+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0600, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_mp3_1408x1152_10r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0007
    * @tc.name      :02.mkv(h263+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0700, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_mp3_1408x1152_25r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0008
    * @tc.name      : 02.mkv(h263+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0800, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_mp3_176x144_25r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0009
    * @tc.name      : 02.mkv( h263_none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0900, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_none_audio_1408x1152.mkv");
GetThumbnail(uri);
}


/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0010
    * @tc.name      : 02.mkv( h263_none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1000, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h263_none_audio_640x480_30r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0011
    * @tc.name      :02.mkv( h264_none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1100, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_none_audio_640x480_30r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0012
    * @tc.name      : 02.mkv(mpeg2+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1200, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_none_audio.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0013
    * @tc.name      : 02.mkv(mpeg2+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1300, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg2_none_audio_640x480_30r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0014
    * @tc.name      : 02.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1400, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_1080p_60r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0015
    * @tc.name      : 02.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1500, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_270p_10r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0016
    * @tc.name      : 02.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1600, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_270p_25r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0017
    * @tc.name      : 02.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1700, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_480p_25r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0018
    * @tc.name      : 02.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1800, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_640x480_30r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0019
    * @tc.name      : 02.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_1900, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_aac_720p_30r.mkv");
GetThumbnail(uri);
}
/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0020
    * @tc.name      : 02.mkv(mpeg4+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_2000, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_none_audio.mkv");
GetThumbnail(uri);
}
/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0021
    * @tc.name      :02.mkv(mpeg4+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_2100, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/mpeg4_none_audio_640x480_30r.mkv");
GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0022
    * @tc.name      : 02.mkv(none_abnormal+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_2200, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/none_abnormal_aac.mkv");
GetAbnormalThumbnail(uri);
}
/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0023
    * @tc.name      : 02.mkv(none_abnormal+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_2300, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/none_abnormal_mp3.mkv");
GetAbnormalThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_mkv_0024
    * @tc.name      : 02.mkv(none_abnormal)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_mkv_2400, Function | MediumTest | Level0)
{
std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
std::string("/h264_none_audio.mkv");
GetThumbnail(uri);
}