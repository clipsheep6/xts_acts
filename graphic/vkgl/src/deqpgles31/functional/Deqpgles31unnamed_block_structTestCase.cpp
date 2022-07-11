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

#define VkglTestCase_020367_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020367_2 "uniform.array_stride.unnamed_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020367, VkglTestCase_020367_1, VkglTestCase_020367_2);

#define VkglTestCase_020368_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020368_2 ".uniform.array_stride.unnamed_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020368, VkglTestCase_020368_1, VkglTestCase_020368_2);

#define VkglTestCase_020369_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020369_2 ".uniform.array_stride.unnamed_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020369, VkglTestCase_020369_1, VkglTestCase_020369_2);

#define VkglTestCase_020370_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020370_2 ".uniform.array_stride.unnamed_block.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020370, VkglTestCase_020370_1, VkglTestCase_020370_2);

#define VkglTestCase_020371_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020371_2 ".uniform.array_stride.unnamed_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020371, VkglTestCase_020371_1, VkglTestCase_020371_2);

#define VkglTestCase_020372_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020372_2 ".uniform.array_stride.unnamed_block.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020372, VkglTestCase_020372_1, VkglTestCase_020372_2);

#define VkglTestCase_020938_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020938_2 "ry.uniform.offset.unnamed_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020938, VkglTestCase_020938_1, VkglTestCase_020938_2);

#define VkglTestCase_020939_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020939_2 "ery.uniform.offset.unnamed_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020939, VkglTestCase_020939_1, VkglTestCase_020939_2);

#define VkglTestCase_020940_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020940_2 "ery.uniform.offset.unnamed_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020940, VkglTestCase_020940_1, VkglTestCase_020940_2);

#define VkglTestCase_020941_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020941_2 "ery.uniform.offset.unnamed_block.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020941, VkglTestCase_020941_1, VkglTestCase_020941_2);

#define VkglTestCase_020942_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020942_2 "ery.uniform.offset.unnamed_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020942, VkglTestCase_020942_1, VkglTestCase_020942_2);

#define VkglTestCase_020943_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020943_2 "ery.uniform.offset.unnamed_block.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020943, VkglTestCase_020943_1, VkglTestCase_020943_2);

#define VkglTestCase_021546_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021546_2 "ery.uniform.type.unnamed_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021546, VkglTestCase_021546_1, VkglTestCase_021546_2);

#define VkglTestCase_021547_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021547_2 "uery.uniform.type.unnamed_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021547, VkglTestCase_021547_1, VkglTestCase_021547_2);

#define VkglTestCase_021548_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021548_2 "uery.uniform.type.unnamed_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021548, VkglTestCase_021548_1, VkglTestCase_021548_2);

#define VkglTestCase_021549_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021549_2 "uery.uniform.type.unnamed_block.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021549, VkglTestCase_021549_1, VkglTestCase_021549_2);

#define VkglTestCase_021550_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021550_2 "uery.uniform.type.unnamed_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021550, VkglTestCase_021550_1, VkglTestCase_021550_2);

#define VkglTestCase_021551_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021551_2 "uery.uniform.type.unnamed_block.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021551, VkglTestCase_021551_1, VkglTestCase_021551_2);

#define VkglTestCase_022201_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022201_2 "nput.type.interface_blocks.in.unnamed_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022201, VkglTestCase_022201_1, VkglTestCase_022201_2);

#define VkglTestCase_022202_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022202_2 "input.type.interface_blocks.in.unnamed_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022202, VkglTestCase_022202_1, VkglTestCase_022202_2);

#define VkglTestCase_022203_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022203_2 "input.type.interface_blocks.in.unnamed_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022203, VkglTestCase_022203_1, VkglTestCase_022203_2);

#define VkglTestCase_022204_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022204_2 "input.type.interface_blocks.in.unnamed_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022204, VkglTestCase_022204_1, VkglTestCase_022204_2);

#define VkglTestCase_022205_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022205_2 "nput.type.interface_blocks.in.unnamed_block.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022205, VkglTestCase_022205_1, VkglTestCase_022205_2);

#define VkglTestCase_022206_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022206_2 "nput.type.interface_blocks.in.unnamed_block.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022206, VkglTestCase_022206_1, VkglTestCase_022206_2);

#define VkglTestCase_022207_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022207_2 "nput.type.interface_blocks.in.unnamed_block.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022207, VkglTestCase_022207_1, VkglTestCase_022207_2);

#define VkglTestCase_022285_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022285_2 "t.type.interface_blocks.patch_in.unnamed_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022285, VkglTestCase_022285_1, VkglTestCase_022285_2);

#define VkglTestCase_022286_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022286_2 "ut.type.interface_blocks.patch_in.unnamed_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022286, VkglTestCase_022286_1, VkglTestCase_022286_2);

#define VkglTestCase_022287_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022287_2 "ut.type.interface_blocks.patch_in.unnamed_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022287, VkglTestCase_022287_1, VkglTestCase_022287_2);

#define VkglTestCase_022288_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022288_2 "ut.type.interface_blocks.patch_in.unnamed_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022288, VkglTestCase_022288_1, VkglTestCase_022288_2);

#define VkglTestCase_022289_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022289_2 "t.type.interface_blocks.patch_in.unnamed_block.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022289, VkglTestCase_022289_1, VkglTestCase_022289_2);

#define VkglTestCase_022290_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022290_2 "t.type.interface_blocks.patch_in.unnamed_block.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022290, VkglTestCase_022290_1, VkglTestCase_022290_2);

#define VkglTestCase_022291_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022291_2 "t.type.interface_blocks.patch_in.unnamed_block.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022291, VkglTestCase_022291_1, VkglTestCase_022291_2);

#define VkglTestCase_022843_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022843_2 "tput.type.interface_blocks.out.unnamed_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022843, VkglTestCase_022843_1, VkglTestCase_022843_2);

#define VkglTestCase_022844_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022844_2 "utput.type.interface_blocks.out.unnamed_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022844, VkglTestCase_022844_1, VkglTestCase_022844_2);

#define VkglTestCase_022845_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022845_2 "utput.type.interface_blocks.out.unnamed_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022845, VkglTestCase_022845_1, VkglTestCase_022845_2);

#define VkglTestCase_022846_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022846_2 "utput.type.interface_blocks.out.unnamed_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022846, VkglTestCase_022846_1, VkglTestCase_022846_2);

#define VkglTestCase_022847_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022847_2 "tput.type.interface_blocks.out.unnamed_block.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022847, VkglTestCase_022847_1, VkglTestCase_022847_2);

#define VkglTestCase_022848_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022848_2 "tput.type.interface_blocks.out.unnamed_block.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022848, VkglTestCase_022848_1, VkglTestCase_022848_2);

#define VkglTestCase_022849_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022849_2 "tput.type.interface_blocks.out.unnamed_block.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022849, VkglTestCase_022849_1, VkglTestCase_022849_2);

#define VkglTestCase_022912_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022912_2 "t.type.interface_blocks.patch_out.unnamed_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022912, VkglTestCase_022912_1, VkglTestCase_022912_2);

#define VkglTestCase_022913_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022913_2 "t.type.interface_blocks.patch_out.unnamed_block.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022913, VkglTestCase_022913_1, VkglTestCase_022913_2);

#define VkglTestCase_022914_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022914_2 "t.type.interface_blocks.patch_out.unnamed_block.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022914, VkglTestCase_022914_1, VkglTestCase_022914_2);

#define VkglTestCase_022915_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022915_2 "t.type.interface_blocks.patch_out.unnamed_block.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022915, VkglTestCase_022915_1, VkglTestCase_022915_2);
