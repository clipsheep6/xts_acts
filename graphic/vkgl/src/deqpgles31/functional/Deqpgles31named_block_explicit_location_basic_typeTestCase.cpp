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

#define VkglTestCase_022166_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022166_2 "interface_blocks.in.named_block_explicit_location.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022166, VkglTestCase_022166_1, VkglTestCase_022166_2);

#define VkglTestCase_022167_1 "dEQP-GLES31.functional.program_interface_query.program_input.type"
#define VkglTestCase_022167_2 ".interface_blocks.in.named_block_explicit_location.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022167, VkglTestCase_022167_1, VkglTestCase_022167_2);

#define VkglTestCase_022168_1 "dEQP-GLES31.functional.program_interface_query.program_input.type"
#define VkglTestCase_022168_2 ".interface_blocks.in.named_block_explicit_location.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022168, VkglTestCase_022168_1, VkglTestCase_022168_2);

#define VkglTestCase_022169_1 "dEQP-GLES31.functional.program_interface_query.program_input.type"
#define VkglTestCase_022169_2 ".interface_blocks.in.named_block_explicit_location.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022169, VkglTestCase_022169_1, VkglTestCase_022169_2);

#define VkglTestCase_022170_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022170_2 "interface_blocks.in.named_block_explicit_location.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022170, VkglTestCase_022170_1, VkglTestCase_022170_2);

#define VkglTestCase_022171_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022171_2 "interface_blocks.in.named_block_explicit_location.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022171, VkglTestCase_022171_1, VkglTestCase_022171_2);

#define VkglTestCase_022172_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022172_2 "interface_blocks.in.named_block_explicit_location.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022172, VkglTestCase_022172_1, VkglTestCase_022172_2);

#define VkglTestCase_022250_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.int"
#define VkglTestCase_022250_2 "erface_blocks.patch_in.named_block_explicit_location.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022250, VkglTestCase_022250_1, VkglTestCase_022250_2);

#define VkglTestCase_022251_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.in"
#define VkglTestCase_022251_2 "terface_blocks.patch_in.named_block_explicit_location.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022251, VkglTestCase_022251_1, VkglTestCase_022251_2);

#define VkglTestCase_022252_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.in"
#define VkglTestCase_022252_2 "terface_blocks.patch_in.named_block_explicit_location.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022252, VkglTestCase_022252_1, VkglTestCase_022252_2);

#define VkglTestCase_022253_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.in"
#define VkglTestCase_022253_2 "terface_blocks.patch_in.named_block_explicit_location.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022253, VkglTestCase_022253_1, VkglTestCase_022253_2);

#define VkglTestCase_022254_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.int"
#define VkglTestCase_022254_2 "erface_blocks.patch_in.named_block_explicit_location.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022254, VkglTestCase_022254_1, VkglTestCase_022254_2);

#define VkglTestCase_022255_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.int"
#define VkglTestCase_022255_2 "erface_blocks.patch_in.named_block_explicit_location.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022255, VkglTestCase_022255_1, VkglTestCase_022255_2);

#define VkglTestCase_022256_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.int"
#define VkglTestCase_022256_2 "erface_blocks.patch_in.named_block_explicit_location.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022256, VkglTestCase_022256_1, VkglTestCase_022256_2);

#define VkglTestCase_022808_1 "dEQP-GLES31.functional.program_interface_query.program_output.type."
#define VkglTestCase_022808_2 "interface_blocks.out.named_block_explicit_location.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022808, VkglTestCase_022808_1, VkglTestCase_022808_2);

#define VkglTestCase_022809_1 "dEQP-GLES31.functional.program_interface_query.program_output.type"
#define VkglTestCase_022809_2 ".interface_blocks.out.named_block_explicit_location.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022809, VkglTestCase_022809_1, VkglTestCase_022809_2);

#define VkglTestCase_022810_1 "dEQP-GLES31.functional.program_interface_query.program_output.type"
#define VkglTestCase_022810_2 ".interface_blocks.out.named_block_explicit_location.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022810, VkglTestCase_022810_1, VkglTestCase_022810_2);

#define VkglTestCase_022811_1 "dEQP-GLES31.functional.program_interface_query.program_output.type"
#define VkglTestCase_022811_2 ".interface_blocks.out.named_block_explicit_location.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022811, VkglTestCase_022811_1, VkglTestCase_022811_2);

#define VkglTestCase_022812_1 "dEQP-GLES31.functional.program_interface_query.program_output.type."
#define VkglTestCase_022812_2 "interface_blocks.out.named_block_explicit_location.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022812, VkglTestCase_022812_1, VkglTestCase_022812_2);

#define VkglTestCase_022813_1 "dEQP-GLES31.functional.program_interface_query.program_output.type."
#define VkglTestCase_022813_2 "interface_blocks.out.named_block_explicit_location.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022813, VkglTestCase_022813_1, VkglTestCase_022813_2);

#define VkglTestCase_022814_1 "dEQP-GLES31.functional.program_interface_query.program_output.type."
#define VkglTestCase_022814_2 "interface_blocks.out.named_block_explicit_location.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022814, VkglTestCase_022814_1, VkglTestCase_022814_2);

#define VkglTestCase_022886_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.int"
#define VkglTestCase_022886_2 "erface_blocks.patch_out.named_block_explicit_location.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022886, VkglTestCase_022886_1, VkglTestCase_022886_2);

#define VkglTestCase_022887_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.in"
#define VkglTestCase_022887_2 "terface_blocks.patch_out.named_block_explicit_location.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022887, VkglTestCase_022887_1, VkglTestCase_022887_2);

#define VkglTestCase_022888_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.in"
#define VkglTestCase_022888_2 "terface_blocks.patch_out.named_block_explicit_location.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022888, VkglTestCase_022888_1, VkglTestCase_022888_2);

#define VkglTestCase_022889_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.in"
#define VkglTestCase_022889_2 "terface_blocks.patch_out.named_block_explicit_location.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022889, VkglTestCase_022889_1, VkglTestCase_022889_2);

#define VkglTestCase_022890_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.int"
#define VkglTestCase_022890_2 "erface_blocks.patch_out.named_block_explicit_location.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022890, VkglTestCase_022890_1, VkglTestCase_022890_2);

#define VkglTestCase_022891_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.int"
#define VkglTestCase_022891_2 "erface_blocks.patch_out.named_block_explicit_location.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022891, VkglTestCase_022891_1, VkglTestCase_022891_2);

#define VkglTestCase_022892_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.int"
#define VkglTestCase_022892_2 "erface_blocks.patch_out.named_block_explicit_location.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022892, VkglTestCase_022892_1, VkglTestCase_022892_2);
