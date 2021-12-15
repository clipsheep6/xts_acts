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
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0100
    * @tc.name      : 01.ResolveMetadata after CreateAVMetadataHelper
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0100, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    for (auto &item : emptyMeta) {
        std::string value = helper->ResolveMetadata(item.first);
        EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(item.first, value, item.second), true);
    }
    auto resultMetas = helper->ResolveMetadata();
    EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(resultMetas, emptyMeta), true);

    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0200
    * @tc.name      : 02.ResolveMetadata after SetSource
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0200, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));

    for (auto &item : mp4Meta) {
        std::string value = helper->ResolveMetadata(item.first);
        EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(item.first, value, item.second), true);
    }
    auto resultMetas = helper->ResolveMetadata();
    EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(resultMetas, mp4Meta), true);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0300
    * @tc.name      : 03.ResolveMetadata after Release
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0300, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    helper->Release();
    for (auto &item : emptyMeta) {
        std::string value = helper->ResolveMetadata(item.first);
        EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(item.first, value, item.second), true);
    }
    auto resultMetas = helper->ResolveMetadata();
    EXPECT_EQ(TestParamsConfig::GetInstance().CompareMetadata(resultMetas, emptyMeta), true);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0400
    * @tc.name      : 04.ResolveMetadata key out of range
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0400, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    EXPECT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    auto resultMetas = helper->ResolveMetadata(4);
    EXPECT_STREQ(resultMetas.c_str(), "");
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0500
    * @tc.name      : 05.ResolveMetadata key 999
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0500, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    EXPECT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    auto resultMetas = helper->ResolveMetadata(999);
    EXPECT_STREQ(resultMetas.c_str(), "");
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0600
    * @tc.name      : 06.ResolveMetadata key -1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0600, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    EXPECT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    auto resultMetas = helper->ResolveMetadata(-1);
    EXPECT_STREQ(resultMetas.c_str(), "");
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0700
    * @tc.name      : 07.ResolveMetadata key INT_MAX
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0700, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    EXPECT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    auto resultMetas = helper->ResolveMetadata(INT_MAX);
    EXPECT_STREQ(resultMetas.c_str(), "");
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0800
    * @tc.name      : 08.ResolveMetadata key INT_MAX + 1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_ResolveMetadata_0800, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    EXPECT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    auto resultMetas = helper->ResolveMetadata(INT_MAX + 1);
    EXPECT_STREQ(resultMetas.c_str(), "");
    helper->Release();
}
