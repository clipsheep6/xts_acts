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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015492_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015492_2 "x.div.uniform.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015492, VkglTestCase_015492_1, VkglTestCase_015492_2);

#define VkglTestCase_015493_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015493_2 ".div.uniform.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015493, VkglTestCase_015493_1, VkglTestCase_015493_2);

#define VkglTestCase_015494_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015494_2 "x.div.uniform.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015494, VkglTestCase_015494_1, VkglTestCase_015494_2);

#define VkglTestCase_015495_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015495_2 ".div.uniform.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015495, VkglTestCase_015495_1, VkglTestCase_015495_2);

#define VkglTestCase_015496_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015496_2 "div.uniform.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015496, VkglTestCase_015496_1, VkglTestCase_015496_2);

#define VkglTestCase_015497_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015497_2 "iv.uniform.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015497, VkglTestCase_015497_1, VkglTestCase_015497_2);

#define VkglTestCase_015498_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015498_2 ".div.uniform.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015498, VkglTestCase_015498_1, VkglTestCase_015498_2);

#define VkglTestCase_015499_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015499_2 "div.uniform.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015499, VkglTestCase_015499_1, VkglTestCase_015499_2);

#define VkglTestCase_015500_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015500_2 ".div.uniform.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015500, VkglTestCase_015500_1, VkglTestCase_015500_2);

#define VkglTestCase_015501_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015501_2 "div.uniform.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015501, VkglTestCase_015501_1, VkglTestCase_015501_2);

#define VkglTestCase_015502_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015502_2 "x.div.uniform.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015502, VkglTestCase_015502_1, VkglTestCase_015502_2);

#define VkglTestCase_015503_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015503_2 ".div.uniform.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015503, VkglTestCase_015503_1, VkglTestCase_015503_2);

#define VkglTestCase_015504_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015504_2 ".div.uniform.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015504, VkglTestCase_015504_1, VkglTestCase_015504_2);

#define VkglTestCase_015505_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015505_2 "div.uniform.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015505, VkglTestCase_015505_1, VkglTestCase_015505_2);

#define VkglTestCase_015506_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015506_2 "div.uniform.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015506, VkglTestCase_015506_1, VkglTestCase_015506_2);

#define VkglTestCase_015507_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015507_2 "iv.uniform.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015507, VkglTestCase_015507_1, VkglTestCase_015507_2);

#define VkglTestCase_015508_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015508_2 "iv.uniform.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015508, VkglTestCase_015508_1, VkglTestCase_015508_2);

#define VkglTestCase_015509_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015509_2 "v.uniform.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015509, VkglTestCase_015509_1, VkglTestCase_015509_2);

#define VkglTestCase_015510_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015510_2 "iv.uniform.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015510, VkglTestCase_015510_1, VkglTestCase_015510_2);

#define VkglTestCase_015511_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015511_2 "v.uniform.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015511, VkglTestCase_015511_1, VkglTestCase_015511_2);

#define VkglTestCase_015512_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015512_2 "div.uniform.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015512, VkglTestCase_015512_1, VkglTestCase_015512_2);

#define VkglTestCase_015513_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015513_2 "iv.uniform.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015513, VkglTestCase_015513_1, VkglTestCase_015513_2);

#define VkglTestCase_015514_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015514_2 "div.uniform.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015514, VkglTestCase_015514_1, VkglTestCase_015514_2);

#define VkglTestCase_015515_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015515_2 "iv.uniform.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015515, VkglTestCase_015515_1, VkglTestCase_015515_2);

#define VkglTestCase_015516_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015516_2 ".div.uniform.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015516, VkglTestCase_015516_1, VkglTestCase_015516_2);

#define VkglTestCase_015517_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015517_2 "div.uniform.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015517, VkglTestCase_015517_1, VkglTestCase_015517_2);

#define VkglTestCase_015518_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015518_2 "div.uniform.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015518, VkglTestCase_015518_1, VkglTestCase_015518_2);

#define VkglTestCase_015519_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015519_2 "iv.uniform.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015519, VkglTestCase_015519_1, VkglTestCase_015519_2);

#define VkglTestCase_015520_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015520_2 "iv.uniform.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015520, VkglTestCase_015520_1, VkglTestCase_015520_2);

#define VkglTestCase_015521_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015521_2 "v.uniform.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015521, VkglTestCase_015521_1, VkglTestCase_015521_2);

#define VkglTestCase_015522_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015522_2 "iv.uniform.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015522, VkglTestCase_015522_1, VkglTestCase_015522_2);

#define VkglTestCase_015523_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015523_2 "v.uniform.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015523, VkglTestCase_015523_1, VkglTestCase_015523_2);

#define VkglTestCase_015524_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015524_2 "div.uniform.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015524, VkglTestCase_015524_1, VkglTestCase_015524_2);

#define VkglTestCase_015525_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015525_2 "iv.uniform.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015525, VkglTestCase_015525_1, VkglTestCase_015525_2);

#define VkglTestCase_015526_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015526_2 "div.uniform.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015526, VkglTestCase_015526_1, VkglTestCase_015526_2);

#define VkglTestCase_015527_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015527_2 "iv.uniform.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015527, VkglTestCase_015527_1, VkglTestCase_015527_2);

#define VkglTestCase_015528_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015528_2 ".div.uniform.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015528, VkglTestCase_015528_1, VkglTestCase_015528_2);

#define VkglTestCase_015529_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015529_2 "div.uniform.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015529, VkglTestCase_015529_1, VkglTestCase_015529_2);

#define VkglTestCase_015530_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015530_2 "div.uniform.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015530, VkglTestCase_015530_1, VkglTestCase_015530_2);

#define VkglTestCase_015531_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015531_2 "iv.uniform.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015531, VkglTestCase_015531_1, VkglTestCase_015531_2);

#define VkglTestCase_015532_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015532_2 "iv.uniform.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015532, VkglTestCase_015532_1, VkglTestCase_015532_2);

#define VkglTestCase_015533_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015533_2 "v.uniform.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015533, VkglTestCase_015533_1, VkglTestCase_015533_2);

#define VkglTestCase_015534_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015534_2 "iv.uniform.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015534, VkglTestCase_015534_1, VkglTestCase_015534_2);

#define VkglTestCase_015535_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015535_2 "v.uniform.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015535, VkglTestCase_015535_1, VkglTestCase_015535_2);

#define VkglTestCase_015536_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015536_2 "div.uniform.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015536, VkglTestCase_015536_1, VkglTestCase_015536_2);

#define VkglTestCase_015537_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015537_2 "iv.uniform.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015537, VkglTestCase_015537_1, VkglTestCase_015537_2);

#define VkglTestCase_015538_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015538_2 "div.uniform.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015538, VkglTestCase_015538_1, VkglTestCase_015538_2);

#define VkglTestCase_015539_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015539_2 "iv.uniform.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015539, VkglTestCase_015539_1, VkglTestCase_015539_2);

#define VkglTestCase_015540_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015540_2 "x.div.uniform.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015540, VkglTestCase_015540_1, VkglTestCase_015540_2);

#define VkglTestCase_015541_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015541_2 ".div.uniform.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015541, VkglTestCase_015541_1, VkglTestCase_015541_2);

#define VkglTestCase_015542_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015542_2 "x.div.uniform.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015542, VkglTestCase_015542_1, VkglTestCase_015542_2);

#define VkglTestCase_015543_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015543_2 ".div.uniform.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015543, VkglTestCase_015543_1, VkglTestCase_015543_2);

#define VkglTestCase_015544_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015544_2 "div.uniform.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015544, VkglTestCase_015544_1, VkglTestCase_015544_2);

#define VkglTestCase_015545_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015545_2 "iv.uniform.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015545, VkglTestCase_015545_1, VkglTestCase_015545_2);

#define VkglTestCase_015546_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015546_2 ".div.uniform.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015546, VkglTestCase_015546_1, VkglTestCase_015546_2);

#define VkglTestCase_015547_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015547_2 "div.uniform.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015547, VkglTestCase_015547_1, VkglTestCase_015547_2);

#define VkglTestCase_015548_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015548_2 ".div.uniform.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015548, VkglTestCase_015548_1, VkglTestCase_015548_2);

#define VkglTestCase_015549_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015549_2 "div.uniform.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015549, VkglTestCase_015549_1, VkglTestCase_015549_2);

#define VkglTestCase_015550_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015550_2 "x.div.uniform.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015550, VkglTestCase_015550_1, VkglTestCase_015550_2);

#define VkglTestCase_015551_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015551_2 ".div.uniform.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015551, VkglTestCase_015551_1, VkglTestCase_015551_2);

#define VkglTestCase_015552_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015552_2 ".div.uniform.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015552, VkglTestCase_015552_1, VkglTestCase_015552_2);

#define VkglTestCase_015553_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015553_2 "div.uniform.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015553, VkglTestCase_015553_1, VkglTestCase_015553_2);

#define VkglTestCase_015554_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015554_2 "div.uniform.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015554, VkglTestCase_015554_1, VkglTestCase_015554_2);

#define VkglTestCase_015555_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015555_2 "iv.uniform.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015555, VkglTestCase_015555_1, VkglTestCase_015555_2);

#define VkglTestCase_015556_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015556_2 "iv.uniform.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015556, VkglTestCase_015556_1, VkglTestCase_015556_2);

#define VkglTestCase_015557_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015557_2 "v.uniform.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015557, VkglTestCase_015557_1, VkglTestCase_015557_2);

#define VkglTestCase_015558_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015558_2 "iv.uniform.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015558, VkglTestCase_015558_1, VkglTestCase_015558_2);

#define VkglTestCase_015559_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015559_2 "v.uniform.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015559, VkglTestCase_015559_1, VkglTestCase_015559_2);

#define VkglTestCase_015560_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015560_2 "div.uniform.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015560, VkglTestCase_015560_1, VkglTestCase_015560_2);

#define VkglTestCase_015561_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015561_2 "iv.uniform.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015561, VkglTestCase_015561_1, VkglTestCase_015561_2);

#define VkglTestCase_015562_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015562_2 "div.uniform.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015562, VkglTestCase_015562_1, VkglTestCase_015562_2);

#define VkglTestCase_015563_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015563_2 "iv.uniform.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015563, VkglTestCase_015563_1, VkglTestCase_015563_2);

#define VkglTestCase_015564_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015564_2 ".div.uniform.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015564, VkglTestCase_015564_1, VkglTestCase_015564_2);

#define VkglTestCase_015565_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015565_2 "div.uniform.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015565, VkglTestCase_015565_1, VkglTestCase_015565_2);

#define VkglTestCase_015566_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015566_2 "div.uniform.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015566, VkglTestCase_015566_1, VkglTestCase_015566_2);

#define VkglTestCase_015567_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015567_2 "iv.uniform.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015567, VkglTestCase_015567_1, VkglTestCase_015567_2);

#define VkglTestCase_015568_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015568_2 "iv.uniform.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015568, VkglTestCase_015568_1, VkglTestCase_015568_2);

#define VkglTestCase_015569_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015569_2 "v.uniform.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015569, VkglTestCase_015569_1, VkglTestCase_015569_2);

#define VkglTestCase_015570_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015570_2 "iv.uniform.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015570, VkglTestCase_015570_1, VkglTestCase_015570_2);

#define VkglTestCase_015571_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015571_2 "v.uniform.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015571, VkglTestCase_015571_1, VkglTestCase_015571_2);

#define VkglTestCase_015572_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015572_2 "div.uniform.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015572, VkglTestCase_015572_1, VkglTestCase_015572_2);

#define VkglTestCase_015573_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015573_2 "iv.uniform.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015573, VkglTestCase_015573_1, VkglTestCase_015573_2);

#define VkglTestCase_015574_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015574_2 "div.uniform.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015574, VkglTestCase_015574_1, VkglTestCase_015574_2);

#define VkglTestCase_015575_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015575_2 "iv.uniform.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015575, VkglTestCase_015575_1, VkglTestCase_015575_2);

#define VkglTestCase_015576_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015576_2 ".div.uniform.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015576, VkglTestCase_015576_1, VkglTestCase_015576_2);

#define VkglTestCase_015577_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015577_2 "div.uniform.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015577, VkglTestCase_015577_1, VkglTestCase_015577_2);

#define VkglTestCase_015578_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015578_2 "div.uniform.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015578, VkglTestCase_015578_1, VkglTestCase_015578_2);

#define VkglTestCase_015579_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015579_2 "iv.uniform.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015579, VkglTestCase_015579_1, VkglTestCase_015579_2);

#define VkglTestCase_015580_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015580_2 "iv.uniform.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015580, VkglTestCase_015580_1, VkglTestCase_015580_2);

#define VkglTestCase_015581_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015581_2 "v.uniform.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015581, VkglTestCase_015581_1, VkglTestCase_015581_2);

#define VkglTestCase_015582_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015582_2 "iv.uniform.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015582, VkglTestCase_015582_1, VkglTestCase_015582_2);

#define VkglTestCase_015583_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015583_2 "v.uniform.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015583, VkglTestCase_015583_1, VkglTestCase_015583_2);

#define VkglTestCase_015584_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015584_2 "div.uniform.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015584, VkglTestCase_015584_1, VkglTestCase_015584_2);

#define VkglTestCase_015585_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015585_2 "iv.uniform.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015585, VkglTestCase_015585_1, VkglTestCase_015585_2);

#define VkglTestCase_015586_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015586_2 "div.uniform.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015586, VkglTestCase_015586_1, VkglTestCase_015586_2);

#define VkglTestCase_015587_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015587_2 "iv.uniform.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015587, VkglTestCase_015587_1, VkglTestCase_015587_2);

#define VkglTestCase_015588_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015588_2 "x.div.uniform.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015588, VkglTestCase_015588_1, VkglTestCase_015588_2);

#define VkglTestCase_015589_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015589_2 ".div.uniform.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015589, VkglTestCase_015589_1, VkglTestCase_015589_2);

#define VkglTestCase_015590_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015590_2 "x.div.uniform.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015590, VkglTestCase_015590_1, VkglTestCase_015590_2);

#define VkglTestCase_015591_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015591_2 ".div.uniform.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015591, VkglTestCase_015591_1, VkglTestCase_015591_2);

#define VkglTestCase_015592_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015592_2 "div.uniform.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015592, VkglTestCase_015592_1, VkglTestCase_015592_2);

#define VkglTestCase_015593_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015593_2 "iv.uniform.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015593, VkglTestCase_015593_1, VkglTestCase_015593_2);

#define VkglTestCase_015594_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015594_2 ".div.uniform.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015594, VkglTestCase_015594_1, VkglTestCase_015594_2);

#define VkglTestCase_015595_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015595_2 "div.uniform.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015595, VkglTestCase_015595_1, VkglTestCase_015595_2);

#define VkglTestCase_015596_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015596_2 ".div.uniform.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015596, VkglTestCase_015596_1, VkglTestCase_015596_2);

#define VkglTestCase_015597_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015597_2 "div.uniform.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015597, VkglTestCase_015597_1, VkglTestCase_015597_2);

#define VkglTestCase_015598_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015598_2 "x.div.uniform.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015598, VkglTestCase_015598_1, VkglTestCase_015598_2);

#define VkglTestCase_015599_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015599_2 ".div.uniform.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015599, VkglTestCase_015599_1, VkglTestCase_015599_2);
