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

#define VkglTestCase_005495_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005495_2 "comparisons.literal_before_input.equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005495, VkglTestCase_005495_1, VkglTestCase_005495_2);

#define VkglTestCase_005496_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005496_2 "omparisons.literal_before_input.equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005496, VkglTestCase_005496_1, VkglTestCase_005496_2);

#define VkglTestCase_005497_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005497_2 "comparisons.literal_before_input.equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005497, VkglTestCase_005497_1, VkglTestCase_005497_2);

#define VkglTestCase_005498_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005498_2 "omparisons.literal_before_input.equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005498, VkglTestCase_005498_1, VkglTestCase_005498_2);

#define VkglTestCase_005499_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005499_2 "omparisons.literal_before_input.equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005499, VkglTestCase_005499_1, VkglTestCase_005499_2);

#define VkglTestCase_005500_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005500_2 "mparisons.literal_before_input.equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005500, VkglTestCase_005500_1, VkglTestCase_005500_2);

#define VkglTestCase_005501_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005501_2 "omparisons.literal_before_input.equal.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005501, VkglTestCase_005501_1, VkglTestCase_005501_2);

#define VkglTestCase_005502_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005502_2 "mparisons.literal_before_input.equal.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005502, VkglTestCase_005502_1, VkglTestCase_005502_2);

#define VkglTestCase_005503_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005503_2 "omparisons.literal_before_input.equal.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005503, VkglTestCase_005503_1, VkglTestCase_005503_2);

#define VkglTestCase_005504_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005504_2 "mparisons.literal_before_input.equal.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005504, VkglTestCase_005504_1, VkglTestCase_005504_2);

#define VkglTestCase_005505_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005505_2 "omparisons.literal_before_input.equal.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005505, VkglTestCase_005505_1, VkglTestCase_005505_2);

#define VkglTestCase_005506_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005506_2 "mparisons.literal_before_input.equal.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005506, VkglTestCase_005506_1, VkglTestCase_005506_2);

#define VkglTestCase_005507_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005507_2 "omparisons.literal_before_input.equal.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005507, VkglTestCase_005507_1, VkglTestCase_005507_2);

#define VkglTestCase_005508_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005508_2 "mparisons.literal_before_input.equal.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005508, VkglTestCase_005508_1, VkglTestCase_005508_2);

#define VkglTestCase_005509_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005509_2 "omparisons.literal_before_input.equal.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005509, VkglTestCase_005509_1, VkglTestCase_005509_2);

#define VkglTestCase_005510_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005510_2 "mparisons.literal_before_input.equal.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005510, VkglTestCase_005510_1, VkglTestCase_005510_2);

#define VkglTestCase_005511_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005511_2 "omparisons.literal_before_input.equal.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005511, VkglTestCase_005511_1, VkglTestCase_005511_2);

#define VkglTestCase_005512_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005512_2 "mparisons.literal_before_input.equal.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005512, VkglTestCase_005512_1, VkglTestCase_005512_2);

#define VkglTestCase_005513_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005513_2 "omparisons.literal_before_input.equal.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005513, VkglTestCase_005513_1, VkglTestCase_005513_2);

#define VkglTestCase_005514_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005514_2 "mparisons.literal_before_input.equal.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005514, VkglTestCase_005514_1, VkglTestCase_005514_2);

#define VkglTestCase_005515_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005515_2 "omparisons.literal_before_input.equal.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005515, VkglTestCase_005515_1, VkglTestCase_005515_2);

#define VkglTestCase_005516_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005516_2 "mparisons.literal_before_input.equal.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005516, VkglTestCase_005516_1, VkglTestCase_005516_2);

#define VkglTestCase_005517_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
#define VkglTestCase_005517_2 "omparisons.literal_before_input.equal.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005517, VkglTestCase_005517_1, VkglTestCase_005517_2);

#define VkglTestCase_005518_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005518_2 "mparisons.literal_before_input.equal.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005518, VkglTestCase_005518_1, VkglTestCase_005518_2);

#define VkglTestCase_006529_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006529_2 "comparisons.literal_before_input.equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006529, VkglTestCase_006529_1, VkglTestCase_006529_2);

#define VkglTestCase_006530_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006530_2 "omparisons.literal_before_input.equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006530, VkglTestCase_006530_1, VkglTestCase_006530_2);

#define VkglTestCase_006531_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006531_2 "comparisons.literal_before_input.equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006531, VkglTestCase_006531_1, VkglTestCase_006531_2);

#define VkglTestCase_006532_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006532_2 "omparisons.literal_before_input.equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006532, VkglTestCase_006532_1, VkglTestCase_006532_2);

#define VkglTestCase_006533_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006533_2 "omparisons.literal_before_input.equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006533, VkglTestCase_006533_1, VkglTestCase_006533_2);

#define VkglTestCase_006534_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006534_2 "mparisons.literal_before_input.equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006534, VkglTestCase_006534_1, VkglTestCase_006534_2);

#define VkglTestCase_006535_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006535_2 "omparisons.literal_before_input.equal.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006535, VkglTestCase_006535_1, VkglTestCase_006535_2);

#define VkglTestCase_006536_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006536_2 "mparisons.literal_before_input.equal.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006536, VkglTestCase_006536_1, VkglTestCase_006536_2);

#define VkglTestCase_006537_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006537_2 "omparisons.literal_before_input.equal.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006537, VkglTestCase_006537_1, VkglTestCase_006537_2);

#define VkglTestCase_006538_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006538_2 "mparisons.literal_before_input.equal.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006538, VkglTestCase_006538_1, VkglTestCase_006538_2);

#define VkglTestCase_006539_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006539_2 "omparisons.literal_before_input.equal.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006539, VkglTestCase_006539_1, VkglTestCase_006539_2);

#define VkglTestCase_006540_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006540_2 "mparisons.literal_before_input.equal.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006540, VkglTestCase_006540_1, VkglTestCase_006540_2);

#define VkglTestCase_006541_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006541_2 "omparisons.literal_before_input.equal.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006541, VkglTestCase_006541_1, VkglTestCase_006541_2);

#define VkglTestCase_006542_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006542_2 "mparisons.literal_before_input.equal.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006542, VkglTestCase_006542_1, VkglTestCase_006542_2);

#define VkglTestCase_006543_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006543_2 "omparisons.literal_before_input.equal.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006543, VkglTestCase_006543_1, VkglTestCase_006543_2);

#define VkglTestCase_006544_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006544_2 "mparisons.literal_before_input.equal.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006544, VkglTestCase_006544_1, VkglTestCase_006544_2);

#define VkglTestCase_006545_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006545_2 "omparisons.literal_before_input.equal.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006545, VkglTestCase_006545_1, VkglTestCase_006545_2);

#define VkglTestCase_006546_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006546_2 "mparisons.literal_before_input.equal.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006546, VkglTestCase_006546_1, VkglTestCase_006546_2);

#define VkglTestCase_006547_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006547_2 "omparisons.literal_before_input.equal.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006547, VkglTestCase_006547_1, VkglTestCase_006547_2);

#define VkglTestCase_006548_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006548_2 "mparisons.literal_before_input.equal.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006548, VkglTestCase_006548_1, VkglTestCase_006548_2);

#define VkglTestCase_006549_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006549_2 "omparisons.literal_before_input.equal.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006549, VkglTestCase_006549_1, VkglTestCase_006549_2);

#define VkglTestCase_006550_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006550_2 "mparisons.literal_before_input.equal.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006550, VkglTestCase_006550_1, VkglTestCase_006550_2);

#define VkglTestCase_006551_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
#define VkglTestCase_006551_2 "omparisons.literal_before_input.equal.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006551, VkglTestCase_006551_1, VkglTestCase_006551_2);

#define VkglTestCase_006552_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006552_2 "mparisons.literal_before_input.equal.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006552, VkglTestCase_006552_1, VkglTestCase_006552_2);
