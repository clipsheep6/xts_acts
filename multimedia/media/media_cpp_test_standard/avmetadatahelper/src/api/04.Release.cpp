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
    * @tc.name      : 00.Release after Create
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_Release_0000, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_SetSource_0100
    * @tc.name      : 01.Release after SetSource
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_Release_0100, Function | MediumTest | Level0)
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
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_Release_0200
    * @tc.name      : 02.Release 3 times
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_Release_0200, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/H264_AAC.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_META_ONLY));
    helper->Release();
    helper->Release();
    helper->Release();
}
