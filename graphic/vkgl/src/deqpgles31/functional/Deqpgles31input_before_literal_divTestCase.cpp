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

#define VkglTestCase_005227_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005227_2 ".arithmetic.input_before_literal.div.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005227, VkglTestCase_005227_1, VkglTestCase_005227_2);

#define VkglTestCase_005228_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005228_2 "arithmetic.input_before_literal.div.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005228, VkglTestCase_005228_1, VkglTestCase_005228_2);

#define VkglTestCase_005229_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005229_2 "1.arithmetic.input_before_literal.div.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005229, VkglTestCase_005229_1, VkglTestCase_005229_2);

#define VkglTestCase_005230_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005230_2 ".arithmetic.input_before_literal.div.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005230, VkglTestCase_005230_1, VkglTestCase_005230_2);

#define VkglTestCase_005231_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005231_2 "1.arithmetic.input_before_literal.div.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005231, VkglTestCase_005231_1, VkglTestCase_005231_2);

#define VkglTestCase_005232_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005232_2 ".arithmetic.input_before_literal.div.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005232, VkglTestCase_005232_1, VkglTestCase_005232_2);

#define VkglTestCase_005233_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005233_2 "1.arithmetic.input_before_literal.div.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005233, VkglTestCase_005233_1, VkglTestCase_005233_2);

#define VkglTestCase_005234_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005234_2 ".arithmetic.input_before_literal.div.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005234, VkglTestCase_005234_1, VkglTestCase_005234_2);

#define VkglTestCase_005235_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005235_2 "1.arithmetic.input_before_literal.div.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005235, VkglTestCase_005235_1, VkglTestCase_005235_2);

#define VkglTestCase_005236_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005236_2 ".arithmetic.input_before_literal.div.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005236, VkglTestCase_005236_1, VkglTestCase_005236_2);

#define VkglTestCase_005237_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005237_2 ".arithmetic.input_before_literal.div.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005237, VkglTestCase_005237_1, VkglTestCase_005237_2);

#define VkglTestCase_005238_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005238_2 "arithmetic.input_before_literal.div.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005238, VkglTestCase_005238_1, VkglTestCase_005238_2);

#define VkglTestCase_005239_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005239_2 ".arithmetic.input_before_literal.div.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005239, VkglTestCase_005239_1, VkglTestCase_005239_2);

#define VkglTestCase_005240_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005240_2 "arithmetic.input_before_literal.div.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005240, VkglTestCase_005240_1, VkglTestCase_005240_2);

#define VkglTestCase_005241_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005241_2 ".arithmetic.input_before_literal.div.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005241, VkglTestCase_005241_1, VkglTestCase_005241_2);

#define VkglTestCase_005242_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005242_2 "arithmetic.input_before_literal.div.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005242, VkglTestCase_005242_1, VkglTestCase_005242_2);

#define VkglTestCase_005243_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005243_2 ".arithmetic.input_before_literal.div.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005243, VkglTestCase_005243_1, VkglTestCase_005243_2);

#define VkglTestCase_005244_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005244_2 "arithmetic.input_before_literal.div.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005244, VkglTestCase_005244_1, VkglTestCase_005244_2);

#define VkglTestCase_005245_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005245_2 ".arithmetic.input_before_literal.div.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005245, VkglTestCase_005245_1, VkglTestCase_005245_2);

#define VkglTestCase_005246_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005246_2 "arithmetic.input_before_literal.div.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005246, VkglTestCase_005246_1, VkglTestCase_005246_2);

#define VkglTestCase_005247_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005247_2 ".arithmetic.input_before_literal.div.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005247, VkglTestCase_005247_1, VkglTestCase_005247_2);

#define VkglTestCase_005248_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005248_2 "arithmetic.input_before_literal.div.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005248, VkglTestCase_005248_1, VkglTestCase_005248_2);

#define VkglTestCase_005249_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005249_2 ".arithmetic.input_before_literal.div.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005249, VkglTestCase_005249_1, VkglTestCase_005249_2);

#define VkglTestCase_005250_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005250_2 "arithmetic.input_before_literal.div.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005250, VkglTestCase_005250_1, VkglTestCase_005250_2);

#define VkglTestCase_005251_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005251_2 "arithmetic.input_before_literal.div.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005251, VkglTestCase_005251_1, VkglTestCase_005251_2);

#define VkglTestCase_005252_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005252_2 "rithmetic.input_before_literal.div.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005252, VkglTestCase_005252_1, VkglTestCase_005252_2);

#define VkglTestCase_005253_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005253_2 ".arithmetic.input_before_literal.div.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005253, VkglTestCase_005253_1, VkglTestCase_005253_2);

#define VkglTestCase_005254_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005254_2 "arithmetic.input_before_literal.div.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005254, VkglTestCase_005254_1, VkglTestCase_005254_2);

#define VkglTestCase_005255_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005255_2 ".arithmetic.input_before_literal.div.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005255, VkglTestCase_005255_1, VkglTestCase_005255_2);

#define VkglTestCase_005256_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005256_2 "arithmetic.input_before_literal.div.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005256, VkglTestCase_005256_1, VkglTestCase_005256_2);

#define VkglTestCase_005257_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005257_2 "arithmetic.input_before_literal.div.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005257, VkglTestCase_005257_1, VkglTestCase_005257_2);

#define VkglTestCase_005258_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005258_2 "rithmetic.input_before_literal.div.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005258, VkglTestCase_005258_1, VkglTestCase_005258_2);

#define VkglTestCase_005259_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005259_2 ".arithmetic.input_before_literal.div.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005259, VkglTestCase_005259_1, VkglTestCase_005259_2);

#define VkglTestCase_005260_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005260_2 "arithmetic.input_before_literal.div.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005260, VkglTestCase_005260_1, VkglTestCase_005260_2);

#define VkglTestCase_005261_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005261_2 ".arithmetic.input_before_literal.div.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005261, VkglTestCase_005261_1, VkglTestCase_005261_2);

#define VkglTestCase_005262_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005262_2 "arithmetic.input_before_literal.div.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005262, VkglTestCase_005262_1, VkglTestCase_005262_2);

#define VkglTestCase_005263_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005263_2 "arithmetic.input_before_literal.div.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005263, VkglTestCase_005263_1, VkglTestCase_005263_2);

#define VkglTestCase_005264_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005264_2 "rithmetic.input_before_literal.div.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005264, VkglTestCase_005264_1, VkglTestCase_005264_2);

#define VkglTestCase_005265_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005265_2 ".arithmetic.input_before_literal.div.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005265, VkglTestCase_005265_1, VkglTestCase_005265_2);

#define VkglTestCase_005266_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005266_2 "arithmetic.input_before_literal.div.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005266, VkglTestCase_005266_1, VkglTestCase_005266_2);

#define VkglTestCase_005267_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005267_2 ".arithmetic.input_before_literal.div.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005267, VkglTestCase_005267_1, VkglTestCase_005267_2);

#define VkglTestCase_005268_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005268_2 "arithmetic.input_before_literal.div.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005268, VkglTestCase_005268_1, VkglTestCase_005268_2);

#define VkglTestCase_006261_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006261_2 ".arithmetic.input_before_literal.div.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006261, VkglTestCase_006261_1, VkglTestCase_006261_2);

#define VkglTestCase_006262_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006262_2 "arithmetic.input_before_literal.div.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006262, VkglTestCase_006262_1, VkglTestCase_006262_2);

#define VkglTestCase_006263_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006263_2 "2.arithmetic.input_before_literal.div.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006263, VkglTestCase_006263_1, VkglTestCase_006263_2);

#define VkglTestCase_006264_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006264_2 ".arithmetic.input_before_literal.div.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006264, VkglTestCase_006264_1, VkglTestCase_006264_2);

#define VkglTestCase_006265_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006265_2 "2.arithmetic.input_before_literal.div.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006265, VkglTestCase_006265_1, VkglTestCase_006265_2);

#define VkglTestCase_006266_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006266_2 ".arithmetic.input_before_literal.div.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006266, VkglTestCase_006266_1, VkglTestCase_006266_2);

#define VkglTestCase_006267_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006267_2 "2.arithmetic.input_before_literal.div.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006267, VkglTestCase_006267_1, VkglTestCase_006267_2);

#define VkglTestCase_006268_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006268_2 ".arithmetic.input_before_literal.div.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006268, VkglTestCase_006268_1, VkglTestCase_006268_2);

#define VkglTestCase_006269_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006269_2 "2.arithmetic.input_before_literal.div.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006269, VkglTestCase_006269_1, VkglTestCase_006269_2);

#define VkglTestCase_006270_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006270_2 ".arithmetic.input_before_literal.div.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006270, VkglTestCase_006270_1, VkglTestCase_006270_2);

#define VkglTestCase_006271_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006271_2 ".arithmetic.input_before_literal.div.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006271, VkglTestCase_006271_1, VkglTestCase_006271_2);

#define VkglTestCase_006272_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006272_2 "arithmetic.input_before_literal.div.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006272, VkglTestCase_006272_1, VkglTestCase_006272_2);

#define VkglTestCase_006273_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006273_2 ".arithmetic.input_before_literal.div.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006273, VkglTestCase_006273_1, VkglTestCase_006273_2);

#define VkglTestCase_006274_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006274_2 "arithmetic.input_before_literal.div.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006274, VkglTestCase_006274_1, VkglTestCase_006274_2);

#define VkglTestCase_006275_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006275_2 ".arithmetic.input_before_literal.div.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006275, VkglTestCase_006275_1, VkglTestCase_006275_2);

#define VkglTestCase_006276_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006276_2 "arithmetic.input_before_literal.div.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006276, VkglTestCase_006276_1, VkglTestCase_006276_2);

#define VkglTestCase_006277_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006277_2 ".arithmetic.input_before_literal.div.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006277, VkglTestCase_006277_1, VkglTestCase_006277_2);

#define VkglTestCase_006278_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006278_2 "arithmetic.input_before_literal.div.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006278, VkglTestCase_006278_1, VkglTestCase_006278_2);

#define VkglTestCase_006279_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006279_2 ".arithmetic.input_before_literal.div.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006279, VkglTestCase_006279_1, VkglTestCase_006279_2);

#define VkglTestCase_006280_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006280_2 "arithmetic.input_before_literal.div.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006280, VkglTestCase_006280_1, VkglTestCase_006280_2);

#define VkglTestCase_006281_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006281_2 ".arithmetic.input_before_literal.div.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006281, VkglTestCase_006281_1, VkglTestCase_006281_2);

#define VkglTestCase_006282_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006282_2 "arithmetic.input_before_literal.div.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006282, VkglTestCase_006282_1, VkglTestCase_006282_2);

#define VkglTestCase_006283_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006283_2 ".arithmetic.input_before_literal.div.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006283, VkglTestCase_006283_1, VkglTestCase_006283_2);

#define VkglTestCase_006284_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006284_2 "arithmetic.input_before_literal.div.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006284, VkglTestCase_006284_1, VkglTestCase_006284_2);

#define VkglTestCase_006285_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006285_2 "arithmetic.input_before_literal.div.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006285, VkglTestCase_006285_1, VkglTestCase_006285_2);

#define VkglTestCase_006286_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006286_2 "rithmetic.input_before_literal.div.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006286, VkglTestCase_006286_1, VkglTestCase_006286_2);

#define VkglTestCase_006287_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006287_2 ".arithmetic.input_before_literal.div.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006287, VkglTestCase_006287_1, VkglTestCase_006287_2);

#define VkglTestCase_006288_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006288_2 "arithmetic.input_before_literal.div.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006288, VkglTestCase_006288_1, VkglTestCase_006288_2);

#define VkglTestCase_006289_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006289_2 ".arithmetic.input_before_literal.div.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006289, VkglTestCase_006289_1, VkglTestCase_006289_2);

#define VkglTestCase_006290_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006290_2 "arithmetic.input_before_literal.div.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006290, VkglTestCase_006290_1, VkglTestCase_006290_2);

#define VkglTestCase_006291_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006291_2 "arithmetic.input_before_literal.div.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006291, VkglTestCase_006291_1, VkglTestCase_006291_2);

#define VkglTestCase_006292_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006292_2 "rithmetic.input_before_literal.div.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006292, VkglTestCase_006292_1, VkglTestCase_006292_2);

#define VkglTestCase_006293_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006293_2 ".arithmetic.input_before_literal.div.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006293, VkglTestCase_006293_1, VkglTestCase_006293_2);

#define VkglTestCase_006294_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006294_2 "arithmetic.input_before_literal.div.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006294, VkglTestCase_006294_1, VkglTestCase_006294_2);

#define VkglTestCase_006295_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006295_2 ".arithmetic.input_before_literal.div.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006295, VkglTestCase_006295_1, VkglTestCase_006295_2);

#define VkglTestCase_006296_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006296_2 "arithmetic.input_before_literal.div.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006296, VkglTestCase_006296_1, VkglTestCase_006296_2);

#define VkglTestCase_006297_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006297_2 "arithmetic.input_before_literal.div.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006297, VkglTestCase_006297_1, VkglTestCase_006297_2);

#define VkglTestCase_006298_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006298_2 "rithmetic.input_before_literal.div.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006298, VkglTestCase_006298_1, VkglTestCase_006298_2);

#define VkglTestCase_006299_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006299_2 ".arithmetic.input_before_literal.div.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006299, VkglTestCase_006299_1, VkglTestCase_006299_2);

#define VkglTestCase_006300_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006300_2 "arithmetic.input_before_literal.div.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006300, VkglTestCase_006300_1, VkglTestCase_006300_2);

#define VkglTestCase_006301_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006301_2 ".arithmetic.input_before_literal.div.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006301, VkglTestCase_006301_1, VkglTestCase_006301_2);

#define VkglTestCase_006302_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006302_2 "arithmetic.input_before_literal.div.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006302, VkglTestCase_006302_1, VkglTestCase_006302_2);
