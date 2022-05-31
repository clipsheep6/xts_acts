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
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, 0, 0, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {-1, -1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    const int64_t timeMaxUs = 5000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    queryOption = AVMetadataQueryOption::AV_META_QUERY_PREVIOUS_SYNC;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    frame = helper->FetchFrameAtTime(timeMaxUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    queryOption = AV_META_QUERY_CLOSEST_SYNC;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    frame = helper->FetchFrameAtTime(timeMaxUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    queryOption = AVMetadataQueryOption::AV_META_QUERY_CLOSEST;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    frame = helper->FetchFrameAtTime(timeMaxUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : GetAbnormalThumbnail
    * @tc.name      : Get Thumbnail
    * @tc.desc      : Get THUMBNAIL Function case
*/
void HitsAVMetadataFuncTest::GetAbnormalThumbnail(const std::string uri)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, 0, 0, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {-1, -1, PixelFormat::RGB_565};

    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    
    const int64_t timeMaxUs = 5000000;
    frame = helper->FetchFrameAtTime(timeMaxUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0100
    * @tc.name      : 01.WEBM (NONE)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/none_abnormal_vorbis.webm");
    GetAbnormalThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0200
    * @tc.name      : 02.WEBM (VP8+NONE)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vp8_none_audio.webm");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0300
    * @tc.name      : 03.WEBM (VP8+NONE+640x480)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vp8_none_audio_640x480_30r.webm");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0400
    * @tc.name      : 04.WEBM (VP8+1080P)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vp8_vorbis_1080p_60r.webm");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0500
    * @tc.name      : 05.WEBM (VP8+270P)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vp8_vorbis_270p_10r.webm");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0600
    * @tc.name      : 06.WEBM (VP8+480P)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vp8_vorbis_480p_25r.webm");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0700
    * @tc.name      : 07.WEBM (VP8+640x480)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vp8_vorbis_640x480_25r.webm");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0800
    * @tc.name      : 08.WEBM (VP8+720P)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_WEBM_0800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vp8_vorbis_720p_30r.webm");
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
    * @tc.name      : 03.MP4 (MPEG2+AAC)
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
    * @tc.name      : 04.MP4 (MPEG2+MP3)
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
    * @tc.name      : 05.MP4 (MPEG4+AAC)
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
    * @tc.name      : 06.MP4 (MPEG4+MP3)
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MP4_0600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG4_MP3.mp4");
    GetThumbnail(uri);
}


/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0100
    * @tc.name      : 01.ts (h264+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_aac_1080p_60r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0200
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
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0300
    * @tc.name      : 03.ts (h264+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_aac_480p_25r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0400
    * @tc.name      : 04.ts (h264+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_aac_640x480_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0500
    * @tc.name      : 05.ts (h264+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_aac_720p_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0600
    * @tc.name      : 06.ts (h264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_mp3_1080p_60r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0700
    * @tc.name      : 07.ts (h264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_mp3_270p_10r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0800
    * @tc.name      : 08.ts (H264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_mp3_480p_25r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_0900
    * @tc.name      : 09.ts (H264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_0900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_mp3_640x480_25r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1000
    * @tc.name      : 10.ts (H264+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_mp3_720p_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1100
    * @tc.name      : 11.ts (h264+none)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_none_audio.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1200
    * @tc.name      : 12.ts (h264+none)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_none_audio_640x480_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1300
    * @tc.name      : 13.ts(MPEG2+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_aac_1080p_60r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1400
    * @tc.name      : 14.ts(MPEG2+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_aac_270p_10r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1500
    * @tc.name      : 15.ts(MPEG2+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_aac_480p_25r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1600
    * @tc.name      : 16.ts(MPEG2+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_aac_640x480_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1700
    * @tc.name      : 17.ts(MPEG2+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_aac_720p_30r.ts");
    GetThumbnail(uri);
}


/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1800
    * @tc.name      : 18.ts(MPEG2+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_mp3_1080p_60r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_1900
    * @tc.name      : 19.ts(MPEG2+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_1900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_mp3_270p_10r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2000
    * @tc.name      : 20.ts(MPEG2+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_mp3_480p_25r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2100
    * @tc.name      : 21.ts(MPEG2+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_mp3_640x480_25r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2200
    * @tc.name      : 22.ts(MPEG2+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_mp3_720p_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2300
    * @tc.name      : 23.ts(mpeg2+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_none_audio.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2400
    * @tc.name      : 24.ts(mpeg2+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_none_audio_640x480_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2500
    * @tc.name      : 25.ts(mpeg2+aac)
    * @tc.desc      : Get THUMBNAIL
*/

HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_1080p_60r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2600
    * @tc.name      : 26.ts(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_270p_10r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2700
    * @tc.name      : 27.ts(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_480p_25r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2800
    * @tc.name      : 28.ts(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_640x480_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_2900
    * @tc.name      : 29.ts(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_2900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_720p_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_3000
    * @tc.name      : 30.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_mp3_1080p_60r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_3100
    * @tc.name      : 31.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_mp3_270p_10r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_3200
    * @tc.name      : 32.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_mp3_480p_25r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_3300
    * @tc.name      : 33.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_mp3_640x480_25r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_3400
    * @tc.name      : 34.ts(mpeg4+MP3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_mp3_720p_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_3500
    * @tc.name      : 35.ts(mpeg4+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_none_audio.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_3600
    * @tc.name      : 36.ts(mpeg4+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_none_audio_640x480_30r.ts");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_3700
    * @tc.name      : 37.ts(one_video_aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/none_abnormal_aac.ts");
    GetAbnormalThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_TS_3800
    * @tc.name      : 38.ts(none_abnormal_mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_TS_3800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/none_abnormal_mp3.ts");
    GetAbnormalThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0100
    * @tc.name      : 01.mkv(h263+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_aac_1408x1152_30r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0200
    * @tc.name      : 02.mkv(h263+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_aac_1408x1152_60r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0300
    * @tc.name      : 03.mkv(h263+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_aac_352x288_30r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0400
    * @tc.name      : 04.mkv(h263+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_aac_640x480_30r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0500
    * @tc.name      : 05.mkv(h263+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_mp3_128x96_10r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0600
    * @tc.name      : 06.mkv(h263+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_mp3_1408x1152_10r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0700
    * @tc.name      : 07.mkv(h263+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_mp3_1408x1152_25r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0800
    * @tc.name      : 08.mkv(h263+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_mp3_176x144_25r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0900
    * @tc.name      : 09.mkv( h263_none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_0900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_none_audio_1408x1152.mkv");
    GetThumbnail(uri);
}


/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1000
    * @tc.name      : 10.mkv( h263_none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h263_none_audio_640x480_30r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1100
    * @tc.name      : 11.mkv( h264_none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_none_audio_640x480_30r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1200
    * @tc.name      : 12.mkv(mpeg2+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_none_audio.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1300
    * @tc.name      : 13.mkv(mpeg2+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg2_none_audio_640x480_30r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1400
    * @tc.name      : 14.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_1080p_60r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1500
    * @tc.name      : 15.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_270p_10r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1600
    * @tc.name      : 16.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_270p_25r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1700
    * @tc.name      : 17.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_480p_25r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1800
    * @tc.name      : 18.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1800, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_640x480_30r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1900
    * @tc.name      : 19.mkv(mpeg4+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_1900, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_720p_30r.mkv");
    GetThumbnail(uri);
}
/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2000
    * @tc.name      : 20.mkv(mpeg4+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_none_audio.mkv");
    GetThumbnail(uri);
}
/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2100
    * @tc.name      : 21.mkv(mpeg4+none_audio)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_none_audio_640x480_30r.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2200
    * @tc.name      : 22.mkv(none_abnormal+aac)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/none_abnormal_aac.mkv");
    GetAbnormalThumbnail(uri);
}
/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2300
    * @tc.name      : 23.mkv(none_abnormal+mp3)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/none_abnormal_mp3.mkv");
    GetAbnormalThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2400
    * @tc.name      : 24.mkv(none_abnormal)
    * @tc.desc      : Get THUMBNAIL
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_FORMAT_MKV_2400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_none_audio.mkv");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_0100
    * @tc.name      : 01.Resolution 480x320
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_0100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_480_320.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_0200
    * @tc.name      : 02.Resolution 640x480
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_0200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_480.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_0300
    * @tc.name      : 03.Resolution 720x480
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_0300, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_720_480.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_0400
    * @tc.name      : 04.Resolution 1024x512
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_0400, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1024_512.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_0500
    * @tc.name      : 05.Resolution 1080x720
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_0500, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1080_720.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_0600
    * @tc.name      : 06.Resolution 1280x720
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_0600, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1280_720.mp4");
    GetThumbnail(uri);
}

/**
    * @tc.number    : SUB_MEDIA_THUMBNAIL_RESOLUTION_0700
    * @tc.name      : 07.Resolution 1920x1080
    * @tc.desc      : Get THUMBNAIL 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_THUMBNAIL_RESOLUTION_0700, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_1912_1080.mp4");
    GetThumbnail(uri);
}
