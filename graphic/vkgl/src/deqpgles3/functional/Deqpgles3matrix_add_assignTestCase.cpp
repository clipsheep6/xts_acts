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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016230_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016230_2 "x.add_assign.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016230, VkglTestCase_016230_1, VkglTestCase_016230_2);

#define VkglTestCase_016231_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016231_2 ".add_assign.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016231, VkglTestCase_016231_1, VkglTestCase_016231_2);

#define VkglTestCase_016232_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016232_2 ".add_assign.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016232, VkglTestCase_016232_1, VkglTestCase_016232_2);

#define VkglTestCase_016233_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016233_2 "add_assign.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016233, VkglTestCase_016233_1, VkglTestCase_016233_2);

#define VkglTestCase_016234_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016234_2 "x.add_assign.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016234, VkglTestCase_016234_1, VkglTestCase_016234_2);

#define VkglTestCase_016235_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016235_2 ".add_assign.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016235, VkglTestCase_016235_1, VkglTestCase_016235_2);

#define VkglTestCase_016236_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016236_2 ".add_assign.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016236, VkglTestCase_016236_1, VkglTestCase_016236_2);

#define VkglTestCase_016237_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016237_2 "add_assign.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016237, VkglTestCase_016237_1, VkglTestCase_016237_2);

#define VkglTestCase_016238_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016238_2 "add_assign.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016238, VkglTestCase_016238_1, VkglTestCase_016238_2);

#define VkglTestCase_016239_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_016239_2 "dd_assign.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016239, VkglTestCase_016239_1, VkglTestCase_016239_2);

#define VkglTestCase_016240_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016240_2 ".add_assign.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016240, VkglTestCase_016240_1, VkglTestCase_016240_2);

#define VkglTestCase_016241_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016241_2 "add_assign.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016241, VkglTestCase_016241_1, VkglTestCase_016241_2);

#define VkglTestCase_016242_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016242_2 ".add_assign.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016242, VkglTestCase_016242_1, VkglTestCase_016242_2);

#define VkglTestCase_016243_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016243_2 "add_assign.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016243, VkglTestCase_016243_1, VkglTestCase_016243_2);

#define VkglTestCase_016244_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016244_2 "add_assign.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016244, VkglTestCase_016244_1, VkglTestCase_016244_2);

#define VkglTestCase_016245_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_016245_2 "dd_assign.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016245, VkglTestCase_016245_1, VkglTestCase_016245_2);

#define VkglTestCase_016246_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016246_2 ".add_assign.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016246, VkglTestCase_016246_1, VkglTestCase_016246_2);

#define VkglTestCase_016247_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016247_2 "add_assign.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016247, VkglTestCase_016247_1, VkglTestCase_016247_2);

#define VkglTestCase_016248_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016248_2 ".add_assign.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016248, VkglTestCase_016248_1, VkglTestCase_016248_2);

#define VkglTestCase_016249_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016249_2 "add_assign.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016249, VkglTestCase_016249_1, VkglTestCase_016249_2);

#define VkglTestCase_016250_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016250_2 "add_assign.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016250, VkglTestCase_016250_1, VkglTestCase_016250_2);

#define VkglTestCase_016251_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_016251_2 "dd_assign.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016251, VkglTestCase_016251_1, VkglTestCase_016251_2);

#define VkglTestCase_016252_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016252_2 ".add_assign.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016252, VkglTestCase_016252_1, VkglTestCase_016252_2);

#define VkglTestCase_016253_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016253_2 "add_assign.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016253, VkglTestCase_016253_1, VkglTestCase_016253_2);

#define VkglTestCase_016254_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016254_2 "x.add_assign.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016254, VkglTestCase_016254_1, VkglTestCase_016254_2);

#define VkglTestCase_016255_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016255_2 ".add_assign.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016255, VkglTestCase_016255_1, VkglTestCase_016255_2);

#define VkglTestCase_016256_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016256_2 ".add_assign.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016256, VkglTestCase_016256_1, VkglTestCase_016256_2);

#define VkglTestCase_016257_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016257_2 "add_assign.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016257, VkglTestCase_016257_1, VkglTestCase_016257_2);

#define VkglTestCase_016258_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016258_2 "x.add_assign.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016258, VkglTestCase_016258_1, VkglTestCase_016258_2);

#define VkglTestCase_016259_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016259_2 ".add_assign.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016259, VkglTestCase_016259_1, VkglTestCase_016259_2);

#define VkglTestCase_016260_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016260_2 ".add_assign.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016260, VkglTestCase_016260_1, VkglTestCase_016260_2);

#define VkglTestCase_016261_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016261_2 "add_assign.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016261, VkglTestCase_016261_1, VkglTestCase_016261_2);

#define VkglTestCase_016262_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016262_2 "add_assign.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016262, VkglTestCase_016262_1, VkglTestCase_016262_2);

#define VkglTestCase_016263_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_016263_2 "dd_assign.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016263, VkglTestCase_016263_1, VkglTestCase_016263_2);

#define VkglTestCase_016264_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016264_2 ".add_assign.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016264, VkglTestCase_016264_1, VkglTestCase_016264_2);

#define VkglTestCase_016265_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016265_2 "add_assign.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016265, VkglTestCase_016265_1, VkglTestCase_016265_2);

#define VkglTestCase_016266_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016266_2 ".add_assign.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016266, VkglTestCase_016266_1, VkglTestCase_016266_2);

#define VkglTestCase_016267_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016267_2 "add_assign.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016267, VkglTestCase_016267_1, VkglTestCase_016267_2);

#define VkglTestCase_016268_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016268_2 "add_assign.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016268, VkglTestCase_016268_1, VkglTestCase_016268_2);

#define VkglTestCase_016269_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_016269_2 "dd_assign.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016269, VkglTestCase_016269_1, VkglTestCase_016269_2);

#define VkglTestCase_016270_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016270_2 ".add_assign.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016270, VkglTestCase_016270_1, VkglTestCase_016270_2);

#define VkglTestCase_016271_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016271_2 "add_assign.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016271, VkglTestCase_016271_1, VkglTestCase_016271_2);

#define VkglTestCase_016272_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016272_2 ".add_assign.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016272, VkglTestCase_016272_1, VkglTestCase_016272_2);

#define VkglTestCase_016273_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016273_2 "add_assign.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016273, VkglTestCase_016273_1, VkglTestCase_016273_2);

#define VkglTestCase_016274_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016274_2 "add_assign.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016274, VkglTestCase_016274_1, VkglTestCase_016274_2);

#define VkglTestCase_016275_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_016275_2 "dd_assign.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016275, VkglTestCase_016275_1, VkglTestCase_016275_2);

#define VkglTestCase_016276_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016276_2 ".add_assign.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016276, VkglTestCase_016276_1, VkglTestCase_016276_2);

#define VkglTestCase_016277_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016277_2 "add_assign.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016277, VkglTestCase_016277_1, VkglTestCase_016277_2);

#define VkglTestCase_016278_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016278_2 "x.add_assign.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016278, VkglTestCase_016278_1, VkglTestCase_016278_2);

#define VkglTestCase_016279_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016279_2 ".add_assign.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016279, VkglTestCase_016279_1, VkglTestCase_016279_2);

#define VkglTestCase_016280_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016280_2 ".add_assign.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016280, VkglTestCase_016280_1, VkglTestCase_016280_2);

#define VkglTestCase_016281_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016281_2 "add_assign.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016281, VkglTestCase_016281_1, VkglTestCase_016281_2);

#define VkglTestCase_016282_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016282_2 "x.add_assign.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016282, VkglTestCase_016282_1, VkglTestCase_016282_2);

#define VkglTestCase_016283_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016283_2 ".add_assign.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016283, VkglTestCase_016283_1, VkglTestCase_016283_2);
