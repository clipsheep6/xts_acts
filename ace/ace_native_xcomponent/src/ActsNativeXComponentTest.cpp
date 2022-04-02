/**
  * Copyright (c) 2022 Huawei Device Co., Ltd.
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  */

#include "gtest/gtest.h"
#include "native_interface_xcomponent.h"

using namespace std;
using namespace testing::ext;
class ActsNativeXComponentTest: public testing::Test {
protected:
    ActsNativeXComponentTest();
    ~ActsNativeXComponentTest();
    static void SetUpTestCase(void){}
    static void TearDownTestCase(void){}
};

/**
 * @tc.number    : ActsNativeXComponentTest_0100
 * @tc.name      : OH_NativeXComponent_GetXComponentIdTest001
 * @tc.desc      : Test OH_NativeXComponent_GetXComponentId
 */
HWTEST(ActsNativeXComponentTest, OH_NativeXComponent_GetXComponentIdTest001, Function | MediumTest | Level2)
{
    int ret;
    ret = OH_NativeXComponent_GetXComponentId(nullptr, nullptr, nullptr);
    EXPECT_EQ(OH_NATIVEXCOMPONENT_RESULT_BAD_PARAMETER, ret);
}

/**
 * @tc.number    : ActsNativeXComponentTest_0200
 * @tc.name      : OH_NativeXComponent_GetXComponentSizeTest001
 * @tc.desc      : Test OH_NativeXComponent_GetXComponentSize
 */
HWTEST(ActsNativeXComponentTest, OH_NativeXComponent_GetXComponentSizeTest001, Function | MediumTest | Level2)
{
    int ret;
    ret = OH_NativeXComponent_GetXComponentSize(nullptr, nullptr, nullptr, nullptr);
    EXPECT_EQ(OH_NATIVEXCOMPONENT_RESULT_BAD_PARAMETER, ret);
}

/**
 * @tc.number    : ActsNativeXComponentTest_0300
 * @tc.name      : OH_NativeXComponent_GetXComponentOffsetTest001
 * @tc.desc      : Test OH_NativeXComponent_GetXComponentOffset
 */
HWTEST(ActsNativeXComponentTest, OH_NativeXComponent_GetXComponentOffsetTest001, Function | MediumTest | Level2)
{
    int ret;
    ret = OH_NativeXComponent_GetXComponentOffset(nullptr, nullptr, nullptr, nullptr);
    EXPECT_EQ(OH_NATIVEXCOMPONENT_RESULT_BAD_PARAMETER, ret);
}

/**
 * @tc.number    : ActsNativeXComponentTest_0400
 * @tc.name      : OH_NativeXComponent_GetTouchEventTest001
 * @tc.desc      : Test OH_NativeXComponent_GetTouchEvent
 */
HWTEST(ActsNativeXComponentTest, OH_NativeXComponent_GetTouchEventTest001, Function | MediumTest | Level2)
{
    int ret;
    ret = OH_NativeXComponent_GetTouchEvent(nullptr, nullptr, nullptr);
    EXPECT_EQ(OH_NATIVEXCOMPONENT_RESULT_BAD_PARAMETER, ret);
}

/**
 * @tc.number    : ActsNativeXComponentTest_0500
 * @tc.name      : OH_NativeXComponent_RegisterCallbackTest001
 * @tc.desc      : Test OH_NativeXComponent_RegisterCallback
 */
HWTEST(ActsNativeXComponentTest, OH_NativeXComponent_RegisterCallbackTest001, Function | MediumTest | Level2)
{
    int ret;
    ret = OH_NativeXComponent_RegisterCallback(nullptr, nullptr);
    EXPECT_EQ(OH_NATIVEXCOMPONENT_RESULT_BAD_PARAMETER, ret);
}