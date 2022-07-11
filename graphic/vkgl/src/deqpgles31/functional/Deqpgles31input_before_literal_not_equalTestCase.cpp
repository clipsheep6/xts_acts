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

#define VkglTestCase_005447_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005447_2 "mparisons.input_before_literal.not_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005447, VkglTestCase_005447_1, VkglTestCase_005447_2);

#define VkglTestCase_005448_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005448_2 "parisons.input_before_literal.not_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005448, VkglTestCase_005448_1, VkglTestCase_005448_2);

#define VkglTestCase_005449_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005449_2 "mparisons.input_before_literal.not_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005449, VkglTestCase_005449_1, VkglTestCase_005449_2);

#define VkglTestCase_005450_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005450_2 "parisons.input_before_literal.not_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005450, VkglTestCase_005450_1, VkglTestCase_005450_2);

#define VkglTestCase_005451_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005451_2 "parisons.input_before_literal.not_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005451, VkglTestCase_005451_1, VkglTestCase_005451_2);

#define VkglTestCase_005452_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005452_2 "arisons.input_before_literal.not_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005452, VkglTestCase_005452_1, VkglTestCase_005452_2);

#define VkglTestCase_005453_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005453_2 "parisons.input_before_literal.not_equal.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005453, VkglTestCase_005453_1, VkglTestCase_005453_2);

#define VkglTestCase_005454_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005454_2 "arisons.input_before_literal.not_equal.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005454, VkglTestCase_005454_1, VkglTestCase_005454_2);

#define VkglTestCase_005455_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005455_2 "parisons.input_before_literal.not_equal.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005455, VkglTestCase_005455_1, VkglTestCase_005455_2);

#define VkglTestCase_005456_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005456_2 "arisons.input_before_literal.not_equal.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005456, VkglTestCase_005456_1, VkglTestCase_005456_2);

#define VkglTestCase_005457_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005457_2 "parisons.input_before_literal.not_equal.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005457, VkglTestCase_005457_1, VkglTestCase_005457_2);

#define VkglTestCase_005458_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005458_2 "arisons.input_before_literal.not_equal.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005458, VkglTestCase_005458_1, VkglTestCase_005458_2);

#define VkglTestCase_005459_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005459_2 "parisons.input_before_literal.not_equal.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005459, VkglTestCase_005459_1, VkglTestCase_005459_2);

#define VkglTestCase_005460_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005460_2 "arisons.input_before_literal.not_equal.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005460, VkglTestCase_005460_1, VkglTestCase_005460_2);

#define VkglTestCase_005461_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005461_2 "parisons.input_before_literal.not_equal.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005461, VkglTestCase_005461_1, VkglTestCase_005461_2);

#define VkglTestCase_005462_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005462_2 "arisons.input_before_literal.not_equal.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005462, VkglTestCase_005462_1, VkglTestCase_005462_2);

#define VkglTestCase_005463_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005463_2 "parisons.input_before_literal.not_equal.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005463, VkglTestCase_005463_1, VkglTestCase_005463_2);

#define VkglTestCase_005464_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005464_2 "arisons.input_before_literal.not_equal.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005464, VkglTestCase_005464_1, VkglTestCase_005464_2);

#define VkglTestCase_005465_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005465_2 "parisons.input_before_literal.not_equal.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005465, VkglTestCase_005465_1, VkglTestCase_005465_2);

#define VkglTestCase_005466_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005466_2 "arisons.input_before_literal.not_equal.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005466, VkglTestCase_005466_1, VkglTestCase_005466_2);

#define VkglTestCase_005467_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005467_2 "parisons.input_before_literal.not_equal.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005467, VkglTestCase_005467_1, VkglTestCase_005467_2);

#define VkglTestCase_005468_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005468_2 "arisons.input_before_literal.not_equal.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005468, VkglTestCase_005468_1, VkglTestCase_005468_2);

#define VkglTestCase_005469_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005469_2 "parisons.input_before_literal.not_equal.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005469, VkglTestCase_005469_1, VkglTestCase_005469_2);

#define VkglTestCase_005470_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005470_2 "arisons.input_before_literal.not_equal.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005470, VkglTestCase_005470_1, VkglTestCase_005470_2);

#define VkglTestCase_006481_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006481_2 "mparisons.input_before_literal.not_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006481, VkglTestCase_006481_1, VkglTestCase_006481_2);

#define VkglTestCase_006482_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006482_2 "parisons.input_before_literal.not_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006482, VkglTestCase_006482_1, VkglTestCase_006482_2);

#define VkglTestCase_006483_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006483_2 "mparisons.input_before_literal.not_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006483, VkglTestCase_006483_1, VkglTestCase_006483_2);

#define VkglTestCase_006484_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006484_2 "parisons.input_before_literal.not_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006484, VkglTestCase_006484_1, VkglTestCase_006484_2);

#define VkglTestCase_006485_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006485_2 "parisons.input_before_literal.not_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006485, VkglTestCase_006485_1, VkglTestCase_006485_2);

#define VkglTestCase_006486_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006486_2 "arisons.input_before_literal.not_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006486, VkglTestCase_006486_1, VkglTestCase_006486_2);

#define VkglTestCase_006487_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006487_2 "parisons.input_before_literal.not_equal.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006487, VkglTestCase_006487_1, VkglTestCase_006487_2);

#define VkglTestCase_006488_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006488_2 "arisons.input_before_literal.not_equal.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006488, VkglTestCase_006488_1, VkglTestCase_006488_2);

#define VkglTestCase_006489_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006489_2 "parisons.input_before_literal.not_equal.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006489, VkglTestCase_006489_1, VkglTestCase_006489_2);

#define VkglTestCase_006490_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006490_2 "arisons.input_before_literal.not_equal.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006490, VkglTestCase_006490_1, VkglTestCase_006490_2);

#define VkglTestCase_006491_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006491_2 "parisons.input_before_literal.not_equal.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006491, VkglTestCase_006491_1, VkglTestCase_006491_2);

#define VkglTestCase_006492_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006492_2 "arisons.input_before_literal.not_equal.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006492, VkglTestCase_006492_1, VkglTestCase_006492_2);

#define VkglTestCase_006493_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006493_2 "parisons.input_before_literal.not_equal.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006493, VkglTestCase_006493_1, VkglTestCase_006493_2);

#define VkglTestCase_006494_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006494_2 "arisons.input_before_literal.not_equal.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006494, VkglTestCase_006494_1, VkglTestCase_006494_2);

#define VkglTestCase_006495_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006495_2 "parisons.input_before_literal.not_equal.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006495, VkglTestCase_006495_1, VkglTestCase_006495_2);

#define VkglTestCase_006496_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006496_2 "arisons.input_before_literal.not_equal.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006496, VkglTestCase_006496_1, VkglTestCase_006496_2);

#define VkglTestCase_006497_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006497_2 "parisons.input_before_literal.not_equal.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006497, VkglTestCase_006497_1, VkglTestCase_006497_2);

#define VkglTestCase_006498_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006498_2 "arisons.input_before_literal.not_equal.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006498, VkglTestCase_006498_1, VkglTestCase_006498_2);

#define VkglTestCase_006499_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006499_2 "parisons.input_before_literal.not_equal.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006499, VkglTestCase_006499_1, VkglTestCase_006499_2);

#define VkglTestCase_006500_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006500_2 "arisons.input_before_literal.not_equal.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006500, VkglTestCase_006500_1, VkglTestCase_006500_2);

#define VkglTestCase_006501_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006501_2 "parisons.input_before_literal.not_equal.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006501, VkglTestCase_006501_1, VkglTestCase_006501_2);

#define VkglTestCase_006502_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006502_2 "arisons.input_before_literal.not_equal.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006502, VkglTestCase_006502_1, VkglTestCase_006502_2);

#define VkglTestCase_006503_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006503_2 "parisons.input_before_literal.not_equal.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006503, VkglTestCase_006503_1, VkglTestCase_006503_2);

#define VkglTestCase_006504_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006504_2 "arisons.input_before_literal.not_equal.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006504, VkglTestCase_006504_1, VkglTestCase_006504_2);
