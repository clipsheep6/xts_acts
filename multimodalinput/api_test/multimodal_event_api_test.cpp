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
#include "multimodal_event.h"
#include "struct_multimodal.h"
#include "st_helper.h"

namespace {
using namespace testing::ext;
using namespace OHOS;

class MultimodalEventsApiTest : public testing::Test {
public:
    static void SetUpTestCase(void) {}
    static void TearDownTestCase(void) {}
};


 /*
 * Feature: Api_Test_IsSameEvent_00
 * Function: Api_Test_IsSameEvent_00
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_IsSameEvent_00, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 0;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    const std::string id = "aEvent";
    auto isTrue = multimodalEventTest.IsSameEvent(id);
    EXPECT_TRUE(isTrue == true);
}


 /*
 * Feature: Api_Test_IsSameEvent_01
 * Function: Api_Test_IsSameEvent_01
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_IsSameEvent_01, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 0;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    const std::string id = "bEvent";
    auto isTrue = multimodalEventTest.IsSameEvent(id);
    EXPECT_TRUE(isTrue == false);
}


/*
 * Feature: Api_Test_IsHighLevelInput_00
 * Function: Api_Test_IsHighLevelInput_00
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_IsHighLevelInput_00, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 0;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retHighLevelInput = multimodalEventTest.IsHighLevelInput();
    EXPECT_EQ(retHighLevelInput, isHighLevelEvent);
}


/*
 * Feature: Api_Test_IsHighLevelInput_01
 * Function: Api_Test_IsHighLevelInput_01
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_IsHighLevelInput_01, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 0;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = false;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retHighLevelInput = multimodalEventTest.IsHighLevelInput();
    EXPECT_EQ(retHighLevelInput, isHighLevelEvent);
}


/*
 * Feature: Api_Test_IsHighLevelInput_02
 * Function: Api_Test_IsHighLevelInput_02
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_IsHighLevelInput_02, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retHighLevelEvent = multimodalEventTest.GetHighLevelEvent();
    EXPECT_EQ(retHighLevelEvent, highLevelEvent);
}


/*
 * Feature: Api_Test_IsHighLevelInput_03
 * Function: Api_Test_IsHighLevelInput_03
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_IsHighLevelInput_03, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 0xFFFFFFFF;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retHighLevelEvent = multimodalEventTest.GetHighLevelEvent();
    EXPECT_EQ(retHighLevelEvent, highLevelEvent);
}


/*
 * Feature: Api_Test_IsHighLevelInput_04
 * Function: Api_Test_IsHighLevelInput_04
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_IsHighLevelInput_04, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = static_cast<int32_t>(0xFFFFFFFF);
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retHighLevelEvent = multimodalEventTest.GetHighLevelEvent();
    EXPECT_EQ(retHighLevelEvent, highLevelEvent);
}


/*
 * Feature: Api_Test_IsHighLevelInput_05
 * Function: Api_Test_IsHighLevelInput_05
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_IsHighLevelInput_05, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 0x7FFFFFFF;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retHighLevelEvent = multimodalEventTest.GetHighLevelEvent();
    EXPECT_EQ(retHighLevelEvent, highLevelEvent);
}


/*
 * Feature: Api_Test_GetSourceDevice_00
 * Function: Api_Test_GetSourceDevice_00
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetSourceDevice_00, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = HOS_KEYBOARD;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retSourceDevice = multimodalEventTest.GetSourceDevice();
    EXPECT_EQ(retSourceDevice, KEYBOARD);
}


/*
 * Feature: Api_Test_GetSourceDevice_01
 * Function: Api_Test_GetSourceDevice_01
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetSourceDevice_01, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0xFFFFFFFF;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retSourceDevice = multimodalEventTest.GetSourceDevice();
    EXPECT_EQ(retSourceDevice, UNSUPPORTED_DEVICE);
}


/*
 * Feature: Api_Test_GetSourceDevice_02
 * Function: Api_Test_GetSourceDevice_02
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetSourceDevice_02, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = static_cast<int32_t>(0xFFFFFFFF);
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retSourceDevice = multimodalEventTest.GetSourceDevice();
    EXPECT_EQ(retSourceDevice, UNSUPPORTED_DEVICE);
}


/*
 * Feature: Api_Test_GetSourceDevice_03
 * Function: Api_Test_GetSourceDevice_03
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetSourceDevice_03, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0x7FFFFFFF;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retSourceDevice = multimodalEventTest.GetSourceDevice();
    EXPECT_EQ(retSourceDevice, UNSUPPORTED_DEVICE);
}


/*
 * Feature: Api_Test_GetDeviceId_00
 * Function: Api_Test_GetDeviceId_00
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetDeviceId_00, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retDeviceId = multimodalEventTest.GetDeviceId();
    EXPECT_EQ(retDeviceId, deviceId);
}


/*
 * Feature: Api_Test_GetDeviceId_01
 * Function: Api_Test_GetDeviceId_01
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetDeviceId_01, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "error";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retDeviceId = multimodalEventTest.GetDeviceId();
    EXPECT_EQ(retDeviceId, deviceId);
}


/*
 * Feature: Api_Test_GetDeviceId_02
 * Function: Api_Test_GetDeviceId_02
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetDeviceId_02, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retDeviceId = multimodalEventTest.GetDeviceId();
    EXPECT_EQ(retDeviceId, deviceId);
}


/*
 * Feature: Api_Test_GetDeviceId_03
 * Function: Api_Test_GetDeviceId_03
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetDeviceId_03, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "ERROR";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retDeviceId = multimodalEventTest.GetDeviceId();
    EXPECT_EQ(retDeviceId, deviceId);
}


/*
 * Feature: Api_Test_GetInputDeviceId_00
 * Function: Api_Test_GetInputDeviceId_00
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetInputDeviceId_00, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = 10;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retDeviceId = multimodalEventTest.GetInputDeviceId();
    EXPECT_EQ(retDeviceId, inputDeviceId);
}


/*
 * Feature: Api_Test_GetInputDeviceId_01
 * Function: Api_Test_GetInputDeviceId_01
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetInputDeviceId_01, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = 0xFFFFFFFF;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retDeviceId = multimodalEventTest.GetInputDeviceId();
    EXPECT_EQ(retDeviceId, inputDeviceId);
}


/*
 * Feature: Api_Test_GetInputDeviceId_02
 * Function: Api_Test_GetInputDeviceId_02
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetInputDeviceId_02, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = static_cast<int32_t>(0xFFFFFFFF);
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retDeviceId = multimodalEventTest.GetInputDeviceId();
    EXPECT_EQ(retDeviceId, inputDeviceId);
}


/*
 * Feature: Api_Test_GetInputDeviceId_03
 * Function: Api_Test_GetInputDeviceId_03
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetInputDeviceId_03, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = 0x7FFFFFFF;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retDeviceId = multimodalEventTest.GetInputDeviceId();
    EXPECT_EQ(retDeviceId, inputDeviceId);
}


/*
 * Feature: Api_Test_GetOccurredTime_00
 * Function: Api_Test_GetOccurredTime_00
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetOccurredTime_00, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 100;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = 10;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retOccurredTime = multimodalEventTest.GetOccurredTime();
    EXPECT_EQ(retOccurredTime, occurredTime);
}


/*
 * Feature: Api_Test_GetOccurredTime_01
 * Function: Api_Test_GetOccurredTime_01
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetOccurredTime_01, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0xFFFFFFFFFFFFFFFF;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = 10;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retOccurredTime = multimodalEventTest.GetOccurredTime();
    EXPECT_EQ(retOccurredTime, occurredTime);
}


/*
 * Feature: Api_Test_GetOccurredTime_02
 * Function: Api_Test_GetOccurredTime_02
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetOccurredTime_02, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = 10;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = HOS_UNKNOWN_DEVICE_TYPE;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retOccurredTime = multimodalEventTest.GetOccurredTime();
    EXPECT_EQ(retOccurredTime, occurredTime);
}


/*
 * Feature: Api_Test_GetWindowID_00
 * Function: Api_Test_GetWindowID_00
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetWindowID_00, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 105;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 10;
    uint64_t occurredTime = 100;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = 10;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 10;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retWindowID = multimodalEventTest.GetWindowID();
    EXPECT_EQ(retWindowID, windowId);
}


/*
 * Feature: Api_Test_GetWindowID_01
 * Function: Api_Test_GetWindowID_01
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetWindowID_01, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0xFFFFFFFF;
    int32_t highLevelEvent = 10;
    const std::string uuid = "aEvent";
    int32_t sourceType = 10;
    uint64_t occurredTime = 100;
    const std::string deviceId = "bDevice";
    int32_t inputDeviceId = 10;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 10;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retWindowID = multimodalEventTest.GetWindowID();
    EXPECT_EQ(retWindowID, windowId);
}


/*
 * Feature: Api_Test_GetUuid_00
 * Function: Api_Test_GetUuid_00
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetUuid_00, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 0;
    const std::string uuid = "aEvent";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retUuid = multimodalEventTest.GetUuid();
    EXPECT_EQ(retUuid, uuid);
}

/*
 * Feature: Api_Test_GetUuid_01
 * Function: Api_Test_GetUuid_01
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 * Description: NA
 */
HWTEST_F(MultimodalEventsApiTest, Api_Test_GetUuid_01, TestSize.Level1)
{
    MultimodalEvent multimodalEventTest;
    int32_t windowId = 0;
    int32_t highLevelEvent = 0;
    const std::string uuid = "Error";
    int32_t sourceType = 0;
    uint64_t occurredTime = 0;
    const std::string deviceId = "b";
    int32_t inputDeviceId = 0;
    bool isHighLevelEvent = true;
    uint16_t deviceUdevTags = 0;
    multimodalEventTest.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId,
        inputDeviceId, isHighLevelEvent, deviceUdevTags);
    auto retUuid = multimodalEventTest.GetUuid();
    EXPECT_EQ(retUuid, uuid);
}
} // namespace
