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

#define VkglTestCase_020361_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020361_2 ".uniform.array_stride.unnamed_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020361, VkglTestCase_020361_1, VkglTestCase_020361_2);

#define VkglTestCase_020362_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020362_2 "y.uniform.array_stride.unnamed_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020362, VkglTestCase_020362_1, VkglTestCase_020362_2);

#define VkglTestCase_020363_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020363_2 ".uniform.array_stride.unnamed_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020363, VkglTestCase_020363_1, VkglTestCase_020363_2);

#define VkglTestCase_020364_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020364_2 ".uniform.array_stride.unnamed_block.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020364, VkglTestCase_020364_1, VkglTestCase_020364_2);

#define VkglTestCase_020365_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020365_2 ".uniform.array_stride.unnamed_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020365, VkglTestCase_020365_1, VkglTestCase_020365_2);

#define VkglTestCase_020366_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020366_2 ".uniform.array_stride.unnamed_block.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020366, VkglTestCase_020366_1, VkglTestCase_020366_2);

#define VkglTestCase_020932_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020932_2 "ery.uniform.offset.unnamed_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020932, VkglTestCase_020932_1, VkglTestCase_020932_2);

#define VkglTestCase_020933_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020933_2 "uery.uniform.offset.unnamed_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020933, VkglTestCase_020933_1, VkglTestCase_020933_2);

#define VkglTestCase_020934_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020934_2 "ery.uniform.offset.unnamed_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020934, VkglTestCase_020934_1, VkglTestCase_020934_2);

#define VkglTestCase_020935_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020935_2 "ery.uniform.offset.unnamed_block.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020935, VkglTestCase_020935_1, VkglTestCase_020935_2);

#define VkglTestCase_020936_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020936_2 "ery.uniform.offset.unnamed_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020936, VkglTestCase_020936_1, VkglTestCase_020936_2);

#define VkglTestCase_020937_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020937_2 "ery.uniform.offset.unnamed_block.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020937, VkglTestCase_020937_1, VkglTestCase_020937_2);

#define VkglTestCase_021540_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021540_2 "uery.uniform.type.unnamed_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021540, VkglTestCase_021540_1, VkglTestCase_021540_2);

#define VkglTestCase_021541_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021541_2 "query.uniform.type.unnamed_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021541, VkglTestCase_021541_1, VkglTestCase_021541_2);

#define VkglTestCase_021542_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021542_2 "uery.uniform.type.unnamed_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021542, VkglTestCase_021542_1, VkglTestCase_021542_2);

#define VkglTestCase_021543_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021543_2 "uery.uniform.type.unnamed_block.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021543, VkglTestCase_021543_1, VkglTestCase_021543_2);

#define VkglTestCase_021544_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021544_2 "uery.uniform.type.unnamed_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021544, VkglTestCase_021544_1, VkglTestCase_021544_2);

#define VkglTestCase_021545_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021545_2 "uery.uniform.type.unnamed_block.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021545, VkglTestCase_021545_1, VkglTestCase_021545_2);

#define VkglTestCase_022194_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022194_2 "input.type.interface_blocks.in.unnamed_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022194, VkglTestCase_022194_1, VkglTestCase_022194_2);

#define VkglTestCase_022195_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022195_2 "_input.type.interface_blocks.in.unnamed_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022195, VkglTestCase_022195_1, VkglTestCase_022195_2);

#define VkglTestCase_022196_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022196_2 "input.type.interface_blocks.in.unnamed_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022196, VkglTestCase_022196_1, VkglTestCase_022196_2);

#define VkglTestCase_022197_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022197_2 "input.type.interface_blocks.in.unnamed_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022197, VkglTestCase_022197_1, VkglTestCase_022197_2);

#define VkglTestCase_022198_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022198_2 "input.type.interface_blocks.in.unnamed_block.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022198, VkglTestCase_022198_1, VkglTestCase_022198_2);

#define VkglTestCase_022199_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022199_2 "input.type.interface_blocks.in.unnamed_block.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022199, VkglTestCase_022199_1, VkglTestCase_022199_2);

#define VkglTestCase_022200_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022200_2 "nput.type.interface_blocks.in.unnamed_block.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022200, VkglTestCase_022200_1, VkglTestCase_022200_2);

#define VkglTestCase_022278_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022278_2 "ut.type.interface_blocks.patch_in.unnamed_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022278, VkglTestCase_022278_1, VkglTestCase_022278_2);

#define VkglTestCase_022279_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022279_2 "put.type.interface_blocks.patch_in.unnamed_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022279, VkglTestCase_022279_1, VkglTestCase_022279_2);

#define VkglTestCase_022280_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022280_2 "ut.type.interface_blocks.patch_in.unnamed_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022280, VkglTestCase_022280_1, VkglTestCase_022280_2);

#define VkglTestCase_022281_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022281_2 "ut.type.interface_blocks.patch_in.unnamed_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022281, VkglTestCase_022281_1, VkglTestCase_022281_2);

#define VkglTestCase_022282_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022282_2 "ut.type.interface_blocks.patch_in.unnamed_block.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022282, VkglTestCase_022282_1, VkglTestCase_022282_2);

#define VkglTestCase_022283_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022283_2 "ut.type.interface_blocks.patch_in.unnamed_block.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022283, VkglTestCase_022283_1, VkglTestCase_022283_2);

#define VkglTestCase_022284_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022284_2 "t.type.interface_blocks.patch_in.unnamed_block.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022284, VkglTestCase_022284_1, VkglTestCase_022284_2);

#define VkglTestCase_022836_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022836_2 "utput.type.interface_blocks.out.unnamed_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022836, VkglTestCase_022836_1, VkglTestCase_022836_2);

#define VkglTestCase_022837_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022837_2 "output.type.interface_blocks.out.unnamed_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022837, VkglTestCase_022837_1, VkglTestCase_022837_2);

#define VkglTestCase_022838_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022838_2 "utput.type.interface_blocks.out.unnamed_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022838, VkglTestCase_022838_1, VkglTestCase_022838_2);

#define VkglTestCase_022839_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022839_2 "utput.type.interface_blocks.out.unnamed_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022839, VkglTestCase_022839_1, VkglTestCase_022839_2);

#define VkglTestCase_022840_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022840_2 "utput.type.interface_blocks.out.unnamed_block.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022840, VkglTestCase_022840_1, VkglTestCase_022840_2);

#define VkglTestCase_022841_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022841_2 "utput.type.interface_blocks.out.unnamed_block.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022841, VkglTestCase_022841_1, VkglTestCase_022841_2);

#define VkglTestCase_022842_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022842_2 "tput.type.interface_blocks.out.unnamed_block.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022842, VkglTestCase_022842_1, VkglTestCase_022842_2);

#define VkglTestCase_022908_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022908_2 "ut.type.interface_blocks.patch_out.unnamed_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022908, VkglTestCase_022908_1, VkglTestCase_022908_2);

#define VkglTestCase_022909_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022909_2 "ut.type.interface_blocks.patch_out.unnamed_block.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022909, VkglTestCase_022909_1, VkglTestCase_022909_2);

#define VkglTestCase_022910_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022910_2 "ut.type.interface_blocks.patch_out.unnamed_block.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022910, VkglTestCase_022910_1, VkglTestCase_022910_2);

#define VkglTestCase_022911_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022911_2 "t.type.interface_blocks.patch_out.unnamed_block.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022911, VkglTestCase_022911_1, VkglTestCase_022911_2);
