/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037461_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037461_2 "4_bits_mixed.r11_eac_rgba16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037461, VkglTestCase_037461_1, VkglTestCase_037461_2);

#define VkglTestCase_037462_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037462_2 "4_bits_mixed.r11_eac_rgba16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037462, VkglTestCase_037462_1, VkglTestCase_037462_2);

#define VkglTestCase_037463_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037463_2 "64_bits_mixed.r11_eac_rgba16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037463, VkglTestCase_037463_1, VkglTestCase_037463_2);

#define VkglTestCase_037464_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037464_2 "its_mixed.r11_eac_rgba16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037464, VkglTestCase_037464_1, VkglTestCase_037464_2);

#define VkglTestCase_037465_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037465_2 "bits_mixed.r11_eac_rgba16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037465, VkglTestCase_037465_1, VkglTestCase_037465_2);

#define VkglTestCase_037466_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037466_2 "64_bits_mixed.r11_eac_rgba16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037466, VkglTestCase_037466_1, VkglTestCase_037466_2);

#define VkglTestCase_037467_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037467_2 "64_bits_mixed.r11_eac_rgba16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037467, VkglTestCase_037467_1, VkglTestCase_037467_2);

#define VkglTestCase_037468_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037468_2 "_64_bits_mixed.r11_eac_rgba16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037468, VkglTestCase_037468_1, VkglTestCase_037468_2);

#define VkglTestCase_037469_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037469_2 "bits_mixed.r11_eac_rgba16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037469, VkglTestCase_037469_1, VkglTestCase_037469_2);

#define VkglTestCase_037470_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037470_2 "_bits_mixed.r11_eac_rgba16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037470, VkglTestCase_037470_1, VkglTestCase_037470_2);
