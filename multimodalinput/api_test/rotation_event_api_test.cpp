/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

#include <gtest/gtest.h>
#include "rotation_event.h"
#include "st_helper.h"


namespace {
using namespace testing::ext;
using namespace OHOS;

class RotationEventApiTest : public testing::Test {
public:
    static void SetUpTestCase(void) {}
    static void TearDownTestCase(void) {}
};


/*
 * Feature: Api_Test_GetRotationValue_00
 * Function: Api_Test_GetRotationValue_00
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(RotationEventApiTest, Api_Test_GetRotationValue_00, TestSize.Level1)
{
    RotationEvent rotationEventTest;
    auto retRotationValue = rotationEventTest.GetRotationValue();
    EXPECT_TRUE(retRotationValue != 0);
}


/*
 * Feature: Api_Test_GetRotationValue_01
 * Function: Api_Test_GetRotationValue_01
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(RotationEventApiTest, Api_Test_GetRotationValue_01, TestSize.Level1)
{
    RotationEvent rotationEventTest;
    auto retRotationValue = rotationEventTest.GetRotationValue();
    EXPECT_TRUE(retRotationValue == 0);
}


 /*
 * Feature: Api_Test_GetRotationValue_02
 * Function: Api_Test_GetRotationValue_02
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(RotationEventApiTest, Api_Test_GetRotationValue_02, TestSize.Level1)
{
    RotationEvent rotationEventTest;
    auto retRotationValue = rotationEventTest.GetRotationValue();
    EXPECT_TRUE(retRotationValue == 0);
}


/*
 * Feature: Api_Test_GetRotationValue_03
 * Function: Api_Test_GetRotationValue_03
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(RotationEventApiTest, Api_Test_GetRotationValue_03, TestSize.Level1)
{
    RotationEvent rotationEventTest;
    auto retRotationValue = rotationEventTest.GetRotationValue();
    EXPECT_TRUE(retRotationValue == 0);
}

/*
 * Feature: Api_Test_GetRotationValue_04
 * Function: Api_Test_GetRotationValue_04
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(RotationEventApiTest, Api_Test_GetRotationValue_04, TestSize.Level1)
{
    RotationEvent rotationEventTest;
    auto retRotationValue = rotationEventTest.GetRotationValue();
    EXPECT_TRUE(retRotationValue == 0);
}


/*
 * Feature: Api_Test_GetRotationValue_05
 * Function: Api_Test_GetRotationValue_05
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(RotationEventApiTest, Api_Test_GetRotationValue_05, TestSize.Level1)
{
    RotationEvent rotationEventTest;
    auto retRotationValue = rotationEventTest.GetRotationValue();
    EXPECT_TRUE(retRotationValue == 0);
}


/*
 * Feature: Api_Test_GetRotationValue_06
 * Function: Api_Test_GetRotationValue_06
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(RotationEventApiTest, Api_Test_GetRotationValue_06, TestSize.Level1)
{
    RotationEvent rotationEventTest;
    auto retRotationValue = rotationEventTest.GetRotationValue();
    EXPECT_TRUE(retRotationValue == 0);
}


  /*
 * Feature: Api_Test_GetRotationValue_07
 * Function: Api_Test_GetRotationValue_07
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NAtouch-pad
 */
HWTEST_F(RotationEventApiTest, Api_Test_GetRotationValue_07, TestSize.Level1)
{
    RotationEvent rotationEventTest;
    auto retRotationValue = rotationEventTest.GetRotationValue();
    EXPECT_TRUE(retRotationValue == 0);
}


/*
 * Feature: Api_Test_GetRotationValue_08
 * Function: Api_Test_GetRotationValue_08
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(RotationEventApiTest, Api_Test_GetRotationValue_08, TestSize.Level1)
{
    RotationEvent rotationEventTest;
    auto retRotationValue = rotationEventTest.GetRotationValue();
    EXPECT_TRUE(retRotationValue == 0);
}
} // namespace
