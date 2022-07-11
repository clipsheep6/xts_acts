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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009289_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009289_2 "yout.2_level_array.std430.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009289, VkglTestCase_009289_1, VkglTestCase_009289_2);

#define VkglTestCase_009290_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009290_2 "yout.2_level_array.std430.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009290, VkglTestCase_009290_1, VkglTestCase_009290_2);

#define VkglTestCase_009291_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009291_2 "yout.2_level_array.std430.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009291, VkglTestCase_009291_1, VkglTestCase_009291_2);

#define VkglTestCase_009292_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009292_2 "yout.2_level_array.std430.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009292, VkglTestCase_009292_1, VkglTestCase_009292_2);

#define VkglTestCase_009293_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_009293_2 "ayout.2_level_array.std430.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009293, VkglTestCase_009293_1, VkglTestCase_009293_2);

#define VkglTestCase_009294_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009294_2 "yout.2_level_array.std430.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009294, VkglTestCase_009294_1, VkglTestCase_009294_2);

#define VkglTestCase_009295_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009295_2 "yout.2_level_array.std430.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009295, VkglTestCase_009295_1, VkglTestCase_009295_2);

#define VkglTestCase_009296_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009296_2 "yout.2_level_array.std430.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009296, VkglTestCase_009296_1, VkglTestCase_009296_2);

#define VkglTestCase_009297_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009297_2 "yout.2_level_array.std430.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009297, VkglTestCase_009297_1, VkglTestCase_009297_2);

#define VkglTestCase_009298_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009298_2 "yout.2_level_array.std430.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009298, VkglTestCase_009298_1, VkglTestCase_009298_2);

#define VkglTestCase_009299_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009299_2 "yout.2_level_array.std430.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009299, VkglTestCase_009299_1, VkglTestCase_009299_2);

#define VkglTestCase_009300_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009300_2 "yout.2_level_array.std430.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009300, VkglTestCase_009300_1, VkglTestCase_009300_2);

#define VkglTestCase_009301_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009301_2 "yout.2_level_array.std430.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009301, VkglTestCase_009301_1, VkglTestCase_009301_2);

#define VkglTestCase_009302_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009302_2 "yout.2_level_array.std430.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009302, VkglTestCase_009302_1, VkglTestCase_009302_2);

#define VkglTestCase_009303_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009303_2 "yout.2_level_array.std430.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009303, VkglTestCase_009303_1, VkglTestCase_009303_2);

#define VkglTestCase_009304_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009304_2 "yout.2_level_array.std430.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009304, VkglTestCase_009304_1, VkglTestCase_009304_2);

#define VkglTestCase_009305_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009305_2 "yout.2_level_array.std430.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009305, VkglTestCase_009305_1, VkglTestCase_009305_2);

#define VkglTestCase_009306_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009306_2 "2_level_array.std430.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009306, VkglTestCase_009306_1, VkglTestCase_009306_2);

#define VkglTestCase_009307_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009307_2 "_level_array.std430.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009307, VkglTestCase_009307_1, VkglTestCase_009307_2);

#define VkglTestCase_009308_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009308_2 "yout.2_level_array.std430.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009308, VkglTestCase_009308_1, VkglTestCase_009308_2);

#define VkglTestCase_009309_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009309_2 "2_level_array.std430.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009309, VkglTestCase_009309_1, VkglTestCase_009309_2);

#define VkglTestCase_009310_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009310_2 "_level_array.std430.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009310, VkglTestCase_009310_1, VkglTestCase_009310_2);

#define VkglTestCase_009311_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009311_2 "yout.2_level_array.std430.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009311, VkglTestCase_009311_1, VkglTestCase_009311_2);

#define VkglTestCase_009312_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009312_2 "2_level_array.std430.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009312, VkglTestCase_009312_1, VkglTestCase_009312_2);

#define VkglTestCase_009313_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009313_2 "_level_array.std430.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009313, VkglTestCase_009313_1, VkglTestCase_009313_2);

#define VkglTestCase_009314_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009314_2 "out.2_level_array.std430.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009314, VkglTestCase_009314_1, VkglTestCase_009314_2);

#define VkglTestCase_009315_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009315_2 "_level_array.std430.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009315, VkglTestCase_009315_1, VkglTestCase_009315_2);

#define VkglTestCase_009316_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009316_2 "level_array.std430.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009316, VkglTestCase_009316_1, VkglTestCase_009316_2);

#define VkglTestCase_009317_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009317_2 "out.2_level_array.std430.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009317, VkglTestCase_009317_1, VkglTestCase_009317_2);

#define VkglTestCase_009318_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009318_2 "_level_array.std430.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009318, VkglTestCase_009318_1, VkglTestCase_009318_2);

#define VkglTestCase_009319_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009319_2 "level_array.std430.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009319, VkglTestCase_009319_1, VkglTestCase_009319_2);

#define VkglTestCase_009320_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009320_2 "out.2_level_array.std430.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009320, VkglTestCase_009320_1, VkglTestCase_009320_2);

#define VkglTestCase_009321_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009321_2 "_level_array.std430.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009321, VkglTestCase_009321_1, VkglTestCase_009321_2);

#define VkglTestCase_009322_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009322_2 "level_array.std430.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009322, VkglTestCase_009322_1, VkglTestCase_009322_2);

#define VkglTestCase_009323_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009323_2 "out.2_level_array.std430.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009323, VkglTestCase_009323_1, VkglTestCase_009323_2);

#define VkglTestCase_009324_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009324_2 "_level_array.std430.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009324, VkglTestCase_009324_1, VkglTestCase_009324_2);

#define VkglTestCase_009325_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009325_2 "level_array.std430.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009325, VkglTestCase_009325_1, VkglTestCase_009325_2);

#define VkglTestCase_009326_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009326_2 "out.2_level_array.std430.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009326, VkglTestCase_009326_1, VkglTestCase_009326_2);

#define VkglTestCase_009327_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009327_2 "_level_array.std430.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009327, VkglTestCase_009327_1, VkglTestCase_009327_2);

#define VkglTestCase_009328_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009328_2 "level_array.std430.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009328, VkglTestCase_009328_1, VkglTestCase_009328_2);

#define VkglTestCase_009329_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009329_2 "out.2_level_array.std430.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009329, VkglTestCase_009329_1, VkglTestCase_009329_2);

#define VkglTestCase_009330_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009330_2 "_level_array.std430.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009330, VkglTestCase_009330_1, VkglTestCase_009330_2);

#define VkglTestCase_009331_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009331_2 "level_array.std430.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009331, VkglTestCase_009331_1, VkglTestCase_009331_2);
