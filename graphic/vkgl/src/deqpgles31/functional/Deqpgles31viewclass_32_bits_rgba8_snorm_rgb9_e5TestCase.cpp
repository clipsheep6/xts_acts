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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030594_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030594_2 "lass_32_bits.rgba8_snorm_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030594, VkglTestCase_030594_1, VkglTestCase_030594_2);

#define VkglTestCase_030595_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030595_2 "lass_32_bits.rgba8_snorm_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030595, VkglTestCase_030595_1, VkglTestCase_030595_2);

#define VkglTestCase_030596_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030596_2 "class_32_bits.rgba8_snorm_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030596, VkglTestCase_030596_1, VkglTestCase_030596_2);

#define VkglTestCase_030597_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030597_2 "s_32_bits.rgba8_snorm_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030597, VkglTestCase_030597_1, VkglTestCase_030597_2);

#define VkglTestCase_030598_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030598_2 "lass_32_bits.rgba8_snorm_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030598, VkglTestCase_030598_1, VkglTestCase_030598_2);

#define VkglTestCase_030599_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030599_2 "lass_32_bits.rgba8_snorm_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030599, VkglTestCase_030599_1, VkglTestCase_030599_2);

#define VkglTestCase_030600_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030600_2 "class_32_bits.rgba8_snorm_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030600, VkglTestCase_030600_1, VkglTestCase_030600_2);

#define VkglTestCase_030601_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030601_2 "s_32_bits.rgba8_snorm_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030601, VkglTestCase_030601_1, VkglTestCase_030601_2);

#define VkglTestCase_030602_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030602_2 "class_32_bits.rgba8_snorm_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030602, VkglTestCase_030602_1, VkglTestCase_030602_2);

#define VkglTestCase_030603_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030603_2 "class_32_bits.rgba8_snorm_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030603, VkglTestCase_030603_1, VkglTestCase_030603_2);

#define VkglTestCase_030604_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030604_2 "wclass_32_bits.rgba8_snorm_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030604, VkglTestCase_030604_1, VkglTestCase_030604_2);

#define VkglTestCase_030605_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030605_2 "ss_32_bits.rgba8_snorm_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030605, VkglTestCase_030605_1, VkglTestCase_030605_2);

#define VkglTestCase_030606_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030606_2 "s_32_bits.rgba8_snorm_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030606, VkglTestCase_030606_1, VkglTestCase_030606_2);

#define VkglTestCase_030607_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030607_2 "s_32_bits.rgba8_snorm_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030607, VkglTestCase_030607_1, VkglTestCase_030607_2);

#define VkglTestCase_030608_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030608_2 "ss_32_bits.rgba8_snorm_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030608, VkglTestCase_030608_1, VkglTestCase_030608_2);

#define VkglTestCase_030609_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030609_2 "2_bits.rgba8_snorm_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030609, VkglTestCase_030609_1, VkglTestCase_030609_2);
