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

#define VkglTestCase_005269_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005269_2 ".arithmetic.literal_before_input.add.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005269, VkglTestCase_005269_1, VkglTestCase_005269_2);

#define VkglTestCase_005270_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005270_2 "arithmetic.literal_before_input.add.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005270, VkglTestCase_005270_1, VkglTestCase_005270_2);

#define VkglTestCase_005271_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005271_2 "1.arithmetic.literal_before_input.add.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005271, VkglTestCase_005271_1, VkglTestCase_005271_2);

#define VkglTestCase_005272_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005272_2 ".arithmetic.literal_before_input.add.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005272, VkglTestCase_005272_1, VkglTestCase_005272_2);

#define VkglTestCase_005273_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005273_2 "1.arithmetic.literal_before_input.add.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005273, VkglTestCase_005273_1, VkglTestCase_005273_2);

#define VkglTestCase_005274_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005274_2 ".arithmetic.literal_before_input.add.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005274, VkglTestCase_005274_1, VkglTestCase_005274_2);

#define VkglTestCase_005275_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005275_2 "1.arithmetic.literal_before_input.add.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005275, VkglTestCase_005275_1, VkglTestCase_005275_2);

#define VkglTestCase_005276_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005276_2 ".arithmetic.literal_before_input.add.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005276, VkglTestCase_005276_1, VkglTestCase_005276_2);

#define VkglTestCase_005277_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005277_2 "1.arithmetic.literal_before_input.add.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005277, VkglTestCase_005277_1, VkglTestCase_005277_2);

#define VkglTestCase_005278_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005278_2 ".arithmetic.literal_before_input.add.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005278, VkglTestCase_005278_1, VkglTestCase_005278_2);

#define VkglTestCase_005279_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005279_2 ".arithmetic.literal_before_input.add.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005279, VkglTestCase_005279_1, VkglTestCase_005279_2);

#define VkglTestCase_005280_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005280_2 "arithmetic.literal_before_input.add.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005280, VkglTestCase_005280_1, VkglTestCase_005280_2);

#define VkglTestCase_005281_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005281_2 ".arithmetic.literal_before_input.add.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005281, VkglTestCase_005281_1, VkglTestCase_005281_2);

#define VkglTestCase_005282_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005282_2 "arithmetic.literal_before_input.add.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005282, VkglTestCase_005282_1, VkglTestCase_005282_2);

#define VkglTestCase_005283_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005283_2 ".arithmetic.literal_before_input.add.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005283, VkglTestCase_005283_1, VkglTestCase_005283_2);

#define VkglTestCase_005284_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005284_2 "arithmetic.literal_before_input.add.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005284, VkglTestCase_005284_1, VkglTestCase_005284_2);

#define VkglTestCase_005285_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005285_2 ".arithmetic.literal_before_input.add.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005285, VkglTestCase_005285_1, VkglTestCase_005285_2);

#define VkglTestCase_005286_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005286_2 "arithmetic.literal_before_input.add.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005286, VkglTestCase_005286_1, VkglTestCase_005286_2);

#define VkglTestCase_005287_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005287_2 ".arithmetic.literal_before_input.add.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005287, VkglTestCase_005287_1, VkglTestCase_005287_2);

#define VkglTestCase_005288_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005288_2 "arithmetic.literal_before_input.add.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005288, VkglTestCase_005288_1, VkglTestCase_005288_2);

#define VkglTestCase_005289_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005289_2 ".arithmetic.literal_before_input.add.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005289, VkglTestCase_005289_1, VkglTestCase_005289_2);

#define VkglTestCase_005290_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005290_2 "arithmetic.literal_before_input.add.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005290, VkglTestCase_005290_1, VkglTestCase_005290_2);

#define VkglTestCase_005291_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005291_2 ".arithmetic.literal_before_input.add.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005291, VkglTestCase_005291_1, VkglTestCase_005291_2);

#define VkglTestCase_005292_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005292_2 "arithmetic.literal_before_input.add.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005292, VkglTestCase_005292_1, VkglTestCase_005292_2);

#define VkglTestCase_005293_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005293_2 "arithmetic.literal_before_input.add.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005293, VkglTestCase_005293_1, VkglTestCase_005293_2);

#define VkglTestCase_005294_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005294_2 "rithmetic.literal_before_input.add.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005294, VkglTestCase_005294_1, VkglTestCase_005294_2);

#define VkglTestCase_005295_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005295_2 ".arithmetic.literal_before_input.add.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005295, VkglTestCase_005295_1, VkglTestCase_005295_2);

#define VkglTestCase_005296_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005296_2 "arithmetic.literal_before_input.add.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005296, VkglTestCase_005296_1, VkglTestCase_005296_2);

#define VkglTestCase_005297_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005297_2 ".arithmetic.literal_before_input.add.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005297, VkglTestCase_005297_1, VkglTestCase_005297_2);

#define VkglTestCase_005298_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005298_2 "arithmetic.literal_before_input.add.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005298, VkglTestCase_005298_1, VkglTestCase_005298_2);

#define VkglTestCase_005299_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005299_2 "arithmetic.literal_before_input.add.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005299, VkglTestCase_005299_1, VkglTestCase_005299_2);

#define VkglTestCase_005300_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005300_2 "rithmetic.literal_before_input.add.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005300, VkglTestCase_005300_1, VkglTestCase_005300_2);

#define VkglTestCase_005301_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005301_2 ".arithmetic.literal_before_input.add.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005301, VkglTestCase_005301_1, VkglTestCase_005301_2);

#define VkglTestCase_005302_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005302_2 "arithmetic.literal_before_input.add.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005302, VkglTestCase_005302_1, VkglTestCase_005302_2);

#define VkglTestCase_005303_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005303_2 ".arithmetic.literal_before_input.add.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005303, VkglTestCase_005303_1, VkglTestCase_005303_2);

#define VkglTestCase_005304_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005304_2 "arithmetic.literal_before_input.add.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005304, VkglTestCase_005304_1, VkglTestCase_005304_2);

#define VkglTestCase_005305_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005305_2 "arithmetic.literal_before_input.add.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005305, VkglTestCase_005305_1, VkglTestCase_005305_2);

#define VkglTestCase_005306_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005306_2 "rithmetic.literal_before_input.add.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005306, VkglTestCase_005306_1, VkglTestCase_005306_2);

#define VkglTestCase_005307_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005307_2 ".arithmetic.literal_before_input.add.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005307, VkglTestCase_005307_1, VkglTestCase_005307_2);

#define VkglTestCase_005308_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005308_2 "arithmetic.literal_before_input.add.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005308, VkglTestCase_005308_1, VkglTestCase_005308_2);

#define VkglTestCase_005309_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005309_2 ".arithmetic.literal_before_input.add.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005309, VkglTestCase_005309_1, VkglTestCase_005309_2);

#define VkglTestCase_005310_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005310_2 "arithmetic.literal_before_input.add.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005310, VkglTestCase_005310_1, VkglTestCase_005310_2);

#define VkglTestCase_006303_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006303_2 ".arithmetic.literal_before_input.add.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006303, VkglTestCase_006303_1, VkglTestCase_006303_2);

#define VkglTestCase_006304_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006304_2 "arithmetic.literal_before_input.add.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006304, VkglTestCase_006304_1, VkglTestCase_006304_2);

#define VkglTestCase_006305_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006305_2 "2.arithmetic.literal_before_input.add.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006305, VkglTestCase_006305_1, VkglTestCase_006305_2);

#define VkglTestCase_006306_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006306_2 ".arithmetic.literal_before_input.add.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006306, VkglTestCase_006306_1, VkglTestCase_006306_2);

#define VkglTestCase_006307_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006307_2 "2.arithmetic.literal_before_input.add.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006307, VkglTestCase_006307_1, VkglTestCase_006307_2);

#define VkglTestCase_006308_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006308_2 ".arithmetic.literal_before_input.add.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006308, VkglTestCase_006308_1, VkglTestCase_006308_2);

#define VkglTestCase_006309_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006309_2 "2.arithmetic.literal_before_input.add.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006309, VkglTestCase_006309_1, VkglTestCase_006309_2);

#define VkglTestCase_006310_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006310_2 ".arithmetic.literal_before_input.add.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006310, VkglTestCase_006310_1, VkglTestCase_006310_2);

#define VkglTestCase_006311_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006311_2 "2.arithmetic.literal_before_input.add.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006311, VkglTestCase_006311_1, VkglTestCase_006311_2);

#define VkglTestCase_006312_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006312_2 ".arithmetic.literal_before_input.add.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006312, VkglTestCase_006312_1, VkglTestCase_006312_2);

#define VkglTestCase_006313_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006313_2 ".arithmetic.literal_before_input.add.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006313, VkglTestCase_006313_1, VkglTestCase_006313_2);

#define VkglTestCase_006314_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006314_2 "arithmetic.literal_before_input.add.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006314, VkglTestCase_006314_1, VkglTestCase_006314_2);

#define VkglTestCase_006315_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006315_2 ".arithmetic.literal_before_input.add.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006315, VkglTestCase_006315_1, VkglTestCase_006315_2);

#define VkglTestCase_006316_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006316_2 "arithmetic.literal_before_input.add.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006316, VkglTestCase_006316_1, VkglTestCase_006316_2);

#define VkglTestCase_006317_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006317_2 ".arithmetic.literal_before_input.add.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006317, VkglTestCase_006317_1, VkglTestCase_006317_2);

#define VkglTestCase_006318_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006318_2 "arithmetic.literal_before_input.add.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006318, VkglTestCase_006318_1, VkglTestCase_006318_2);

#define VkglTestCase_006319_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006319_2 ".arithmetic.literal_before_input.add.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006319, VkglTestCase_006319_1, VkglTestCase_006319_2);

#define VkglTestCase_006320_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006320_2 "arithmetic.literal_before_input.add.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006320, VkglTestCase_006320_1, VkglTestCase_006320_2);

#define VkglTestCase_006321_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006321_2 ".arithmetic.literal_before_input.add.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006321, VkglTestCase_006321_1, VkglTestCase_006321_2);

#define VkglTestCase_006322_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006322_2 "arithmetic.literal_before_input.add.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006322, VkglTestCase_006322_1, VkglTestCase_006322_2);

#define VkglTestCase_006323_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006323_2 ".arithmetic.literal_before_input.add.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006323, VkglTestCase_006323_1, VkglTestCase_006323_2);

#define VkglTestCase_006324_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006324_2 "arithmetic.literal_before_input.add.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006324, VkglTestCase_006324_1, VkglTestCase_006324_2);

#define VkglTestCase_006325_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006325_2 ".arithmetic.literal_before_input.add.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006325, VkglTestCase_006325_1, VkglTestCase_006325_2);

#define VkglTestCase_006326_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006326_2 "arithmetic.literal_before_input.add.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006326, VkglTestCase_006326_1, VkglTestCase_006326_2);

#define VkglTestCase_006327_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006327_2 "arithmetic.literal_before_input.add.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006327, VkglTestCase_006327_1, VkglTestCase_006327_2);

#define VkglTestCase_006328_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006328_2 "rithmetic.literal_before_input.add.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006328, VkglTestCase_006328_1, VkglTestCase_006328_2);

#define VkglTestCase_006329_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006329_2 ".arithmetic.literal_before_input.add.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006329, VkglTestCase_006329_1, VkglTestCase_006329_2);

#define VkglTestCase_006330_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006330_2 "arithmetic.literal_before_input.add.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006330, VkglTestCase_006330_1, VkglTestCase_006330_2);

#define VkglTestCase_006331_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006331_2 ".arithmetic.literal_before_input.add.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006331, VkglTestCase_006331_1, VkglTestCase_006331_2);

#define VkglTestCase_006332_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006332_2 "arithmetic.literal_before_input.add.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006332, VkglTestCase_006332_1, VkglTestCase_006332_2);

#define VkglTestCase_006333_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006333_2 "arithmetic.literal_before_input.add.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006333, VkglTestCase_006333_1, VkglTestCase_006333_2);

#define VkglTestCase_006334_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006334_2 "rithmetic.literal_before_input.add.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006334, VkglTestCase_006334_1, VkglTestCase_006334_2);

#define VkglTestCase_006335_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006335_2 ".arithmetic.literal_before_input.add.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006335, VkglTestCase_006335_1, VkglTestCase_006335_2);

#define VkglTestCase_006336_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006336_2 "arithmetic.literal_before_input.add.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006336, VkglTestCase_006336_1, VkglTestCase_006336_2);

#define VkglTestCase_006337_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006337_2 ".arithmetic.literal_before_input.add.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006337, VkglTestCase_006337_1, VkglTestCase_006337_2);

#define VkglTestCase_006338_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006338_2 "arithmetic.literal_before_input.add.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006338, VkglTestCase_006338_1, VkglTestCase_006338_2);

#define VkglTestCase_006339_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006339_2 "arithmetic.literal_before_input.add.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006339, VkglTestCase_006339_1, VkglTestCase_006339_2);

#define VkglTestCase_006340_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006340_2 "rithmetic.literal_before_input.add.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006340, VkglTestCase_006340_1, VkglTestCase_006340_2);

#define VkglTestCase_006341_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006341_2 ".arithmetic.literal_before_input.add.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006341, VkglTestCase_006341_1, VkglTestCase_006341_2);

#define VkglTestCase_006342_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006342_2 "arithmetic.literal_before_input.add.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006342, VkglTestCase_006342_1, VkglTestCase_006342_2);

#define VkglTestCase_006343_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006343_2 ".arithmetic.literal_before_input.add.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006343, VkglTestCase_006343_1, VkglTestCase_006343_2);

#define VkglTestCase_006344_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006344_2 "arithmetic.literal_before_input.add.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006344, VkglTestCase_006344_1, VkglTestCase_006344_2);
