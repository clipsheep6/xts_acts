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

#define VkglTestCase_020385_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020385_2 ".uniform.array_stride.block_array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020385, VkglTestCase_020385_1, VkglTestCase_020385_2);

#define VkglTestCase_020386_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020386_2 "y.uniform.array_stride.block_array.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020386, VkglTestCase_020386_1, VkglTestCase_020386_2);

#define VkglTestCase_020387_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020387_2 "y.uniform.array_stride.block_array.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020387, VkglTestCase_020387_1, VkglTestCase_020387_2);

#define VkglTestCase_020388_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020388_2 "y.uniform.array_stride.block_array.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020388, VkglTestCase_020388_1, VkglTestCase_020388_2);

#define VkglTestCase_020389_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020389_2 "y.uniform.array_stride.block_array.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020389, VkglTestCase_020389_1, VkglTestCase_020389_2);

#define VkglTestCase_020390_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020390_2 "y.uniform.array_stride.block_array.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020390, VkglTestCase_020390_1, VkglTestCase_020390_2);

#define VkglTestCase_020956_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020956_2 "ery.uniform.offset.block_array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020956, VkglTestCase_020956_1, VkglTestCase_020956_2);

#define VkglTestCase_020957_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020957_2 "uery.uniform.offset.block_array.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020957, VkglTestCase_020957_1, VkglTestCase_020957_2);

#define VkglTestCase_020958_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020958_2 "uery.uniform.offset.block_array.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020958, VkglTestCase_020958_1, VkglTestCase_020958_2);

#define VkglTestCase_020959_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020959_2 "uery.uniform.offset.block_array.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020959, VkglTestCase_020959_1, VkglTestCase_020959_2);

#define VkglTestCase_020960_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020960_2 "uery.uniform.offset.block_array.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020960, VkglTestCase_020960_1, VkglTestCase_020960_2);

#define VkglTestCase_020961_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020961_2 "uery.uniform.offset.block_array.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020961, VkglTestCase_020961_1, VkglTestCase_020961_2);

#define VkglTestCase_021564_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021564_2 "uery.uniform.type.block_array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021564, VkglTestCase_021564_1, VkglTestCase_021564_2);

#define VkglTestCase_021565_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021565_2 "query.uniform.type.block_array.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021565, VkglTestCase_021565_1, VkglTestCase_021565_2);

#define VkglTestCase_021566_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021566_2 "query.uniform.type.block_array.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021566, VkglTestCase_021566_1, VkglTestCase_021566_2);

#define VkglTestCase_021567_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021567_2 "query.uniform.type.block_array.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021567, VkglTestCase_021567_1, VkglTestCase_021567_2);

#define VkglTestCase_021568_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021568_2 "query.uniform.type.block_array.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021568, VkglTestCase_021568_1, VkglTestCase_021568_2);

#define VkglTestCase_021569_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021569_2 "query.uniform.type.block_array.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021569, VkglTestCase_021569_1, VkglTestCase_021569_2);

#define VkglTestCase_022222_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022222_2 "input.type.interface_blocks.in.block_array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022222, VkglTestCase_022222_1, VkglTestCase_022222_2);

#define VkglTestCase_022223_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022223_2 "_input.type.interface_blocks.in.block_array.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022223, VkglTestCase_022223_1, VkglTestCase_022223_2);

#define VkglTestCase_022224_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022224_2 "_input.type.interface_blocks.in.block_array.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022224, VkglTestCase_022224_1, VkglTestCase_022224_2);

#define VkglTestCase_022225_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022225_2 "_input.type.interface_blocks.in.block_array.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022225, VkglTestCase_022225_1, VkglTestCase_022225_2);

#define VkglTestCase_022226_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022226_2 "input.type.interface_blocks.in.block_array.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022226, VkglTestCase_022226_1, VkglTestCase_022226_2);

#define VkglTestCase_022227_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022227_2 "input.type.interface_blocks.in.block_array.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022227, VkglTestCase_022227_1, VkglTestCase_022227_2);

#define VkglTestCase_022228_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022228_2 "input.type.interface_blocks.in.block_array.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022228, VkglTestCase_022228_1, VkglTestCase_022228_2);

#define VkglTestCase_022306_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022306_2 "ut.type.interface_blocks.patch_in.block_array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022306, VkglTestCase_022306_1, VkglTestCase_022306_2);

#define VkglTestCase_022307_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022307_2 "put.type.interface_blocks.patch_in.block_array.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022307, VkglTestCase_022307_1, VkglTestCase_022307_2);

#define VkglTestCase_022308_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022308_2 "put.type.interface_blocks.patch_in.block_array.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022308, VkglTestCase_022308_1, VkglTestCase_022308_2);

#define VkglTestCase_022309_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022309_2 "put.type.interface_blocks.patch_in.block_array.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022309, VkglTestCase_022309_1, VkglTestCase_022309_2);

#define VkglTestCase_022310_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022310_2 "ut.type.interface_blocks.patch_in.block_array.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022310, VkglTestCase_022310_1, VkglTestCase_022310_2);

#define VkglTestCase_022311_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022311_2 "ut.type.interface_blocks.patch_in.block_array.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022311, VkglTestCase_022311_1, VkglTestCase_022311_2);

#define VkglTestCase_022312_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022312_2 "ut.type.interface_blocks.patch_in.block_array.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022312, VkglTestCase_022312_1, VkglTestCase_022312_2);

#define VkglTestCase_022864_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022864_2 "utput.type.interface_blocks.out.block_array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022864, VkglTestCase_022864_1, VkglTestCase_022864_2);

#define VkglTestCase_022865_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022865_2 "output.type.interface_blocks.out.block_array.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022865, VkglTestCase_022865_1, VkglTestCase_022865_2);

#define VkglTestCase_022866_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022866_2 "output.type.interface_blocks.out.block_array.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022866, VkglTestCase_022866_1, VkglTestCase_022866_2);

#define VkglTestCase_022867_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022867_2 "output.type.interface_blocks.out.block_array.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022867, VkglTestCase_022867_1, VkglTestCase_022867_2);

#define VkglTestCase_022868_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022868_2 "utput.type.interface_blocks.out.block_array.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022868, VkglTestCase_022868_1, VkglTestCase_022868_2);

#define VkglTestCase_022869_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022869_2 "utput.type.interface_blocks.out.block_array.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022869, VkglTestCase_022869_1, VkglTestCase_022869_2);

#define VkglTestCase_022870_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022870_2 "utput.type.interface_blocks.out.block_array.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022870, VkglTestCase_022870_1, VkglTestCase_022870_2);

#define VkglTestCase_022927_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022927_2 "ut.type.interface_blocks.patch_out.block_array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022927, VkglTestCase_022927_1, VkglTestCase_022927_2);

#define VkglTestCase_022928_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022928_2 "ut.type.interface_blocks.patch_out.block_array.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022928, VkglTestCase_022928_1, VkglTestCase_022928_2);

#define VkglTestCase_022929_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022929_2 "ut.type.interface_blocks.patch_out.block_array.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022929, VkglTestCase_022929_1, VkglTestCase_022929_2);

#define VkglTestCase_022930_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022930_2 "ut.type.interface_blocks.patch_out.block_array.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022930, VkglTestCase_022930_1, VkglTestCase_022930_2);
