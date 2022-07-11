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

#define VkglTestCase_023585_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023585_2 "ffer_variable.array_size.block_array.unsized.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023585, VkglTestCase_023585_1, VkglTestCase_023585_2);

#define VkglTestCase_023586_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023586_2 "_variable.array_size.block_array.unsized.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023586, VkglTestCase_023586_1, VkglTestCase_023586_2);

#define VkglTestCase_023587_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023587_2 "r_variable.array_size.block_array.unsized.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023587, VkglTestCase_023587_1, VkglTestCase_023587_2);

#define VkglTestCase_023588_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023588_2 "ffer_variable.array_size.block_array.unsized.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023588, VkglTestCase_023588_1, VkglTestCase_023588_2);

#define VkglTestCase_023589_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023589_2 "ffer_variable.array_size.block_array.unsized.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023589, VkglTestCase_023589_1, VkglTestCase_023589_2);

#define VkglTestCase_023590_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023590_2 "_variable.array_size.block_array.unsized.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023590, VkglTestCase_023590_1, VkglTestCase_023590_2);

#define VkglTestCase_023591_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023591_2 "r_variable.array_size.block_array.unsized.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023591, VkglTestCase_023591_1, VkglTestCase_023591_2);

#define VkglTestCase_023592_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023592_2 "ffer_variable.array_size.block_array.unsized.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023592, VkglTestCase_023592_1, VkglTestCase_023592_2);

#define VkglTestCase_023593_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023593_2 "r_variable.array_size.block_array.unsized.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023593, VkglTestCase_023593_1, VkglTestCase_023593_2);

#define VkglTestCase_023594_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023594_2 "r_variable.array_size.block_array.unsized.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023594, VkglTestCase_023594_1, VkglTestCase_023594_2);

#define VkglTestCase_023595_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023595_2 "ffer_variable.array_size.block_array.unsized.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023595, VkglTestCase_023595_1, VkglTestCase_023595_2);

#define VkglTestCase_023596_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023596_2 "_variable.array_size.block_array.unsized.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023596, VkglTestCase_023596_1, VkglTestCase_023596_2);

#define VkglTestCase_023597_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023597_2 "r_variable.array_size.block_array.unsized.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023597, VkglTestCase_023597_1, VkglTestCase_023597_2);

#define VkglTestCase_023698_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023698_2 "fer_variable.array_stride.block_array.unsized.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023698, VkglTestCase_023698_1, VkglTestCase_023698_2);

#define VkglTestCase_023699_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023699_2 "variable.array_stride.block_array.unsized.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023699, VkglTestCase_023699_1, VkglTestCase_023699_2);

#define VkglTestCase_023700_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023700_2 "_variable.array_stride.block_array.unsized.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023700, VkglTestCase_023700_1, VkglTestCase_023700_2);

#define VkglTestCase_023701_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023701_2 "fer_variable.array_stride.block_array.unsized.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023701, VkglTestCase_023701_1, VkglTestCase_023701_2);

#define VkglTestCase_023702_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023702_2 "fer_variable.array_stride.block_array.unsized.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023702, VkglTestCase_023702_1, VkglTestCase_023702_2);

#define VkglTestCase_023703_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023703_2 "variable.array_stride.block_array.unsized.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023703, VkglTestCase_023703_1, VkglTestCase_023703_2);

#define VkglTestCase_023704_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023704_2 "_variable.array_stride.block_array.unsized.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023704, VkglTestCase_023704_1, VkglTestCase_023704_2);

#define VkglTestCase_023705_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023705_2 "fer_variable.array_stride.block_array.unsized.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023705, VkglTestCase_023705_1, VkglTestCase_023705_2);

#define VkglTestCase_023706_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023706_2 "_variable.array_stride.block_array.unsized.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023706, VkglTestCase_023706_1, VkglTestCase_023706_2);

#define VkglTestCase_023707_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023707_2 "_variable.array_stride.block_array.unsized.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023707, VkglTestCase_023707_1, VkglTestCase_023707_2);

#define VkglTestCase_023708_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023708_2 "fer_variable.array_stride.block_array.unsized.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023708, VkglTestCase_023708_1, VkglTestCase_023708_2);

#define VkglTestCase_023709_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023709_2 "variable.array_stride.block_array.unsized.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023709, VkglTestCase_023709_1, VkglTestCase_023709_2);

#define VkglTestCase_023710_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023710_2 "_variable.array_stride.block_array.unsized.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023710, VkglTestCase_023710_1, VkglTestCase_023710_2);

#define VkglTestCase_024083_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024083_2 "ffer_variable.name_length.block_array.unsized.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024083, VkglTestCase_024083_1, VkglTestCase_024083_2);

#define VkglTestCase_024084_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024084_2 "r_variable.name_length.block_array.unsized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024084, VkglTestCase_024084_1, VkglTestCase_024084_2);

#define VkglTestCase_024085_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024085_2 "riable.name_length.block_array.unsized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024085, VkglTestCase_024085_1, VkglTestCase_024085_2);

#define VkglTestCase_024086_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024086_2 "ariable.name_length.block_array.unsized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024086, VkglTestCase_024086_1, VkglTestCase_024086_2);

#define VkglTestCase_024087_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024087_2 "r_variable.name_length.block_array.unsized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024087, VkglTestCase_024087_1, VkglTestCase_024087_2);

#define VkglTestCase_024088_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024088_2 "ariable.name_length.block_array.unsized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024088, VkglTestCase_024088_1, VkglTestCase_024088_2);

#define VkglTestCase_024089_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024089_2 "ariable.name_length.block_array.unsized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024089, VkglTestCase_024089_1, VkglTestCase_024089_2);

#define VkglTestCase_024149_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024149_2 ".buffer_variable.offset.block_array.unsized.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024149, VkglTestCase_024149_1, VkglTestCase_024149_2);

#define VkglTestCase_024150_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_024150_2 "fer_variable.offset.block_array.unsized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024150, VkglTestCase_024150_1, VkglTestCase_024150_2);

#define VkglTestCase_024151_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024151_2 "_variable.offset.block_array.unsized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024151, VkglTestCase_024151_1, VkglTestCase_024151_2);

#define VkglTestCase_024152_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024152_2 "_variable.offset.block_array.unsized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024152, VkglTestCase_024152_1, VkglTestCase_024152_2);

#define VkglTestCase_024153_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024153_2 "ffer_variable.offset.block_array.unsized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024153, VkglTestCase_024153_1, VkglTestCase_024153_2);

#define VkglTestCase_024154_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024154_2 "_variable.offset.block_array.unsized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024154, VkglTestCase_024154_1, VkglTestCase_024154_2);

#define VkglTestCase_024155_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024155_2 "r_variable.offset.block_array.unsized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024155, VkglTestCase_024155_1, VkglTestCase_024155_2);
