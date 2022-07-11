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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004499_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004499_2 "keywords.keywords.const_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004499, VkglTestCase_004499_1, VkglTestCase_004499_2);

#define VkglTestCase_004500_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004500_2 "eywords.keywords.const_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004500, VkglTestCase_004500_1, VkglTestCase_004500_2);

#define VkglTestCase_004501_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004501_2 "eywords.keywords.uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004501, VkglTestCase_004501_1, VkglTestCase_004501_2);

#define VkglTestCase_004502_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004502_2 "ywords.keywords.uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004502, VkglTestCase_004502_1, VkglTestCase_004502_2);

#define VkglTestCase_004503_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004503_2 "keywords.keywords.layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004503, VkglTestCase_004503_1, VkglTestCase_004503_2);

#define VkglTestCase_004504_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004504_2 "eywords.keywords.layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004504, VkglTestCase_004504_1, VkglTestCase_004504_2);

#define VkglTestCase_004505_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004505_2 "eywords.keywords.centroid_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004505, VkglTestCase_004505_1, VkglTestCase_004505_2);

#define VkglTestCase_004506_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004506_2 "ywords.keywords.centroid_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004506, VkglTestCase_004506_1, VkglTestCase_004506_2);

#define VkglTestCase_004507_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004507_2 ".keywords.keywords.flat_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004507, VkglTestCase_004507_1, VkglTestCase_004507_2);

#define VkglTestCase_004508_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004508_2 "keywords.keywords.flat_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004508, VkglTestCase_004508_1, VkglTestCase_004508_2);

#define VkglTestCase_004509_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004509_2 "keywords.keywords.smooth_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004509, VkglTestCase_004509_1, VkglTestCase_004509_2);

#define VkglTestCase_004510_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004510_2 "eywords.keywords.smooth_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004510, VkglTestCase_004510_1, VkglTestCase_004510_2);

#define VkglTestCase_004511_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004511_2 "keywords.keywords.break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004511, VkglTestCase_004511_1, VkglTestCase_004511_2);

#define VkglTestCase_004512_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004512_2 "eywords.keywords.break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004512, VkglTestCase_004512_1, VkglTestCase_004512_2);

#define VkglTestCase_004513_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004513_2 "eywords.keywords.continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004513, VkglTestCase_004513_1, VkglTestCase_004513_2);

#define VkglTestCase_004514_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004514_2 "ywords.keywords.continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004514, VkglTestCase_004514_1, VkglTestCase_004514_2);

#define VkglTestCase_004515_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004515_2 "s.keywords.keywords.do_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004515, VkglTestCase_004515_1, VkglTestCase_004515_2);

#define VkglTestCase_004516_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004516_2 ".keywords.keywords.do_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004516, VkglTestCase_004516_1, VkglTestCase_004516_2);

#define VkglTestCase_004517_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004517_2 ".keywords.keywords.for_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004517, VkglTestCase_004517_1, VkglTestCase_004517_2);

#define VkglTestCase_004518_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004518_2 "keywords.keywords.for_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004518, VkglTestCase_004518_1, VkglTestCase_004518_2);

#define VkglTestCase_004519_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004519_2 "keywords.keywords.while_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004519, VkglTestCase_004519_1, VkglTestCase_004519_2);

#define VkglTestCase_004520_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004520_2 "eywords.keywords.while_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004520, VkglTestCase_004520_1, VkglTestCase_004520_2);

#define VkglTestCase_004521_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004521_2 "keywords.keywords.switch_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004521, VkglTestCase_004521_1, VkglTestCase_004521_2);

#define VkglTestCase_004522_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004522_2 "eywords.keywords.switch_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004522, VkglTestCase_004522_1, VkglTestCase_004522_2);

#define VkglTestCase_004523_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004523_2 ".keywords.keywords.case_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004523, VkglTestCase_004523_1, VkglTestCase_004523_2);

#define VkglTestCase_004524_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004524_2 "keywords.keywords.case_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004524, VkglTestCase_004524_1, VkglTestCase_004524_2);

#define VkglTestCase_004525_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004525_2 "eywords.keywords.default_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004525, VkglTestCase_004525_1, VkglTestCase_004525_2);

#define VkglTestCase_004526_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004526_2 "ywords.keywords.default_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004526, VkglTestCase_004526_1, VkglTestCase_004526_2);

#define VkglTestCase_004527_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004527_2 "s.keywords.keywords.if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004527, VkglTestCase_004527_1, VkglTestCase_004527_2);

#define VkglTestCase_004528_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004528_2 ".keywords.keywords.if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004528, VkglTestCase_004528_1, VkglTestCase_004528_2);

#define VkglTestCase_004529_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004529_2 ".keywords.keywords.else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004529, VkglTestCase_004529_1, VkglTestCase_004529_2);

#define VkglTestCase_004530_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004530_2 "keywords.keywords.else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004530, VkglTestCase_004530_1, VkglTestCase_004530_2);

#define VkglTestCase_004531_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004531_2 "s.keywords.keywords.in_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004531, VkglTestCase_004531_1, VkglTestCase_004531_2);

#define VkglTestCase_004532_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004532_2 ".keywords.keywords.in_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004532, VkglTestCase_004532_1, VkglTestCase_004532_2);

#define VkglTestCase_004533_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004533_2 ".keywords.keywords.out_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004533, VkglTestCase_004533_1, VkglTestCase_004533_2);

#define VkglTestCase_004534_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004534_2 "keywords.keywords.out_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004534, VkglTestCase_004534_1, VkglTestCase_004534_2);

#define VkglTestCase_004535_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004535_2 "keywords.keywords.inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004535, VkglTestCase_004535_1, VkglTestCase_004535_2);

#define VkglTestCase_004536_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004536_2 "eywords.keywords.inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004536, VkglTestCase_004536_1, VkglTestCase_004536_2);

#define VkglTestCase_004537_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004537_2 "keywords.keywords.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004537, VkglTestCase_004537_1, VkglTestCase_004537_2);

#define VkglTestCase_004538_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004538_2 "eywords.keywords.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004538, VkglTestCase_004538_1, VkglTestCase_004538_2);

#define VkglTestCase_004539_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004539_2 ".keywords.keywords.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004539, VkglTestCase_004539_1, VkglTestCase_004539_2);

#define VkglTestCase_004540_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004540_2 "keywords.keywords.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004540, VkglTestCase_004540_1, VkglTestCase_004540_2);

#define VkglTestCase_004541_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004541_2 ".keywords.keywords.void_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004541, VkglTestCase_004541_1, VkglTestCase_004541_2);

#define VkglTestCase_004542_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004542_2 "keywords.keywords.void_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004542, VkglTestCase_004542_1, VkglTestCase_004542_2);

#define VkglTestCase_004543_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004543_2 ".keywords.keywords.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004543, VkglTestCase_004543_1, VkglTestCase_004543_2);

#define VkglTestCase_004544_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004544_2 "keywords.keywords.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004544, VkglTestCase_004544_1, VkglTestCase_004544_2);

#define VkglTestCase_004545_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004545_2 ".keywords.keywords.true_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004545, VkglTestCase_004545_1, VkglTestCase_004545_2);

#define VkglTestCase_004546_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004546_2 "keywords.keywords.true_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004546, VkglTestCase_004546_1, VkglTestCase_004546_2);

#define VkglTestCase_004547_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004547_2 "keywords.keywords.false_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004547, VkglTestCase_004547_1, VkglTestCase_004547_2);

#define VkglTestCase_004548_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004548_2 "eywords.keywords.false_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004548, VkglTestCase_004548_1, VkglTestCase_004548_2);

#define VkglTestCase_004549_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004549_2 "ywords.keywords.invariant_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004549, VkglTestCase_004549_1, VkglTestCase_004549_2);

#define VkglTestCase_004550_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004550_2 "words.keywords.invariant_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004550, VkglTestCase_004550_1, VkglTestCase_004550_2);

#define VkglTestCase_004551_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004551_2 "eywords.keywords.discard_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004551, VkglTestCase_004551_1, VkglTestCase_004551_2);

#define VkglTestCase_004552_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004552_2 "ywords.keywords.discard_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004552, VkglTestCase_004552_1, VkglTestCase_004552_2);

#define VkglTestCase_004553_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004553_2 "keywords.keywords.return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004553, VkglTestCase_004553_1, VkglTestCase_004553_2);

#define VkglTestCase_004554_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004554_2 "eywords.keywords.return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004554, VkglTestCase_004554_1, VkglTestCase_004554_2);

#define VkglTestCase_004555_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004555_2 ".keywords.keywords.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004555, VkglTestCase_004555_1, VkglTestCase_004555_2);

#define VkglTestCase_004556_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004556_2 "keywords.keywords.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004556, VkglTestCase_004556_1, VkglTestCase_004556_2);

#define VkglTestCase_004557_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004557_2 ".keywords.keywords.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004557, VkglTestCase_004557_1, VkglTestCase_004557_2);

#define VkglTestCase_004558_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004558_2 "keywords.keywords.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004558, VkglTestCase_004558_1, VkglTestCase_004558_2);

#define VkglTestCase_004559_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004559_2 ".keywords.keywords.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004559, VkglTestCase_004559_1, VkglTestCase_004559_2);

#define VkglTestCase_004560_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004560_2 "keywords.keywords.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004560, VkglTestCase_004560_1, VkglTestCase_004560_2);

#define VkglTestCase_004561_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004561_2 "keywords.keywords.mat2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004561, VkglTestCase_004561_1, VkglTestCase_004561_2);

#define VkglTestCase_004562_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004562_2 "eywords.keywords.mat2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004562, VkglTestCase_004562_1, VkglTestCase_004562_2);

#define VkglTestCase_004563_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004563_2 "keywords.keywords.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004563, VkglTestCase_004563_1, VkglTestCase_004563_2);

#define VkglTestCase_004564_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004564_2 "eywords.keywords.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004564, VkglTestCase_004564_1, VkglTestCase_004564_2);

#define VkglTestCase_004565_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004565_2 "keywords.keywords.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004565, VkglTestCase_004565_1, VkglTestCase_004565_2);

#define VkglTestCase_004566_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004566_2 "eywords.keywords.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004566, VkglTestCase_004566_1, VkglTestCase_004566_2);

#define VkglTestCase_004567_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004567_2 "keywords.keywords.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004567, VkglTestCase_004567_1, VkglTestCase_004567_2);

#define VkglTestCase_004568_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004568_2 "eywords.keywords.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004568, VkglTestCase_004568_1, VkglTestCase_004568_2);

#define VkglTestCase_004569_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004569_2 "keywords.keywords.mat3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004569, VkglTestCase_004569_1, VkglTestCase_004569_2);

#define VkglTestCase_004570_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004570_2 "eywords.keywords.mat3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004570, VkglTestCase_004570_1, VkglTestCase_004570_2);

#define VkglTestCase_004571_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004571_2 "keywords.keywords.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004571, VkglTestCase_004571_1, VkglTestCase_004571_2);

#define VkglTestCase_004572_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004572_2 "eywords.keywords.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004572, VkglTestCase_004572_1, VkglTestCase_004572_2);

#define VkglTestCase_004573_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004573_2 "keywords.keywords.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004573, VkglTestCase_004573_1, VkglTestCase_004573_2);

#define VkglTestCase_004574_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004574_2 "eywords.keywords.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004574, VkglTestCase_004574_1, VkglTestCase_004574_2);

#define VkglTestCase_004575_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004575_2 "keywords.keywords.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004575, VkglTestCase_004575_1, VkglTestCase_004575_2);

#define VkglTestCase_004576_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004576_2 "eywords.keywords.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004576, VkglTestCase_004576_1, VkglTestCase_004576_2);

#define VkglTestCase_004577_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004577_2 "keywords.keywords.mat4x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004577, VkglTestCase_004577_1, VkglTestCase_004577_2);

#define VkglTestCase_004578_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004578_2 "eywords.keywords.mat4x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004578, VkglTestCase_004578_1, VkglTestCase_004578_2);

#define VkglTestCase_004579_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004579_2 ".keywords.keywords.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004579, VkglTestCase_004579_1, VkglTestCase_004579_2);

#define VkglTestCase_004580_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004580_2 "keywords.keywords.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004580, VkglTestCase_004580_1, VkglTestCase_004580_2);

#define VkglTestCase_004581_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004581_2 ".keywords.keywords.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004581, VkglTestCase_004581_1, VkglTestCase_004581_2);

#define VkglTestCase_004582_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004582_2 "keywords.keywords.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004582, VkglTestCase_004582_1, VkglTestCase_004582_2);

#define VkglTestCase_004583_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004583_2 ".keywords.keywords.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004583, VkglTestCase_004583_1, VkglTestCase_004583_2);

#define VkglTestCase_004584_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004584_2 "keywords.keywords.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004584, VkglTestCase_004584_1, VkglTestCase_004584_2);

#define VkglTestCase_004585_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004585_2 "keywords.keywords.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004585, VkglTestCase_004585_1, VkglTestCase_004585_2);

#define VkglTestCase_004586_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004586_2 "eywords.keywords.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004586, VkglTestCase_004586_1, VkglTestCase_004586_2);

#define VkglTestCase_004587_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004587_2 "keywords.keywords.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004587, VkglTestCase_004587_1, VkglTestCase_004587_2);

#define VkglTestCase_004588_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004588_2 "eywords.keywords.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004588, VkglTestCase_004588_1, VkglTestCase_004588_2);

#define VkglTestCase_004589_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004589_2 "keywords.keywords.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004589, VkglTestCase_004589_1, VkglTestCase_004589_2);

#define VkglTestCase_004590_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004590_2 "eywords.keywords.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004590, VkglTestCase_004590_1, VkglTestCase_004590_2);

#define VkglTestCase_004591_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004591_2 "keywords.keywords.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004591, VkglTestCase_004591_1, VkglTestCase_004591_2);

#define VkglTestCase_004592_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004592_2 "eywords.keywords.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004592, VkglTestCase_004592_1, VkglTestCase_004592_2);

#define VkglTestCase_004593_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004593_2 "keywords.keywords.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004593, VkglTestCase_004593_1, VkglTestCase_004593_2);

#define VkglTestCase_004594_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004594_2 "eywords.keywords.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004594, VkglTestCase_004594_1, VkglTestCase_004594_2);

#define VkglTestCase_004595_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004595_2 "keywords.keywords.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004595, VkglTestCase_004595_1, VkglTestCase_004595_2);

#define VkglTestCase_004596_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004596_2 "eywords.keywords.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004596, VkglTestCase_004596_1, VkglTestCase_004596_2);

#define VkglTestCase_004597_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004597_2 ".keywords.keywords.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004597, VkglTestCase_004597_1, VkglTestCase_004597_2);

#define VkglTestCase_004598_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004598_2 "keywords.keywords.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004598, VkglTestCase_004598_1, VkglTestCase_004598_2);

#define VkglTestCase_004599_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004599_2 "keywords.keywords.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004599, VkglTestCase_004599_1, VkglTestCase_004599_2);

#define VkglTestCase_004600_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004600_2 "eywords.keywords.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004600, VkglTestCase_004600_1, VkglTestCase_004600_2);

#define VkglTestCase_004601_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004601_2 "keywords.keywords.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004601, VkglTestCase_004601_1, VkglTestCase_004601_2);

#define VkglTestCase_004602_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004602_2 "eywords.keywords.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004602, VkglTestCase_004602_1, VkglTestCase_004602_2);

#define VkglTestCase_004603_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004603_2 "keywords.keywords.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004603, VkglTestCase_004603_1, VkglTestCase_004603_2);

#define VkglTestCase_004604_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004604_2 "eywords.keywords.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004604, VkglTestCase_004604_1, VkglTestCase_004604_2);

#define VkglTestCase_004605_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004605_2 ".keywords.keywords.lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004605, VkglTestCase_004605_1, VkglTestCase_004605_2);

#define VkglTestCase_004606_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004606_2 "keywords.keywords.lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004606, VkglTestCase_004606_1, VkglTestCase_004606_2);

#define VkglTestCase_004607_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004607_2 "eywords.keywords.mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004607, VkglTestCase_004607_1, VkglTestCase_004607_2);

#define VkglTestCase_004608_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004608_2 "ywords.keywords.mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004608, VkglTestCase_004608_1, VkglTestCase_004608_2);

#define VkglTestCase_004609_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004609_2 "keywords.keywords.highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004609, VkglTestCase_004609_1, VkglTestCase_004609_2);

#define VkglTestCase_004610_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004610_2 "eywords.keywords.highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004610, VkglTestCase_004610_1, VkglTestCase_004610_2);

#define VkglTestCase_004611_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004611_2 "ywords.keywords.precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004611, VkglTestCase_004611_1, VkglTestCase_004611_2);

#define VkglTestCase_004612_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004612_2 "words.keywords.precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004612, VkglTestCase_004612_1, VkglTestCase_004612_2);

#define VkglTestCase_004613_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004613_2 "ywords.keywords.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004613, VkglTestCase_004613_1, VkglTestCase_004613_2);

#define VkglTestCase_004614_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004614_2 "words.keywords.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004614, VkglTestCase_004614_1, VkglTestCase_004614_2);

#define VkglTestCase_004615_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004615_2 "ywords.keywords.sampler3D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004615, VkglTestCase_004615_1, VkglTestCase_004615_2);

#define VkglTestCase_004616_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004616_2 "words.keywords.sampler3D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004616, VkglTestCase_004616_1, VkglTestCase_004616_2);

#define VkglTestCase_004617_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004617_2 "words.keywords.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004617, VkglTestCase_004617_1, VkglTestCase_004617_2);

#define VkglTestCase_004618_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004618_2 "ords.keywords.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004618, VkglTestCase_004618_1, VkglTestCase_004618_2);

#define VkglTestCase_004619_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004619_2 "rds.keywords.sampler2DShadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004619, VkglTestCase_004619_1, VkglTestCase_004619_2);

#define VkglTestCase_004620_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004620_2 "ds.keywords.sampler2DShadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004620, VkglTestCase_004620_1, VkglTestCase_004620_2);

#define VkglTestCase_004621_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004621_2 "ds.keywords.samplerCubeShadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004621, VkglTestCase_004621_1, VkglTestCase_004621_2);

#define VkglTestCase_004622_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004622_2 "s.keywords.samplerCubeShadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004622, VkglTestCase_004622_1, VkglTestCase_004622_2);

#define VkglTestCase_004623_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004623_2 "ords.keywords.sampler2DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004623, VkglTestCase_004623_1, VkglTestCase_004623_2);

#define VkglTestCase_004624_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004624_2 "rds.keywords.sampler2DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004624, VkglTestCase_004624_1, VkglTestCase_004624_2);

#define VkglTestCase_004625_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004625_2 "s.keywords.sampler2DArrayShadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004625, VkglTestCase_004625_1, VkglTestCase_004625_2);

#define VkglTestCase_004626_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004626_2 ".keywords.sampler2DArrayShadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004626, VkglTestCase_004626_1, VkglTestCase_004626_2);

#define VkglTestCase_004627_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004627_2 "ywords.keywords.isampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004627, VkglTestCase_004627_1, VkglTestCase_004627_2);

#define VkglTestCase_004628_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004628_2 "words.keywords.isampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004628, VkglTestCase_004628_1, VkglTestCase_004628_2);

#define VkglTestCase_004629_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004629_2 "ywords.keywords.isampler3D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004629, VkglTestCase_004629_1, VkglTestCase_004629_2);

#define VkglTestCase_004630_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004630_2 "words.keywords.isampler3D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004630, VkglTestCase_004630_1, VkglTestCase_004630_2);

#define VkglTestCase_004631_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004631_2 "words.keywords.isamplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004631, VkglTestCase_004631_1, VkglTestCase_004631_2);

#define VkglTestCase_004632_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004632_2 "ords.keywords.isamplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004632, VkglTestCase_004632_1, VkglTestCase_004632_2);

#define VkglTestCase_004633_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004633_2 "rds.keywords.isampler2DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004633, VkglTestCase_004633_1, VkglTestCase_004633_2);

#define VkglTestCase_004634_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004634_2 "ds.keywords.isampler2DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004634, VkglTestCase_004634_1, VkglTestCase_004634_2);

#define VkglTestCase_004635_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004635_2 "ywords.keywords.usampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004635, VkglTestCase_004635_1, VkglTestCase_004635_2);

#define VkglTestCase_004636_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004636_2 "words.keywords.usampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004636, VkglTestCase_004636_1, VkglTestCase_004636_2);

#define VkglTestCase_004637_1 "dEQP-GLES3.functional.shaders.ke"
#define VkglTestCase_004637_2 "ywords.keywords.usampler3D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004637, VkglTestCase_004637_1, VkglTestCase_004637_2);

#define VkglTestCase_004638_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004638_2 "words.keywords.usampler3D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004638, VkglTestCase_004638_1, VkglTestCase_004638_2);

#define VkglTestCase_004639_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004639_2 "words.keywords.usamplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004639, VkglTestCase_004639_1, VkglTestCase_004639_2);

#define VkglTestCase_004640_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004640_2 "ords.keywords.usamplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004640, VkglTestCase_004640_1, VkglTestCase_004640_2);

#define VkglTestCase_004641_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004641_2 "rds.keywords.usampler2DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004641, VkglTestCase_004641_1, VkglTestCase_004641_2);

#define VkglTestCase_004642_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004642_2 "ds.keywords.usampler2DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004642, VkglTestCase_004642_1, VkglTestCase_004642_2);

#define VkglTestCase_004643_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004643_2 "keywords.keywords.struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004643, VkglTestCase_004643_1, VkglTestCase_004643_2);

#define VkglTestCase_004644_1 "dEQP-GLES3.functional.shaders.k"
#define VkglTestCase_004644_2 "eywords.keywords.struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004644, VkglTestCase_004644_1, VkglTestCase_004644_2);
