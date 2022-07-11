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

#define VkglTestCase_005519_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005519_2 "mparisons.literal_before_input.not_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005519, VkglTestCase_005519_1, VkglTestCase_005519_2);

#define VkglTestCase_005520_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005520_2 "parisons.literal_before_input.not_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005520, VkglTestCase_005520_1, VkglTestCase_005520_2);

#define VkglTestCase_005521_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
#define VkglTestCase_005521_2 "mparisons.literal_before_input.not_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005521, VkglTestCase_005521_1, VkglTestCase_005521_2);

#define VkglTestCase_005522_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005522_2 "parisons.literal_before_input.not_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005522, VkglTestCase_005522_1, VkglTestCase_005522_2);

#define VkglTestCase_005523_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005523_2 "parisons.literal_before_input.not_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005523, VkglTestCase_005523_1, VkglTestCase_005523_2);

#define VkglTestCase_005524_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005524_2 "arisons.literal_before_input.not_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005524, VkglTestCase_005524_1, VkglTestCase_005524_2);

#define VkglTestCase_005525_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005525_2 "parisons.literal_before_input.not_equal.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005525, VkglTestCase_005525_1, VkglTestCase_005525_2);

#define VkglTestCase_005526_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005526_2 "arisons.literal_before_input.not_equal.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005526, VkglTestCase_005526_1, VkglTestCase_005526_2);

#define VkglTestCase_005527_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005527_2 "parisons.literal_before_input.not_equal.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005527, VkglTestCase_005527_1, VkglTestCase_005527_2);

#define VkglTestCase_005528_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005528_2 "arisons.literal_before_input.not_equal.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005528, VkglTestCase_005528_1, VkglTestCase_005528_2);

#define VkglTestCase_005529_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005529_2 "parisons.literal_before_input.not_equal.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005529, VkglTestCase_005529_1, VkglTestCase_005529_2);

#define VkglTestCase_005530_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005530_2 "arisons.literal_before_input.not_equal.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005530, VkglTestCase_005530_1, VkglTestCase_005530_2);

#define VkglTestCase_005531_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005531_2 "parisons.literal_before_input.not_equal.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005531, VkglTestCase_005531_1, VkglTestCase_005531_2);

#define VkglTestCase_005532_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005532_2 "arisons.literal_before_input.not_equal.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005532, VkglTestCase_005532_1, VkglTestCase_005532_2);

#define VkglTestCase_005533_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005533_2 "parisons.literal_before_input.not_equal.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005533, VkglTestCase_005533_1, VkglTestCase_005533_2);

#define VkglTestCase_005534_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005534_2 "arisons.literal_before_input.not_equal.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005534, VkglTestCase_005534_1, VkglTestCase_005534_2);

#define VkglTestCase_005535_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005535_2 "parisons.literal_before_input.not_equal.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005535, VkglTestCase_005535_1, VkglTestCase_005535_2);

#define VkglTestCase_005536_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005536_2 "arisons.literal_before_input.not_equal.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005536, VkglTestCase_005536_1, VkglTestCase_005536_2);

#define VkglTestCase_005537_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005537_2 "parisons.literal_before_input.not_equal.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005537, VkglTestCase_005537_1, VkglTestCase_005537_2);

#define VkglTestCase_005538_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005538_2 "arisons.literal_before_input.not_equal.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005538, VkglTestCase_005538_1, VkglTestCase_005538_2);

#define VkglTestCase_005539_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005539_2 "parisons.literal_before_input.not_equal.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005539, VkglTestCase_005539_1, VkglTestCase_005539_2);

#define VkglTestCase_005540_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005540_2 "arisons.literal_before_input.not_equal.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005540, VkglTestCase_005540_1, VkglTestCase_005540_2);

#define VkglTestCase_005541_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
#define VkglTestCase_005541_2 "parisons.literal_before_input.not_equal.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005541, VkglTestCase_005541_1, VkglTestCase_005541_2);

#define VkglTestCase_005542_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.comp"
#define VkglTestCase_005542_2 "arisons.literal_before_input.not_equal.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005542, VkglTestCase_005542_1, VkglTestCase_005542_2);

#define VkglTestCase_006553_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006553_2 "mparisons.literal_before_input.not_equal.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006553, VkglTestCase_006553_1, VkglTestCase_006553_2);

#define VkglTestCase_006554_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006554_2 "parisons.literal_before_input.not_equal.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006554, VkglTestCase_006554_1, VkglTestCase_006554_2);

#define VkglTestCase_006555_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
#define VkglTestCase_006555_2 "mparisons.literal_before_input.not_equal.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006555, VkglTestCase_006555_1, VkglTestCase_006555_2);

#define VkglTestCase_006556_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006556_2 "parisons.literal_before_input.not_equal.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006556, VkglTestCase_006556_1, VkglTestCase_006556_2);

#define VkglTestCase_006557_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006557_2 "parisons.literal_before_input.not_equal.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006557, VkglTestCase_006557_1, VkglTestCase_006557_2);

#define VkglTestCase_006558_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006558_2 "arisons.literal_before_input.not_equal.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006558, VkglTestCase_006558_1, VkglTestCase_006558_2);

#define VkglTestCase_006559_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006559_2 "parisons.literal_before_input.not_equal.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006559, VkglTestCase_006559_1, VkglTestCase_006559_2);

#define VkglTestCase_006560_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006560_2 "arisons.literal_before_input.not_equal.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006560, VkglTestCase_006560_1, VkglTestCase_006560_2);

#define VkglTestCase_006561_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006561_2 "parisons.literal_before_input.not_equal.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006561, VkglTestCase_006561_1, VkglTestCase_006561_2);

#define VkglTestCase_006562_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006562_2 "arisons.literal_before_input.not_equal.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006562, VkglTestCase_006562_1, VkglTestCase_006562_2);

#define VkglTestCase_006563_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006563_2 "parisons.literal_before_input.not_equal.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006563, VkglTestCase_006563_1, VkglTestCase_006563_2);

#define VkglTestCase_006564_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006564_2 "arisons.literal_before_input.not_equal.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006564, VkglTestCase_006564_1, VkglTestCase_006564_2);

#define VkglTestCase_006565_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006565_2 "parisons.literal_before_input.not_equal.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006565, VkglTestCase_006565_1, VkglTestCase_006565_2);

#define VkglTestCase_006566_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006566_2 "arisons.literal_before_input.not_equal.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006566, VkglTestCase_006566_1, VkglTestCase_006566_2);

#define VkglTestCase_006567_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006567_2 "parisons.literal_before_input.not_equal.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006567, VkglTestCase_006567_1, VkglTestCase_006567_2);

#define VkglTestCase_006568_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006568_2 "arisons.literal_before_input.not_equal.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006568, VkglTestCase_006568_1, VkglTestCase_006568_2);

#define VkglTestCase_006569_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006569_2 "parisons.literal_before_input.not_equal.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006569, VkglTestCase_006569_1, VkglTestCase_006569_2);

#define VkglTestCase_006570_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006570_2 "arisons.literal_before_input.not_equal.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006570, VkglTestCase_006570_1, VkglTestCase_006570_2);

#define VkglTestCase_006571_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006571_2 "parisons.literal_before_input.not_equal.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006571, VkglTestCase_006571_1, VkglTestCase_006571_2);

#define VkglTestCase_006572_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006572_2 "arisons.literal_before_input.not_equal.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006572, VkglTestCase_006572_1, VkglTestCase_006572_2);

#define VkglTestCase_006573_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006573_2 "parisons.literal_before_input.not_equal.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006573, VkglTestCase_006573_1, VkglTestCase_006573_2);

#define VkglTestCase_006574_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006574_2 "arisons.literal_before_input.not_equal.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006574, VkglTestCase_006574_1, VkglTestCase_006574_2);

#define VkglTestCase_006575_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
#define VkglTestCase_006575_2 "parisons.literal_before_input.not_equal.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006575, VkglTestCase_006575_1, VkglTestCase_006575_2);

#define VkglTestCase_006576_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.comp"
#define VkglTestCase_006576_2 "arisons.literal_before_input.not_equal.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006576, VkglTestCase_006576_1, VkglTestCase_006576_2);
