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

#define VkglTestCase_005185_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005185_2 ".arithmetic.input_before_literal.mul.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005185, VkglTestCase_005185_1, VkglTestCase_005185_2);

#define VkglTestCase_005186_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005186_2 "arithmetic.input_before_literal.mul.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005186, VkglTestCase_005186_1, VkglTestCase_005186_2);

#define VkglTestCase_005187_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005187_2 "1.arithmetic.input_before_literal.mul.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005187, VkglTestCase_005187_1, VkglTestCase_005187_2);

#define VkglTestCase_005188_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005188_2 ".arithmetic.input_before_literal.mul.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005188, VkglTestCase_005188_1, VkglTestCase_005188_2);

#define VkglTestCase_005189_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005189_2 "1.arithmetic.input_before_literal.mul.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005189, VkglTestCase_005189_1, VkglTestCase_005189_2);

#define VkglTestCase_005190_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005190_2 ".arithmetic.input_before_literal.mul.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005190, VkglTestCase_005190_1, VkglTestCase_005190_2);

#define VkglTestCase_005191_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005191_2 "1.arithmetic.input_before_literal.mul.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005191, VkglTestCase_005191_1, VkglTestCase_005191_2);

#define VkglTestCase_005192_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005192_2 ".arithmetic.input_before_literal.mul.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005192, VkglTestCase_005192_1, VkglTestCase_005192_2);

#define VkglTestCase_005193_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005193_2 "1.arithmetic.input_before_literal.mul.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005193, VkglTestCase_005193_1, VkglTestCase_005193_2);

#define VkglTestCase_005194_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005194_2 ".arithmetic.input_before_literal.mul.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005194, VkglTestCase_005194_1, VkglTestCase_005194_2);

#define VkglTestCase_005195_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005195_2 ".arithmetic.input_before_literal.mul.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005195, VkglTestCase_005195_1, VkglTestCase_005195_2);

#define VkglTestCase_005196_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005196_2 "arithmetic.input_before_literal.mul.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005196, VkglTestCase_005196_1, VkglTestCase_005196_2);

#define VkglTestCase_005197_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005197_2 ".arithmetic.input_before_literal.mul.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005197, VkglTestCase_005197_1, VkglTestCase_005197_2);

#define VkglTestCase_005198_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005198_2 "arithmetic.input_before_literal.mul.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005198, VkglTestCase_005198_1, VkglTestCase_005198_2);

#define VkglTestCase_005199_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005199_2 ".arithmetic.input_before_literal.mul.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005199, VkglTestCase_005199_1, VkglTestCase_005199_2);

#define VkglTestCase_005200_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005200_2 "arithmetic.input_before_literal.mul.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005200, VkglTestCase_005200_1, VkglTestCase_005200_2);

#define VkglTestCase_005201_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005201_2 ".arithmetic.input_before_literal.mul.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005201, VkglTestCase_005201_1, VkglTestCase_005201_2);

#define VkglTestCase_005202_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005202_2 "arithmetic.input_before_literal.mul.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005202, VkglTestCase_005202_1, VkglTestCase_005202_2);

#define VkglTestCase_005203_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005203_2 ".arithmetic.input_before_literal.mul.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005203, VkglTestCase_005203_1, VkglTestCase_005203_2);

#define VkglTestCase_005204_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005204_2 "arithmetic.input_before_literal.mul.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005204, VkglTestCase_005204_1, VkglTestCase_005204_2);

#define VkglTestCase_005205_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005205_2 ".arithmetic.input_before_literal.mul.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005205, VkglTestCase_005205_1, VkglTestCase_005205_2);

#define VkglTestCase_005206_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005206_2 "arithmetic.input_before_literal.mul.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005206, VkglTestCase_005206_1, VkglTestCase_005206_2);

#define VkglTestCase_005207_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005207_2 ".arithmetic.input_before_literal.mul.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005207, VkglTestCase_005207_1, VkglTestCase_005207_2);

#define VkglTestCase_005208_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005208_2 "arithmetic.input_before_literal.mul.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005208, VkglTestCase_005208_1, VkglTestCase_005208_2);

#define VkglTestCase_005209_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005209_2 "arithmetic.input_before_literal.mul.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005209, VkglTestCase_005209_1, VkglTestCase_005209_2);

#define VkglTestCase_005210_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005210_2 "rithmetic.input_before_literal.mul.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005210, VkglTestCase_005210_1, VkglTestCase_005210_2);

#define VkglTestCase_005211_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005211_2 ".arithmetic.input_before_literal.mul.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005211, VkglTestCase_005211_1, VkglTestCase_005211_2);

#define VkglTestCase_005212_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005212_2 "arithmetic.input_before_literal.mul.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005212, VkglTestCase_005212_1, VkglTestCase_005212_2);

#define VkglTestCase_005213_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005213_2 ".arithmetic.input_before_literal.mul.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005213, VkglTestCase_005213_1, VkglTestCase_005213_2);

#define VkglTestCase_005214_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005214_2 "arithmetic.input_before_literal.mul.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005214, VkglTestCase_005214_1, VkglTestCase_005214_2);

#define VkglTestCase_005215_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005215_2 "arithmetic.input_before_literal.mul.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005215, VkglTestCase_005215_1, VkglTestCase_005215_2);

#define VkglTestCase_005216_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005216_2 "rithmetic.input_before_literal.mul.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005216, VkglTestCase_005216_1, VkglTestCase_005216_2);

#define VkglTestCase_005217_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005217_2 ".arithmetic.input_before_literal.mul.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005217, VkglTestCase_005217_1, VkglTestCase_005217_2);

#define VkglTestCase_005218_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005218_2 "arithmetic.input_before_literal.mul.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005218, VkglTestCase_005218_1, VkglTestCase_005218_2);

#define VkglTestCase_005219_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005219_2 ".arithmetic.input_before_literal.mul.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005219, VkglTestCase_005219_1, VkglTestCase_005219_2);

#define VkglTestCase_005220_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005220_2 "arithmetic.input_before_literal.mul.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005220, VkglTestCase_005220_1, VkglTestCase_005220_2);

#define VkglTestCase_005221_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005221_2 "arithmetic.input_before_literal.mul.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005221, VkglTestCase_005221_1, VkglTestCase_005221_2);

#define VkglTestCase_005222_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005222_2 "rithmetic.input_before_literal.mul.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005222, VkglTestCase_005222_1, VkglTestCase_005222_2);

#define VkglTestCase_005223_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005223_2 ".arithmetic.input_before_literal.mul.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005223, VkglTestCase_005223_1, VkglTestCase_005223_2);

#define VkglTestCase_005224_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005224_2 "arithmetic.input_before_literal.mul.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005224, VkglTestCase_005224_1, VkglTestCase_005224_2);

#define VkglTestCase_005225_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005225_2 ".arithmetic.input_before_literal.mul.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005225, VkglTestCase_005225_1, VkglTestCase_005225_2);

#define VkglTestCase_005226_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005226_2 "arithmetic.input_before_literal.mul.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005226, VkglTestCase_005226_1, VkglTestCase_005226_2);

#define VkglTestCase_006219_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006219_2 ".arithmetic.input_before_literal.mul.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006219, VkglTestCase_006219_1, VkglTestCase_006219_2);

#define VkglTestCase_006220_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006220_2 "arithmetic.input_before_literal.mul.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006220, VkglTestCase_006220_1, VkglTestCase_006220_2);

#define VkglTestCase_006221_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006221_2 "2.arithmetic.input_before_literal.mul.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006221, VkglTestCase_006221_1, VkglTestCase_006221_2);

#define VkglTestCase_006222_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006222_2 ".arithmetic.input_before_literal.mul.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006222, VkglTestCase_006222_1, VkglTestCase_006222_2);

#define VkglTestCase_006223_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006223_2 "2.arithmetic.input_before_literal.mul.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006223, VkglTestCase_006223_1, VkglTestCase_006223_2);

#define VkglTestCase_006224_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006224_2 ".arithmetic.input_before_literal.mul.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006224, VkglTestCase_006224_1, VkglTestCase_006224_2);

#define VkglTestCase_006225_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006225_2 "2.arithmetic.input_before_literal.mul.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006225, VkglTestCase_006225_1, VkglTestCase_006225_2);

#define VkglTestCase_006226_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006226_2 ".arithmetic.input_before_literal.mul.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006226, VkglTestCase_006226_1, VkglTestCase_006226_2);

#define VkglTestCase_006227_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006227_2 "2.arithmetic.input_before_literal.mul.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006227, VkglTestCase_006227_1, VkglTestCase_006227_2);

#define VkglTestCase_006228_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006228_2 ".arithmetic.input_before_literal.mul.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006228, VkglTestCase_006228_1, VkglTestCase_006228_2);

#define VkglTestCase_006229_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006229_2 ".arithmetic.input_before_literal.mul.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006229, VkglTestCase_006229_1, VkglTestCase_006229_2);

#define VkglTestCase_006230_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006230_2 "arithmetic.input_before_literal.mul.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006230, VkglTestCase_006230_1, VkglTestCase_006230_2);

#define VkglTestCase_006231_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006231_2 ".arithmetic.input_before_literal.mul.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006231, VkglTestCase_006231_1, VkglTestCase_006231_2);

#define VkglTestCase_006232_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006232_2 "arithmetic.input_before_literal.mul.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006232, VkglTestCase_006232_1, VkglTestCase_006232_2);

#define VkglTestCase_006233_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006233_2 ".arithmetic.input_before_literal.mul.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006233, VkglTestCase_006233_1, VkglTestCase_006233_2);

#define VkglTestCase_006234_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006234_2 "arithmetic.input_before_literal.mul.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006234, VkglTestCase_006234_1, VkglTestCase_006234_2);

#define VkglTestCase_006235_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006235_2 ".arithmetic.input_before_literal.mul.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006235, VkglTestCase_006235_1, VkglTestCase_006235_2);

#define VkglTestCase_006236_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006236_2 "arithmetic.input_before_literal.mul.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006236, VkglTestCase_006236_1, VkglTestCase_006236_2);

#define VkglTestCase_006237_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006237_2 ".arithmetic.input_before_literal.mul.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006237, VkglTestCase_006237_1, VkglTestCase_006237_2);

#define VkglTestCase_006238_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006238_2 "arithmetic.input_before_literal.mul.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006238, VkglTestCase_006238_1, VkglTestCase_006238_2);

#define VkglTestCase_006239_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006239_2 ".arithmetic.input_before_literal.mul.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006239, VkglTestCase_006239_1, VkglTestCase_006239_2);

#define VkglTestCase_006240_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006240_2 "arithmetic.input_before_literal.mul.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006240, VkglTestCase_006240_1, VkglTestCase_006240_2);

#define VkglTestCase_006241_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006241_2 ".arithmetic.input_before_literal.mul.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006241, VkglTestCase_006241_1, VkglTestCase_006241_2);

#define VkglTestCase_006242_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006242_2 "arithmetic.input_before_literal.mul.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006242, VkglTestCase_006242_1, VkglTestCase_006242_2);

#define VkglTestCase_006243_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006243_2 "arithmetic.input_before_literal.mul.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006243, VkglTestCase_006243_1, VkglTestCase_006243_2);

#define VkglTestCase_006244_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006244_2 "rithmetic.input_before_literal.mul.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006244, VkglTestCase_006244_1, VkglTestCase_006244_2);

#define VkglTestCase_006245_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006245_2 ".arithmetic.input_before_literal.mul.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006245, VkglTestCase_006245_1, VkglTestCase_006245_2);

#define VkglTestCase_006246_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006246_2 "arithmetic.input_before_literal.mul.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006246, VkglTestCase_006246_1, VkglTestCase_006246_2);

#define VkglTestCase_006247_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006247_2 ".arithmetic.input_before_literal.mul.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006247, VkglTestCase_006247_1, VkglTestCase_006247_2);

#define VkglTestCase_006248_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006248_2 "arithmetic.input_before_literal.mul.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006248, VkglTestCase_006248_1, VkglTestCase_006248_2);

#define VkglTestCase_006249_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006249_2 "arithmetic.input_before_literal.mul.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006249, VkglTestCase_006249_1, VkglTestCase_006249_2);

#define VkglTestCase_006250_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006250_2 "rithmetic.input_before_literal.mul.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006250, VkglTestCase_006250_1, VkglTestCase_006250_2);

#define VkglTestCase_006251_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006251_2 ".arithmetic.input_before_literal.mul.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006251, VkglTestCase_006251_1, VkglTestCase_006251_2);

#define VkglTestCase_006252_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006252_2 "arithmetic.input_before_literal.mul.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006252, VkglTestCase_006252_1, VkglTestCase_006252_2);

#define VkglTestCase_006253_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006253_2 ".arithmetic.input_before_literal.mul.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006253, VkglTestCase_006253_1, VkglTestCase_006253_2);

#define VkglTestCase_006254_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006254_2 "arithmetic.input_before_literal.mul.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006254, VkglTestCase_006254_1, VkglTestCase_006254_2);

#define VkglTestCase_006255_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006255_2 "arithmetic.input_before_literal.mul.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006255, VkglTestCase_006255_1, VkglTestCase_006255_2);

#define VkglTestCase_006256_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006256_2 "rithmetic.input_before_literal.mul.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006256, VkglTestCase_006256_1, VkglTestCase_006256_2);

#define VkglTestCase_006257_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006257_2 ".arithmetic.input_before_literal.mul.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006257, VkglTestCase_006257_1, VkglTestCase_006257_2);

#define VkglTestCase_006258_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006258_2 "arithmetic.input_before_literal.mul.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006258, VkglTestCase_006258_1, VkglTestCase_006258_2);

#define VkglTestCase_006259_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006259_2 ".arithmetic.input_before_literal.mul.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006259, VkglTestCase_006259_1, VkglTestCase_006259_2);

#define VkglTestCase_006260_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006260_2 "arithmetic.input_before_literal.mul.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006260, VkglTestCase_006260_1, VkglTestCase_006260_2);
