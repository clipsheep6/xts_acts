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

#include "native_usbddk_common_test.h"
#include "usb_ddk_api.h"
#include "gtest/gtest.h"

using namespace testing::ext;
namespace {
class NativeUsbDdkBaseTest : public testing::Test {
protected:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    virtual void SetUp() {}
    virtual void TearDown() {}

    static uint64_t deviceId_;
};

uint64_t NativeUsbDdkBaseTest::deviceId_ = 0;

void NativeUsbDdkBaseTest::SetUpTestCase(void)
{
    int32_t ret = OH_Usb_Init();
    EXPECT_EQ(ret, 0);
    deviceId_ = GetDeviceId();
    EXPECT_NE(deviceId_, UINT64_MAX);
}

void NativeUsbDdkBaseTest::TearDownTestCase(void)
{
    OH_Usb_Release();
}

/**
 * @tc.name Positive testing, get device descriptor success.
 * @tc.number NativeUsbDdkGetDeviceDescriptor001
 * @tc.desc Get device descriptor success.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkGetDeviceDescriptor001, Function | MediumTest | Level1)
{
    struct UsbDeviceDescriptor devDesc;
    int32_t ret = OH_Usb_GetDeviceDescriptor(deviceId_, &devDesc);
    EXPECT_EQ(ret, 0);
    EXPECT_EQ(devDesc.bDescriptorType, USB_DDK_DT_DEVICE);
}

/**
 * @tc.name Negative testing, deviceId error.
 * @tc.number NativeUsbDdkGetDeviceDescriptor002
 * @tc.desc DeviceId error.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkGetDeviceDescriptor002, Function | MediumTest | Level1)
{
    struct UsbDeviceDescriptor devDesc;
    int32_t ret = OH_Usb_GetDeviceDescriptor(1, &devDesc);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Negative testing, desc is nullptr.
 * @tc.number NativeUsbDdkGetDeviceDescriptor003
 * @tc.desc desc is nullptr.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkGetDeviceDescriptor003, Function | MediumTest | Level1)
{
    int32_t ret = OH_Usb_GetDeviceDescriptor(deviceId_, nullptr);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Positive testing, get configuration descriptor success.
 * @tc.number NativeUsbDdkGetConfigDescriptor001
 * @tc.desc Get configuration descriptor success.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkGetConfigDescriptor001, Function | MediumTest | Level1)
{
    struct UsbDdkConfigDescriptor *configDesc = nullptr;
    int32_t ret = OH_Usb_GetConfigDescriptor(deviceId_, 1, &configDesc);
    EXPECT_GE(ret, 0);
    EXPECT_NE(configDesc, nullptr);
    EXPECT_EQ(configDesc->configDescriptor.bDescriptorType, USB_DDK_DT_CONFIG);

    OH_Usb_FreeConfigDescriptor(configDesc);
}

/**
 * @tc.name Negative testing, deviceId error.
 * @tc.number NativeUsbDdkGetConfigDescriptor002
 * @tc.desc DeviceId error.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkGetConfigDescriptor002, Function | MediumTest | Level1)
{
    struct UsbDdkConfigDescriptor *configDesc = nullptr;
    int32_t ret = OH_Usb_GetConfigDescriptor(1, 1, &configDesc);
    EXPECT_NE(ret, 0);
    EXPECT_EQ(configDesc, nullptr);
}

/**
 * @tc.name Negative testing, configDesc is nullptr.
 * @tc.number NativeUsbDdkGetConfigDescriptor003
 * @tc.desc configDesc is nullptr.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkGetConfigDescriptor003, Function | MediumTest | Level1)
{
    struct UsbDdkConfigDescriptor *configDesc = nullptr;
    int32_t ret = OH_Usb_GetConfigDescriptor(deviceId_, 1, nullptr);
    EXPECT_NE(ret, 0);
    EXPECT_EQ(configDesc, nullptr);
}

/**
 * @tc.name Negative testing, configIndex error.
 * @tc.number NativeUsbDdkGetConfigDescriptor004
 * @tc.desc configIndex error.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkGetConfigDescriptor004, Function | MediumTest | Level1)
{
    struct UsbDdkConfigDescriptor *configDesc = nullptr;
    int32_t ret = OH_Usb_GetConfigDescriptor(deviceId_, 10, &configDesc);
    EXPECT_NE(ret, 0);
    EXPECT_EQ(configDesc, nullptr);
}

/**
 * @tc.name Positive testing, claim interface success.
 * @tc.number NativeUsbDdkClaimInterface001
 * @tc.desc Claim interface success.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkClaimInterface001, Function | MediumTest | Level1)
{
    uint64_t interfaceHandle = 0;
    int32_t ret = OH_Usb_ClaimInterface(deviceId_, 0, &interfaceHandle);
    EXPECT_EQ(ret, 0);
    EXPECT_NE(interfaceHandle, 0);

    ret = OH_Usb_ReleaseInterface(interfaceHandle);
    EXPECT_EQ(ret, 0);
}

/**
 * @tc.name Negative testing, interfaceIndex error.
 * @tc.number NativeUsbDdkClaimInterface002
 * @tc.desc interfaceIndex error.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkClaimInterface002, Function | MediumTest | Level1)
{
    uint64_t interfaceHandle = 0;
    int32_t ret = OH_Usb_ClaimInterface(deviceId_, 10, &interfaceHandle);
    EXPECT_NE(ret, 0);
    EXPECT_EQ(interfaceHandle, 0);
}

/**
 * @tc.name Negative testing, interfaceHandle is nullptr.
 * @tc.number NativeUsbDdkClaimInterface003
 * @tc.desc interfaceHandle is nullptr.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkClaimInterface003, Function | MediumTest | Level1)
{
    int32_t ret = OH_Usb_ClaimInterface(deviceId_, 0, nullptr);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Negative testing, deviceId error.
 * @tc.number NativeUsbDdkClaimInterface004
 * @tc.desc DeviceId error.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkClaimInterface004, Function | MediumTest | Level1)
{
    uint64_t interfaceHandle = 0;
    int32_t ret = OH_Usb_ClaimInterface(1, 0, &interfaceHandle);
    EXPECT_NE(ret, 0);
    EXPECT_EQ(interfaceHandle, 0);
}

/**
 * @tc.name Negative testing, interfaceHandle error.
 * @tc.number NativeUsbDdkReleaseInterface001
 * @tc.desc interfaceHandle error.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkReleaseInterface001, Function | MediumTest | Level1)
{
    int32_t ret = OH_Usb_ReleaseInterface(1);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Positive testing, create deviceMemMap success.
 * @tc.number NativeUsbDdkCreateDeviceMemMap001
 * @tc.desc Create deviceMemMap success.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkCreateDeviceMemMap001, Function | MediumTest | Level1)
{
    UsbDeviceMemMap *devMmap = nullptr;
    int32_t ret = OH_Usb_CreateDeviceMemMap(deviceId_, USB_DDK_TEST_BUF_SIZE, &devMmap);
    EXPECT_EQ(ret, 0);
    EXPECT_NE(devMmap, nullptr);

    OH_Usb_DestroyDeviceMemMap(devMmap);
}

/**
 * @tc.name Negative testing, deviceId error.
 * @tc.number NativeUsbDdkCreateDeviceMemMap002
 * @tc.desc DeviceId error.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkCreateDeviceMemMap002, Function | MediumTest | Level1)
{
    UsbDeviceMemMap *devMmap = nullptr;
    int32_t ret = OH_Usb_CreateDeviceMemMap(1, USB_DDK_TEST_BUF_SIZE, &devMmap);
    EXPECT_NE(ret, 0);
    EXPECT_EQ(devMmap, nullptr);
}

/**
 * @tc.name Negative testing, size error.
 * @tc.number NativeUsbDdkCreateDeviceMemMap003
 * @tc.desc size error.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkCreateDeviceMemMap003, Function | MediumTest | Level1)
{
    UsbDeviceMemMap *devMmap = nullptr;
    int32_t ret = OH_Usb_CreateDeviceMemMap(deviceId_, 0, &devMmap);
    EXPECT_NE(ret, 0);
    EXPECT_EQ(devMmap, nullptr);
}

/**
 * @tc.name Negative testing, devMmap is nullptr.
 * @tc.number NativeUsbDdkCreateDeviceMemMap005
 * @tc.desc devMmap is nullptr.
 */
HWTEST_F(NativeUsbDdkBaseTest, NativeUsbDdkCreateDeviceMemMap005, Function | MediumTest | Level1)
{
    int32_t ret = OH_Usb_CreateDeviceMemMap(deviceId_, 100, nullptr);
    EXPECT_NE(ret, 0);
}
} // namespace