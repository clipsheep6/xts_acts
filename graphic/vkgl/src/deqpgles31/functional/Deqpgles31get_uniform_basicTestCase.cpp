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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016543_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016543_2 "y_pointer.get_uniform.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016543, VkglTestCase_016543_1, VkglTestCase_016543_2);

#define VkglTestCase_016544_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016544_2 "_pointer.get_uniform.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016544, VkglTestCase_016544_1, VkglTestCase_016544_2);

#define VkglTestCase_016545_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016545_2 "by_pointer.get_uniform.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016545, VkglTestCase_016545_1, VkglTestCase_016545_2);

#define VkglTestCase_016546_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016546_2 "by_pointer.get_uniform.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016546, VkglTestCase_016546_1, VkglTestCase_016546_2);

#define VkglTestCase_016547_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016547_2 "y_pointer.get_uniform.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016547, VkglTestCase_016547_1, VkglTestCase_016547_2);

#define VkglTestCase_016548_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016548_2 ".by_pointer.get_uniform.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016548, VkglTestCase_016548_1, VkglTestCase_016548_2);

#define VkglTestCase_016549_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016549_2 "by_pointer.get_uniform.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016549, VkglTestCase_016549_1, VkglTestCase_016549_2);

#define VkglTestCase_016550_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016550_2 "y_pointer.get_uniform.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016550, VkglTestCase_016550_1, VkglTestCase_016550_2);

#define VkglTestCase_016551_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016551_2 ".by_pointer.get_uniform.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016551, VkglTestCase_016551_1, VkglTestCase_016551_2);

#define VkglTestCase_016552_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016552_2 "by_pointer.get_uniform.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016552, VkglTestCase_016552_1, VkglTestCase_016552_2);

#define VkglTestCase_016553_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016553_2 "y_pointer.get_uniform.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016553, VkglTestCase_016553_1, VkglTestCase_016553_2);

#define VkglTestCase_016554_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016554_2 ".by_pointer.get_uniform.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016554, VkglTestCase_016554_1, VkglTestCase_016554_2);

#define VkglTestCase_016555_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016555_2 "by_pointer.get_uniform.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016555, VkglTestCase_016555_1, VkglTestCase_016555_2);

#define VkglTestCase_016556_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016556_2 "y_pointer.get_uniform.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016556, VkglTestCase_016556_1, VkglTestCase_016556_2);

#define VkglTestCase_016557_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016557_2 ".by_pointer.get_uniform.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016557, VkglTestCase_016557_1, VkglTestCase_016557_2);

#define VkglTestCase_016558_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016558_2 "inter.get_uniform.basic.mat2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016558, VkglTestCase_016558_1, VkglTestCase_016558_2);

#define VkglTestCase_016559_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016559_2 "nter.get_uniform.basic.mat2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016559, VkglTestCase_016559_1, VkglTestCase_016559_2);

#define VkglTestCase_016560_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016560_2 "ointer.get_uniform.basic.mat2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016560, VkglTestCase_016560_1, VkglTestCase_016560_2);

#define VkglTestCase_016561_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016561_2 "y_pointer.get_uniform.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016561, VkglTestCase_016561_1, VkglTestCase_016561_2);

#define VkglTestCase_016562_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016562_2 "_pointer.get_uniform.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016562, VkglTestCase_016562_1, VkglTestCase_016562_2);

#define VkglTestCase_016563_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016563_2 "by_pointer.get_uniform.basic.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016563, VkglTestCase_016563_1, VkglTestCase_016563_2);

#define VkglTestCase_016564_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016564_2 "nter.get_uniform.basic.mat2x3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016564, VkglTestCase_016564_1, VkglTestCase_016564_2);

#define VkglTestCase_016565_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016565_2 "ter.get_uniform.basic.mat2x3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016565, VkglTestCase_016565_1, VkglTestCase_016565_2);

#define VkglTestCase_016566_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016566_2 "inter.get_uniform.basic.mat2x3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016566, VkglTestCase_016566_1, VkglTestCase_016566_2);

#define VkglTestCase_016567_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016567_2 "y_pointer.get_uniform.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016567, VkglTestCase_016567_1, VkglTestCase_016567_2);

#define VkglTestCase_016568_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016568_2 "_pointer.get_uniform.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016568, VkglTestCase_016568_1, VkglTestCase_016568_2);

#define VkglTestCase_016569_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016569_2 "by_pointer.get_uniform.basic.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016569, VkglTestCase_016569_1, VkglTestCase_016569_2);

#define VkglTestCase_016570_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016570_2 "nter.get_uniform.basic.mat2x4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016570, VkglTestCase_016570_1, VkglTestCase_016570_2);

#define VkglTestCase_016571_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016571_2 "ter.get_uniform.basic.mat2x4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016571, VkglTestCase_016571_1, VkglTestCase_016571_2);

#define VkglTestCase_016572_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016572_2 "inter.get_uniform.basic.mat2x4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016572, VkglTestCase_016572_1, VkglTestCase_016572_2);

#define VkglTestCase_016573_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016573_2 "y_pointer.get_uniform.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016573, VkglTestCase_016573_1, VkglTestCase_016573_2);

#define VkglTestCase_016574_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016574_2 "_pointer.get_uniform.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016574, VkglTestCase_016574_1, VkglTestCase_016574_2);

#define VkglTestCase_016575_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016575_2 "by_pointer.get_uniform.basic.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016575, VkglTestCase_016575_1, VkglTestCase_016575_2);

#define VkglTestCase_016576_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016576_2 "nter.get_uniform.basic.mat3x2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016576, VkglTestCase_016576_1, VkglTestCase_016576_2);

#define VkglTestCase_016577_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016577_2 "ter.get_uniform.basic.mat3x2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016577, VkglTestCase_016577_1, VkglTestCase_016577_2);

#define VkglTestCase_016578_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016578_2 "inter.get_uniform.basic.mat3x2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016578, VkglTestCase_016578_1, VkglTestCase_016578_2);

#define VkglTestCase_016579_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016579_2 "by_pointer.get_uniform.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016579, VkglTestCase_016579_1, VkglTestCase_016579_2);

#define VkglTestCase_016580_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016580_2 "y_pointer.get_uniform.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016580, VkglTestCase_016580_1, VkglTestCase_016580_2);

#define VkglTestCase_016581_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016581_2 ".by_pointer.get_uniform.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016581, VkglTestCase_016581_1, VkglTestCase_016581_2);

#define VkglTestCase_016582_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016582_2 "inter.get_uniform.basic.mat3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016582, VkglTestCase_016582_1, VkglTestCase_016582_2);

#define VkglTestCase_016583_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016583_2 "nter.get_uniform.basic.mat3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016583, VkglTestCase_016583_1, VkglTestCase_016583_2);

#define VkglTestCase_016584_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016584_2 "ointer.get_uniform.basic.mat3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016584, VkglTestCase_016584_1, VkglTestCase_016584_2);

#define VkglTestCase_016585_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016585_2 "y_pointer.get_uniform.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016585, VkglTestCase_016585_1, VkglTestCase_016585_2);

#define VkglTestCase_016586_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016586_2 "_pointer.get_uniform.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016586, VkglTestCase_016586_1, VkglTestCase_016586_2);

#define VkglTestCase_016587_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016587_2 "by_pointer.get_uniform.basic.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016587, VkglTestCase_016587_1, VkglTestCase_016587_2);

#define VkglTestCase_016588_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016588_2 "nter.get_uniform.basic.mat3x4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016588, VkglTestCase_016588_1, VkglTestCase_016588_2);

#define VkglTestCase_016589_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016589_2 "ter.get_uniform.basic.mat3x4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016589, VkglTestCase_016589_1, VkglTestCase_016589_2);

#define VkglTestCase_016590_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016590_2 "inter.get_uniform.basic.mat3x4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016590, VkglTestCase_016590_1, VkglTestCase_016590_2);

#define VkglTestCase_016591_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016591_2 "y_pointer.get_uniform.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016591, VkglTestCase_016591_1, VkglTestCase_016591_2);

#define VkglTestCase_016592_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016592_2 "_pointer.get_uniform.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016592, VkglTestCase_016592_1, VkglTestCase_016592_2);

#define VkglTestCase_016593_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016593_2 "by_pointer.get_uniform.basic.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016593, VkglTestCase_016593_1, VkglTestCase_016593_2);

#define VkglTestCase_016594_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016594_2 "nter.get_uniform.basic.mat4x2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016594, VkglTestCase_016594_1, VkglTestCase_016594_2);

#define VkglTestCase_016595_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016595_2 "ter.get_uniform.basic.mat4x2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016595, VkglTestCase_016595_1, VkglTestCase_016595_2);

#define VkglTestCase_016596_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016596_2 "inter.get_uniform.basic.mat4x2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016596, VkglTestCase_016596_1, VkglTestCase_016596_2);

#define VkglTestCase_016597_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016597_2 "y_pointer.get_uniform.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016597, VkglTestCase_016597_1, VkglTestCase_016597_2);

#define VkglTestCase_016598_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016598_2 "_pointer.get_uniform.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016598, VkglTestCase_016598_1, VkglTestCase_016598_2);

#define VkglTestCase_016599_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016599_2 "by_pointer.get_uniform.basic.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016599, VkglTestCase_016599_1, VkglTestCase_016599_2);

#define VkglTestCase_016600_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016600_2 "nter.get_uniform.basic.mat4x3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016600, VkglTestCase_016600_1, VkglTestCase_016600_2);

#define VkglTestCase_016601_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016601_2 "ter.get_uniform.basic.mat4x3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016601, VkglTestCase_016601_1, VkglTestCase_016601_2);

#define VkglTestCase_016602_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016602_2 "inter.get_uniform.basic.mat4x3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016602, VkglTestCase_016602_1, VkglTestCase_016602_2);

#define VkglTestCase_016603_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016603_2 "by_pointer.get_uniform.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016603, VkglTestCase_016603_1, VkglTestCase_016603_2);

#define VkglTestCase_016604_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016604_2 "y_pointer.get_uniform.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016604, VkglTestCase_016604_1, VkglTestCase_016604_2);

#define VkglTestCase_016605_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016605_2 ".by_pointer.get_uniform.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016605, VkglTestCase_016605_1, VkglTestCase_016605_2);

#define VkglTestCase_016606_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016606_2 "inter.get_uniform.basic.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016606, VkglTestCase_016606_1, VkglTestCase_016606_2);

#define VkglTestCase_016607_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016607_2 "nter.get_uniform.basic.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016607, VkglTestCase_016607_1, VkglTestCase_016607_2);

#define VkglTestCase_016608_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016608_2 "ointer.get_uniform.basic.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016608, VkglTestCase_016608_1, VkglTestCase_016608_2);

#define VkglTestCase_016609_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016609_2 "by_pointer.get_uniform.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016609, VkglTestCase_016609_1, VkglTestCase_016609_2);

#define VkglTestCase_016610_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016610_2 "y_pointer.get_uniform.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016610, VkglTestCase_016610_1, VkglTestCase_016610_2);

#define VkglTestCase_016611_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016611_2 ".by_pointer.get_uniform.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016611, VkglTestCase_016611_1, VkglTestCase_016611_2);

#define VkglTestCase_016612_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016612_2 "y_pointer.get_uniform.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016612, VkglTestCase_016612_1, VkglTestCase_016612_2);

#define VkglTestCase_016613_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016613_2 "_pointer.get_uniform.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016613, VkglTestCase_016613_1, VkglTestCase_016613_2);

#define VkglTestCase_016614_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016614_2 "by_pointer.get_uniform.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016614, VkglTestCase_016614_1, VkglTestCase_016614_2);

#define VkglTestCase_016615_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016615_2 "y_pointer.get_uniform.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016615, VkglTestCase_016615_1, VkglTestCase_016615_2);

#define VkglTestCase_016616_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016616_2 "_pointer.get_uniform.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016616, VkglTestCase_016616_1, VkglTestCase_016616_2);

#define VkglTestCase_016617_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016617_2 "by_pointer.get_uniform.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016617, VkglTestCase_016617_1, VkglTestCase_016617_2);

#define VkglTestCase_016618_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016618_2 "y_pointer.get_uniform.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016618, VkglTestCase_016618_1, VkglTestCase_016618_2);

#define VkglTestCase_016619_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016619_2 "_pointer.get_uniform.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016619, VkglTestCase_016619_1, VkglTestCase_016619_2);

#define VkglTestCase_016620_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016620_2 "by_pointer.get_uniform.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016620, VkglTestCase_016620_1, VkglTestCase_016620_2);

#define VkglTestCase_016621_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016621_2 "by_pointer.get_uniform.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016621, VkglTestCase_016621_1, VkglTestCase_016621_2);

#define VkglTestCase_016622_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016622_2 "y_pointer.get_uniform.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016622, VkglTestCase_016622_1, VkglTestCase_016622_2);

#define VkglTestCase_016623_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016623_2 ".by_pointer.get_uniform.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016623, VkglTestCase_016623_1, VkglTestCase_016623_2);

#define VkglTestCase_016624_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016624_2 "y_pointer.get_uniform.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016624, VkglTestCase_016624_1, VkglTestCase_016624_2);

#define VkglTestCase_016625_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016625_2 "_pointer.get_uniform.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016625, VkglTestCase_016625_1, VkglTestCase_016625_2);

#define VkglTestCase_016626_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016626_2 "by_pointer.get_uniform.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016626, VkglTestCase_016626_1, VkglTestCase_016626_2);

#define VkglTestCase_016627_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016627_2 "y_pointer.get_uniform.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016627, VkglTestCase_016627_1, VkglTestCase_016627_2);

#define VkglTestCase_016628_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016628_2 "_pointer.get_uniform.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016628, VkglTestCase_016628_1, VkglTestCase_016628_2);

#define VkglTestCase_016629_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016629_2 "by_pointer.get_uniform.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016629, VkglTestCase_016629_1, VkglTestCase_016629_2);

#define VkglTestCase_016630_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016630_2 "y_pointer.get_uniform.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016630, VkglTestCase_016630_1, VkglTestCase_016630_2);

#define VkglTestCase_016631_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016631_2 "_pointer.get_uniform.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016631, VkglTestCase_016631_1, VkglTestCase_016631_2);

#define VkglTestCase_016632_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016632_2 "by_pointer.get_uniform.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016632, VkglTestCase_016632_1, VkglTestCase_016632_2);

#define VkglTestCase_016633_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016633_2 "inter.get_uniform.basic.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016633, VkglTestCase_016633_1, VkglTestCase_016633_2);

#define VkglTestCase_016634_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016634_2 "nter.get_uniform.basic.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016634, VkglTestCase_016634_1, VkglTestCase_016634_2);

#define VkglTestCase_016635_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016635_2 "ointer.get_uniform.basic.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016635, VkglTestCase_016635_1, VkglTestCase_016635_2);

#define VkglTestCase_016636_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016636_2 "ointer.get_uniform.basic.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016636, VkglTestCase_016636_1, VkglTestCase_016636_2);

#define VkglTestCase_016637_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016637_2 "inter.get_uniform.basic.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016637, VkglTestCase_016637_1, VkglTestCase_016637_2);

#define VkglTestCase_016638_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016638_2 "pointer.get_uniform.basic.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016638, VkglTestCase_016638_1, VkglTestCase_016638_2);

#define VkglTestCase_016639_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016639_2 "inter.get_uniform.basic.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016639, VkglTestCase_016639_1, VkglTestCase_016639_2);

#define VkglTestCase_016640_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016640_2 "nter.get_uniform.basic.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016640, VkglTestCase_016640_1, VkglTestCase_016640_2);

#define VkglTestCase_016641_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016641_2 "ointer.get_uniform.basic.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016641, VkglTestCase_016641_1, VkglTestCase_016641_2);

#define VkglTestCase_016642_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016642_2 "nter.get_uniform.basic.bvec2_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016642, VkglTestCase_016642_1, VkglTestCase_016642_2);

#define VkglTestCase_016643_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016643_2 "ter.get_uniform.basic.bvec2_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016643, VkglTestCase_016643_1, VkglTestCase_016643_2);

#define VkglTestCase_016644_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016644_2 "inter.get_uniform.basic.bvec2_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016644, VkglTestCase_016644_1, VkglTestCase_016644_2);

#define VkglTestCase_016645_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016645_2 "inter.get_uniform.basic.bvec2_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016645, VkglTestCase_016645_1, VkglTestCase_016645_2);

#define VkglTestCase_016646_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016646_2 "nter.get_uniform.basic.bvec2_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016646, VkglTestCase_016646_1, VkglTestCase_016646_2);

#define VkglTestCase_016647_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016647_2 "ointer.get_uniform.basic.bvec2_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016647, VkglTestCase_016647_1, VkglTestCase_016647_2);

#define VkglTestCase_016648_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016648_2 "inter.get_uniform.basic.bvec2_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016648, VkglTestCase_016648_1, VkglTestCase_016648_2);

#define VkglTestCase_016649_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016649_2 "nter.get_uniform.basic.bvec2_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016649, VkglTestCase_016649_1, VkglTestCase_016649_2);

#define VkglTestCase_016650_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016650_2 "ointer.get_uniform.basic.bvec2_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016650, VkglTestCase_016650_1, VkglTestCase_016650_2);

#define VkglTestCase_016651_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016651_2 "nter.get_uniform.basic.bvec3_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016651, VkglTestCase_016651_1, VkglTestCase_016651_2);

#define VkglTestCase_016652_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016652_2 "ter.get_uniform.basic.bvec3_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016652, VkglTestCase_016652_1, VkglTestCase_016652_2);

#define VkglTestCase_016653_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016653_2 "inter.get_uniform.basic.bvec3_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016653, VkglTestCase_016653_1, VkglTestCase_016653_2);

#define VkglTestCase_016654_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016654_2 "inter.get_uniform.basic.bvec3_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016654, VkglTestCase_016654_1, VkglTestCase_016654_2);

#define VkglTestCase_016655_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016655_2 "nter.get_uniform.basic.bvec3_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016655, VkglTestCase_016655_1, VkglTestCase_016655_2);

#define VkglTestCase_016656_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016656_2 "ointer.get_uniform.basic.bvec3_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016656, VkglTestCase_016656_1, VkglTestCase_016656_2);

#define VkglTestCase_016657_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016657_2 "inter.get_uniform.basic.bvec3_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016657, VkglTestCase_016657_1, VkglTestCase_016657_2);

#define VkglTestCase_016658_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016658_2 "nter.get_uniform.basic.bvec3_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016658, VkglTestCase_016658_1, VkglTestCase_016658_2);

#define VkglTestCase_016659_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016659_2 "ointer.get_uniform.basic.bvec3_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016659, VkglTestCase_016659_1, VkglTestCase_016659_2);

#define VkglTestCase_016660_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016660_2 "nter.get_uniform.basic.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016660, VkglTestCase_016660_1, VkglTestCase_016660_2);

#define VkglTestCase_016661_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016661_2 "ter.get_uniform.basic.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016661, VkglTestCase_016661_1, VkglTestCase_016661_2);

#define VkglTestCase_016662_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016662_2 "inter.get_uniform.basic.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016662, VkglTestCase_016662_1, VkglTestCase_016662_2);

#define VkglTestCase_016663_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016663_2 "inter.get_uniform.basic.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016663, VkglTestCase_016663_1, VkglTestCase_016663_2);

#define VkglTestCase_016664_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016664_2 "nter.get_uniform.basic.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016664, VkglTestCase_016664_1, VkglTestCase_016664_2);

#define VkglTestCase_016665_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016665_2 "ointer.get_uniform.basic.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016665, VkglTestCase_016665_1, VkglTestCase_016665_2);

#define VkglTestCase_016666_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016666_2 "inter.get_uniform.basic.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016666, VkglTestCase_016666_1, VkglTestCase_016666_2);

#define VkglTestCase_016667_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016667_2 "nter.get_uniform.basic.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016667, VkglTestCase_016667_1, VkglTestCase_016667_2);

#define VkglTestCase_016668_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016668_2 "ointer.get_uniform.basic.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016668, VkglTestCase_016668_1, VkglTestCase_016668_2);

#define VkglTestCase_016669_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016669_2 "pointer.get_uniform.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016669, VkglTestCase_016669_1, VkglTestCase_016669_2);

#define VkglTestCase_016670_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016670_2 "ointer.get_uniform.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016670, VkglTestCase_016670_1, VkglTestCase_016670_2);

#define VkglTestCase_016671_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016671_2 "_pointer.get_uniform.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016671, VkglTestCase_016671_1, VkglTestCase_016671_2);

#define VkglTestCase_016672_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016672_2 "ointer.get_uniform.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016672, VkglTestCase_016672_1, VkglTestCase_016672_2);

#define VkglTestCase_016673_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016673_2 "inter.get_uniform.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016673, VkglTestCase_016673_1, VkglTestCase_016673_2);

#define VkglTestCase_016674_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016674_2 "pointer.get_uniform.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016674, VkglTestCase_016674_1, VkglTestCase_016674_2);

#define VkglTestCase_017068_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017068_2 "by_value.get_uniform.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017068, VkglTestCase_017068_1, VkglTestCase_017068_2);

#define VkglTestCase_017069_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017069_2 "y_value.get_uniform.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017069, VkglTestCase_017069_1, VkglTestCase_017069_2);

#define VkglTestCase_017070_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017070_2 ".by_value.get_uniform.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017070, VkglTestCase_017070_1, VkglTestCase_017070_2);

#define VkglTestCase_017071_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017071_2 ".by_value.get_uniform.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017071, VkglTestCase_017071_1, VkglTestCase_017071_2);

#define VkglTestCase_017072_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017072_2 "by_value.get_uniform.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017072, VkglTestCase_017072_1, VkglTestCase_017072_2);

#define VkglTestCase_017073_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017073_2 "m.by_value.get_uniform.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017073, VkglTestCase_017073_1, VkglTestCase_017073_2);

#define VkglTestCase_017074_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017074_2 ".by_value.get_uniform.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017074, VkglTestCase_017074_1, VkglTestCase_017074_2);

#define VkglTestCase_017075_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017075_2 "by_value.get_uniform.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017075, VkglTestCase_017075_1, VkglTestCase_017075_2);

#define VkglTestCase_017076_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017076_2 "m.by_value.get_uniform.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017076, VkglTestCase_017076_1, VkglTestCase_017076_2);

#define VkglTestCase_017077_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017077_2 ".by_value.get_uniform.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017077, VkglTestCase_017077_1, VkglTestCase_017077_2);

#define VkglTestCase_017078_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017078_2 "by_value.get_uniform.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017078, VkglTestCase_017078_1, VkglTestCase_017078_2);

#define VkglTestCase_017079_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017079_2 "m.by_value.get_uniform.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017079, VkglTestCase_017079_1, VkglTestCase_017079_2);

#define VkglTestCase_017080_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017080_2 ".by_value.get_uniform.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017080, VkglTestCase_017080_1, VkglTestCase_017080_2);

#define VkglTestCase_017081_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017081_2 "by_value.get_uniform.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017081, VkglTestCase_017081_1, VkglTestCase_017081_2);

#define VkglTestCase_017082_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017082_2 "m.by_value.get_uniform.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017082, VkglTestCase_017082_1, VkglTestCase_017082_2);

#define VkglTestCase_017083_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017083_2 "by_value.get_uniform.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017083, VkglTestCase_017083_1, VkglTestCase_017083_2);

#define VkglTestCase_017084_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017084_2 "y_value.get_uniform.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017084, VkglTestCase_017084_1, VkglTestCase_017084_2);

#define VkglTestCase_017085_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017085_2 ".by_value.get_uniform.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017085, VkglTestCase_017085_1, VkglTestCase_017085_2);

#define VkglTestCase_017086_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017086_2 "by_value.get_uniform.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017086, VkglTestCase_017086_1, VkglTestCase_017086_2);

#define VkglTestCase_017087_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017087_2 "y_value.get_uniform.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017087, VkglTestCase_017087_1, VkglTestCase_017087_2);

#define VkglTestCase_017088_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017088_2 ".by_value.get_uniform.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017088, VkglTestCase_017088_1, VkglTestCase_017088_2);

#define VkglTestCase_017089_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017089_2 "by_value.get_uniform.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017089, VkglTestCase_017089_1, VkglTestCase_017089_2);

#define VkglTestCase_017090_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017090_2 "y_value.get_uniform.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017090, VkglTestCase_017090_1, VkglTestCase_017090_2);

#define VkglTestCase_017091_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017091_2 ".by_value.get_uniform.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017091, VkglTestCase_017091_1, VkglTestCase_017091_2);

#define VkglTestCase_017092_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017092_2 ".by_value.get_uniform.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017092, VkglTestCase_017092_1, VkglTestCase_017092_2);

#define VkglTestCase_017093_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017093_2 "by_value.get_uniform.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017093, VkglTestCase_017093_1, VkglTestCase_017093_2);

#define VkglTestCase_017094_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017094_2 "m.by_value.get_uniform.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017094, VkglTestCase_017094_1, VkglTestCase_017094_2);

#define VkglTestCase_017095_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017095_2 "by_value.get_uniform.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017095, VkglTestCase_017095_1, VkglTestCase_017095_2);

#define VkglTestCase_017096_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017096_2 "y_value.get_uniform.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017096, VkglTestCase_017096_1, VkglTestCase_017096_2);

#define VkglTestCase_017097_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017097_2 ".by_value.get_uniform.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017097, VkglTestCase_017097_1, VkglTestCase_017097_2);

#define VkglTestCase_017098_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017098_2 "by_value.get_uniform.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017098, VkglTestCase_017098_1, VkglTestCase_017098_2);

#define VkglTestCase_017099_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017099_2 "y_value.get_uniform.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017099, VkglTestCase_017099_1, VkglTestCase_017099_2);

#define VkglTestCase_017100_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017100_2 ".by_value.get_uniform.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017100, VkglTestCase_017100_1, VkglTestCase_017100_2);

#define VkglTestCase_017101_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017101_2 "by_value.get_uniform.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017101, VkglTestCase_017101_1, VkglTestCase_017101_2);

#define VkglTestCase_017102_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017102_2 "y_value.get_uniform.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017102, VkglTestCase_017102_1, VkglTestCase_017102_2);

#define VkglTestCase_017103_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017103_2 ".by_value.get_uniform.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017103, VkglTestCase_017103_1, VkglTestCase_017103_2);

#define VkglTestCase_017104_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017104_2 "alue.get_uniform.basic.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017104, VkglTestCase_017104_1, VkglTestCase_017104_2);

#define VkglTestCase_017105_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017105_2 "lue.get_uniform.basic.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017105, VkglTestCase_017105_1, VkglTestCase_017105_2);

#define VkglTestCase_017106_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017106_2 "value.get_uniform.basic.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017106, VkglTestCase_017106_1, VkglTestCase_017106_2);

#define VkglTestCase_017107_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017107_2 "value.get_uniform.basic.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017107, VkglTestCase_017107_1, VkglTestCase_017107_2);

#define VkglTestCase_017108_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017108_2 "alue.get_uniform.basic.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017108, VkglTestCase_017108_1, VkglTestCase_017108_2);

#define VkglTestCase_017109_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017109_2 "_value.get_uniform.basic.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017109, VkglTestCase_017109_1, VkglTestCase_017109_2);

#define VkglTestCase_017110_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017110_2 "alue.get_uniform.basic.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017110, VkglTestCase_017110_1, VkglTestCase_017110_2);

#define VkglTestCase_017111_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017111_2 "lue.get_uniform.basic.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017111, VkglTestCase_017111_1, VkglTestCase_017111_2);

#define VkglTestCase_017112_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017112_2 "value.get_uniform.basic.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017112, VkglTestCase_017112_1, VkglTestCase_017112_2);

#define VkglTestCase_017113_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017113_2 "lue.get_uniform.basic.bvec2_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017113, VkglTestCase_017113_1, VkglTestCase_017113_2);

#define VkglTestCase_017114_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017114_2 "ue.get_uniform.basic.bvec2_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017114, VkglTestCase_017114_1, VkglTestCase_017114_2);

#define VkglTestCase_017115_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017115_2 "alue.get_uniform.basic.bvec2_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017115, VkglTestCase_017115_1, VkglTestCase_017115_2);

#define VkglTestCase_017116_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017116_2 "alue.get_uniform.basic.bvec2_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017116, VkglTestCase_017116_1, VkglTestCase_017116_2);

#define VkglTestCase_017117_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017117_2 "lue.get_uniform.basic.bvec2_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017117, VkglTestCase_017117_1, VkglTestCase_017117_2);

#define VkglTestCase_017118_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017118_2 "value.get_uniform.basic.bvec2_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017118, VkglTestCase_017118_1, VkglTestCase_017118_2);

#define VkglTestCase_017119_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017119_2 "alue.get_uniform.basic.bvec2_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017119, VkglTestCase_017119_1, VkglTestCase_017119_2);

#define VkglTestCase_017120_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017120_2 "lue.get_uniform.basic.bvec2_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017120, VkglTestCase_017120_1, VkglTestCase_017120_2);

#define VkglTestCase_017121_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017121_2 "value.get_uniform.basic.bvec2_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017121, VkglTestCase_017121_1, VkglTestCase_017121_2);

#define VkglTestCase_017122_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017122_2 "lue.get_uniform.basic.bvec3_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017122, VkglTestCase_017122_1, VkglTestCase_017122_2);

#define VkglTestCase_017123_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017123_2 "ue.get_uniform.basic.bvec3_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017123, VkglTestCase_017123_1, VkglTestCase_017123_2);

#define VkglTestCase_017124_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017124_2 "alue.get_uniform.basic.bvec3_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017124, VkglTestCase_017124_1, VkglTestCase_017124_2);

#define VkglTestCase_017125_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017125_2 "alue.get_uniform.basic.bvec3_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017125, VkglTestCase_017125_1, VkglTestCase_017125_2);

#define VkglTestCase_017126_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017126_2 "lue.get_uniform.basic.bvec3_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017126, VkglTestCase_017126_1, VkglTestCase_017126_2);

#define VkglTestCase_017127_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017127_2 "value.get_uniform.basic.bvec3_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017127, VkglTestCase_017127_1, VkglTestCase_017127_2);

#define VkglTestCase_017128_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017128_2 "alue.get_uniform.basic.bvec3_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017128, VkglTestCase_017128_1, VkglTestCase_017128_2);

#define VkglTestCase_017129_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017129_2 "lue.get_uniform.basic.bvec3_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017129, VkglTestCase_017129_1, VkglTestCase_017129_2);

#define VkglTestCase_017130_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017130_2 "value.get_uniform.basic.bvec3_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017130, VkglTestCase_017130_1, VkglTestCase_017130_2);

#define VkglTestCase_017131_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017131_2 "lue.get_uniform.basic.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017131, VkglTestCase_017131_1, VkglTestCase_017131_2);

#define VkglTestCase_017132_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017132_2 "ue.get_uniform.basic.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017132, VkglTestCase_017132_1, VkglTestCase_017132_2);

#define VkglTestCase_017133_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017133_2 "alue.get_uniform.basic.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017133, VkglTestCase_017133_1, VkglTestCase_017133_2);

#define VkglTestCase_017134_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017134_2 "alue.get_uniform.basic.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017134, VkglTestCase_017134_1, VkglTestCase_017134_2);

#define VkglTestCase_017135_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017135_2 "lue.get_uniform.basic.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017135, VkglTestCase_017135_1, VkglTestCase_017135_2);

#define VkglTestCase_017136_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017136_2 "value.get_uniform.basic.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017136, VkglTestCase_017136_1, VkglTestCase_017136_2);

#define VkglTestCase_017137_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017137_2 "alue.get_uniform.basic.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017137, VkglTestCase_017137_1, VkglTestCase_017137_2);

#define VkglTestCase_017138_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017138_2 "lue.get_uniform.basic.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017138, VkglTestCase_017138_1, VkglTestCase_017138_2);

#define VkglTestCase_017139_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017139_2 "value.get_uniform.basic.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017139, VkglTestCase_017139_1, VkglTestCase_017139_2);

#define VkglTestCase_017140_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017140_2 "_value.get_uniform.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017140, VkglTestCase_017140_1, VkglTestCase_017140_2);

#define VkglTestCase_017141_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017141_2 "value.get_uniform.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017141, VkglTestCase_017141_1, VkglTestCase_017141_2);

#define VkglTestCase_017142_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017142_2 "y_value.get_uniform.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017142, VkglTestCase_017142_1, VkglTestCase_017142_2);

#define VkglTestCase_017143_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017143_2 "value.get_uniform.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017143, VkglTestCase_017143_1, VkglTestCase_017143_2);

#define VkglTestCase_017144_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017144_2 "alue.get_uniform.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017144, VkglTestCase_017144_1, VkglTestCase_017144_2);

#define VkglTestCase_017145_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017145_2 "_value.get_uniform.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017145, VkglTestCase_017145_1, VkglTestCase_017145_2);
