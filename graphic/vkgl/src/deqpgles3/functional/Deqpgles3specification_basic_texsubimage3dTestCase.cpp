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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026530_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026530_2 "cation.basic_texsubimage3d.rgba32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026530, VkglTestCase_026530_1, VkglTestCase_026530_2);

#define VkglTestCase_026531_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026531_2 "cation.basic_texsubimage3d.rgba32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026531, VkglTestCase_026531_1, VkglTestCase_026531_2);

#define VkglTestCase_026532_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026532_2 "cation.basic_texsubimage3d.rgba32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026532, VkglTestCase_026532_1, VkglTestCase_026532_2);

#define VkglTestCase_026533_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026533_2 "cation.basic_texsubimage3d.rgba16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026533, VkglTestCase_026533_1, VkglTestCase_026533_2);

#define VkglTestCase_026534_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026534_2 "cation.basic_texsubimage3d.rgba16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026534, VkglTestCase_026534_1, VkglTestCase_026534_2);

#define VkglTestCase_026535_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026535_2 "cation.basic_texsubimage3d.rgba16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026535, VkglTestCase_026535_1, VkglTestCase_026535_2);

#define VkglTestCase_026536_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026536_2 "ication.basic_texsubimage3d.rgba8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026536, VkglTestCase_026536_1, VkglTestCase_026536_2);

#define VkglTestCase_026537_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026537_2 "ication.basic_texsubimage3d.rgba8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026537, VkglTestCase_026537_1, VkglTestCase_026537_2);

#define VkglTestCase_026538_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026538_2 "cation.basic_texsubimage3d.rgba8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026538, VkglTestCase_026538_1, VkglTestCase_026538_2);

#define VkglTestCase_026539_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026539_2 "tion.basic_texsubimage3d.srgb8_alpha8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026539, VkglTestCase_026539_1, VkglTestCase_026539_2);

#define VkglTestCase_026540_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026540_2 "cation.basic_texsubimage3d.rgb10_a2_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026540, VkglTestCase_026540_1, VkglTestCase_026540_2);

#define VkglTestCase_026541_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026541_2 "ation.basic_texsubimage3d.rgb10_a2ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026541, VkglTestCase_026541_1, VkglTestCase_026541_2);

#define VkglTestCase_026542_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026542_2 "ication.basic_texsubimage3d.rgba4_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026542, VkglTestCase_026542_1, VkglTestCase_026542_2);

#define VkglTestCase_026543_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026543_2 "cation.basic_texsubimage3d.rgb5_a1_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026543, VkglTestCase_026543_1, VkglTestCase_026543_2);

#define VkglTestCase_026544_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026544_2 "tion.basic_texsubimage3d.rgba8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026544, VkglTestCase_026544_1, VkglTestCase_026544_2);

#define VkglTestCase_026545_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026545_2 "fication.basic_texsubimage3d.rgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026545, VkglTestCase_026545_1, VkglTestCase_026545_2);

#define VkglTestCase_026546_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026546_2 "ication.basic_texsubimage3d.rgb565_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026546, VkglTestCase_026546_1, VkglTestCase_026546_2);

#define VkglTestCase_026547_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026547_2 "ion.basic_texsubimage3d.r11f_g11f_b10f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026547, VkglTestCase_026547_1, VkglTestCase_026547_2);

#define VkglTestCase_026548_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026548_2 "ication.basic_texsubimage3d.rgb32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026548, VkglTestCase_026548_1, VkglTestCase_026548_2);

#define VkglTestCase_026549_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026549_2 "ication.basic_texsubimage3d.rgb32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026549, VkglTestCase_026549_1, VkglTestCase_026549_2);

#define VkglTestCase_026550_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026550_2 "cation.basic_texsubimage3d.rgb32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026550, VkglTestCase_026550_1, VkglTestCase_026550_2);

#define VkglTestCase_026551_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026551_2 "ication.basic_texsubimage3d.rgb16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026551, VkglTestCase_026551_1, VkglTestCase_026551_2);

#define VkglTestCase_026552_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026552_2 "ication.basic_texsubimage3d.rgb16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026552, VkglTestCase_026552_1, VkglTestCase_026552_2);

#define VkglTestCase_026553_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026553_2 "cation.basic_texsubimage3d.rgb16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026553, VkglTestCase_026553_1, VkglTestCase_026553_2);

#define VkglTestCase_026554_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026554_2 "ation.basic_texsubimage3d.rgb8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026554, VkglTestCase_026554_1, VkglTestCase_026554_2);

#define VkglTestCase_026555_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026555_2 "ication.basic_texsubimage3d.rgb8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026555, VkglTestCase_026555_1, VkglTestCase_026555_2);

#define VkglTestCase_026556_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026556_2 "ication.basic_texsubimage3d.rgb8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026556, VkglTestCase_026556_1, VkglTestCase_026556_2);

#define VkglTestCase_026557_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026557_2 "ication.basic_texsubimage3d.srgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026557, VkglTestCase_026557_1, VkglTestCase_026557_2);

#define VkglTestCase_026558_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026558_2 "cation.basic_texsubimage3d.rgb9_e5_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026558, VkglTestCase_026558_1, VkglTestCase_026558_2);

#define VkglTestCase_026559_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026559_2 "ication.basic_texsubimage3d.rg32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026559, VkglTestCase_026559_1, VkglTestCase_026559_2);

#define VkglTestCase_026560_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026560_2 "ication.basic_texsubimage3d.rg32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026560, VkglTestCase_026560_1, VkglTestCase_026560_2);

#define VkglTestCase_026561_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026561_2 "ication.basic_texsubimage3d.rg32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026561, VkglTestCase_026561_1, VkglTestCase_026561_2);

#define VkglTestCase_026562_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026562_2 "ication.basic_texsubimage3d.rg16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026562, VkglTestCase_026562_1, VkglTestCase_026562_2);

#define VkglTestCase_026563_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026563_2 "ication.basic_texsubimage3d.rg16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026563, VkglTestCase_026563_1, VkglTestCase_026563_2);

#define VkglTestCase_026564_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026564_2 "ication.basic_texsubimage3d.rg16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026564, VkglTestCase_026564_1, VkglTestCase_026564_2);

#define VkglTestCase_026565_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026565_2 "fication.basic_texsubimage3d.rg8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026565, VkglTestCase_026565_1, VkglTestCase_026565_2);

#define VkglTestCase_026566_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026566_2 "fication.basic_texsubimage3d.rg8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026566, VkglTestCase_026566_1, VkglTestCase_026566_2);

#define VkglTestCase_026567_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026567_2 "ication.basic_texsubimage3d.rg8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026567, VkglTestCase_026567_1, VkglTestCase_026567_2);

#define VkglTestCase_026568_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026568_2 "ation.basic_texsubimage3d.rg8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026568, VkglTestCase_026568_1, VkglTestCase_026568_2);

#define VkglTestCase_026569_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026569_2 "fication.basic_texsubimage3d.r32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026569, VkglTestCase_026569_1, VkglTestCase_026569_2);

#define VkglTestCase_026570_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026570_2 "fication.basic_texsubimage3d.r32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026570, VkglTestCase_026570_1, VkglTestCase_026570_2);

#define VkglTestCase_026571_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026571_2 "ication.basic_texsubimage3d.r32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026571, VkglTestCase_026571_1, VkglTestCase_026571_2);

#define VkglTestCase_026572_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026572_2 "fication.basic_texsubimage3d.r16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026572, VkglTestCase_026572_1, VkglTestCase_026572_2);

#define VkglTestCase_026573_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026573_2 "fication.basic_texsubimage3d.r16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026573, VkglTestCase_026573_1, VkglTestCase_026573_2);

#define VkglTestCase_026574_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026574_2 "ication.basic_texsubimage3d.r16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026574, VkglTestCase_026574_1, VkglTestCase_026574_2);

#define VkglTestCase_026575_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026575_2 "ification.basic_texsubimage3d.r8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026575, VkglTestCase_026575_1, VkglTestCase_026575_2);

#define VkglTestCase_026576_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026576_2 "fication.basic_texsubimage3d.r8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026576, VkglTestCase_026576_1, VkglTestCase_026576_2);

#define VkglTestCase_026577_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026577_2 "fication.basic_texsubimage3d.r8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026577, VkglTestCase_026577_1, VkglTestCase_026577_2);

#define VkglTestCase_026578_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026578_2 "cation.basic_texsubimage3d.r8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026578, VkglTestCase_026578_1, VkglTestCase_026578_2);
