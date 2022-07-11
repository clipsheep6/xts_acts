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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033047_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033047_2 "ewclass_8_bits.r8_snorm_r8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033047, VkglTestCase_033047_1, VkglTestCase_033047_2);

#define VkglTestCase_033048_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033048_2 "ewclass_8_bits.r8_snorm_r8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033048, VkglTestCase_033048_1, VkglTestCase_033048_2);

#define VkglTestCase_033049_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033049_2 "iewclass_8_bits.r8_snorm_r8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033049, VkglTestCase_033049_1, VkglTestCase_033049_2);

#define VkglTestCase_033050_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_033050_2 "lass_8_bits.r8_snorm_r8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033050, VkglTestCase_033050_1, VkglTestCase_033050_2);

#define VkglTestCase_033051_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033051_2 "wclass_8_bits.r8_snorm_r8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033051, VkglTestCase_033051_1, VkglTestCase_033051_2);

#define VkglTestCase_033052_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033052_2 "ewclass_8_bits.r8_snorm_r8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033052, VkglTestCase_033052_1, VkglTestCase_033052_2);

#define VkglTestCase_033053_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033053_2 "ewclass_8_bits.r8_snorm_r8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033053, VkglTestCase_033053_1, VkglTestCase_033053_2);

#define VkglTestCase_033054_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033054_2 "iewclass_8_bits.r8_snorm_r8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033054, VkglTestCase_033054_1, VkglTestCase_033054_2);

#define VkglTestCase_033055_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_033055_2 "lass_8_bits.r8_snorm_r8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033055, VkglTestCase_033055_1, VkglTestCase_033055_2);

#define VkglTestCase_033056_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033056_2 "wclass_8_bits.r8_snorm_r8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033056, VkglTestCase_033056_1, VkglTestCase_033056_2);

#define VkglTestCase_033057_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033057_2 "iewclass_8_bits.r8_snorm_r8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033057, VkglTestCase_033057_1, VkglTestCase_033057_2);

#define VkglTestCase_033058_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033058_2 "iewclass_8_bits.r8_snorm_r8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033058, VkglTestCase_033058_1, VkglTestCase_033058_2);

#define VkglTestCase_033059_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_033059_2 "viewclass_8_bits.r8_snorm_r8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033059, VkglTestCase_033059_1, VkglTestCase_033059_2);

#define VkglTestCase_033060_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033060_2 "class_8_bits.r8_snorm_r8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033060, VkglTestCase_033060_1, VkglTestCase_033060_2);

#define VkglTestCase_033061_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033061_2 "ewclass_8_bits.r8_snorm_r8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033061, VkglTestCase_033061_1, VkglTestCase_033061_2);

#define VkglTestCase_033062_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_033062_2 "lass_8_bits.r8_snorm_r8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033062, VkglTestCase_033062_1, VkglTestCase_033062_2);

#define VkglTestCase_033063_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_033063_2 "lass_8_bits.r8_snorm_r8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033063, VkglTestCase_033063_1, VkglTestCase_033063_2);

#define VkglTestCase_033064_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033064_2 "class_8_bits.r8_snorm_r8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033064, VkglTestCase_033064_1, VkglTestCase_033064_2);

#define VkglTestCase_033065_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_033065_2 "s_8_bits.r8_snorm_r8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033065, VkglTestCase_033065_1, VkglTestCase_033065_2);

#define VkglTestCase_033066_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_033066_2 "ass_8_bits.r8_snorm_r8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033066, VkglTestCase_033066_1, VkglTestCase_033066_2);
