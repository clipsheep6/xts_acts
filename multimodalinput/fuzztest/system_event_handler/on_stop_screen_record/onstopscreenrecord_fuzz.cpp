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
#include "system_event_handler.h"
 
extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size)
{
    int32_t windowId = size;
    int32_t highLevelEvent = size;
    std::string uuid = std::to_string(*data);
    int32_t sourceType = size;
    uint64_t occurredTime = size;
    std::string deviceId = std::to_string(*data);
    int32_t inputDeviceId = size;
    bool isHighLevelEvent = false;
    uint16_t deviceUdevTags = size;
    OHOS::MultimodalEvent event;
    event.Initialize(windowId, highLevelEvent, uuid, sourceType, occurredTime, deviceId, inputDeviceId,
                     isHighLevelEvent, deviceUdevTags);
    
    OHOS::MMI::SystemEventHandler SystemEventHandlerTest;
    SystemEventHandlerTest.OnStopScreenRecord(event);
    return 0;
}
