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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002266_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002266_2 "exture2d.rgba_unsigned_byte_rgba"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002266, VkglTestCase_002266_1, VkglTestCase_002266_2);

#define VkglTestCase_002267_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002267_2 "texture2d.rgb_unsigned_byte_rgb"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002267, VkglTestCase_002267_1, VkglTestCase_002267_2);

#define VkglTestCase_002268_1 "KHR-GLES31.core.internalformat.textu"
#define VkglTestCase_002268_2 "re2d.rgba_unsigned_short_4_4_4_4_rgba"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002268, VkglTestCase_002268_1, VkglTestCase_002268_2);

#define VkglTestCase_002269_1 "KHR-GLES31.core.internalformat.texture2d.lu"
#define VkglTestCase_002269_2 "minance_alpha_unsigned_byte_luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002269, VkglTestCase_002269_1, VkglTestCase_002269_2);

#define VkglTestCase_002270_1 "KHR-GLES31.core.internalformat.textur"
#define VkglTestCase_002270_2 "e2d.luminance_unsigned_byte_luminance"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002270, VkglTestCase_002270_1, VkglTestCase_002270_2);

#define VkglTestCase_002271_1 "KHR-GLES31.core.internalformat.te"
#define VkglTestCase_002271_2 "xture2d.alpha_unsigned_byte_alpha"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002271, VkglTestCase_002271_1, VkglTestCase_002271_2);

#define VkglTestCase_002272_1 "KHR-GLES31.core.internalformat.texture2"
#define VkglTestCase_002272_2 "d.rgba_unsigned_int_2_10_10_10_rev_rgba"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002272, VkglTestCase_002272_1, VkglTestCase_002272_2);

#define VkglTestCase_002273_1 "KHR-GLES31.core.internalformat.texture2d."
#define VkglTestCase_002273_2 "rgba_unsigned_int_2_10_10_10_rev_rgb10_a2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002273, VkglTestCase_002273_1, VkglTestCase_002273_2);

#define VkglTestCase_002274_1 "KHR-GLES31.core.internalformat.texture2d"
#define VkglTestCase_002274_2 ".rgba_unsigned_int_2_10_10_10_rev_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002274, VkglTestCase_002274_1, VkglTestCase_002274_2);

#define VkglTestCase_002275_1 "KHR-GLES31.core.internalformat.texture"
#define VkglTestCase_002275_2 "2d.rgb_unsigned_int_2_10_10_10_rev_rgb"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002275, VkglTestCase_002275_1, VkglTestCase_002275_2);

#define VkglTestCase_002276_1 "KHR-GLES31.core.internalformat.texture2d.de"
#define VkglTestCase_002276_2 "pth_component_unsigned_short_depth_component"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002276, VkglTestCase_002276_1, VkglTestCase_002276_2);

#define VkglTestCase_002277_1 "KHR-GLES31.core.internalformat.texture2d.d"
#define VkglTestCase_002277_2 "epth_component_unsigned_int_depth_component"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002277, VkglTestCase_002277_1, VkglTestCase_002277_2);

#define VkglTestCase_002278_1 "KHR-GLES31.core.internalformat.texture2d.de"
#define VkglTestCase_002278_2 "pth_stencil_unsigned_int_24_8_depth_stencil"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002278, VkglTestCase_002278_1, VkglTestCase_002278_2);

#define VkglTestCase_002279_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002279_2 "texture2d.rgb_half_float_oes_rgb"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002279, VkglTestCase_002279_1, VkglTestCase_002279_2);

#define VkglTestCase_002280_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002280_2 "exture2d.rgba_half_float_oes_rgba"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002280, VkglTestCase_002280_1, VkglTestCase_002280_2);

#define VkglTestCase_002281_1 "KHR-GLES31.core.internalformat.text"
#define VkglTestCase_002281_2 "ure2d.rgb_half_float_oes_rgb_linear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002281, VkglTestCase_002281_1, VkglTestCase_002281_2);

#define VkglTestCase_002282_1 "KHR-GLES31.core.internalformat.textu"
#define VkglTestCase_002282_2 "re2d.rgba_half_float_oes_rgba_linear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002282, VkglTestCase_002282_1, VkglTestCase_002282_2);

#define VkglTestCase_002283_1 "KHR-GLES31.core.internalform"
#define VkglTestCase_002283_2 "at.texture2d.rgb_float_rgb32f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002283, VkglTestCase_002283_1, VkglTestCase_002283_2);

#define VkglTestCase_002284_1 "KHR-GLES31.core.internalforma"
#define VkglTestCase_002284_2 "t.texture2d.rgba_float_rgba32f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002284, VkglTestCase_002284_1, VkglTestCase_002284_2);

#define VkglTestCase_002285_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002285_2 "exture2d.rgb_float_rgb32f_linear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002285, VkglTestCase_002285_1, VkglTestCase_002285_2);

#define VkglTestCase_002286_1 "KHR-GLES31.core.internalformat.te"
#define VkglTestCase_002286_2 "xture2d.rgba_float_rgba32f_linear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002286, VkglTestCase_002286_1, VkglTestCase_002286_2);

#define VkglTestCase_002287_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002287_2 "exture2d.rgba_unsigned_byte_rgba8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002287, VkglTestCase_002287_1, VkglTestCase_002287_2);

#define VkglTestCase_002288_1 "KHR-GLES31.core.internalformat.te"
#define VkglTestCase_002288_2 "xture2d.rgba_unsigned_byte_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002288, VkglTestCase_002288_1, VkglTestCase_002288_2);

#define VkglTestCase_002289_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002289_2 "exture2d.rgba_unsigned_byte_rgba4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002289, VkglTestCase_002289_1, VkglTestCase_002289_2);

#define VkglTestCase_002290_1 "KHR-GLES31.core.internalformat.textu"
#define VkglTestCase_002290_2 "re2d.rgba_unsigned_byte_srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002290, VkglTestCase_002290_1, VkglTestCase_002290_2);

#define VkglTestCase_002291_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002291_2 "texture2d.rgba_byte_rgba8_snorm"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002291, VkglTestCase_002291_1, VkglTestCase_002291_2);

#define VkglTestCase_002292_1 "KHR-GLES31.core.internalformat.textur"
#define VkglTestCase_002292_2 "e2d.rgba_unsigned_short_4_4_4_4_rgba4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002292, VkglTestCase_002292_1, VkglTestCase_002292_2);

#define VkglTestCase_002293_1 "KHR-GLES31.core.internalformat.texture"
#define VkglTestCase_002293_2 "2d.rgba_unsigned_short_5_5_5_1_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002293, VkglTestCase_002293_1, VkglTestCase_002293_2);

#define VkglTestCase_002294_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002294_2 "exture2d.rgba_half_float_rgba16f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002294, VkglTestCase_002294_1, VkglTestCase_002294_2);

#define VkglTestCase_002295_1 "KHR-GLES31.core.internalforma"
#define VkglTestCase_002295_2 "t.texture2d.rgba_float_rgba16f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002295, VkglTestCase_002295_1, VkglTestCase_002295_2);

#define VkglTestCase_002296_1 "KHR-GLES31.core.internalformat.textur"
#define VkglTestCase_002296_2 "e2d.rgba_integer_unsigned_byte_rgba8ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002296, VkglTestCase_002296_1, VkglTestCase_002296_2);

#define VkglTestCase_002297_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002297_2 "exture2d.rgba_integer_byte_rgba8i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002297, VkglTestCase_002297_1, VkglTestCase_002297_2);

#define VkglTestCase_002298_1 "KHR-GLES31.core.internalformat.texture"
#define VkglTestCase_002298_2 "2d.rgba_integer_unsigned_short_rgba16ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002298, VkglTestCase_002298_1, VkglTestCase_002298_2);

#define VkglTestCase_002299_1 "KHR-GLES31.core.internalformat.te"
#define VkglTestCase_002299_2 "xture2d.rgba_integer_short_rgba16i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002299, VkglTestCase_002299_1, VkglTestCase_002299_2);

#define VkglTestCase_002300_1 "KHR-GLES31.core.internalformat.textur"
#define VkglTestCase_002300_2 "e2d.rgba_integer_unsigned_int_rgba32ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002300, VkglTestCase_002300_1, VkglTestCase_002300_2);

#define VkglTestCase_002301_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002301_2 "exture2d.rgba_integer_int_rgba32i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002301, VkglTestCase_002301_1, VkglTestCase_002301_2);

#define VkglTestCase_002302_1 "KHR-GLES31.core.internalformat.texture2d.rgba_"
#define VkglTestCase_002302_2 "integer_unsigned_int_2_10_10_10_rev_rgb10_a2ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002302, VkglTestCase_002302_1, VkglTestCase_002302_2);

#define VkglTestCase_002303_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002303_2 "texture2d.rgb_unsigned_byte_rgb8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002303, VkglTestCase_002303_1, VkglTestCase_002303_2);

#define VkglTestCase_002304_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002304_2 "exture2d.rgb_unsigned_byte_rgb565"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002304, VkglTestCase_002304_1, VkglTestCase_002304_2);

#define VkglTestCase_002305_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002305_2 "exture2d.rgb_unsigned_byte_srgb8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002305, VkglTestCase_002305_1, VkglTestCase_002305_2);

#define VkglTestCase_002306_1 "KHR-GLES31.core.internalformat.textu"
#define VkglTestCase_002306_2 "re2d.rgb_unsigned_short_5_6_5_rgb565"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002306, VkglTestCase_002306_1, VkglTestCase_002306_2);

#define VkglTestCase_002307_1 "KHR-GLES31.core.internalformat.texture2d.rgb"
#define VkglTestCase_002307_2 "_unsigned_int_10f_11f_11f_rev_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002307, VkglTestCase_002307_1, VkglTestCase_002307_2);

#define VkglTestCase_002308_1 "KHR-GLES31.core.internalformat.texture"
#define VkglTestCase_002308_2 "2d.rgb_unsigned_int_5_9_9_9_rev_rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002308, VkglTestCase_002308_1, VkglTestCase_002308_2);

#define VkglTestCase_002309_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002309_2 "texture2d.rgb_half_float_rgb16f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002309, VkglTestCase_002309_1, VkglTestCase_002309_2);

#define VkglTestCase_002310_1 "KHR-GLES31.core.internalformat.text"
#define VkglTestCase_002310_2 "ure2d.rgb_half_float_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002310, VkglTestCase_002310_1, VkglTestCase_002310_2);

#define VkglTestCase_002311_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002311_2 "texture2d.rgb_half_float_rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002311, VkglTestCase_002311_1, VkglTestCase_002311_2);

#define VkglTestCase_002312_1 "KHR-GLES31.core.internalform"
#define VkglTestCase_002312_2 "at.texture2d.rgb_float_rgb16f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002312, VkglTestCase_002312_1, VkglTestCase_002312_2);

#define VkglTestCase_002313_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002313_2 "exture2d.rgb_float_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002313, VkglTestCase_002313_1, VkglTestCase_002313_2);

#define VkglTestCase_002314_1 "KHR-GLES31.core.internalforma"
#define VkglTestCase_002314_2 "t.texture2d.rgb_float_rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002314, VkglTestCase_002314_1, VkglTestCase_002314_2);

#define VkglTestCase_002315_1 "KHR-GLES31.core.internalformat.textu"
#define VkglTestCase_002315_2 "re2d.rgb_integer_unsigned_byte_rgb8ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002315, VkglTestCase_002315_1, VkglTestCase_002315_2);

#define VkglTestCase_002316_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002316_2 "texture2d.rgb_integer_byte_rgb8i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002316, VkglTestCase_002316_1, VkglTestCase_002316_2);

#define VkglTestCase_002317_1 "KHR-GLES31.core.internalformat.textur"
#define VkglTestCase_002317_2 "e2d.rgb_integer_unsigned_short_rgb16ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002317, VkglTestCase_002317_1, VkglTestCase_002317_2);

#define VkglTestCase_002318_1 "KHR-GLES31.core.internalformat.t"
#define VkglTestCase_002318_2 "exture2d.rgb_integer_short_rgb16i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002318, VkglTestCase_002318_1, VkglTestCase_002318_2);

#define VkglTestCase_002319_1 "KHR-GLES31.core.internalformat.textu"
#define VkglTestCase_002319_2 "re2d.rgb_integer_unsigned_int_rgb32ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002319, VkglTestCase_002319_1, VkglTestCase_002319_2);

#define VkglTestCase_002320_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002320_2 "texture2d.rgb_integer_int_rgb32i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002320, VkglTestCase_002320_1, VkglTestCase_002320_2);

#define VkglTestCase_002321_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002321_2 ".texture2d.rg_unsigned_byte_rg8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002321, VkglTestCase_002321_1, VkglTestCase_002321_2);

#define VkglTestCase_002322_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002322_2 ".texture2d.rg_half_float_rg16f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002322, VkglTestCase_002322_1, VkglTestCase_002322_2);

#define VkglTestCase_002323_1 "KHR-GLES31.core.internalfor"
#define VkglTestCase_002323_2 "mat.texture2d.rg_float_rg32f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002323, VkglTestCase_002323_1, VkglTestCase_002323_2);

#define VkglTestCase_002324_1 "KHR-GLES31.core.internalfor"
#define VkglTestCase_002324_2 "mat.texture2d.rg_float_rg16f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002324, VkglTestCase_002324_1, VkglTestCase_002324_2);

#define VkglTestCase_002325_1 "KHR-GLES31.core.internalformat.text"
#define VkglTestCase_002325_2 "ure2d.rg_integer_unsigned_byte_rg8ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002325, VkglTestCase_002325_1, VkglTestCase_002325_2);

#define VkglTestCase_002326_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002326_2 ".texture2d.rg_integer_byte_rg8i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002326, VkglTestCase_002326_1, VkglTestCase_002326_2);

#define VkglTestCase_002327_1 "KHR-GLES31.core.internalformat.textu"
#define VkglTestCase_002327_2 "re2d.rg_integer_unsigned_short_rg16ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002327, VkglTestCase_002327_1, VkglTestCase_002327_2);

#define VkglTestCase_002328_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002328_2 "texture2d.rg_integer_short_rg16i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002328, VkglTestCase_002328_1, VkglTestCase_002328_2);

#define VkglTestCase_002329_1 "KHR-GLES31.core.internalformat.text"
#define VkglTestCase_002329_2 "ure2d.rg_integer_unsigned_int_rg32ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002329, VkglTestCase_002329_1, VkglTestCase_002329_2);

#define VkglTestCase_002330_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002330_2 ".texture2d.rg_integer_int_rg32i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002330, VkglTestCase_002330_1, VkglTestCase_002330_2);

#define VkglTestCase_002331_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002331_2 ".texture2d.red_unsigned_byte_r8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002331, VkglTestCase_002331_1, VkglTestCase_002331_2);

#define VkglTestCase_002332_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002332_2 ".texture2d.red_half_float_r16f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002332, VkglTestCase_002332_1, VkglTestCase_002332_2);

#define VkglTestCase_002333_1 "KHR-GLES31.core.internalfor"
#define VkglTestCase_002333_2 "mat.texture2d.red_float_r32f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002333, VkglTestCase_002333_1, VkglTestCase_002333_2);

#define VkglTestCase_002334_1 "KHR-GLES31.core.internalfor"
#define VkglTestCase_002334_2 "mat.texture2d.red_float_r16f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002334, VkglTestCase_002334_1, VkglTestCase_002334_2);

#define VkglTestCase_002335_1 "KHR-GLES31.core.internalformat.text"
#define VkglTestCase_002335_2 "ure2d.red_integer_unsigned_byte_r8ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002335, VkglTestCase_002335_1, VkglTestCase_002335_2);

#define VkglTestCase_002336_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002336_2 ".texture2d.red_integer_byte_r8i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002336, VkglTestCase_002336_1, VkglTestCase_002336_2);

#define VkglTestCase_002337_1 "KHR-GLES31.core.internalformat.textu"
#define VkglTestCase_002337_2 "re2d.red_integer_unsigned_short_r16ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002337, VkglTestCase_002337_1, VkglTestCase_002337_2);

#define VkglTestCase_002338_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002338_2 "texture2d.red_integer_short_r16i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002338, VkglTestCase_002338_1, VkglTestCase_002338_2);

#define VkglTestCase_002339_1 "KHR-GLES31.core.internalformat.text"
#define VkglTestCase_002339_2 "ure2d.red_integer_unsigned_int_r32ui"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002339, VkglTestCase_002339_1, VkglTestCase_002339_2);

#define VkglTestCase_002340_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002340_2 ".texture2d.red_integer_int_r32i"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002340, VkglTestCase_002340_1, VkglTestCase_002340_2);

#define VkglTestCase_002341_1 "KHR-GLES31.core.internalformat.texture2d.dep"
#define VkglTestCase_002341_2 "th_component_unsigned_short_depth_component16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002341, VkglTestCase_002341_1, VkglTestCase_002341_2);

#define VkglTestCase_002342_1 "KHR-GLES31.core.internalformat.texture2d.de"
#define VkglTestCase_002342_2 "pth_component_unsigned_int_depth_component24"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002342, VkglTestCase_002342_1, VkglTestCase_002342_2);

#define VkglTestCase_002343_1 "KHR-GLES31.core.internalformat.texture2d.de"
#define VkglTestCase_002343_2 "pth_component_unsigned_int_depth_component16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002343, VkglTestCase_002343_1, VkglTestCase_002343_2);

#define VkglTestCase_002344_1 "KHR-GLES31.core.internalformat.texture2d"
#define VkglTestCase_002344_2 ".depth_component_float_depth_component32f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002344, VkglTestCase_002344_1, VkglTestCase_002344_2);

#define VkglTestCase_002345_1 "KHR-GLES31.core.internalformat.texture2d.dep"
#define VkglTestCase_002345_2 "th_stencil_unsigned_int_24_8_depth24_stencil8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002345, VkglTestCase_002345_1, VkglTestCase_002345_2);

#define VkglTestCase_002346_1 "KHR-GLES31.core.internalformat.texture2d.depth_sten"
#define VkglTestCase_002346_2 "cil_float_32_unsigned_int_24_8_rev_depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002346, VkglTestCase_002346_1, VkglTestCase_002346_2);

#define VkglTestCase_002347_1 "KHR-GLES31.core.internalformat.textu"
#define VkglTestCase_002347_2 "re2d.rgba_unsigned_short_5_5_5_1_rgba"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002347, VkglTestCase_002347_1, VkglTestCase_002347_2);

#define VkglTestCase_002348_1 "KHR-GLES31.core.internalformat.tex"
#define VkglTestCase_002348_2 "ture2d.rgb_unsigned_short_5_6_5_rgb"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002348, VkglTestCase_002348_1, VkglTestCase_002348_2);
