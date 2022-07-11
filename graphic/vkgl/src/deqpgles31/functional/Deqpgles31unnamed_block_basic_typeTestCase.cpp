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

#define VkglTestCase_020355_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020355_2 "iform.array_stride.unnamed_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020355, VkglTestCase_020355_1, VkglTestCase_020355_2);

#define VkglTestCase_020356_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020356_2 "niform.array_stride.unnamed_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020356, VkglTestCase_020356_1, VkglTestCase_020356_2);

#define VkglTestCase_020357_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020357_2 "niform.array_stride.unnamed_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020357, VkglTestCase_020357_1, VkglTestCase_020357_2);

#define VkglTestCase_020358_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020358_2 "niform.array_stride.unnamed_block.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020358, VkglTestCase_020358_1, VkglTestCase_020358_2);

#define VkglTestCase_020359_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020359_2 "niform.array_stride.unnamed_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020359, VkglTestCase_020359_1, VkglTestCase_020359_2);

#define VkglTestCase_020360_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020360_2 "niform.array_stride.unnamed_block.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020360, VkglTestCase_020360_1, VkglTestCase_020360_2);

#define VkglTestCase_020926_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020926_2 ".uniform.offset.unnamed_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020926, VkglTestCase_020926_1, VkglTestCase_020926_2);

#define VkglTestCase_020927_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020927_2 "y.uniform.offset.unnamed_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020927, VkglTestCase_020927_1, VkglTestCase_020927_2);

#define VkglTestCase_020928_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020928_2 "y.uniform.offset.unnamed_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020928, VkglTestCase_020928_1, VkglTestCase_020928_2);

#define VkglTestCase_020929_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020929_2 "y.uniform.offset.unnamed_block.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020929, VkglTestCase_020929_1, VkglTestCase_020929_2);

#define VkglTestCase_020930_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020930_2 "y.uniform.offset.unnamed_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020930, VkglTestCase_020930_1, VkglTestCase_020930_2);

#define VkglTestCase_020931_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020931_2 "y.uniform.offset.unnamed_block.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020931, VkglTestCase_020931_1, VkglTestCase_020931_2);

#define VkglTestCase_021534_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021534_2 "y.uniform.type.unnamed_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021534, VkglTestCase_021534_1, VkglTestCase_021534_2);

#define VkglTestCase_021535_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021535_2 "ry.uniform.type.unnamed_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021535, VkglTestCase_021535_1, VkglTestCase_021535_2);

#define VkglTestCase_021536_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021536_2 "ry.uniform.type.unnamed_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021536, VkglTestCase_021536_1, VkglTestCase_021536_2);

#define VkglTestCase_021537_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021537_2 "ry.uniform.type.unnamed_block.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021537, VkglTestCase_021537_1, VkglTestCase_021537_2);

#define VkglTestCase_021538_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021538_2 "ry.uniform.type.unnamed_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021538, VkglTestCase_021538_1, VkglTestCase_021538_2);

#define VkglTestCase_021539_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021539_2 "ry.uniform.type.unnamed_block.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021539, VkglTestCase_021539_1, VkglTestCase_021539_2);

#define VkglTestCase_022187_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022187_2 "ut.type.interface_blocks.in.unnamed_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022187, VkglTestCase_022187_1, VkglTestCase_022187_2);

#define VkglTestCase_022188_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022188_2 "put.type.interface_blocks.in.unnamed_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022188, VkglTestCase_022188_1, VkglTestCase_022188_2);

#define VkglTestCase_022189_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022189_2 "put.type.interface_blocks.in.unnamed_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022189, VkglTestCase_022189_1, VkglTestCase_022189_2);

#define VkglTestCase_022190_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022190_2 "put.type.interface_blocks.in.unnamed_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022190, VkglTestCase_022190_1, VkglTestCase_022190_2);

#define VkglTestCase_022191_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022191_2 "ut.type.interface_blocks.in.unnamed_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022191, VkglTestCase_022191_1, VkglTestCase_022191_2);

#define VkglTestCase_022192_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022192_2 "ut.type.interface_blocks.in.unnamed_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022192, VkglTestCase_022192_1, VkglTestCase_022192_2);

#define VkglTestCase_022193_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022193_2 "ut.type.interface_blocks.in.unnamed_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022193, VkglTestCase_022193_1, VkglTestCase_022193_2);

#define VkglTestCase_022271_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_022271_2 "type.interface_blocks.patch_in.unnamed_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022271, VkglTestCase_022271_1, VkglTestCase_022271_2);

#define VkglTestCase_022272_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022272_2 ".type.interface_blocks.patch_in.unnamed_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022272, VkglTestCase_022272_1, VkglTestCase_022272_2);

#define VkglTestCase_022273_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022273_2 ".type.interface_blocks.patch_in.unnamed_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022273, VkglTestCase_022273_1, VkglTestCase_022273_2);

#define VkglTestCase_022274_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022274_2 ".type.interface_blocks.patch_in.unnamed_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022274, VkglTestCase_022274_1, VkglTestCase_022274_2);

#define VkglTestCase_022275_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_022275_2 "type.interface_blocks.patch_in.unnamed_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022275, VkglTestCase_022275_1, VkglTestCase_022275_2);

#define VkglTestCase_022276_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_022276_2 "type.interface_blocks.patch_in.unnamed_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022276, VkglTestCase_022276_1, VkglTestCase_022276_2);

#define VkglTestCase_022277_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_022277_2 "type.interface_blocks.patch_in.unnamed_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022277, VkglTestCase_022277_1, VkglTestCase_022277_2);

#define VkglTestCase_022829_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022829_2 "ut.type.interface_blocks.out.unnamed_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022829, VkglTestCase_022829_1, VkglTestCase_022829_2);

#define VkglTestCase_022830_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022830_2 "put.type.interface_blocks.out.unnamed_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022830, VkglTestCase_022830_1, VkglTestCase_022830_2);

#define VkglTestCase_022831_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022831_2 "put.type.interface_blocks.out.unnamed_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022831, VkglTestCase_022831_1, VkglTestCase_022831_2);

#define VkglTestCase_022832_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022832_2 "put.type.interface_blocks.out.unnamed_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022832, VkglTestCase_022832_1, VkglTestCase_022832_2);

#define VkglTestCase_022833_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022833_2 "ut.type.interface_blocks.out.unnamed_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022833, VkglTestCase_022833_1, VkglTestCase_022833_2);

#define VkglTestCase_022834_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022834_2 "ut.type.interface_blocks.out.unnamed_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022834, VkglTestCase_022834_1, VkglTestCase_022834_2);

#define VkglTestCase_022835_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022835_2 "ut.type.interface_blocks.out.unnamed_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022835, VkglTestCase_022835_1, VkglTestCase_022835_2);

#define VkglTestCase_022901_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022901_2 "type.interface_blocks.patch_out.unnamed_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022901, VkglTestCase_022901_1, VkglTestCase_022901_2);

#define VkglTestCase_022902_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022902_2 ".type.interface_blocks.patch_out.unnamed_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022902, VkglTestCase_022902_1, VkglTestCase_022902_2);

#define VkglTestCase_022903_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022903_2 ".type.interface_blocks.patch_out.unnamed_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022903, VkglTestCase_022903_1, VkglTestCase_022903_2);

#define VkglTestCase_022904_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022904_2 ".type.interface_blocks.patch_out.unnamed_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022904, VkglTestCase_022904_1, VkglTestCase_022904_2);

#define VkglTestCase_022905_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022905_2 "type.interface_blocks.patch_out.unnamed_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022905, VkglTestCase_022905_1, VkglTestCase_022905_2);

#define VkglTestCase_022906_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022906_2 "type.interface_blocks.patch_out.unnamed_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022906, VkglTestCase_022906_1, VkglTestCase_022906_2);

#define VkglTestCase_022907_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022907_2 "type.interface_blocks.patch_out.unnamed_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022907, VkglTestCase_022907_1, VkglTestCase_022907_2);
