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
#include "../Khrgles2BaseFunc.h"
#include "../ActsKhrgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000412_1 "KHR-GLES2.core.internalformat.t"
#define VkglTestCase_000412_2 "exture2d.rgba_unsigned_byte_rgba"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000412, VkglTestCase_000412_1, VkglTestCase_000412_2);

#define VkglTestCase_000413_1 "KHR-GLES2.core.internalformat."
#define VkglTestCase_000413_2 "texture2d.rgb_unsigned_byte_rgb"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000413, VkglTestCase_000413_1, VkglTestCase_000413_2);

#define VkglTestCase_000414_1 "KHR-GLES2.core.internalformat.textur"
#define VkglTestCase_000414_2 "e2d.rgba_unsigned_short_4_4_4_4_rgba"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000414, VkglTestCase_000414_1, VkglTestCase_000414_2);

#define VkglTestCase_000415_1 "KHR-GLES2.core.internalformat.texture2d.lu"
#define VkglTestCase_000415_2 "minance_alpha_unsigned_byte_luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000415, VkglTestCase_000415_1, VkglTestCase_000415_2);

#define VkglTestCase_000416_1 "KHR-GLES2.core.internalformat.textur"
#define VkglTestCase_000416_2 "e2d.luminance_unsigned_byte_luminance"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000416, VkglTestCase_000416_1, VkglTestCase_000416_2);

#define VkglTestCase_000417_1 "KHR-GLES2.core.internalformat.te"
#define VkglTestCase_000417_2 "xture2d.alpha_unsigned_byte_alpha"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000417, VkglTestCase_000417_1, VkglTestCase_000417_2);

#define VkglTestCase_000418_1 "KHR-GLES2.core.internalformat.texture2"
#define VkglTestCase_000418_2 "d.rgba_unsigned_int_2_10_10_10_rev_rgba"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000418, VkglTestCase_000418_1, VkglTestCase_000418_2);

#define VkglTestCase_000419_1 "KHR-GLES2.core.internalformat.texture2d."
#define VkglTestCase_000419_2 "rgba_unsigned_int_2_10_10_10_rev_rgb10_a2"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000419, VkglTestCase_000419_1, VkglTestCase_000419_2);

#define VkglTestCase_000420_1 "KHR-GLES2.core.internalformat.texture2d."
#define VkglTestCase_000420_2 "rgba_unsigned_int_2_10_10_10_rev_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000420, VkglTestCase_000420_1, VkglTestCase_000420_2);

#define VkglTestCase_000421_1 "KHR-GLES2.core.internalformat.texture"
#define VkglTestCase_000421_2 "2d.rgb_unsigned_int_2_10_10_10_rev_rgb"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000421, VkglTestCase_000421_1, VkglTestCase_000421_2);

#define VkglTestCase_000422_1 "KHR-GLES2.core.internalformat.texture2d.dep"
#define VkglTestCase_000422_2 "th_component_unsigned_short_depth_component"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000422, VkglTestCase_000422_1, VkglTestCase_000422_2);

#define VkglTestCase_000423_1 "KHR-GLES2.core.internalformat.texture2d.de"
#define VkglTestCase_000423_2 "pth_component_unsigned_int_depth_component"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000423, VkglTestCase_000423_1, VkglTestCase_000423_2);

#define VkglTestCase_000424_1 "KHR-GLES2.core.internalformat.texture2d.de"
#define VkglTestCase_000424_2 "pth_stencil_unsigned_int_24_8_depth_stencil"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000424, VkglTestCase_000424_1, VkglTestCase_000424_2);

#define VkglTestCase_000425_1 "KHR-GLES2.core.internalformat.t"
#define VkglTestCase_000425_2 "exture2d.rgb_half_float_oes_rgb"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000425, VkglTestCase_000425_1, VkglTestCase_000425_2);

#define VkglTestCase_000426_1 "KHR-GLES2.core.internalformat.te"
#define VkglTestCase_000426_2 "xture2d.rgba_half_float_oes_rgba"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000426, VkglTestCase_000426_1, VkglTestCase_000426_2);

#define VkglTestCase_000427_1 "KHR-GLES2.core.internalformat.text"
#define VkglTestCase_000427_2 "ure2d.rgb_half_float_oes_rgb_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000427, VkglTestCase_000427_1, VkglTestCase_000427_2);

#define VkglTestCase_000428_1 "KHR-GLES2.core.internalformat.textu"
#define VkglTestCase_000428_2 "re2d.rgba_half_float_oes_rgba_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000428, VkglTestCase_000428_1, VkglTestCase_000428_2);

#define VkglTestCase_000429_1 "KHR-GLES2.core.internalforma"
#define VkglTestCase_000429_2 "t.texture2d.rgb_float_rgb32f"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000429, VkglTestCase_000429_1, VkglTestCase_000429_2);

#define VkglTestCase_000430_1 "KHR-GLES2.core.internalformat"
#define VkglTestCase_000430_2 ".texture2d.rgba_float_rgba32f"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000430, VkglTestCase_000430_1, VkglTestCase_000430_2);

#define VkglTestCase_000431_1 "KHR-GLES2.core.internalformat.t"
#define VkglTestCase_000431_2 "exture2d.rgb_float_rgb32f_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000431, VkglTestCase_000431_1, VkglTestCase_000431_2);

#define VkglTestCase_000432_1 "KHR-GLES2.core.internalformat.te"
#define VkglTestCase_000432_2 "xture2d.rgba_float_rgba32f_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000432, VkglTestCase_000432_1, VkglTestCase_000432_2);

#define VkglTestCase_000433_1 "KHR-GLES2.core.internalformat.tex"
#define VkglTestCase_000433_2 "ture2d.rgba_unsigned_byte_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000433, VkglTestCase_000433_1, VkglTestCase_000433_2);

#define VkglTestCase_000434_1 "KHR-GLES2.core.internalformat.te"
#define VkglTestCase_000434_2 "xture2d.rgba_unsigned_byte_rgba4"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000434, VkglTestCase_000434_1, VkglTestCase_000434_2);

#define VkglTestCase_000435_1 "KHR-GLES2.core.internalformat.te"
#define VkglTestCase_000435_2 "xture2d.rgb_unsigned_byte_rgb565"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000435, VkglTestCase_000435_1, VkglTestCase_000435_2);

#define VkglTestCase_000436_1 "KHR-GLES2.core.internalformat.textur"
#define VkglTestCase_000436_2 "e2d.rgba_unsigned_short_4_4_4_4_rgba4"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000436, VkglTestCase_000436_1, VkglTestCase_000436_2);

#define VkglTestCase_000437_1 "KHR-GLES2.core.internalformat.textur"
#define VkglTestCase_000437_2 "e2d.rgba_unsigned_short_5_5_5_1_rgba"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000437, VkglTestCase_000437_1, VkglTestCase_000437_2);

#define VkglTestCase_000438_1 "KHR-GLES2.core.internalformat.texture"
#define VkglTestCase_000438_2 "2d.rgba_unsigned_short_5_5_5_1_rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000438, VkglTestCase_000438_1, VkglTestCase_000438_2);

#define VkglTestCase_000439_1 "KHR-GLES2.core.internalformat.text"
#define VkglTestCase_000439_2 "ure2d.rgb_unsigned_short_5_6_5_rgb"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000439, VkglTestCase_000439_1, VkglTestCase_000439_2);

#define VkglTestCase_000440_1 "KHR-GLES2.core.internalformat.textu"
#define VkglTestCase_000440_2 "re2d.rgb_unsigned_short_5_6_5_rgb565"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000440, VkglTestCase_000440_1, VkglTestCase_000440_2);

#define VkglTestCase_000441_1 "KHR-GLES2.core.internalformat.texture2d.lumin"
#define VkglTestCase_000441_2 "ance_alpha_unsigned_byte_luminance8_alpha8_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000441, VkglTestCase_000441_1, VkglTestCase_000441_2);

#define VkglTestCase_000442_1 "KHR-GLES2.core.internalformat.texture2d.lumin"
#define VkglTestCase_000442_2 "ance_alpha_unsigned_byte_luminance4_alpha4_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000442, VkglTestCase_000442_1, VkglTestCase_000442_2);

#define VkglTestCase_000443_1 "KHR-GLES2.core.internalformat.texture2d"
#define VkglTestCase_000443_2 ".luminance_unsigned_byte_luminance8_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000443, VkglTestCase_000443_1, VkglTestCase_000443_2);

#define VkglTestCase_000444_1 "KHR-GLES2.core.internalformat.textu"
#define VkglTestCase_000444_2 "re2d.alpha_unsigned_byte_alpha8_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000444, VkglTestCase_000444_1, VkglTestCase_000444_2);

#define VkglTestCase_000445_1 "KHR-GLES2.core.internalformat.texture2d.dep"
#define VkglTestCase_000445_2 "th_component_unsigned_int_depth_component16"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000445, VkglTestCase_000445_1, VkglTestCase_000445_2);

#define VkglTestCase_000446_1 "KHR-GLES2.core.internalformat.texture2d.dept"
#define VkglTestCase_000446_2 "h_component_unsigned_short_depth_component16"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000446, VkglTestCase_000446_1, VkglTestCase_000446_2);

#define VkglTestCase_000447_1 "KHR-GLES2.core.internalformat.texture2d.dep"
#define VkglTestCase_000447_2 "th_component_unsigned_int_depth_component24"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000447, VkglTestCase_000447_1, VkglTestCase_000447_2);

#define VkglTestCase_000448_1 "KHR-GLES2.core.internalformat.texture2d.dep"
#define VkglTestCase_000448_2 "th_component_unsigned_int_depth_component32"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000448, VkglTestCase_000448_1, VkglTestCase_000448_2);
