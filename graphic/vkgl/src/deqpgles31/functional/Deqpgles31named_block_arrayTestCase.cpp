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

#define VkglTestCase_021522_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021522_2 "query.uniform.type.named_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021522, VkglTestCase_021522_1, VkglTestCase_021522_2);

#define VkglTestCase_021523_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_021523_2 "_query.uniform.type.named_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021523, VkglTestCase_021523_1, VkglTestCase_021523_2);

#define VkglTestCase_021524_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021524_2 "query.uniform.type.named_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021524, VkglTestCase_021524_1, VkglTestCase_021524_2);

#define VkglTestCase_021525_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021525_2 "query.uniform.type.named_block.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021525, VkglTestCase_021525_1, VkglTestCase_021525_2);

#define VkglTestCase_021526_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021526_2 "query.uniform.type.named_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021526, VkglTestCase_021526_1, VkglTestCase_021526_2);

#define VkglTestCase_021527_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021527_2 "query.uniform.type.named_block.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021527, VkglTestCase_021527_1, VkglTestCase_021527_2);

#define VkglTestCase_022152_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022152_2 "_input.type.interface_blocks.in.named_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022152, VkglTestCase_022152_1, VkglTestCase_022152_2);

#define VkglTestCase_022153_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022153_2 "m_input.type.interface_blocks.in.named_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022153, VkglTestCase_022153_1, VkglTestCase_022153_2);

#define VkglTestCase_022154_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022154_2 "_input.type.interface_blocks.in.named_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022154, VkglTestCase_022154_1, VkglTestCase_022154_2);

#define VkglTestCase_022155_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022155_2 "_input.type.interface_blocks.in.named_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022155, VkglTestCase_022155_1, VkglTestCase_022155_2);

#define VkglTestCase_022156_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022156_2 "_input.type.interface_blocks.in.named_block.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022156, VkglTestCase_022156_1, VkglTestCase_022156_2);

#define VkglTestCase_022157_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022157_2 "_input.type.interface_blocks.in.named_block.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022157, VkglTestCase_022157_1, VkglTestCase_022157_2);

#define VkglTestCase_022158_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022158_2 "input.type.interface_blocks.in.named_block.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022158, VkglTestCase_022158_1, VkglTestCase_022158_2);

#define VkglTestCase_022236_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022236_2 "put.type.interface_blocks.patch_in.named_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022236, VkglTestCase_022236_1, VkglTestCase_022236_2);

#define VkglTestCase_022237_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022237_2 "nput.type.interface_blocks.patch_in.named_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022237, VkglTestCase_022237_1, VkglTestCase_022237_2);

#define VkglTestCase_022238_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022238_2 "put.type.interface_blocks.patch_in.named_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022238, VkglTestCase_022238_1, VkglTestCase_022238_2);

#define VkglTestCase_022239_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022239_2 "put.type.interface_blocks.patch_in.named_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022239, VkglTestCase_022239_1, VkglTestCase_022239_2);

#define VkglTestCase_022240_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022240_2 "put.type.interface_blocks.patch_in.named_block.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022240, VkglTestCase_022240_1, VkglTestCase_022240_2);

#define VkglTestCase_022241_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022241_2 "put.type.interface_blocks.patch_in.named_block.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022241, VkglTestCase_022241_1, VkglTestCase_022241_2);

#define VkglTestCase_022242_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022242_2 "ut.type.interface_blocks.patch_in.named_block.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022242, VkglTestCase_022242_1, VkglTestCase_022242_2);

#define VkglTestCase_022794_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022794_2 "output.type.interface_blocks.out.named_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022794, VkglTestCase_022794_1, VkglTestCase_022794_2);

#define VkglTestCase_022795_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022795_2 "_output.type.interface_blocks.out.named_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022795, VkglTestCase_022795_1, VkglTestCase_022795_2);

#define VkglTestCase_022796_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022796_2 "output.type.interface_blocks.out.named_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022796, VkglTestCase_022796_1, VkglTestCase_022796_2);

#define VkglTestCase_022797_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022797_2 "output.type.interface_blocks.out.named_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022797, VkglTestCase_022797_1, VkglTestCase_022797_2);

#define VkglTestCase_022798_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022798_2 "output.type.interface_blocks.out.named_block.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022798, VkglTestCase_022798_1, VkglTestCase_022798_2);

#define VkglTestCase_022799_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022799_2 "output.type.interface_blocks.out.named_block.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022799, VkglTestCase_022799_1, VkglTestCase_022799_2);

#define VkglTestCase_022800_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022800_2 "utput.type.interface_blocks.out.named_block.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022800, VkglTestCase_022800_1, VkglTestCase_022800_2);

#define VkglTestCase_022878_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022878_2 "put.type.interface_blocks.patch_out.named_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022878, VkglTestCase_022878_1, VkglTestCase_022878_2);

#define VkglTestCase_022879_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022879_2 "put.type.interface_blocks.patch_out.named_block.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022879, VkglTestCase_022879_1, VkglTestCase_022879_2);

#define VkglTestCase_022880_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022880_2 "put.type.interface_blocks.patch_out.named_block.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022880, VkglTestCase_022880_1, VkglTestCase_022880_2);

#define VkglTestCase_022881_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022881_2 "ut.type.interface_blocks.patch_out.named_block.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022881, VkglTestCase_022881_1, VkglTestCase_022881_2);
