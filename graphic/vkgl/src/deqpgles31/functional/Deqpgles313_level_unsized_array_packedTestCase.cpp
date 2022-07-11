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

#define VkglTestCase_009547_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009547_2 ".3_level_unsized_array.packed.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009547, VkglTestCase_009547_1, VkglTestCase_009547_2);

#define VkglTestCase_009548_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009548_2 ".3_level_unsized_array.packed.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009548, VkglTestCase_009548_1, VkglTestCase_009548_2);

#define VkglTestCase_009549_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009549_2 ".3_level_unsized_array.packed.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009549, VkglTestCase_009549_1, VkglTestCase_009549_2);

#define VkglTestCase_009550_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009550_2 ".3_level_unsized_array.packed.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009550, VkglTestCase_009550_1, VkglTestCase_009550_2);

#define VkglTestCase_009551_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009551_2 "t.3_level_unsized_array.packed.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009551, VkglTestCase_009551_1, VkglTestCase_009551_2);

#define VkglTestCase_009552_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009552_2 ".3_level_unsized_array.packed.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009552, VkglTestCase_009552_1, VkglTestCase_009552_2);

#define VkglTestCase_009553_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009553_2 ".3_level_unsized_array.packed.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009553, VkglTestCase_009553_1, VkglTestCase_009553_2);

#define VkglTestCase_009554_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009554_2 ".3_level_unsized_array.packed.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009554, VkglTestCase_009554_1, VkglTestCase_009554_2);

#define VkglTestCase_009555_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009555_2 ".3_level_unsized_array.packed.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009555, VkglTestCase_009555_1, VkglTestCase_009555_2);

#define VkglTestCase_009556_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009556_2 ".3_level_unsized_array.packed.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009556, VkglTestCase_009556_1, VkglTestCase_009556_2);

#define VkglTestCase_009557_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009557_2 ".3_level_unsized_array.packed.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009557, VkglTestCase_009557_1, VkglTestCase_009557_2);

#define VkglTestCase_009558_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009558_2 ".3_level_unsized_array.packed.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009558, VkglTestCase_009558_1, VkglTestCase_009558_2);

#define VkglTestCase_009559_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009559_2 ".3_level_unsized_array.packed.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009559, VkglTestCase_009559_1, VkglTestCase_009559_2);

#define VkglTestCase_009560_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009560_2 ".3_level_unsized_array.packed.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009560, VkglTestCase_009560_1, VkglTestCase_009560_2);

#define VkglTestCase_009561_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009561_2 ".3_level_unsized_array.packed.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009561, VkglTestCase_009561_1, VkglTestCase_009561_2);

#define VkglTestCase_009562_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009562_2 ".3_level_unsized_array.packed.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009562, VkglTestCase_009562_1, VkglTestCase_009562_2);

#define VkglTestCase_009563_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009563_2 ".3_level_unsized_array.packed.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009563, VkglTestCase_009563_1, VkglTestCase_009563_2);

#define VkglTestCase_009564_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009564_2 "vel_unsized_array.packed.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009564, VkglTestCase_009564_1, VkglTestCase_009564_2);

#define VkglTestCase_009565_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009565_2 "el_unsized_array.packed.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009565, VkglTestCase_009565_1, VkglTestCase_009565_2);

#define VkglTestCase_009566_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009566_2 ".3_level_unsized_array.packed.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009566, VkglTestCase_009566_1, VkglTestCase_009566_2);

#define VkglTestCase_009567_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009567_2 "vel_unsized_array.packed.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009567, VkglTestCase_009567_1, VkglTestCase_009567_2);

#define VkglTestCase_009568_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009568_2 "el_unsized_array.packed.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009568, VkglTestCase_009568_1, VkglTestCase_009568_2);

#define VkglTestCase_009569_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009569_2 ".3_level_unsized_array.packed.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009569, VkglTestCase_009569_1, VkglTestCase_009569_2);

#define VkglTestCase_009570_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009570_2 "vel_unsized_array.packed.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009570, VkglTestCase_009570_1, VkglTestCase_009570_2);

#define VkglTestCase_009571_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009571_2 "el_unsized_array.packed.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009571, VkglTestCase_009571_1, VkglTestCase_009571_2);

#define VkglTestCase_009572_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009572_2 "3_level_unsized_array.packed.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009572, VkglTestCase_009572_1, VkglTestCase_009572_2);

#define VkglTestCase_009573_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009573_2 "el_unsized_array.packed.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009573, VkglTestCase_009573_1, VkglTestCase_009573_2);

#define VkglTestCase_009574_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009574_2 "l_unsized_array.packed.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009574, VkglTestCase_009574_1, VkglTestCase_009574_2);

#define VkglTestCase_009575_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009575_2 "3_level_unsized_array.packed.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009575, VkglTestCase_009575_1, VkglTestCase_009575_2);

#define VkglTestCase_009576_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009576_2 "el_unsized_array.packed.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009576, VkglTestCase_009576_1, VkglTestCase_009576_2);

#define VkglTestCase_009577_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009577_2 "l_unsized_array.packed.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009577, VkglTestCase_009577_1, VkglTestCase_009577_2);

#define VkglTestCase_009578_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009578_2 "3_level_unsized_array.packed.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009578, VkglTestCase_009578_1, VkglTestCase_009578_2);

#define VkglTestCase_009579_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009579_2 "el_unsized_array.packed.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009579, VkglTestCase_009579_1, VkglTestCase_009579_2);

#define VkglTestCase_009580_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009580_2 "l_unsized_array.packed.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009580, VkglTestCase_009580_1, VkglTestCase_009580_2);

#define VkglTestCase_009581_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009581_2 "3_level_unsized_array.packed.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009581, VkglTestCase_009581_1, VkglTestCase_009581_2);

#define VkglTestCase_009582_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009582_2 "el_unsized_array.packed.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009582, VkglTestCase_009582_1, VkglTestCase_009582_2);

#define VkglTestCase_009583_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009583_2 "l_unsized_array.packed.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009583, VkglTestCase_009583_1, VkglTestCase_009583_2);

#define VkglTestCase_009584_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009584_2 "3_level_unsized_array.packed.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009584, VkglTestCase_009584_1, VkglTestCase_009584_2);

#define VkglTestCase_009585_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009585_2 "el_unsized_array.packed.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009585, VkglTestCase_009585_1, VkglTestCase_009585_2);

#define VkglTestCase_009586_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009586_2 "l_unsized_array.packed.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009586, VkglTestCase_009586_1, VkglTestCase_009586_2);

#define VkglTestCase_009587_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009587_2 "3_level_unsized_array.packed.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009587, VkglTestCase_009587_1, VkglTestCase_009587_2);

#define VkglTestCase_009588_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009588_2 "el_unsized_array.packed.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009588, VkglTestCase_009588_1, VkglTestCase_009588_2);

#define VkglTestCase_009589_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009589_2 "l_unsized_array.packed.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009589, VkglTestCase_009589_1, VkglTestCase_009589_2);
