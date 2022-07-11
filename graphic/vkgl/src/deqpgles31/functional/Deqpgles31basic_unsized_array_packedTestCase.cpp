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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009031_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009031_2 "t.basic_unsized_array.packed.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009031, VkglTestCase_009031_1, VkglTestCase_009031_2);

#define VkglTestCase_009032_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009032_2 "t.basic_unsized_array.packed.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009032, VkglTestCase_009032_1, VkglTestCase_009032_2);

#define VkglTestCase_009033_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009033_2 "t.basic_unsized_array.packed.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009033, VkglTestCase_009033_1, VkglTestCase_009033_2);

#define VkglTestCase_009034_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009034_2 "t.basic_unsized_array.packed.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009034, VkglTestCase_009034_1, VkglTestCase_009034_2);

#define VkglTestCase_009035_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_009035_2 "ut.basic_unsized_array.packed.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009035, VkglTestCase_009035_1, VkglTestCase_009035_2);

#define VkglTestCase_009036_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009036_2 "t.basic_unsized_array.packed.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009036, VkglTestCase_009036_1, VkglTestCase_009036_2);

#define VkglTestCase_009037_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009037_2 "t.basic_unsized_array.packed.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009037, VkglTestCase_009037_1, VkglTestCase_009037_2);

#define VkglTestCase_009038_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009038_2 "t.basic_unsized_array.packed.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009038, VkglTestCase_009038_1, VkglTestCase_009038_2);

#define VkglTestCase_009039_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009039_2 "t.basic_unsized_array.packed.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009039, VkglTestCase_009039_1, VkglTestCase_009039_2);

#define VkglTestCase_009040_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009040_2 "t.basic_unsized_array.packed.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009040, VkglTestCase_009040_1, VkglTestCase_009040_2);

#define VkglTestCase_009041_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009041_2 "t.basic_unsized_array.packed.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009041, VkglTestCase_009041_1, VkglTestCase_009041_2);

#define VkglTestCase_009042_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009042_2 "t.basic_unsized_array.packed.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009042, VkglTestCase_009042_1, VkglTestCase_009042_2);

#define VkglTestCase_009043_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009043_2 "t.basic_unsized_array.packed.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009043, VkglTestCase_009043_1, VkglTestCase_009043_2);

#define VkglTestCase_009044_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009044_2 "t.basic_unsized_array.packed.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009044, VkglTestCase_009044_1, VkglTestCase_009044_2);

#define VkglTestCase_009045_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009045_2 "t.basic_unsized_array.packed.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009045, VkglTestCase_009045_1, VkglTestCase_009045_2);

#define VkglTestCase_009046_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009046_2 "t.basic_unsized_array.packed.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009046, VkglTestCase_009046_1, VkglTestCase_009046_2);

#define VkglTestCase_009047_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009047_2 "t.basic_unsized_array.packed.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009047, VkglTestCase_009047_1, VkglTestCase_009047_2);

#define VkglTestCase_009048_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009048_2 "ic_unsized_array.packed.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009048, VkglTestCase_009048_1, VkglTestCase_009048_2);

#define VkglTestCase_009049_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009049_2 "c_unsized_array.packed.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009049, VkglTestCase_009049_1, VkglTestCase_009049_2);

#define VkglTestCase_009050_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009050_2 "t.basic_unsized_array.packed.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009050, VkglTestCase_009050_1, VkglTestCase_009050_2);

#define VkglTestCase_009051_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009051_2 "ic_unsized_array.packed.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009051, VkglTestCase_009051_1, VkglTestCase_009051_2);

#define VkglTestCase_009052_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009052_2 "c_unsized_array.packed.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009052, VkglTestCase_009052_1, VkglTestCase_009052_2);

#define VkglTestCase_009053_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009053_2 "t.basic_unsized_array.packed.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009053, VkglTestCase_009053_1, VkglTestCase_009053_2);

#define VkglTestCase_009054_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009054_2 "ic_unsized_array.packed.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009054, VkglTestCase_009054_1, VkglTestCase_009054_2);

#define VkglTestCase_009055_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009055_2 "c_unsized_array.packed.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009055, VkglTestCase_009055_1, VkglTestCase_009055_2);

#define VkglTestCase_009056_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009056_2 ".basic_unsized_array.packed.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009056, VkglTestCase_009056_1, VkglTestCase_009056_2);

#define VkglTestCase_009057_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009057_2 "c_unsized_array.packed.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009057, VkglTestCase_009057_1, VkglTestCase_009057_2);

#define VkglTestCase_009058_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009058_2 "_unsized_array.packed.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009058, VkglTestCase_009058_1, VkglTestCase_009058_2);

#define VkglTestCase_009059_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009059_2 ".basic_unsized_array.packed.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009059, VkglTestCase_009059_1, VkglTestCase_009059_2);

#define VkglTestCase_009060_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009060_2 "c_unsized_array.packed.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009060, VkglTestCase_009060_1, VkglTestCase_009060_2);

#define VkglTestCase_009061_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009061_2 "_unsized_array.packed.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009061, VkglTestCase_009061_1, VkglTestCase_009061_2);

#define VkglTestCase_009062_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009062_2 ".basic_unsized_array.packed.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009062, VkglTestCase_009062_1, VkglTestCase_009062_2);

#define VkglTestCase_009063_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009063_2 "c_unsized_array.packed.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009063, VkglTestCase_009063_1, VkglTestCase_009063_2);

#define VkglTestCase_009064_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009064_2 "_unsized_array.packed.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009064, VkglTestCase_009064_1, VkglTestCase_009064_2);

#define VkglTestCase_009065_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009065_2 ".basic_unsized_array.packed.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009065, VkglTestCase_009065_1, VkglTestCase_009065_2);

#define VkglTestCase_009066_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009066_2 "c_unsized_array.packed.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009066, VkglTestCase_009066_1, VkglTestCase_009066_2);

#define VkglTestCase_009067_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009067_2 "_unsized_array.packed.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009067, VkglTestCase_009067_1, VkglTestCase_009067_2);

#define VkglTestCase_009068_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009068_2 ".basic_unsized_array.packed.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009068, VkglTestCase_009068_1, VkglTestCase_009068_2);

#define VkglTestCase_009069_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009069_2 "c_unsized_array.packed.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009069, VkglTestCase_009069_1, VkglTestCase_009069_2);

#define VkglTestCase_009070_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009070_2 "_unsized_array.packed.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009070, VkglTestCase_009070_1, VkglTestCase_009070_2);

#define VkglTestCase_009071_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009071_2 ".basic_unsized_array.packed.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009071, VkglTestCase_009071_1, VkglTestCase_009071_2);

#define VkglTestCase_009072_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009072_2 "c_unsized_array.packed.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009072, VkglTestCase_009072_1, VkglTestCase_009072_2);

#define VkglTestCase_009073_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009073_2 "_unsized_array.packed.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009073, VkglTestCase_009073_1, VkglTestCase_009073_2);
