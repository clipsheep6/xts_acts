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

#define VkglTestCase_012507_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012507_2 "rmat.sized.cube_array.rgba32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012507, VkglTestCase_012507_1, VkglTestCase_012507_2);

#define VkglTestCase_012508_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012508_2 "rmat.sized.cube_array.rgba32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012508, VkglTestCase_012508_1, VkglTestCase_012508_2);

#define VkglTestCase_012509_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012509_2 "rmat.sized.cube_array.rgba32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012509, VkglTestCase_012509_1, VkglTestCase_012509_2);

#define VkglTestCase_012510_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012510_2 "rmat.sized.cube_array.rgba32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012510, VkglTestCase_012510_1, VkglTestCase_012510_2);

#define VkglTestCase_012511_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012511_2 "rmat.sized.cube_array.rgba32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012511, VkglTestCase_012511_1, VkglTestCase_012511_2);

#define VkglTestCase_012512_1 "dEQP-GLES31.functional.texture.for"
#define VkglTestCase_012512_2 "mat.sized.cube_array.rgba32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012512, VkglTestCase_012512_1, VkglTestCase_012512_2);

#define VkglTestCase_012513_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012513_2 "rmat.sized.cube_array.rgba16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012513, VkglTestCase_012513_1, VkglTestCase_012513_2);

#define VkglTestCase_012514_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012514_2 "rmat.sized.cube_array.rgba16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012514, VkglTestCase_012514_1, VkglTestCase_012514_2);

#define VkglTestCase_012515_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012515_2 "rmat.sized.cube_array.rgba16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012515, VkglTestCase_012515_1, VkglTestCase_012515_2);

#define VkglTestCase_012516_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012516_2 "rmat.sized.cube_array.rgba16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012516, VkglTestCase_012516_1, VkglTestCase_012516_2);

#define VkglTestCase_012517_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012517_2 "rmat.sized.cube_array.rgba16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012517, VkglTestCase_012517_1, VkglTestCase_012517_2);

#define VkglTestCase_012518_1 "dEQP-GLES31.functional.texture.for"
#define VkglTestCase_012518_2 "mat.sized.cube_array.rgba16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012518, VkglTestCase_012518_1, VkglTestCase_012518_2);

#define VkglTestCase_012519_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012519_2 "ormat.sized.cube_array.rgba8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012519, VkglTestCase_012519_1, VkglTestCase_012519_2);

#define VkglTestCase_012520_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012520_2 "ormat.sized.cube_array.rgba8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012520, VkglTestCase_012520_1, VkglTestCase_012520_2);

#define VkglTestCase_012521_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012521_2 "ormat.sized.cube_array.rgba8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012521, VkglTestCase_012521_1, VkglTestCase_012521_2);

#define VkglTestCase_012522_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012522_2 "rmat.sized.cube_array.rgba8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012522, VkglTestCase_012522_1, VkglTestCase_012522_2);

#define VkglTestCase_012523_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012523_2 "rmat.sized.cube_array.rgba8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012523, VkglTestCase_012523_1, VkglTestCase_012523_2);

#define VkglTestCase_012524_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012524_2 "rmat.sized.cube_array.rgba8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012524, VkglTestCase_012524_1, VkglTestCase_012524_2);

#define VkglTestCase_012525_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012525_2 "rmat.sized.cube_array.srgb_r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012525, VkglTestCase_012525_1, VkglTestCase_012525_2);

#define VkglTestCase_012526_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012526_2 "rmat.sized.cube_array.srgb_r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012526, VkglTestCase_012526_1, VkglTestCase_012526_2);

#define VkglTestCase_012527_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012527_2 "rmat.sized.cube_array.srgb_rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012527, VkglTestCase_012527_1, VkglTestCase_012527_2);

#define VkglTestCase_012528_1 "dEQP-GLES31.functional.texture.for"
#define VkglTestCase_012528_2 "mat.sized.cube_array.srgb_rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012528, VkglTestCase_012528_1, VkglTestCase_012528_2);

#define VkglTestCase_012529_1 "dEQP-GLES31.functional.texture.form"
#define VkglTestCase_012529_2 "at.sized.cube_array.srgb8_alpha8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012529, VkglTestCase_012529_1, VkglTestCase_012529_2);

#define VkglTestCase_012530_1 "dEQP-GLES31.functional.texture.forma"
#define VkglTestCase_012530_2 "t.sized.cube_array.srgb8_alpha8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012530, VkglTestCase_012530_1, VkglTestCase_012530_2);

#define VkglTestCase_012531_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012531_2 "rmat.sized.cube_array.rgb10_a2_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012531, VkglTestCase_012531_1, VkglTestCase_012531_2);

#define VkglTestCase_012532_1 "dEQP-GLES31.functional.texture.for"
#define VkglTestCase_012532_2 "mat.sized.cube_array.rgb10_a2_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012532, VkglTestCase_012532_1, VkglTestCase_012532_2);

#define VkglTestCase_012533_1 "dEQP-GLES31.functional.texture.for"
#define VkglTestCase_012533_2 "mat.sized.cube_array.rgb10_a2ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012533, VkglTestCase_012533_1, VkglTestCase_012533_2);

#define VkglTestCase_012534_1 "dEQP-GLES31.functional.texture.form"
#define VkglTestCase_012534_2 "at.sized.cube_array.rgb10_a2ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012534, VkglTestCase_012534_1, VkglTestCase_012534_2);

#define VkglTestCase_012535_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012535_2 "ormat.sized.cube_array.rgba4_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012535, VkglTestCase_012535_1, VkglTestCase_012535_2);

#define VkglTestCase_012536_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012536_2 "ormat.sized.cube_array.rgba4_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012536, VkglTestCase_012536_1, VkglTestCase_012536_2);

#define VkglTestCase_012537_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012537_2 "rmat.sized.cube_array.rgb5_a1_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012537, VkglTestCase_012537_1, VkglTestCase_012537_2);

#define VkglTestCase_012538_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012538_2 "rmat.sized.cube_array.rgb5_a1_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012538, VkglTestCase_012538_1, VkglTestCase_012538_2);

#define VkglTestCase_012539_1 "dEQP-GLES31.functional.texture.form"
#define VkglTestCase_012539_2 "at.sized.cube_array.rgba8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012539, VkglTestCase_012539_1, VkglTestCase_012539_2);

#define VkglTestCase_012540_1 "dEQP-GLES31.functional.texture.form"
#define VkglTestCase_012540_2 "at.sized.cube_array.rgba8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012540, VkglTestCase_012540_1, VkglTestCase_012540_2);

#define VkglTestCase_012541_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012541_2 "format.sized.cube_array.rgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012541, VkglTestCase_012541_1, VkglTestCase_012541_2);

#define VkglTestCase_012542_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012542_2 "ormat.sized.cube_array.rgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012542, VkglTestCase_012542_1, VkglTestCase_012542_2);

#define VkglTestCase_012543_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012543_2 "ormat.sized.cube_array.rgb565_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012543, VkglTestCase_012543_1, VkglTestCase_012543_2);

#define VkglTestCase_012544_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012544_2 "rmat.sized.cube_array.rgb565_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012544, VkglTestCase_012544_1, VkglTestCase_012544_2);

#define VkglTestCase_012545_1 "dEQP-GLES31.functional.texture.forma"
#define VkglTestCase_012545_2 "t.sized.cube_array.r11f_g11f_b10f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012545, VkglTestCase_012545_1, VkglTestCase_012545_2);

#define VkglTestCase_012546_1 "dEQP-GLES31.functional.texture.format"
#define VkglTestCase_012546_2 ".sized.cube_array.r11f_g11f_b10f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012546, VkglTestCase_012546_1, VkglTestCase_012546_2);

#define VkglTestCase_012547_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012547_2 "ormat.sized.cube_array.rgb32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012547, VkglTestCase_012547_1, VkglTestCase_012547_2);

#define VkglTestCase_012548_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012548_2 "rmat.sized.cube_array.rgb32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012548, VkglTestCase_012548_1, VkglTestCase_012548_2);

#define VkglTestCase_012549_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012549_2 "ormat.sized.cube_array.rgb32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012549, VkglTestCase_012549_1, VkglTestCase_012549_2);

#define VkglTestCase_012550_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012550_2 "rmat.sized.cube_array.rgb32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012550, VkglTestCase_012550_1, VkglTestCase_012550_2);

#define VkglTestCase_012551_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012551_2 "rmat.sized.cube_array.rgb32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012551, VkglTestCase_012551_1, VkglTestCase_012551_2);

#define VkglTestCase_012552_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012552_2 "rmat.sized.cube_array.rgb32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012552, VkglTestCase_012552_1, VkglTestCase_012552_2);

#define VkglTestCase_012553_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012553_2 "ormat.sized.cube_array.rgb16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012553, VkglTestCase_012553_1, VkglTestCase_012553_2);

#define VkglTestCase_012554_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012554_2 "rmat.sized.cube_array.rgb16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012554, VkglTestCase_012554_1, VkglTestCase_012554_2);

#define VkglTestCase_012555_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012555_2 "ormat.sized.cube_array.rgb16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012555, VkglTestCase_012555_1, VkglTestCase_012555_2);

#define VkglTestCase_012556_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012556_2 "rmat.sized.cube_array.rgb16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012556, VkglTestCase_012556_1, VkglTestCase_012556_2);

#define VkglTestCase_012557_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012557_2 "rmat.sized.cube_array.rgb16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012557, VkglTestCase_012557_1, VkglTestCase_012557_2);

#define VkglTestCase_012558_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012558_2 "rmat.sized.cube_array.rgb16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012558, VkglTestCase_012558_1, VkglTestCase_012558_2);

#define VkglTestCase_012559_1 "dEQP-GLES31.functional.texture.for"
#define VkglTestCase_012559_2 "mat.sized.cube_array.rgb8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012559, VkglTestCase_012559_1, VkglTestCase_012559_2);

#define VkglTestCase_012560_1 "dEQP-GLES31.functional.texture.form"
#define VkglTestCase_012560_2 "at.sized.cube_array.rgb8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012560, VkglTestCase_012560_1, VkglTestCase_012560_2);

#define VkglTestCase_012561_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012561_2 "ormat.sized.cube_array.rgb8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012561, VkglTestCase_012561_1, VkglTestCase_012561_2);

#define VkglTestCase_012562_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012562_2 "ormat.sized.cube_array.rgb8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012562, VkglTestCase_012562_1, VkglTestCase_012562_2);

#define VkglTestCase_012563_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012563_2 "ormat.sized.cube_array.rgb8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012563, VkglTestCase_012563_1, VkglTestCase_012563_2);

#define VkglTestCase_012564_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012564_2 "rmat.sized.cube_array.rgb8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012564, VkglTestCase_012564_1, VkglTestCase_012564_2);

#define VkglTestCase_012565_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012565_2 "ormat.sized.cube_array.srgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012565, VkglTestCase_012565_1, VkglTestCase_012565_2);

#define VkglTestCase_012566_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012566_2 "ormat.sized.cube_array.srgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012566, VkglTestCase_012566_1, VkglTestCase_012566_2);

#define VkglTestCase_012567_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012567_2 "rmat.sized.cube_array.rgb9_e5_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012567, VkglTestCase_012567_1, VkglTestCase_012567_2);

#define VkglTestCase_012568_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012568_2 "rmat.sized.cube_array.rgb9_e5_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012568, VkglTestCase_012568_1, VkglTestCase_012568_2);

#define VkglTestCase_012569_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012569_2 "ormat.sized.cube_array.rg32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012569, VkglTestCase_012569_1, VkglTestCase_012569_2);

#define VkglTestCase_012570_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012570_2 "ormat.sized.cube_array.rg32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012570, VkglTestCase_012570_1, VkglTestCase_012570_2);

#define VkglTestCase_012571_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012571_2 "ormat.sized.cube_array.rg32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012571, VkglTestCase_012571_1, VkglTestCase_012571_2);

#define VkglTestCase_012572_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012572_2 "ormat.sized.cube_array.rg32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012572, VkglTestCase_012572_1, VkglTestCase_012572_2);

#define VkglTestCase_012573_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012573_2 "ormat.sized.cube_array.rg32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012573, VkglTestCase_012573_1, VkglTestCase_012573_2);

#define VkglTestCase_012574_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012574_2 "rmat.sized.cube_array.rg32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012574, VkglTestCase_012574_1, VkglTestCase_012574_2);

#define VkglTestCase_012575_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012575_2 "ormat.sized.cube_array.rg16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012575, VkglTestCase_012575_1, VkglTestCase_012575_2);

#define VkglTestCase_012576_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012576_2 "ormat.sized.cube_array.rg16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012576, VkglTestCase_012576_1, VkglTestCase_012576_2);

#define VkglTestCase_012577_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012577_2 "ormat.sized.cube_array.rg16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012577, VkglTestCase_012577_1, VkglTestCase_012577_2);

#define VkglTestCase_012578_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012578_2 "ormat.sized.cube_array.rg16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012578, VkglTestCase_012578_1, VkglTestCase_012578_2);

#define VkglTestCase_012579_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012579_2 "ormat.sized.cube_array.rg16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012579, VkglTestCase_012579_1, VkglTestCase_012579_2);

#define VkglTestCase_012580_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012580_2 "rmat.sized.cube_array.rg16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012580, VkglTestCase_012580_1, VkglTestCase_012580_2);

#define VkglTestCase_012581_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012581_2 "format.sized.cube_array.rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012581, VkglTestCase_012581_1, VkglTestCase_012581_2);

#define VkglTestCase_012582_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012582_2 "format.sized.cube_array.rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012582, VkglTestCase_012582_1, VkglTestCase_012582_2);

#define VkglTestCase_012583_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012583_2 "format.sized.cube_array.rg8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012583, VkglTestCase_012583_1, VkglTestCase_012583_2);

#define VkglTestCase_012584_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012584_2 "ormat.sized.cube_array.rg8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012584, VkglTestCase_012584_1, VkglTestCase_012584_2);

#define VkglTestCase_012585_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012585_2 "ormat.sized.cube_array.rg8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012585, VkglTestCase_012585_1, VkglTestCase_012585_2);

#define VkglTestCase_012586_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012586_2 "ormat.sized.cube_array.rg8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012586, VkglTestCase_012586_1, VkglTestCase_012586_2);

#define VkglTestCase_012587_1 "dEQP-GLES31.functional.texture.for"
#define VkglTestCase_012587_2 "mat.sized.cube_array.rg8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012587, VkglTestCase_012587_1, VkglTestCase_012587_2);

#define VkglTestCase_012588_1 "dEQP-GLES31.functional.texture.for"
#define VkglTestCase_012588_2 "mat.sized.cube_array.rg8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012588, VkglTestCase_012588_1, VkglTestCase_012588_2);

#define VkglTestCase_012589_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012589_2 "format.sized.cube_array.r32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012589, VkglTestCase_012589_1, VkglTestCase_012589_2);

#define VkglTestCase_012590_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012590_2 "ormat.sized.cube_array.r32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012590, VkglTestCase_012590_1, VkglTestCase_012590_2);

#define VkglTestCase_012591_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012591_2 "format.sized.cube_array.r32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012591, VkglTestCase_012591_1, VkglTestCase_012591_2);

#define VkglTestCase_012592_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012592_2 "ormat.sized.cube_array.r32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012592, VkglTestCase_012592_1, VkglTestCase_012592_2);

#define VkglTestCase_012593_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012593_2 "ormat.sized.cube_array.r32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012593, VkglTestCase_012593_1, VkglTestCase_012593_2);

#define VkglTestCase_012594_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012594_2 "ormat.sized.cube_array.r32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012594, VkglTestCase_012594_1, VkglTestCase_012594_2);

#define VkglTestCase_012595_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012595_2 "format.sized.cube_array.r16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012595, VkglTestCase_012595_1, VkglTestCase_012595_2);

#define VkglTestCase_012596_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012596_2 "ormat.sized.cube_array.r16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012596, VkglTestCase_012596_1, VkglTestCase_012596_2);

#define VkglTestCase_012597_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012597_2 "format.sized.cube_array.r16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012597, VkglTestCase_012597_1, VkglTestCase_012597_2);

#define VkglTestCase_012598_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012598_2 "ormat.sized.cube_array.r16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012598, VkglTestCase_012598_1, VkglTestCase_012598_2);

#define VkglTestCase_012599_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012599_2 "ormat.sized.cube_array.r16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012599, VkglTestCase_012599_1, VkglTestCase_012599_2);

#define VkglTestCase_012600_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012600_2 "ormat.sized.cube_array.r16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012600, VkglTestCase_012600_1, VkglTestCase_012600_2);

#define VkglTestCase_012601_1 "dEQP-GLES31.functional.texture"
#define VkglTestCase_012601_2 ".format.sized.cube_array.r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012601, VkglTestCase_012601_1, VkglTestCase_012601_2);

#define VkglTestCase_012602_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012602_2 "format.sized.cube_array.r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012602, VkglTestCase_012602_1, VkglTestCase_012602_2);

#define VkglTestCase_012603_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012603_2 "format.sized.cube_array.r8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012603, VkglTestCase_012603_1, VkglTestCase_012603_2);

#define VkglTestCase_012604_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012604_2 "format.sized.cube_array.r8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012604, VkglTestCase_012604_1, VkglTestCase_012604_2);

#define VkglTestCase_012605_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_012605_2 "format.sized.cube_array.r8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012605, VkglTestCase_012605_1, VkglTestCase_012605_2);

#define VkglTestCase_012606_1 "dEQP-GLES31.functional.texture.f"
#define VkglTestCase_012606_2 "ormat.sized.cube_array.r8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012606, VkglTestCase_012606_1, VkglTestCase_012606_2);

#define VkglTestCase_012607_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012607_2 "rmat.sized.cube_array.r8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012607, VkglTestCase_012607_1, VkglTestCase_012607_2);

#define VkglTestCase_012608_1 "dEQP-GLES31.functional.texture.for"
#define VkglTestCase_012608_2 "mat.sized.cube_array.r8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012608, VkglTestCase_012608_1, VkglTestCase_012608_2);

#define VkglTestCase_012609_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012609_2 "sized.cube_array.depth_component32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012609, VkglTestCase_012609_1, VkglTestCase_012609_2);

#define VkglTestCase_012610_1 "dEQP-GLES31.functional.texture.format.s"
#define VkglTestCase_012610_2 "ized.cube_array.depth_component32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012610, VkglTestCase_012610_1, VkglTestCase_012610_2);

#define VkglTestCase_012611_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012611_2 "sized.cube_array.depth_component24_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012611, VkglTestCase_012611_1, VkglTestCase_012611_2);

#define VkglTestCase_012612_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012612_2 "sized.cube_array.depth_component24_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012612, VkglTestCase_012612_1, VkglTestCase_012612_2);

#define VkglTestCase_012613_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012613_2 "sized.cube_array.depth_component16_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012613, VkglTestCase_012613_1, VkglTestCase_012613_2);

#define VkglTestCase_012614_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012614_2 "sized.cube_array.depth_component16_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012614, VkglTestCase_012614_1, VkglTestCase_012614_2);

#define VkglTestCase_012615_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012615_2 "sized.cube_array.depth32f_stencil8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012615, VkglTestCase_012615_1, VkglTestCase_012615_2);

#define VkglTestCase_012616_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012616_2 "sized.cube_array.depth32f_stencil8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012616, VkglTestCase_012616_1, VkglTestCase_012616_2);

#define VkglTestCase_012617_1 "dEQP-GLES31.functional.texture.format"
#define VkglTestCase_012617_2 ".sized.cube_array.depth24_stencil8_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012617, VkglTestCase_012617_1, VkglTestCase_012617_2);

#define VkglTestCase_012618_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012618_2 "sized.cube_array.depth24_stencil8_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012618, VkglTestCase_012618_1, VkglTestCase_012618_2);
