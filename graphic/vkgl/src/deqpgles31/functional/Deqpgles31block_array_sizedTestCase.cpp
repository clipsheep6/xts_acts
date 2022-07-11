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
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023572_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_023572_2 "uffer_variable.array_size.block_array.sized.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023572, VkglTestCase_023572_1, VkglTestCase_023572_2);

#define VkglTestCase_023573_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023573_2 "r_variable.array_size.block_array.sized.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023573, VkglTestCase_023573_1, VkglTestCase_023573_2);

#define VkglTestCase_023574_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023574_2 "er_variable.array_size.block_array.sized.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023574, VkglTestCase_023574_1, VkglTestCase_023574_2);

#define VkglTestCase_023575_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_023575_2 "uffer_variable.array_size.block_array.sized.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023575, VkglTestCase_023575_1, VkglTestCase_023575_2);

#define VkglTestCase_023576_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_023576_2 "uffer_variable.array_size.block_array.sized.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023576, VkglTestCase_023576_1, VkglTestCase_023576_2);

#define VkglTestCase_023577_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023577_2 "r_variable.array_size.block_array.sized.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023577, VkglTestCase_023577_1, VkglTestCase_023577_2);

#define VkglTestCase_023578_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023578_2 "er_variable.array_size.block_array.sized.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023578, VkglTestCase_023578_1, VkglTestCase_023578_2);

#define VkglTestCase_023579_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_023579_2 "uffer_variable.array_size.block_array.sized.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023579, VkglTestCase_023579_1, VkglTestCase_023579_2);

#define VkglTestCase_023580_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023580_2 "er_variable.array_size.block_array.sized.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023580, VkglTestCase_023580_1, VkglTestCase_023580_2);

#define VkglTestCase_023581_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023581_2 "er_variable.array_size.block_array.sized.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023581, VkglTestCase_023581_1, VkglTestCase_023581_2);

#define VkglTestCase_023582_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_023582_2 "uffer_variable.array_size.block_array.sized.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023582, VkglTestCase_023582_1, VkglTestCase_023582_2);

#define VkglTestCase_023583_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023583_2 "r_variable.array_size.block_array.sized.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023583, VkglTestCase_023583_1, VkglTestCase_023583_2);

#define VkglTestCase_023584_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023584_2 "er_variable.array_size.block_array.sized.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023584, VkglTestCase_023584_1, VkglTestCase_023584_2);

#define VkglTestCase_023685_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023685_2 "ffer_variable.array_stride.block_array.sized.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023685, VkglTestCase_023685_1, VkglTestCase_023685_2);

#define VkglTestCase_023686_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023686_2 "_variable.array_stride.block_array.sized.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023686, VkglTestCase_023686_1, VkglTestCase_023686_2);

#define VkglTestCase_023687_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023687_2 "r_variable.array_stride.block_array.sized.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023687, VkglTestCase_023687_1, VkglTestCase_023687_2);

#define VkglTestCase_023688_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023688_2 "ffer_variable.array_stride.block_array.sized.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023688, VkglTestCase_023688_1, VkglTestCase_023688_2);

#define VkglTestCase_023689_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023689_2 "ffer_variable.array_stride.block_array.sized.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023689, VkglTestCase_023689_1, VkglTestCase_023689_2);

#define VkglTestCase_023690_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023690_2 "_variable.array_stride.block_array.sized.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023690, VkglTestCase_023690_1, VkglTestCase_023690_2);

#define VkglTestCase_023691_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023691_2 "r_variable.array_stride.block_array.sized.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023691, VkglTestCase_023691_1, VkglTestCase_023691_2);

#define VkglTestCase_023692_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023692_2 "ffer_variable.array_stride.block_array.sized.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023692, VkglTestCase_023692_1, VkglTestCase_023692_2);

#define VkglTestCase_023693_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023693_2 "r_variable.array_stride.block_array.sized.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023693, VkglTestCase_023693_1, VkglTestCase_023693_2);

#define VkglTestCase_023694_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023694_2 "r_variable.array_stride.block_array.sized.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023694, VkglTestCase_023694_1, VkglTestCase_023694_2);

#define VkglTestCase_023695_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023695_2 "ffer_variable.array_stride.block_array.sized.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023695, VkglTestCase_023695_1, VkglTestCase_023695_2);

#define VkglTestCase_023696_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023696_2 "_variable.array_stride.block_array.sized.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023696, VkglTestCase_023696_1, VkglTestCase_023696_2);

#define VkglTestCase_023697_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023697_2 "r_variable.array_stride.block_array.sized.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023697, VkglTestCase_023697_1, VkglTestCase_023697_2);

#define VkglTestCase_024068_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024068_2 "uffer_variable.name_length.block_array.sized.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024068, VkglTestCase_024068_1, VkglTestCase_024068_2);

#define VkglTestCase_024069_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_024069_2 "er_variable.name_length.block_array.sized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024069, VkglTestCase_024069_1, VkglTestCase_024069_2);

#define VkglTestCase_024070_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024070_2 "ariable.name_length.block_array.sized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024070, VkglTestCase_024070_1, VkglTestCase_024070_2);

#define VkglTestCase_024071_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024071_2 "able.name_length.block_array.sized.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024071, VkglTestCase_024071_1, VkglTestCase_024071_2);

#define VkglTestCase_024072_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024072_2 "able.name_length.block_array.sized.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024072, VkglTestCase_024072_1, VkglTestCase_024072_2);

#define VkglTestCase_024073_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024073_2 "variable.name_length.block_array.sized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024073, VkglTestCase_024073_1, VkglTestCase_024073_2);

#define VkglTestCase_024074_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024074_2 "able.name_length.block_array.sized.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024074, VkglTestCase_024074_1, VkglTestCase_024074_2);

#define VkglTestCase_024075_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024075_2 "iable.name_length.block_array.sized.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024075, VkglTestCase_024075_1, VkglTestCase_024075_2);

#define VkglTestCase_024076_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_024076_2 "er_variable.name_length.block_array.sized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024076, VkglTestCase_024076_1, VkglTestCase_024076_2);

#define VkglTestCase_024077_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024077_2 "variable.name_length.block_array.sized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024077, VkglTestCase_024077_1, VkglTestCase_024077_2);

#define VkglTestCase_024078_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024078_2 "able.name_length.block_array.sized.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024078, VkglTestCase_024078_1, VkglTestCase_024078_2);

#define VkglTestCase_024079_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024079_2 "iable.name_length.block_array.sized.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024079, VkglTestCase_024079_1, VkglTestCase_024079_2);

#define VkglTestCase_024080_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024080_2 "variable.name_length.block_array.sized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024080, VkglTestCase_024080_1, VkglTestCase_024080_2);

#define VkglTestCase_024081_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024081_2 "iable.name_length.block_array.sized.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024081, VkglTestCase_024081_1, VkglTestCase_024081_2);

#define VkglTestCase_024082_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024082_2 "iable.name_length.block_array.sized.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024082, VkglTestCase_024082_1, VkglTestCase_024082_2);

#define VkglTestCase_024134_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024134_2 "y.buffer_variable.offset.block_array.sized.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024134, VkglTestCase_024134_1, VkglTestCase_024134_2);

#define VkglTestCase_024135_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024135_2 "ffer_variable.offset.block_array.sized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024135, VkglTestCase_024135_1, VkglTestCase_024135_2);

#define VkglTestCase_024136_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024136_2 "r_variable.offset.block_array.sized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024136, VkglTestCase_024136_1, VkglTestCase_024136_2);

#define VkglTestCase_024137_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024137_2 "riable.offset.block_array.sized.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024137, VkglTestCase_024137_1, VkglTestCase_024137_2);

#define VkglTestCase_024138_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024138_2 "ariable.offset.block_array.sized.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024138, VkglTestCase_024138_1, VkglTestCase_024138_2);

#define VkglTestCase_024139_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024139_2 "r_variable.offset.block_array.sized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024139, VkglTestCase_024139_1, VkglTestCase_024139_2);

#define VkglTestCase_024140_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024140_2 "ariable.offset.block_array.sized.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024140, VkglTestCase_024140_1, VkglTestCase_024140_2);

#define VkglTestCase_024141_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024141_2 "ariable.offset.block_array.sized.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024141, VkglTestCase_024141_1, VkglTestCase_024141_2);

#define VkglTestCase_024142_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024142_2 "uffer_variable.offset.block_array.sized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024142, VkglTestCase_024142_1, VkglTestCase_024142_2);

#define VkglTestCase_024143_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024143_2 "r_variable.offset.block_array.sized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024143, VkglTestCase_024143_1, VkglTestCase_024143_2);

#define VkglTestCase_024144_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024144_2 "ariable.offset.block_array.sized.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024144, VkglTestCase_024144_1, VkglTestCase_024144_2);

#define VkglTestCase_024145_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024145_2 "ariable.offset.block_array.sized.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024145, VkglTestCase_024145_1, VkglTestCase_024145_2);

#define VkglTestCase_024146_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_024146_2 "er_variable.offset.block_array.sized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024146, VkglTestCase_024146_1, VkglTestCase_024146_2);

#define VkglTestCase_024147_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024147_2 "ariable.offset.block_array.sized.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024147, VkglTestCase_024147_1, VkglTestCase_024147_2);

#define VkglTestCase_024148_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024148_2 "variable.offset.block_array.sized.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024148, VkglTestCase_024148_1, VkglTestCase_024148_2);
