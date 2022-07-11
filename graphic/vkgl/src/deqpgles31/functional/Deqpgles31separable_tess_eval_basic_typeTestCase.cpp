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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022082_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022082_2 "ram_input.type.separable_tess_eval.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022082, VkglTestCase_022082_1, VkglTestCase_022082_2);

#define VkglTestCase_022083_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022083_2 "gram_input.type.separable_tess_eval.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022083, VkglTestCase_022083_1, VkglTestCase_022083_2);

#define VkglTestCase_022084_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022084_2 "gram_input.type.separable_tess_eval.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022084, VkglTestCase_022084_1, VkglTestCase_022084_2);

#define VkglTestCase_022085_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022085_2 "gram_input.type.separable_tess_eval.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022085, VkglTestCase_022085_1, VkglTestCase_022085_2);

#define VkglTestCase_022086_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022086_2 "gram_input.type.separable_tess_eval.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022086, VkglTestCase_022086_1, VkglTestCase_022086_2);

#define VkglTestCase_022087_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022087_2 "gram_input.type.separable_tess_eval.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022087, VkglTestCase_022087_1, VkglTestCase_022087_2);

#define VkglTestCase_022088_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022088_2 "ram_input.type.separable_tess_eval.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022088, VkglTestCase_022088_1, VkglTestCase_022088_2);

#define VkglTestCase_022089_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022089_2 "ram_input.type.separable_tess_eval.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022089, VkglTestCase_022089_1, VkglTestCase_022089_2);

#define VkglTestCase_022090_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022090_2 "ram_input.type.separable_tess_eval.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022090, VkglTestCase_022090_1, VkglTestCase_022090_2);

#define VkglTestCase_022091_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022091_2 "ram_input.type.separable_tess_eval.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022091, VkglTestCase_022091_1, VkglTestCase_022091_2);

#define VkglTestCase_022092_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022092_2 "ram_input.type.separable_tess_eval.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022092, VkglTestCase_022092_1, VkglTestCase_022092_2);

#define VkglTestCase_022093_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022093_2 "ram_input.type.separable_tess_eval.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022093, VkglTestCase_022093_1, VkglTestCase_022093_2);

#define VkglTestCase_022094_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022094_2 "gram_input.type.separable_tess_eval.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022094, VkglTestCase_022094_1, VkglTestCase_022094_2);

#define VkglTestCase_022095_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022095_2 "ram_input.type.separable_tess_eval.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022095, VkglTestCase_022095_1, VkglTestCase_022095_2);

#define VkglTestCase_022096_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022096_2 "ram_input.type.separable_tess_eval.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022096, VkglTestCase_022096_1, VkglTestCase_022096_2);

#define VkglTestCase_022097_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022097_2 "ram_input.type.separable_tess_eval.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022097, VkglTestCase_022097_1, VkglTestCase_022097_2);

#define VkglTestCase_022098_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022098_2 "gram_input.type.separable_tess_eval.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022098, VkglTestCase_022098_1, VkglTestCase_022098_2);

#define VkglTestCase_022099_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022099_2 "ram_input.type.separable_tess_eval.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022099, VkglTestCase_022099_1, VkglTestCase_022099_2);

#define VkglTestCase_022100_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022100_2 "ram_input.type.separable_tess_eval.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022100, VkglTestCase_022100_1, VkglTestCase_022100_2);

#define VkglTestCase_022101_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022101_2 "ram_input.type.separable_tess_eval.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022101, VkglTestCase_022101_1, VkglTestCase_022101_2);

#define VkglTestCase_022102_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022102_2 "gram_input.type.separable_tess_eval.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022102, VkglTestCase_022102_1, VkglTestCase_022102_2);

#define VkglTestCase_022717_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022717_2 "ram_output.type.separable_tess_eval.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022717, VkglTestCase_022717_1, VkglTestCase_022717_2);

#define VkglTestCase_022718_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022718_2 "gram_output.type.separable_tess_eval.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022718, VkglTestCase_022718_1, VkglTestCase_022718_2);

#define VkglTestCase_022719_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022719_2 "ram_output.type.separable_tess_eval.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022719, VkglTestCase_022719_1, VkglTestCase_022719_2);

#define VkglTestCase_022720_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022720_2 "ram_output.type.separable_tess_eval.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022720, VkglTestCase_022720_1, VkglTestCase_022720_2);

#define VkglTestCase_022721_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022721_2 "ram_output.type.separable_tess_eval.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022721, VkglTestCase_022721_1, VkglTestCase_022721_2);

#define VkglTestCase_022722_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022722_2 "ram_output.type.separable_tess_eval.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022722, VkglTestCase_022722_1, VkglTestCase_022722_2);

#define VkglTestCase_022723_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022723_2 "ram_output.type.separable_tess_eval.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022723, VkglTestCase_022723_1, VkglTestCase_022723_2);

#define VkglTestCase_022724_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022724_2 "ram_output.type.separable_tess_eval.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022724, VkglTestCase_022724_1, VkglTestCase_022724_2);

#define VkglTestCase_022725_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022725_2 "ram_output.type.separable_tess_eval.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022725, VkglTestCase_022725_1, VkglTestCase_022725_2);

#define VkglTestCase_022726_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022726_2 "ram_output.type.separable_tess_eval.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022726, VkglTestCase_022726_1, VkglTestCase_022726_2);

#define VkglTestCase_022727_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022727_2 "ram_output.type.separable_tess_eval.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022727, VkglTestCase_022727_1, VkglTestCase_022727_2);

#define VkglTestCase_022728_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022728_2 "ram_output.type.separable_tess_eval.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022728, VkglTestCase_022728_1, VkglTestCase_022728_2);

#define VkglTestCase_022729_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022729_2 "ram_output.type.separable_tess_eval.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022729, VkglTestCase_022729_1, VkglTestCase_022729_2);

#define VkglTestCase_022730_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022730_2 "am_output.type.separable_tess_eval.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022730, VkglTestCase_022730_1, VkglTestCase_022730_2);

#define VkglTestCase_022731_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022731_2 "am_output.type.separable_tess_eval.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022731, VkglTestCase_022731_1, VkglTestCase_022731_2);

#define VkglTestCase_022732_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022732_2 "am_output.type.separable_tess_eval.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022732, VkglTestCase_022732_1, VkglTestCase_022732_2);

#define VkglTestCase_022733_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022733_2 "ram_output.type.separable_tess_eval.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022733, VkglTestCase_022733_1, VkglTestCase_022733_2);

#define VkglTestCase_022734_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022734_2 "am_output.type.separable_tess_eval.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022734, VkglTestCase_022734_1, VkglTestCase_022734_2);

#define VkglTestCase_022735_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022735_2 "am_output.type.separable_tess_eval.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022735, VkglTestCase_022735_1, VkglTestCase_022735_2);

#define VkglTestCase_022736_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022736_2 "am_output.type.separable_tess_eval.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022736, VkglTestCase_022736_1, VkglTestCase_022736_2);

#define VkglTestCase_022737_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022737_2 "ram_output.type.separable_tess_eval.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022737, VkglTestCase_022737_1, VkglTestCase_022737_2);

#define VkglTestCase_023335_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023335_2 "feedback_varying.type.separable_tess_eval.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023335, VkglTestCase_023335_1, VkglTestCase_023335_2);

#define VkglTestCase_023336_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023336_2 "_feedback_varying.type.separable_tess_eval.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023336, VkglTestCase_023336_1, VkglTestCase_023336_2);

#define VkglTestCase_023337_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023337_2 "feedback_varying.type.separable_tess_eval.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023337, VkglTestCase_023337_1, VkglTestCase_023337_2);

#define VkglTestCase_023338_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023338_2 "feedback_varying.type.separable_tess_eval.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023338, VkglTestCase_023338_1, VkglTestCase_023338_2);

#define VkglTestCase_023339_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023339_2 "feedback_varying.type.separable_tess_eval.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023339, VkglTestCase_023339_1, VkglTestCase_023339_2);

#define VkglTestCase_023340_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023340_2 "feedback_varying.type.separable_tess_eval.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023340, VkglTestCase_023340_1, VkglTestCase_023340_2);

#define VkglTestCase_023341_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023341_2 "eedback_varying.type.separable_tess_eval.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023341, VkglTestCase_023341_1, VkglTestCase_023341_2);
