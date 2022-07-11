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

#define VkglTestCase_016068_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016068_2 ".pre_decrement.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016068, VkglTestCase_016068_1, VkglTestCase_016068_2);

#define VkglTestCase_016069_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016069_2 "pre_decrement.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016069, VkglTestCase_016069_1, VkglTestCase_016069_2);

#define VkglTestCase_016070_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016070_2 "re_decrement.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016070, VkglTestCase_016070_1, VkglTestCase_016070_2);

#define VkglTestCase_016071_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016071_2 "e_decrement.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016071, VkglTestCase_016071_1, VkglTestCase_016071_2);

#define VkglTestCase_016072_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016072_2 "pre_decrement.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016072, VkglTestCase_016072_1, VkglTestCase_016072_2);

#define VkglTestCase_016073_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016073_2 "re_decrement.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016073, VkglTestCase_016073_1, VkglTestCase_016073_2);

#define VkglTestCase_016074_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016074_2 "pre_decrement.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016074, VkglTestCase_016074_1, VkglTestCase_016074_2);

#define VkglTestCase_016075_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016075_2 "re_decrement.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016075, VkglTestCase_016075_1, VkglTestCase_016075_2);

#define VkglTestCase_016076_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016076_2 "e_decrement.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016076, VkglTestCase_016076_1, VkglTestCase_016076_2);

#define VkglTestCase_016077_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016077_2 "_decrement.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016077, VkglTestCase_016077_1, VkglTestCase_016077_2);

#define VkglTestCase_016078_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016078_2 "re_decrement.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016078, VkglTestCase_016078_1, VkglTestCase_016078_2);

#define VkglTestCase_016079_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016079_2 "e_decrement.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016079, VkglTestCase_016079_1, VkglTestCase_016079_2);

#define VkglTestCase_016080_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016080_2 "pre_decrement.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016080, VkglTestCase_016080_1, VkglTestCase_016080_2);

#define VkglTestCase_016081_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016081_2 "re_decrement.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016081, VkglTestCase_016081_1, VkglTestCase_016081_2);

#define VkglTestCase_016082_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016082_2 "e_decrement.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016082, VkglTestCase_016082_1, VkglTestCase_016082_2);

#define VkglTestCase_016083_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016083_2 "_decrement.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016083, VkglTestCase_016083_1, VkglTestCase_016083_2);

#define VkglTestCase_016084_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016084_2 "re_decrement.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016084, VkglTestCase_016084_1, VkglTestCase_016084_2);

#define VkglTestCase_016085_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016085_2 "e_decrement.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016085, VkglTestCase_016085_1, VkglTestCase_016085_2);

#define VkglTestCase_016086_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016086_2 "pre_decrement.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016086, VkglTestCase_016086_1, VkglTestCase_016086_2);

#define VkglTestCase_016087_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016087_2 "re_decrement.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016087, VkglTestCase_016087_1, VkglTestCase_016087_2);

#define VkglTestCase_016088_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016088_2 "e_decrement.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016088, VkglTestCase_016088_1, VkglTestCase_016088_2);

#define VkglTestCase_016089_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016089_2 "_decrement.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016089, VkglTestCase_016089_1, VkglTestCase_016089_2);

#define VkglTestCase_016090_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016090_2 "re_decrement.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016090, VkglTestCase_016090_1, VkglTestCase_016090_2);

#define VkglTestCase_016091_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016091_2 "e_decrement.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016091, VkglTestCase_016091_1, VkglTestCase_016091_2);

#define VkglTestCase_016092_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016092_2 ".pre_decrement.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016092, VkglTestCase_016092_1, VkglTestCase_016092_2);

#define VkglTestCase_016093_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016093_2 "pre_decrement.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016093, VkglTestCase_016093_1, VkglTestCase_016093_2);

#define VkglTestCase_016094_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016094_2 "re_decrement.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016094, VkglTestCase_016094_1, VkglTestCase_016094_2);

#define VkglTestCase_016095_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016095_2 "e_decrement.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016095, VkglTestCase_016095_1, VkglTestCase_016095_2);

#define VkglTestCase_016096_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016096_2 "pre_decrement.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016096, VkglTestCase_016096_1, VkglTestCase_016096_2);

#define VkglTestCase_016097_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016097_2 "re_decrement.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016097, VkglTestCase_016097_1, VkglTestCase_016097_2);

#define VkglTestCase_016098_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016098_2 "pre_decrement.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016098, VkglTestCase_016098_1, VkglTestCase_016098_2);

#define VkglTestCase_016099_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016099_2 "re_decrement.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016099, VkglTestCase_016099_1, VkglTestCase_016099_2);

#define VkglTestCase_016100_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016100_2 "e_decrement.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016100, VkglTestCase_016100_1, VkglTestCase_016100_2);

#define VkglTestCase_016101_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016101_2 "_decrement.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016101, VkglTestCase_016101_1, VkglTestCase_016101_2);

#define VkglTestCase_016102_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016102_2 "re_decrement.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016102, VkglTestCase_016102_1, VkglTestCase_016102_2);

#define VkglTestCase_016103_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016103_2 "e_decrement.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016103, VkglTestCase_016103_1, VkglTestCase_016103_2);

#define VkglTestCase_016104_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016104_2 "pre_decrement.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016104, VkglTestCase_016104_1, VkglTestCase_016104_2);

#define VkglTestCase_016105_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016105_2 "re_decrement.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016105, VkglTestCase_016105_1, VkglTestCase_016105_2);

#define VkglTestCase_016106_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016106_2 "e_decrement.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016106, VkglTestCase_016106_1, VkglTestCase_016106_2);

#define VkglTestCase_016107_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016107_2 "_decrement.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016107, VkglTestCase_016107_1, VkglTestCase_016107_2);

#define VkglTestCase_016108_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016108_2 "re_decrement.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016108, VkglTestCase_016108_1, VkglTestCase_016108_2);

#define VkglTestCase_016109_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016109_2 "e_decrement.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016109, VkglTestCase_016109_1, VkglTestCase_016109_2);

#define VkglTestCase_016110_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016110_2 "pre_decrement.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016110, VkglTestCase_016110_1, VkglTestCase_016110_2);

#define VkglTestCase_016111_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016111_2 "re_decrement.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016111, VkglTestCase_016111_1, VkglTestCase_016111_2);

#define VkglTestCase_016112_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016112_2 "e_decrement.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016112, VkglTestCase_016112_1, VkglTestCase_016112_2);

#define VkglTestCase_016113_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016113_2 "_decrement.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016113, VkglTestCase_016113_1, VkglTestCase_016113_2);

#define VkglTestCase_016114_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016114_2 "re_decrement.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016114, VkglTestCase_016114_1, VkglTestCase_016114_2);

#define VkglTestCase_016115_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016115_2 "e_decrement.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016115, VkglTestCase_016115_1, VkglTestCase_016115_2);

#define VkglTestCase_016116_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016116_2 ".pre_decrement.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016116, VkglTestCase_016116_1, VkglTestCase_016116_2);

#define VkglTestCase_016117_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016117_2 "pre_decrement.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016117, VkglTestCase_016117_1, VkglTestCase_016117_2);

#define VkglTestCase_016118_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016118_2 "re_decrement.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016118, VkglTestCase_016118_1, VkglTestCase_016118_2);

#define VkglTestCase_016119_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016119_2 "e_decrement.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016119, VkglTestCase_016119_1, VkglTestCase_016119_2);

#define VkglTestCase_016120_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016120_2 "pre_decrement.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016120, VkglTestCase_016120_1, VkglTestCase_016120_2);

#define VkglTestCase_016121_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016121_2 "re_decrement.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016121, VkglTestCase_016121_1, VkglTestCase_016121_2);
