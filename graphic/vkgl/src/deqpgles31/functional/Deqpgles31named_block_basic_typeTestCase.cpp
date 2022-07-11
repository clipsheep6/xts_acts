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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022145_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022145_2 "put.type.interface_blocks.in.named_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022145, VkglTestCase_022145_1, VkglTestCase_022145_2);

#define VkglTestCase_022146_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022146_2 "nput.type.interface_blocks.in.named_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022146, VkglTestCase_022146_1, VkglTestCase_022146_2);

#define VkglTestCase_022147_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022147_2 "nput.type.interface_blocks.in.named_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022147, VkglTestCase_022147_1, VkglTestCase_022147_2);

#define VkglTestCase_022148_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022148_2 "nput.type.interface_blocks.in.named_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022148, VkglTestCase_022148_1, VkglTestCase_022148_2);

#define VkglTestCase_022149_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022149_2 "put.type.interface_blocks.in.named_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022149, VkglTestCase_022149_1, VkglTestCase_022149_2);

#define VkglTestCase_022150_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022150_2 "put.type.interface_blocks.in.named_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022150, VkglTestCase_022150_1, VkglTestCase_022150_2);

#define VkglTestCase_022151_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022151_2 "put.type.interface_blocks.in.named_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022151, VkglTestCase_022151_1, VkglTestCase_022151_2);

#define VkglTestCase_022229_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022229_2 ".type.interface_blocks.patch_in.named_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022229, VkglTestCase_022229_1, VkglTestCase_022229_2);

#define VkglTestCase_022230_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022230_2 "t.type.interface_blocks.patch_in.named_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022230, VkglTestCase_022230_1, VkglTestCase_022230_2);

#define VkglTestCase_022231_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022231_2 "t.type.interface_blocks.patch_in.named_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022231, VkglTestCase_022231_1, VkglTestCase_022231_2);

#define VkglTestCase_022232_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022232_2 "t.type.interface_blocks.patch_in.named_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022232, VkglTestCase_022232_1, VkglTestCase_022232_2);

#define VkglTestCase_022233_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022233_2 ".type.interface_blocks.patch_in.named_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022233, VkglTestCase_022233_1, VkglTestCase_022233_2);

#define VkglTestCase_022234_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022234_2 ".type.interface_blocks.patch_in.named_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022234, VkglTestCase_022234_1, VkglTestCase_022234_2);

#define VkglTestCase_022235_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022235_2 ".type.interface_blocks.patch_in.named_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022235, VkglTestCase_022235_1, VkglTestCase_022235_2);

#define VkglTestCase_022787_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022787_2 "put.type.interface_blocks.out.named_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022787, VkglTestCase_022787_1, VkglTestCase_022787_2);

#define VkglTestCase_022788_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022788_2 "tput.type.interface_blocks.out.named_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022788, VkglTestCase_022788_1, VkglTestCase_022788_2);

#define VkglTestCase_022789_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022789_2 "tput.type.interface_blocks.out.named_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022789, VkglTestCase_022789_1, VkglTestCase_022789_2);

#define VkglTestCase_022790_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022790_2 "tput.type.interface_blocks.out.named_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022790, VkglTestCase_022790_1, VkglTestCase_022790_2);

#define VkglTestCase_022791_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022791_2 "put.type.interface_blocks.out.named_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022791, VkglTestCase_022791_1, VkglTestCase_022791_2);

#define VkglTestCase_022792_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022792_2 "put.type.interface_blocks.out.named_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022792, VkglTestCase_022792_1, VkglTestCase_022792_2);

#define VkglTestCase_022793_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022793_2 "put.type.interface_blocks.out.named_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022793, VkglTestCase_022793_1, VkglTestCase_022793_2);

#define VkglTestCase_022871_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022871_2 ".type.interface_blocks.patch_out.named_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022871, VkglTestCase_022871_1, VkglTestCase_022871_2);

#define VkglTestCase_022872_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022872_2 "t.type.interface_blocks.patch_out.named_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022872, VkglTestCase_022872_1, VkglTestCase_022872_2);

#define VkglTestCase_022873_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022873_2 "t.type.interface_blocks.patch_out.named_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022873, VkglTestCase_022873_1, VkglTestCase_022873_2);

#define VkglTestCase_022874_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022874_2 "t.type.interface_blocks.patch_out.named_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022874, VkglTestCase_022874_1, VkglTestCase_022874_2);

#define VkglTestCase_022875_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022875_2 ".type.interface_blocks.patch_out.named_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022875, VkglTestCase_022875_1, VkglTestCase_022875_2);

#define VkglTestCase_022876_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022876_2 ".type.interface_blocks.patch_out.named_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022876, VkglTestCase_022876_1, VkglTestCase_022876_2);

#define VkglTestCase_022877_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022877_2 ".type.interface_blocks.patch_out.named_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022877, VkglTestCase_022877_1, VkglTestCase_022877_2);
