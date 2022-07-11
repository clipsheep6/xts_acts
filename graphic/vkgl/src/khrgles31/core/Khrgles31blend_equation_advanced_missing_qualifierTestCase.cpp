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

#define VkglTestCase_001763_1 "KHR-GLES31.core.blend_equation_advan"
#define VkglTestCase_001763_2 "ced.missing_qualifier.GL_MULTIPLY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001763, VkglTestCase_001763_1, VkglTestCase_001763_2);

#define VkglTestCase_001764_1 "KHR-GLES31.core.blend_equation_adva"
#define VkglTestCase_001764_2 "nced.missing_qualifier.GL_SCREEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001764, VkglTestCase_001764_1, VkglTestCase_001764_2);

#define VkglTestCase_001765_1 "KHR-GLES31.core.blend_equation_advan"
#define VkglTestCase_001765_2 "ced.missing_qualifier.GL_OVERLAY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001765, VkglTestCase_001765_1, VkglTestCase_001765_2);

#define VkglTestCase_001766_1 "KHR-GLES31.core.blend_equation_adva"
#define VkglTestCase_001766_2 "nced.missing_qualifier.GL_DARKEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001766, VkglTestCase_001766_1, VkglTestCase_001766_2);

#define VkglTestCase_001767_1 "KHR-GLES31.core.blend_equation_advan"
#define VkglTestCase_001767_2 "ced.missing_qualifier.GL_LIGHTEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001767, VkglTestCase_001767_1, VkglTestCase_001767_2);

#define VkglTestCase_001768_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001768_2 "ed.missing_qualifier.GL_COLORDODGE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001768, VkglTestCase_001768_1, VkglTestCase_001768_2);

#define VkglTestCase_001769_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001769_2 "ed.missing_qualifier.GL_COLORBURN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001769, VkglTestCase_001769_1, VkglTestCase_001769_2);

#define VkglTestCase_001770_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001770_2 "ed.missing_qualifier.GL_HARDLIGHT_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001770, VkglTestCase_001770_1, VkglTestCase_001770_2);

#define VkglTestCase_001771_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001771_2 "ed.missing_qualifier.GL_SOFTLIGHT_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001771, VkglTestCase_001771_1, VkglTestCase_001771_2);

#define VkglTestCase_001772_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001772_2 "ed.missing_qualifier.GL_DIFFERENCE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001772, VkglTestCase_001772_1, VkglTestCase_001772_2);

#define VkglTestCase_001773_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001773_2 "ed.missing_qualifier.GL_EXCLUSION_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001773, VkglTestCase_001773_1, VkglTestCase_001773_2);

#define VkglTestCase_001774_1 "KHR-GLES31.core.blend_equation_advan"
#define VkglTestCase_001774_2 "ced.missing_qualifier.GL_HSL_HUE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001774, VkglTestCase_001774_1, VkglTestCase_001774_2);

#define VkglTestCase_001775_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001775_2 ".missing_qualifier.GL_HSL_SATURATION_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001775, VkglTestCase_001775_1, VkglTestCase_001775_2);

#define VkglTestCase_001776_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001776_2 "ed.missing_qualifier.GL_HSL_COLOR_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001776, VkglTestCase_001776_1, VkglTestCase_001776_2);

#define VkglTestCase_001777_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001777_2 ".missing_qualifier.GL_HSL_LUMINOSITY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001777, VkglTestCase_001777_1, VkglTestCase_001777_2);
