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

#define VkglTestCase_003712_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003712_2 "rectangle.initial_values"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003712, VkglTestCase_003712_1, VkglTestCase_003712_2);

#define VkglTestCase_003713_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003713_2 "ls.rectangle.luminance"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003713, VkglTestCase_003713_1, VkglTestCase_003713_2);

#define VkglTestCase_003714_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003714_2 "xels.rectangle.alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003714, VkglTestCase_003714_1, VkglTestCase_003714_2);

#define VkglTestCase_003715_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003715_2 "rectangle.luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003715, VkglTestCase_003715_1, VkglTestCase_003715_2);

#define VkglTestCase_003716_1 "KHR-GLES3.packed_p"
#define VkglTestCase_003716_2 "ixels.rectangle.rgb"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003716, VkglTestCase_003716_1, VkglTestCase_003716_2);

#define VkglTestCase_003717_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003717_2 "xels.rectangle.rgba"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003717, VkglTestCase_003717_1, VkglTestCase_003717_2);

#define VkglTestCase_003718_1 "KHR-GLES3.packed_p"
#define VkglTestCase_003718_2 "ixels.rectangle.r8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003718, VkglTestCase_003718_1, VkglTestCase_003718_2);

#define VkglTestCase_003719_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003719_2 "ls.rectangle.r8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003719, VkglTestCase_003719_1, VkglTestCase_003719_2);

#define VkglTestCase_003720_1 "KHR-GLES3.packed_p"
#define VkglTestCase_003720_2 "ixels.rectangle.rg8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003720, VkglTestCase_003720_1, VkglTestCase_003720_2);

#define VkglTestCase_003721_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003721_2 "ls.rectangle.rg8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003721, VkglTestCase_003721_1, VkglTestCase_003721_2);

#define VkglTestCase_003722_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003722_2 "xels.rectangle.rgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003722, VkglTestCase_003722_1, VkglTestCase_003722_2);

#define VkglTestCase_003723_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003723_2 "s.rectangle.rgb8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003723, VkglTestCase_003723_1, VkglTestCase_003723_2);

#define VkglTestCase_003724_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003724_2 "els.rectangle.rgb565"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003724, VkglTestCase_003724_1, VkglTestCase_003724_2);

#define VkglTestCase_003725_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003725_2 "xels.rectangle.rgba4"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003725, VkglTestCase_003725_1, VkglTestCase_003725_2);

#define VkglTestCase_003726_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003726_2 "els.rectangle.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003726, VkglTestCase_003726_1, VkglTestCase_003726_2);

#define VkglTestCase_003727_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003727_2 "xels.rectangle.rgba8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003727, VkglTestCase_003727_1, VkglTestCase_003727_2);

#define VkglTestCase_003728_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003728_2 "s.rectangle.rgba8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003728, VkglTestCase_003728_1, VkglTestCase_003728_2);

#define VkglTestCase_003729_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003729_2 "ls.rectangle.rgb10_a2"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003729, VkglTestCase_003729_1, VkglTestCase_003729_2);

#define VkglTestCase_003730_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003730_2 "s.rectangle.rgb10_a2ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003730, VkglTestCase_003730_1, VkglTestCase_003730_2);

#define VkglTestCase_003731_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003731_2 "xels.rectangle.srgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003731, VkglTestCase_003731_1, VkglTestCase_003731_2);

#define VkglTestCase_003732_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003732_2 ".rectangle.srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003732, VkglTestCase_003732_1, VkglTestCase_003732_2);

#define VkglTestCase_003733_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003733_2 "xels.rectangle.r16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003733, VkglTestCase_003733_1, VkglTestCase_003733_2);

#define VkglTestCase_003734_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003734_2 "xels.rectangle.rg16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003734, VkglTestCase_003734_1, VkglTestCase_003734_2);

#define VkglTestCase_003735_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003735_2 "els.rectangle.rgb16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003735, VkglTestCase_003735_1, VkglTestCase_003735_2);

#define VkglTestCase_003736_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003736_2 "els.rectangle.rgba16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003736, VkglTestCase_003736_1, VkglTestCase_003736_2);

#define VkglTestCase_003737_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003737_2 "xels.rectangle.r32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003737, VkglTestCase_003737_1, VkglTestCase_003737_2);

#define VkglTestCase_003738_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003738_2 "xels.rectangle.rg32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003738, VkglTestCase_003738_1, VkglTestCase_003738_2);

#define VkglTestCase_003739_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003739_2 "els.rectangle.rgb32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003739, VkglTestCase_003739_1, VkglTestCase_003739_2);

#define VkglTestCase_003740_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003740_2 "els.rectangle.rgba32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003740, VkglTestCase_003740_1, VkglTestCase_003740_2);

#define VkglTestCase_003741_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003741_2 "rectangle.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003741, VkglTestCase_003741_1, VkglTestCase_003741_2);

#define VkglTestCase_003742_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003742_2 "els.rectangle.rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003742, VkglTestCase_003742_1, VkglTestCase_003742_2);

#define VkglTestCase_003743_1 "KHR-GLES3.packed_p"
#define VkglTestCase_003743_2 "ixels.rectangle.r8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003743, VkglTestCase_003743_1, VkglTestCase_003743_2);

#define VkglTestCase_003744_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003744_2 "xels.rectangle.r8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003744, VkglTestCase_003744_1, VkglTestCase_003744_2);

#define VkglTestCase_003745_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003745_2 "xels.rectangle.r16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003745, VkglTestCase_003745_1, VkglTestCase_003745_2);

#define VkglTestCase_003746_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003746_2 "xels.rectangle.r16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003746, VkglTestCase_003746_1, VkglTestCase_003746_2);

#define VkglTestCase_003747_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003747_2 "xels.rectangle.r32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003747, VkglTestCase_003747_1, VkglTestCase_003747_2);

#define VkglTestCase_003748_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003748_2 "xels.rectangle.r32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003748, VkglTestCase_003748_1, VkglTestCase_003748_2);

#define VkglTestCase_003749_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003749_2 "xels.rectangle.rg8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003749, VkglTestCase_003749_1, VkglTestCase_003749_2);

#define VkglTestCase_003750_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003750_2 "xels.rectangle.rg8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003750, VkglTestCase_003750_1, VkglTestCase_003750_2);

#define VkglTestCase_003751_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003751_2 "xels.rectangle.rg16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003751, VkglTestCase_003751_1, VkglTestCase_003751_2);

#define VkglTestCase_003752_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003752_2 "els.rectangle.rg16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003752, VkglTestCase_003752_1, VkglTestCase_003752_2);

#define VkglTestCase_003753_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003753_2 "xels.rectangle.rg32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003753, VkglTestCase_003753_1, VkglTestCase_003753_2);

#define VkglTestCase_003754_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003754_2 "els.rectangle.rg32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003754, VkglTestCase_003754_1, VkglTestCase_003754_2);

#define VkglTestCase_003755_1 "KHR-GLES3.packed_pi"
#define VkglTestCase_003755_2 "xels.rectangle.rgb8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003755, VkglTestCase_003755_1, VkglTestCase_003755_2);

#define VkglTestCase_003756_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003756_2 "els.rectangle.rgb8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003756, VkglTestCase_003756_1, VkglTestCase_003756_2);

#define VkglTestCase_003757_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003757_2 "els.rectangle.rgb16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003757, VkglTestCase_003757_1, VkglTestCase_003757_2);

#define VkglTestCase_003758_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003758_2 "els.rectangle.rgb16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003758, VkglTestCase_003758_1, VkglTestCase_003758_2);

#define VkglTestCase_003759_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003759_2 "els.rectangle.rgb32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003759, VkglTestCase_003759_1, VkglTestCase_003759_2);

#define VkglTestCase_003760_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003760_2 "els.rectangle.rgb32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003760, VkglTestCase_003760_1, VkglTestCase_003760_2);

#define VkglTestCase_003761_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003761_2 "els.rectangle.rgba8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003761, VkglTestCase_003761_1, VkglTestCase_003761_2);

#define VkglTestCase_003762_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003762_2 "els.rectangle.rgba8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003762, VkglTestCase_003762_1, VkglTestCase_003762_2);

#define VkglTestCase_003763_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003763_2 "els.rectangle.rgba16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003763, VkglTestCase_003763_1, VkglTestCase_003763_2);

#define VkglTestCase_003764_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003764_2 "ls.rectangle.rgba16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003764, VkglTestCase_003764_1, VkglTestCase_003764_2);

#define VkglTestCase_003765_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003765_2 "els.rectangle.rgba32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003765, VkglTestCase_003765_1, VkglTestCase_003765_2);

#define VkglTestCase_003766_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003766_2 "ls.rectangle.rgba32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003766, VkglTestCase_003766_1, VkglTestCase_003766_2);

#define VkglTestCase_003767_1 "KHR-GLES3.packed_pixels.r"
#define VkglTestCase_003767_2 "ectangle.depth_component16"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003767, VkglTestCase_003767_1, VkglTestCase_003767_2);

#define VkglTestCase_003768_1 "KHR-GLES3.packed_pixels.r"
#define VkglTestCase_003768_2 "ectangle.depth_component24"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003768, VkglTestCase_003768_1, VkglTestCase_003768_2);

#define VkglTestCase_003769_1 "KHR-GLES3.packed_pixels.re"
#define VkglTestCase_003769_2 "ctangle.depth_component32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003769, VkglTestCase_003769_1, VkglTestCase_003769_2);

#define VkglTestCase_003770_1 "KHR-GLES3.packed_pixels.r"
#define VkglTestCase_003770_2 "ectangle.depth24_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003770, VkglTestCase_003770_1, VkglTestCase_003770_2);

#define VkglTestCase_003771_1 "KHR-GLES3.packed_pixels.r"
#define VkglTestCase_003771_2 "ectangle.depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003771, VkglTestCase_003771_1, VkglTestCase_003771_2);
