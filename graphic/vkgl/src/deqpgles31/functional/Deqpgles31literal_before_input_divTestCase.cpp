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

#define VkglTestCase_005381_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005381_2 ".arithmetic.literal_before_input.div.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005381, VkglTestCase_005381_1, VkglTestCase_005381_2);

#define VkglTestCase_005382_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005382_2 "arithmetic.literal_before_input.div.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005382, VkglTestCase_005382_1, VkglTestCase_005382_2);

#define VkglTestCase_005383_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005383_2 "1.arithmetic.literal_before_input.div.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005383, VkglTestCase_005383_1, VkglTestCase_005383_2);

#define VkglTestCase_005384_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005384_2 ".arithmetic.literal_before_input.div.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005384, VkglTestCase_005384_1, VkglTestCase_005384_2);

#define VkglTestCase_005385_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005385_2 "1.arithmetic.literal_before_input.div.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005385, VkglTestCase_005385_1, VkglTestCase_005385_2);

#define VkglTestCase_005386_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005386_2 ".arithmetic.literal_before_input.div.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005386, VkglTestCase_005386_1, VkglTestCase_005386_2);

#define VkglTestCase_005387_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005387_2 "1.arithmetic.literal_before_input.div.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005387, VkglTestCase_005387_1, VkglTestCase_005387_2);

#define VkglTestCase_005388_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005388_2 ".arithmetic.literal_before_input.div.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005388, VkglTestCase_005388_1, VkglTestCase_005388_2);

#define VkglTestCase_005389_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005389_2 "1.arithmetic.literal_before_input.div.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005389, VkglTestCase_005389_1, VkglTestCase_005389_2);

#define VkglTestCase_005390_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005390_2 ".arithmetic.literal_before_input.div.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005390, VkglTestCase_005390_1, VkglTestCase_005390_2);

#define VkglTestCase_005391_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005391_2 ".arithmetic.literal_before_input.div.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005391, VkglTestCase_005391_1, VkglTestCase_005391_2);

#define VkglTestCase_005392_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005392_2 "arithmetic.literal_before_input.div.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005392, VkglTestCase_005392_1, VkglTestCase_005392_2);

#define VkglTestCase_005393_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005393_2 ".arithmetic.literal_before_input.div.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005393, VkglTestCase_005393_1, VkglTestCase_005393_2);

#define VkglTestCase_005394_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005394_2 "arithmetic.literal_before_input.div.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005394, VkglTestCase_005394_1, VkglTestCase_005394_2);

#define VkglTestCase_005395_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005395_2 ".arithmetic.literal_before_input.div.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005395, VkglTestCase_005395_1, VkglTestCase_005395_2);

#define VkglTestCase_005396_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005396_2 "arithmetic.literal_before_input.div.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005396, VkglTestCase_005396_1, VkglTestCase_005396_2);

#define VkglTestCase_005397_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005397_2 ".arithmetic.literal_before_input.div.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005397, VkglTestCase_005397_1, VkglTestCase_005397_2);

#define VkglTestCase_005398_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005398_2 "arithmetic.literal_before_input.div.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005398, VkglTestCase_005398_1, VkglTestCase_005398_2);

#define VkglTestCase_005399_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005399_2 ".arithmetic.literal_before_input.div.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005399, VkglTestCase_005399_1, VkglTestCase_005399_2);

#define VkglTestCase_005400_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005400_2 "arithmetic.literal_before_input.div.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005400, VkglTestCase_005400_1, VkglTestCase_005400_2);

#define VkglTestCase_005401_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005401_2 ".arithmetic.literal_before_input.div.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005401, VkglTestCase_005401_1, VkglTestCase_005401_2);

#define VkglTestCase_005402_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005402_2 "arithmetic.literal_before_input.div.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005402, VkglTestCase_005402_1, VkglTestCase_005402_2);

#define VkglTestCase_005403_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005403_2 ".arithmetic.literal_before_input.div.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005403, VkglTestCase_005403_1, VkglTestCase_005403_2);

#define VkglTestCase_005404_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005404_2 "arithmetic.literal_before_input.div.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005404, VkglTestCase_005404_1, VkglTestCase_005404_2);

#define VkglTestCase_005405_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005405_2 "arithmetic.literal_before_input.div.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005405, VkglTestCase_005405_1, VkglTestCase_005405_2);

#define VkglTestCase_005406_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005406_2 "rithmetic.literal_before_input.div.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005406, VkglTestCase_005406_1, VkglTestCase_005406_2);

#define VkglTestCase_005407_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005407_2 ".arithmetic.literal_before_input.div.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005407, VkglTestCase_005407_1, VkglTestCase_005407_2);

#define VkglTestCase_005408_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005408_2 "arithmetic.literal_before_input.div.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005408, VkglTestCase_005408_1, VkglTestCase_005408_2);

#define VkglTestCase_005409_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005409_2 ".arithmetic.literal_before_input.div.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005409, VkglTestCase_005409_1, VkglTestCase_005409_2);

#define VkglTestCase_005410_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005410_2 "arithmetic.literal_before_input.div.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005410, VkglTestCase_005410_1, VkglTestCase_005410_2);

#define VkglTestCase_005411_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005411_2 "arithmetic.literal_before_input.div.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005411, VkglTestCase_005411_1, VkglTestCase_005411_2);

#define VkglTestCase_005412_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005412_2 "rithmetic.literal_before_input.div.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005412, VkglTestCase_005412_1, VkglTestCase_005412_2);

#define VkglTestCase_005413_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005413_2 ".arithmetic.literal_before_input.div.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005413, VkglTestCase_005413_1, VkglTestCase_005413_2);

#define VkglTestCase_005414_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005414_2 "arithmetic.literal_before_input.div.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005414, VkglTestCase_005414_1, VkglTestCase_005414_2);

#define VkglTestCase_005415_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005415_2 ".arithmetic.literal_before_input.div.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005415, VkglTestCase_005415_1, VkglTestCase_005415_2);

#define VkglTestCase_005416_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005416_2 "arithmetic.literal_before_input.div.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005416, VkglTestCase_005416_1, VkglTestCase_005416_2);

#define VkglTestCase_005417_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005417_2 "arithmetic.literal_before_input.div.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005417, VkglTestCase_005417_1, VkglTestCase_005417_2);

#define VkglTestCase_005418_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005418_2 "rithmetic.literal_before_input.div.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005418, VkglTestCase_005418_1, VkglTestCase_005418_2);

#define VkglTestCase_005419_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005419_2 ".arithmetic.literal_before_input.div.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005419, VkglTestCase_005419_1, VkglTestCase_005419_2);

#define VkglTestCase_005420_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005420_2 "arithmetic.literal_before_input.div.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005420, VkglTestCase_005420_1, VkglTestCase_005420_2);

#define VkglTestCase_005421_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005421_2 ".arithmetic.literal_before_input.div.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005421, VkglTestCase_005421_1, VkglTestCase_005421_2);

#define VkglTestCase_005422_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005422_2 "arithmetic.literal_before_input.div.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005422, VkglTestCase_005422_1, VkglTestCase_005422_2);

#define VkglTestCase_006415_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006415_2 ".arithmetic.literal_before_input.div.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006415, VkglTestCase_006415_1, VkglTestCase_006415_2);

#define VkglTestCase_006416_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006416_2 "arithmetic.literal_before_input.div.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006416, VkglTestCase_006416_1, VkglTestCase_006416_2);

#define VkglTestCase_006417_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006417_2 "2.arithmetic.literal_before_input.div.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006417, VkglTestCase_006417_1, VkglTestCase_006417_2);

#define VkglTestCase_006418_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006418_2 ".arithmetic.literal_before_input.div.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006418, VkglTestCase_006418_1, VkglTestCase_006418_2);

#define VkglTestCase_006419_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006419_2 "2.arithmetic.literal_before_input.div.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006419, VkglTestCase_006419_1, VkglTestCase_006419_2);

#define VkglTestCase_006420_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006420_2 ".arithmetic.literal_before_input.div.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006420, VkglTestCase_006420_1, VkglTestCase_006420_2);

#define VkglTestCase_006421_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006421_2 "2.arithmetic.literal_before_input.div.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006421, VkglTestCase_006421_1, VkglTestCase_006421_2);

#define VkglTestCase_006422_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006422_2 ".arithmetic.literal_before_input.div.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006422, VkglTestCase_006422_1, VkglTestCase_006422_2);

#define VkglTestCase_006423_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006423_2 "2.arithmetic.literal_before_input.div.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006423, VkglTestCase_006423_1, VkglTestCase_006423_2);

#define VkglTestCase_006424_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006424_2 ".arithmetic.literal_before_input.div.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006424, VkglTestCase_006424_1, VkglTestCase_006424_2);

#define VkglTestCase_006425_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006425_2 ".arithmetic.literal_before_input.div.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006425, VkglTestCase_006425_1, VkglTestCase_006425_2);

#define VkglTestCase_006426_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006426_2 "arithmetic.literal_before_input.div.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006426, VkglTestCase_006426_1, VkglTestCase_006426_2);

#define VkglTestCase_006427_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006427_2 ".arithmetic.literal_before_input.div.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006427, VkglTestCase_006427_1, VkglTestCase_006427_2);

#define VkglTestCase_006428_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006428_2 "arithmetic.literal_before_input.div.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006428, VkglTestCase_006428_1, VkglTestCase_006428_2);

#define VkglTestCase_006429_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006429_2 ".arithmetic.literal_before_input.div.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006429, VkglTestCase_006429_1, VkglTestCase_006429_2);

#define VkglTestCase_006430_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006430_2 "arithmetic.literal_before_input.div.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006430, VkglTestCase_006430_1, VkglTestCase_006430_2);

#define VkglTestCase_006431_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006431_2 ".arithmetic.literal_before_input.div.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006431, VkglTestCase_006431_1, VkglTestCase_006431_2);

#define VkglTestCase_006432_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006432_2 "arithmetic.literal_before_input.div.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006432, VkglTestCase_006432_1, VkglTestCase_006432_2);

#define VkglTestCase_006433_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006433_2 ".arithmetic.literal_before_input.div.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006433, VkglTestCase_006433_1, VkglTestCase_006433_2);

#define VkglTestCase_006434_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006434_2 "arithmetic.literal_before_input.div.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006434, VkglTestCase_006434_1, VkglTestCase_006434_2);

#define VkglTestCase_006435_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006435_2 ".arithmetic.literal_before_input.div.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006435, VkglTestCase_006435_1, VkglTestCase_006435_2);

#define VkglTestCase_006436_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006436_2 "arithmetic.literal_before_input.div.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006436, VkglTestCase_006436_1, VkglTestCase_006436_2);

#define VkglTestCase_006437_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006437_2 ".arithmetic.literal_before_input.div.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006437, VkglTestCase_006437_1, VkglTestCase_006437_2);

#define VkglTestCase_006438_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006438_2 "arithmetic.literal_before_input.div.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006438, VkglTestCase_006438_1, VkglTestCase_006438_2);

#define VkglTestCase_006439_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006439_2 "arithmetic.literal_before_input.div.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006439, VkglTestCase_006439_1, VkglTestCase_006439_2);

#define VkglTestCase_006440_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006440_2 "rithmetic.literal_before_input.div.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006440, VkglTestCase_006440_1, VkglTestCase_006440_2);

#define VkglTestCase_006441_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006441_2 ".arithmetic.literal_before_input.div.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006441, VkglTestCase_006441_1, VkglTestCase_006441_2);

#define VkglTestCase_006442_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006442_2 "arithmetic.literal_before_input.div.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006442, VkglTestCase_006442_1, VkglTestCase_006442_2);

#define VkglTestCase_006443_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006443_2 ".arithmetic.literal_before_input.div.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006443, VkglTestCase_006443_1, VkglTestCase_006443_2);

#define VkglTestCase_006444_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006444_2 "arithmetic.literal_before_input.div.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006444, VkglTestCase_006444_1, VkglTestCase_006444_2);

#define VkglTestCase_006445_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006445_2 "arithmetic.literal_before_input.div.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006445, VkglTestCase_006445_1, VkglTestCase_006445_2);

#define VkglTestCase_006446_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006446_2 "rithmetic.literal_before_input.div.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006446, VkglTestCase_006446_1, VkglTestCase_006446_2);

#define VkglTestCase_006447_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006447_2 ".arithmetic.literal_before_input.div.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006447, VkglTestCase_006447_1, VkglTestCase_006447_2);

#define VkglTestCase_006448_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006448_2 "arithmetic.literal_before_input.div.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006448, VkglTestCase_006448_1, VkglTestCase_006448_2);

#define VkglTestCase_006449_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006449_2 ".arithmetic.literal_before_input.div.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006449, VkglTestCase_006449_1, VkglTestCase_006449_2);

#define VkglTestCase_006450_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006450_2 "arithmetic.literal_before_input.div.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006450, VkglTestCase_006450_1, VkglTestCase_006450_2);

#define VkglTestCase_006451_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006451_2 "arithmetic.literal_before_input.div.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006451, VkglTestCase_006451_1, VkglTestCase_006451_2);

#define VkglTestCase_006452_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006452_2 "rithmetic.literal_before_input.div.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006452, VkglTestCase_006452_1, VkglTestCase_006452_2);

#define VkglTestCase_006453_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006453_2 ".arithmetic.literal_before_input.div.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006453, VkglTestCase_006453_1, VkglTestCase_006453_2);

#define VkglTestCase_006454_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006454_2 "arithmetic.literal_before_input.div.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006454, VkglTestCase_006454_1, VkglTestCase_006454_2);

#define VkglTestCase_006455_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006455_2 ".arithmetic.literal_before_input.div.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006455, VkglTestCase_006455_1, VkglTestCase_006455_2);

#define VkglTestCase_006456_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006456_2 "arithmetic.literal_before_input.div.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006456, VkglTestCase_006456_1, VkglTestCase_006456_2);
