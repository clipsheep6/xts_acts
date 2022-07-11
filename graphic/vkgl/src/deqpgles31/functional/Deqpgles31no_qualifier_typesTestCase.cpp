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

#define VkglTestCase_020620_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020620_2 "matrix_row_major.default_block.no_qualifier.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020620, VkglTestCase_020620_1, VkglTestCase_020620_2);

#define VkglTestCase_020621_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020621_2 ".matrix_row_major.default_block.no_qualifier.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020621, VkglTestCase_020621_1, VkglTestCase_020621_2);

#define VkglTestCase_020622_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020622_2 ".matrix_row_major.default_block.no_qualifier.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020622, VkglTestCase_020622_1, VkglTestCase_020622_2);

#define VkglTestCase_020623_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020623_2 ".matrix_row_major.default_block.no_qualifier.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020623, VkglTestCase_020623_1, VkglTestCase_020623_2);

#define VkglTestCase_020624_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020624_2 ".matrix_row_major.default_block.no_qualifier.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020624, VkglTestCase_020624_1, VkglTestCase_020624_2);

#define VkglTestCase_020625_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020625_2 ".matrix_row_major.default_block.no_qualifier.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020625, VkglTestCase_020625_1, VkglTestCase_020625_2);

#define VkglTestCase_020626_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020626_2 ".matrix_row_major.default_block.no_qualifier.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020626, VkglTestCase_020626_1, VkglTestCase_020626_2);

#define VkglTestCase_020627_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020627_2 "matrix_row_major.default_block.no_qualifier.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020627, VkglTestCase_020627_1, VkglTestCase_020627_2);

#define VkglTestCase_020628_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020628_2 ".matrix_row_major.default_block.no_qualifier.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020628, VkglTestCase_020628_1, VkglTestCase_020628_2);

#define VkglTestCase_020629_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020629_2 "matrix_row_major.default_block.no_qualifier.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020629, VkglTestCase_020629_1, VkglTestCase_020629_2);

#define VkglTestCase_020630_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020630_2 "matrix_row_major.default_block.no_qualifier.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020630, VkglTestCase_020630_1, VkglTestCase_020630_2);

#define VkglTestCase_020631_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020631_2 ".matrix_row_major.default_block.no_qualifier.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020631, VkglTestCase_020631_1, VkglTestCase_020631_2);

#define VkglTestCase_020632_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020632_2 "trix_row_major.default_block.no_qualifier.types.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020632, VkglTestCase_020632_1, VkglTestCase_020632_2);

#define VkglTestCase_020633_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020633_2 "rix_row_major.default_block.no_qualifier.types.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020633, VkglTestCase_020633_1, VkglTestCase_020633_2);

#define VkglTestCase_020634_1 "dEQP-GLES31.functional.program_interface_query.uniform.matri"
#define VkglTestCase_020634_2 "x_row_major.default_block.no_qualifier.types.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020634, VkglTestCase_020634_1, VkglTestCase_020634_2);

#define VkglTestCase_020635_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020635_2 "trix_row_major.default_block.no_qualifier.types.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020635, VkglTestCase_020635_1, VkglTestCase_020635_2);

#define VkglTestCase_020636_1 "dEQP-GLES31.functional.program_interface_query.uniform.matrix"
#define VkglTestCase_020636_2 "_row_major.default_block.no_qualifier.types.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020636, VkglTestCase_020636_1, VkglTestCase_020636_2);

#define VkglTestCase_020637_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020637_2 "rix_row_major.default_block.no_qualifier.types.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020637, VkglTestCase_020637_1, VkglTestCase_020637_2);

#define VkglTestCase_020638_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020638_2 "rix_row_major.default_block.no_qualifier.types.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020638, VkglTestCase_020638_1, VkglTestCase_020638_2);

#define VkglTestCase_020639_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020639_2 "ix_row_major.default_block.no_qualifier.types.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020639, VkglTestCase_020639_1, VkglTestCase_020639_2);

#define VkglTestCase_020640_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020640_2 "ix_row_major.default_block.no_qualifier.types.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020640, VkglTestCase_020640_1, VkglTestCase_020640_2);

#define VkglTestCase_020641_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020641_2 "atrix_row_major.default_block.no_qualifier.types.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020641, VkglTestCase_020641_1, VkglTestCase_020641_2);

#define VkglTestCase_020642_1 "dEQP-GLES31.functional.program_interface_query.uniform.matri"
#define VkglTestCase_020642_2 "x_row_major.default_block.no_qualifier.types.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020642, VkglTestCase_020642_1, VkglTestCase_020642_2);

#define VkglTestCase_020643_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020643_2 "trix_row_major.default_block.no_qualifier.types.uimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020643, VkglTestCase_020643_1, VkglTestCase_020643_2);

#define VkglTestCase_020644_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020644_2 "rix_row_major.default_block.no_qualifier.types.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020644, VkglTestCase_020644_1, VkglTestCase_020644_2);

#define VkglTestCase_020648_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020648_2 ".matrix_row_major.named_block.no_qualifier.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020648, VkglTestCase_020648_1, VkglTestCase_020648_2);

#define VkglTestCase_020649_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020649_2 "m.matrix_row_major.named_block.no_qualifier.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020649, VkglTestCase_020649_1, VkglTestCase_020649_2);

#define VkglTestCase_020650_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020650_2 "m.matrix_row_major.named_block.no_qualifier.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020650, VkglTestCase_020650_1, VkglTestCase_020650_2);

#define VkglTestCase_020651_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020651_2 "m.matrix_row_major.named_block.no_qualifier.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020651, VkglTestCase_020651_1, VkglTestCase_020651_2);

#define VkglTestCase_020652_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020652_2 "m.matrix_row_major.named_block.no_qualifier.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020652, VkglTestCase_020652_1, VkglTestCase_020652_2);

#define VkglTestCase_020653_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020653_2 "m.matrix_row_major.named_block.no_qualifier.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020653, VkglTestCase_020653_1, VkglTestCase_020653_2);

#define VkglTestCase_020654_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020654_2 "m.matrix_row_major.named_block.no_qualifier.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020654, VkglTestCase_020654_1, VkglTestCase_020654_2);

#define VkglTestCase_020655_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020655_2 ".matrix_row_major.named_block.no_qualifier.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020655, VkglTestCase_020655_1, VkglTestCase_020655_2);

#define VkglTestCase_020656_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020656_2 "m.matrix_row_major.named_block.no_qualifier.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020656, VkglTestCase_020656_1, VkglTestCase_020656_2);

#define VkglTestCase_020657_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020657_2 ".matrix_row_major.named_block.no_qualifier.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020657, VkglTestCase_020657_1, VkglTestCase_020657_2);

#define VkglTestCase_020658_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020658_2 ".matrix_row_major.named_block.no_qualifier.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020658, VkglTestCase_020658_1, VkglTestCase_020658_2);

#define VkglTestCase_020659_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020659_2 "m.matrix_row_major.named_block.no_qualifier.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020659, VkglTestCase_020659_1, VkglTestCase_020659_2);

#define VkglTestCase_020714_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020714_2 "m.matrix_stride.default_block.no_qualifier.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020714, VkglTestCase_020714_1, VkglTestCase_020714_2);

#define VkglTestCase_020715_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020715_2 "rm.matrix_stride.default_block.no_qualifier.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020715, VkglTestCase_020715_1, VkglTestCase_020715_2);

#define VkglTestCase_020716_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020716_2 "m.matrix_stride.default_block.no_qualifier.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020716, VkglTestCase_020716_1, VkglTestCase_020716_2);

#define VkglTestCase_020717_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020717_2 "m.matrix_stride.default_block.no_qualifier.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020717, VkglTestCase_020717_1, VkglTestCase_020717_2);

#define VkglTestCase_020718_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020718_2 "m.matrix_stride.default_block.no_qualifier.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020718, VkglTestCase_020718_1, VkglTestCase_020718_2);

#define VkglTestCase_020719_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020719_2 "m.matrix_stride.default_block.no_qualifier.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020719, VkglTestCase_020719_1, VkglTestCase_020719_2);

#define VkglTestCase_020720_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020720_2 "m.matrix_stride.default_block.no_qualifier.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020720, VkglTestCase_020720_1, VkglTestCase_020720_2);

#define VkglTestCase_020721_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020721_2 ".matrix_stride.default_block.no_qualifier.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020721, VkglTestCase_020721_1, VkglTestCase_020721_2);

#define VkglTestCase_020722_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020722_2 "m.matrix_stride.default_block.no_qualifier.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020722, VkglTestCase_020722_1, VkglTestCase_020722_2);

#define VkglTestCase_020723_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020723_2 ".matrix_stride.default_block.no_qualifier.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020723, VkglTestCase_020723_1, VkglTestCase_020723_2);

#define VkglTestCase_020724_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020724_2 ".matrix_stride.default_block.no_qualifier.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020724, VkglTestCase_020724_1, VkglTestCase_020724_2);

#define VkglTestCase_020725_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020725_2 "m.matrix_stride.default_block.no_qualifier.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020725, VkglTestCase_020725_1, VkglTestCase_020725_2);

#define VkglTestCase_020726_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020726_2 "atrix_stride.default_block.no_qualifier.types.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020726, VkglTestCase_020726_1, VkglTestCase_020726_2);

#define VkglTestCase_020727_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020727_2 "trix_stride.default_block.no_qualifier.types.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020727, VkglTestCase_020727_1, VkglTestCase_020727_2);

#define VkglTestCase_020728_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020728_2 "ix_stride.default_block.no_qualifier.types.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020728, VkglTestCase_020728_1, VkglTestCase_020728_2);

#define VkglTestCase_020729_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020729_2 "atrix_stride.default_block.no_qualifier.types.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020729, VkglTestCase_020729_1, VkglTestCase_020729_2);

#define VkglTestCase_020730_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020730_2 "ix_stride.default_block.no_qualifier.types.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020730, VkglTestCase_020730_1, VkglTestCase_020730_2);

#define VkglTestCase_020731_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020731_2 "atrix_stride.default_block.no_qualifier.types.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020731, VkglTestCase_020731_1, VkglTestCase_020731_2);

#define VkglTestCase_020732_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020732_2 "atrix_stride.default_block.no_qualifier.types.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020732, VkglTestCase_020732_1, VkglTestCase_020732_2);

#define VkglTestCase_020733_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020733_2 "trix_stride.default_block.no_qualifier.types.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020733, VkglTestCase_020733_1, VkglTestCase_020733_2);

#define VkglTestCase_020734_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020734_2 "rix_stride.default_block.no_qualifier.types.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020734, VkglTestCase_020734_1, VkglTestCase_020734_2);

#define VkglTestCase_020735_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020735_2 "matrix_stride.default_block.no_qualifier.types.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020735, VkglTestCase_020735_1, VkglTestCase_020735_2);

#define VkglTestCase_020736_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020736_2 "rix_stride.default_block.no_qualifier.types.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020736, VkglTestCase_020736_1, VkglTestCase_020736_2);

#define VkglTestCase_020737_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020737_2 "matrix_stride.default_block.no_qualifier.types.uimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020737, VkglTestCase_020737_1, VkglTestCase_020737_2);

#define VkglTestCase_020738_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020738_2 "atrix_stride.default_block.no_qualifier.types.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020738, VkglTestCase_020738_1, VkglTestCase_020738_2);

#define VkglTestCase_020742_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020742_2 "rm.matrix_stride.named_block.no_qualifier.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020742, VkglTestCase_020742_1, VkglTestCase_020742_2);

#define VkglTestCase_020743_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020743_2 "orm.matrix_stride.named_block.no_qualifier.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020743, VkglTestCase_020743_1, VkglTestCase_020743_2);

#define VkglTestCase_020744_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020744_2 "rm.matrix_stride.named_block.no_qualifier.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020744, VkglTestCase_020744_1, VkglTestCase_020744_2);

#define VkglTestCase_020745_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020745_2 "rm.matrix_stride.named_block.no_qualifier.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020745, VkglTestCase_020745_1, VkglTestCase_020745_2);

#define VkglTestCase_020746_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020746_2 "rm.matrix_stride.named_block.no_qualifier.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020746, VkglTestCase_020746_1, VkglTestCase_020746_2);

#define VkglTestCase_020747_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020747_2 "rm.matrix_stride.named_block.no_qualifier.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020747, VkglTestCase_020747_1, VkglTestCase_020747_2);

#define VkglTestCase_020748_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020748_2 "rm.matrix_stride.named_block.no_qualifier.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020748, VkglTestCase_020748_1, VkglTestCase_020748_2);

#define VkglTestCase_020749_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020749_2 "m.matrix_stride.named_block.no_qualifier.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020749, VkglTestCase_020749_1, VkglTestCase_020749_2);

#define VkglTestCase_020750_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020750_2 "rm.matrix_stride.named_block.no_qualifier.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020750, VkglTestCase_020750_1, VkglTestCase_020750_2);

#define VkglTestCase_020751_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020751_2 "m.matrix_stride.named_block.no_qualifier.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020751, VkglTestCase_020751_1, VkglTestCase_020751_2);

#define VkglTestCase_020752_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020752_2 "m.matrix_stride.named_block.no_qualifier.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020752, VkglTestCase_020752_1, VkglTestCase_020752_2);

#define VkglTestCase_020753_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020753_2 "rm.matrix_stride.named_block.no_qualifier.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020753, VkglTestCase_020753_1, VkglTestCase_020753_2);
