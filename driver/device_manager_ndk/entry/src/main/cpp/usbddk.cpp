/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

#include "napi/native_api.h"
#include "native_common.h"
#include <js_native_api_types.h>
#include <stdlib.h>
#include "usb_ddk_api.h"
#include "usb_ddk_types.h"

#define ENDPOINT 128
static uint64_t deviceId = 1;
static uint8_t configIndex = 0;
static uint8_t interfaceIndex = 0;
static uint64_t interfaceHandle = 0;
static uint8_t settingIndex = 1;
static uint32_t timeout = 1000;

static napi_value UsbInit(napi_env env, napi_callback_info)
{
    int32_t ReturnValue = OH_Usb_Init();
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbRelease(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    OH_Usb_Release();
    napi_value result = nullptr;
    napi_create_int32(env, true, &result);
    return result;
}

static napi_value UsbGetDeviceDescriptorOne(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDeviceDescriptor devDesc;
    int32_t ReturnValue = OH_Usb_GetDeviceDescriptor(deviceId, &devDesc);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbGetDeviceDescriptorTwo(napi_env env, napi_callback_info)
{
    napi_value result = nullptr;
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t ReturnValue = OH_Usb_GetDeviceDescriptor(deviceId, nullptr);
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbGetConfigDescriptorOne(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t ReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    OH_Usb_FreeConfigDescriptor(config);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbGetConfigDescriptorTwo(napi_env env, napi_callback_info)
{
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t ReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    OH_Usb_FreeConfigDescriptor(config);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbGetConfigDescriptorThree(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t ReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, nullptr);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbFreeConfigDescriptor(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t ReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    NAPI_ASSERT(env, ReturnValue == 0, "OH_Usb_GetConfigDescriptor failed");
    OH_Usb_FreeConfigDescriptor(config);
    napi_value result = nullptr;
    napi_create_int32(env, nullptr == config, &result);
    return result;
}

static napi_value UsbClaimInterfaceOne(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t ReturnValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);

    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbClaimInterfaceTwo(napi_env env, napi_callback_info)
{
    int32_t ReturnValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbClaimInterfaceThree(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t ReturnValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, nullptr);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbReleaseInterface(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    int32_t ReturnValue = OH_Usb_ReleaseInterface(interfaceHandle);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSelectInterfaceSettingOne(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    int32_t ReturnValue = OH_Usb_SelectInterfaceSetting(interfaceHandle, settingIndex);

    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSelectInterfaceSettingTwo(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    OH_Usb_Release();
    int32_t ReturnValue = OH_Usb_SelectInterfaceSetting(interfaceHandle, settingIndex);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbGetCurrentInterfaceSettingOne(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    int32_t UsbSelectInterfaceSettingReturnValue = OH_Usb_SelectInterfaceSetting(interfaceHandle, settingIndex);
    NAPI_ASSERT(env, UsbSelectInterfaceSettingReturnValue == 0, "Usb_ClaimInterface failed");
    int32_t ReturnValue = OH_Usb_GetCurrentInterfaceSetting(interfaceHandle, &settingIndex);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbGetCurrentInterfaceSettingTwo(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    int32_t UsbSelectInterfaceSettingReturnValue = OH_Usb_SelectInterfaceSetting(interfaceHandle, settingIndex);
    NAPI_ASSERT(env, UsbSelectInterfaceSettingReturnValue == 0, "Usb_ClaimInterface failed");
    OH_Usb_Release();
    int32_t ReturnValue = OH_Usb_GetCurrentInterfaceSetting(interfaceHandle, &settingIndex);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbGetCurrentInterfaceSettingThree(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    int32_t UsbSelectInterfaceSettingReturnValue = OH_Usb_SelectInterfaceSetting(interfaceHandle, settingIndex);
    NAPI_ASSERT(env, UsbSelectInterfaceSettingReturnValue == 0, "Usb_ClaimInterface failed");
    int32_t ReturnValue = OH_Usb_GetCurrentInterfaceSetting(interfaceHandle, nullptr);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlReadRequestOne(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    struct UsbControlRequestSetup setup;
    uint8_t data = 10;
    uint32_t dataLen = 10;
    int32_t ReturnValue = OH_Usb_SendControlReadRequest(interfaceHandle, &setup, timeout, &data, &dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlReadRequestTwo(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    OH_Usb_Release();
    struct UsbControlRequestSetup setup;
    uint8_t data = 10;
    uint32_t dataLen = 10;

    int32_t ReturnValue = OH_Usb_SendControlReadRequest(interfaceHandle, &setup, timeout, &data, &dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlReadRequestThree(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    uint8_t data = 10;
    uint32_t dataLen = 10;
    int32_t ReturnValue = OH_Usb_SendControlReadRequest(interfaceHandle, nullptr, timeout, &data, &dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlReadRequestFour(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    struct UsbControlRequestSetup setup;
    uint32_t dataLen = 10;
    int32_t ReturnValue = OH_Usb_SendControlReadRequest(interfaceHandle, &setup, timeout, nullptr, &dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlReadRequestFive(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    struct UsbControlRequestSetup setup;
    uint8_t data = 10;
    int32_t ReturnValue = OH_Usb_SendControlReadRequest(interfaceHandle, &setup, timeout, &data, nullptr);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlReadRequestSix(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    struct UsbControlRequestSetup setup;
    uint8_t data = 10;
    uint32_t dataLen = 0;
    int32_t ReturnValue = OH_Usb_SendControlReadRequest(interfaceHandle, &setup, timeout, &data, &dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlReadRequestSeven(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    struct UsbControlRequestSetup setup;
    uint8_t data = 10;
    uint32_t dataLen = 10;
    uint8_t timeoutNull = 0;
    int32_t ReturnValue = OH_Usb_SendControlReadRequest(interfaceHandle, &setup, timeoutNull, &data, &dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlWriteRequestOne(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    struct UsbControlRequestSetup setup;
    uint8_t data = 10;
    uint32_t dataLen = 10;
    int32_t ReturnValue = OH_Usb_SendControlWriteRequest(interfaceHandle, &setup, timeout, &data, dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlWriteRequestTwo(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    OH_Usb_Release();
    struct UsbControlRequestSetup setup;
    uint8_t data = 10;
    uint32_t dataLen = 10;
    int32_t ReturnValue = OH_Usb_SendControlWriteRequest(interfaceHandle, &setup, timeout, &data, dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlWriteRequestThree(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    uint8_t data = 10;
    uint32_t dataLen = 10;
    int32_t ReturnValue = OH_Usb_SendControlWriteRequest(interfaceHandle, nullptr, timeout, &data, dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendControlWriteRequestFour(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    int32_t UsbClaimInterfaceValue = OH_Usb_ClaimInterface(deviceId, interfaceIndex, &interfaceHandle);
    NAPI_ASSERT(env, UsbClaimInterfaceValue == 0, "Usb_ClaimInterface failed");
    struct UsbControlRequestSetup setup;
    uint32_t dataLen = 10;
    int32_t ReturnValue = OH_Usb_SendControlWriteRequest(interfaceHandle, &setup, timeout, nullptr, dataLen);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendPipeRequestOne(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDeviceDescriptor devDesc;
    int32_t UsbGetDeviceDescriptorReturnValue = OH_Usb_GetDeviceDescriptor(deviceId, &devDesc);
    NAPI_ASSERT(env, UsbGetDeviceDescriptorReturnValue == 0, "OH_Usb_GetDeviceDescriptor failed");
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t UsbGetConfigDescriptorReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    NAPI_ASSERT(env, UsbGetConfigDescriptorReturnValue == 0, "OH_Usb_GetConfigDescriptor failed");
    OH_Usb_FreeConfigDescriptor(config);
    struct UsbDeviceMemMap *devMemMap = nullptr;
    size_t bufferLen = 10;
    int32_t UsbCreateDeviceMemMapReturnValue = OH_Usb_CreateDeviceMemMap(deviceId, bufferLen, &devMemMap);
    NAPI_ASSERT(env, UsbCreateDeviceMemMapReturnValue == 0, "OH_Usb_CreateDeviceMemMap failed");
    struct UsbRequestPipe pipe;
    pipe.interfaceHandle = interfaceHandle;
    pipe.endpoint = ENDPOINT;
    pipe.timeout = UINT32_MAX;
    int32_t ReturnValue = OH_Usb_SendPipeRequest(&pipe, devMemMap);
    OH_Usb_DestroyDeviceMemMap(devMemMap);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendPipeRequestTwo(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDeviceDescriptor devDesc;
    int32_t UsbGetDeviceDescriptorReturnValue = OH_Usb_GetDeviceDescriptor(deviceId, &devDesc);
    NAPI_ASSERT(env, UsbGetDeviceDescriptorReturnValue == 0, "OH_Usb_GetDeviceDescriptor failed");
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t UsbGetConfigDescriptorReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    NAPI_ASSERT(env, UsbGetConfigDescriptorReturnValue == 0, "OH_Usb_GetConfigDescriptor failed");
    OH_Usb_FreeConfigDescriptor(config);
    struct UsbDeviceMemMap *devMemMap = nullptr;
    size_t bufferLen = 10;
    int32_t UsbCreateDeviceMemMapReturnValue = OH_Usb_CreateDeviceMemMap(deviceId, bufferLen, &devMemMap);
    NAPI_ASSERT(env, UsbCreateDeviceMemMapReturnValue == 0, "OH_Usb_CreateDeviceMemMap failed");
    OH_Usb_Release();
    struct UsbRequestPipe pipe;
    pipe.interfaceHandle = interfaceHandle;
    pipe.endpoint = ENDPOINT;
    pipe.timeout = UINT32_MAX;
    int32_t ReturnValue = OH_Usb_SendPipeRequest(&pipe, devMemMap);
    OH_Usb_DestroyDeviceMemMap(devMemMap);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendPipeRequestThree(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDeviceDescriptor devDesc;
    int32_t UsbGetDeviceDescriptorReturnValue = OH_Usb_GetDeviceDescriptor(deviceId, &devDesc);
    NAPI_ASSERT(env, UsbGetDeviceDescriptorReturnValue == 0, "OH_Usb_GetDeviceDescriptor failed");
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t UsbGetConfigDescriptorReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    NAPI_ASSERT(env, UsbGetConfigDescriptorReturnValue == 0, "OH_Usb_GetConfigDescriptor failed");
    OH_Usb_FreeConfigDescriptor(config);
    struct UsbDeviceMemMap *devMemMap = nullptr;
    size_t bufferLen = 10;
    int32_t UsbCreateDeviceMemMapReturnValue = OH_Usb_CreateDeviceMemMap(deviceId, bufferLen, &devMemMap);
    NAPI_ASSERT(env, UsbCreateDeviceMemMapReturnValue == 0, "OH_Usb_CreateDeviceMemMap failed");
    struct UsbRequestPipe pipe;
    pipe.interfaceHandle = interfaceHandle;
    pipe.endpoint = ENDPOINT;
    pipe.timeout = UINT32_MAX;
    int32_t ReturnValue = OH_Usb_SendPipeRequest(nullptr, devMemMap);
    OH_Usb_DestroyDeviceMemMap(devMemMap);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbSendPipeRequestFour(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDeviceDescriptor devDesc;
    int32_t UsbGetDeviceDescriptorReturnValue = OH_Usb_GetDeviceDescriptor(deviceId, &devDesc);
    NAPI_ASSERT(env, UsbGetDeviceDescriptorReturnValue == 0, "OH_Usb_GetDeviceDescriptor failed");
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t UsbGetConfigDescriptorReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    NAPI_ASSERT(env, UsbGetConfigDescriptorReturnValue == 0, "OH_Usb_GetConfigDescriptor failed");
    OH_Usb_FreeConfigDescriptor(config);
    struct UsbDeviceMemMap *devMemMap = nullptr;
    size_t bufferLen = 10;
    int32_t UsbCreateDeviceMemMapReturnValue = OH_Usb_CreateDeviceMemMap(deviceId, bufferLen, &devMemMap);
    NAPI_ASSERT(env, UsbCreateDeviceMemMapReturnValue == 0, "OH_Usb_CreateDeviceMemMap failed");
    struct UsbRequestPipe pipe;
    pipe.interfaceHandle = interfaceHandle;
    pipe.endpoint = ENDPOINT;
    pipe.timeout = UINT32_MAX;
    int32_t ReturnValue = OH_Usb_SendPipeRequest(&pipe, nullptr);
    OH_Usb_DestroyDeviceMemMap(devMemMap);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbCreateDeviceMemMapOne(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDeviceDescriptor devDesc;
    int32_t UsbGetDeviceDescriptorReturnValue = OH_Usb_GetDeviceDescriptor(deviceId, &devDesc);
    NAPI_ASSERT(env, UsbGetDeviceDescriptorReturnValue == 0, "OH_Usb_GetDeviceDescriptor failed");
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t UsbGetConfigDescriptorReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    NAPI_ASSERT(env, UsbGetConfigDescriptorReturnValue == 0, "OH_Usb_GetConfigDescriptor failed");
    OH_Usb_FreeConfigDescriptor(config);
    struct UsbDeviceMemMap *devMemMap = nullptr;
    size_t bufferLen = 10;
    int32_t ReturnValue = OH_Usb_CreateDeviceMemMap(deviceId, bufferLen, &devMemMap);
    OH_Usb_DestroyDeviceMemMap(devMemMap);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbCreateDeviceMemMapTow(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDeviceDescriptor devDesc;
    int32_t UsbGetDeviceDescriptorReturnValue = OH_Usb_GetDeviceDescriptor(deviceId, &devDesc);
    NAPI_ASSERT(env, UsbGetDeviceDescriptorReturnValue == 0, "OH_Usb_GetDeviceDescriptor failed");
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t UsbGetConfigDescriptorReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    NAPI_ASSERT(env, UsbGetConfigDescriptorReturnValue == 0, "OH_Usb_GetConfigDescriptor failed");
    OH_Usb_FreeConfigDescriptor(config);
    OH_Usb_Release();
    struct UsbDeviceMemMap *devMemMap = nullptr;
    size_t bufferLen = 10;
    int32_t ReturnValue = OH_Usb_CreateDeviceMemMap(deviceId, bufferLen, &devMemMap);
    napi_value result = nullptr;
    napi_create_int32(env, ReturnValue, &result);
    return result;
}

static napi_value UsbDestroyDeviceMemMap(napi_env env, napi_callback_info)
{
    int32_t UsbInitReturnValue = OH_Usb_Init();
    NAPI_ASSERT(env, UsbInitReturnValue == 0, "OH_Usb_Init failed");
    struct UsbDeviceDescriptor devDesc;
    int32_t UsbGetDeviceDescriptorReturnValue = OH_Usb_GetDeviceDescriptor(deviceId, &devDesc);
    NAPI_ASSERT(env, UsbGetDeviceDescriptorReturnValue == 0, "OH_Usb_GetDeviceDescriptor failed");
    struct UsbDdkConfigDescriptor *config = nullptr;
    int32_t UsbGetConfigDescriptorReturnValue = OH_Usb_GetConfigDescriptor(deviceId, configIndex, &config);
    NAPI_ASSERT(env, UsbGetConfigDescriptorReturnValue == 0, "OH_Usb_GetConfigDescriptor failed");
    OH_Usb_FreeConfigDescriptor(config);
    struct UsbDeviceMemMap *devMemMap = nullptr;
    size_t bufferLen = 10;
    OH_Usb_CreateDeviceMemMap(deviceId, bufferLen, &devMemMap);
    OH_Usb_DestroyDeviceMemMap(devMemMap);
    napi_value result = nullptr;
    napi_create_int32(env, true, &result);
    return result;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        {"usbInit", nullptr, UsbInit, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbRelease", nullptr, UsbRelease, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbGetDeviceDescriptorOne", nullptr, UsbGetDeviceDescriptorOne, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbGetDeviceDescriptorTwo", nullptr, UsbGetDeviceDescriptorTwo, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbGetConfigDescriptorOne", nullptr, UsbGetConfigDescriptorOne, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbGetConfigDescriptorTwo", nullptr, UsbGetConfigDescriptorTwo, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbGetConfigDescriptorThree", nullptr, UsbGetConfigDescriptorThree, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbFreeConfigDescriptor", nullptr, UsbFreeConfigDescriptor, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbClaimInterfaceOne", nullptr, UsbClaimInterfaceOne, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbClaimInterfaceTwo", nullptr, UsbClaimInterfaceTwo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbClaimInterfaceThree", nullptr, UsbClaimInterfaceThree, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbReleaseInterface", nullptr, UsbReleaseInterface, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbSelectInterfaceSettingOne", nullptr, UsbSelectInterfaceSettingOne, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbSelectInterfaceSettingTwo", nullptr, UsbSelectInterfaceSettingTwo, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbGetCurrentInterfaceSettingOne", nullptr, UsbGetCurrentInterfaceSettingOne, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbGetCurrentInterfaceSettingTwo", nullptr, UsbGetCurrentInterfaceSettingTwo, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbGetCurrentInterfaceSettingThree", nullptr, UsbGetCurrentInterfaceSettingThree, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbSendControlReadRequestOne", nullptr, UsbSendControlReadRequestOne, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbSendControlReadRequestTwo", nullptr, UsbSendControlReadRequestTwo, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbSendControlReadRequestThree", nullptr, UsbSendControlReadRequestThree, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbSendControlReadRequestFour", nullptr, UsbSendControlReadRequestFour, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbSendControlReadRequestFive", nullptr, UsbSendControlReadRequestFive, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbSendControlReadRequestSix", nullptr, UsbSendControlReadRequestSix, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbSendControlReadRequestSeven", nullptr, UsbSendControlReadRequestSeven, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbSendControlWriteRequestOne", nullptr, UsbSendControlWriteRequestOne, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbSendControlWriteRequestTwo", nullptr, UsbSendControlWriteRequestTwo, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbSendControlWriteRequestThree", nullptr, UsbSendControlWriteRequestThree, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbSendControlWriteRequestFour", nullptr, UsbSendControlWriteRequestFour, nullptr, nullptr, nullptr,
         napi_default, nullptr},
        {"usbSendPipeRequestOne", nullptr, UsbSendPipeRequestOne, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbSendPipeRequestTwo", nullptr, UsbSendPipeRequestTwo, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbSendPipeRequestThree", nullptr, UsbSendPipeRequestThree, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbSendPipeRequestFour", nullptr, UsbSendPipeRequestFour, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"usbCreateDeviceMemMapOne", nullptr, UsbCreateDeviceMemMapOne, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbCreateDeviceMemMapTow", nullptr, UsbCreateDeviceMemMapTow, nullptr, nullptr, nullptr, napi_default,
         nullptr},
        {"usbDestroyDeviceMemMap", nullptr, UsbDestroyDeviceMemMap, nullptr, nullptr, nullptr, napi_default, nullptr}};

    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "libusbddk",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterModule(void) { napi_module_register(&demoModule); }
