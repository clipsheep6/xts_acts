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

#define VkglTestCase_030330_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030330_2 "class_32_bits.rgba8_snorm_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030330, VkglTestCase_030330_1, VkglTestCase_030330_2);

#define VkglTestCase_030331_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030331_2 "class_32_bits.rgba8_snorm_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030331, VkglTestCase_030331_1, VkglTestCase_030331_2);

#define VkglTestCase_030332_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030332_2 "wclass_32_bits.rgba8_snorm_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030332, VkglTestCase_030332_1, VkglTestCase_030332_2);

#define VkglTestCase_030333_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030333_2 "ss_32_bits.rgba8_snorm_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030333, VkglTestCase_030333_1, VkglTestCase_030333_2);

#define VkglTestCase_030334_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030334_2 "class_32_bits.rgba8_snorm_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030334, VkglTestCase_030334_1, VkglTestCase_030334_2);

#define VkglTestCase_030335_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030335_2 "class_32_bits.rgba8_snorm_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030335, VkglTestCase_030335_1, VkglTestCase_030335_2);

#define VkglTestCase_030336_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030336_2 "wclass_32_bits.rgba8_snorm_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030336, VkglTestCase_030336_1, VkglTestCase_030336_2);

#define VkglTestCase_030337_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030337_2 "ss_32_bits.rgba8_snorm_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030337, VkglTestCase_030337_1, VkglTestCase_030337_2);

#define VkglTestCase_030338_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030338_2 "wclass_32_bits.rgba8_snorm_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030338, VkglTestCase_030338_1, VkglTestCase_030338_2);

#define VkglTestCase_030339_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030339_2 "wclass_32_bits.rgba8_snorm_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030339, VkglTestCase_030339_1, VkglTestCase_030339_2);

#define VkglTestCase_030340_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030340_2 "ewclass_32_bits.rgba8_snorm_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030340, VkglTestCase_030340_1, VkglTestCase_030340_2);

#define VkglTestCase_030341_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030341_2 "ass_32_bits.rgba8_snorm_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030341, VkglTestCase_030341_1, VkglTestCase_030341_2);

#define VkglTestCase_030342_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030342_2 "ss_32_bits.rgba8_snorm_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030342, VkglTestCase_030342_1, VkglTestCase_030342_2);

#define VkglTestCase_030343_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030343_2 "ss_32_bits.rgba8_snorm_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030343, VkglTestCase_030343_1, VkglTestCase_030343_2);

#define VkglTestCase_030344_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030344_2 "ass_32_bits.rgba8_snorm_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030344, VkglTestCase_030344_1, VkglTestCase_030344_2);

#define VkglTestCase_030345_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030345_2 "32_bits.rgba8_snorm_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030345, VkglTestCase_030345_1, VkglTestCase_030345_2);
