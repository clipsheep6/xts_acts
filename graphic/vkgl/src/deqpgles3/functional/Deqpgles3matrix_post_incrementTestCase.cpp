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

#define VkglTestCase_016122_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016122_2 "post_increment.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016122, VkglTestCase_016122_1, VkglTestCase_016122_2);

#define VkglTestCase_016123_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016123_2 "ost_increment.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016123, VkglTestCase_016123_1, VkglTestCase_016123_2);

#define VkglTestCase_016124_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016124_2 "ost_increment.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016124, VkglTestCase_016124_1, VkglTestCase_016124_2);

#define VkglTestCase_016125_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016125_2 "st_increment.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016125, VkglTestCase_016125_1, VkglTestCase_016125_2);

#define VkglTestCase_016126_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016126_2 "post_increment.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016126, VkglTestCase_016126_1, VkglTestCase_016126_2);

#define VkglTestCase_016127_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016127_2 "ost_increment.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016127, VkglTestCase_016127_1, VkglTestCase_016127_2);

#define VkglTestCase_016128_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016128_2 "ost_increment.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016128, VkglTestCase_016128_1, VkglTestCase_016128_2);

#define VkglTestCase_016129_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016129_2 "st_increment.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016129, VkglTestCase_016129_1, VkglTestCase_016129_2);

#define VkglTestCase_016130_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016130_2 "st_increment.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016130, VkglTestCase_016130_1, VkglTestCase_016130_2);

#define VkglTestCase_016131_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016131_2 "t_increment.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016131, VkglTestCase_016131_1, VkglTestCase_016131_2);

#define VkglTestCase_016132_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016132_2 "ost_increment.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016132, VkglTestCase_016132_1, VkglTestCase_016132_2);

#define VkglTestCase_016133_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016133_2 "st_increment.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016133, VkglTestCase_016133_1, VkglTestCase_016133_2);

#define VkglTestCase_016134_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016134_2 "ost_increment.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016134, VkglTestCase_016134_1, VkglTestCase_016134_2);

#define VkglTestCase_016135_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016135_2 "st_increment.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016135, VkglTestCase_016135_1, VkglTestCase_016135_2);

#define VkglTestCase_016136_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016136_2 "st_increment.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016136, VkglTestCase_016136_1, VkglTestCase_016136_2);

#define VkglTestCase_016137_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016137_2 "t_increment.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016137, VkglTestCase_016137_1, VkglTestCase_016137_2);

#define VkglTestCase_016138_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016138_2 "ost_increment.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016138, VkglTestCase_016138_1, VkglTestCase_016138_2);

#define VkglTestCase_016139_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016139_2 "st_increment.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016139, VkglTestCase_016139_1, VkglTestCase_016139_2);

#define VkglTestCase_016140_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016140_2 "ost_increment.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016140, VkglTestCase_016140_1, VkglTestCase_016140_2);

#define VkglTestCase_016141_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016141_2 "st_increment.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016141, VkglTestCase_016141_1, VkglTestCase_016141_2);

#define VkglTestCase_016142_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016142_2 "st_increment.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016142, VkglTestCase_016142_1, VkglTestCase_016142_2);

#define VkglTestCase_016143_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016143_2 "t_increment.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016143, VkglTestCase_016143_1, VkglTestCase_016143_2);

#define VkglTestCase_016144_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016144_2 "ost_increment.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016144, VkglTestCase_016144_1, VkglTestCase_016144_2);

#define VkglTestCase_016145_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016145_2 "st_increment.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016145, VkglTestCase_016145_1, VkglTestCase_016145_2);

#define VkglTestCase_016146_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016146_2 "post_increment.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016146, VkglTestCase_016146_1, VkglTestCase_016146_2);

#define VkglTestCase_016147_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016147_2 "ost_increment.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016147, VkglTestCase_016147_1, VkglTestCase_016147_2);

#define VkglTestCase_016148_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016148_2 "ost_increment.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016148, VkglTestCase_016148_1, VkglTestCase_016148_2);

#define VkglTestCase_016149_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016149_2 "st_increment.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016149, VkglTestCase_016149_1, VkglTestCase_016149_2);

#define VkglTestCase_016150_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016150_2 "post_increment.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016150, VkglTestCase_016150_1, VkglTestCase_016150_2);

#define VkglTestCase_016151_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016151_2 "ost_increment.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016151, VkglTestCase_016151_1, VkglTestCase_016151_2);

#define VkglTestCase_016152_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016152_2 "ost_increment.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016152, VkglTestCase_016152_1, VkglTestCase_016152_2);

#define VkglTestCase_016153_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016153_2 "st_increment.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016153, VkglTestCase_016153_1, VkglTestCase_016153_2);

#define VkglTestCase_016154_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016154_2 "st_increment.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016154, VkglTestCase_016154_1, VkglTestCase_016154_2);

#define VkglTestCase_016155_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016155_2 "t_increment.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016155, VkglTestCase_016155_1, VkglTestCase_016155_2);

#define VkglTestCase_016156_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016156_2 "ost_increment.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016156, VkglTestCase_016156_1, VkglTestCase_016156_2);

#define VkglTestCase_016157_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016157_2 "st_increment.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016157, VkglTestCase_016157_1, VkglTestCase_016157_2);

#define VkglTestCase_016158_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016158_2 "ost_increment.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016158, VkglTestCase_016158_1, VkglTestCase_016158_2);

#define VkglTestCase_016159_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016159_2 "st_increment.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016159, VkglTestCase_016159_1, VkglTestCase_016159_2);

#define VkglTestCase_016160_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016160_2 "st_increment.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016160, VkglTestCase_016160_1, VkglTestCase_016160_2);

#define VkglTestCase_016161_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016161_2 "t_increment.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016161, VkglTestCase_016161_1, VkglTestCase_016161_2);

#define VkglTestCase_016162_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016162_2 "ost_increment.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016162, VkglTestCase_016162_1, VkglTestCase_016162_2);

#define VkglTestCase_016163_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016163_2 "st_increment.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016163, VkglTestCase_016163_1, VkglTestCase_016163_2);

#define VkglTestCase_016164_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016164_2 "ost_increment.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016164, VkglTestCase_016164_1, VkglTestCase_016164_2);

#define VkglTestCase_016165_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016165_2 "st_increment.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016165, VkglTestCase_016165_1, VkglTestCase_016165_2);

#define VkglTestCase_016166_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016166_2 "st_increment.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016166, VkglTestCase_016166_1, VkglTestCase_016166_2);

#define VkglTestCase_016167_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016167_2 "t_increment.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016167, VkglTestCase_016167_1, VkglTestCase_016167_2);

#define VkglTestCase_016168_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016168_2 "ost_increment.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016168, VkglTestCase_016168_1, VkglTestCase_016168_2);

#define VkglTestCase_016169_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016169_2 "st_increment.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016169, VkglTestCase_016169_1, VkglTestCase_016169_2);

#define VkglTestCase_016170_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016170_2 "post_increment.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016170, VkglTestCase_016170_1, VkglTestCase_016170_2);

#define VkglTestCase_016171_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016171_2 "ost_increment.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016171, VkglTestCase_016171_1, VkglTestCase_016171_2);

#define VkglTestCase_016172_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016172_2 "ost_increment.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016172, VkglTestCase_016172_1, VkglTestCase_016172_2);

#define VkglTestCase_016173_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016173_2 "st_increment.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016173, VkglTestCase_016173_1, VkglTestCase_016173_2);

#define VkglTestCase_016174_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016174_2 "post_increment.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016174, VkglTestCase_016174_1, VkglTestCase_016174_2);

#define VkglTestCase_016175_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016175_2 "ost_increment.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016175, VkglTestCase_016175_1, VkglTestCase_016175_2);
