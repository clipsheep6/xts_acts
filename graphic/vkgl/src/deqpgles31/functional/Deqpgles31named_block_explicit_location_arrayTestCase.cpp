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

#define VkglTestCase_022173_1 "dEQP-GLES31.functional.program_interface_query.program_input.ty"
#define VkglTestCase_022173_2 "pe.interface_blocks.in.named_block_explicit_location.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022173, VkglTestCase_022173_1, VkglTestCase_022173_2);

#define VkglTestCase_022174_1 "dEQP-GLES31.functional.program_interface_query.program_input.t"
#define VkglTestCase_022174_2 "ype.interface_blocks.in.named_block_explicit_location.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022174, VkglTestCase_022174_1, VkglTestCase_022174_2);

#define VkglTestCase_022175_1 "dEQP-GLES31.functional.program_interface_query.program_input.ty"
#define VkglTestCase_022175_2 "pe.interface_blocks.in.named_block_explicit_location.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022175, VkglTestCase_022175_1, VkglTestCase_022175_2);

#define VkglTestCase_022176_1 "dEQP-GLES31.functional.program_interface_query.program_input.ty"
#define VkglTestCase_022176_2 "pe.interface_blocks.in.named_block_explicit_location.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022176, VkglTestCase_022176_1, VkglTestCase_022176_2);

#define VkglTestCase_022177_1 "dEQP-GLES31.functional.program_interface_query.program_input.ty"
#define VkglTestCase_022177_2 "pe.interface_blocks.in.named_block_explicit_location.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022177, VkglTestCase_022177_1, VkglTestCase_022177_2);

#define VkglTestCase_022178_1 "dEQP-GLES31.functional.program_interface_query.program_input.ty"
#define VkglTestCase_022178_2 "pe.interface_blocks.in.named_block_explicit_location.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022178, VkglTestCase_022178_1, VkglTestCase_022178_2);

#define VkglTestCase_022179_1 "dEQP-GLES31.functional.program_interface_query.program_input.typ"
#define VkglTestCase_022179_2 "e.interface_blocks.in.named_block_explicit_location.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022179, VkglTestCase_022179_1, VkglTestCase_022179_2);

#define VkglTestCase_022257_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022257_2 "interface_blocks.patch_in.named_block_explicit_location.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022257, VkglTestCase_022257_1, VkglTestCase_022257_2);

#define VkglTestCase_022258_1 "dEQP-GLES31.functional.program_interface_query.program_input.type"
#define VkglTestCase_022258_2 ".interface_blocks.patch_in.named_block_explicit_location.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022258, VkglTestCase_022258_1, VkglTestCase_022258_2);

#define VkglTestCase_022259_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022259_2 "interface_blocks.patch_in.named_block_explicit_location.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022259, VkglTestCase_022259_1, VkglTestCase_022259_2);

#define VkglTestCase_022260_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022260_2 "interface_blocks.patch_in.named_block_explicit_location.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022260, VkglTestCase_022260_1, VkglTestCase_022260_2);

#define VkglTestCase_022261_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022261_2 "interface_blocks.patch_in.named_block_explicit_location.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022261, VkglTestCase_022261_1, VkglTestCase_022261_2);

#define VkglTestCase_022262_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022262_2 "interface_blocks.patch_in.named_block_explicit_location.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022262, VkglTestCase_022262_1, VkglTestCase_022262_2);

#define VkglTestCase_022263_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.i"
#define VkglTestCase_022263_2 "nterface_blocks.patch_in.named_block_explicit_location.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022263, VkglTestCase_022263_1, VkglTestCase_022263_2);

#define VkglTestCase_022815_1 "dEQP-GLES31.functional.program_interface_query.program_output.ty"
#define VkglTestCase_022815_2 "pe.interface_blocks.out.named_block_explicit_location.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022815, VkglTestCase_022815_1, VkglTestCase_022815_2);

#define VkglTestCase_022816_1 "dEQP-GLES31.functional.program_interface_query.program_output.t"
#define VkglTestCase_022816_2 "ype.interface_blocks.out.named_block_explicit_location.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022816, VkglTestCase_022816_1, VkglTestCase_022816_2);

#define VkglTestCase_022817_1 "dEQP-GLES31.functional.program_interface_query.program_output.ty"
#define VkglTestCase_022817_2 "pe.interface_blocks.out.named_block_explicit_location.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022817, VkglTestCase_022817_1, VkglTestCase_022817_2);

#define VkglTestCase_022818_1 "dEQP-GLES31.functional.program_interface_query.program_output.ty"
#define VkglTestCase_022818_2 "pe.interface_blocks.out.named_block_explicit_location.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022818, VkglTestCase_022818_1, VkglTestCase_022818_2);

#define VkglTestCase_022819_1 "dEQP-GLES31.functional.program_interface_query.program_output.ty"
#define VkglTestCase_022819_2 "pe.interface_blocks.out.named_block_explicit_location.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022819, VkglTestCase_022819_1, VkglTestCase_022819_2);

#define VkglTestCase_022820_1 "dEQP-GLES31.functional.program_interface_query.program_output.ty"
#define VkglTestCase_022820_2 "pe.interface_blocks.out.named_block_explicit_location.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022820, VkglTestCase_022820_1, VkglTestCase_022820_2);

#define VkglTestCase_022821_1 "dEQP-GLES31.functional.program_interface_query.program_output.typ"
#define VkglTestCase_022821_2 "e.interface_blocks.out.named_block_explicit_location.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022821, VkglTestCase_022821_1, VkglTestCase_022821_2);

#define VkglTestCase_022893_1 "dEQP-GLES31.functional.program_interface_query.program_output.type."
#define VkglTestCase_022893_2 "interface_blocks.patch_out.named_block_explicit_location.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022893, VkglTestCase_022893_1, VkglTestCase_022893_2);

#define VkglTestCase_022894_1 "dEQP-GLES31.functional.program_interface_query.program_output.type."
#define VkglTestCase_022894_2 "interface_blocks.patch_out.named_block_explicit_location.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022894, VkglTestCase_022894_1, VkglTestCase_022894_2);

#define VkglTestCase_022895_1 "dEQP-GLES31.functional.program_interface_query.program_output.type."
#define VkglTestCase_022895_2 "interface_blocks.patch_out.named_block_explicit_location.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022895, VkglTestCase_022895_1, VkglTestCase_022895_2);

#define VkglTestCase_022896_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.i"
#define VkglTestCase_022896_2 "nterface_blocks.patch_out.named_block_explicit_location.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022896, VkglTestCase_022896_1, VkglTestCase_022896_2);
