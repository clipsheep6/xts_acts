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

#define VkglTestCase_009504_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009504_2 ".3_level_unsized_array.shared.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009504, VkglTestCase_009504_1, VkglTestCase_009504_2);

#define VkglTestCase_009505_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009505_2 ".3_level_unsized_array.shared.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009505, VkglTestCase_009505_1, VkglTestCase_009505_2);

#define VkglTestCase_009506_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009506_2 ".3_level_unsized_array.shared.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009506, VkglTestCase_009506_1, VkglTestCase_009506_2);

#define VkglTestCase_009507_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009507_2 ".3_level_unsized_array.shared.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009507, VkglTestCase_009507_1, VkglTestCase_009507_2);

#define VkglTestCase_009508_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009508_2 "t.3_level_unsized_array.shared.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009508, VkglTestCase_009508_1, VkglTestCase_009508_2);

#define VkglTestCase_009509_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009509_2 ".3_level_unsized_array.shared.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009509, VkglTestCase_009509_1, VkglTestCase_009509_2);

#define VkglTestCase_009510_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009510_2 ".3_level_unsized_array.shared.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009510, VkglTestCase_009510_1, VkglTestCase_009510_2);

#define VkglTestCase_009511_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009511_2 ".3_level_unsized_array.shared.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009511, VkglTestCase_009511_1, VkglTestCase_009511_2);

#define VkglTestCase_009512_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009512_2 ".3_level_unsized_array.shared.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009512, VkglTestCase_009512_1, VkglTestCase_009512_2);

#define VkglTestCase_009513_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009513_2 ".3_level_unsized_array.shared.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009513, VkglTestCase_009513_1, VkglTestCase_009513_2);

#define VkglTestCase_009514_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009514_2 ".3_level_unsized_array.shared.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009514, VkglTestCase_009514_1, VkglTestCase_009514_2);

#define VkglTestCase_009515_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009515_2 ".3_level_unsized_array.shared.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009515, VkglTestCase_009515_1, VkglTestCase_009515_2);

#define VkglTestCase_009516_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009516_2 ".3_level_unsized_array.shared.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009516, VkglTestCase_009516_1, VkglTestCase_009516_2);

#define VkglTestCase_009517_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009517_2 ".3_level_unsized_array.shared.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009517, VkglTestCase_009517_1, VkglTestCase_009517_2);

#define VkglTestCase_009518_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009518_2 ".3_level_unsized_array.shared.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009518, VkglTestCase_009518_1, VkglTestCase_009518_2);

#define VkglTestCase_009519_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009519_2 ".3_level_unsized_array.shared.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009519, VkglTestCase_009519_1, VkglTestCase_009519_2);

#define VkglTestCase_009520_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009520_2 ".3_level_unsized_array.shared.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009520, VkglTestCase_009520_1, VkglTestCase_009520_2);

#define VkglTestCase_009521_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009521_2 "vel_unsized_array.shared.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009521, VkglTestCase_009521_1, VkglTestCase_009521_2);

#define VkglTestCase_009522_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009522_2 "el_unsized_array.shared.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009522, VkglTestCase_009522_1, VkglTestCase_009522_2);

#define VkglTestCase_009523_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009523_2 ".3_level_unsized_array.shared.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009523, VkglTestCase_009523_1, VkglTestCase_009523_2);

#define VkglTestCase_009524_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009524_2 "vel_unsized_array.shared.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009524, VkglTestCase_009524_1, VkglTestCase_009524_2);

#define VkglTestCase_009525_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009525_2 "el_unsized_array.shared.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009525, VkglTestCase_009525_1, VkglTestCase_009525_2);

#define VkglTestCase_009526_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009526_2 ".3_level_unsized_array.shared.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009526, VkglTestCase_009526_1, VkglTestCase_009526_2);

#define VkglTestCase_009527_1 "dEQP-GLES31.functional.ssbo.layout.3_le"
#define VkglTestCase_009527_2 "vel_unsized_array.shared.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009527, VkglTestCase_009527_1, VkglTestCase_009527_2);

#define VkglTestCase_009528_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009528_2 "el_unsized_array.shared.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009528, VkglTestCase_009528_1, VkglTestCase_009528_2);

#define VkglTestCase_009529_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009529_2 "3_level_unsized_array.shared.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009529, VkglTestCase_009529_1, VkglTestCase_009529_2);

#define VkglTestCase_009530_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009530_2 "el_unsized_array.shared.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009530, VkglTestCase_009530_1, VkglTestCase_009530_2);

#define VkglTestCase_009531_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009531_2 "l_unsized_array.shared.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009531, VkglTestCase_009531_1, VkglTestCase_009531_2);

#define VkglTestCase_009532_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009532_2 "3_level_unsized_array.shared.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009532, VkglTestCase_009532_1, VkglTestCase_009532_2);

#define VkglTestCase_009533_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009533_2 "el_unsized_array.shared.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009533, VkglTestCase_009533_1, VkglTestCase_009533_2);

#define VkglTestCase_009534_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009534_2 "l_unsized_array.shared.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009534, VkglTestCase_009534_1, VkglTestCase_009534_2);

#define VkglTestCase_009535_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009535_2 "3_level_unsized_array.shared.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009535, VkglTestCase_009535_1, VkglTestCase_009535_2);

#define VkglTestCase_009536_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009536_2 "el_unsized_array.shared.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009536, VkglTestCase_009536_1, VkglTestCase_009536_2);

#define VkglTestCase_009537_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009537_2 "l_unsized_array.shared.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009537, VkglTestCase_009537_1, VkglTestCase_009537_2);

#define VkglTestCase_009538_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009538_2 "3_level_unsized_array.shared.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009538, VkglTestCase_009538_1, VkglTestCase_009538_2);

#define VkglTestCase_009539_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009539_2 "el_unsized_array.shared.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009539, VkglTestCase_009539_1, VkglTestCase_009539_2);

#define VkglTestCase_009540_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009540_2 "l_unsized_array.shared.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009540, VkglTestCase_009540_1, VkglTestCase_009540_2);

#define VkglTestCase_009541_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009541_2 "3_level_unsized_array.shared.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009541, VkglTestCase_009541_1, VkglTestCase_009541_2);

#define VkglTestCase_009542_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009542_2 "el_unsized_array.shared.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009542, VkglTestCase_009542_1, VkglTestCase_009542_2);

#define VkglTestCase_009543_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009543_2 "l_unsized_array.shared.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009543, VkglTestCase_009543_1, VkglTestCase_009543_2);

#define VkglTestCase_009544_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009544_2 "3_level_unsized_array.shared.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009544, VkglTestCase_009544_1, VkglTestCase_009544_2);

#define VkglTestCase_009545_1 "dEQP-GLES31.functional.ssbo.layout.3_lev"
#define VkglTestCase_009545_2 "el_unsized_array.shared.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009545, VkglTestCase_009545_1, VkglTestCase_009545_2);

#define VkglTestCase_009546_1 "dEQP-GLES31.functional.ssbo.layout.3_leve"
#define VkglTestCase_009546_2 "l_unsized_array.shared.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009546, VkglTestCase_009546_1, VkglTestCase_009546_2);
