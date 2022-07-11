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
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012619_1 "dEQP-GLES31.functional.te"
#define VkglTestCase_012619_2 "xture.format.buffer.r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012619, VkglTestCase_012619_1, VkglTestCase_012619_2);

#define VkglTestCase_012620_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012620_2 "ture.format.buffer.r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012620, VkglTestCase_012620_1, VkglTestCase_012620_2);

#define VkglTestCase_012621_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012621_2 "ture.format.buffer.r16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012621, VkglTestCase_012621_1, VkglTestCase_012621_2);

#define VkglTestCase_012622_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012622_2 "ure.format.buffer.r16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012622, VkglTestCase_012622_1, VkglTestCase_012622_2);

#define VkglTestCase_012623_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012623_2 "ture.format.buffer.r32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012623, VkglTestCase_012623_1, VkglTestCase_012623_2);

#define VkglTestCase_012624_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012624_2 "ure.format.buffer.r32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012624, VkglTestCase_012624_1, VkglTestCase_012624_2);

#define VkglTestCase_012625_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012625_2 "ture.format.buffer.r8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012625, VkglTestCase_012625_1, VkglTestCase_012625_2);

#define VkglTestCase_012626_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012626_2 "ture.format.buffer.r8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012626, VkglTestCase_012626_1, VkglTestCase_012626_2);

#define VkglTestCase_012627_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012627_2 "ture.format.buffer.r16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012627, VkglTestCase_012627_1, VkglTestCase_012627_2);

#define VkglTestCase_012628_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012628_2 "ure.format.buffer.r16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012628, VkglTestCase_012628_1, VkglTestCase_012628_2);

#define VkglTestCase_012629_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012629_2 "ture.format.buffer.r32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012629, VkglTestCase_012629_1, VkglTestCase_012629_2);

#define VkglTestCase_012630_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012630_2 "ure.format.buffer.r32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012630, VkglTestCase_012630_1, VkglTestCase_012630_2);

#define VkglTestCase_012631_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012631_2 "ture.format.buffer.r8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012631, VkglTestCase_012631_1, VkglTestCase_012631_2);

#define VkglTestCase_012632_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012632_2 "ure.format.buffer.r8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012632, VkglTestCase_012632_1, VkglTestCase_012632_2);

#define VkglTestCase_012633_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012633_2 "ure.format.buffer.r16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012633, VkglTestCase_012633_1, VkglTestCase_012633_2);

#define VkglTestCase_012634_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012634_2 "ure.format.buffer.r16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012634, VkglTestCase_012634_1, VkglTestCase_012634_2);

#define VkglTestCase_012635_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012635_2 "ure.format.buffer.r32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012635, VkglTestCase_012635_1, VkglTestCase_012635_2);

#define VkglTestCase_012636_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012636_2 "ure.format.buffer.r32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012636, VkglTestCase_012636_1, VkglTestCase_012636_2);

#define VkglTestCase_012637_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012637_2 "ture.format.buffer.rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012637, VkglTestCase_012637_1, VkglTestCase_012637_2);

#define VkglTestCase_012638_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012638_2 "ture.format.buffer.rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012638, VkglTestCase_012638_1, VkglTestCase_012638_2);

#define VkglTestCase_012639_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012639_2 "ure.format.buffer.rg16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012639, VkglTestCase_012639_1, VkglTestCase_012639_2);

#define VkglTestCase_012640_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012640_2 "ure.format.buffer.rg16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012640, VkglTestCase_012640_1, VkglTestCase_012640_2);

#define VkglTestCase_012641_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012641_2 "ure.format.buffer.rg32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012641, VkglTestCase_012641_1, VkglTestCase_012641_2);

#define VkglTestCase_012642_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012642_2 "ure.format.buffer.rg32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012642, VkglTestCase_012642_1, VkglTestCase_012642_2);

#define VkglTestCase_012643_1 "dEQP-GLES31.functional.tex"
#define VkglTestCase_012643_2 "ture.format.buffer.rg8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012643, VkglTestCase_012643_1, VkglTestCase_012643_2);

#define VkglTestCase_012644_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012644_2 "ure.format.buffer.rg8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012644, VkglTestCase_012644_1, VkglTestCase_012644_2);

#define VkglTestCase_012645_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012645_2 "ure.format.buffer.rg16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012645, VkglTestCase_012645_1, VkglTestCase_012645_2);

#define VkglTestCase_012646_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012646_2 "ure.format.buffer.rg16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012646, VkglTestCase_012646_1, VkglTestCase_012646_2);

#define VkglTestCase_012647_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012647_2 "ure.format.buffer.rg32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012647, VkglTestCase_012647_1, VkglTestCase_012647_2);

#define VkglTestCase_012648_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012648_2 "ure.format.buffer.rg32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012648, VkglTestCase_012648_1, VkglTestCase_012648_2);

#define VkglTestCase_012649_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012649_2 "ure.format.buffer.rg8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012649, VkglTestCase_012649_1, VkglTestCase_012649_2);

#define VkglTestCase_012650_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012650_2 "ure.format.buffer.rg8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012650, VkglTestCase_012650_1, VkglTestCase_012650_2);

#define VkglTestCase_012651_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012651_2 "ure.format.buffer.rg16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012651, VkglTestCase_012651_1, VkglTestCase_012651_2);

#define VkglTestCase_012652_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012652_2 "re.format.buffer.rg16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012652, VkglTestCase_012652_1, VkglTestCase_012652_2);

#define VkglTestCase_012653_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012653_2 "ure.format.buffer.rg32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012653, VkglTestCase_012653_1, VkglTestCase_012653_2);

#define VkglTestCase_012654_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012654_2 "re.format.buffer.rg32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012654, VkglTestCase_012654_1, VkglTestCase_012654_2);

#define VkglTestCase_012655_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012655_2 "ure.format.buffer.rgba8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012655, VkglTestCase_012655_1, VkglTestCase_012655_2);

#define VkglTestCase_012656_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012656_2 "ure.format.buffer.rgba8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012656, VkglTestCase_012656_1, VkglTestCase_012656_2);

#define VkglTestCase_012657_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012657_2 "re.format.buffer.rgba16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012657, VkglTestCase_012657_1, VkglTestCase_012657_2);

#define VkglTestCase_012658_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012658_2 "re.format.buffer.rgba16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012658, VkglTestCase_012658_1, VkglTestCase_012658_2);

#define VkglTestCase_012659_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012659_2 "re.format.buffer.rgba32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012659, VkglTestCase_012659_1, VkglTestCase_012659_2);

#define VkglTestCase_012660_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012660_2 "re.format.buffer.rgba32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012660, VkglTestCase_012660_1, VkglTestCase_012660_2);

#define VkglTestCase_012661_1 "dEQP-GLES31.functional.text"
#define VkglTestCase_012661_2 "ure.format.buffer.rgba8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012661, VkglTestCase_012661_1, VkglTestCase_012661_2);

#define VkglTestCase_012662_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012662_2 "re.format.buffer.rgba8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012662, VkglTestCase_012662_1, VkglTestCase_012662_2);

#define VkglTestCase_012663_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012663_2 "re.format.buffer.rgba16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012663, VkglTestCase_012663_1, VkglTestCase_012663_2);

#define VkglTestCase_012664_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012664_2 "re.format.buffer.rgba16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012664, VkglTestCase_012664_1, VkglTestCase_012664_2);

#define VkglTestCase_012665_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012665_2 "re.format.buffer.rgba32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012665, VkglTestCase_012665_1, VkglTestCase_012665_2);

#define VkglTestCase_012666_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012666_2 "re.format.buffer.rgba32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012666, VkglTestCase_012666_1, VkglTestCase_012666_2);

#define VkglTestCase_012667_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012667_2 "re.format.buffer.rgba8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012667, VkglTestCase_012667_1, VkglTestCase_012667_2);

#define VkglTestCase_012668_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012668_2 "re.format.buffer.rgba8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012668, VkglTestCase_012668_1, VkglTestCase_012668_2);

#define VkglTestCase_012669_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012669_2 "re.format.buffer.rgba16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012669, VkglTestCase_012669_1, VkglTestCase_012669_2);

#define VkglTestCase_012670_1 "dEQP-GLES31.functional.textur"
#define VkglTestCase_012670_2 "e.format.buffer.rgba16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012670, VkglTestCase_012670_1, VkglTestCase_012670_2);

#define VkglTestCase_012671_1 "dEQP-GLES31.functional.textu"
#define VkglTestCase_012671_2 "re.format.buffer.rgba32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012671, VkglTestCase_012671_1, VkglTestCase_012671_2);

#define VkglTestCase_012672_1 "dEQP-GLES31.functional.textur"
#define VkglTestCase_012672_2 "e.format.buffer.rgba32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012672, VkglTestCase_012672_1, VkglTestCase_012672_2);
