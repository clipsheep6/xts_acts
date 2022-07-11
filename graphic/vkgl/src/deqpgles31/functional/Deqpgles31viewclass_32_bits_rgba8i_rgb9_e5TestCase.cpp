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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029028_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029028_2 "wclass_32_bits.rgba8i_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029028, VkglTestCase_029028_1, VkglTestCase_029028_2);

#define VkglTestCase_029029_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029029_2 "wclass_32_bits.rgba8i_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029029, VkglTestCase_029029_1, VkglTestCase_029029_2);

#define VkglTestCase_029030_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029030_2 "ewclass_32_bits.rgba8i_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029030, VkglTestCase_029030_1, VkglTestCase_029030_2);

#define VkglTestCase_029031_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029031_2 "ass_32_bits.rgba8i_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029031, VkglTestCase_029031_1, VkglTestCase_029031_2);

#define VkglTestCase_029032_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029032_2 "wclass_32_bits.rgba8i_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029032, VkglTestCase_029032_1, VkglTestCase_029032_2);

#define VkglTestCase_029033_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029033_2 "wclass_32_bits.rgba8i_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029033, VkglTestCase_029033_1, VkglTestCase_029033_2);

#define VkglTestCase_029034_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029034_2 "ewclass_32_bits.rgba8i_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029034, VkglTestCase_029034_1, VkglTestCase_029034_2);

#define VkglTestCase_029035_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029035_2 "ass_32_bits.rgba8i_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029035, VkglTestCase_029035_1, VkglTestCase_029035_2);

#define VkglTestCase_029036_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029036_2 "ewclass_32_bits.rgba8i_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029036, VkglTestCase_029036_1, VkglTestCase_029036_2);

#define VkglTestCase_029037_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029037_2 "ewclass_32_bits.rgba8i_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029037, VkglTestCase_029037_1, VkglTestCase_029037_2);

#define VkglTestCase_029038_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029038_2 "iewclass_32_bits.rgba8i_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029038, VkglTestCase_029038_1, VkglTestCase_029038_2);

#define VkglTestCase_029039_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029039_2 "lass_32_bits.rgba8i_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029039, VkglTestCase_029039_1, VkglTestCase_029039_2);

#define VkglTestCase_029040_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029040_2 "ass_32_bits.rgba8i_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029040, VkglTestCase_029040_1, VkglTestCase_029040_2);

#define VkglTestCase_029041_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029041_2 "ass_32_bits.rgba8i_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029041, VkglTestCase_029041_1, VkglTestCase_029041_2);

#define VkglTestCase_029042_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029042_2 "lass_32_bits.rgba8i_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029042, VkglTestCase_029042_1, VkglTestCase_029042_2);

#define VkglTestCase_029043_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029043_2 "_32_bits.rgba8i_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029043, VkglTestCase_029043_1, VkglTestCase_029043_2);

#define VkglTestCase_029044_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029044_2 "class_32_bits.rgba8i_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029044, VkglTestCase_029044_1, VkglTestCase_029044_2);

#define VkglTestCase_029045_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029045_2 "class_32_bits.rgba8i_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029045, VkglTestCase_029045_1, VkglTestCase_029045_2);

#define VkglTestCase_029046_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029046_2 "wclass_32_bits.rgba8i_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029046, VkglTestCase_029046_1, VkglTestCase_029046_2);

#define VkglTestCase_029047_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029047_2 "ss_32_bits.rgba8i_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029047, VkglTestCase_029047_1, VkglTestCase_029047_2);
