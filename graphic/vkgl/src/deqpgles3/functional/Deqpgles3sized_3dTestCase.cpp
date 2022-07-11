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
#include "../ActsDeqpgles30023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022223_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022223_2 "e.format.sized.3d.rgba32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022223, VkglTestCase_022223_1, VkglTestCase_022223_2);

#define VkglTestCase_022224_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022224_2 ".format.sized.3d.rgba32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022224, VkglTestCase_022224_1, VkglTestCase_022224_2);

#define VkglTestCase_022225_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022225_2 "e.format.sized.3d.rgba32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022225, VkglTestCase_022225_1, VkglTestCase_022225_2);

#define VkglTestCase_022226_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022226_2 ".format.sized.3d.rgba32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022226, VkglTestCase_022226_1, VkglTestCase_022226_2);

#define VkglTestCase_022227_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022227_2 ".format.sized.3d.rgba32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022227, VkglTestCase_022227_1, VkglTestCase_022227_2);

#define VkglTestCase_022228_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022228_2 ".format.sized.3d.rgba32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022228, VkglTestCase_022228_1, VkglTestCase_022228_2);

#define VkglTestCase_022229_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022229_2 "e.format.sized.3d.rgba16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022229, VkglTestCase_022229_1, VkglTestCase_022229_2);

#define VkglTestCase_022230_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022230_2 ".format.sized.3d.rgba16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022230, VkglTestCase_022230_1, VkglTestCase_022230_2);

#define VkglTestCase_022231_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022231_2 "e.format.sized.3d.rgba16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022231, VkglTestCase_022231_1, VkglTestCase_022231_2);

#define VkglTestCase_022232_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022232_2 ".format.sized.3d.rgba16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022232, VkglTestCase_022232_1, VkglTestCase_022232_2);

#define VkglTestCase_022233_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022233_2 ".format.sized.3d.rgba16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022233, VkglTestCase_022233_1, VkglTestCase_022233_2);

#define VkglTestCase_022234_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022234_2 ".format.sized.3d.rgba16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022234, VkglTestCase_022234_1, VkglTestCase_022234_2);

#define VkglTestCase_022235_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022235_2 "re.format.sized.3d.rgba8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022235, VkglTestCase_022235_1, VkglTestCase_022235_2);

#define VkglTestCase_022236_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022236_2 "e.format.sized.3d.rgba8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022236, VkglTestCase_022236_1, VkglTestCase_022236_2);

#define VkglTestCase_022237_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022237_2 "e.format.sized.3d.rgba8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022237, VkglTestCase_022237_1, VkglTestCase_022237_2);

#define VkglTestCase_022238_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022238_2 "e.format.sized.3d.rgba8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022238, VkglTestCase_022238_1, VkglTestCase_022238_2);

#define VkglTestCase_022239_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022239_2 "e.format.sized.3d.rgba8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022239, VkglTestCase_022239_1, VkglTestCase_022239_2);

#define VkglTestCase_022240_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022240_2 ".format.sized.3d.rgba8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022240, VkglTestCase_022240_1, VkglTestCase_022240_2);

#define VkglTestCase_022241_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022241_2 "ormat.sized.3d.srgb8_alpha8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022241, VkglTestCase_022241_1, VkglTestCase_022241_2);

#define VkglTestCase_022242_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022242_2 "ormat.sized.3d.srgb8_alpha8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022242, VkglTestCase_022242_1, VkglTestCase_022242_2);

#define VkglTestCase_022243_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022243_2 "e.format.sized.3d.srgb_r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022243, VkglTestCase_022243_1, VkglTestCase_022243_2);

#define VkglTestCase_022244_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022244_2 ".format.sized.3d.srgb_r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022244, VkglTestCase_022244_1, VkglTestCase_022244_2);

#define VkglTestCase_022245_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022245_2 ".format.sized.3d.srgb_rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022245, VkglTestCase_022245_1, VkglTestCase_022245_2);

#define VkglTestCase_022246_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022246_2 ".format.sized.3d.srgb_rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022246, VkglTestCase_022246_1, VkglTestCase_022246_2);

#define VkglTestCase_022247_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022247_2 ".format.sized.3d.rgb10_a2_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022247, VkglTestCase_022247_1, VkglTestCase_022247_2);

#define VkglTestCase_022248_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022248_2 ".format.sized.3d.rgb10_a2_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022248, VkglTestCase_022248_1, VkglTestCase_022248_2);

#define VkglTestCase_022249_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022249_2 "format.sized.3d.rgb10_a2ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022249, VkglTestCase_022249_1, VkglTestCase_022249_2);

#define VkglTestCase_022250_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022250_2 "format.sized.3d.rgb10_a2ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022250, VkglTestCase_022250_1, VkglTestCase_022250_2);

#define VkglTestCase_022251_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022251_2 "re.format.sized.3d.rgba4_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022251, VkglTestCase_022251_1, VkglTestCase_022251_2);

#define VkglTestCase_022252_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022252_2 "e.format.sized.3d.rgba4_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022252, VkglTestCase_022252_1, VkglTestCase_022252_2);

#define VkglTestCase_022253_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022253_2 "e.format.sized.3d.rgb5_a1_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022253, VkglTestCase_022253_1, VkglTestCase_022253_2);

#define VkglTestCase_022254_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022254_2 ".format.sized.3d.rgb5_a1_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022254, VkglTestCase_022254_1, VkglTestCase_022254_2);

#define VkglTestCase_022255_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022255_2 "format.sized.3d.rgba8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022255, VkglTestCase_022255_1, VkglTestCase_022255_2);

#define VkglTestCase_022256_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022256_2 "ormat.sized.3d.rgba8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022256, VkglTestCase_022256_1, VkglTestCase_022256_2);

#define VkglTestCase_022257_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022257_2 "re.format.sized.3d.rgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022257, VkglTestCase_022257_1, VkglTestCase_022257_2);

#define VkglTestCase_022258_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022258_2 "re.format.sized.3d.rgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022258, VkglTestCase_022258_1, VkglTestCase_022258_2);

#define VkglTestCase_022259_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022259_2 "e.format.sized.3d.rgb565_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022259, VkglTestCase_022259_1, VkglTestCase_022259_2);

#define VkglTestCase_022260_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022260_2 "e.format.sized.3d.rgb565_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022260, VkglTestCase_022260_1, VkglTestCase_022260_2);

#define VkglTestCase_022261_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022261_2 "rmat.sized.3d.r11f_g11f_b10f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022261, VkglTestCase_022261_1, VkglTestCase_022261_2);

#define VkglTestCase_022262_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022262_2 "rmat.sized.3d.r11f_g11f_b10f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022262, VkglTestCase_022262_1, VkglTestCase_022262_2);

#define VkglTestCase_022263_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022263_2 "e.format.sized.3d.rgb32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022263, VkglTestCase_022263_1, VkglTestCase_022263_2);

#define VkglTestCase_022264_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022264_2 "e.format.sized.3d.rgb32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022264, VkglTestCase_022264_1, VkglTestCase_022264_2);

#define VkglTestCase_022265_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022265_2 "e.format.sized.3d.rgb32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022265, VkglTestCase_022265_1, VkglTestCase_022265_2);

#define VkglTestCase_022266_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022266_2 "e.format.sized.3d.rgb32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022266, VkglTestCase_022266_1, VkglTestCase_022266_2);

#define VkglTestCase_022267_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022267_2 "e.format.sized.3d.rgb32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022267, VkglTestCase_022267_1, VkglTestCase_022267_2);

#define VkglTestCase_022268_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022268_2 ".format.sized.3d.rgb32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022268, VkglTestCase_022268_1, VkglTestCase_022268_2);

#define VkglTestCase_022269_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022269_2 "e.format.sized.3d.rgb16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022269, VkglTestCase_022269_1, VkglTestCase_022269_2);

#define VkglTestCase_022270_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022270_2 "e.format.sized.3d.rgb16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022270, VkglTestCase_022270_1, VkglTestCase_022270_2);

#define VkglTestCase_022271_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022271_2 "e.format.sized.3d.rgb16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022271, VkglTestCase_022271_1, VkglTestCase_022271_2);

#define VkglTestCase_022272_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022272_2 "e.format.sized.3d.rgb16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022272, VkglTestCase_022272_1, VkglTestCase_022272_2);

#define VkglTestCase_022273_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022273_2 "e.format.sized.3d.rgb16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022273, VkglTestCase_022273_1, VkglTestCase_022273_2);

#define VkglTestCase_022274_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022274_2 ".format.sized.3d.rgb16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022274, VkglTestCase_022274_1, VkglTestCase_022274_2);

#define VkglTestCase_022275_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022275_2 "format.sized.3d.rgb8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022275, VkglTestCase_022275_1, VkglTestCase_022275_2);

#define VkglTestCase_022276_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022276_2 "format.sized.3d.rgb8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022276, VkglTestCase_022276_1, VkglTestCase_022276_2);

#define VkglTestCase_022277_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022277_2 "re.format.sized.3d.rgb8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022277, VkglTestCase_022277_1, VkglTestCase_022277_2);

#define VkglTestCase_022278_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022278_2 "e.format.sized.3d.rgb8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022278, VkglTestCase_022278_1, VkglTestCase_022278_2);

#define VkglTestCase_022279_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022279_2 "e.format.sized.3d.rgb8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022279, VkglTestCase_022279_1, VkglTestCase_022279_2);

#define VkglTestCase_022280_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022280_2 "e.format.sized.3d.rgb8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022280, VkglTestCase_022280_1, VkglTestCase_022280_2);

#define VkglTestCase_022281_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022281_2 "re.format.sized.3d.srgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022281, VkglTestCase_022281_1, VkglTestCase_022281_2);

#define VkglTestCase_022282_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022282_2 "e.format.sized.3d.srgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022282, VkglTestCase_022282_1, VkglTestCase_022282_2);

#define VkglTestCase_022283_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022283_2 "e.format.sized.3d.rgb9_e5_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022283, VkglTestCase_022283_1, VkglTestCase_022283_2);

#define VkglTestCase_022284_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022284_2 ".format.sized.3d.rgb9_e5_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022284, VkglTestCase_022284_1, VkglTestCase_022284_2);

#define VkglTestCase_022285_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022285_2 "re.format.sized.3d.rg32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022285, VkglTestCase_022285_1, VkglTestCase_022285_2);

#define VkglTestCase_022286_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022286_2 "e.format.sized.3d.rg32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022286, VkglTestCase_022286_1, VkglTestCase_022286_2);

#define VkglTestCase_022287_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022287_2 "re.format.sized.3d.rg32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022287, VkglTestCase_022287_1, VkglTestCase_022287_2);

#define VkglTestCase_022288_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022288_2 "e.format.sized.3d.rg32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022288, VkglTestCase_022288_1, VkglTestCase_022288_2);

#define VkglTestCase_022289_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022289_2 "e.format.sized.3d.rg32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022289, VkglTestCase_022289_1, VkglTestCase_022289_2);

#define VkglTestCase_022290_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022290_2 "e.format.sized.3d.rg32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022290, VkglTestCase_022290_1, VkglTestCase_022290_2);

#define VkglTestCase_022291_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022291_2 "re.format.sized.3d.rg16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022291, VkglTestCase_022291_1, VkglTestCase_022291_2);

#define VkglTestCase_022292_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022292_2 "e.format.sized.3d.rg16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022292, VkglTestCase_022292_1, VkglTestCase_022292_2);

#define VkglTestCase_022293_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022293_2 "re.format.sized.3d.rg16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022293, VkglTestCase_022293_1, VkglTestCase_022293_2);

#define VkglTestCase_022294_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022294_2 "e.format.sized.3d.rg16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022294, VkglTestCase_022294_1, VkglTestCase_022294_2);

#define VkglTestCase_022295_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022295_2 "e.format.sized.3d.rg16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022295, VkglTestCase_022295_1, VkglTestCase_022295_2);

#define VkglTestCase_022296_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022296_2 "e.format.sized.3d.rg16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022296, VkglTestCase_022296_1, VkglTestCase_022296_2);

#define VkglTestCase_022297_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022297_2 "ure.format.sized.3d.rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022297, VkglTestCase_022297_1, VkglTestCase_022297_2);

#define VkglTestCase_022298_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022298_2 "re.format.sized.3d.rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022298, VkglTestCase_022298_1, VkglTestCase_022298_2);

#define VkglTestCase_022299_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022299_2 "re.format.sized.3d.rg8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022299, VkglTestCase_022299_1, VkglTestCase_022299_2);

#define VkglTestCase_022300_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022300_2 "re.format.sized.3d.rg8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022300, VkglTestCase_022300_1, VkglTestCase_022300_2);

#define VkglTestCase_022301_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022301_2 "re.format.sized.3d.rg8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022301, VkglTestCase_022301_1, VkglTestCase_022301_2);

#define VkglTestCase_022302_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022302_2 "e.format.sized.3d.rg8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022302, VkglTestCase_022302_1, VkglTestCase_022302_2);

#define VkglTestCase_022303_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022303_2 ".format.sized.3d.rg8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022303, VkglTestCase_022303_1, VkglTestCase_022303_2);

#define VkglTestCase_022304_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022304_2 "format.sized.3d.rg8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022304, VkglTestCase_022304_1, VkglTestCase_022304_2);

#define VkglTestCase_022305_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022305_2 "re.format.sized.3d.r32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022305, VkglTestCase_022305_1, VkglTestCase_022305_2);

#define VkglTestCase_022306_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022306_2 "re.format.sized.3d.r32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022306, VkglTestCase_022306_1, VkglTestCase_022306_2);

#define VkglTestCase_022307_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022307_2 "re.format.sized.3d.r32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022307, VkglTestCase_022307_1, VkglTestCase_022307_2);

#define VkglTestCase_022308_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022308_2 "re.format.sized.3d.r32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022308, VkglTestCase_022308_1, VkglTestCase_022308_2);

#define VkglTestCase_022309_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022309_2 "re.format.sized.3d.r32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022309, VkglTestCase_022309_1, VkglTestCase_022309_2);

#define VkglTestCase_022310_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022310_2 "e.format.sized.3d.r32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022310, VkglTestCase_022310_1, VkglTestCase_022310_2);

#define VkglTestCase_022311_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022311_2 "re.format.sized.3d.r16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022311, VkglTestCase_022311_1, VkglTestCase_022311_2);

#define VkglTestCase_022312_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022312_2 "re.format.sized.3d.r16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022312, VkglTestCase_022312_1, VkglTestCase_022312_2);

#define VkglTestCase_022313_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022313_2 "re.format.sized.3d.r16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022313, VkglTestCase_022313_1, VkglTestCase_022313_2);

#define VkglTestCase_022314_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022314_2 "re.format.sized.3d.r16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022314, VkglTestCase_022314_1, VkglTestCase_022314_2);

#define VkglTestCase_022315_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022315_2 "re.format.sized.3d.r16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022315, VkglTestCase_022315_1, VkglTestCase_022315_2);

#define VkglTestCase_022316_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022316_2 "e.format.sized.3d.r16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022316, VkglTestCase_022316_1, VkglTestCase_022316_2);

#define VkglTestCase_022317_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022317_2 "ure.format.sized.3d.r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022317, VkglTestCase_022317_1, VkglTestCase_022317_2);

#define VkglTestCase_022318_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022318_2 "ure.format.sized.3d.r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022318, VkglTestCase_022318_1, VkglTestCase_022318_2);

#define VkglTestCase_022319_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022319_2 "ure.format.sized.3d.r8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022319, VkglTestCase_022319_1, VkglTestCase_022319_2);

#define VkglTestCase_022320_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022320_2 "re.format.sized.3d.r8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022320, VkglTestCase_022320_1, VkglTestCase_022320_2);

#define VkglTestCase_022321_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022321_2 "re.format.sized.3d.r8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022321, VkglTestCase_022321_1, VkglTestCase_022321_2);

#define VkglTestCase_022322_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022322_2 "re.format.sized.3d.r8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022322, VkglTestCase_022322_1, VkglTestCase_022322_2);

#define VkglTestCase_022323_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022323_2 ".format.sized.3d.r8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022323, VkglTestCase_022323_1, VkglTestCase_022323_2);

#define VkglTestCase_022324_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022324_2 ".format.sized.3d.r8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022324, VkglTestCase_022324_1, VkglTestCase_022324_2);
