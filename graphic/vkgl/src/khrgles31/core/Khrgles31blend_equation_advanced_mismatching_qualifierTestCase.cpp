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

#define VkglTestCase_001748_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001748_2 "d.mismatching_qualifier.GL_MULTIPLY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001748, VkglTestCase_001748_1, VkglTestCase_001748_2);

#define VkglTestCase_001749_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001749_2 "ed.mismatching_qualifier.GL_SCREEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001749, VkglTestCase_001749_1, VkglTestCase_001749_2);

#define VkglTestCase_001750_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001750_2 "d.mismatching_qualifier.GL_OVERLAY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001750, VkglTestCase_001750_1, VkglTestCase_001750_2);

#define VkglTestCase_001751_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001751_2 "ed.mismatching_qualifier.GL_DARKEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001751, VkglTestCase_001751_1, VkglTestCase_001751_2);

#define VkglTestCase_001752_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001752_2 "d.mismatching_qualifier.GL_LIGHTEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001752, VkglTestCase_001752_1, VkglTestCase_001752_2);

#define VkglTestCase_001753_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001753_2 ".mismatching_qualifier.GL_COLORDODGE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001753, VkglTestCase_001753_1, VkglTestCase_001753_2);

#define VkglTestCase_001754_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001754_2 ".mismatching_qualifier.GL_COLORBURN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001754, VkglTestCase_001754_1, VkglTestCase_001754_2);

#define VkglTestCase_001755_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001755_2 ".mismatching_qualifier.GL_HARDLIGHT_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001755, VkglTestCase_001755_1, VkglTestCase_001755_2);

#define VkglTestCase_001756_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001756_2 ".mismatching_qualifier.GL_SOFTLIGHT_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001756, VkglTestCase_001756_1, VkglTestCase_001756_2);

#define VkglTestCase_001757_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001757_2 ".mismatching_qualifier.GL_DIFFERENCE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001757, VkglTestCase_001757_1, VkglTestCase_001757_2);

#define VkglTestCase_001758_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001758_2 ".mismatching_qualifier.GL_EXCLUSION_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001758, VkglTestCase_001758_1, VkglTestCase_001758_2);

#define VkglTestCase_001759_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001759_2 "d.mismatching_qualifier.GL_HSL_HUE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001759, VkglTestCase_001759_1, VkglTestCase_001759_2);

#define VkglTestCase_001760_1 "KHR-GLES31.core.blend_equation_advanced.m"
#define VkglTestCase_001760_2 "ismatching_qualifier.GL_HSL_SATURATION_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001760, VkglTestCase_001760_1, VkglTestCase_001760_2);

#define VkglTestCase_001761_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001761_2 ".mismatching_qualifier.GL_HSL_COLOR_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001761, VkglTestCase_001761_1, VkglTestCase_001761_2);

#define VkglTestCase_001762_1 "KHR-GLES31.core.blend_equation_advanced.m"
#define VkglTestCase_001762_2 "ismatching_qualifier.GL_HSL_LUMINOSITY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001762, VkglTestCase_001762_1, VkglTestCase_001762_2);
