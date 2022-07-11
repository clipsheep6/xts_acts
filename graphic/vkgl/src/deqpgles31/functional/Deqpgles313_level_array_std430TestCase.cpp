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

#define VkglTestCase_009461_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009461_2 "yout.3_level_array.std430.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009461, VkglTestCase_009461_1, VkglTestCase_009461_2);

#define VkglTestCase_009462_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009462_2 "yout.3_level_array.std430.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009462, VkglTestCase_009462_1, VkglTestCase_009462_2);

#define VkglTestCase_009463_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009463_2 "yout.3_level_array.std430.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009463, VkglTestCase_009463_1, VkglTestCase_009463_2);

#define VkglTestCase_009464_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009464_2 "yout.3_level_array.std430.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009464, VkglTestCase_009464_1, VkglTestCase_009464_2);

#define VkglTestCase_009465_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_009465_2 "ayout.3_level_array.std430.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009465, VkglTestCase_009465_1, VkglTestCase_009465_2);

#define VkglTestCase_009466_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009466_2 "yout.3_level_array.std430.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009466, VkglTestCase_009466_1, VkglTestCase_009466_2);

#define VkglTestCase_009467_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009467_2 "yout.3_level_array.std430.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009467, VkglTestCase_009467_1, VkglTestCase_009467_2);

#define VkglTestCase_009468_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009468_2 "yout.3_level_array.std430.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009468, VkglTestCase_009468_1, VkglTestCase_009468_2);

#define VkglTestCase_009469_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009469_2 "yout.3_level_array.std430.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009469, VkglTestCase_009469_1, VkglTestCase_009469_2);

#define VkglTestCase_009470_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009470_2 "yout.3_level_array.std430.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009470, VkglTestCase_009470_1, VkglTestCase_009470_2);

#define VkglTestCase_009471_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009471_2 "yout.3_level_array.std430.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009471, VkglTestCase_009471_1, VkglTestCase_009471_2);

#define VkglTestCase_009472_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009472_2 "yout.3_level_array.std430.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009472, VkglTestCase_009472_1, VkglTestCase_009472_2);

#define VkglTestCase_009473_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009473_2 "yout.3_level_array.std430.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009473, VkglTestCase_009473_1, VkglTestCase_009473_2);

#define VkglTestCase_009474_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009474_2 "yout.3_level_array.std430.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009474, VkglTestCase_009474_1, VkglTestCase_009474_2);

#define VkglTestCase_009475_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009475_2 "yout.3_level_array.std430.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009475, VkglTestCase_009475_1, VkglTestCase_009475_2);

#define VkglTestCase_009476_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009476_2 "yout.3_level_array.std430.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009476, VkglTestCase_009476_1, VkglTestCase_009476_2);

#define VkglTestCase_009477_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009477_2 "yout.3_level_array.std430.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009477, VkglTestCase_009477_1, VkglTestCase_009477_2);

#define VkglTestCase_009478_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009478_2 "3_level_array.std430.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009478, VkglTestCase_009478_1, VkglTestCase_009478_2);

#define VkglTestCase_009479_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009479_2 "_level_array.std430.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009479, VkglTestCase_009479_1, VkglTestCase_009479_2);

#define VkglTestCase_009480_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009480_2 "yout.3_level_array.std430.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009480, VkglTestCase_009480_1, VkglTestCase_009480_2);

#define VkglTestCase_009481_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009481_2 "3_level_array.std430.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009481, VkglTestCase_009481_1, VkglTestCase_009481_2);

#define VkglTestCase_009482_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009482_2 "_level_array.std430.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009482, VkglTestCase_009482_1, VkglTestCase_009482_2);

#define VkglTestCase_009483_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009483_2 "yout.3_level_array.std430.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009483, VkglTestCase_009483_1, VkglTestCase_009483_2);

#define VkglTestCase_009484_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009484_2 "3_level_array.std430.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009484, VkglTestCase_009484_1, VkglTestCase_009484_2);

#define VkglTestCase_009485_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009485_2 "_level_array.std430.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009485, VkglTestCase_009485_1, VkglTestCase_009485_2);

#define VkglTestCase_009486_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009486_2 "out.3_level_array.std430.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009486, VkglTestCase_009486_1, VkglTestCase_009486_2);

#define VkglTestCase_009487_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009487_2 "_level_array.std430.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009487, VkglTestCase_009487_1, VkglTestCase_009487_2);

#define VkglTestCase_009488_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009488_2 "level_array.std430.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009488, VkglTestCase_009488_1, VkglTestCase_009488_2);

#define VkglTestCase_009489_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009489_2 "out.3_level_array.std430.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009489, VkglTestCase_009489_1, VkglTestCase_009489_2);

#define VkglTestCase_009490_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009490_2 "_level_array.std430.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009490, VkglTestCase_009490_1, VkglTestCase_009490_2);

#define VkglTestCase_009491_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009491_2 "level_array.std430.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009491, VkglTestCase_009491_1, VkglTestCase_009491_2);

#define VkglTestCase_009492_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009492_2 "out.3_level_array.std430.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009492, VkglTestCase_009492_1, VkglTestCase_009492_2);

#define VkglTestCase_009493_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009493_2 "_level_array.std430.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009493, VkglTestCase_009493_1, VkglTestCase_009493_2);

#define VkglTestCase_009494_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009494_2 "level_array.std430.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009494, VkglTestCase_009494_1, VkglTestCase_009494_2);

#define VkglTestCase_009495_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009495_2 "out.3_level_array.std430.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009495, VkglTestCase_009495_1, VkglTestCase_009495_2);

#define VkglTestCase_009496_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009496_2 "_level_array.std430.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009496, VkglTestCase_009496_1, VkglTestCase_009496_2);

#define VkglTestCase_009497_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009497_2 "level_array.std430.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009497, VkglTestCase_009497_1, VkglTestCase_009497_2);

#define VkglTestCase_009498_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009498_2 "out.3_level_array.std430.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009498, VkglTestCase_009498_1, VkglTestCase_009498_2);

#define VkglTestCase_009499_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009499_2 "_level_array.std430.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009499, VkglTestCase_009499_1, VkglTestCase_009499_2);

#define VkglTestCase_009500_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009500_2 "level_array.std430.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009500, VkglTestCase_009500_1, VkglTestCase_009500_2);

#define VkglTestCase_009501_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009501_2 "out.3_level_array.std430.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009501, VkglTestCase_009501_1, VkglTestCase_009501_2);

#define VkglTestCase_009502_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009502_2 "_level_array.std430.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009502, VkglTestCase_009502_1, VkglTestCase_009502_2);

#define VkglTestCase_009503_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009503_2 "level_array.std430.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009503, VkglTestCase_009503_1, VkglTestCase_009503_2);
