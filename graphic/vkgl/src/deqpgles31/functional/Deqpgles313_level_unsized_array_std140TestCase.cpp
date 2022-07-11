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

#define VkglTestCase_009590_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009590_2 ".3_level_unsized_array.std140.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009590, VkglTestCase_009590_1, VkglTestCase_009590_2);

#define VkglTestCase_009591_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009591_2 ".3_level_unsized_array.std140.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009591, VkglTestCase_009591_1, VkglTestCase_009591_2);

#define VkglTestCase_009592_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009592_2 ".3_level_unsized_array.std140.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009592, VkglTestCase_009592_1, VkglTestCase_009592_2);

#define VkglTestCase_009593_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009593_2 ".3_level_unsized_array.std140.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009593, VkglTestCase_009593_1, VkglTestCase_009593_2);

#define VkglTestCase_009594_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009594_2 "t.3_level_unsized_array.std140.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009594, VkglTestCase_009594_1, VkglTestCase_009594_2);

#define VkglTestCase_009595_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009595_2 ".3_level_unsized_array.std140.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009595, VkglTestCase_009595_1, VkglTestCase_009595_2);

#define VkglTestCase_009596_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009596_2 ".3_level_unsized_array.std140.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009596, VkglTestCase_009596_1, VkglTestCase_009596_2);

#define VkglTestCase_009597_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009597_2 ".3_level_unsized_array.std140.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009597, VkglTestCase_009597_1, VkglTestCase_009597_2);

#define VkglTestCase_009598_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009598_2 ".3_level_unsized_array.std140.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009598, VkglTestCase_009598_1, VkglTestCase_009598_2);

#define VkglTestCase_009599_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009599_2 ".3_level_unsized_array.std140.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009599, VkglTestCase_009599_1, VkglTestCase_009599_2);

#define VkglTestCase_009600_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009600_2 ".3_level_unsized_array.std140.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009600, VkglTestCase_009600_1, VkglTestCase_009600_2);

#define VkglTestCase_009601_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009601_2 ".3_level_unsized_array.std140.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009601, VkglTestCase_009601_1, VkglTestCase_009601_2);

#define VkglTestCase_009602_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009602_2 ".3_level_unsized_array.std140.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009602, VkglTestCase_009602_1, VkglTestCase_009602_2);

#define VkglTestCase_009603_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009603_2 ".3_level_unsized_array.std140.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009603, VkglTestCase_009603_1, VkglTestCase_009603_2);

#define VkglTestCase_009604_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009604_2 ".3_level_unsized_array.std140.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009604, VkglTestCase_009604_1, VkglTestCase_009604_2);

#define VkglTestCase_009605_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009605_2 ".3_level_unsized_array.std140.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009605, VkglTestCase_009605_1, VkglTestCase_009605_2);

#define VkglTestCase_009606_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009606_2 ".3_level_unsized_array.std140.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009606, VkglTestCase_009606_1, VkglTestCase_009606_2);

#define VkglTestCase_009607_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009607_2 "vel_unsized_array.std140.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009607, VkglTestCase_009607_1, VkglTestCase_009607_2);

#define VkglTestCase_009608_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009608_2 "el_unsized_array.std140.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009608, VkglTestCase_009608_1, VkglTestCase_009608_2);

#define VkglTestCase_009609_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009609_2 ".3_level_unsized_array.std140.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009609, VkglTestCase_009609_1, VkglTestCase_009609_2);

#define VkglTestCase_009610_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009610_2 "vel_unsized_array.std140.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009610, VkglTestCase_009610_1, VkglTestCase_009610_2);

#define VkglTestCase_009611_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009611_2 "el_unsized_array.std140.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009611, VkglTestCase_009611_1, VkglTestCase_009611_2);

#define VkglTestCase_009612_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009612_2 ".3_level_unsized_array.std140.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009612, VkglTestCase_009612_1, VkglTestCase_009612_2);

#define VkglTestCase_009613_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009613_2 "vel_unsized_array.std140.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009613, VkglTestCase_009613_1, VkglTestCase_009613_2);

#define VkglTestCase_009614_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009614_2 "el_unsized_array.std140.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009614, VkglTestCase_009614_1, VkglTestCase_009614_2);

#define VkglTestCase_009615_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009615_2 "3_level_unsized_array.std140.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009615, VkglTestCase_009615_1, VkglTestCase_009615_2);

#define VkglTestCase_009616_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009616_2 "el_unsized_array.std140.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009616, VkglTestCase_009616_1, VkglTestCase_009616_2);

#define VkglTestCase_009617_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009617_2 "l_unsized_array.std140.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009617, VkglTestCase_009617_1, VkglTestCase_009617_2);

#define VkglTestCase_009618_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009618_2 "3_level_unsized_array.std140.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009618, VkglTestCase_009618_1, VkglTestCase_009618_2);

#define VkglTestCase_009619_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009619_2 "el_unsized_array.std140.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009619, VkglTestCase_009619_1, VkglTestCase_009619_2);

#define VkglTestCase_009620_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009620_2 "l_unsized_array.std140.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009620, VkglTestCase_009620_1, VkglTestCase_009620_2);

#define VkglTestCase_009621_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009621_2 "3_level_unsized_array.std140.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009621, VkglTestCase_009621_1, VkglTestCase_009621_2);

#define VkglTestCase_009622_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009622_2 "el_unsized_array.std140.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009622, VkglTestCase_009622_1, VkglTestCase_009622_2);

#define VkglTestCase_009623_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009623_2 "l_unsized_array.std140.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009623, VkglTestCase_009623_1, VkglTestCase_009623_2);

#define VkglTestCase_009624_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009624_2 "3_level_unsized_array.std140.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009624, VkglTestCase_009624_1, VkglTestCase_009624_2);

#define VkglTestCase_009625_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009625_2 "el_unsized_array.std140.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009625, VkglTestCase_009625_1, VkglTestCase_009625_2);

#define VkglTestCase_009626_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009626_2 "l_unsized_array.std140.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009626, VkglTestCase_009626_1, VkglTestCase_009626_2);

#define VkglTestCase_009627_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009627_2 "3_level_unsized_array.std140.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009627, VkglTestCase_009627_1, VkglTestCase_009627_2);

#define VkglTestCase_009628_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009628_2 "el_unsized_array.std140.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009628, VkglTestCase_009628_1, VkglTestCase_009628_2);

#define VkglTestCase_009629_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009629_2 "l_unsized_array.std140.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009629, VkglTestCase_009629_1, VkglTestCase_009629_2);

#define VkglTestCase_009630_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009630_2 "3_level_unsized_array.std140.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009630, VkglTestCase_009630_1, VkglTestCase_009630_2);

#define VkglTestCase_009631_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009631_2 "el_unsized_array.std140.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009631, VkglTestCase_009631_1, VkglTestCase_009631_2);

#define VkglTestCase_009632_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009632_2 "l_unsized_array.std140.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009632, VkglTestCase_009632_1, VkglTestCase_009632_2);
