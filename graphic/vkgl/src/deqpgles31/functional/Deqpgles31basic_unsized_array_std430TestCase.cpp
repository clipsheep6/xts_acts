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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009117_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009117_2 "t.basic_unsized_array.std430.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009117, VkglTestCase_009117_1, VkglTestCase_009117_2);

#define VkglTestCase_009118_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009118_2 "t.basic_unsized_array.std430.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009118, VkglTestCase_009118_1, VkglTestCase_009118_2);

#define VkglTestCase_009119_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009119_2 "t.basic_unsized_array.std430.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009119, VkglTestCase_009119_1, VkglTestCase_009119_2);

#define VkglTestCase_009120_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009120_2 "t.basic_unsized_array.std430.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009120, VkglTestCase_009120_1, VkglTestCase_009120_2);

#define VkglTestCase_009121_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_009121_2 "ut.basic_unsized_array.std430.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009121, VkglTestCase_009121_1, VkglTestCase_009121_2);

#define VkglTestCase_009122_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009122_2 "t.basic_unsized_array.std430.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009122, VkglTestCase_009122_1, VkglTestCase_009122_2);

#define VkglTestCase_009123_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009123_2 "t.basic_unsized_array.std430.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009123, VkglTestCase_009123_1, VkglTestCase_009123_2);

#define VkglTestCase_009124_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009124_2 "t.basic_unsized_array.std430.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009124, VkglTestCase_009124_1, VkglTestCase_009124_2);

#define VkglTestCase_009125_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009125_2 "t.basic_unsized_array.std430.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009125, VkglTestCase_009125_1, VkglTestCase_009125_2);

#define VkglTestCase_009126_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009126_2 "t.basic_unsized_array.std430.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009126, VkglTestCase_009126_1, VkglTestCase_009126_2);

#define VkglTestCase_009127_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009127_2 "t.basic_unsized_array.std430.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009127, VkglTestCase_009127_1, VkglTestCase_009127_2);

#define VkglTestCase_009128_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009128_2 "t.basic_unsized_array.std430.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009128, VkglTestCase_009128_1, VkglTestCase_009128_2);

#define VkglTestCase_009129_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009129_2 "t.basic_unsized_array.std430.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009129, VkglTestCase_009129_1, VkglTestCase_009129_2);

#define VkglTestCase_009130_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009130_2 "t.basic_unsized_array.std430.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009130, VkglTestCase_009130_1, VkglTestCase_009130_2);

#define VkglTestCase_009131_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009131_2 "t.basic_unsized_array.std430.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009131, VkglTestCase_009131_1, VkglTestCase_009131_2);

#define VkglTestCase_009132_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009132_2 "t.basic_unsized_array.std430.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009132, VkglTestCase_009132_1, VkglTestCase_009132_2);

#define VkglTestCase_009133_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009133_2 "t.basic_unsized_array.std430.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009133, VkglTestCase_009133_1, VkglTestCase_009133_2);

#define VkglTestCase_009134_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009134_2 "ic_unsized_array.std430.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009134, VkglTestCase_009134_1, VkglTestCase_009134_2);

#define VkglTestCase_009135_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009135_2 "c_unsized_array.std430.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009135, VkglTestCase_009135_1, VkglTestCase_009135_2);

#define VkglTestCase_009136_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009136_2 "t.basic_unsized_array.std430.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009136, VkglTestCase_009136_1, VkglTestCase_009136_2);

#define VkglTestCase_009137_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009137_2 "ic_unsized_array.std430.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009137, VkglTestCase_009137_1, VkglTestCase_009137_2);

#define VkglTestCase_009138_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009138_2 "c_unsized_array.std430.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009138, VkglTestCase_009138_1, VkglTestCase_009138_2);

#define VkglTestCase_009139_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009139_2 "t.basic_unsized_array.std430.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009139, VkglTestCase_009139_1, VkglTestCase_009139_2);

#define VkglTestCase_009140_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009140_2 "ic_unsized_array.std430.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009140, VkglTestCase_009140_1, VkglTestCase_009140_2);

#define VkglTestCase_009141_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009141_2 "c_unsized_array.std430.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009141, VkglTestCase_009141_1, VkglTestCase_009141_2);

#define VkglTestCase_009142_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009142_2 ".basic_unsized_array.std430.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009142, VkglTestCase_009142_1, VkglTestCase_009142_2);

#define VkglTestCase_009143_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009143_2 "c_unsized_array.std430.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009143, VkglTestCase_009143_1, VkglTestCase_009143_2);

#define VkglTestCase_009144_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009144_2 "_unsized_array.std430.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009144, VkglTestCase_009144_1, VkglTestCase_009144_2);

#define VkglTestCase_009145_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009145_2 ".basic_unsized_array.std430.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009145, VkglTestCase_009145_1, VkglTestCase_009145_2);

#define VkglTestCase_009146_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009146_2 "c_unsized_array.std430.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009146, VkglTestCase_009146_1, VkglTestCase_009146_2);

#define VkglTestCase_009147_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009147_2 "_unsized_array.std430.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009147, VkglTestCase_009147_1, VkglTestCase_009147_2);

#define VkglTestCase_009148_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009148_2 ".basic_unsized_array.std430.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009148, VkglTestCase_009148_1, VkglTestCase_009148_2);

#define VkglTestCase_009149_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009149_2 "c_unsized_array.std430.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009149, VkglTestCase_009149_1, VkglTestCase_009149_2);

#define VkglTestCase_009150_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009150_2 "_unsized_array.std430.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009150, VkglTestCase_009150_1, VkglTestCase_009150_2);

#define VkglTestCase_009151_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009151_2 ".basic_unsized_array.std430.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009151, VkglTestCase_009151_1, VkglTestCase_009151_2);

#define VkglTestCase_009152_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009152_2 "c_unsized_array.std430.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009152, VkglTestCase_009152_1, VkglTestCase_009152_2);

#define VkglTestCase_009153_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009153_2 "_unsized_array.std430.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009153, VkglTestCase_009153_1, VkglTestCase_009153_2);

#define VkglTestCase_009154_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009154_2 ".basic_unsized_array.std430.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009154, VkglTestCase_009154_1, VkglTestCase_009154_2);

#define VkglTestCase_009155_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009155_2 "c_unsized_array.std430.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009155, VkglTestCase_009155_1, VkglTestCase_009155_2);

#define VkglTestCase_009156_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009156_2 "_unsized_array.std430.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009156, VkglTestCase_009156_1, VkglTestCase_009156_2);

#define VkglTestCase_009157_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009157_2 ".basic_unsized_array.std430.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009157, VkglTestCase_009157_1, VkglTestCase_009157_2);

#define VkglTestCase_009158_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009158_2 "c_unsized_array.std430.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009158, VkglTestCase_009158_1, VkglTestCase_009158_2);

#define VkglTestCase_009159_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009159_2 "_unsized_array.std430.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009159, VkglTestCase_009159_1, VkglTestCase_009159_2);
