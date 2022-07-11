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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007097_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007097_2 "ix.mul.const_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007097, VkglTestCase_007097_1, VkglTestCase_007097_2);

#define VkglTestCase_007098_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007098_2 "x.mul.const_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007098, VkglTestCase_007098_1, VkglTestCase_007098_2);

#define VkglTestCase_007099_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007099_2 "ix.mul.const_lowp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007099, VkglTestCase_007099_1, VkglTestCase_007099_2);

#define VkglTestCase_007100_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007100_2 "x.mul.const_lowp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007100, VkglTestCase_007100_1, VkglTestCase_007100_2);

#define VkglTestCase_007101_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007101_2 "ix.mul.const_lowp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007101, VkglTestCase_007101_1, VkglTestCase_007101_2);

#define VkglTestCase_007102_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007102_2 "x.mul.const_lowp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007102, VkglTestCase_007102_1, VkglTestCase_007102_2);

#define VkglTestCase_007103_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007103_2 "ix.mul.const_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007103, VkglTestCase_007103_1, VkglTestCase_007103_2);

#define VkglTestCase_007104_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007104_2 "x.mul.const_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007104, VkglTestCase_007104_1, VkglTestCase_007104_2);

#define VkglTestCase_007105_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007105_2 ".mul.const_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007105, VkglTestCase_007105_1, VkglTestCase_007105_2);

#define VkglTestCase_007106_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007106_2 "mul.const_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007106, VkglTestCase_007106_1, VkglTestCase_007106_2);

#define VkglTestCase_007107_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007107_2 "x.mul.const_mediump_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007107, VkglTestCase_007107_1, VkglTestCase_007107_2);

#define VkglTestCase_007108_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007108_2 ".mul.const_mediump_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007108, VkglTestCase_007108_1, VkglTestCase_007108_2);

#define VkglTestCase_007109_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007109_2 "x.mul.const_mediump_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007109, VkglTestCase_007109_1, VkglTestCase_007109_2);

#define VkglTestCase_007110_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007110_2 ".mul.const_mediump_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007110, VkglTestCase_007110_1, VkglTestCase_007110_2);

#define VkglTestCase_007111_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007111_2 "x.mul.const_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007111, VkglTestCase_007111_1, VkglTestCase_007111_2);

#define VkglTestCase_007112_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007112_2 ".mul.const_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007112, VkglTestCase_007112_1, VkglTestCase_007112_2);

#define VkglTestCase_007113_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007113_2 "x.mul.const_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007113, VkglTestCase_007113_1, VkglTestCase_007113_2);

#define VkglTestCase_007114_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007114_2 ".mul.const_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007114, VkglTestCase_007114_1, VkglTestCase_007114_2);

#define VkglTestCase_007115_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007115_2 "ix.mul.const_highp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007115, VkglTestCase_007115_1, VkglTestCase_007115_2);

#define VkglTestCase_007116_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007116_2 "x.mul.const_highp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007116, VkglTestCase_007116_1, VkglTestCase_007116_2);

#define VkglTestCase_007117_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007117_2 "ix.mul.const_highp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007117, VkglTestCase_007117_1, VkglTestCase_007117_2);

#define VkglTestCase_007118_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007118_2 "x.mul.const_highp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007118, VkglTestCase_007118_1, VkglTestCase_007118_2);

#define VkglTestCase_007119_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007119_2 "ix.mul.const_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007119, VkglTestCase_007119_1, VkglTestCase_007119_2);

#define VkglTestCase_007120_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007120_2 "x.mul.const_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007120, VkglTestCase_007120_1, VkglTestCase_007120_2);

#define VkglTestCase_007121_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007121_2 "ix.mul.const_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007121, VkglTestCase_007121_1, VkglTestCase_007121_2);

#define VkglTestCase_007122_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007122_2 "x.mul.const_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007122, VkglTestCase_007122_1, VkglTestCase_007122_2);

#define VkglTestCase_007123_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007123_2 "ix.mul.const_lowp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007123, VkglTestCase_007123_1, VkglTestCase_007123_2);

#define VkglTestCase_007124_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007124_2 "x.mul.const_lowp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007124, VkglTestCase_007124_1, VkglTestCase_007124_2);

#define VkglTestCase_007125_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007125_2 "ix.mul.const_lowp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007125, VkglTestCase_007125_1, VkglTestCase_007125_2);

#define VkglTestCase_007126_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007126_2 "x.mul.const_lowp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007126, VkglTestCase_007126_1, VkglTestCase_007126_2);

#define VkglTestCase_007127_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007127_2 "ix.mul.const_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007127, VkglTestCase_007127_1, VkglTestCase_007127_2);

#define VkglTestCase_007128_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007128_2 "x.mul.const_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007128, VkglTestCase_007128_1, VkglTestCase_007128_2);

#define VkglTestCase_007129_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007129_2 ".mul.const_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007129, VkglTestCase_007129_1, VkglTestCase_007129_2);

#define VkglTestCase_007130_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007130_2 "mul.const_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007130, VkglTestCase_007130_1, VkglTestCase_007130_2);

#define VkglTestCase_007131_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007131_2 "x.mul.const_mediump_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007131, VkglTestCase_007131_1, VkglTestCase_007131_2);

#define VkglTestCase_007132_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007132_2 ".mul.const_mediump_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007132, VkglTestCase_007132_1, VkglTestCase_007132_2);

#define VkglTestCase_007133_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007133_2 "x.mul.const_mediump_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007133, VkglTestCase_007133_1, VkglTestCase_007133_2);

#define VkglTestCase_007134_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007134_2 ".mul.const_mediump_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007134, VkglTestCase_007134_1, VkglTestCase_007134_2);

#define VkglTestCase_007135_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007135_2 "x.mul.const_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007135, VkglTestCase_007135_1, VkglTestCase_007135_2);

#define VkglTestCase_007136_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007136_2 ".mul.const_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007136, VkglTestCase_007136_1, VkglTestCase_007136_2);

#define VkglTestCase_007137_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007137_2 "x.mul.const_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007137, VkglTestCase_007137_1, VkglTestCase_007137_2);

#define VkglTestCase_007138_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007138_2 ".mul.const_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007138, VkglTestCase_007138_1, VkglTestCase_007138_2);

#define VkglTestCase_007139_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007139_2 "ix.mul.const_highp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007139, VkglTestCase_007139_1, VkglTestCase_007139_2);

#define VkglTestCase_007140_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007140_2 "x.mul.const_highp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007140, VkglTestCase_007140_1, VkglTestCase_007140_2);

#define VkglTestCase_007141_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007141_2 "ix.mul.const_highp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007141, VkglTestCase_007141_1, VkglTestCase_007141_2);

#define VkglTestCase_007142_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007142_2 "x.mul.const_highp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007142, VkglTestCase_007142_1, VkglTestCase_007142_2);

#define VkglTestCase_007143_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007143_2 "ix.mul.const_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007143, VkglTestCase_007143_1, VkglTestCase_007143_2);

#define VkglTestCase_007144_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007144_2 "x.mul.const_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007144, VkglTestCase_007144_1, VkglTestCase_007144_2);

#define VkglTestCase_007145_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007145_2 "ix.mul.const_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007145, VkglTestCase_007145_1, VkglTestCase_007145_2);

#define VkglTestCase_007146_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007146_2 "x.mul.const_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007146, VkglTestCase_007146_1, VkglTestCase_007146_2);

#define VkglTestCase_007147_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007147_2 "ix.mul.const_lowp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007147, VkglTestCase_007147_1, VkglTestCase_007147_2);

#define VkglTestCase_007148_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007148_2 "x.mul.const_lowp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007148, VkglTestCase_007148_1, VkglTestCase_007148_2);

#define VkglTestCase_007149_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007149_2 "ix.mul.const_lowp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007149, VkglTestCase_007149_1, VkglTestCase_007149_2);

#define VkglTestCase_007150_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007150_2 "x.mul.const_lowp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007150, VkglTestCase_007150_1, VkglTestCase_007150_2);

#define VkglTestCase_007151_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007151_2 "ix.mul.const_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007151, VkglTestCase_007151_1, VkglTestCase_007151_2);

#define VkglTestCase_007152_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007152_2 "x.mul.const_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007152, VkglTestCase_007152_1, VkglTestCase_007152_2);

#define VkglTestCase_007153_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007153_2 ".mul.const_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007153, VkglTestCase_007153_1, VkglTestCase_007153_2);

#define VkglTestCase_007154_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007154_2 "mul.const_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007154, VkglTestCase_007154_1, VkglTestCase_007154_2);

#define VkglTestCase_007155_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007155_2 "x.mul.const_mediump_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007155, VkglTestCase_007155_1, VkglTestCase_007155_2);

#define VkglTestCase_007156_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007156_2 ".mul.const_mediump_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007156, VkglTestCase_007156_1, VkglTestCase_007156_2);

#define VkglTestCase_007157_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007157_2 "x.mul.const_mediump_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007157, VkglTestCase_007157_1, VkglTestCase_007157_2);

#define VkglTestCase_007158_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007158_2 ".mul.const_mediump_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007158, VkglTestCase_007158_1, VkglTestCase_007158_2);

#define VkglTestCase_007159_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007159_2 "x.mul.const_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007159, VkglTestCase_007159_1, VkglTestCase_007159_2);

#define VkglTestCase_007160_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007160_2 ".mul.const_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007160, VkglTestCase_007160_1, VkglTestCase_007160_2);

#define VkglTestCase_007161_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007161_2 "x.mul.const_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007161, VkglTestCase_007161_1, VkglTestCase_007161_2);

#define VkglTestCase_007162_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007162_2 ".mul.const_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007162, VkglTestCase_007162_1, VkglTestCase_007162_2);

#define VkglTestCase_007163_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007163_2 "ix.mul.const_highp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007163, VkglTestCase_007163_1, VkglTestCase_007163_2);

#define VkglTestCase_007164_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007164_2 "x.mul.const_highp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007164, VkglTestCase_007164_1, VkglTestCase_007164_2);

#define VkglTestCase_007165_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007165_2 "ix.mul.const_highp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007165, VkglTestCase_007165_1, VkglTestCase_007165_2);

#define VkglTestCase_007166_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007166_2 "x.mul.const_highp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007166, VkglTestCase_007166_1, VkglTestCase_007166_2);

#define VkglTestCase_007167_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007167_2 "ix.mul.const_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007167, VkglTestCase_007167_1, VkglTestCase_007167_2);

#define VkglTestCase_007168_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007168_2 "x.mul.const_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007168, VkglTestCase_007168_1, VkglTestCase_007168_2);

#define VkglTestCase_007169_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007169_2 "x.mul.uniform_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007169, VkglTestCase_007169_1, VkglTestCase_007169_2);

#define VkglTestCase_007170_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007170_2 ".mul.uniform_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007170, VkglTestCase_007170_1, VkglTestCase_007170_2);

#define VkglTestCase_007171_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007171_2 "x.mul.uniform_lowp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007171, VkglTestCase_007171_1, VkglTestCase_007171_2);

#define VkglTestCase_007172_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007172_2 ".mul.uniform_lowp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007172, VkglTestCase_007172_1, VkglTestCase_007172_2);

#define VkglTestCase_007173_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007173_2 "x.mul.uniform_lowp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007173, VkglTestCase_007173_1, VkglTestCase_007173_2);

#define VkglTestCase_007174_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007174_2 ".mul.uniform_lowp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007174, VkglTestCase_007174_1, VkglTestCase_007174_2);

#define VkglTestCase_007175_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007175_2 "x.mul.uniform_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007175, VkglTestCase_007175_1, VkglTestCase_007175_2);

#define VkglTestCase_007176_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007176_2 ".mul.uniform_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007176, VkglTestCase_007176_1, VkglTestCase_007176_2);

#define VkglTestCase_007177_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007177_2 "mul.uniform_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007177, VkglTestCase_007177_1, VkglTestCase_007177_2);

#define VkglTestCase_007178_1 "dEQP-GLES2.functional.shaders.matrix.m"
#define VkglTestCase_007178_2 "ul.uniform_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007178, VkglTestCase_007178_1, VkglTestCase_007178_2);

#define VkglTestCase_007179_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007179_2 ".mul.uniform_mediump_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007179, VkglTestCase_007179_1, VkglTestCase_007179_2);

#define VkglTestCase_007180_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007180_2 "mul.uniform_mediump_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007180, VkglTestCase_007180_1, VkglTestCase_007180_2);

#define VkglTestCase_007181_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007181_2 ".mul.uniform_mediump_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007181, VkglTestCase_007181_1, VkglTestCase_007181_2);

#define VkglTestCase_007182_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007182_2 "mul.uniform_mediump_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007182, VkglTestCase_007182_1, VkglTestCase_007182_2);

#define VkglTestCase_007183_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007183_2 ".mul.uniform_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007183, VkglTestCase_007183_1, VkglTestCase_007183_2);

#define VkglTestCase_007184_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007184_2 "mul.uniform_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007184, VkglTestCase_007184_1, VkglTestCase_007184_2);

#define VkglTestCase_007185_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007185_2 ".mul.uniform_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007185, VkglTestCase_007185_1, VkglTestCase_007185_2);

#define VkglTestCase_007186_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007186_2 "mul.uniform_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007186, VkglTestCase_007186_1, VkglTestCase_007186_2);

#define VkglTestCase_007187_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007187_2 "x.mul.uniform_highp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007187, VkglTestCase_007187_1, VkglTestCase_007187_2);

#define VkglTestCase_007188_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007188_2 ".mul.uniform_highp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007188, VkglTestCase_007188_1, VkglTestCase_007188_2);

#define VkglTestCase_007189_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007189_2 "x.mul.uniform_highp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007189, VkglTestCase_007189_1, VkglTestCase_007189_2);

#define VkglTestCase_007190_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007190_2 ".mul.uniform_highp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007190, VkglTestCase_007190_1, VkglTestCase_007190_2);

#define VkglTestCase_007191_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007191_2 "x.mul.uniform_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007191, VkglTestCase_007191_1, VkglTestCase_007191_2);

#define VkglTestCase_007192_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007192_2 ".mul.uniform_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007192, VkglTestCase_007192_1, VkglTestCase_007192_2);

#define VkglTestCase_007193_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007193_2 "x.mul.uniform_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007193, VkglTestCase_007193_1, VkglTestCase_007193_2);

#define VkglTestCase_007194_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007194_2 ".mul.uniform_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007194, VkglTestCase_007194_1, VkglTestCase_007194_2);

#define VkglTestCase_007195_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007195_2 "x.mul.uniform_lowp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007195, VkglTestCase_007195_1, VkglTestCase_007195_2);

#define VkglTestCase_007196_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007196_2 ".mul.uniform_lowp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007196, VkglTestCase_007196_1, VkglTestCase_007196_2);

#define VkglTestCase_007197_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007197_2 "x.mul.uniform_lowp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007197, VkglTestCase_007197_1, VkglTestCase_007197_2);

#define VkglTestCase_007198_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007198_2 ".mul.uniform_lowp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007198, VkglTestCase_007198_1, VkglTestCase_007198_2);

#define VkglTestCase_007199_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007199_2 "x.mul.uniform_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007199, VkglTestCase_007199_1, VkglTestCase_007199_2);

#define VkglTestCase_007200_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007200_2 ".mul.uniform_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007200, VkglTestCase_007200_1, VkglTestCase_007200_2);

#define VkglTestCase_007201_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007201_2 "mul.uniform_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007201, VkglTestCase_007201_1, VkglTestCase_007201_2);

#define VkglTestCase_007202_1 "dEQP-GLES2.functional.shaders.matrix.m"
#define VkglTestCase_007202_2 "ul.uniform_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007202, VkglTestCase_007202_1, VkglTestCase_007202_2);

#define VkglTestCase_007203_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007203_2 ".mul.uniform_mediump_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007203, VkglTestCase_007203_1, VkglTestCase_007203_2);

#define VkglTestCase_007204_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007204_2 "mul.uniform_mediump_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007204, VkglTestCase_007204_1, VkglTestCase_007204_2);

#define VkglTestCase_007205_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007205_2 ".mul.uniform_mediump_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007205, VkglTestCase_007205_1, VkglTestCase_007205_2);

#define VkglTestCase_007206_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007206_2 "mul.uniform_mediump_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007206, VkglTestCase_007206_1, VkglTestCase_007206_2);

#define VkglTestCase_007207_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007207_2 ".mul.uniform_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007207, VkglTestCase_007207_1, VkglTestCase_007207_2);

#define VkglTestCase_007208_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007208_2 "mul.uniform_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007208, VkglTestCase_007208_1, VkglTestCase_007208_2);

#define VkglTestCase_007209_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007209_2 ".mul.uniform_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007209, VkglTestCase_007209_1, VkglTestCase_007209_2);

#define VkglTestCase_007210_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007210_2 "mul.uniform_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007210, VkglTestCase_007210_1, VkglTestCase_007210_2);

#define VkglTestCase_007211_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007211_2 "x.mul.uniform_highp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007211, VkglTestCase_007211_1, VkglTestCase_007211_2);

#define VkglTestCase_007212_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007212_2 ".mul.uniform_highp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007212, VkglTestCase_007212_1, VkglTestCase_007212_2);

#define VkglTestCase_007213_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007213_2 "x.mul.uniform_highp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007213, VkglTestCase_007213_1, VkglTestCase_007213_2);

#define VkglTestCase_007214_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007214_2 ".mul.uniform_highp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007214, VkglTestCase_007214_1, VkglTestCase_007214_2);

#define VkglTestCase_007215_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007215_2 "x.mul.uniform_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007215, VkglTestCase_007215_1, VkglTestCase_007215_2);

#define VkglTestCase_007216_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007216_2 ".mul.uniform_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007216, VkglTestCase_007216_1, VkglTestCase_007216_2);

#define VkglTestCase_007217_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007217_2 "x.mul.uniform_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007217, VkglTestCase_007217_1, VkglTestCase_007217_2);

#define VkglTestCase_007218_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007218_2 ".mul.uniform_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007218, VkglTestCase_007218_1, VkglTestCase_007218_2);

#define VkglTestCase_007219_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007219_2 "x.mul.uniform_lowp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007219, VkglTestCase_007219_1, VkglTestCase_007219_2);

#define VkglTestCase_007220_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007220_2 ".mul.uniform_lowp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007220, VkglTestCase_007220_1, VkglTestCase_007220_2);

#define VkglTestCase_007221_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007221_2 "x.mul.uniform_lowp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007221, VkglTestCase_007221_1, VkglTestCase_007221_2);

#define VkglTestCase_007222_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007222_2 ".mul.uniform_lowp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007222, VkglTestCase_007222_1, VkglTestCase_007222_2);

#define VkglTestCase_007223_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007223_2 "x.mul.uniform_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007223, VkglTestCase_007223_1, VkglTestCase_007223_2);

#define VkglTestCase_007224_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007224_2 ".mul.uniform_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007224, VkglTestCase_007224_1, VkglTestCase_007224_2);

#define VkglTestCase_007225_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007225_2 "mul.uniform_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007225, VkglTestCase_007225_1, VkglTestCase_007225_2);

#define VkglTestCase_007226_1 "dEQP-GLES2.functional.shaders.matrix.m"
#define VkglTestCase_007226_2 "ul.uniform_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007226, VkglTestCase_007226_1, VkglTestCase_007226_2);

#define VkglTestCase_007227_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007227_2 ".mul.uniform_mediump_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007227, VkglTestCase_007227_1, VkglTestCase_007227_2);

#define VkglTestCase_007228_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007228_2 "mul.uniform_mediump_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007228, VkglTestCase_007228_1, VkglTestCase_007228_2);

#define VkglTestCase_007229_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007229_2 ".mul.uniform_mediump_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007229, VkglTestCase_007229_1, VkglTestCase_007229_2);

#define VkglTestCase_007230_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007230_2 "mul.uniform_mediump_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007230, VkglTestCase_007230_1, VkglTestCase_007230_2);

#define VkglTestCase_007231_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007231_2 ".mul.uniform_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007231, VkglTestCase_007231_1, VkglTestCase_007231_2);

#define VkglTestCase_007232_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007232_2 "mul.uniform_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007232, VkglTestCase_007232_1, VkglTestCase_007232_2);

#define VkglTestCase_007233_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007233_2 ".mul.uniform_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007233, VkglTestCase_007233_1, VkglTestCase_007233_2);

#define VkglTestCase_007234_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007234_2 "mul.uniform_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007234, VkglTestCase_007234_1, VkglTestCase_007234_2);

#define VkglTestCase_007235_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007235_2 "x.mul.uniform_highp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007235, VkglTestCase_007235_1, VkglTestCase_007235_2);

#define VkglTestCase_007236_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007236_2 ".mul.uniform_highp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007236, VkglTestCase_007236_1, VkglTestCase_007236_2);

#define VkglTestCase_007237_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007237_2 "x.mul.uniform_highp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007237, VkglTestCase_007237_1, VkglTestCase_007237_2);

#define VkglTestCase_007238_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007238_2 ".mul.uniform_highp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007238, VkglTestCase_007238_1, VkglTestCase_007238_2);

#define VkglTestCase_007239_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007239_2 "x.mul.uniform_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007239, VkglTestCase_007239_1, VkglTestCase_007239_2);

#define VkglTestCase_007240_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007240_2 ".mul.uniform_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007240, VkglTestCase_007240_1, VkglTestCase_007240_2);

#define VkglTestCase_007241_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007241_2 "x.mul.dynamic_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007241, VkglTestCase_007241_1, VkglTestCase_007241_2);

#define VkglTestCase_007242_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007242_2 ".mul.dynamic_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007242, VkglTestCase_007242_1, VkglTestCase_007242_2);

#define VkglTestCase_007243_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007243_2 "x.mul.dynamic_lowp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007243, VkglTestCase_007243_1, VkglTestCase_007243_2);

#define VkglTestCase_007244_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007244_2 ".mul.dynamic_lowp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007244, VkglTestCase_007244_1, VkglTestCase_007244_2);

#define VkglTestCase_007245_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007245_2 "x.mul.dynamic_lowp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007245, VkglTestCase_007245_1, VkglTestCase_007245_2);

#define VkglTestCase_007246_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007246_2 ".mul.dynamic_lowp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007246, VkglTestCase_007246_1, VkglTestCase_007246_2);

#define VkglTestCase_007247_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007247_2 "x.mul.dynamic_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007247, VkglTestCase_007247_1, VkglTestCase_007247_2);

#define VkglTestCase_007248_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007248_2 ".mul.dynamic_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007248, VkglTestCase_007248_1, VkglTestCase_007248_2);

#define VkglTestCase_007249_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007249_2 "mul.dynamic_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007249, VkglTestCase_007249_1, VkglTestCase_007249_2);

#define VkglTestCase_007250_1 "dEQP-GLES2.functional.shaders.matrix.m"
#define VkglTestCase_007250_2 "ul.dynamic_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007250, VkglTestCase_007250_1, VkglTestCase_007250_2);

#define VkglTestCase_007251_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007251_2 ".mul.dynamic_mediump_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007251, VkglTestCase_007251_1, VkglTestCase_007251_2);

#define VkglTestCase_007252_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007252_2 "mul.dynamic_mediump_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007252, VkglTestCase_007252_1, VkglTestCase_007252_2);

#define VkglTestCase_007253_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007253_2 ".mul.dynamic_mediump_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007253, VkglTestCase_007253_1, VkglTestCase_007253_2);

#define VkglTestCase_007254_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007254_2 "mul.dynamic_mediump_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007254, VkglTestCase_007254_1, VkglTestCase_007254_2);

#define VkglTestCase_007255_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007255_2 ".mul.dynamic_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007255, VkglTestCase_007255_1, VkglTestCase_007255_2);

#define VkglTestCase_007256_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007256_2 "mul.dynamic_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007256, VkglTestCase_007256_1, VkglTestCase_007256_2);

#define VkglTestCase_007257_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007257_2 ".mul.dynamic_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007257, VkglTestCase_007257_1, VkglTestCase_007257_2);

#define VkglTestCase_007258_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007258_2 "mul.dynamic_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007258, VkglTestCase_007258_1, VkglTestCase_007258_2);

#define VkglTestCase_007259_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007259_2 "x.mul.dynamic_highp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007259, VkglTestCase_007259_1, VkglTestCase_007259_2);

#define VkglTestCase_007260_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007260_2 ".mul.dynamic_highp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007260, VkglTestCase_007260_1, VkglTestCase_007260_2);

#define VkglTestCase_007261_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007261_2 "x.mul.dynamic_highp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007261, VkglTestCase_007261_1, VkglTestCase_007261_2);

#define VkglTestCase_007262_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007262_2 ".mul.dynamic_highp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007262, VkglTestCase_007262_1, VkglTestCase_007262_2);

#define VkglTestCase_007263_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007263_2 "x.mul.dynamic_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007263, VkglTestCase_007263_1, VkglTestCase_007263_2);

#define VkglTestCase_007264_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007264_2 ".mul.dynamic_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007264, VkglTestCase_007264_1, VkglTestCase_007264_2);

#define VkglTestCase_007265_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007265_2 "x.mul.dynamic_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007265, VkglTestCase_007265_1, VkglTestCase_007265_2);

#define VkglTestCase_007266_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007266_2 ".mul.dynamic_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007266, VkglTestCase_007266_1, VkglTestCase_007266_2);

#define VkglTestCase_007267_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007267_2 "x.mul.dynamic_lowp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007267, VkglTestCase_007267_1, VkglTestCase_007267_2);

#define VkglTestCase_007268_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007268_2 ".mul.dynamic_lowp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007268, VkglTestCase_007268_1, VkglTestCase_007268_2);

#define VkglTestCase_007269_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007269_2 "x.mul.dynamic_lowp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007269, VkglTestCase_007269_1, VkglTestCase_007269_2);

#define VkglTestCase_007270_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007270_2 ".mul.dynamic_lowp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007270, VkglTestCase_007270_1, VkglTestCase_007270_2);

#define VkglTestCase_007271_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007271_2 "x.mul.dynamic_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007271, VkglTestCase_007271_1, VkglTestCase_007271_2);

#define VkglTestCase_007272_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007272_2 ".mul.dynamic_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007272, VkglTestCase_007272_1, VkglTestCase_007272_2);

#define VkglTestCase_007273_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007273_2 "mul.dynamic_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007273, VkglTestCase_007273_1, VkglTestCase_007273_2);

#define VkglTestCase_007274_1 "dEQP-GLES2.functional.shaders.matrix.m"
#define VkglTestCase_007274_2 "ul.dynamic_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007274, VkglTestCase_007274_1, VkglTestCase_007274_2);

#define VkglTestCase_007275_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007275_2 ".mul.dynamic_mediump_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007275, VkglTestCase_007275_1, VkglTestCase_007275_2);

#define VkglTestCase_007276_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007276_2 "mul.dynamic_mediump_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007276, VkglTestCase_007276_1, VkglTestCase_007276_2);

#define VkglTestCase_007277_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007277_2 ".mul.dynamic_mediump_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007277, VkglTestCase_007277_1, VkglTestCase_007277_2);

#define VkglTestCase_007278_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007278_2 "mul.dynamic_mediump_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007278, VkglTestCase_007278_1, VkglTestCase_007278_2);

#define VkglTestCase_007279_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007279_2 ".mul.dynamic_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007279, VkglTestCase_007279_1, VkglTestCase_007279_2);

#define VkglTestCase_007280_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007280_2 "mul.dynamic_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007280, VkglTestCase_007280_1, VkglTestCase_007280_2);

#define VkglTestCase_007281_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007281_2 ".mul.dynamic_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007281, VkglTestCase_007281_1, VkglTestCase_007281_2);

#define VkglTestCase_007282_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007282_2 "mul.dynamic_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007282, VkglTestCase_007282_1, VkglTestCase_007282_2);

#define VkglTestCase_007283_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007283_2 "x.mul.dynamic_highp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007283, VkglTestCase_007283_1, VkglTestCase_007283_2);

#define VkglTestCase_007284_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007284_2 ".mul.dynamic_highp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007284, VkglTestCase_007284_1, VkglTestCase_007284_2);

#define VkglTestCase_007285_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007285_2 "x.mul.dynamic_highp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007285, VkglTestCase_007285_1, VkglTestCase_007285_2);

#define VkglTestCase_007286_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007286_2 ".mul.dynamic_highp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007286, VkglTestCase_007286_1, VkglTestCase_007286_2);

#define VkglTestCase_007287_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007287_2 "x.mul.dynamic_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007287, VkglTestCase_007287_1, VkglTestCase_007287_2);

#define VkglTestCase_007288_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007288_2 ".mul.dynamic_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007288, VkglTestCase_007288_1, VkglTestCase_007288_2);

#define VkglTestCase_007289_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007289_2 "x.mul.dynamic_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007289, VkglTestCase_007289_1, VkglTestCase_007289_2);

#define VkglTestCase_007290_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007290_2 ".mul.dynamic_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007290, VkglTestCase_007290_1, VkglTestCase_007290_2);

#define VkglTestCase_007291_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007291_2 "x.mul.dynamic_lowp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007291, VkglTestCase_007291_1, VkglTestCase_007291_2);

#define VkglTestCase_007292_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007292_2 ".mul.dynamic_lowp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007292, VkglTestCase_007292_1, VkglTestCase_007292_2);

#define VkglTestCase_007293_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007293_2 "x.mul.dynamic_lowp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007293, VkglTestCase_007293_1, VkglTestCase_007293_2);

#define VkglTestCase_007294_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007294_2 ".mul.dynamic_lowp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007294, VkglTestCase_007294_1, VkglTestCase_007294_2);

#define VkglTestCase_007295_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007295_2 "x.mul.dynamic_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007295, VkglTestCase_007295_1, VkglTestCase_007295_2);

#define VkglTestCase_007296_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007296_2 ".mul.dynamic_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007296, VkglTestCase_007296_1, VkglTestCase_007296_2);

#define VkglTestCase_007297_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007297_2 "mul.dynamic_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007297, VkglTestCase_007297_1, VkglTestCase_007297_2);

#define VkglTestCase_007298_1 "dEQP-GLES2.functional.shaders.matrix.m"
#define VkglTestCase_007298_2 "ul.dynamic_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007298, VkglTestCase_007298_1, VkglTestCase_007298_2);

#define VkglTestCase_007299_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007299_2 ".mul.dynamic_mediump_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007299, VkglTestCase_007299_1, VkglTestCase_007299_2);

#define VkglTestCase_007300_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007300_2 "mul.dynamic_mediump_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007300, VkglTestCase_007300_1, VkglTestCase_007300_2);

#define VkglTestCase_007301_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007301_2 ".mul.dynamic_mediump_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007301, VkglTestCase_007301_1, VkglTestCase_007301_2);

#define VkglTestCase_007302_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007302_2 "mul.dynamic_mediump_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007302, VkglTestCase_007302_1, VkglTestCase_007302_2);

#define VkglTestCase_007303_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007303_2 ".mul.dynamic_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007303, VkglTestCase_007303_1, VkglTestCase_007303_2);

#define VkglTestCase_007304_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007304_2 "mul.dynamic_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007304, VkglTestCase_007304_1, VkglTestCase_007304_2);

#define VkglTestCase_007305_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007305_2 ".mul.dynamic_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007305, VkglTestCase_007305_1, VkglTestCase_007305_2);

#define VkglTestCase_007306_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007306_2 "mul.dynamic_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007306, VkglTestCase_007306_1, VkglTestCase_007306_2);

#define VkglTestCase_007307_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007307_2 "x.mul.dynamic_highp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007307, VkglTestCase_007307_1, VkglTestCase_007307_2);

#define VkglTestCase_007308_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007308_2 ".mul.dynamic_highp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007308, VkglTestCase_007308_1, VkglTestCase_007308_2);

#define VkglTestCase_007309_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007309_2 "x.mul.dynamic_highp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007309, VkglTestCase_007309_1, VkglTestCase_007309_2);

#define VkglTestCase_007310_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007310_2 ".mul.dynamic_highp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007310, VkglTestCase_007310_1, VkglTestCase_007310_2);

#define VkglTestCase_007311_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007311_2 "x.mul.dynamic_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007311, VkglTestCase_007311_1, VkglTestCase_007311_2);

#define VkglTestCase_007312_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007312_2 ".mul.dynamic_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007312, VkglTestCase_007312_1, VkglTestCase_007312_2);
