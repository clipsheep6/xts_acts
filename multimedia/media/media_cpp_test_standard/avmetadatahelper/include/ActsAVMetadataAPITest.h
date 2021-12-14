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
#ifndef AVMETADATAHELPER_API_TEST_H
#define AVMETADATAHELPER_API_TEST_H

#include "TestAVMetadataHelper.h"
#include "gtest/gtest.h"

namespace OHOS {
namespace Media {
class ActsAVMetadataAPITest : public testing::Test {
public:
    // SetUpTestCase: before all testcases
    static void SetUpTestCase(void)
    {
        MEDIA_INFO_LOG("ActsAVMetadataAPITest::SetUpTestCase");
        TestAVMetadataBasic::TestParamsConfig::GetInstance().InitMountPath();
    };
    // TearDownTestCase: after all testcase
    static void TearDownTestCase(void)
    {
        MEDIA_INFO_LOG("ActsAVMetadataAPITest::TearDownTestCase");
    };
    // SetUp
    void SetUp(void)
    {
        testInfo_ = ::testing::UnitTest::GetInstance()->current_test_info();
        MEDIA_DEBUG_LOG("ActsAVMetadataAPITest::SetUp:%s", testInfo_->name());
    };
    // TearDown
    void TearDown(void)
    {
        MEDIA_DEBUG_LOG("ActsAVMetadataAPITest::TearDown:%s", testInfo_->name());
    };
    const ::testing::TestInfo *testInfo_ = nullptr;
    std::unordered_map<int32_t, std::string> m4aMeta = {
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
    std::unordered_map<int32_t, std::string> oggMeta = {
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
    std::unordered_map<int32_t, std::string> emptyMeta = {
        {AV_KEY_ALBUM, ""},
        {AV_KEY_ALBUM_ARTIST, ""},
        {AV_KEY_ARTIST, ""},
        {AV_KEY_AUTHOR, ""},
        {AV_KEY_COMPOSER, ""},
        {AV_KEY_DURATION, ""},
        {AV_KEY_GENRE, ""},
        {AV_KEY_HAS_AUDIO, ""},
        {AV_KEY_HAS_VIDEO, ""},
        {AV_KEY_MIME_TYPE, ""},
        {AV_KEY_NUM_TRACKS, ""},
        {AV_KEY_SAMPLE_RATE, ""},
        {AV_KEY_TITLE, ""},
        {AV_KEY_VIDEO_HEIGHT, ""},
        {AV_KEY_VIDEO_WIDTH, ""},
    };
};
}
}
#endif
