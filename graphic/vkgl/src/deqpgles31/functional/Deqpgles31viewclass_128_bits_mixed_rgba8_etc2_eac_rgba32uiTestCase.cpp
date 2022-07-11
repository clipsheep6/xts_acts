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

#define VkglTestCase_035029_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035029_2 "its_mixed.rgba8_etc2_eac_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035029, VkglTestCase_035029_1, VkglTestCase_035029_2);

#define VkglTestCase_035030_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035030_2 "its_mixed.rgba8_etc2_eac_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035030, VkglTestCase_035030_1, VkglTestCase_035030_2);

#define VkglTestCase_035031_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035031_2 "bits_mixed.rgba8_etc2_eac_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035031, VkglTestCase_035031_1, VkglTestCase_035031_2);

#define VkglTestCase_035032_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035032_2 "_mixed.rgba8_etc2_eac_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035032, VkglTestCase_035032_1, VkglTestCase_035032_2);

#define VkglTestCase_035033_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035033_2 "s_mixed.rgba8_etc2_eac_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035033, VkglTestCase_035033_1, VkglTestCase_035033_2);

#define VkglTestCase_035034_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035034_2 "bits_mixed.rgba8_etc2_eac_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035034, VkglTestCase_035034_1, VkglTestCase_035034_2);

#define VkglTestCase_035035_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035035_2 "bits_mixed.rgba8_etc2_eac_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035035, VkglTestCase_035035_1, VkglTestCase_035035_2);

#define VkglTestCase_035036_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_035036_2 "_bits_mixed.rgba8_etc2_eac_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035036, VkglTestCase_035036_1, VkglTestCase_035036_2);

#define VkglTestCase_035037_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035037_2 "s_mixed.rgba8_etc2_eac_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035037, VkglTestCase_035037_1, VkglTestCase_035037_2);

#define VkglTestCase_035038_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035038_2 "ts_mixed.rgba8_etc2_eac_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035038, VkglTestCase_035038_1, VkglTestCase_035038_2);
