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

#define VkglTestCase_022180_1 "dEQP-GLES31.functional.program_interface_query.program_input.typ"
#define VkglTestCase_022180_2 "e.interface_blocks.in.named_block_explicit_location.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022180, VkglTestCase_022180_1, VkglTestCase_022180_2);

#define VkglTestCase_022181_1 "dEQP-GLES31.functional.program_interface_query.program_input.ty"
#define VkglTestCase_022181_2 "pe.interface_blocks.in.named_block_explicit_location.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022181, VkglTestCase_022181_1, VkglTestCase_022181_2);

#define VkglTestCase_022182_1 "dEQP-GLES31.functional.program_interface_query.program_input.ty"
#define VkglTestCase_022182_2 "pe.interface_blocks.in.named_block_explicit_location.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022182, VkglTestCase_022182_1, VkglTestCase_022182_2);

#define VkglTestCase_022183_1 "dEQP-GLES31.functional.program_interface_query.program_input.ty"
#define VkglTestCase_022183_2 "pe.interface_blocks.in.named_block_explicit_location.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022183, VkglTestCase_022183_1, VkglTestCase_022183_2);

#define VkglTestCase_022184_1 "dEQP-GLES31.functional.program_interface_query.program_input.typ"
#define VkglTestCase_022184_2 "e.interface_blocks.in.named_block_explicit_location.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022184, VkglTestCase_022184_1, VkglTestCase_022184_2);

#define VkglTestCase_022185_1 "dEQP-GLES31.functional.program_interface_query.program_input.typ"
#define VkglTestCase_022185_2 "e.interface_blocks.in.named_block_explicit_location.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022185, VkglTestCase_022185_1, VkglTestCase_022185_2);

#define VkglTestCase_022186_1 "dEQP-GLES31.functional.program_interface_query.program_input.typ"
#define VkglTestCase_022186_2 "e.interface_blocks.in.named_block_explicit_location.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022186, VkglTestCase_022186_1, VkglTestCase_022186_2);

#define VkglTestCase_022264_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.i"
#define VkglTestCase_022264_2 "nterface_blocks.patch_in.named_block_explicit_location.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022264, VkglTestCase_022264_1, VkglTestCase_022264_2);

#define VkglTestCase_022265_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022265_2 "interface_blocks.patch_in.named_block_explicit_location.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022265, VkglTestCase_022265_1, VkglTestCase_022265_2);

#define VkglTestCase_022266_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022266_2 "interface_blocks.patch_in.named_block_explicit_location.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022266, VkglTestCase_022266_1, VkglTestCase_022266_2);

#define VkglTestCase_022267_1 "dEQP-GLES31.functional.program_interface_query.program_input.type."
#define VkglTestCase_022267_2 "interface_blocks.patch_in.named_block_explicit_location.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022267, VkglTestCase_022267_1, VkglTestCase_022267_2);

#define VkglTestCase_022268_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.i"
#define VkglTestCase_022268_2 "nterface_blocks.patch_in.named_block_explicit_location.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022268, VkglTestCase_022268_1, VkglTestCase_022268_2);

#define VkglTestCase_022269_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.i"
#define VkglTestCase_022269_2 "nterface_blocks.patch_in.named_block_explicit_location.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022269, VkglTestCase_022269_1, VkglTestCase_022269_2);

#define VkglTestCase_022270_1 "dEQP-GLES31.functional.program_interface_query.program_input.type.i"
#define VkglTestCase_022270_2 "nterface_blocks.patch_in.named_block_explicit_location.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022270, VkglTestCase_022270_1, VkglTestCase_022270_2);

#define VkglTestCase_022822_1 "dEQP-GLES31.functional.program_interface_query.program_output.typ"
#define VkglTestCase_022822_2 "e.interface_blocks.out.named_block_explicit_location.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022822, VkglTestCase_022822_1, VkglTestCase_022822_2);

#define VkglTestCase_022823_1 "dEQP-GLES31.functional.program_interface_query.program_output.ty"
#define VkglTestCase_022823_2 "pe.interface_blocks.out.named_block_explicit_location.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022823, VkglTestCase_022823_1, VkglTestCase_022823_2);

#define VkglTestCase_022824_1 "dEQP-GLES31.functional.program_interface_query.program_output.ty"
#define VkglTestCase_022824_2 "pe.interface_blocks.out.named_block_explicit_location.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022824, VkglTestCase_022824_1, VkglTestCase_022824_2);

#define VkglTestCase_022825_1 "dEQP-GLES31.functional.program_interface_query.program_output.ty"
#define VkglTestCase_022825_2 "pe.interface_blocks.out.named_block_explicit_location.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022825, VkglTestCase_022825_1, VkglTestCase_022825_2);

#define VkglTestCase_022826_1 "dEQP-GLES31.functional.program_interface_query.program_output.typ"
#define VkglTestCase_022826_2 "e.interface_blocks.out.named_block_explicit_location.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022826, VkglTestCase_022826_1, VkglTestCase_022826_2);

#define VkglTestCase_022827_1 "dEQP-GLES31.functional.program_interface_query.program_output.typ"
#define VkglTestCase_022827_2 "e.interface_blocks.out.named_block_explicit_location.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022827, VkglTestCase_022827_1, VkglTestCase_022827_2);

#define VkglTestCase_022828_1 "dEQP-GLES31.functional.program_interface_query.program_output.typ"
#define VkglTestCase_022828_2 "e.interface_blocks.out.named_block_explicit_location.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022828, VkglTestCase_022828_1, VkglTestCase_022828_2);

#define VkglTestCase_022897_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.i"
#define VkglTestCase_022897_2 "nterface_blocks.patch_out.named_block_explicit_location.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022897, VkglTestCase_022897_1, VkglTestCase_022897_2);

#define VkglTestCase_022898_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.i"
#define VkglTestCase_022898_2 "nterface_blocks.patch_out.named_block_explicit_location.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022898, VkglTestCase_022898_1, VkglTestCase_022898_2);

#define VkglTestCase_022899_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.i"
#define VkglTestCase_022899_2 "nterface_blocks.patch_out.named_block_explicit_location.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022899, VkglTestCase_022899_1, VkglTestCase_022899_2);

#define VkglTestCase_022900_1 "dEQP-GLES31.functional.program_interface_query.program_output.type.i"
#define VkglTestCase_022900_2 "nterface_blocks.patch_out.named_block_explicit_location.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022900, VkglTestCase_022900_1, VkglTestCase_022900_2);
