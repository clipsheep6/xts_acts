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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003605_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003605_2 "exture2d.rgba_unsigned_byte_rgba"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003605, VkglTestCase_003605_1, VkglTestCase_003605_2);

#define VkglTestCase_003606_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003606_2 "texture2d.rgb_unsigned_byte_rgb"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003606, VkglTestCase_003606_1, VkglTestCase_003606_2);

#define VkglTestCase_003607_1 "KHR-GLES3.core.internalformat.textur"
#define VkglTestCase_003607_2 "e2d.rgba_unsigned_short_4_4_4_4_rgba"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003607, VkglTestCase_003607_1, VkglTestCase_003607_2);

#define VkglTestCase_003608_1 "KHR-GLES3.core.internalformat.texture2d.lu"
#define VkglTestCase_003608_2 "minance_alpha_unsigned_byte_luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003608, VkglTestCase_003608_1, VkglTestCase_003608_2);

#define VkglTestCase_003609_1 "KHR-GLES3.core.internalformat.textur"
#define VkglTestCase_003609_2 "e2d.luminance_unsigned_byte_luminance"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003609, VkglTestCase_003609_1, VkglTestCase_003609_2);

#define VkglTestCase_003610_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003610_2 "xture2d.alpha_unsigned_byte_alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003610, VkglTestCase_003610_1, VkglTestCase_003610_2);

#define VkglTestCase_003611_1 "KHR-GLES3.core.internalformat.texture2"
#define VkglTestCase_003611_2 "d.rgba_unsigned_int_2_10_10_10_rev_rgba"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003611, VkglTestCase_003611_1, VkglTestCase_003611_2);

#define VkglTestCase_003612_1 "KHR-GLES3.core.internalformat.texture2d."
#define VkglTestCase_003612_2 "rgba_unsigned_int_2_10_10_10_rev_rgb10_a2"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003612, VkglTestCase_003612_1, VkglTestCase_003612_2);

#define VkglTestCase_003613_1 "KHR-GLES3.core.internalformat.texture2d."
#define VkglTestCase_003613_2 "rgba_unsigned_int_2_10_10_10_rev_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003613, VkglTestCase_003613_1, VkglTestCase_003613_2);

#define VkglTestCase_003614_1 "KHR-GLES3.core.internalformat.texture"
#define VkglTestCase_003614_2 "2d.rgb_unsigned_int_2_10_10_10_rev_rgb"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003614, VkglTestCase_003614_1, VkglTestCase_003614_2);

#define VkglTestCase_003615_1 "KHR-GLES3.core.internalformat.texture2d.dep"
#define VkglTestCase_003615_2 "th_component_unsigned_short_depth_component"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003615, VkglTestCase_003615_1, VkglTestCase_003615_2);

#define VkglTestCase_003616_1 "KHR-GLES3.core.internalformat.texture2d.de"
#define VkglTestCase_003616_2 "pth_component_unsigned_int_depth_component"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003616, VkglTestCase_003616_1, VkglTestCase_003616_2);

#define VkglTestCase_003617_1 "KHR-GLES3.core.internalformat.texture2d.de"
#define VkglTestCase_003617_2 "pth_stencil_unsigned_int_24_8_depth_stencil"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003617, VkglTestCase_003617_1, VkglTestCase_003617_2);

#define VkglTestCase_003618_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003618_2 "exture2d.rgb_half_float_oes_rgb"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003618, VkglTestCase_003618_1, VkglTestCase_003618_2);

#define VkglTestCase_003619_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003619_2 "xture2d.rgba_half_float_oes_rgba"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003619, VkglTestCase_003619_1, VkglTestCase_003619_2);

#define VkglTestCase_003620_1 "KHR-GLES3.core.internalformat.text"
#define VkglTestCase_003620_2 "ure2d.rgb_half_float_oes_rgb_linear"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003620, VkglTestCase_003620_1, VkglTestCase_003620_2);

#define VkglTestCase_003621_1 "KHR-GLES3.core.internalformat.textu"
#define VkglTestCase_003621_2 "re2d.rgba_half_float_oes_rgba_linear"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003621, VkglTestCase_003621_1, VkglTestCase_003621_2);

#define VkglTestCase_003622_1 "KHR-GLES3.core.internalforma"
#define VkglTestCase_003622_2 "t.texture2d.rgb_float_rgb32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003622, VkglTestCase_003622_1, VkglTestCase_003622_2);

#define VkglTestCase_003623_1 "KHR-GLES3.core.internalformat"
#define VkglTestCase_003623_2 ".texture2d.rgba_float_rgba32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003623, VkglTestCase_003623_1, VkglTestCase_003623_2);

#define VkglTestCase_003624_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003624_2 "exture2d.rgb_float_rgb32f_linear"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003624, VkglTestCase_003624_1, VkglTestCase_003624_2);

#define VkglTestCase_003625_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003625_2 "xture2d.rgba_float_rgba32f_linear"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003625, VkglTestCase_003625_1, VkglTestCase_003625_2);

#define VkglTestCase_003626_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003626_2 "xture2d.rgba_unsigned_byte_rgba8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003626, VkglTestCase_003626_1, VkglTestCase_003626_2);

#define VkglTestCase_003627_1 "KHR-GLES3.core.internalformat.tex"
#define VkglTestCase_003627_2 "ture2d.rgba_unsigned_byte_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003627, VkglTestCase_003627_1, VkglTestCase_003627_2);

#define VkglTestCase_003628_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003628_2 "xture2d.rgba_unsigned_byte_rgba4"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003628, VkglTestCase_003628_1, VkglTestCase_003628_2);

#define VkglTestCase_003629_1 "KHR-GLES3.core.internalformat.textu"
#define VkglTestCase_003629_2 "re2d.rgba_unsigned_byte_srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003629, VkglTestCase_003629_1, VkglTestCase_003629_2);

#define VkglTestCase_003630_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003630_2 "texture2d.rgba_byte_rgba8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003630, VkglTestCase_003630_1, VkglTestCase_003630_2);

#define VkglTestCase_003631_1 "KHR-GLES3.core.internalformat.textur"
#define VkglTestCase_003631_2 "e2d.rgba_unsigned_short_4_4_4_4_rgba4"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003631, VkglTestCase_003631_1, VkglTestCase_003631_2);

#define VkglTestCase_003632_1 "KHR-GLES3.core.internalformat.texture"
#define VkglTestCase_003632_2 "2d.rgba_unsigned_short_5_5_5_1_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003632, VkglTestCase_003632_1, VkglTestCase_003632_2);

#define VkglTestCase_003633_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003633_2 "exture2d.rgba_half_float_rgba16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003633, VkglTestCase_003633_1, VkglTestCase_003633_2);

#define VkglTestCase_003634_1 "KHR-GLES3.core.internalformat"
#define VkglTestCase_003634_2 ".texture2d.rgba_float_rgba16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003634, VkglTestCase_003634_1, VkglTestCase_003634_2);

#define VkglTestCase_003635_1 "KHR-GLES3.core.internalformat.texture"
#define VkglTestCase_003635_2 "2d.rgba_integer_unsigned_byte_rgba8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003635, VkglTestCase_003635_1, VkglTestCase_003635_2);

#define VkglTestCase_003636_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003636_2 "xture2d.rgba_integer_byte_rgba8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003636, VkglTestCase_003636_1, VkglTestCase_003636_2);

#define VkglTestCase_003637_1 "KHR-GLES3.core.internalformat.texture2"
#define VkglTestCase_003637_2 "d.rgba_integer_unsigned_short_rgba16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003637, VkglTestCase_003637_1, VkglTestCase_003637_2);

#define VkglTestCase_003638_1 "KHR-GLES3.core.internalformat.tex"
#define VkglTestCase_003638_2 "ture2d.rgba_integer_short_rgba16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003638, VkglTestCase_003638_1, VkglTestCase_003638_2);

#define VkglTestCase_003639_1 "KHR-GLES3.core.internalformat.texture"
#define VkglTestCase_003639_2 "2d.rgba_integer_unsigned_int_rgba32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003639, VkglTestCase_003639_1, VkglTestCase_003639_2);

#define VkglTestCase_003640_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003640_2 "xture2d.rgba_integer_int_rgba32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003640, VkglTestCase_003640_1, VkglTestCase_003640_2);

#define VkglTestCase_003641_1 "KHR-GLES3.core.internalformat.texture2d.rgba_"
#define VkglTestCase_003641_2 "integer_unsigned_int_2_10_10_10_rev_rgb10_a2ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003641, VkglTestCase_003641_1, VkglTestCase_003641_2);

#define VkglTestCase_003642_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003642_2 "exture2d.rgb_unsigned_byte_rgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003642, VkglTestCase_003642_1, VkglTestCase_003642_2);

#define VkglTestCase_003643_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003643_2 "xture2d.rgb_unsigned_byte_rgb565"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003643, VkglTestCase_003643_1, VkglTestCase_003643_2);

#define VkglTestCase_003644_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003644_2 "exture2d.rgb_unsigned_byte_srgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003644, VkglTestCase_003644_1, VkglTestCase_003644_2);

#define VkglTestCase_003645_1 "KHR-GLES3.core.internalformat.textu"
#define VkglTestCase_003645_2 "re2d.rgb_unsigned_short_5_6_5_rgb565"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003645, VkglTestCase_003645_1, VkglTestCase_003645_2);

#define VkglTestCase_003646_1 "KHR-GLES3.core.internalformat.texture2d.rgb"
#define VkglTestCase_003646_2 "_unsigned_int_10f_11f_11f_rev_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003646, VkglTestCase_003646_1, VkglTestCase_003646_2);

#define VkglTestCase_003647_1 "KHR-GLES3.core.internalformat.texture2"
#define VkglTestCase_003647_2 "d.rgb_unsigned_int_5_9_9_9_rev_rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003647, VkglTestCase_003647_1, VkglTestCase_003647_2);

#define VkglTestCase_003648_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003648_2 "texture2d.rgb_half_float_rgb16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003648, VkglTestCase_003648_1, VkglTestCase_003648_2);

#define VkglTestCase_003649_1 "KHR-GLES3.core.internalformat.text"
#define VkglTestCase_003649_2 "ure2d.rgb_half_float_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003649, VkglTestCase_003649_1, VkglTestCase_003649_2);

#define VkglTestCase_003650_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003650_2 "exture2d.rgb_half_float_rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003650, VkglTestCase_003650_1, VkglTestCase_003650_2);

#define VkglTestCase_003651_1 "KHR-GLES3.core.internalforma"
#define VkglTestCase_003651_2 "t.texture2d.rgb_float_rgb16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003651, VkglTestCase_003651_1, VkglTestCase_003651_2);

#define VkglTestCase_003652_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003652_2 "xture2d.rgb_float_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003652, VkglTestCase_003652_1, VkglTestCase_003652_2);

#define VkglTestCase_003653_1 "KHR-GLES3.core.internalforma"
#define VkglTestCase_003653_2 "t.texture2d.rgb_float_rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003653, VkglTestCase_003653_1, VkglTestCase_003653_2);

#define VkglTestCase_003654_1 "KHR-GLES3.core.internalformat.textur"
#define VkglTestCase_003654_2 "e2d.rgb_integer_unsigned_byte_rgb8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003654, VkglTestCase_003654_1, VkglTestCase_003654_2);

#define VkglTestCase_003655_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003655_2 "exture2d.rgb_integer_byte_rgb8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003655, VkglTestCase_003655_1, VkglTestCase_003655_2);

#define VkglTestCase_003656_1 "KHR-GLES3.core.internalformat.texture"
#define VkglTestCase_003656_2 "2d.rgb_integer_unsigned_short_rgb16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003656, VkglTestCase_003656_1, VkglTestCase_003656_2);

#define VkglTestCase_003657_1 "KHR-GLES3.core.internalformat.te"
#define VkglTestCase_003657_2 "xture2d.rgb_integer_short_rgb16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003657, VkglTestCase_003657_1, VkglTestCase_003657_2);

#define VkglTestCase_003658_1 "KHR-GLES3.core.internalformat.textur"
#define VkglTestCase_003658_2 "e2d.rgb_integer_unsigned_int_rgb32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003658, VkglTestCase_003658_1, VkglTestCase_003658_2);

#define VkglTestCase_003659_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003659_2 "exture2d.rgb_integer_int_rgb32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003659, VkglTestCase_003659_1, VkglTestCase_003659_2);

#define VkglTestCase_003660_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003660_2 "texture2d.rg_unsigned_byte_rg8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003660, VkglTestCase_003660_1, VkglTestCase_003660_2);

#define VkglTestCase_003661_1 "KHR-GLES3.core.internalformat"
#define VkglTestCase_003661_2 ".texture2d.rg_half_float_rg16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003661, VkglTestCase_003661_1, VkglTestCase_003661_2);

#define VkglTestCase_003662_1 "KHR-GLES3.core.internalform"
#define VkglTestCase_003662_2 "at.texture2d.rg_float_rg32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003662, VkglTestCase_003662_1, VkglTestCase_003662_2);

#define VkglTestCase_003663_1 "KHR-GLES3.core.internalform"
#define VkglTestCase_003663_2 "at.texture2d.rg_float_rg16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003663, VkglTestCase_003663_1, VkglTestCase_003663_2);

#define VkglTestCase_003664_1 "KHR-GLES3.core.internalformat.textu"
#define VkglTestCase_003664_2 "re2d.rg_integer_unsigned_byte_rg8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003664, VkglTestCase_003664_1, VkglTestCase_003664_2);

#define VkglTestCase_003665_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003665_2 "texture2d.rg_integer_byte_rg8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003665, VkglTestCase_003665_1, VkglTestCase_003665_2);

#define VkglTestCase_003666_1 "KHR-GLES3.core.internalformat.textur"
#define VkglTestCase_003666_2 "e2d.rg_integer_unsigned_short_rg16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003666, VkglTestCase_003666_1, VkglTestCase_003666_2);

#define VkglTestCase_003667_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003667_2 "exture2d.rg_integer_short_rg16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003667, VkglTestCase_003667_1, VkglTestCase_003667_2);

#define VkglTestCase_003668_1 "KHR-GLES3.core.internalformat.textu"
#define VkglTestCase_003668_2 "re2d.rg_integer_unsigned_int_rg32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003668, VkglTestCase_003668_1, VkglTestCase_003668_2);

#define VkglTestCase_003669_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003669_2 "texture2d.rg_integer_int_rg32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003669, VkglTestCase_003669_1, VkglTestCase_003669_2);

#define VkglTestCase_003670_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003670_2 "texture2d.red_unsigned_byte_r8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003670, VkglTestCase_003670_1, VkglTestCase_003670_2);

#define VkglTestCase_003671_1 "KHR-GLES3.core.internalformat"
#define VkglTestCase_003671_2 ".texture2d.red_half_float_r16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003671, VkglTestCase_003671_1, VkglTestCase_003671_2);

#define VkglTestCase_003672_1 "KHR-GLES3.core.internalform"
#define VkglTestCase_003672_2 "at.texture2d.red_float_r32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003672, VkglTestCase_003672_1, VkglTestCase_003672_2);

#define VkglTestCase_003673_1 "KHR-GLES3.core.internalform"
#define VkglTestCase_003673_2 "at.texture2d.red_float_r16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003673, VkglTestCase_003673_1, VkglTestCase_003673_2);

#define VkglTestCase_003674_1 "KHR-GLES3.core.internalformat.textu"
#define VkglTestCase_003674_2 "re2d.red_integer_unsigned_byte_r8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003674, VkglTestCase_003674_1, VkglTestCase_003674_2);

#define VkglTestCase_003675_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003675_2 "texture2d.red_integer_byte_r8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003675, VkglTestCase_003675_1, VkglTestCase_003675_2);

#define VkglTestCase_003676_1 "KHR-GLES3.core.internalformat.textur"
#define VkglTestCase_003676_2 "e2d.red_integer_unsigned_short_r16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003676, VkglTestCase_003676_1, VkglTestCase_003676_2);

#define VkglTestCase_003677_1 "KHR-GLES3.core.internalformat.t"
#define VkglTestCase_003677_2 "exture2d.red_integer_short_r16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003677, VkglTestCase_003677_1, VkglTestCase_003677_2);

#define VkglTestCase_003678_1 "KHR-GLES3.core.internalformat.textu"
#define VkglTestCase_003678_2 "re2d.red_integer_unsigned_int_r32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003678, VkglTestCase_003678_1, VkglTestCase_003678_2);

#define VkglTestCase_003679_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003679_2 "texture2d.red_integer_int_r32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003679, VkglTestCase_003679_1, VkglTestCase_003679_2);

#define VkglTestCase_003680_1 "KHR-GLES3.core.internalformat.texture2d.dept"
#define VkglTestCase_003680_2 "h_component_unsigned_short_depth_component16"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003680, VkglTestCase_003680_1, VkglTestCase_003680_2);

#define VkglTestCase_003681_1 "KHR-GLES3.core.internalformat.texture2d.dep"
#define VkglTestCase_003681_2 "th_component_unsigned_int_depth_component24"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003681, VkglTestCase_003681_1, VkglTestCase_003681_2);

#define VkglTestCase_003682_1 "KHR-GLES3.core.internalformat.texture2d.dep"
#define VkglTestCase_003682_2 "th_component_unsigned_int_depth_component16"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003682, VkglTestCase_003682_1, VkglTestCase_003682_2);

#define VkglTestCase_003683_1 "KHR-GLES3.core.internalformat.texture2d."
#define VkglTestCase_003683_2 "depth_component_float_depth_component32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003683, VkglTestCase_003683_1, VkglTestCase_003683_2);

#define VkglTestCase_003684_1 "KHR-GLES3.core.internalformat.texture2d.dept"
#define VkglTestCase_003684_2 "h_stencil_unsigned_int_24_8_depth24_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003684, VkglTestCase_003684_1, VkglTestCase_003684_2);

#define VkglTestCase_003685_1 "KHR-GLES3.core.internalformat.texture2d.depth_stenc"
#define VkglTestCase_003685_2 "il_float_32_unsigned_int_24_8_rev_depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003685, VkglTestCase_003685_1, VkglTestCase_003685_2);

#define VkglTestCase_003686_1 "KHR-GLES3.core.internalformat.textur"
#define VkglTestCase_003686_2 "e2d.rgba_unsigned_short_5_5_5_1_rgba"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003686, VkglTestCase_003686_1, VkglTestCase_003686_2);

#define VkglTestCase_003687_1 "KHR-GLES3.core.internalformat.text"
#define VkglTestCase_003687_2 "ure2d.rgb_unsigned_short_5_6_5_rgb"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003687, VkglTestCase_003687_1, VkglTestCase_003687_2);
