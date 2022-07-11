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

#define VkglTestCase_037573_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037573_2 "64_bits_mixed.r11_eac_rg32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037573, VkglTestCase_037573_1, VkglTestCase_037573_2);

#define VkglTestCase_037574_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037574_2 "64_bits_mixed.r11_eac_rg32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037574, VkglTestCase_037574_1, VkglTestCase_037574_2);

#define VkglTestCase_037575_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037575_2 "_64_bits_mixed.r11_eac_rg32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037575, VkglTestCase_037575_1, VkglTestCase_037575_2);

#define VkglTestCase_037576_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037576_2 "bits_mixed.r11_eac_rg32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037576, VkglTestCase_037576_1, VkglTestCase_037576_2);

#define VkglTestCase_037577_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037577_2 "_bits_mixed.r11_eac_rg32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037577, VkglTestCase_037577_1, VkglTestCase_037577_2);

#define VkglTestCase_037578_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037578_2 "_64_bits_mixed.r11_eac_rg32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037578, VkglTestCase_037578_1, VkglTestCase_037578_2);

#define VkglTestCase_037579_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037579_2 "_64_bits_mixed.r11_eac_rg32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037579, VkglTestCase_037579_1, VkglTestCase_037579_2);

#define VkglTestCase_037580_1 "dEQP-GLES31.functional.copy_image.mixed.viewclas"
#define VkglTestCase_037580_2 "s_64_bits_mixed.r11_eac_rg32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037580, VkglTestCase_037580_1, VkglTestCase_037580_2);

#define VkglTestCase_037581_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037581_2 "_bits_mixed.r11_eac_rg32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037581, VkglTestCase_037581_1, VkglTestCase_037581_2);

#define VkglTestCase_037582_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037582_2 "4_bits_mixed.r11_eac_rg32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037582, VkglTestCase_037582_1, VkglTestCase_037582_2);
