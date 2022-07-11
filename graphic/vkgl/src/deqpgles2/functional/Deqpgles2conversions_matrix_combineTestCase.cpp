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
#include "../ActsDeqpgles20002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001257_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001257_2 "s.matrix_combine.vec2_vec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001257, VkglTestCase_001257_1, VkglTestCase_001257_2);

#define VkglTestCase_001258_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001258_2 ".matrix_combine.vec2_vec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001258, VkglTestCase_001258_1, VkglTestCase_001258_2);

#define VkglTestCase_001259_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001259_2 ".matrix_combine.bvec2_bvec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001259, VkglTestCase_001259_1, VkglTestCase_001259_2);

#define VkglTestCase_001260_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001260_2 "matrix_combine.bvec2_bvec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001260, VkglTestCase_001260_1, VkglTestCase_001260_2);

#define VkglTestCase_001261_1 "dEQP-GLES2.functional.shaders.conversions.matri"
#define VkglTestCase_001261_2 "x_combine.float_float_float_float_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001261, VkglTestCase_001261_1, VkglTestCase_001261_2);

#define VkglTestCase_001262_1 "dEQP-GLES2.functional.shaders.conversions.matrix"
#define VkglTestCase_001262_2 "_combine.float_float_float_float_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001262, VkglTestCase_001262_1, VkglTestCase_001262_2);

#define VkglTestCase_001263_1 "dEQP-GLES2.functional.shaders.conversions.m"
#define VkglTestCase_001263_2 "atrix_combine.int_int_int_int_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001263, VkglTestCase_001263_1, VkglTestCase_001263_2);

#define VkglTestCase_001264_1 "dEQP-GLES2.functional.shaders.conversions.ma"
#define VkglTestCase_001264_2 "trix_combine.int_int_int_int_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001264, VkglTestCase_001264_1, VkglTestCase_001264_2);

#define VkglTestCase_001265_1 "dEQP-GLES2.functional.shaders.conversions.mat"
#define VkglTestCase_001265_2 "rix_combine.bool_bool_bool_bool_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001265, VkglTestCase_001265_1, VkglTestCase_001265_2);

#define VkglTestCase_001266_1 "dEQP-GLES2.functional.shaders.conversions.matr"
#define VkglTestCase_001266_2 "ix_combine.bool_bool_bool_bool_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001266, VkglTestCase_001266_1, VkglTestCase_001266_2);

#define VkglTestCase_001267_1 "dEQP-GLES2.functional.shaders.conversions.mat"
#define VkglTestCase_001267_2 "rix_combine.bool_float_int_bool_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001267, VkglTestCase_001267_1, VkglTestCase_001267_2);

#define VkglTestCase_001268_1 "dEQP-GLES2.functional.shaders.conversions.matr"
#define VkglTestCase_001268_2 "ix_combine.bool_float_int_bool_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001268, VkglTestCase_001268_1, VkglTestCase_001268_2);

#define VkglTestCase_001269_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001269_2 ".matrix_combine.vec2_ivec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001269, VkglTestCase_001269_1, VkglTestCase_001269_2);

#define VkglTestCase_001270_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001270_2 "matrix_combine.vec2_ivec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001270, VkglTestCase_001270_1, VkglTestCase_001270_2);

#define VkglTestCase_001271_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001271_2 ".matrix_combine.vec2_bvec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001271, VkglTestCase_001271_1, VkglTestCase_001271_2);

#define VkglTestCase_001272_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001272_2 "matrix_combine.vec2_bvec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001272, VkglTestCase_001272_1, VkglTestCase_001272_2);

#define VkglTestCase_001273_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001273_2 ".matrix_combine.bvec3_float_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001273, VkglTestCase_001273_1, VkglTestCase_001273_2);

#define VkglTestCase_001274_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001274_2 "matrix_combine.bvec3_float_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001274, VkglTestCase_001274_1, VkglTestCase_001274_2);

#define VkglTestCase_001275_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001275_2 ".matrix_combine.vec3_float_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001275, VkglTestCase_001275_1, VkglTestCase_001275_2);

#define VkglTestCase_001276_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001276_2 "matrix_combine.vec3_float_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001276, VkglTestCase_001276_1, VkglTestCase_001276_2);

#define VkglTestCase_001277_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001277_2 "matrix_combine.int_ivec2_int_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001277, VkglTestCase_001277_1, VkglTestCase_001277_2);

#define VkglTestCase_001278_1 "dEQP-GLES2.functional.shaders.conversions.m"
#define VkglTestCase_001278_2 "atrix_combine.int_ivec2_int_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001278, VkglTestCase_001278_1, VkglTestCase_001278_2);

#define VkglTestCase_001279_1 "dEQP-GLES2.functional.shaders.conversions.ma"
#define VkglTestCase_001279_2 "trix_combine.bool_float_ivec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001279, VkglTestCase_001279_1, VkglTestCase_001279_2);

#define VkglTestCase_001280_1 "dEQP-GLES2.functional.shaders.conversions.mat"
#define VkglTestCase_001280_2 "rix_combine.bool_float_ivec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001280, VkglTestCase_001280_1, VkglTestCase_001280_2);

#define VkglTestCase_001281_1 "dEQP-GLES2.functional.shaders.conversions.m"
#define VkglTestCase_001281_2 "atrix_combine.vec3_vec3_vec3_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001281, VkglTestCase_001281_1, VkglTestCase_001281_2);

#define VkglTestCase_001282_1 "dEQP-GLES2.functional.shaders.conversions.ma"
#define VkglTestCase_001282_2 "trix_combine.vec3_vec3_vec3_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001282, VkglTestCase_001282_1, VkglTestCase_001282_2);

#define VkglTestCase_001283_1 "dEQP-GLES2.functional.shaders.conversions.ma"
#define VkglTestCase_001283_2 "trix_combine.ivec3_ivec3_ivec3_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001283, VkglTestCase_001283_1, VkglTestCase_001283_2);

#define VkglTestCase_001284_1 "dEQP-GLES2.functional.shaders.conversions.mat"
#define VkglTestCase_001284_2 "rix_combine.ivec3_ivec3_ivec3_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001284, VkglTestCase_001284_1, VkglTestCase_001284_2);

#define VkglTestCase_001285_1 "dEQP-GLES2.functional.shaders.conversions.matrix_combi"
#define VkglTestCase_001285_2 "ne.vec2_ivec2_float_float_int_bool_bool_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001285, VkglTestCase_001285_1, VkglTestCase_001285_2);

#define VkglTestCase_001286_1 "dEQP-GLES2.functional.shaders.conversions.matrix_combin"
#define VkglTestCase_001286_2 "e.vec2_ivec2_float_float_int_bool_bool_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001286, VkglTestCase_001286_1, VkglTestCase_001286_2);

#define VkglTestCase_001287_1 "dEQP-GLES2.functional.shaders.conversions.matrix_combi"
#define VkglTestCase_001287_2 "ne.bool_float_int_vec2_bool_bvec2_float_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001287, VkglTestCase_001287_1, VkglTestCase_001287_2);

#define VkglTestCase_001288_1 "dEQP-GLES2.functional.shaders.conversions.matrix_combin"
#define VkglTestCase_001288_2 "e.bool_float_int_vec2_bool_bvec2_float_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001288, VkglTestCase_001288_1, VkglTestCase_001288_2);

#define VkglTestCase_001289_1 "dEQP-GLES2.functional.shaders.conversions.matrix"
#define VkglTestCase_001289_2 "_combine.bool_bvec2_int_vec4_bool_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001289, VkglTestCase_001289_1, VkglTestCase_001289_2);

#define VkglTestCase_001290_1 "dEQP-GLES2.functional.shaders.conversions.matrix_"
#define VkglTestCase_001290_2 "combine.bool_bvec2_int_vec4_bool_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001290, VkglTestCase_001290_1, VkglTestCase_001290_2);

#define VkglTestCase_001291_1 "dEQP-GLES2.functional.shaders.conversions.matrix_"
#define VkglTestCase_001291_2 "combine.float_bvec4_ivec2_bool_bool_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001291, VkglTestCase_001291_1, VkglTestCase_001291_2);

#define VkglTestCase_001292_1 "dEQP-GLES2.functional.shaders.conversions.matrix_c"
#define VkglTestCase_001292_2 "ombine.float_bvec4_ivec2_bool_bool_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001292, VkglTestCase_001292_1, VkglTestCase_001292_2);

#define VkglTestCase_001293_1 "dEQP-GLES2.functional.shaders.conversions.mat"
#define VkglTestCase_001293_2 "rix_combine.vec4_vec4_vec4_vec4_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001293, VkglTestCase_001293_1, VkglTestCase_001293_2);

#define VkglTestCase_001294_1 "dEQP-GLES2.functional.shaders.conversions.matr"
#define VkglTestCase_001294_2 "ix_combine.vec4_vec4_vec4_vec4_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001294, VkglTestCase_001294_1, VkglTestCase_001294_2);

#define VkglTestCase_001295_1 "dEQP-GLES2.functional.shaders.conversions.matri"
#define VkglTestCase_001295_2 "x_combine.ivec4_ivec4_ivec4_ivec4_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001295, VkglTestCase_001295_1, VkglTestCase_001295_2);

#define VkglTestCase_001296_1 "dEQP-GLES2.functional.shaders.conversions.matrix"
#define VkglTestCase_001296_2 "_combine.ivec4_ivec4_ivec4_ivec4_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001296, VkglTestCase_001296_1, VkglTestCase_001296_2);

#define VkglTestCase_001297_1 "dEQP-GLES2.functional.shaders.conversions.matri"
#define VkglTestCase_001297_2 "x_combine.bvec4_bvec4_bvec4_bvec4_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001297, VkglTestCase_001297_1, VkglTestCase_001297_2);

#define VkglTestCase_001298_1 "dEQP-GLES2.functional.shaders.conversions.matrix"
#define VkglTestCase_001298_2 "_combine.bvec4_bvec4_bvec4_bvec4_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001298, VkglTestCase_001298_1, VkglTestCase_001298_2);

#define VkglTestCase_001299_1 "dEQP-GLES2.functional.shaders.conversions.matrix_combin"
#define VkglTestCase_001299_2 "e.float_ivec3_bvec3_vec4_ivec2_float_vec2_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001299, VkglTestCase_001299_1, VkglTestCase_001299_2);

#define VkglTestCase_001300_1 "dEQP-GLES2.functional.shaders.conversions.matrix_combine"
#define VkglTestCase_001300_2 ".float_ivec3_bvec3_vec4_ivec2_float_vec2_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001300, VkglTestCase_001300_1, VkglTestCase_001300_2);
