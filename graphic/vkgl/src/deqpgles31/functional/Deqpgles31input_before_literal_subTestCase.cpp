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
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005157_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005157_2 ".arithmetic.input_before_literal.sub.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005157, VkglTestCase_005157_1, VkglTestCase_005157_2);

#define VkglTestCase_005158_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005158_2 "arithmetic.input_before_literal.sub.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005158, VkglTestCase_005158_1, VkglTestCase_005158_2);

#define VkglTestCase_005159_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005159_2 "1.arithmetic.input_before_literal.sub.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005159, VkglTestCase_005159_1, VkglTestCase_005159_2);

#define VkglTestCase_005160_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005160_2 ".arithmetic.input_before_literal.sub.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005160, VkglTestCase_005160_1, VkglTestCase_005160_2);

#define VkglTestCase_005161_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005161_2 "1.arithmetic.input_before_literal.sub.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005161, VkglTestCase_005161_1, VkglTestCase_005161_2);

#define VkglTestCase_005162_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005162_2 ".arithmetic.input_before_literal.sub.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005162, VkglTestCase_005162_1, VkglTestCase_005162_2);

#define VkglTestCase_005163_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005163_2 "1.arithmetic.input_before_literal.sub.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005163, VkglTestCase_005163_1, VkglTestCase_005163_2);

#define VkglTestCase_005164_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005164_2 ".arithmetic.input_before_literal.sub.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005164, VkglTestCase_005164_1, VkglTestCase_005164_2);

#define VkglTestCase_005165_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005165_2 ".arithmetic.input_before_literal.sub.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005165, VkglTestCase_005165_1, VkglTestCase_005165_2);

#define VkglTestCase_005166_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005166_2 "arithmetic.input_before_literal.sub.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005166, VkglTestCase_005166_1, VkglTestCase_005166_2);

#define VkglTestCase_005167_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005167_2 ".arithmetic.input_before_literal.sub.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005167, VkglTestCase_005167_1, VkglTestCase_005167_2);

#define VkglTestCase_005168_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005168_2 "arithmetic.input_before_literal.sub.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005168, VkglTestCase_005168_1, VkglTestCase_005168_2);

#define VkglTestCase_005169_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005169_2 ".arithmetic.input_before_literal.sub.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005169, VkglTestCase_005169_1, VkglTestCase_005169_2);

#define VkglTestCase_005170_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005170_2 "arithmetic.input_before_literal.sub.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005170, VkglTestCase_005170_1, VkglTestCase_005170_2);

#define VkglTestCase_005171_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005171_2 ".arithmetic.input_before_literal.sub.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005171, VkglTestCase_005171_1, VkglTestCase_005171_2);

#define VkglTestCase_005172_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005172_2 "arithmetic.input_before_literal.sub.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005172, VkglTestCase_005172_1, VkglTestCase_005172_2);

#define VkglTestCase_005173_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005173_2 ".arithmetic.input_before_literal.sub.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005173, VkglTestCase_005173_1, VkglTestCase_005173_2);

#define VkglTestCase_005174_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005174_2 "arithmetic.input_before_literal.sub.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005174, VkglTestCase_005174_1, VkglTestCase_005174_2);

#define VkglTestCase_005175_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005175_2 ".arithmetic.input_before_literal.sub.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005175, VkglTestCase_005175_1, VkglTestCase_005175_2);

#define VkglTestCase_005176_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005176_2 "arithmetic.input_before_literal.sub.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005176, VkglTestCase_005176_1, VkglTestCase_005176_2);

#define VkglTestCase_005177_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005177_2 ".arithmetic.input_before_literal.sub.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005177, VkglTestCase_005177_1, VkglTestCase_005177_2);

#define VkglTestCase_005178_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005178_2 "arithmetic.input_before_literal.sub.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005178, VkglTestCase_005178_1, VkglTestCase_005178_2);

#define VkglTestCase_005179_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005179_2 ".arithmetic.input_before_literal.sub.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005179, VkglTestCase_005179_1, VkglTestCase_005179_2);

#define VkglTestCase_005180_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005180_2 "arithmetic.input_before_literal.sub.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005180, VkglTestCase_005180_1, VkglTestCase_005180_2);

#define VkglTestCase_005181_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005181_2 ".arithmetic.input_before_literal.sub.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005181, VkglTestCase_005181_1, VkglTestCase_005181_2);

#define VkglTestCase_005182_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005182_2 "arithmetic.input_before_literal.sub.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005182, VkglTestCase_005182_1, VkglTestCase_005182_2);

#define VkglTestCase_005183_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005183_2 ".arithmetic.input_before_literal.sub.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005183, VkglTestCase_005183_1, VkglTestCase_005183_2);

#define VkglTestCase_005184_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005184_2 "arithmetic.input_before_literal.sub.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005184, VkglTestCase_005184_1, VkglTestCase_005184_2);

#define VkglTestCase_006191_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006191_2 ".arithmetic.input_before_literal.sub.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006191, VkglTestCase_006191_1, VkglTestCase_006191_2);

#define VkglTestCase_006192_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006192_2 "arithmetic.input_before_literal.sub.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006192, VkglTestCase_006192_1, VkglTestCase_006192_2);

#define VkglTestCase_006193_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006193_2 "2.arithmetic.input_before_literal.sub.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006193, VkglTestCase_006193_1, VkglTestCase_006193_2);

#define VkglTestCase_006194_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006194_2 ".arithmetic.input_before_literal.sub.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006194, VkglTestCase_006194_1, VkglTestCase_006194_2);

#define VkglTestCase_006195_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006195_2 "2.arithmetic.input_before_literal.sub.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006195, VkglTestCase_006195_1, VkglTestCase_006195_2);

#define VkglTestCase_006196_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006196_2 ".arithmetic.input_before_literal.sub.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006196, VkglTestCase_006196_1, VkglTestCase_006196_2);

#define VkglTestCase_006197_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006197_2 "2.arithmetic.input_before_literal.sub.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006197, VkglTestCase_006197_1, VkglTestCase_006197_2);

#define VkglTestCase_006198_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006198_2 ".arithmetic.input_before_literal.sub.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006198, VkglTestCase_006198_1, VkglTestCase_006198_2);

#define VkglTestCase_006199_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006199_2 ".arithmetic.input_before_literal.sub.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006199, VkglTestCase_006199_1, VkglTestCase_006199_2);

#define VkglTestCase_006200_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006200_2 "arithmetic.input_before_literal.sub.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006200, VkglTestCase_006200_1, VkglTestCase_006200_2);

#define VkglTestCase_006201_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006201_2 ".arithmetic.input_before_literal.sub.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006201, VkglTestCase_006201_1, VkglTestCase_006201_2);

#define VkglTestCase_006202_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006202_2 "arithmetic.input_before_literal.sub.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006202, VkglTestCase_006202_1, VkglTestCase_006202_2);

#define VkglTestCase_006203_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006203_2 ".arithmetic.input_before_literal.sub.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006203, VkglTestCase_006203_1, VkglTestCase_006203_2);

#define VkglTestCase_006204_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006204_2 "arithmetic.input_before_literal.sub.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006204, VkglTestCase_006204_1, VkglTestCase_006204_2);

#define VkglTestCase_006205_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006205_2 ".arithmetic.input_before_literal.sub.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006205, VkglTestCase_006205_1, VkglTestCase_006205_2);

#define VkglTestCase_006206_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006206_2 "arithmetic.input_before_literal.sub.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006206, VkglTestCase_006206_1, VkglTestCase_006206_2);

#define VkglTestCase_006207_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006207_2 ".arithmetic.input_before_literal.sub.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006207, VkglTestCase_006207_1, VkglTestCase_006207_2);

#define VkglTestCase_006208_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006208_2 "arithmetic.input_before_literal.sub.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006208, VkglTestCase_006208_1, VkglTestCase_006208_2);

#define VkglTestCase_006209_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006209_2 ".arithmetic.input_before_literal.sub.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006209, VkglTestCase_006209_1, VkglTestCase_006209_2);

#define VkglTestCase_006210_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006210_2 "arithmetic.input_before_literal.sub.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006210, VkglTestCase_006210_1, VkglTestCase_006210_2);

#define VkglTestCase_006211_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006211_2 ".arithmetic.input_before_literal.sub.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006211, VkglTestCase_006211_1, VkglTestCase_006211_2);

#define VkglTestCase_006212_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006212_2 "arithmetic.input_before_literal.sub.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006212, VkglTestCase_006212_1, VkglTestCase_006212_2);

#define VkglTestCase_006213_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006213_2 ".arithmetic.input_before_literal.sub.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006213, VkglTestCase_006213_1, VkglTestCase_006213_2);

#define VkglTestCase_006214_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006214_2 "arithmetic.input_before_literal.sub.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006214, VkglTestCase_006214_1, VkglTestCase_006214_2);

#define VkglTestCase_006215_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006215_2 ".arithmetic.input_before_literal.sub.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006215, VkglTestCase_006215_1, VkglTestCase_006215_2);

#define VkglTestCase_006216_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006216_2 "arithmetic.input_before_literal.sub.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006216, VkglTestCase_006216_1, VkglTestCase_006216_2);

#define VkglTestCase_006217_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006217_2 ".arithmetic.input_before_literal.sub.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006217, VkglTestCase_006217_1, VkglTestCase_006217_2);

#define VkglTestCase_006218_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006218_2 "arithmetic.input_before_literal.sub.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006218, VkglTestCase_006218_1, VkglTestCase_006218_2);
