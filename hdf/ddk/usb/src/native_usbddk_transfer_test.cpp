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
#include <tuple>

#include "native_usbddk_common_test.h"
#include "usb_ddk_api.h"
#include "gtest/gtest.h"

using namespace testing::ext;
namespace {
class NativeUsbDdkTransferTest : public testing::Test {
protected:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    virtual void SetUp() {}
    virtual void TearDown() {}

    static uint64_t deviceId_;
    static uint64_t interfaceHandle_;
    static uint8_t endpoint_;
    static uint16_t maxPktSize_;
};

uint64_t NativeUsbDdkTransferTest::deviceId_ = 0;
uint64_t NativeUsbDdkTransferTest::interfaceHandle_ = 0;
uint8_t NativeUsbDdkTransferTest::endpoint_ = 0;
uint16_t NativeUsbDdkTransferTest::maxPktSize_ = 0;

static bool IsInterruptInEndpoint(const UsbEndpointDescriptor &epDesc)
{
    return (((epDesc.bEndpointAddress & USB_DDK_ENDPOINT_DIR_MASK) == USB_DDK_DIR_IN) &&
        ((epDesc.bmAttributes & USB_DDK_ENDPOINT_XFERTYPE_MASK) == USB_DDK_ENDPOINT_XFER_INT));
}

static std::tuple<bool, uint8_t, uint8_t, uint16_t> FindForEachInterface(const UsbDdkInterface &interface)
{
    struct UsbDdkInterfaceDescriptor *intDesc = interface.altsetting;
    uint32_t numSetting = interface.numAltsetting;
    for (uint32_t setIdx = 0; setIdx < numSetting; ++setIdx) {
        uint32_t numEp = intDesc[setIdx].interfaceDescriptor.bNumEndpoints;
        struct UsbDdkEndpointDescriptor *epDesc = intDesc[setIdx].endPoint;
        for (uint32_t epIdx = 0; epIdx < numEp; ++epIdx) {
            if (IsInterruptInEndpoint(epDesc[epIdx].endpointDescriptor)) {
                printf("bInterfaceNumber: %u\n", intDesc[setIdx].interfaceDescriptor.bInterfaceNumber);
                printf("bEndpointAddress: %u\n", epDesc[epIdx].endpointDescriptor.bEndpointAddress);
                return {true, intDesc[setIdx].interfaceDescriptor.bInterfaceNumber,
                    epDesc[epIdx].endpointDescriptor.bEndpointAddress, epDesc[epIdx].endpointDescriptor.wMaxPacketSize};
            }
        }
    }

    return {false, {}, {}, {}};
}

static std::tuple<bool, uint8_t, uint8_t, uint16_t> GetEndpointInfo(const struct UsbDdkConfigDescriptor *config)
{
    for (uint32_t intIdx = 0; intIdx < config->configDescriptor.bNumInterfaces; ++intIdx) {
        auto result = FindForEachInterface(config->interface[intIdx]);
        if (std::get<0>(result)) {
            return result;
        }
    }
    return {false, {}, {}, {}};
}

void NativeUsbDdkTransferTest::SetUpTestCase(void)
{
    int32_t ret = OH_Usb_Init();
    EXPECT_EQ(ret, 0);

    deviceId_ = GetDeviceId();
    EXPECT_NE(deviceId_, UINT64_MAX);

    struct UsbDdkConfigDescriptor *config = nullptr;
    ret = OH_Usb_GetConfigDescriptor(deviceId_, 1, &config);
    EXPECT_GE(ret, 0);
    EXPECT_NE(config, nullptr);

    auto [result, interface, endpoint, maxPktSize] = GetEndpointInfo(config);
    OH_Usb_FreeConfigDescriptor(config);
    EXPECT_TRUE(result);
    endpoint_ = endpoint;
    maxPktSize_ = maxPktSize;

    ret = OH_Usb_ClaimInterface(deviceId_, interface, &interfaceHandle_);
    EXPECT_EQ(ret, 0);
    EXPECT_NE(interfaceHandle_, 0);
}

void NativeUsbDdkTransferTest::TearDownTestCase(void)
{
    int32_t ret = OH_Usb_ReleaseInterface(interfaceHandle_);
    EXPECT_EQ(ret, 0);
    OH_Usb_Release();
}

/**
 * @tc.name Positive testing, select interface setting success.
 * @tc.number NativeUsbDdkSelectInterfaceSetting001
 * @tc.desc Select interface setting success.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSelectInterfaceSetting001, Function | MediumTest | Level1)
{
    int32_t ret = OH_Usb_SelectInterfaceSetting(interfaceHandle_, 0);
    EXPECT_EQ(ret, 0);
}

/**
 * @tc.name Negative testing, interfaceHandle error.
 * @tc.number NativeUsbDdkSelectInterfaceSetting002
 * @tc.desc interfaceHandle error.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSelectInterfaceSetting002, Function | MediumTest | Level1)
{
    int32_t ret = OH_Usb_SelectInterfaceSetting(1, 0);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Negative testing, settingIndex error.
 * @tc.number NativeUsbDdkSelectInterfaceSetting003
 * @tc.desc settingIndex error.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSelectInterfaceSetting003, Function | MediumTest | Level1)
{
    int32_t ret = OH_Usb_SelectInterfaceSetting(interfaceHandle_, 10);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Positive testing, get current interface setting success.
 * @tc.number NativeUsbDdkGetCurrentInterfaceSetting001
 * @tc.desc Get current interface setting success.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkGetCurrentInterfaceSetting001, Function | MediumTest | Level1)
{
    uint8_t alterSetting = 0;
    int32_t ret = OH_Usb_GetCurrentInterfaceSetting(interfaceHandle_, &alterSetting);
    EXPECT_EQ(ret, 0);
}

/**
 * @tc.name Negative testing, interfaceHandle error.
 * @tc.number NativeUsbDdkGetCurrentInterfaceSetting002
 * @tc.desc interfaceHandle error.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkGetCurrentInterfaceSetting002, Function | MediumTest | Level1)
{
    uint8_t alterSetting = 0;
    int32_t ret = OH_Usb_GetCurrentInterfaceSetting(1, &alterSetting);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Negative testing, alterSetting is nullptr.
 * @tc.number NativeUsbDdkGetCurrentInterfaceSetting003
 * @tc.desc alterSetting is nullptr.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkGetCurrentInterfaceSetting003, Function | MediumTest | Level1)
{
    int32_t ret = OH_Usb_GetCurrentInterfaceSetting(interfaceHandle_, nullptr);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Positive testing, send control read request success.
 * @tc.number NativeUsbDdkSendControlReadRequest001
 * @tc.desc Send control read request success.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendControlReadRequest001, Function | MediumTest | Level1)
{
    uint8_t strDesc[USB_DDK_TEST_BUF_SIZE] = {0};
    uint32_t len = USB_DDK_TEST_BUF_SIZE;
    struct UsbControlRequestSetup strDescSetup;
    strDescSetup.bmRequestType = 0x80;
    strDescSetup.bRequest = 0x06;
    strDescSetup.wValue = (0x03 << 8) | 0x01; // desc Index
    strDescSetup.wIndex = 0x409;              // language Id
    strDescSetup.wLength = len;
    int32_t ret = OH_Usb_SendControlReadRequest(interfaceHandle_, &strDescSetup, UINT32_MAX, strDesc, &len);
    EXPECT_EQ(ret, 0);
}

/**
 * @tc.name Negative testing, interfaceHandle error.
 * @tc.number NativeUsbDdkSendControlReadRequest002
 * @tc.desc interfaceHandle error.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendControlReadRequest002, Function | MediumTest | Level1)
{
    uint8_t strDesc[USB_DDK_TEST_BUF_SIZE] = {0};
    uint32_t len = USB_DDK_TEST_BUF_SIZE;
    struct UsbControlRequestSetup strDescSetup;
    strDescSetup.bmRequestType = 0x80;
    strDescSetup.bRequest = 0x06;
    strDescSetup.wValue = (0x03 << 8) | 0x01; // desc Index
    strDescSetup.wIndex = 0x409;              // language Id
    strDescSetup.wLength = len;
    int32_t ret = OH_Usb_SendControlReadRequest(1, &strDescSetup, UINT32_MAX, strDesc, &len);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Negative testing, setup is nullptr.
 * @tc.number NativeUsbDdkSendControlReadRequest003
 * @tc.desc setup is nullptr.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendControlReadRequest003, Function | MediumTest | Level1)
{
    uint8_t strDesc[USB_DDK_TEST_BUF_SIZE] = {0};
    uint32_t len = USB_DDK_TEST_BUF_SIZE;
    int32_t ret = OH_Usb_SendControlReadRequest(interfaceHandle_, nullptr, UINT32_MAX, strDesc, &len);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Negative testing, data is nullptr.
 * @tc.number NativeUsbDdkSendControlReadRequest005
 * @tc.desc data is nullptr.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendControlReadRequest004, Function | MediumTest | Level1)
{
    uint32_t len = USB_DDK_TEST_BUF_SIZE;
    struct UsbControlRequestSetup strDescSetup;
    strDescSetup.bmRequestType = 0x80;
    strDescSetup.bRequest = 0x06;
    strDescSetup.wValue = (0x03 << 8) | 0x01; // desc Index
    strDescSetup.wIndex = 0x409;              // language Id
    strDescSetup.wLength = len;
    int32_t ret = OH_Usb_SendControlReadRequest(interfaceHandle_, &strDescSetup, UINT32_MAX, nullptr, &len);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Negative testing, dataLen is nullptr.
 * @tc.number NativeUsbDdkSendControlReadRequest006
 * @tc.desc dataLen is nullptr.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendControlReadRequest005, Function | MediumTest | Level1)
{
    uint8_t strDesc[USB_DDK_TEST_BUF_SIZE] = {0};
    struct UsbControlRequestSetup strDescSetup;
    strDescSetup.bmRequestType = 0x80;
    strDescSetup.bRequest = 0x06;
    strDescSetup.wValue = (0x03 << 8) | 0x01; // desc Index
    strDescSetup.wIndex = 0x409;              // language Id
    strDescSetup.wLength = USB_DDK_TEST_BUF_SIZE;
    int32_t ret = OH_Usb_SendControlReadRequest(interfaceHandle_, &strDescSetup, UINT32_MAX, strDesc, nullptr);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Positive testing, send control write request success.
 * @tc.number NativeUsbDdkSendControlWriteRequest001
 * @tc.desc Send control write request success.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendControlWriteRequest001, Function | MediumTest | Level1)
{
    struct UsbControlRequestSetup setup;
    setup.bmRequestType = USB_TYPE_CLASS | USB_RECIP_INTERFACE;
    setup.bRequest = 0x09;
    setup.wValue = 0x200;
    setup.wIndex = 0;
    setup.wLength = 1;
    uint8_t data = 2;
    int32_t ret = OH_Usb_SendControlWriteRequest(interfaceHandle_, &setup, UINT32_MAX, &data, 1);
    EXPECT_EQ(ret, 0);
}

/**
 * @tc.name Negative testing, interfaceHandle error.
 * @tc.number NativeUsbDdkSendControlWriteRequest002
 * @tc.desc interfaceHandle error.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendControlWriteRequest002, Function | MediumTest | Level1)
{
    struct UsbControlRequestSetup setup;
    setup.bmRequestType = USB_TYPE_CLASS | USB_RECIP_INTERFACE;
    setup.bRequest = 0x09;
    setup.wValue = 0x200;
    setup.wIndex = 0;
    setup.wLength = 1;
    uint8_t data = 2;
    int32_t ret = OH_Usb_SendControlWriteRequest(1, &setup, UINT32_MAX, &data, 1);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Negative testing, setup is nullptr.
 * @tc.number NativeUsbDdkSendControlWriteRequest003
 * @tc.desc setup is nullptr.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendControlWriteRequest003, Function | MediumTest | Level1)
{
    uint8_t data = 2;
    int32_t ret = OH_Usb_SendControlWriteRequest(interfaceHandle_, nullptr, UINT32_MAX, &data, 1);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Negative testing, data is nullptr.
 * @tc.number NativeUsbDdkSendControlWriteRequest005
 * @tc.desc data is nullptr.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendControlWriteRequest004, Function | MediumTest | Level1)
{
    struct UsbControlRequestSetup setup;
    setup.bmRequestType = USB_TYPE_CLASS | USB_RECIP_INTERFACE;
    setup.bRequest = 0x09;
    setup.wValue = 0x200;
    setup.wIndex = 0;
    setup.wLength = 1;
    int32_t ret = OH_Usb_SendControlWriteRequest(interfaceHandle_, &setup, UINT32_MAX, nullptr, 1);
    EXPECT_NE(ret, 0);
}

/**
 * @tc.name Positive testing, send pipe request success.
 * @tc.number NativeUsbDdkSendPipRequest001
 * @tc.desc Send pipe request success.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendPipRequest001, Function | MediumTest | Level1)
{
    struct UsbRequestPipe pipe;
    pipe.interfaceHandle = interfaceHandle_;
    pipe.endpoint = endpoint_;
    pipe.timeout = UINT32_MAX;
    struct UsbDeviceMemMap *devMmap = nullptr;
    int32_t ret = OH_Usb_CreateDeviceMemMap(deviceId_, maxPktSize_, &devMmap);
    EXPECT_EQ(ret, 0);
    EXPECT_NE(devMmap, nullptr);
    ret = OH_Usb_SendPipeRequest(&pipe, devMmap);
    EXPECT_EQ(ret, 0);

    OH_Usb_DestroyDeviceMemMap(devMmap);
}

/**
 * @tc.name Negative testing, pipe is nullptr.
 * @tc.number NativeUsbDdkSendPipRequest002
 * @tc.desc pipe is nullptr.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendPipRequest002, Function | MediumTest | Level1)
{
    struct UsbDeviceMemMap *devMmap = nullptr;
    int32_t ret = OH_Usb_CreateDeviceMemMap(deviceId_, maxPktSize_, &devMmap);
    EXPECT_EQ(ret, 0);
    EXPECT_NE(devMmap, nullptr);
    ret = OH_Usb_SendPipeRequest(nullptr, devMmap);
    EXPECT_NE(ret, 0);

    OH_Usb_DestroyDeviceMemMap(devMmap);
}

/**
 * @tc.name Negative testing, devMmap is nullptr.
 * @tc.number NativeUsbDdkSendPipRequest003
 * @tc.desc devMmap is nullptr.
 */
HWTEST_F(NativeUsbDdkTransferTest, NativeUsbDdkSendPipRequest003, Function | MediumTest | Level1)
{
    struct UsbRequestPipe pipe;
    pipe.interfaceHandle = interfaceHandle_;
    pipe.endpoint = endpoint_;
    pipe.timeout = UINT32_MAX;
    int32_t ret = OH_Usb_SendPipeRequest(&pipe, nullptr);
    EXPECT_NE(ret, 0);
}
} // namespace