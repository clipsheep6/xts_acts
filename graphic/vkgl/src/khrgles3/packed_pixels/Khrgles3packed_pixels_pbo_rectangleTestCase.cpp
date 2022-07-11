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

#define VkglTestCase_003772_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003772_2 ".pbo_rectangle.luminance"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003772, VkglTestCase_003772_1, VkglTestCase_003772_2);

#define VkglTestCase_003773_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003773_2 "ls.pbo_rectangle.alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003773, VkglTestCase_003773_1, VkglTestCase_003773_2);

#define VkglTestCase_003774_1 "KHR-GLES3.packed_pixels.pb"
#define VkglTestCase_003774_2 "o_rectangle.luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003774, VkglTestCase_003774_1, VkglTestCase_003774_2);

#define VkglTestCase_003775_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003775_2 "els.pbo_rectangle.rgb"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003775, VkglTestCase_003775_1, VkglTestCase_003775_2);

#define VkglTestCase_003776_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003776_2 "ls.pbo_rectangle.rgba"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003776, VkglTestCase_003776_1, VkglTestCase_003776_2);

#define VkglTestCase_003777_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003777_2 "els.pbo_rectangle.r8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003777, VkglTestCase_003777_1, VkglTestCase_003777_2);

#define VkglTestCase_003778_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003778_2 ".pbo_rectangle.r8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003778, VkglTestCase_003778_1, VkglTestCase_003778_2);

#define VkglTestCase_003779_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003779_2 "els.pbo_rectangle.rg8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003779, VkglTestCase_003779_1, VkglTestCase_003779_2);

#define VkglTestCase_003780_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003780_2 ".pbo_rectangle.rg8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003780, VkglTestCase_003780_1, VkglTestCase_003780_2);

#define VkglTestCase_003781_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003781_2 "ls.pbo_rectangle.rgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003781, VkglTestCase_003781_1, VkglTestCase_003781_2);

#define VkglTestCase_003782_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003782_2 "pbo_rectangle.rgb8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003782, VkglTestCase_003782_1, VkglTestCase_003782_2);

#define VkglTestCase_003783_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003783_2 "s.pbo_rectangle.rgb565"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003783, VkglTestCase_003783_1, VkglTestCase_003783_2);

#define VkglTestCase_003784_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003784_2 "ls.pbo_rectangle.rgba4"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003784, VkglTestCase_003784_1, VkglTestCase_003784_2);

#define VkglTestCase_003785_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003785_2 "s.pbo_rectangle.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003785, VkglTestCase_003785_1, VkglTestCase_003785_2);

#define VkglTestCase_003786_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003786_2 "ls.pbo_rectangle.rgba8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003786, VkglTestCase_003786_1, VkglTestCase_003786_2);

#define VkglTestCase_003787_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003787_2 "pbo_rectangle.rgba8_snorm"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003787, VkglTestCase_003787_1, VkglTestCase_003787_2);

#define VkglTestCase_003788_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003788_2 ".pbo_rectangle.rgb10_a2"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003788, VkglTestCase_003788_1, VkglTestCase_003788_2);

#define VkglTestCase_003789_1 "KHR-GLES3.packed_pixels."
#define VkglTestCase_003789_2 "pbo_rectangle.rgb10_a2ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003789, VkglTestCase_003789_1, VkglTestCase_003789_2);

#define VkglTestCase_003790_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003790_2 "ls.pbo_rectangle.srgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003790, VkglTestCase_003790_1, VkglTestCase_003790_2);

#define VkglTestCase_003791_1 "KHR-GLES3.packed_pixels.p"
#define VkglTestCase_003791_2 "bo_rectangle.srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003791, VkglTestCase_003791_1, VkglTestCase_003791_2);

#define VkglTestCase_003792_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003792_2 "ls.pbo_rectangle.r16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003792, VkglTestCase_003792_1, VkglTestCase_003792_2);

#define VkglTestCase_003793_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003793_2 "ls.pbo_rectangle.rg16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003793, VkglTestCase_003793_1, VkglTestCase_003793_2);

#define VkglTestCase_003794_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003794_2 "s.pbo_rectangle.rgb16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003794, VkglTestCase_003794_1, VkglTestCase_003794_2);

#define VkglTestCase_003795_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003795_2 "s.pbo_rectangle.rgba16f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003795, VkglTestCase_003795_1, VkglTestCase_003795_2);

#define VkglTestCase_003796_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003796_2 "ls.pbo_rectangle.r32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003796, VkglTestCase_003796_1, VkglTestCase_003796_2);

#define VkglTestCase_003797_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003797_2 "ls.pbo_rectangle.rg32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003797, VkglTestCase_003797_1, VkglTestCase_003797_2);

#define VkglTestCase_003798_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003798_2 "s.pbo_rectangle.rgb32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003798, VkglTestCase_003798_1, VkglTestCase_003798_2);

#define VkglTestCase_003799_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003799_2 "s.pbo_rectangle.rgba32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003799, VkglTestCase_003799_1, VkglTestCase_003799_2);

#define VkglTestCase_003800_1 "KHR-GLES3.packed_pixels.pb"
#define VkglTestCase_003800_2 "o_rectangle.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003800, VkglTestCase_003800_1, VkglTestCase_003800_2);

#define VkglTestCase_003801_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003801_2 "s.pbo_rectangle.rgb9_e5"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003801, VkglTestCase_003801_1, VkglTestCase_003801_2);

#define VkglTestCase_003802_1 "KHR-GLES3.packed_pix"
#define VkglTestCase_003802_2 "els.pbo_rectangle.r8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003802, VkglTestCase_003802_1, VkglTestCase_003802_2);

#define VkglTestCase_003803_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003803_2 "ls.pbo_rectangle.r8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003803, VkglTestCase_003803_1, VkglTestCase_003803_2);

#define VkglTestCase_003804_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003804_2 "ls.pbo_rectangle.r16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003804, VkglTestCase_003804_1, VkglTestCase_003804_2);

#define VkglTestCase_003805_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003805_2 "ls.pbo_rectangle.r16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003805, VkglTestCase_003805_1, VkglTestCase_003805_2);

#define VkglTestCase_003806_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003806_2 "ls.pbo_rectangle.r32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003806, VkglTestCase_003806_1, VkglTestCase_003806_2);

#define VkglTestCase_003807_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003807_2 "ls.pbo_rectangle.r32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003807, VkglTestCase_003807_1, VkglTestCase_003807_2);

#define VkglTestCase_003808_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003808_2 "ls.pbo_rectangle.rg8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003808, VkglTestCase_003808_1, VkglTestCase_003808_2);

#define VkglTestCase_003809_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003809_2 "ls.pbo_rectangle.rg8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003809, VkglTestCase_003809_1, VkglTestCase_003809_2);

#define VkglTestCase_003810_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003810_2 "ls.pbo_rectangle.rg16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003810, VkglTestCase_003810_1, VkglTestCase_003810_2);

#define VkglTestCase_003811_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003811_2 "s.pbo_rectangle.rg16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003811, VkglTestCase_003811_1, VkglTestCase_003811_2);

#define VkglTestCase_003812_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003812_2 "ls.pbo_rectangle.rg32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003812, VkglTestCase_003812_1, VkglTestCase_003812_2);

#define VkglTestCase_003813_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003813_2 "s.pbo_rectangle.rg32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003813, VkglTestCase_003813_1, VkglTestCase_003813_2);

#define VkglTestCase_003814_1 "KHR-GLES3.packed_pixe"
#define VkglTestCase_003814_2 "ls.pbo_rectangle.rgb8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003814, VkglTestCase_003814_1, VkglTestCase_003814_2);

#define VkglTestCase_003815_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003815_2 "s.pbo_rectangle.rgb8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003815, VkglTestCase_003815_1, VkglTestCase_003815_2);

#define VkglTestCase_003816_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003816_2 "s.pbo_rectangle.rgb16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003816, VkglTestCase_003816_1, VkglTestCase_003816_2);

#define VkglTestCase_003817_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003817_2 "s.pbo_rectangle.rgb16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003817, VkglTestCase_003817_1, VkglTestCase_003817_2);

#define VkglTestCase_003818_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003818_2 "s.pbo_rectangle.rgb32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003818, VkglTestCase_003818_1, VkglTestCase_003818_2);

#define VkglTestCase_003819_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003819_2 "s.pbo_rectangle.rgb32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003819, VkglTestCase_003819_1, VkglTestCase_003819_2);

#define VkglTestCase_003820_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003820_2 "s.pbo_rectangle.rgba8i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003820, VkglTestCase_003820_1, VkglTestCase_003820_2);

#define VkglTestCase_003821_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003821_2 "s.pbo_rectangle.rgba8ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003821, VkglTestCase_003821_1, VkglTestCase_003821_2);

#define VkglTestCase_003822_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003822_2 "s.pbo_rectangle.rgba16i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003822, VkglTestCase_003822_1, VkglTestCase_003822_2);

#define VkglTestCase_003823_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003823_2 ".pbo_rectangle.rgba16ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003823, VkglTestCase_003823_1, VkglTestCase_003823_2);

#define VkglTestCase_003824_1 "KHR-GLES3.packed_pixel"
#define VkglTestCase_003824_2 "s.pbo_rectangle.rgba32i"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003824, VkglTestCase_003824_1, VkglTestCase_003824_2);

#define VkglTestCase_003825_1 "KHR-GLES3.packed_pixels"
#define VkglTestCase_003825_2 ".pbo_rectangle.rgba32ui"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003825, VkglTestCase_003825_1, VkglTestCase_003825_2);

#define VkglTestCase_003826_1 "KHR-GLES3.packed_pixels.pbo"
#define VkglTestCase_003826_2 "_rectangle.depth_component16"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003826, VkglTestCase_003826_1, VkglTestCase_003826_2);

#define VkglTestCase_003827_1 "KHR-GLES3.packed_pixels.pbo"
#define VkglTestCase_003827_2 "_rectangle.depth_component24"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003827, VkglTestCase_003827_1, VkglTestCase_003827_2);

#define VkglTestCase_003828_1 "KHR-GLES3.packed_pixels.pbo_"
#define VkglTestCase_003828_2 "rectangle.depth_component32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003828, VkglTestCase_003828_1, VkglTestCase_003828_2);

#define VkglTestCase_003829_1 "KHR-GLES3.packed_pixels.pbo"
#define VkglTestCase_003829_2 "_rectangle.depth24_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003829, VkglTestCase_003829_1, VkglTestCase_003829_2);

#define VkglTestCase_003830_1 "KHR-GLES3.packed_pixels.pbo"
#define VkglTestCase_003830_2 "_rectangle.depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003830, VkglTestCase_003830_1, VkglTestCase_003830_2);
