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
    * @tc.number    : SUB_MEDIA_AVMETADATA_FUNCTION
    * @tc.name      : 001.avmetadatahelper
    * @tc.desc      : metadata, check basic info
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FUNCTION, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> avMetadataHelper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, avMetadataHelper);
    ASSERT_EQ(true, avMetadataHelper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetUri();
    ASSERT_EQ(RET_OK, avMetadataHelper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    avMetadataHelper->PrintMetadata();
}

/**
    Function: compare metadata
    Description: test for metadata
    Input: uri, expected MetaData
    Return: null
*/
void HitsAVMetadataFuncTest::CheckMeta(std::string uri, std::unordered_map<int32_t, std::string> expectMeta)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, 0, 0, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    for (auto &item : expectMeta) {
        std::string value = helper->ResolveMetadata(item.first);
        EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(item.first, value, item.second), true);
    }
    auto resultMetas = helper->ResolveMetadata();
    EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(resultMetas, expectMeta), true);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_0100
    * @tc.name      : 01.MP4 format Get MetaData (H264+AAC)
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0100, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "10030"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "480"},
        {AV_KEY_VIDEO_WIDTH, "720"},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_0200
    * @tc.name      : 02.MP4 format Get MetaData (H264+MP3)
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0200, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "10030"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "480"},
        {AV_KEY_VIDEO_WIDTH, "720"},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_MP3.mp4");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_0300
    * @tc.name      : 03.MP4 format Get MetaData (MPEG2+AAC)
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0300, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "10030"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "480"},
        {AV_KEY_VIDEO_WIDTH, "720"},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG2_AAC.mp4");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_0400
    * @tc.name      : 04.MP4 format Get MetaData (MPEG2+MP3)
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0400, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "10030"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "480"},
        {AV_KEY_VIDEO_WIDTH, "720"},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG2_MP3.mp4");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_0500
    * @tc.name      : 05.MP4 format Get MetaData (MPEG4+AAC)
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0500, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "10030"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "480"},
        {AV_KEY_VIDEO_WIDTH, "720"},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG4_AAC.mp4");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_0600
    * @tc.name      : 06.MP4 format Get MetaData (MPEG4+MP3)
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0600, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "10030"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "480"},
        {AV_KEY_VIDEO_WIDTH, "720"},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG4_MP3.mp4");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_M4A_0100
    * @tc.name      : 01.M4A format Get MetaData 
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_M4A_0100, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "219562"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, ""},
        {AV_KEY_MIME_TYPE, "audio/mp4"},
        {AV_KEY_NUM_TRACKS, "1"},
        {AV_KEY_SAMPLE_RATE, "48000"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, ""},
        {AV_KEY_VIDEO_WIDTH, ""},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG-4_48000_32_1.m4a");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_AAC_0100
    * @tc.name      : 01.AAC format Get MetaData 
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_AAC_0100, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, ""},
        {AV_KEY_ALBUM_ARTIST, ""},
        {AV_KEY_ARTIST, ""},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, ""},
        {AV_KEY_DURATION, "219780"},
        {AV_KEY_GENRE, ""},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, ""},
        {AV_KEY_MIME_TYPE, "audio/aac-adts"},
        {AV_KEY_NUM_TRACKS, "1"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, ""},
        {AV_KEY_VIDEO_HEIGHT, ""},
        {AV_KEY_VIDEO_WIDTH, ""},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/AAC_48000_32_1.aac");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_OGG_0100
    * @tc.name      : 01.OGG format Get MetaData 
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_OGG_0100, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, "media"},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "219550"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, ""},
        {AV_KEY_MIME_TYPE, "audio/ogg"},
        {AV_KEY_NUM_TRACKS, "1"},
        {AV_KEY_SAMPLE_RATE, "48000"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, ""},
        {AV_KEY_VIDEO_WIDTH, ""},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/OGG_48000_1.ogg");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_WAV_0100
    * @tc.name      : 01.WAV format Get MetaData 
    * @tc.desc      : test ResolveMetadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_WAV_0100, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, ""},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, ""},
        {AV_KEY_DURATION, "5460"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, ""},
        {AV_KEY_MIME_TYPE, "audio/wav"},
        {AV_KEY_NUM_TRACKS, "1"},
        {AV_KEY_SAMPLE_RATE, "48000"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, ""},
        {AV_KEY_VIDEO_WIDTH, ""},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vorbis_48000_32_1.wav");
    CheckMeta(uri, expectMeta);
}

/****************************new testcase********************************************/
/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP3_0100
    * @tc.name      : get metadata from MP3_48000_32_1.mp3 
    * @tc.desc      : get metadata from MP3_48000_32_1.mp3
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP3_0100, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, "media"},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "219600"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, ""},
        {AV_KEY_MIME_TYPE, "audio/mpeg"},
        {AV_KEY_NUM_TRACKS, "1"},
        {AV_KEY_SAMPLE_RATE, "48000"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, ""},
        {AV_KEY_VIDEO_WIDTH, ""},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MP3_48000_32_1.mp3");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_0GG_0200
    * @tc.name      : get metadata from OGG_48000_1.ogg 
    * @tc.desc      : get metadata from OGG_48000_1.ogg
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_OGG_0200, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, "media"},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "219550"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, ""},
        {AV_KEY_MIME_TYPE, "audio/ogg"},
        {AV_KEY_NUM_TRACKS, "1"},
        {AV_KEY_SAMPLE_RATE, "48000"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, ""},
        {AV_KEY_VIDEO_WIDTH, ""},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/OGG_48000_1.ogg");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_WAV_0300
    * @tc.name      : get metadata from vorbis_48000_32_1.wav 
    * @tc.desc      : get metadata from vorbis_48000_32_1.wav 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_WAV_0300, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, ""},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, ""},
        {AV_KEY_DURATION, "5460"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, ""},
        {AV_KEY_MIME_TYPE, "audio/wav"},
        {AV_KEY_NUM_TRACKS, "1"},
        {AV_KEY_SAMPLE_RATE, "48000"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, ""},
        {AV_KEY_VIDEO_WIDTH, ""},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vorbis_48000_32_1.wav");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_TS_0400
    * @tc.name      : get metadata from h264_aac_1080p_60r.ts
    * @tc.desc      : get metadata from h264_aac_1080p_60r.ts
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_TS_0400, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, ""},
        {AV_KEY_ALBUM_ARTIST, ""},
        {AV_KEY_ARTIST, ""},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, ""},
        {AV_KEY_DURATION, "10158"},
        {AV_KEY_GENRE, ""},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mpeg-ts"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, ""},
        {AV_KEY_TITLE, ""},
        {AV_KEY_VIDEO_HEIGHT, ""},
        {AV_KEY_VIDEO_WIDTH, ""},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_aac_1080p_60r.ts");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_WEBM_0500
    * @tc.name      : get metadata from vp8_vorbis_720p_30r.webm  
    * @tc.desc      : get metadata from vp8_vorbis_720p_30r.webm 
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_WEBM_0500, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, ""},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "10070"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/webm"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "48000"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "720"},
        {AV_KEY_VIDEO_WIDTH, "1280"},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/vp8_vorbis_720p_30r.webm");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MKV_0600
    * @tc.name      : get metadata from mpeg4_aac_720p_30r.mkv  
    * @tc.desc      : get metadata from mpeg4_aac_720p_30r.mkv
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MKV_0600, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, ""},
        {AV_KEY_ARTIST, "元数据测试"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "测试"},
        {AV_KEY_DURATION, "10089"},
        {AV_KEY_GENRE, "Lyrical"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mkv"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "88200"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "720"},
        {AV_KEY_VIDEO_WIDTH, "1280"},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/mpeg4_aac_720p_30r.mkv");
    CheckMeta(uri, expectMeta);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_0700
    * @tc.name      : GET AV_KEY_VIDEO_ORIENTATION FROM MP4_ROTATE_90.mp4
    * @tc.desc      : GET AV_KEY_VIDEO_ORIENTATION FROM MP4_ROTATE_90.mp4
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0700, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MP4_ROTATE_90.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    std::string metadata = helper->ResolveMetadata(AV_KEY_VIDEO_ORIENTATION);
    ASSERT_EQ("rotate-270", metadata);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_0800
    * @tc.name      : GET AV_KEY_VIDEO_ORIENTATION FROM MP4_ROTATE_180.mp4
    * @tc.desc      : GET AV_KEY_VIDEO_ORIENTATION FROM MP4_ROTATE_180.mp4
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0800, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MP4_ROTATE_180.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    std::string metadata = helper->ResolveMetadata(AV_KEY_VIDEO_ORIENTATION);
    ASSERT_EQ("rotate-180", metadata);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_0900
    * @tc.name      : GET AV_KEY_VIDEO_ORIENTATION FROM MP4_ROTATE_270.mp4
    * @tc.desc      : GET AV_KEY_VIDEO_ORIENTATION FROM MP4_ROTATE_270.mp4
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0900, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MP4_ROTATE_270.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    std::string metadata = helper->ResolveMetadata(AV_KEY_VIDEO_ORIENTATION);
    ASSERT_EQ("rotate-90", metadata);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_SURFACE_FORMAT_MP3_1000
    * @tc.name      : Get SURFACE FROM MP3_SURFACE.mp3
    * @tc.desc      : Get SURFACE FROM MP3_SURFACE.mp3
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_SURFACE_FORMAT_MP3_1000, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MP3_SURFACE.mp3");

    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, 0, 0, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    std::shared_ptr<AVSharedMemory> frame = helper->FetchArtPicture();
    helper->SurfaceToFile(frame, testInfo_->name());
    ASSERT_EQ(51.3046875*1024, frame->GetSize());
}

/**
    * @tc.number    : SUB_MEDIA_SURFACE_FORMAT_OGG_1100
    * @tc.name      : Get SURFACE FROM OGG_SURFACE.ogg
    * @tc.desc      : Get SURFACE FROM OGG_SURFACE.ogg
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_SURFACE_FORMAT_OGG_1100, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/OGG_SURFACE.ogg");

    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, 0, 0, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    std::shared_ptr<AVSharedMemory> frame = helper->FetchArtPicture();
    helper->SurfaceToFile(frame, testInfo_->name());
    ASSERT_EQ(51.3046875*1024, frame->GetSize());
}

/**
    * @tc.number    : SUB_MEDIA_SURFACE_FORMAT_MP4_1200
    * @tc.name      : Get SURFACE FROM MP4_SURFACE.mp4
    * @tc.desc      : Get SURFACE FROM MP4_SURFACE.mp4
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_SURFACE_FORMAT_MP4_1200, Function | MediumTest | Level0)
{
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MP4_SURFACE.mp4");

    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, 0, 0, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    std::shared_ptr<AVSharedMemory> frame = helper->FetchArtPicture();
    helper->SurfaceToFile(frame, testInfo_->name());
    ASSERT_EQ(51.3046875*1024, frame->GetSize());
}

/**
    * @tc.number    : SUB_MEDIA_FRAME_FORMAT_MP4_1300
    * @tc.name      : Fetch frame queryOption is AV_META_QUERY_NEXT_SYNC
    * @tc.desc      : Fetch frame queryOption is AV_META_QUERY_NEXT_SYNC
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_FRAME_FORMAT_MP4_1300, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper); 
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {-1, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_FRAME_FORMAT_MP4_1400
    * @tc.name      : Fetch frame queryOption is AV_META_QUERY_PREVIOUS_SYNC
    * @tc.desc      : Fetch frame queryOption is AV_META_QUERY_PREVIOUS_SYNC
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_FRAME_FORMAT_MP4_1400, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper); 
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {-1, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_PREVIOUS_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_FRAME_FORMAT_MP4_1500
    * @tc.name      : Fetch frame queryOption is AV_META_QUERY_CLOSEST_SYNC
    * @tc.desc      : Fetch frame queryOption is AV_META_QUERY_CLOSEST_SYNC
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_FRAME_FORMAT_MP4_1500, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper); 
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {-1, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_CLOSEST_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_FRAME_FORMAT_MP4_1600
    * @tc.name      : Fetch frame queryOption is AV_META_QUERY_CLOSEST
    * @tc.desc      : Fetch frame queryOption is AV_META_QUERY_CLOSEST
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_FRAME_FORMAT_MP4_1600, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper); 
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {-1, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_CLOSEST;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATA_FORMAT_MP4_1700
    * @tc.name      : Set the Key value to 99999 to get metadata
    * @tc.desc      : Set the Key value to 99999 to get metadata
*/
HWTEST_F(HitsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_1700, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper); 
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/h264_aac_1280x1024_30r.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    std::string metadata = helper->ResolveMetadata(99999);
    ASSERT_EQ("", metadata);
    helper->Release();
}