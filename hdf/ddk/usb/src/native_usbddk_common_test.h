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
#ifndef NATIVE_USBDDK_COMMON_TEST_H
#define NATIVE_USBDDK_COMMON_TEST_H
#include <cstdint>
#define USB_DDK_DT_DEVICE              0x01
#define USB_DDK_DT_CONFIG              0x02
#define USB_DDK_TEST_BUF_SIZE          100
#define USB_TYPE_CLASS                 (0x01 << 5)
#define USB_RECIP_INTERFACE            0x01
#define USB_DDK_ENDPOINT_DIR_MASK      0x80
#define USB_DDK_DIR_IN                 0x80
#define USB_DDK_ENDPOINT_XFERTYPE_MASK 0x03
#define USB_DDK_ENDPOINT_XFER_INT      0x03
uint64_t GetDeviceId(void);
#endif // NATIVE_USBDDK_COMMON_TEST_H
