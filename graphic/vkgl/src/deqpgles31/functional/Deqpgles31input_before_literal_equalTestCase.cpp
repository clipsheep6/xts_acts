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

#define VkglTestCase_005423_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005423_2 "comparisons.input_before_literal.equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005423, VkglTestCase_005423_1, VkglTestCase_005423_2);

#define VkglTestCase_005424_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005424_2 "omparisons.input_before_literal.equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005424, VkglTestCase_005424_1, VkglTestCase_005424_2);

#define VkglTestCase_005425_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005425_2 "comparisons.input_before_literal.equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005425, VkglTestCase_005425_1, VkglTestCase_005425_2);

#define VkglTestCase_005426_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005426_2 "omparisons.input_before_literal.equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005426, VkglTestCase_005426_1, VkglTestCase_005426_2);

#define VkglTestCase_005427_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005427_2 "omparisons.input_before_literal.equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005427, VkglTestCase_005427_1, VkglTestCase_005427_2);

#define VkglTestCase_005428_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005428_2 "mparisons.input_before_literal.equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005428, VkglTestCase_005428_1, VkglTestCase_005428_2);

#define VkglTestCase_005429_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005429_2 "omparisons.input_before_literal.equal.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005429, VkglTestCase_005429_1, VkglTestCase_005429_2);

#define VkglTestCase_005430_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005430_2 "mparisons.input_before_literal.equal.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005430, VkglTestCase_005430_1, VkglTestCase_005430_2);

#define VkglTestCase_005431_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005431_2 "omparisons.input_before_literal.equal.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005431, VkglTestCase_005431_1, VkglTestCase_005431_2);

#define VkglTestCase_005432_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005432_2 "mparisons.input_before_literal.equal.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005432, VkglTestCase_005432_1, VkglTestCase_005432_2);

#define VkglTestCase_005433_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005433_2 "omparisons.input_before_literal.equal.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005433, VkglTestCase_005433_1, VkglTestCase_005433_2);

#define VkglTestCase_005434_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005434_2 "mparisons.input_before_literal.equal.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005434, VkglTestCase_005434_1, VkglTestCase_005434_2);

#define VkglTestCase_005435_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005435_2 "omparisons.input_before_literal.equal.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005435, VkglTestCase_005435_1, VkglTestCase_005435_2);

#define VkglTestCase_005436_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005436_2 "mparisons.input_before_literal.equal.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005436, VkglTestCase_005436_1, VkglTestCase_005436_2);

#define VkglTestCase_005437_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005437_2 "omparisons.input_before_literal.equal.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005437, VkglTestCase_005437_1, VkglTestCase_005437_2);

#define VkglTestCase_005438_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005438_2 "mparisons.input_before_literal.equal.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005438, VkglTestCase_005438_1, VkglTestCase_005438_2);

#define VkglTestCase_005439_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005439_2 "omparisons.input_before_literal.equal.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005439, VkglTestCase_005439_1, VkglTestCase_005439_2);

#define VkglTestCase_005440_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005440_2 "mparisons.input_before_literal.equal.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005440, VkglTestCase_005440_1, VkglTestCase_005440_2);

#define VkglTestCase_005441_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005441_2 "omparisons.input_before_literal.equal.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005441, VkglTestCase_005441_1, VkglTestCase_005441_2);

#define VkglTestCase_005442_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005442_2 "mparisons.input_before_literal.equal.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005442, VkglTestCase_005442_1, VkglTestCase_005442_2);

#define VkglTestCase_005443_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005443_2 "omparisons.input_before_literal.equal.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005443, VkglTestCase_005443_1, VkglTestCase_005443_2);

#define VkglTestCase_005444_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005444_2 "mparisons.input_before_literal.equal.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005444, VkglTestCase_005444_1, VkglTestCase_005444_2);

#define VkglTestCase_005445_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005445_2 "omparisons.input_before_literal.equal.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005445, VkglTestCase_005445_1, VkglTestCase_005445_2);

#define VkglTestCase_005446_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005446_2 "mparisons.input_before_literal.equal.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005446, VkglTestCase_005446_1, VkglTestCase_005446_2);

#define VkglTestCase_006457_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006457_2 "comparisons.input_before_literal.equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006457, VkglTestCase_006457_1, VkglTestCase_006457_2);

#define VkglTestCase_006458_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006458_2 "omparisons.input_before_literal.equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006458, VkglTestCase_006458_1, VkglTestCase_006458_2);

#define VkglTestCase_006459_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006459_2 "comparisons.input_before_literal.equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006459, VkglTestCase_006459_1, VkglTestCase_006459_2);

#define VkglTestCase_006460_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006460_2 "omparisons.input_before_literal.equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006460, VkglTestCase_006460_1, VkglTestCase_006460_2);

#define VkglTestCase_006461_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006461_2 "omparisons.input_before_literal.equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006461, VkglTestCase_006461_1, VkglTestCase_006461_2);

#define VkglTestCase_006462_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006462_2 "mparisons.input_before_literal.equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006462, VkglTestCase_006462_1, VkglTestCase_006462_2);

#define VkglTestCase_006463_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006463_2 "omparisons.input_before_literal.equal.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006463, VkglTestCase_006463_1, VkglTestCase_006463_2);

#define VkglTestCase_006464_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006464_2 "mparisons.input_before_literal.equal.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006464, VkglTestCase_006464_1, VkglTestCase_006464_2);

#define VkglTestCase_006465_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006465_2 "omparisons.input_before_literal.equal.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006465, VkglTestCase_006465_1, VkglTestCase_006465_2);

#define VkglTestCase_006466_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006466_2 "mparisons.input_before_literal.equal.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006466, VkglTestCase_006466_1, VkglTestCase_006466_2);

#define VkglTestCase_006467_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006467_2 "omparisons.input_before_literal.equal.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006467, VkglTestCase_006467_1, VkglTestCase_006467_2);

#define VkglTestCase_006468_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006468_2 "mparisons.input_before_literal.equal.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006468, VkglTestCase_006468_1, VkglTestCase_006468_2);

#define VkglTestCase_006469_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006469_2 "omparisons.input_before_literal.equal.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006469, VkglTestCase_006469_1, VkglTestCase_006469_2);

#define VkglTestCase_006470_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006470_2 "mparisons.input_before_literal.equal.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006470, VkglTestCase_006470_1, VkglTestCase_006470_2);

#define VkglTestCase_006471_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006471_2 "omparisons.input_before_literal.equal.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006471, VkglTestCase_006471_1, VkglTestCase_006471_2);

#define VkglTestCase_006472_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006472_2 "mparisons.input_before_literal.equal.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006472, VkglTestCase_006472_1, VkglTestCase_006472_2);

#define VkglTestCase_006473_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006473_2 "omparisons.input_before_literal.equal.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006473, VkglTestCase_006473_1, VkglTestCase_006473_2);

#define VkglTestCase_006474_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006474_2 "mparisons.input_before_literal.equal.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006474, VkglTestCase_006474_1, VkglTestCase_006474_2);

#define VkglTestCase_006475_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006475_2 "omparisons.input_before_literal.equal.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006475, VkglTestCase_006475_1, VkglTestCase_006475_2);

#define VkglTestCase_006476_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006476_2 "mparisons.input_before_literal.equal.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006476, VkglTestCase_006476_1, VkglTestCase_006476_2);

#define VkglTestCase_006477_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006477_2 "omparisons.input_before_literal.equal.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006477, VkglTestCase_006477_1, VkglTestCase_006477_2);

#define VkglTestCase_006478_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006478_2 "mparisons.input_before_literal.equal.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006478, VkglTestCase_006478_1, VkglTestCase_006478_2);

#define VkglTestCase_006479_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006479_2 "omparisons.input_before_literal.equal.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006479, VkglTestCase_006479_1, VkglTestCase_006479_2);

#define VkglTestCase_006480_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006480_2 "mparisons.input_before_literal.equal.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006480, VkglTestCase_006480_1, VkglTestCase_006480_2);
