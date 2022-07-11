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

#define VkglTestCase_023559_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023559_2 "fer_variable.array_size.unnamed_block.unsized.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023559, VkglTestCase_023559_1, VkglTestCase_023559_2);

#define VkglTestCase_023560_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023560_2 "variable.array_size.unnamed_block.unsized.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023560, VkglTestCase_023560_1, VkglTestCase_023560_2);

#define VkglTestCase_023561_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023561_2 "_variable.array_size.unnamed_block.unsized.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023561, VkglTestCase_023561_1, VkglTestCase_023561_2);

#define VkglTestCase_023562_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023562_2 "fer_variable.array_size.unnamed_block.unsized.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023562, VkglTestCase_023562_1, VkglTestCase_023562_2);

#define VkglTestCase_023563_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023563_2 "fer_variable.array_size.unnamed_block.unsized.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023563, VkglTestCase_023563_1, VkglTestCase_023563_2);

#define VkglTestCase_023564_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023564_2 "variable.array_size.unnamed_block.unsized.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023564, VkglTestCase_023564_1, VkglTestCase_023564_2);

#define VkglTestCase_023565_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023565_2 "_variable.array_size.unnamed_block.unsized.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023565, VkglTestCase_023565_1, VkglTestCase_023565_2);

#define VkglTestCase_023566_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023566_2 "fer_variable.array_size.unnamed_block.unsized.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023566, VkglTestCase_023566_1, VkglTestCase_023566_2);

#define VkglTestCase_023567_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023567_2 "_variable.array_size.unnamed_block.unsized.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023567, VkglTestCase_023567_1, VkglTestCase_023567_2);

#define VkglTestCase_023568_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023568_2 "_variable.array_size.unnamed_block.unsized.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023568, VkglTestCase_023568_1, VkglTestCase_023568_2);

#define VkglTestCase_023569_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023569_2 "fer_variable.array_size.unnamed_block.unsized.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023569, VkglTestCase_023569_1, VkglTestCase_023569_2);

#define VkglTestCase_023570_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023570_2 "variable.array_size.unnamed_block.unsized.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023570, VkglTestCase_023570_1, VkglTestCase_023570_2);

#define VkglTestCase_023571_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023571_2 "_variable.array_size.unnamed_block.unsized.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023571, VkglTestCase_023571_1, VkglTestCase_023571_2);

#define VkglTestCase_023672_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023672_2 "er_variable.array_stride.unnamed_block.unsized.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023672, VkglTestCase_023672_1, VkglTestCase_023672_2);

#define VkglTestCase_023673_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023673_2 "ariable.array_stride.unnamed_block.unsized.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023673, VkglTestCase_023673_1, VkglTestCase_023673_2);

#define VkglTestCase_023674_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023674_2 "variable.array_stride.unnamed_block.unsized.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023674, VkglTestCase_023674_1, VkglTestCase_023674_2);

#define VkglTestCase_023675_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023675_2 "er_variable.array_stride.unnamed_block.unsized.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023675, VkglTestCase_023675_1, VkglTestCase_023675_2);

#define VkglTestCase_023676_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023676_2 "er_variable.array_stride.unnamed_block.unsized.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023676, VkglTestCase_023676_1, VkglTestCase_023676_2);

#define VkglTestCase_023677_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023677_2 "ariable.array_stride.unnamed_block.unsized.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023677, VkglTestCase_023677_1, VkglTestCase_023677_2);

#define VkglTestCase_023678_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023678_2 "variable.array_stride.unnamed_block.unsized.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023678, VkglTestCase_023678_1, VkglTestCase_023678_2);

#define VkglTestCase_023679_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023679_2 "er_variable.array_stride.unnamed_block.unsized.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023679, VkglTestCase_023679_1, VkglTestCase_023679_2);

#define VkglTestCase_023680_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023680_2 "variable.array_stride.unnamed_block.unsized.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023680, VkglTestCase_023680_1, VkglTestCase_023680_2);

#define VkglTestCase_023681_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023681_2 "variable.array_stride.unnamed_block.unsized.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023681, VkglTestCase_023681_1, VkglTestCase_023681_2);

#define VkglTestCase_023682_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023682_2 "er_variable.array_stride.unnamed_block.unsized.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023682, VkglTestCase_023682_1, VkglTestCase_023682_2);

#define VkglTestCase_023683_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023683_2 "ariable.array_stride.unnamed_block.unsized.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023683, VkglTestCase_023683_1, VkglTestCase_023683_2);

#define VkglTestCase_023684_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023684_2 "variable.array_stride.unnamed_block.unsized.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023684, VkglTestCase_023684_1, VkglTestCase_023684_2);

#define VkglTestCase_024061_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_024061_2 "fer_variable.name_length.unnamed_block.unsized.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024061, VkglTestCase_024061_1, VkglTestCase_024061_2);

#define VkglTestCase_024062_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024062_2 "_variable.name_length.unnamed_block.unsized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024062, VkglTestCase_024062_1, VkglTestCase_024062_2);

#define VkglTestCase_024063_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024063_2 "iable.name_length.unnamed_block.unsized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024063, VkglTestCase_024063_1, VkglTestCase_024063_2);

#define VkglTestCase_024064_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024064_2 "riable.name_length.unnamed_block.unsized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024064, VkglTestCase_024064_1, VkglTestCase_024064_2);

#define VkglTestCase_024065_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024065_2 "_variable.name_length.unnamed_block.unsized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024065, VkglTestCase_024065_1, VkglTestCase_024065_2);

#define VkglTestCase_024066_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024066_2 "riable.name_length.unnamed_block.unsized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024066, VkglTestCase_024066_1, VkglTestCase_024066_2);

#define VkglTestCase_024067_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024067_2 "riable.name_length.unnamed_block.unsized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024067, VkglTestCase_024067_1, VkglTestCase_024067_2);

#define VkglTestCase_024127_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024127_2 "buffer_variable.offset.unnamed_block.unsized.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024127, VkglTestCase_024127_1, VkglTestCase_024127_2);

#define VkglTestCase_024128_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_024128_2 "er_variable.offset.unnamed_block.unsized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024128, VkglTestCase_024128_1, VkglTestCase_024128_2);

#define VkglTestCase_024129_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024129_2 "variable.offset.unnamed_block.unsized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024129, VkglTestCase_024129_1, VkglTestCase_024129_2);

#define VkglTestCase_024130_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024130_2 "variable.offset.unnamed_block.unsized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024130, VkglTestCase_024130_1, VkglTestCase_024130_2);

#define VkglTestCase_024131_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_024131_2 "fer_variable.offset.unnamed_block.unsized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024131, VkglTestCase_024131_1, VkglTestCase_024131_2);

#define VkglTestCase_024132_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024132_2 "variable.offset.unnamed_block.unsized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024132, VkglTestCase_024132_1, VkglTestCase_024132_2);

#define VkglTestCase_024133_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024133_2 "_variable.offset.unnamed_block.unsized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024133, VkglTestCase_024133_1, VkglTestCase_024133_2);
