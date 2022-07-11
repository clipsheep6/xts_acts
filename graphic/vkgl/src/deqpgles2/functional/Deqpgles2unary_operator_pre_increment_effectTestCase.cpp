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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004030_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004030_2 "perator.pre_increment_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004030, VkglTestCase_004030_1, VkglTestCase_004030_2);

#define VkglTestCase_004031_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004031_2 "erator.pre_increment_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004031, VkglTestCase_004031_1, VkglTestCase_004031_2);

#define VkglTestCase_004032_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004032_2 "erator.pre_increment_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004032, VkglTestCase_004032_1, VkglTestCase_004032_2);

#define VkglTestCase_004033_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004033_2 "rator.pre_increment_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004033, VkglTestCase_004033_1, VkglTestCase_004033_2);

#define VkglTestCase_004034_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004034_2 "perator.pre_increment_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004034, VkglTestCase_004034_1, VkglTestCase_004034_2);

#define VkglTestCase_004035_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004035_2 "erator.pre_increment_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004035, VkglTestCase_004035_1, VkglTestCase_004035_2);

#define VkglTestCase_004036_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004036_2 "operator.pre_increment_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004036, VkglTestCase_004036_1, VkglTestCase_004036_2);

#define VkglTestCase_004037_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004037_2 "perator.pre_increment_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004037, VkglTestCase_004037_1, VkglTestCase_004037_2);

#define VkglTestCase_004038_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004038_2 "erator.pre_increment_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004038, VkglTestCase_004038_1, VkglTestCase_004038_2);

#define VkglTestCase_004039_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004039_2 "rator.pre_increment_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004039, VkglTestCase_004039_1, VkglTestCase_004039_2);

#define VkglTestCase_004040_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004040_2 "perator.pre_increment_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004040, VkglTestCase_004040_1, VkglTestCase_004040_2);

#define VkglTestCase_004041_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004041_2 "erator.pre_increment_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004041, VkglTestCase_004041_1, VkglTestCase_004041_2);

#define VkglTestCase_004042_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004042_2 "operator.pre_increment_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004042, VkglTestCase_004042_1, VkglTestCase_004042_2);

#define VkglTestCase_004043_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004043_2 "perator.pre_increment_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004043, VkglTestCase_004043_1, VkglTestCase_004043_2);

#define VkglTestCase_004044_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004044_2 "erator.pre_increment_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004044, VkglTestCase_004044_1, VkglTestCase_004044_2);

#define VkglTestCase_004045_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004045_2 "rator.pre_increment_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004045, VkglTestCase_004045_1, VkglTestCase_004045_2);

#define VkglTestCase_004046_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004046_2 "perator.pre_increment_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004046, VkglTestCase_004046_1, VkglTestCase_004046_2);

#define VkglTestCase_004047_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004047_2 "erator.pre_increment_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004047, VkglTestCase_004047_1, VkglTestCase_004047_2);

#define VkglTestCase_004048_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004048_2 "operator.pre_increment_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004048, VkglTestCase_004048_1, VkglTestCase_004048_2);

#define VkglTestCase_004049_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004049_2 "perator.pre_increment_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004049, VkglTestCase_004049_1, VkglTestCase_004049_2);

#define VkglTestCase_004050_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004050_2 "erator.pre_increment_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004050, VkglTestCase_004050_1, VkglTestCase_004050_2);

#define VkglTestCase_004051_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004051_2 "rator.pre_increment_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004051, VkglTestCase_004051_1, VkglTestCase_004051_2);

#define VkglTestCase_004052_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004052_2 "perator.pre_increment_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004052, VkglTestCase_004052_1, VkglTestCase_004052_2);

#define VkglTestCase_004053_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004053_2 "erator.pre_increment_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004053, VkglTestCase_004053_1, VkglTestCase_004053_2);

#define VkglTestCase_004054_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004054_2 "operator.pre_increment_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004054, VkglTestCase_004054_1, VkglTestCase_004054_2);

#define VkglTestCase_004055_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004055_2 "perator.pre_increment_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004055, VkglTestCase_004055_1, VkglTestCase_004055_2);

#define VkglTestCase_004056_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004056_2 "perator.pre_increment_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004056, VkglTestCase_004056_1, VkglTestCase_004056_2);

#define VkglTestCase_004057_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004057_2 "erator.pre_increment_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004057, VkglTestCase_004057_1, VkglTestCase_004057_2);

#define VkglTestCase_004058_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004058_2 "operator.pre_increment_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004058, VkglTestCase_004058_1, VkglTestCase_004058_2);

#define VkglTestCase_004059_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004059_2 "perator.pre_increment_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004059, VkglTestCase_004059_1, VkglTestCase_004059_2);

#define VkglTestCase_004060_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004060_2 "perator.pre_increment_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004060, VkglTestCase_004060_1, VkglTestCase_004060_2);

#define VkglTestCase_004061_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004061_2 "erator.pre_increment_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004061, VkglTestCase_004061_1, VkglTestCase_004061_2);

#define VkglTestCase_004062_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004062_2 "erator.pre_increment_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004062, VkglTestCase_004062_1, VkglTestCase_004062_2);

#define VkglTestCase_004063_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004063_2 "rator.pre_increment_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004063, VkglTestCase_004063_1, VkglTestCase_004063_2);

#define VkglTestCase_004064_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004064_2 "perator.pre_increment_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004064, VkglTestCase_004064_1, VkglTestCase_004064_2);

#define VkglTestCase_004065_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004065_2 "erator.pre_increment_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004065, VkglTestCase_004065_1, VkglTestCase_004065_2);

#define VkglTestCase_004066_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004066_2 "perator.pre_increment_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004066, VkglTestCase_004066_1, VkglTestCase_004066_2);

#define VkglTestCase_004067_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004067_2 "erator.pre_increment_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004067, VkglTestCase_004067_1, VkglTestCase_004067_2);

#define VkglTestCase_004068_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004068_2 "erator.pre_increment_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004068, VkglTestCase_004068_1, VkglTestCase_004068_2);

#define VkglTestCase_004069_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004069_2 "rator.pre_increment_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004069, VkglTestCase_004069_1, VkglTestCase_004069_2);

#define VkglTestCase_004070_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004070_2 "perator.pre_increment_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004070, VkglTestCase_004070_1, VkglTestCase_004070_2);

#define VkglTestCase_004071_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004071_2 "erator.pre_increment_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004071, VkglTestCase_004071_1, VkglTestCase_004071_2);

#define VkglTestCase_004072_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004072_2 "perator.pre_increment_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004072, VkglTestCase_004072_1, VkglTestCase_004072_2);

#define VkglTestCase_004073_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004073_2 "erator.pre_increment_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004073, VkglTestCase_004073_1, VkglTestCase_004073_2);

#define VkglTestCase_004074_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004074_2 "erator.pre_increment_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004074, VkglTestCase_004074_1, VkglTestCase_004074_2);

#define VkglTestCase_004075_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004075_2 "rator.pre_increment_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004075, VkglTestCase_004075_1, VkglTestCase_004075_2);

#define VkglTestCase_004076_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004076_2 "perator.pre_increment_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004076, VkglTestCase_004076_1, VkglTestCase_004076_2);

#define VkglTestCase_004077_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004077_2 "erator.pre_increment_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004077, VkglTestCase_004077_1, VkglTestCase_004077_2);
