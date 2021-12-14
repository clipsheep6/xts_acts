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
    * @tc.number    : SUB_MEDIA_AVMETADATA_FUNCTION
    * @tc.name      : 001.avmetadatahelper，元数据基本功能
    * @tc.desc      : 元数据
*/
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FUNCTION, Function | MediumTest | Level0)
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
void ActsAVMetadataFuncTest::CheckMeta(std::string uri, std::unordered_map<int32_t, std::string> expectMeta)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
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
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0100, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "CJH"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "Cjh"},
        {AV_KEY_DURATION, "27750"},
        {AV_KEY_GENRE, "CHAOLIU"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "544"},
        {AV_KEY_VIDEO_WIDTH, "960"},
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
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0200, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "CJH"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "Cjh"},
        {AV_KEY_DURATION, "27750"},
        {AV_KEY_GENRE, "CHAOLIU"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "544"},
        {AV_KEY_VIDEO_WIDTH, "960"},
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
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0300, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "CJH"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "Cjh"},
        {AV_KEY_DURATION, "27750"},
        {AV_KEY_GENRE, "CHAOLIU"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "544"},
        {AV_KEY_VIDEO_WIDTH, "960"},
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
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0400, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "CJH"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "Cjh"},
        {AV_KEY_DURATION, "27750"},
        {AV_KEY_GENRE, "CHAOLIU"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "544"},
        {AV_KEY_VIDEO_WIDTH, "960"},
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
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0500, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "CJH"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "Cjh"},
        {AV_KEY_DURATION, "27750"},
        {AV_KEY_GENRE, "CHAOLIU"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "544"},
        {AV_KEY_VIDEO_WIDTH, "960"},
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
HWTEST_F(ActsAVMetadataFuncTest, SUB_MEDIA_AVMETADATA_FORMAT_MP4_0600, Function | MediumTest | Level0)
{
    std::unordered_map<int32_t, std::string> expectMeta = {
        {AV_KEY_ALBUM, "media"},
        {AV_KEY_ALBUM_ARTIST, "media_test"},
        {AV_KEY_ARTIST, "CJH"},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, "Cjh"},
        {AV_KEY_DURATION, "27750"},
        {AV_KEY_GENRE, "CHAOLIU"},
        {AV_KEY_HAS_AUDIO, "yes"},
        {AV_KEY_HAS_VIDEO, "yes"},
        {AV_KEY_MIME_TYPE, "video/mp4"},
        {AV_KEY_NUM_TRACKS, "2"},
        {AV_KEY_SAMPLE_RATE, "44100"},
        {AV_KEY_TITLE, "test"},
        {AV_KEY_VIDEO_HEIGHT, "544"},
        {AV_KEY_VIDEO_WIDTH, "960"},
    };
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/MPEG4+MP3.mp4");
    CheckMeta(uri, expectMeta);
}