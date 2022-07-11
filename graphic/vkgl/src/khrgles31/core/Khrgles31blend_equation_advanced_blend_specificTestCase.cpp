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
#include "../ActsKhrgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001796_1 "KHR-GLES31.core.blend_equation_adva"
#define VkglTestCase_001796_2 "nced.blend_specific.GL_MULTIPLY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001796, VkglTestCase_001796_1, VkglTestCase_001796_2);

#define VkglTestCase_001797_1 "KHR-GLES31.core.blend_equation_adv"
#define VkglTestCase_001797_2 "anced.blend_specific.GL_SCREEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001797, VkglTestCase_001797_1, VkglTestCase_001797_2);

#define VkglTestCase_001798_1 "KHR-GLES31.core.blend_equation_adv"
#define VkglTestCase_001798_2 "anced.blend_specific.GL_OVERLAY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001798, VkglTestCase_001798_1, VkglTestCase_001798_2);

#define VkglTestCase_001799_1 "KHR-GLES31.core.blend_equation_adv"
#define VkglTestCase_001799_2 "anced.blend_specific.GL_DARKEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001799, VkglTestCase_001799_1, VkglTestCase_001799_2);

#define VkglTestCase_001800_1 "KHR-GLES31.core.blend_equation_adv"
#define VkglTestCase_001800_2 "anced.blend_specific.GL_LIGHTEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001800, VkglTestCase_001800_1, VkglTestCase_001800_2);

#define VkglTestCase_001801_1 "KHR-GLES31.core.blend_equation_advan"
#define VkglTestCase_001801_2 "ced.blend_specific.GL_COLORDODGE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001801, VkglTestCase_001801_1, VkglTestCase_001801_2);

#define VkglTestCase_001802_1 "KHR-GLES31.core.blend_equation_adva"
#define VkglTestCase_001802_2 "nced.blend_specific.GL_COLORBURN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001802, VkglTestCase_001802_1, VkglTestCase_001802_2);

#define VkglTestCase_001803_1 "KHR-GLES31.core.blend_equation_adva"
#define VkglTestCase_001803_2 "nced.blend_specific.GL_HARDLIGHT_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001803, VkglTestCase_001803_1, VkglTestCase_001803_2);

#define VkglTestCase_001804_1 "KHR-GLES31.core.blend_equation_adva"
#define VkglTestCase_001804_2 "nced.blend_specific.GL_SOFTLIGHT_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001804, VkglTestCase_001804_1, VkglTestCase_001804_2);

#define VkglTestCase_001805_1 "KHR-GLES31.core.blend_equation_advan"
#define VkglTestCase_001805_2 "ced.blend_specific.GL_DIFFERENCE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001805, VkglTestCase_001805_1, VkglTestCase_001805_2);

#define VkglTestCase_001806_1 "KHR-GLES31.core.blend_equation_adva"
#define VkglTestCase_001806_2 "nced.blend_specific.GL_EXCLUSION_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001806, VkglTestCase_001806_1, VkglTestCase_001806_2);

#define VkglTestCase_001807_1 "KHR-GLES31.core.blend_equation_adv"
#define VkglTestCase_001807_2 "anced.blend_specific.GL_HSL_HUE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001807, VkglTestCase_001807_1, VkglTestCase_001807_2);

#define VkglTestCase_001808_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001808_2 "d.blend_specific.GL_HSL_SATURATION_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001808, VkglTestCase_001808_1, VkglTestCase_001808_2);

#define VkglTestCase_001809_1 "KHR-GLES31.core.blend_equation_adva"
#define VkglTestCase_001809_2 "nced.blend_specific.GL_HSL_COLOR_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001809, VkglTestCase_001809_1, VkglTestCase_001809_2);

#define VkglTestCase_001810_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001810_2 "d.blend_specific.GL_HSL_LUMINOSITY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001810, VkglTestCase_001810_1, VkglTestCase_001810_2);
