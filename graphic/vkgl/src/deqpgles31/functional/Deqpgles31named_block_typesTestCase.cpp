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

#define VkglTestCase_020216_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020216_2 "ry.uniform.array_size.named_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020216, VkglTestCase_020216_1, VkglTestCase_020216_2);

#define VkglTestCase_020217_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020217_2 "ery.uniform.array_size.named_block.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020217, VkglTestCase_020217_1, VkglTestCase_020217_2);

#define VkglTestCase_020218_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020218_2 "ry.uniform.array_size.named_block.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020218, VkglTestCase_020218_1, VkglTestCase_020218_2);

#define VkglTestCase_020219_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020219_2 "ry.uniform.array_size.named_block.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020219, VkglTestCase_020219_1, VkglTestCase_020219_2);

#define VkglTestCase_020220_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020220_2 "ry.uniform.array_size.named_block.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020220, VkglTestCase_020220_1, VkglTestCase_020220_2);

#define VkglTestCase_020221_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020221_2 "ry.uniform.array_size.named_block.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020221, VkglTestCase_020221_1, VkglTestCase_020221_2);

#define VkglTestCase_020222_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020222_2 "ry.uniform.array_size.named_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020222, VkglTestCase_020222_1, VkglTestCase_020222_2);

#define VkglTestCase_020223_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020223_2 "ry.uniform.array_size.named_block.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020223, VkglTestCase_020223_1, VkglTestCase_020223_2);

#define VkglTestCase_020224_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020224_2 "ry.uniform.array_size.named_block.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020224, VkglTestCase_020224_1, VkglTestCase_020224_2);

#define VkglTestCase_020225_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020225_2 "ry.uniform.array_size.named_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020225, VkglTestCase_020225_1, VkglTestCase_020225_2);

#define VkglTestCase_020226_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020226_2 "y.uniform.array_size.named_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020226, VkglTestCase_020226_1, VkglTestCase_020226_2);

#define VkglTestCase_020227_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020227_2 "ry.uniform.array_size.named_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020227, VkglTestCase_020227_1, VkglTestCase_020227_2);

#define VkglTestCase_020228_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020228_2 "y.uniform.array_size.named_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020228, VkglTestCase_020228_1, VkglTestCase_020228_2);

#define VkglTestCase_020229_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020229_2 "ry.uniform.array_size.named_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020229, VkglTestCase_020229_1, VkglTestCase_020229_2);

#define VkglTestCase_020315_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020315_2 "y.uniform.array_stride.named_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020315, VkglTestCase_020315_1, VkglTestCase_020315_2);

#define VkglTestCase_020316_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020316_2 "ry.uniform.array_stride.named_block.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020316, VkglTestCase_020316_1, VkglTestCase_020316_2);

#define VkglTestCase_020317_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020317_2 "y.uniform.array_stride.named_block.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020317, VkglTestCase_020317_1, VkglTestCase_020317_2);

#define VkglTestCase_020318_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020318_2 "y.uniform.array_stride.named_block.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020318, VkglTestCase_020318_1, VkglTestCase_020318_2);

#define VkglTestCase_020319_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020319_2 "y.uniform.array_stride.named_block.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020319, VkglTestCase_020319_1, VkglTestCase_020319_2);

#define VkglTestCase_020320_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020320_2 "y.uniform.array_stride.named_block.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020320, VkglTestCase_020320_1, VkglTestCase_020320_2);

#define VkglTestCase_020321_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020321_2 "y.uniform.array_stride.named_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020321, VkglTestCase_020321_1, VkglTestCase_020321_2);

#define VkglTestCase_020322_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020322_2 "y.uniform.array_stride.named_block.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020322, VkglTestCase_020322_1, VkglTestCase_020322_2);

#define VkglTestCase_020323_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020323_2 "y.uniform.array_stride.named_block.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020323, VkglTestCase_020323_1, VkglTestCase_020323_2);

#define VkglTestCase_020324_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020324_2 "y.uniform.array_stride.named_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020324, VkglTestCase_020324_1, VkglTestCase_020324_2);

#define VkglTestCase_020325_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020325_2 ".uniform.array_stride.named_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020325, VkglTestCase_020325_1, VkglTestCase_020325_2);

#define VkglTestCase_020326_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020326_2 "y.uniform.array_stride.named_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020326, VkglTestCase_020326_1, VkglTestCase_020326_2);

#define VkglTestCase_020327_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020327_2 ".uniform.array_stride.named_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020327, VkglTestCase_020327_1, VkglTestCase_020327_2);

#define VkglTestCase_020328_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020328_2 "y.uniform.array_stride.named_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020328, VkglTestCase_020328_1, VkglTestCase_020328_2);

#define VkglTestCase_020899_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020899_2 "uery.uniform.offset.named_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020899, VkglTestCase_020899_1, VkglTestCase_020899_2);

#define VkglTestCase_020900_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_020900_2 "query.uniform.offset.named_block.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020900, VkglTestCase_020900_1, VkglTestCase_020900_2);

#define VkglTestCase_020901_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020901_2 "uery.uniform.offset.named_block.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020901, VkglTestCase_020901_1, VkglTestCase_020901_2);

#define VkglTestCase_020902_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020902_2 "uery.uniform.offset.named_block.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020902, VkglTestCase_020902_1, VkglTestCase_020902_2);

#define VkglTestCase_020903_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020903_2 "uery.uniform.offset.named_block.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020903, VkglTestCase_020903_1, VkglTestCase_020903_2);

#define VkglTestCase_020904_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020904_2 "uery.uniform.offset.named_block.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020904, VkglTestCase_020904_1, VkglTestCase_020904_2);

#define VkglTestCase_020905_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020905_2 "uery.uniform.offset.named_block.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020905, VkglTestCase_020905_1, VkglTestCase_020905_2);

#define VkglTestCase_020906_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020906_2 "uery.uniform.offset.named_block.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020906, VkglTestCase_020906_1, VkglTestCase_020906_2);

#define VkglTestCase_020907_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020907_2 "uery.uniform.offset.named_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020907, VkglTestCase_020907_1, VkglTestCase_020907_2);

#define VkglTestCase_020908_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020908_2 "uery.uniform.offset.named_block.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020908, VkglTestCase_020908_1, VkglTestCase_020908_2);

#define VkglTestCase_020909_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020909_2 "uery.uniform.offset.named_block.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020909, VkglTestCase_020909_1, VkglTestCase_020909_2);

#define VkglTestCase_020910_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020910_2 "uery.uniform.offset.named_block.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020910, VkglTestCase_020910_1, VkglTestCase_020910_2);

#define VkglTestCase_020911_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020911_2 "uery.uniform.offset.named_block.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020911, VkglTestCase_020911_1, VkglTestCase_020911_2);

#define VkglTestCase_020912_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020912_2 "uery.uniform.offset.named_block.types.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020912, VkglTestCase_020912_1, VkglTestCase_020912_2);

#define VkglTestCase_020913_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020913_2 "uery.uniform.offset.named_block.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020913, VkglTestCase_020913_1, VkglTestCase_020913_2);

#define VkglTestCase_020914_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020914_2 "uery.uniform.offset.named_block.types.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020914, VkglTestCase_020914_1, VkglTestCase_020914_2);

#define VkglTestCase_020915_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020915_2 "uery.uniform.offset.named_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020915, VkglTestCase_020915_1, VkglTestCase_020915_2);

#define VkglTestCase_020916_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020916_2 "ery.uniform.offset.named_block.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020916, VkglTestCase_020916_1, VkglTestCase_020916_2);

#define VkglTestCase_020917_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020917_2 "ery.uniform.offset.named_block.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020917, VkglTestCase_020917_1, VkglTestCase_020917_2);

#define VkglTestCase_020918_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020918_2 "ery.uniform.offset.named_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020918, VkglTestCase_020918_1, VkglTestCase_020918_2);

#define VkglTestCase_020919_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020919_2 "uery.uniform.offset.named_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020919, VkglTestCase_020919_1, VkglTestCase_020919_2);

#define VkglTestCase_020920_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020920_2 "ery.uniform.offset.named_block.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020920, VkglTestCase_020920_1, VkglTestCase_020920_2);

#define VkglTestCase_020921_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020921_2 "ery.uniform.offset.named_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020921, VkglTestCase_020921_1, VkglTestCase_020921_2);

#define VkglTestCase_020922_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020922_2 "ery.uniform.offset.named_block.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020922, VkglTestCase_020922_1, VkglTestCase_020922_2);

#define VkglTestCase_020923_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020923_2 "uery.uniform.offset.named_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020923, VkglTestCase_020923_1, VkglTestCase_020923_2);

#define VkglTestCase_021497_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021497_2 "query.uniform.type.named_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021497, VkglTestCase_021497_1, VkglTestCase_021497_2);

#define VkglTestCase_021498_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_021498_2 "_query.uniform.type.named_block.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021498, VkglTestCase_021498_1, VkglTestCase_021498_2);

#define VkglTestCase_021499_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021499_2 "query.uniform.type.named_block.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021499, VkglTestCase_021499_1, VkglTestCase_021499_2);

#define VkglTestCase_021500_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021500_2 "query.uniform.type.named_block.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021500, VkglTestCase_021500_1, VkglTestCase_021500_2);

#define VkglTestCase_021501_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021501_2 "query.uniform.type.named_block.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021501, VkglTestCase_021501_1, VkglTestCase_021501_2);

#define VkglTestCase_021502_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021502_2 "query.uniform.type.named_block.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021502, VkglTestCase_021502_1, VkglTestCase_021502_2);

#define VkglTestCase_021503_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021503_2 "query.uniform.type.named_block.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021503, VkglTestCase_021503_1, VkglTestCase_021503_2);

#define VkglTestCase_021504_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021504_2 "query.uniform.type.named_block.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021504, VkglTestCase_021504_1, VkglTestCase_021504_2);

#define VkglTestCase_021505_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021505_2 "query.uniform.type.named_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021505, VkglTestCase_021505_1, VkglTestCase_021505_2);

#define VkglTestCase_021506_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021506_2 "query.uniform.type.named_block.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021506, VkglTestCase_021506_1, VkglTestCase_021506_2);

#define VkglTestCase_021507_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021507_2 "query.uniform.type.named_block.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021507, VkglTestCase_021507_1, VkglTestCase_021507_2);

#define VkglTestCase_021508_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021508_2 "query.uniform.type.named_block.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021508, VkglTestCase_021508_1, VkglTestCase_021508_2);

#define VkglTestCase_021509_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021509_2 "query.uniform.type.named_block.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021509, VkglTestCase_021509_1, VkglTestCase_021509_2);

#define VkglTestCase_021510_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021510_2 "query.uniform.type.named_block.types.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021510, VkglTestCase_021510_1, VkglTestCase_021510_2);

#define VkglTestCase_021511_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021511_2 "query.uniform.type.named_block.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021511, VkglTestCase_021511_1, VkglTestCase_021511_2);

#define VkglTestCase_021512_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021512_2 "query.uniform.type.named_block.types.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021512, VkglTestCase_021512_1, VkglTestCase_021512_2);

#define VkglTestCase_021513_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021513_2 "query.uniform.type.named_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021513, VkglTestCase_021513_1, VkglTestCase_021513_2);

#define VkglTestCase_021514_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021514_2 "uery.uniform.type.named_block.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021514, VkglTestCase_021514_1, VkglTestCase_021514_2);

#define VkglTestCase_021515_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021515_2 "uery.uniform.type.named_block.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021515, VkglTestCase_021515_1, VkglTestCase_021515_2);

#define VkglTestCase_021516_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021516_2 "uery.uniform.type.named_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021516, VkglTestCase_021516_1, VkglTestCase_021516_2);

#define VkglTestCase_021517_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021517_2 "query.uniform.type.named_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021517, VkglTestCase_021517_1, VkglTestCase_021517_2);

#define VkglTestCase_021518_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021518_2 "uery.uniform.type.named_block.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021518, VkglTestCase_021518_1, VkglTestCase_021518_2);

#define VkglTestCase_021519_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021519_2 "uery.uniform.type.named_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021519, VkglTestCase_021519_1, VkglTestCase_021519_2);

#define VkglTestCase_021520_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021520_2 "uery.uniform.type.named_block.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021520, VkglTestCase_021520_1, VkglTestCase_021520_2);

#define VkglTestCase_021521_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021521_2 "query.uniform.type.named_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021521, VkglTestCase_021521_1, VkglTestCase_021521_2);

#define VkglTestCase_023714_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023714_2 "ffer_variable.is_row_major.named_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023714, VkglTestCase_023714_1, VkglTestCase_023714_2);

#define VkglTestCase_023715_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023715_2 "ffer_variable.is_row_major.named_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023715, VkglTestCase_023715_1, VkglTestCase_023715_2);

#define VkglTestCase_023716_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023716_2 "ffer_variable.is_row_major.named_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023716, VkglTestCase_023716_1, VkglTestCase_023716_2);

#define VkglTestCase_023717_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023717_2 "fer_variable.is_row_major.named_block.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023717, VkglTestCase_023717_1, VkglTestCase_023717_2);

#define VkglTestCase_023718_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023718_2 "fer_variable.is_row_major.named_block.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023718, VkglTestCase_023718_1, VkglTestCase_023718_2);

#define VkglTestCase_023719_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023719_2 "fer_variable.is_row_major.named_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023719, VkglTestCase_023719_1, VkglTestCase_023719_2);

#define VkglTestCase_023720_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023720_2 "ffer_variable.is_row_major.named_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023720, VkglTestCase_023720_1, VkglTestCase_023720_2);

#define VkglTestCase_023721_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023721_2 "fer_variable.is_row_major.named_block.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023721, VkglTestCase_023721_1, VkglTestCase_023721_2);

#define VkglTestCase_023722_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023722_2 "fer_variable.is_row_major.named_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023722, VkglTestCase_023722_1, VkglTestCase_023722_2);

#define VkglTestCase_023723_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023723_2 "fer_variable.is_row_major.named_block.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023723, VkglTestCase_023723_1, VkglTestCase_023723_2);

#define VkglTestCase_023724_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023724_2 "ffer_variable.is_row_major.named_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023724, VkglTestCase_023724_1, VkglTestCase_023724_2);

#define VkglTestCase_023869_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023869_2 "fer_variable.matrix_stride.named_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023869, VkglTestCase_023869_1, VkglTestCase_023869_2);

#define VkglTestCase_023870_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023870_2 "fer_variable.matrix_stride.named_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023870, VkglTestCase_023870_1, VkglTestCase_023870_2);

#define VkglTestCase_023871_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023871_2 "ffer_variable.matrix_stride.named_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023871, VkglTestCase_023871_1, VkglTestCase_023871_2);

#define VkglTestCase_023872_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023872_2 "fer_variable.matrix_stride.named_block.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023872, VkglTestCase_023872_1, VkglTestCase_023872_2);

#define VkglTestCase_023873_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023873_2 "fer_variable.matrix_stride.named_block.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023873, VkglTestCase_023873_1, VkglTestCase_023873_2);

#define VkglTestCase_023874_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023874_2 "fer_variable.matrix_stride.named_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023874, VkglTestCase_023874_1, VkglTestCase_023874_2);

#define VkglTestCase_023875_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023875_2 "ffer_variable.matrix_stride.named_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023875, VkglTestCase_023875_1, VkglTestCase_023875_2);

#define VkglTestCase_023876_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023876_2 "fer_variable.matrix_stride.named_block.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023876, VkglTestCase_023876_1, VkglTestCase_023876_2);

#define VkglTestCase_023877_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023877_2 "fer_variable.matrix_stride.named_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023877, VkglTestCase_023877_1, VkglTestCase_023877_2);

#define VkglTestCase_023878_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023878_2 "fer_variable.matrix_stride.named_block.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023878, VkglTestCase_023878_1, VkglTestCase_023878_2);

#define VkglTestCase_023879_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023879_2 "ffer_variable.matrix_stride.named_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023879, VkglTestCase_023879_1, VkglTestCase_023879_2);
