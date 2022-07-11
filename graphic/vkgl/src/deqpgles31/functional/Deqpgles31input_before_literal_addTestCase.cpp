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

#define VkglTestCase_005115_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005115_2 ".arithmetic.input_before_literal.add.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005115, VkglTestCase_005115_1, VkglTestCase_005115_2);

#define VkglTestCase_005116_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005116_2 "arithmetic.input_before_literal.add.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005116, VkglTestCase_005116_1, VkglTestCase_005116_2);

#define VkglTestCase_005117_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005117_2 "1.arithmetic.input_before_literal.add.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005117, VkglTestCase_005117_1, VkglTestCase_005117_2);

#define VkglTestCase_005118_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005118_2 ".arithmetic.input_before_literal.add.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005118, VkglTestCase_005118_1, VkglTestCase_005118_2);

#define VkglTestCase_005119_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005119_2 "1.arithmetic.input_before_literal.add.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005119, VkglTestCase_005119_1, VkglTestCase_005119_2);

#define VkglTestCase_005120_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005120_2 ".arithmetic.input_before_literal.add.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005120, VkglTestCase_005120_1, VkglTestCase_005120_2);

#define VkglTestCase_005121_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005121_2 "1.arithmetic.input_before_literal.add.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005121, VkglTestCase_005121_1, VkglTestCase_005121_2);

#define VkglTestCase_005122_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005122_2 ".arithmetic.input_before_literal.add.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005122, VkglTestCase_005122_1, VkglTestCase_005122_2);

#define VkglTestCase_005123_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005123_2 "1.arithmetic.input_before_literal.add.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005123, VkglTestCase_005123_1, VkglTestCase_005123_2);

#define VkglTestCase_005124_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005124_2 ".arithmetic.input_before_literal.add.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005124, VkglTestCase_005124_1, VkglTestCase_005124_2);

#define VkglTestCase_005125_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005125_2 ".arithmetic.input_before_literal.add.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005125, VkglTestCase_005125_1, VkglTestCase_005125_2);

#define VkglTestCase_005126_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005126_2 "arithmetic.input_before_literal.add.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005126, VkglTestCase_005126_1, VkglTestCase_005126_2);

#define VkglTestCase_005127_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005127_2 ".arithmetic.input_before_literal.add.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005127, VkglTestCase_005127_1, VkglTestCase_005127_2);

#define VkglTestCase_005128_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005128_2 "arithmetic.input_before_literal.add.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005128, VkglTestCase_005128_1, VkglTestCase_005128_2);

#define VkglTestCase_005129_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005129_2 ".arithmetic.input_before_literal.add.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005129, VkglTestCase_005129_1, VkglTestCase_005129_2);

#define VkglTestCase_005130_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005130_2 "arithmetic.input_before_literal.add.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005130, VkglTestCase_005130_1, VkglTestCase_005130_2);

#define VkglTestCase_005131_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005131_2 ".arithmetic.input_before_literal.add.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005131, VkglTestCase_005131_1, VkglTestCase_005131_2);

#define VkglTestCase_005132_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005132_2 "arithmetic.input_before_literal.add.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005132, VkglTestCase_005132_1, VkglTestCase_005132_2);

#define VkglTestCase_005133_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005133_2 ".arithmetic.input_before_literal.add.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005133, VkglTestCase_005133_1, VkglTestCase_005133_2);

#define VkglTestCase_005134_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005134_2 "arithmetic.input_before_literal.add.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005134, VkglTestCase_005134_1, VkglTestCase_005134_2);

#define VkglTestCase_005135_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005135_2 ".arithmetic.input_before_literal.add.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005135, VkglTestCase_005135_1, VkglTestCase_005135_2);

#define VkglTestCase_005136_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005136_2 "arithmetic.input_before_literal.add.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005136, VkglTestCase_005136_1, VkglTestCase_005136_2);

#define VkglTestCase_005137_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005137_2 ".arithmetic.input_before_literal.add.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005137, VkglTestCase_005137_1, VkglTestCase_005137_2);

#define VkglTestCase_005138_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005138_2 "arithmetic.input_before_literal.add.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005138, VkglTestCase_005138_1, VkglTestCase_005138_2);

#define VkglTestCase_005139_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005139_2 "arithmetic.input_before_literal.add.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005139, VkglTestCase_005139_1, VkglTestCase_005139_2);

#define VkglTestCase_005140_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005140_2 "rithmetic.input_before_literal.add.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005140, VkglTestCase_005140_1, VkglTestCase_005140_2);

#define VkglTestCase_005141_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005141_2 ".arithmetic.input_before_literal.add.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005141, VkglTestCase_005141_1, VkglTestCase_005141_2);

#define VkglTestCase_005142_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005142_2 "arithmetic.input_before_literal.add.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005142, VkglTestCase_005142_1, VkglTestCase_005142_2);

#define VkglTestCase_005143_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005143_2 ".arithmetic.input_before_literal.add.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005143, VkglTestCase_005143_1, VkglTestCase_005143_2);

#define VkglTestCase_005144_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005144_2 "arithmetic.input_before_literal.add.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005144, VkglTestCase_005144_1, VkglTestCase_005144_2);

#define VkglTestCase_005145_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005145_2 "arithmetic.input_before_literal.add.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005145, VkglTestCase_005145_1, VkglTestCase_005145_2);

#define VkglTestCase_005146_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005146_2 "rithmetic.input_before_literal.add.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005146, VkglTestCase_005146_1, VkglTestCase_005146_2);

#define VkglTestCase_005147_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005147_2 ".arithmetic.input_before_literal.add.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005147, VkglTestCase_005147_1, VkglTestCase_005147_2);

#define VkglTestCase_005148_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005148_2 "arithmetic.input_before_literal.add.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005148, VkglTestCase_005148_1, VkglTestCase_005148_2);

#define VkglTestCase_005149_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005149_2 ".arithmetic.input_before_literal.add.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005149, VkglTestCase_005149_1, VkglTestCase_005149_2);

#define VkglTestCase_005150_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005150_2 "arithmetic.input_before_literal.add.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005150, VkglTestCase_005150_1, VkglTestCase_005150_2);

#define VkglTestCase_005151_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005151_2 "arithmetic.input_before_literal.add.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005151, VkglTestCase_005151_1, VkglTestCase_005151_2);

#define VkglTestCase_005152_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005152_2 "rithmetic.input_before_literal.add.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005152, VkglTestCase_005152_1, VkglTestCase_005152_2);

#define VkglTestCase_005153_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005153_2 ".arithmetic.input_before_literal.add.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005153, VkglTestCase_005153_1, VkglTestCase_005153_2);

#define VkglTestCase_005154_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005154_2 "arithmetic.input_before_literal.add.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005154, VkglTestCase_005154_1, VkglTestCase_005154_2);

#define VkglTestCase_005155_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005155_2 ".arithmetic.input_before_literal.add.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005155, VkglTestCase_005155_1, VkglTestCase_005155_2);

#define VkglTestCase_005156_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005156_2 "arithmetic.input_before_literal.add.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005156, VkglTestCase_005156_1, VkglTestCase_005156_2);

#define VkglTestCase_006149_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006149_2 ".arithmetic.input_before_literal.add.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006149, VkglTestCase_006149_1, VkglTestCase_006149_2);

#define VkglTestCase_006150_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006150_2 "arithmetic.input_before_literal.add.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006150, VkglTestCase_006150_1, VkglTestCase_006150_2);

#define VkglTestCase_006151_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006151_2 "2.arithmetic.input_before_literal.add.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006151, VkglTestCase_006151_1, VkglTestCase_006151_2);

#define VkglTestCase_006152_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006152_2 ".arithmetic.input_before_literal.add.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006152, VkglTestCase_006152_1, VkglTestCase_006152_2);

#define VkglTestCase_006153_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006153_2 "2.arithmetic.input_before_literal.add.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006153, VkglTestCase_006153_1, VkglTestCase_006153_2);

#define VkglTestCase_006154_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006154_2 ".arithmetic.input_before_literal.add.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006154, VkglTestCase_006154_1, VkglTestCase_006154_2);

#define VkglTestCase_006155_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006155_2 "2.arithmetic.input_before_literal.add.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006155, VkglTestCase_006155_1, VkglTestCase_006155_2);

#define VkglTestCase_006156_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006156_2 ".arithmetic.input_before_literal.add.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006156, VkglTestCase_006156_1, VkglTestCase_006156_2);

#define VkglTestCase_006157_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006157_2 "2.arithmetic.input_before_literal.add.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006157, VkglTestCase_006157_1, VkglTestCase_006157_2);

#define VkglTestCase_006158_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006158_2 ".arithmetic.input_before_literal.add.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006158, VkglTestCase_006158_1, VkglTestCase_006158_2);

#define VkglTestCase_006159_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006159_2 ".arithmetic.input_before_literal.add.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006159, VkglTestCase_006159_1, VkglTestCase_006159_2);

#define VkglTestCase_006160_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006160_2 "arithmetic.input_before_literal.add.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006160, VkglTestCase_006160_1, VkglTestCase_006160_2);

#define VkglTestCase_006161_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006161_2 ".arithmetic.input_before_literal.add.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006161, VkglTestCase_006161_1, VkglTestCase_006161_2);

#define VkglTestCase_006162_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006162_2 "arithmetic.input_before_literal.add.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006162, VkglTestCase_006162_1, VkglTestCase_006162_2);

#define VkglTestCase_006163_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006163_2 ".arithmetic.input_before_literal.add.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006163, VkglTestCase_006163_1, VkglTestCase_006163_2);

#define VkglTestCase_006164_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006164_2 "arithmetic.input_before_literal.add.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006164, VkglTestCase_006164_1, VkglTestCase_006164_2);

#define VkglTestCase_006165_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006165_2 ".arithmetic.input_before_literal.add.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006165, VkglTestCase_006165_1, VkglTestCase_006165_2);

#define VkglTestCase_006166_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006166_2 "arithmetic.input_before_literal.add.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006166, VkglTestCase_006166_1, VkglTestCase_006166_2);

#define VkglTestCase_006167_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006167_2 ".arithmetic.input_before_literal.add.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006167, VkglTestCase_006167_1, VkglTestCase_006167_2);

#define VkglTestCase_006168_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006168_2 "arithmetic.input_before_literal.add.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006168, VkglTestCase_006168_1, VkglTestCase_006168_2);

#define VkglTestCase_006169_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006169_2 ".arithmetic.input_before_literal.add.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006169, VkglTestCase_006169_1, VkglTestCase_006169_2);

#define VkglTestCase_006170_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006170_2 "arithmetic.input_before_literal.add.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006170, VkglTestCase_006170_1, VkglTestCase_006170_2);

#define VkglTestCase_006171_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006171_2 ".arithmetic.input_before_literal.add.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006171, VkglTestCase_006171_1, VkglTestCase_006171_2);

#define VkglTestCase_006172_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006172_2 "arithmetic.input_before_literal.add.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006172, VkglTestCase_006172_1, VkglTestCase_006172_2);

#define VkglTestCase_006173_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006173_2 "arithmetic.input_before_literal.add.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006173, VkglTestCase_006173_1, VkglTestCase_006173_2);

#define VkglTestCase_006174_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006174_2 "rithmetic.input_before_literal.add.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006174, VkglTestCase_006174_1, VkglTestCase_006174_2);

#define VkglTestCase_006175_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006175_2 ".arithmetic.input_before_literal.add.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006175, VkglTestCase_006175_1, VkglTestCase_006175_2);

#define VkglTestCase_006176_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006176_2 "arithmetic.input_before_literal.add.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006176, VkglTestCase_006176_1, VkglTestCase_006176_2);

#define VkglTestCase_006177_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006177_2 ".arithmetic.input_before_literal.add.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006177, VkglTestCase_006177_1, VkglTestCase_006177_2);

#define VkglTestCase_006178_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006178_2 "arithmetic.input_before_literal.add.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006178, VkglTestCase_006178_1, VkglTestCase_006178_2);

#define VkglTestCase_006179_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006179_2 "arithmetic.input_before_literal.add.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006179, VkglTestCase_006179_1, VkglTestCase_006179_2);

#define VkglTestCase_006180_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006180_2 "rithmetic.input_before_literal.add.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006180, VkglTestCase_006180_1, VkglTestCase_006180_2);

#define VkglTestCase_006181_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006181_2 ".arithmetic.input_before_literal.add.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006181, VkglTestCase_006181_1, VkglTestCase_006181_2);

#define VkglTestCase_006182_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006182_2 "arithmetic.input_before_literal.add.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006182, VkglTestCase_006182_1, VkglTestCase_006182_2);

#define VkglTestCase_006183_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006183_2 ".arithmetic.input_before_literal.add.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006183, VkglTestCase_006183_1, VkglTestCase_006183_2);

#define VkglTestCase_006184_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006184_2 "arithmetic.input_before_literal.add.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006184, VkglTestCase_006184_1, VkglTestCase_006184_2);

#define VkglTestCase_006185_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006185_2 "arithmetic.input_before_literal.add.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006185, VkglTestCase_006185_1, VkglTestCase_006185_2);

#define VkglTestCase_006186_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006186_2 "rithmetic.input_before_literal.add.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006186, VkglTestCase_006186_1, VkglTestCase_006186_2);

#define VkglTestCase_006187_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006187_2 ".arithmetic.input_before_literal.add.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006187, VkglTestCase_006187_1, VkglTestCase_006187_2);

#define VkglTestCase_006188_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006188_2 "arithmetic.input_before_literal.add.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006188, VkglTestCase_006188_1, VkglTestCase_006188_2);

#define VkglTestCase_006189_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006189_2 ".arithmetic.input_before_literal.add.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006189, VkglTestCase_006189_1, VkglTestCase_006189_2);

#define VkglTestCase_006190_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006190_2 "arithmetic.input_before_literal.add.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006190, VkglTestCase_006190_1, VkglTestCase_006190_2);
