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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020379_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020379_2 "y.uniform.array_stride.block_array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020379, VkglTestCase_020379_1, VkglTestCase_020379_2);

#define VkglTestCase_020380_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020380_2 "ry.uniform.array_stride.block_array.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020380, VkglTestCase_020380_1, VkglTestCase_020380_2);

#define VkglTestCase_020381_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020381_2 "y.uniform.array_stride.block_array.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020381, VkglTestCase_020381_1, VkglTestCase_020381_2);

#define VkglTestCase_020382_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020382_2 "y.uniform.array_stride.block_array.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020382, VkglTestCase_020382_1, VkglTestCase_020382_2);

#define VkglTestCase_020383_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020383_2 "y.uniform.array_stride.block_array.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020383, VkglTestCase_020383_1, VkglTestCase_020383_2);

#define VkglTestCase_020384_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020384_2 "y.uniform.array_stride.block_array.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020384, VkglTestCase_020384_1, VkglTestCase_020384_2);

#define VkglTestCase_020950_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020950_2 "uery.uniform.offset.block_array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020950, VkglTestCase_020950_1, VkglTestCase_020950_2);

#define VkglTestCase_020951_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_020951_2 "query.uniform.offset.block_array.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020951, VkglTestCase_020951_1, VkglTestCase_020951_2);

#define VkglTestCase_020952_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020952_2 "uery.uniform.offset.block_array.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020952, VkglTestCase_020952_1, VkglTestCase_020952_2);

#define VkglTestCase_020953_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020953_2 "uery.uniform.offset.block_array.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020953, VkglTestCase_020953_1, VkglTestCase_020953_2);

#define VkglTestCase_020954_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020954_2 "uery.uniform.offset.block_array.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020954, VkglTestCase_020954_1, VkglTestCase_020954_2);

#define VkglTestCase_020955_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020955_2 "uery.uniform.offset.block_array.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020955, VkglTestCase_020955_1, VkglTestCase_020955_2);

#define VkglTestCase_021558_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021558_2 "query.uniform.type.block_array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021558, VkglTestCase_021558_1, VkglTestCase_021558_2);

#define VkglTestCase_021559_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_021559_2 "_query.uniform.type.block_array.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021559, VkglTestCase_021559_1, VkglTestCase_021559_2);

#define VkglTestCase_021560_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021560_2 "query.uniform.type.block_array.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021560, VkglTestCase_021560_1, VkglTestCase_021560_2);

#define VkglTestCase_021561_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021561_2 "query.uniform.type.block_array.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021561, VkglTestCase_021561_1, VkglTestCase_021561_2);

#define VkglTestCase_021562_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021562_2 "query.uniform.type.block_array.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021562, VkglTestCase_021562_1, VkglTestCase_021562_2);

#define VkglTestCase_021563_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021563_2 "query.uniform.type.block_array.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021563, VkglTestCase_021563_1, VkglTestCase_021563_2);

#define VkglTestCase_022215_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022215_2 "_input.type.interface_blocks.in.block_array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022215, VkglTestCase_022215_1, VkglTestCase_022215_2);

#define VkglTestCase_022216_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022216_2 "m_input.type.interface_blocks.in.block_array.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022216, VkglTestCase_022216_1, VkglTestCase_022216_2);

#define VkglTestCase_022217_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022217_2 "_input.type.interface_blocks.in.block_array.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022217, VkglTestCase_022217_1, VkglTestCase_022217_2);

#define VkglTestCase_022218_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022218_2 "_input.type.interface_blocks.in.block_array.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022218, VkglTestCase_022218_1, VkglTestCase_022218_2);

#define VkglTestCase_022219_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022219_2 "_input.type.interface_blocks.in.block_array.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022219, VkglTestCase_022219_1, VkglTestCase_022219_2);

#define VkglTestCase_022220_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022220_2 "_input.type.interface_blocks.in.block_array.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022220, VkglTestCase_022220_1, VkglTestCase_022220_2);

#define VkglTestCase_022221_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022221_2 "input.type.interface_blocks.in.block_array.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022221, VkglTestCase_022221_1, VkglTestCase_022221_2);

#define VkglTestCase_022299_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022299_2 "put.type.interface_blocks.patch_in.block_array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022299, VkglTestCase_022299_1, VkglTestCase_022299_2);

#define VkglTestCase_022300_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022300_2 "nput.type.interface_blocks.patch_in.block_array.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022300, VkglTestCase_022300_1, VkglTestCase_022300_2);

#define VkglTestCase_022301_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022301_2 "put.type.interface_blocks.patch_in.block_array.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022301, VkglTestCase_022301_1, VkglTestCase_022301_2);

#define VkglTestCase_022302_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022302_2 "put.type.interface_blocks.patch_in.block_array.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022302, VkglTestCase_022302_1, VkglTestCase_022302_2);

#define VkglTestCase_022303_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022303_2 "put.type.interface_blocks.patch_in.block_array.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022303, VkglTestCase_022303_1, VkglTestCase_022303_2);

#define VkglTestCase_022304_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022304_2 "put.type.interface_blocks.patch_in.block_array.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022304, VkglTestCase_022304_1, VkglTestCase_022304_2);

#define VkglTestCase_022305_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022305_2 "ut.type.interface_blocks.patch_in.block_array.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022305, VkglTestCase_022305_1, VkglTestCase_022305_2);

#define VkglTestCase_022857_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022857_2 "output.type.interface_blocks.out.block_array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022857, VkglTestCase_022857_1, VkglTestCase_022857_2);

#define VkglTestCase_022858_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022858_2 "_output.type.interface_blocks.out.block_array.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022858, VkglTestCase_022858_1, VkglTestCase_022858_2);

#define VkglTestCase_022859_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022859_2 "output.type.interface_blocks.out.block_array.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022859, VkglTestCase_022859_1, VkglTestCase_022859_2);

#define VkglTestCase_022860_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022860_2 "output.type.interface_blocks.out.block_array.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022860, VkglTestCase_022860_1, VkglTestCase_022860_2);

#define VkglTestCase_022861_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022861_2 "output.type.interface_blocks.out.block_array.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022861, VkglTestCase_022861_1, VkglTestCase_022861_2);

#define VkglTestCase_022862_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022862_2 "output.type.interface_blocks.out.block_array.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022862, VkglTestCase_022862_1, VkglTestCase_022862_2);

#define VkglTestCase_022863_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022863_2 "utput.type.interface_blocks.out.block_array.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022863, VkglTestCase_022863_1, VkglTestCase_022863_2);

#define VkglTestCase_022923_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022923_2 "put.type.interface_blocks.patch_out.block_array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022923, VkglTestCase_022923_1, VkglTestCase_022923_2);

#define VkglTestCase_022924_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022924_2 "put.type.interface_blocks.patch_out.block_array.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022924, VkglTestCase_022924_1, VkglTestCase_022924_2);

#define VkglTestCase_022925_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022925_2 "put.type.interface_blocks.patch_out.block_array.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022925, VkglTestCase_022925_1, VkglTestCase_022925_2);

#define VkglTestCase_022926_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022926_2 "ut.type.interface_blocks.patch_out.block_array.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022926, VkglTestCase_022926_1, VkglTestCase_022926_2);
