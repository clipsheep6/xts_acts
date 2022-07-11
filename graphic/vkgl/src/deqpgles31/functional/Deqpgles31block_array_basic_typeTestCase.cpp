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

#define VkglTestCase_020373_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020373_2 "niform.array_stride.block_array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020373, VkglTestCase_020373_1, VkglTestCase_020373_2);

#define VkglTestCase_020374_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020374_2 "uniform.array_stride.block_array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020374, VkglTestCase_020374_1, VkglTestCase_020374_2);

#define VkglTestCase_020375_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020375_2 "uniform.array_stride.block_array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020375, VkglTestCase_020375_1, VkglTestCase_020375_2);

#define VkglTestCase_020376_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020376_2 "uniform.array_stride.block_array.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020376, VkglTestCase_020376_1, VkglTestCase_020376_2);

#define VkglTestCase_020377_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020377_2 "uniform.array_stride.block_array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020377, VkglTestCase_020377_1, VkglTestCase_020377_2);

#define VkglTestCase_020378_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020378_2 "uniform.array_stride.block_array.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020378, VkglTestCase_020378_1, VkglTestCase_020378_2);

#define VkglTestCase_020944_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020944_2 "y.uniform.offset.block_array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020944, VkglTestCase_020944_1, VkglTestCase_020944_2);

#define VkglTestCase_020945_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020945_2 "ry.uniform.offset.block_array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020945, VkglTestCase_020945_1, VkglTestCase_020945_2);

#define VkglTestCase_020946_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020946_2 "ry.uniform.offset.block_array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020946, VkglTestCase_020946_1, VkglTestCase_020946_2);

#define VkglTestCase_020947_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020947_2 "ry.uniform.offset.block_array.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020947, VkglTestCase_020947_1, VkglTestCase_020947_2);

#define VkglTestCase_020948_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020948_2 "ry.uniform.offset.block_array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020948, VkglTestCase_020948_1, VkglTestCase_020948_2);

#define VkglTestCase_020949_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020949_2 "ry.uniform.offset.block_array.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020949, VkglTestCase_020949_1, VkglTestCase_020949_2);

#define VkglTestCase_021552_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021552_2 "ry.uniform.type.block_array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021552, VkglTestCase_021552_1, VkglTestCase_021552_2);

#define VkglTestCase_021553_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021553_2 "ery.uniform.type.block_array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021553, VkglTestCase_021553_1, VkglTestCase_021553_2);

#define VkglTestCase_021554_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021554_2 "ery.uniform.type.block_array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021554, VkglTestCase_021554_1, VkglTestCase_021554_2);

#define VkglTestCase_021555_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021555_2 "ery.uniform.type.block_array.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021555, VkglTestCase_021555_1, VkglTestCase_021555_2);

#define VkglTestCase_021556_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021556_2 "ery.uniform.type.block_array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021556, VkglTestCase_021556_1, VkglTestCase_021556_2);

#define VkglTestCase_021557_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021557_2 "ery.uniform.type.block_array.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021557, VkglTestCase_021557_1, VkglTestCase_021557_2);

#define VkglTestCase_022208_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022208_2 "put.type.interface_blocks.in.block_array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022208, VkglTestCase_022208_1, VkglTestCase_022208_2);

#define VkglTestCase_022209_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022209_2 "nput.type.interface_blocks.in.block_array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022209, VkglTestCase_022209_1, VkglTestCase_022209_2);

#define VkglTestCase_022210_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022210_2 "nput.type.interface_blocks.in.block_array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022210, VkglTestCase_022210_1, VkglTestCase_022210_2);

#define VkglTestCase_022211_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_022211_2 "nput.type.interface_blocks.in.block_array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022211, VkglTestCase_022211_1, VkglTestCase_022211_2);

#define VkglTestCase_022212_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022212_2 "put.type.interface_blocks.in.block_array.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022212, VkglTestCase_022212_1, VkglTestCase_022212_2);

#define VkglTestCase_022213_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022213_2 "put.type.interface_blocks.in.block_array.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022213, VkglTestCase_022213_1, VkglTestCase_022213_2);

#define VkglTestCase_022214_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022214_2 "put.type.interface_blocks.in.block_array.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022214, VkglTestCase_022214_1, VkglTestCase_022214_2);

#define VkglTestCase_022292_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022292_2 ".type.interface_blocks.patch_in.block_array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022292, VkglTestCase_022292_1, VkglTestCase_022292_2);

#define VkglTestCase_022293_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022293_2 "t.type.interface_blocks.patch_in.block_array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022293, VkglTestCase_022293_1, VkglTestCase_022293_2);

#define VkglTestCase_022294_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022294_2 "t.type.interface_blocks.patch_in.block_array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022294, VkglTestCase_022294_1, VkglTestCase_022294_2);

#define VkglTestCase_022295_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022295_2 "t.type.interface_blocks.patch_in.block_array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022295, VkglTestCase_022295_1, VkglTestCase_022295_2);

#define VkglTestCase_022296_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022296_2 ".type.interface_blocks.patch_in.block_array.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022296, VkglTestCase_022296_1, VkglTestCase_022296_2);

#define VkglTestCase_022297_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022297_2 ".type.interface_blocks.patch_in.block_array.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022297, VkglTestCase_022297_1, VkglTestCase_022297_2);

#define VkglTestCase_022298_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022298_2 ".type.interface_blocks.patch_in.block_array.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022298, VkglTestCase_022298_1, VkglTestCase_022298_2);

#define VkglTestCase_022850_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022850_2 "put.type.interface_blocks.out.block_array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022850, VkglTestCase_022850_1, VkglTestCase_022850_2);

#define VkglTestCase_022851_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022851_2 "tput.type.interface_blocks.out.block_array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022851, VkglTestCase_022851_1, VkglTestCase_022851_2);

#define VkglTestCase_022852_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022852_2 "tput.type.interface_blocks.out.block_array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022852, VkglTestCase_022852_1, VkglTestCase_022852_2);

#define VkglTestCase_022853_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022853_2 "tput.type.interface_blocks.out.block_array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022853, VkglTestCase_022853_1, VkglTestCase_022853_2);

#define VkglTestCase_022854_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022854_2 "put.type.interface_blocks.out.block_array.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022854, VkglTestCase_022854_1, VkglTestCase_022854_2);

#define VkglTestCase_022855_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022855_2 "put.type.interface_blocks.out.block_array.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022855, VkglTestCase_022855_1, VkglTestCase_022855_2);

#define VkglTestCase_022856_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022856_2 "put.type.interface_blocks.out.block_array.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022856, VkglTestCase_022856_1, VkglTestCase_022856_2);

#define VkglTestCase_022916_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022916_2 ".type.interface_blocks.patch_out.block_array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022916, VkglTestCase_022916_1, VkglTestCase_022916_2);

#define VkglTestCase_022917_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022917_2 "t.type.interface_blocks.patch_out.block_array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022917, VkglTestCase_022917_1, VkglTestCase_022917_2);

#define VkglTestCase_022918_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022918_2 "t.type.interface_blocks.patch_out.block_array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022918, VkglTestCase_022918_1, VkglTestCase_022918_2);

#define VkglTestCase_022919_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022919_2 "t.type.interface_blocks.patch_out.block_array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022919, VkglTestCase_022919_1, VkglTestCase_022919_2);

#define VkglTestCase_022920_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022920_2 ".type.interface_blocks.patch_out.block_array.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022920, VkglTestCase_022920_1, VkglTestCase_022920_2);

#define VkglTestCase_022921_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022921_2 ".type.interface_blocks.patch_out.block_array.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022921, VkglTestCase_022921_1, VkglTestCase_022921_2);

#define VkglTestCase_022922_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022922_2 ".type.interface_blocks.patch_out.block_array.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022922, VkglTestCase_022922_1, VkglTestCase_022922_2);
