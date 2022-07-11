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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021528_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021528_2 "uery.uniform.type.named_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021528, VkglTestCase_021528_1, VkglTestCase_021528_2);

#define VkglTestCase_021529_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021529_2 "query.uniform.type.named_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021529, VkglTestCase_021529_1, VkglTestCase_021529_2);

#define VkglTestCase_021530_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021530_2 "query.uniform.type.named_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021530, VkglTestCase_021530_1, VkglTestCase_021530_2);

#define VkglTestCase_021531_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021531_2 "query.uniform.type.named_block.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021531, VkglTestCase_021531_1, VkglTestCase_021531_2);

#define VkglTestCase_021532_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021532_2 "query.uniform.type.named_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021532, VkglTestCase_021532_1, VkglTestCase_021532_2);

#define VkglTestCase_021533_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021533_2 "query.uniform.type.named_block.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021533, VkglTestCase_021533_1, VkglTestCase_021533_2);

#define VkglTestCase_022159_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022159_2 "input.type.interface_blocks.in.named_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022159, VkglTestCase_022159_1, VkglTestCase_022159_2);

#define VkglTestCase_022160_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022160_2 "_input.type.interface_blocks.in.named_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022160, VkglTestCase_022160_1, VkglTestCase_022160_2);

#define VkglTestCase_022161_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022161_2 "_input.type.interface_blocks.in.named_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022161, VkglTestCase_022161_1, VkglTestCase_022161_2);

#define VkglTestCase_022162_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022162_2 "_input.type.interface_blocks.in.named_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022162, VkglTestCase_022162_1, VkglTestCase_022162_2);

#define VkglTestCase_022163_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022163_2 "input.type.interface_blocks.in.named_block.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022163, VkglTestCase_022163_1, VkglTestCase_022163_2);

#define VkglTestCase_022164_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022164_2 "input.type.interface_blocks.in.named_block.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022164, VkglTestCase_022164_1, VkglTestCase_022164_2);

#define VkglTestCase_022165_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022165_2 "input.type.interface_blocks.in.named_block.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022165, VkglTestCase_022165_1, VkglTestCase_022165_2);

#define VkglTestCase_022243_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022243_2 "ut.type.interface_blocks.patch_in.named_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022243, VkglTestCase_022243_1, VkglTestCase_022243_2);

#define VkglTestCase_022244_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022244_2 "put.type.interface_blocks.patch_in.named_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022244, VkglTestCase_022244_1, VkglTestCase_022244_2);

#define VkglTestCase_022245_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022245_2 "put.type.interface_blocks.patch_in.named_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022245, VkglTestCase_022245_1, VkglTestCase_022245_2);

#define VkglTestCase_022246_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022246_2 "put.type.interface_blocks.patch_in.named_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022246, VkglTestCase_022246_1, VkglTestCase_022246_2);

#define VkglTestCase_022247_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022247_2 "ut.type.interface_blocks.patch_in.named_block.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022247, VkglTestCase_022247_1, VkglTestCase_022247_2);

#define VkglTestCase_022248_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022248_2 "ut.type.interface_blocks.patch_in.named_block.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022248, VkglTestCase_022248_1, VkglTestCase_022248_2);

#define VkglTestCase_022249_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022249_2 "ut.type.interface_blocks.patch_in.named_block.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022249, VkglTestCase_022249_1, VkglTestCase_022249_2);

#define VkglTestCase_022801_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022801_2 "utput.type.interface_blocks.out.named_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022801, VkglTestCase_022801_1, VkglTestCase_022801_2);

#define VkglTestCase_022802_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022802_2 "output.type.interface_blocks.out.named_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022802, VkglTestCase_022802_1, VkglTestCase_022802_2);

#define VkglTestCase_022803_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022803_2 "output.type.interface_blocks.out.named_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022803, VkglTestCase_022803_1, VkglTestCase_022803_2);

#define VkglTestCase_022804_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022804_2 "output.type.interface_blocks.out.named_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022804, VkglTestCase_022804_1, VkglTestCase_022804_2);

#define VkglTestCase_022805_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022805_2 "utput.type.interface_blocks.out.named_block.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022805, VkglTestCase_022805_1, VkglTestCase_022805_2);

#define VkglTestCase_022806_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022806_2 "utput.type.interface_blocks.out.named_block.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022806, VkglTestCase_022806_1, VkglTestCase_022806_2);

#define VkglTestCase_022807_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022807_2 "utput.type.interface_blocks.out.named_block.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022807, VkglTestCase_022807_1, VkglTestCase_022807_2);

#define VkglTestCase_022882_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022882_2 "ut.type.interface_blocks.patch_out.named_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022882, VkglTestCase_022882_1, VkglTestCase_022882_2);

#define VkglTestCase_022883_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022883_2 "ut.type.interface_blocks.patch_out.named_block.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022883, VkglTestCase_022883_1, VkglTestCase_022883_2);

#define VkglTestCase_022884_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022884_2 "ut.type.interface_blocks.patch_out.named_block.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022884, VkglTestCase_022884_1, VkglTestCase_022884_2);

#define VkglTestCase_022885_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022885_2 "ut.type.interface_blocks.patch_out.named_block.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022885, VkglTestCase_022885_1, VkglTestCase_022885_2);
