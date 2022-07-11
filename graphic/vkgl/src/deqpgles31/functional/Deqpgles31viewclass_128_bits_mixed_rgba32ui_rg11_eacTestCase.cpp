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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035059_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_035059_2 "8_bits_mixed.rgba32ui_rg11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035059, VkglTestCase_035059_1, VkglTestCase_035059_2);

#define VkglTestCase_035060_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_035060_2 "28_bits_mixed.rgba32ui_rg11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035060, VkglTestCase_035060_1, VkglTestCase_035060_2);

#define VkglTestCase_035061_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_035061_2 "8_bits_mixed.rgba32ui_rg11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035061, VkglTestCase_035061_1, VkglTestCase_035061_2);

#define VkglTestCase_035062_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_035062_2 "28_bits_mixed.rgba32ui_rg11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035062, VkglTestCase_035062_1, VkglTestCase_035062_2);

#define VkglTestCase_035063_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_035063_2 "28_bits_mixed.rgba32ui_rg11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035063, VkglTestCase_035063_1, VkglTestCase_035063_2);

#define VkglTestCase_035064_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_035064_2 "128_bits_mixed.rgba32ui_rg11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035064, VkglTestCase_035064_1, VkglTestCase_035064_2);

#define VkglTestCase_035065_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035065_2 "its_mixed.rgba32ui_rg11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035065, VkglTestCase_035065_1, VkglTestCase_035065_2);

#define VkglTestCase_035066_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035066_2 "bits_mixed.rgba32ui_rg11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035066, VkglTestCase_035066_1, VkglTestCase_035066_2);

#define VkglTestCase_035067_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035067_2 "bits_mixed.rgba32ui_rg11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035067, VkglTestCase_035067_1, VkglTestCase_035067_2);

#define VkglTestCase_035068_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_035068_2 "_bits_mixed.rgba32ui_rg11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035068, VkglTestCase_035068_1, VkglTestCase_035068_2);
