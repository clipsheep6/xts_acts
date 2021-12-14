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

#include "ActsAVMetadataAPITest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace OHOS;
using namespace OHOS::Media;
using namespace testing::ext;
using namespace TestAVMetadataBasic;

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0100
    * @tc.name      : 01.SetSource after CreateAVMetadataHelper
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0100, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0200
    * @tc.name      : 02.SetSource after ResolveMetadata
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0200, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));

    for (auto &item : m4aMeta) {
        std::string value = helper->ResolveMetadata(item.first);
        EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(item.first, value, item.second), true);
    }
    uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_MP3.mp4");
    EXPECT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    auto resultMetas = helper->ResolveMetadata();
    EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(resultMetas, oggMeta), true);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0300
    * @tc.name      : 01.SetSource after ResolveMetadata
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0300, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));

    auto resultMetas = helper->ResolveMetadata();
    EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(resultMetas, m4aMeta), true);
    uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_MP3.mp4");
    EXPECT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    for (auto &item : oggMeta) {
        std::string value = helper->ResolveMetadata(item.first);
        EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(item.first, value, item.second), true);
    }
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0400
    * @tc.name      : 04.SetSource after Release
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0400, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    helper->Release();
    EXPECT_NE(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0500
    * @tc.name      : 05.SetSource AV_META_USAGE_META_ONLY
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0500, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));

    for (auto &item : m4aMeta) {
        std::string value = helper->ResolveMetadata(item.first);
        EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(item.first, value, item.second), true);
    }
    auto resultMetas = helper->ResolveMetadata();
    EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(resultMetas, m4aMeta), true);
    struct PixelMapParams param = {-1, -1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0550
    * @tc.name      : 05.SetSource AV_META_USAGE_PIXEL_MAP
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0550, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));

    for (auto &item : m4aMeta) {
        std::string value = helper->ResolveMetadata(item.first);
        EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(item.first, value, item.second), true);
    }
    auto resultMetas = helper->ResolveMetadata();
    EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(resultMetas, m4aMeta), true);
    struct PixelMapParams param = {-1, -1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0600
    * @tc.name      : 06.SetSource 3 times
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0600, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    for (auto &item : m4aMeta) {
        std::string value = helper->ResolveMetadata(item.first);
        EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(item.first, value, item.second), true);
    }
    auto resultMetas = helper->ResolveMetadata();
    EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(resultMetas, m4aMeta), true);
    helper->Release();
}
