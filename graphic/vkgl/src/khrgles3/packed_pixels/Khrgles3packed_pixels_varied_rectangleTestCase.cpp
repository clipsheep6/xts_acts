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

#define VkglTestCase_003831_1 "KHR-GLES3.packed_pixels.v"
#define VkglTestCase_003831_2 "aried_rectangle.luminance"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003831, VkglTestCase_003831_1, VkglTestCase_003831_2);

#define VkglTestCase_003832_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003832_2 ".varied_rectangle.alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003832, VkglTestCase_003832_1, VkglTestCase_003832_2);

#define VkglTestCase_003833_1 "KHR-GLES3.packed_pixels.vari"
#define VkglTestCase_003833_2 "ed_rectangle.luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003833, VkglTestCase_003833_1, VkglTestCase_003833_2);

#define VkglTestCase_003834_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003834_2 "s.varied_rectangle.rgb"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003834, VkglTestCase_003834_1, VkglTestCase_003834_2);

#define VkglTestCase_003835_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003835_2 "s.varied_rectangle.rgba"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003835, VkglTestCase_003835_1, VkglTestCase_003835_2);

#define VkglTestCase_003836_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003836_2 "ls.varied_rectangle.r8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003836, VkglTestCase_003836_1, VkglTestCase_003836_2);

#define VkglTestCase_003837_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003837_2 "varied_rectangle.r8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003837, VkglTestCase_003837_1, VkglTestCase_003837_2);

#define VkglTestCase_003838_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003838_2 "s.varied_rectangle.rg8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003838, VkglTestCase_003838_1, VkglTestCase_003838_2);

#define VkglTestCase_003839_1 "KHR-GLES3.packed_pixels.v"
#define VkglTestCase_003839_2 "aried_rectangle.rg8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003839, VkglTestCase_003839_1, VkglTestCase_003839_2);

#define VkglTestCase_003840_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003840_2 "s.varied_rectangle.rgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003840, VkglTestCase_003840_1, VkglTestCase_003840_2);

#define VkglTestCase_003841_1 "KHR-GLES3.packed_pixels.v"
#define VkglTestCase_003841_2 "aried_rectangle.rgb8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003841, VkglTestCase_003841_1, VkglTestCase_003841_2);

#define VkglTestCase_003842_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003842_2 ".varied_rectangle.rgb565"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003842, VkglTestCase_003842_1, VkglTestCase_003842_2);

#define VkglTestCase_003843_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003843_2 ".varied_rectangle.rgba4"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003843, VkglTestCase_003843_1, VkglTestCase_003843_2);

#define VkglTestCase_003844_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003844_2 "varied_rectangle.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003844, VkglTestCase_003844_1, VkglTestCase_003844_2);

#define VkglTestCase_003845_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003845_2 ".varied_rectangle.rgba8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003845, VkglTestCase_003845_1, VkglTestCase_003845_2);

#define VkglTestCase_003846_1 "KHR-GLES3.packed_pixels.va"
#define VkglTestCase_003846_2 "ried_rectangle.rgba8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003846, VkglTestCase_003846_1, VkglTestCase_003846_2);

#define VkglTestCase_003847_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003847_2 "varied_rectangle.rgb10_a2"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003847, VkglTestCase_003847_1, VkglTestCase_003847_2);

#define VkglTestCase_003848_1 "KHR-GLES3.packed_pixels.v"
#define VkglTestCase_003848_2 "aried_rectangle.rgb10_a2ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003848, VkglTestCase_003848_1, VkglTestCase_003848_2);

#define VkglTestCase_003849_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003849_2 ".varied_rectangle.srgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003849, VkglTestCase_003849_1, VkglTestCase_003849_2);

#define VkglTestCase_003850_1 "KHR-GLES3.packed_pixels.va"
#define VkglTestCase_003850_2 "ried_rectangle.srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003850, VkglTestCase_003850_1, VkglTestCase_003850_2);

#define VkglTestCase_003851_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003851_2 "s.varied_rectangle.r16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003851, VkglTestCase_003851_1, VkglTestCase_003851_2);

#define VkglTestCase_003852_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003852_2 ".varied_rectangle.rg16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003852, VkglTestCase_003852_1, VkglTestCase_003852_2);

#define VkglTestCase_003853_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003853_2 ".varied_rectangle.rgb16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003853, VkglTestCase_003853_1, VkglTestCase_003853_2);

#define VkglTestCase_003854_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003854_2 "varied_rectangle.rgba16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003854, VkglTestCase_003854_1, VkglTestCase_003854_2);

#define VkglTestCase_003855_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003855_2 "s.varied_rectangle.r32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003855, VkglTestCase_003855_1, VkglTestCase_003855_2);

#define VkglTestCase_003856_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003856_2 ".varied_rectangle.rg32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003856, VkglTestCase_003856_1, VkglTestCase_003856_2);

#define VkglTestCase_003857_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003857_2 ".varied_rectangle.rgb32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003857, VkglTestCase_003857_1, VkglTestCase_003857_2);

#define VkglTestCase_003858_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003858_2 "varied_rectangle.rgba32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003858, VkglTestCase_003858_1, VkglTestCase_003858_2);

#define VkglTestCase_003859_1 "KHR-GLES3.packed_pixels.var"
#define VkglTestCase_003859_2 "ied_rectangle.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003859, VkglTestCase_003859_1, VkglTestCase_003859_2);

#define VkglTestCase_003860_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003860_2 "varied_rectangle.rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003860, VkglTestCase_003860_1, VkglTestCase_003860_2);

#define VkglTestCase_003861_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003861_2 "s.varied_rectangle.r8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003861, VkglTestCase_003861_1, VkglTestCase_003861_2);

#define VkglTestCase_003862_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003862_2 "s.varied_rectangle.r8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003862, VkglTestCase_003862_1, VkglTestCase_003862_2);

#define VkglTestCase_003863_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003863_2 "s.varied_rectangle.r16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003863, VkglTestCase_003863_1, VkglTestCase_003863_2);

#define VkglTestCase_003864_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003864_2 ".varied_rectangle.r16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003864, VkglTestCase_003864_1, VkglTestCase_003864_2);

#define VkglTestCase_003865_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003865_2 "s.varied_rectangle.r32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003865, VkglTestCase_003865_1, VkglTestCase_003865_2);

#define VkglTestCase_003866_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003866_2 ".varied_rectangle.r32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003866, VkglTestCase_003866_1, VkglTestCase_003866_2);

#define VkglTestCase_003867_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003867_2 "s.varied_rectangle.rg8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003867, VkglTestCase_003867_1, VkglTestCase_003867_2);

#define VkglTestCase_003868_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003868_2 ".varied_rectangle.rg8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003868, VkglTestCase_003868_1, VkglTestCase_003868_2);

#define VkglTestCase_003869_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003869_2 ".varied_rectangle.rg16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003869, VkglTestCase_003869_1, VkglTestCase_003869_2);

#define VkglTestCase_003870_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003870_2 ".varied_rectangle.rg16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003870, VkglTestCase_003870_1, VkglTestCase_003870_2);

#define VkglTestCase_003871_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003871_2 ".varied_rectangle.rg32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003871, VkglTestCase_003871_1, VkglTestCase_003871_2);

#define VkglTestCase_003872_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003872_2 ".varied_rectangle.rg32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003872, VkglTestCase_003872_1, VkglTestCase_003872_2);

#define VkglTestCase_003873_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003873_2 ".varied_rectangle.rgb8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003873, VkglTestCase_003873_1, VkglTestCase_003873_2);

#define VkglTestCase_003874_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003874_2 ".varied_rectangle.rgb8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003874, VkglTestCase_003874_1, VkglTestCase_003874_2);

#define VkglTestCase_003875_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003875_2 ".varied_rectangle.rgb16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003875, VkglTestCase_003875_1, VkglTestCase_003875_2);

#define VkglTestCase_003876_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003876_2 "varied_rectangle.rgb16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003876, VkglTestCase_003876_1, VkglTestCase_003876_2);

#define VkglTestCase_003877_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003877_2 ".varied_rectangle.rgb32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003877, VkglTestCase_003877_1, VkglTestCase_003877_2);

#define VkglTestCase_003878_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003878_2 "varied_rectangle.rgb32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003878, VkglTestCase_003878_1, VkglTestCase_003878_2);

#define VkglTestCase_003879_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003879_2 ".varied_rectangle.rgba8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003879, VkglTestCase_003879_1, VkglTestCase_003879_2);

#define VkglTestCase_003880_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003880_2 "varied_rectangle.rgba8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003880, VkglTestCase_003880_1, VkglTestCase_003880_2);

#define VkglTestCase_003881_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003881_2 "varied_rectangle.rgba16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003881, VkglTestCase_003881_1, VkglTestCase_003881_2);

#define VkglTestCase_003882_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003882_2 "varied_rectangle.rgba16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003882, VkglTestCase_003882_1, VkglTestCase_003882_2);

#define VkglTestCase_003883_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003883_2 "varied_rectangle.rgba32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003883, VkglTestCase_003883_1, VkglTestCase_003883_2);

#define VkglTestCase_003884_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003884_2 "varied_rectangle.rgba32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003884, VkglTestCase_003884_1, VkglTestCase_003884_2);

#define VkglTestCase_003885_1 "KHR-GLES3.packed_pixels.varie"
#define VkglTestCase_003885_2 "d_rectangle.depth_component16"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003885, VkglTestCase_003885_1, VkglTestCase_003885_2);

#define VkglTestCase_003886_1 "KHR-GLES3.packed_pixels.varie"
#define VkglTestCase_003886_2 "d_rectangle.depth_component24"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003886, VkglTestCase_003886_1, VkglTestCase_003886_2);

#define VkglTestCase_003887_1 "KHR-GLES3.packed_pixels.varie"
#define VkglTestCase_003887_2 "d_rectangle.depth_component32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003887, VkglTestCase_003887_1, VkglTestCase_003887_2);

#define VkglTestCase_003888_1 "KHR-GLES3.packed_pixels.vari"
#define VkglTestCase_003888_2 "ed_rectangle.depth24_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003888, VkglTestCase_003888_1, VkglTestCase_003888_2);

#define VkglTestCase_003889_1 "KHR-GLES3.packed_pixels.varie"
#define VkglTestCase_003889_2 "d_rectangle.depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003889, VkglTestCase_003889_1, VkglTestCase_003889_2);
