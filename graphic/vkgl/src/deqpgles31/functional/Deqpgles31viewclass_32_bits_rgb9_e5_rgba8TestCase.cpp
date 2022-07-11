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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031040_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031040_2 "ewclass_32_bits.rgb9_e5_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031040, VkglTestCase_031040_1, VkglTestCase_031040_2);

#define VkglTestCase_031041_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031041_2 "ewclass_32_bits.rgb9_e5_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031041, VkglTestCase_031041_1, VkglTestCase_031041_2);

#define VkglTestCase_031042_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031042_2 "iewclass_32_bits.rgb9_e5_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031042, VkglTestCase_031042_1, VkglTestCase_031042_2);

#define VkglTestCase_031043_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031043_2 "lass_32_bits.rgb9_e5_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031043, VkglTestCase_031043_1, VkglTestCase_031043_2);

#define VkglTestCase_031044_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031044_2 "class_32_bits.rgb9_e5_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031044, VkglTestCase_031044_1, VkglTestCase_031044_2);

#define VkglTestCase_031045_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031045_2 "ewclass_32_bits.rgb9_e5_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031045, VkglTestCase_031045_1, VkglTestCase_031045_2);

#define VkglTestCase_031046_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031046_2 "ewclass_32_bits.rgb9_e5_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031046, VkglTestCase_031046_1, VkglTestCase_031046_2);

#define VkglTestCase_031047_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031047_2 "iewclass_32_bits.rgb9_e5_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031047, VkglTestCase_031047_1, VkglTestCase_031047_2);

#define VkglTestCase_031048_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031048_2 "lass_32_bits.rgb9_e5_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031048, VkglTestCase_031048_1, VkglTestCase_031048_2);

#define VkglTestCase_031049_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031049_2 "class_32_bits.rgb9_e5_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031049, VkglTestCase_031049_1, VkglTestCase_031049_2);

#define VkglTestCase_031050_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031050_2 "iewclass_32_bits.rgb9_e5_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031050, VkglTestCase_031050_1, VkglTestCase_031050_2);

#define VkglTestCase_031051_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031051_2 "iewclass_32_bits.rgb9_e5_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031051, VkglTestCase_031051_1, VkglTestCase_031051_2);

#define VkglTestCase_031052_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031052_2 "viewclass_32_bits.rgb9_e5_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031052, VkglTestCase_031052_1, VkglTestCase_031052_2);

#define VkglTestCase_031053_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031053_2 "class_32_bits.rgb9_e5_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031053, VkglTestCase_031053_1, VkglTestCase_031053_2);

#define VkglTestCase_031054_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031054_2 "wclass_32_bits.rgb9_e5_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031054, VkglTestCase_031054_1, VkglTestCase_031054_2);

#define VkglTestCase_031055_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031055_2 "lass_32_bits.rgb9_e5_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031055, VkglTestCase_031055_1, VkglTestCase_031055_2);

#define VkglTestCase_031056_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031056_2 "lass_32_bits.rgb9_e5_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031056, VkglTestCase_031056_1, VkglTestCase_031056_2);

#define VkglTestCase_031057_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031057_2 "class_32_bits.rgb9_e5_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031057, VkglTestCase_031057_1, VkglTestCase_031057_2);

#define VkglTestCase_031058_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031058_2 "s_32_bits.rgb9_e5_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031058, VkglTestCase_031058_1, VkglTestCase_031058_2);

#define VkglTestCase_031059_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031059_2 "ss_32_bits.rgb9_e5_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031059, VkglTestCase_031059_1, VkglTestCase_031059_2);
