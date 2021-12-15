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
#ifndef AVMETADATAHELPER_FUNC_TEST_H
#define AVMETADATAHELPER_FUNC_TEST_H

#include "TestAVMetadataHelper.h"
#include "gtest/gtest.h"

namespace OHOS {
namespace Media {
class ActsAVMetadataFuncTest : public testing::Test {
public:
    // SetUpTestCase: before all testcases
    static void SetUpTestCase(void)
    {
        MEDIA_DEBUG_LOG("ActsAVMetadataHelperFuncTest::SetUpTestCase");
        TestAVMetadataBasic::TestParamsConfig::GetInstance().InitMountPath();
    };
    // TearDownTestCase: after all testcase
    static void TearDownTestCase(void)
    {
        MEDIA_DEBUG_LOG("ActsAVMetadataHelperFuncTest::TearDownTestCase");
    };
    // SetUp
    void SetUp(void)
    {
        testInfo_ = ::testing::UnitTest::GetInstance()->current_test_info();
        MEDIA_DEBUG_LOG("ActsPlayerFuncTest::SetUp:%s", testInfo_->name());
    };
    // TearDown
    void TearDown(void)
    {
        MEDIA_DEBUG_LOG("ActsAVMetadataHelperFuncTest::TearDown");
    };
    void CheckMeta(std::string uri, std::unordered_map<int32_t, std::string> expectMeta);
    void GetThumbnail(const std::string uri);
    const ::testing::TestInfo *testInfo_ = nullptr;
};
}
}
#endif
