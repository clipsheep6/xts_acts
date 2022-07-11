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
#include "../ActsDeqpgles30010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009104_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009104_2 "nary_operator.bitwise_xor.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009104, VkglTestCase_009104_1, VkglTestCase_009104_2);

#define VkglTestCase_009105_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009105_2 "ary_operator.bitwise_xor.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009105, VkglTestCase_009105_1, VkglTestCase_009105_2);

#define VkglTestCase_009106_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009106_2 "ary_operator.bitwise_xor.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009106, VkglTestCase_009106_1, VkglTestCase_009106_2);

#define VkglTestCase_009107_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009107_2 "ry_operator.bitwise_xor.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009107, VkglTestCase_009107_1, VkglTestCase_009107_2);

#define VkglTestCase_009108_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009108_2 "ary_operator.bitwise_xor.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009108, VkglTestCase_009108_1, VkglTestCase_009108_2);

#define VkglTestCase_009109_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009109_2 "ry_operator.bitwise_xor.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009109, VkglTestCase_009109_1, VkglTestCase_009109_2);

#define VkglTestCase_009110_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009110_2 "ry_operator.bitwise_xor.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009110, VkglTestCase_009110_1, VkglTestCase_009110_2);

#define VkglTestCase_009111_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009111_2 "y_operator.bitwise_xor.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009111, VkglTestCase_009111_1, VkglTestCase_009111_2);

#define VkglTestCase_009112_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009112_2 "ary_operator.bitwise_xor.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009112, VkglTestCase_009112_1, VkglTestCase_009112_2);

#define VkglTestCase_009113_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009113_2 "ry_operator.bitwise_xor.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009113, VkglTestCase_009113_1, VkglTestCase_009113_2);

#define VkglTestCase_009114_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009114_2 "ry_operator.bitwise_xor.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009114, VkglTestCase_009114_1, VkglTestCase_009114_2);

#define VkglTestCase_009115_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009115_2 "y_operator.bitwise_xor.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009115, VkglTestCase_009115_1, VkglTestCase_009115_2);

#define VkglTestCase_009116_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009116_2 "ary_operator.bitwise_xor.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009116, VkglTestCase_009116_1, VkglTestCase_009116_2);

#define VkglTestCase_009117_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009117_2 "ry_operator.bitwise_xor.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009117, VkglTestCase_009117_1, VkglTestCase_009117_2);

#define VkglTestCase_009118_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009118_2 "ry_operator.bitwise_xor.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009118, VkglTestCase_009118_1, VkglTestCase_009118_2);

#define VkglTestCase_009119_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009119_2 "y_operator.bitwise_xor.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009119, VkglTestCase_009119_1, VkglTestCase_009119_2);

#define VkglTestCase_009120_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009120_2 "nary_operator.bitwise_xor.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009120, VkglTestCase_009120_1, VkglTestCase_009120_2);

#define VkglTestCase_009121_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009121_2 "ary_operator.bitwise_xor.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009121, VkglTestCase_009121_1, VkglTestCase_009121_2);

#define VkglTestCase_009122_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009122_2 "ary_operator.bitwise_xor.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009122, VkglTestCase_009122_1, VkglTestCase_009122_2);

#define VkglTestCase_009123_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009123_2 "ry_operator.bitwise_xor.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009123, VkglTestCase_009123_1, VkglTestCase_009123_2);

#define VkglTestCase_009124_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009124_2 "ary_operator.bitwise_xor.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009124, VkglTestCase_009124_1, VkglTestCase_009124_2);

#define VkglTestCase_009125_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009125_2 "ry_operator.bitwise_xor.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009125, VkglTestCase_009125_1, VkglTestCase_009125_2);

#define VkglTestCase_009126_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009126_2 "ary_operator.bitwise_xor.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009126, VkglTestCase_009126_1, VkglTestCase_009126_2);

#define VkglTestCase_009127_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009127_2 "ry_operator.bitwise_xor.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009127, VkglTestCase_009127_1, VkglTestCase_009127_2);

#define VkglTestCase_009128_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009128_2 "nary_operator.bitwise_xor.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009128, VkglTestCase_009128_1, VkglTestCase_009128_2);

#define VkglTestCase_009129_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009129_2 "ary_operator.bitwise_xor.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009129, VkglTestCase_009129_1, VkglTestCase_009129_2);

#define VkglTestCase_009130_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009130_2 "ry_operator.bitwise_xor.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009130, VkglTestCase_009130_1, VkglTestCase_009130_2);

#define VkglTestCase_009131_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009131_2 "y_operator.bitwise_xor.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009131, VkglTestCase_009131_1, VkglTestCase_009131_2);

#define VkglTestCase_009132_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009132_2 "ary_operator.bitwise_xor.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009132, VkglTestCase_009132_1, VkglTestCase_009132_2);

#define VkglTestCase_009133_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009133_2 "ry_operator.bitwise_xor.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009133, VkglTestCase_009133_1, VkglTestCase_009133_2);

#define VkglTestCase_009134_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009134_2 "ry_operator.bitwise_xor.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009134, VkglTestCase_009134_1, VkglTestCase_009134_2);

#define VkglTestCase_009135_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009135_2 "y_operator.bitwise_xor.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009135, VkglTestCase_009135_1, VkglTestCase_009135_2);

#define VkglTestCase_009136_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009136_2 "ary_operator.bitwise_xor.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009136, VkglTestCase_009136_1, VkglTestCase_009136_2);

#define VkglTestCase_009137_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009137_2 "ry_operator.bitwise_xor.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009137, VkglTestCase_009137_1, VkglTestCase_009137_2);

#define VkglTestCase_009138_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009138_2 "ry_operator.bitwise_xor.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009138, VkglTestCase_009138_1, VkglTestCase_009138_2);

#define VkglTestCase_009139_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009139_2 "y_operator.bitwise_xor.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009139, VkglTestCase_009139_1, VkglTestCase_009139_2);

#define VkglTestCase_009140_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009140_2 "ary_operator.bitwise_xor.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009140, VkglTestCase_009140_1, VkglTestCase_009140_2);

#define VkglTestCase_009141_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009141_2 "ry_operator.bitwise_xor.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009141, VkglTestCase_009141_1, VkglTestCase_009141_2);

#define VkglTestCase_009142_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009142_2 "ry_operator.bitwise_xor.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009142, VkglTestCase_009142_1, VkglTestCase_009142_2);

#define VkglTestCase_009143_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009143_2 "y_operator.bitwise_xor.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009143, VkglTestCase_009143_1, VkglTestCase_009143_2);

#define VkglTestCase_009144_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009144_2 "ary_operator.bitwise_xor.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009144, VkglTestCase_009144_1, VkglTestCase_009144_2);

#define VkglTestCase_009145_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009145_2 "ry_operator.bitwise_xor.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009145, VkglTestCase_009145_1, VkglTestCase_009145_2);

#define VkglTestCase_009146_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009146_2 "ary_operator.bitwise_xor.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009146, VkglTestCase_009146_1, VkglTestCase_009146_2);

#define VkglTestCase_009147_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009147_2 "ry_operator.bitwise_xor.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009147, VkglTestCase_009147_1, VkglTestCase_009147_2);

#define VkglTestCase_009148_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009148_2 "ary_operator.bitwise_xor.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009148, VkglTestCase_009148_1, VkglTestCase_009148_2);

#define VkglTestCase_009149_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009149_2 "ry_operator.bitwise_xor.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009149, VkglTestCase_009149_1, VkglTestCase_009149_2);

#define VkglTestCase_009150_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009150_2 "ary_operator.bitwise_xor.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009150, VkglTestCase_009150_1, VkglTestCase_009150_2);

#define VkglTestCase_009151_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009151_2 "ry_operator.bitwise_xor.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009151, VkglTestCase_009151_1, VkglTestCase_009151_2);

#define VkglTestCase_009152_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009152_2 "y_operator.bitwise_xor.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009152, VkglTestCase_009152_1, VkglTestCase_009152_2);

#define VkglTestCase_009153_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009153_2 "_operator.bitwise_xor.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009153, VkglTestCase_009153_1, VkglTestCase_009153_2);

#define VkglTestCase_009154_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009154_2 "_operator.bitwise_xor.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009154, VkglTestCase_009154_1, VkglTestCase_009154_2);

#define VkglTestCase_009155_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009155_2 "operator.bitwise_xor.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009155, VkglTestCase_009155_1, VkglTestCase_009155_2);

#define VkglTestCase_009156_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009156_2 "y_operator.bitwise_xor.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009156, VkglTestCase_009156_1, VkglTestCase_009156_2);

#define VkglTestCase_009157_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009157_2 "_operator.bitwise_xor.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009157, VkglTestCase_009157_1, VkglTestCase_009157_2);

#define VkglTestCase_009158_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009158_2 "_operator.bitwise_xor.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009158, VkglTestCase_009158_1, VkglTestCase_009158_2);

#define VkglTestCase_009159_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009159_2 "operator.bitwise_xor.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009159, VkglTestCase_009159_1, VkglTestCase_009159_2);

#define VkglTestCase_009160_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009160_2 "y_operator.bitwise_xor.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009160, VkglTestCase_009160_1, VkglTestCase_009160_2);

#define VkglTestCase_009161_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009161_2 "_operator.bitwise_xor.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009161, VkglTestCase_009161_1, VkglTestCase_009161_2);

#define VkglTestCase_009162_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009162_2 "_operator.bitwise_xor.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009162, VkglTestCase_009162_1, VkglTestCase_009162_2);

#define VkglTestCase_009163_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009163_2 "operator.bitwise_xor.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009163, VkglTestCase_009163_1, VkglTestCase_009163_2);

#define VkglTestCase_009164_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009164_2 "y_operator.bitwise_xor.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009164, VkglTestCase_009164_1, VkglTestCase_009164_2);

#define VkglTestCase_009165_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009165_2 "_operator.bitwise_xor.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009165, VkglTestCase_009165_1, VkglTestCase_009165_2);

#define VkglTestCase_009166_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009166_2 "y_operator.bitwise_xor.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009166, VkglTestCase_009166_1, VkglTestCase_009166_2);

#define VkglTestCase_009167_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009167_2 "_operator.bitwise_xor.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009167, VkglTestCase_009167_1, VkglTestCase_009167_2);

#define VkglTestCase_009168_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009168_2 "y_operator.bitwise_xor.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009168, VkglTestCase_009168_1, VkglTestCase_009168_2);

#define VkglTestCase_009169_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009169_2 "_operator.bitwise_xor.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009169, VkglTestCase_009169_1, VkglTestCase_009169_2);

#define VkglTestCase_009170_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009170_2 "y_operator.bitwise_xor.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009170, VkglTestCase_009170_1, VkglTestCase_009170_2);

#define VkglTestCase_009171_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009171_2 "_operator.bitwise_xor.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009171, VkglTestCase_009171_1, VkglTestCase_009171_2);

#define VkglTestCase_009172_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009172_2 "operator.bitwise_xor.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009172, VkglTestCase_009172_1, VkglTestCase_009172_2);

#define VkglTestCase_009173_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009173_2 "perator.bitwise_xor.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009173, VkglTestCase_009173_1, VkglTestCase_009173_2);

#define VkglTestCase_009174_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009174_2 "y_operator.bitwise_xor.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009174, VkglTestCase_009174_1, VkglTestCase_009174_2);

#define VkglTestCase_009175_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009175_2 "_operator.bitwise_xor.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009175, VkglTestCase_009175_1, VkglTestCase_009175_2);

#define VkglTestCase_009176_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009176_2 "operator.bitwise_xor.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009176, VkglTestCase_009176_1, VkglTestCase_009176_2);

#define VkglTestCase_009177_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009177_2 "perator.bitwise_xor.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009177, VkglTestCase_009177_1, VkglTestCase_009177_2);

#define VkglTestCase_009178_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009178_2 "y_operator.bitwise_xor.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009178, VkglTestCase_009178_1, VkglTestCase_009178_2);

#define VkglTestCase_009179_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009179_2 "_operator.bitwise_xor.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009179, VkglTestCase_009179_1, VkglTestCase_009179_2);

#define VkglTestCase_009180_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009180_2 "operator.bitwise_xor.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009180, VkglTestCase_009180_1, VkglTestCase_009180_2);

#define VkglTestCase_009181_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009181_2 "perator.bitwise_xor.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009181, VkglTestCase_009181_1, VkglTestCase_009181_2);

#define VkglTestCase_009182_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009182_2 "_operator.bitwise_xor.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009182, VkglTestCase_009182_1, VkglTestCase_009182_2);

#define VkglTestCase_009183_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009183_2 "operator.bitwise_xor.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009183, VkglTestCase_009183_1, VkglTestCase_009183_2);

#define VkglTestCase_009184_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009184_2 "_operator.bitwise_xor.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009184, VkglTestCase_009184_1, VkglTestCase_009184_2);

#define VkglTestCase_009185_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009185_2 "operator.bitwise_xor.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009185, VkglTestCase_009185_1, VkglTestCase_009185_2);

#define VkglTestCase_009186_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009186_2 "_operator.bitwise_xor.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009186, VkglTestCase_009186_1, VkglTestCase_009186_2);

#define VkglTestCase_009187_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009187_2 "operator.bitwise_xor.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009187, VkglTestCase_009187_1, VkglTestCase_009187_2);

#define VkglTestCase_009188_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009188_2 "y_operator.bitwise_xor.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009188, VkglTestCase_009188_1, VkglTestCase_009188_2);

#define VkglTestCase_009189_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009189_2 "_operator.bitwise_xor.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009189, VkglTestCase_009189_1, VkglTestCase_009189_2);

#define VkglTestCase_009190_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009190_2 "_operator.bitwise_xor.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009190, VkglTestCase_009190_1, VkglTestCase_009190_2);

#define VkglTestCase_009191_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009191_2 "operator.bitwise_xor.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009191, VkglTestCase_009191_1, VkglTestCase_009191_2);

#define VkglTestCase_009192_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009192_2 "y_operator.bitwise_xor.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009192, VkglTestCase_009192_1, VkglTestCase_009192_2);

#define VkglTestCase_009193_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009193_2 "_operator.bitwise_xor.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009193, VkglTestCase_009193_1, VkglTestCase_009193_2);

#define VkglTestCase_009194_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009194_2 "_operator.bitwise_xor.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009194, VkglTestCase_009194_1, VkglTestCase_009194_2);

#define VkglTestCase_009195_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009195_2 "operator.bitwise_xor.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009195, VkglTestCase_009195_1, VkglTestCase_009195_2);

#define VkglTestCase_009196_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009196_2 "y_operator.bitwise_xor.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009196, VkglTestCase_009196_1, VkglTestCase_009196_2);

#define VkglTestCase_009197_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009197_2 "_operator.bitwise_xor.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009197, VkglTestCase_009197_1, VkglTestCase_009197_2);

#define VkglTestCase_009198_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009198_2 "_operator.bitwise_xor.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009198, VkglTestCase_009198_1, VkglTestCase_009198_2);

#define VkglTestCase_009199_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009199_2 "operator.bitwise_xor.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009199, VkglTestCase_009199_1, VkglTestCase_009199_2);

#define VkglTestCase_009200_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009200_2 "y_operator.bitwise_xor.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009200, VkglTestCase_009200_1, VkglTestCase_009200_2);

#define VkglTestCase_009201_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009201_2 "_operator.bitwise_xor.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009201, VkglTestCase_009201_1, VkglTestCase_009201_2);

#define VkglTestCase_009202_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009202_2 "y_operator.bitwise_xor.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009202, VkglTestCase_009202_1, VkglTestCase_009202_2);

#define VkglTestCase_009203_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009203_2 "_operator.bitwise_xor.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009203, VkglTestCase_009203_1, VkglTestCase_009203_2);

#define VkglTestCase_009204_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009204_2 "y_operator.bitwise_xor.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009204, VkglTestCase_009204_1, VkglTestCase_009204_2);

#define VkglTestCase_009205_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009205_2 "_operator.bitwise_xor.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009205, VkglTestCase_009205_1, VkglTestCase_009205_2);

#define VkglTestCase_009206_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009206_2 "y_operator.bitwise_xor.lowp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009206, VkglTestCase_009206_1, VkglTestCase_009206_2);

#define VkglTestCase_009207_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009207_2 "_operator.bitwise_xor.lowp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009207, VkglTestCase_009207_1, VkglTestCase_009207_2);

#define VkglTestCase_009208_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009208_2 "operator.bitwise_xor.mediump_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009208, VkglTestCase_009208_1, VkglTestCase_009208_2);

#define VkglTestCase_009209_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009209_2 "perator.bitwise_xor.mediump_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009209, VkglTestCase_009209_1, VkglTestCase_009209_2);

#define VkglTestCase_009210_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009210_2 "y_operator.bitwise_xor.lowp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009210, VkglTestCase_009210_1, VkglTestCase_009210_2);

#define VkglTestCase_009211_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009211_2 "_operator.bitwise_xor.lowp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009211, VkglTestCase_009211_1, VkglTestCase_009211_2);

#define VkglTestCase_009212_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009212_2 "operator.bitwise_xor.mediump_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009212, VkglTestCase_009212_1, VkglTestCase_009212_2);

#define VkglTestCase_009213_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009213_2 "perator.bitwise_xor.mediump_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009213, VkglTestCase_009213_1, VkglTestCase_009213_2);

#define VkglTestCase_009214_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009214_2 "y_operator.bitwise_xor.lowp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009214, VkglTestCase_009214_1, VkglTestCase_009214_2);

#define VkglTestCase_009215_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009215_2 "_operator.bitwise_xor.lowp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009215, VkglTestCase_009215_1, VkglTestCase_009215_2);

#define VkglTestCase_009216_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009216_2 "operator.bitwise_xor.mediump_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009216, VkglTestCase_009216_1, VkglTestCase_009216_2);

#define VkglTestCase_009217_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009217_2 "perator.bitwise_xor.mediump_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009217, VkglTestCase_009217_1, VkglTestCase_009217_2);

#define VkglTestCase_009218_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009218_2 "_operator.bitwise_xor.highp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009218, VkglTestCase_009218_1, VkglTestCase_009218_2);

#define VkglTestCase_009219_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009219_2 "operator.bitwise_xor.highp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009219, VkglTestCase_009219_1, VkglTestCase_009219_2);

#define VkglTestCase_009220_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009220_2 "_operator.bitwise_xor.highp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009220, VkglTestCase_009220_1, VkglTestCase_009220_2);

#define VkglTestCase_009221_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009221_2 "operator.bitwise_xor.highp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009221, VkglTestCase_009221_1, VkglTestCase_009221_2);

#define VkglTestCase_009222_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009222_2 "_operator.bitwise_xor.highp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009222, VkglTestCase_009222_1, VkglTestCase_009222_2);

#define VkglTestCase_009223_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009223_2 "operator.bitwise_xor.highp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009223, VkglTestCase_009223_1, VkglTestCase_009223_2);
