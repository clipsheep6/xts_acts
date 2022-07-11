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

#define VkglTestCase_037583_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037583_2 "its_mixed.rg32ui_signed_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037583, VkglTestCase_037583_1, VkglTestCase_037583_2);

#define VkglTestCase_037584_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037584_2 "bits_mixed.rg32ui_signed_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037584, VkglTestCase_037584_1, VkglTestCase_037584_2);

#define VkglTestCase_037585_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037585_2 "its_mixed.rg32ui_signed_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037585, VkglTestCase_037585_1, VkglTestCase_037585_2);

#define VkglTestCase_037586_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037586_2 "bits_mixed.rg32ui_signed_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037586, VkglTestCase_037586_1, VkglTestCase_037586_2);

#define VkglTestCase_037587_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037587_2 "bits_mixed.rg32ui_signed_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037587, VkglTestCase_037587_1, VkglTestCase_037587_2);

#define VkglTestCase_037588_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037588_2 "_bits_mixed.rg32ui_signed_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037588, VkglTestCase_037588_1, VkglTestCase_037588_2);

#define VkglTestCase_037589_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bits"
#define VkglTestCase_037589_2 "_mixed.rg32ui_signed_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037589, VkglTestCase_037589_1, VkglTestCase_037589_2);

#define VkglTestCase_037590_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037590_2 "s_mixed.rg32ui_signed_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037590, VkglTestCase_037590_1, VkglTestCase_037590_2);

#define VkglTestCase_037591_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037591_2 "ts_mixed.rg32ui_signed_r11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037591, VkglTestCase_037591_1, VkglTestCase_037591_2);

#define VkglTestCase_037592_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037592_2 "its_mixed.rg32ui_signed_r11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037592, VkglTestCase_037592_1, VkglTestCase_037592_2);
