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

#define VkglTestCase_001781_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001781_2 ".blend_all.GL_MULTIPLY_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001781, VkglTestCase_001781_1, VkglTestCase_001781_2);

#define VkglTestCase_001782_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001782_2 "d.blend_all.GL_SCREEN_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001782, VkglTestCase_001782_1, VkglTestCase_001782_2);

#define VkglTestCase_001783_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001783_2 ".blend_all.GL_OVERLAY_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001783, VkglTestCase_001783_1, VkglTestCase_001783_2);

#define VkglTestCase_001784_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001784_2 "d.blend_all.GL_DARKEN_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001784, VkglTestCase_001784_1, VkglTestCase_001784_2);

#define VkglTestCase_001785_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001785_2 ".blend_all.GL_LIGHTEN_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001785, VkglTestCase_001785_1, VkglTestCase_001785_2);

#define VkglTestCase_001786_1 "KHR-GLES31.core.blend_equation_advanced."
#define VkglTestCase_001786_2 "blend_all.GL_COLORDODGE_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001786, VkglTestCase_001786_1, VkglTestCase_001786_2);

#define VkglTestCase_001787_1 "KHR-GLES31.core.blend_equation_advanced."
#define VkglTestCase_001787_2 "blend_all.GL_COLORBURN_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001787, VkglTestCase_001787_1, VkglTestCase_001787_2);

#define VkglTestCase_001788_1 "KHR-GLES31.core.blend_equation_advanced."
#define VkglTestCase_001788_2 "blend_all.GL_HARDLIGHT_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001788, VkglTestCase_001788_1, VkglTestCase_001788_2);

#define VkglTestCase_001789_1 "KHR-GLES31.core.blend_equation_advanced."
#define VkglTestCase_001789_2 "blend_all.GL_SOFTLIGHT_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001789, VkglTestCase_001789_1, VkglTestCase_001789_2);

#define VkglTestCase_001790_1 "KHR-GLES31.core.blend_equation_advanced."
#define VkglTestCase_001790_2 "blend_all.GL_DIFFERENCE_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001790, VkglTestCase_001790_1, VkglTestCase_001790_2);

#define VkglTestCase_001791_1 "KHR-GLES31.core.blend_equation_advanced."
#define VkglTestCase_001791_2 "blend_all.GL_EXCLUSION_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001791, VkglTestCase_001791_1, VkglTestCase_001791_2);

#define VkglTestCase_001792_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001792_2 ".blend_all.GL_HSL_HUE_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001792, VkglTestCase_001792_1, VkglTestCase_001792_2);

#define VkglTestCase_001793_1 "KHR-GLES31.core.blend_equation_advanced.bl"
#define VkglTestCase_001793_2 "end_all.GL_HSL_SATURATION_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001793, VkglTestCase_001793_1, VkglTestCase_001793_2);

#define VkglTestCase_001794_1 "KHR-GLES31.core.blend_equation_advanced."
#define VkglTestCase_001794_2 "blend_all.GL_HSL_COLOR_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001794, VkglTestCase_001794_1, VkglTestCase_001794_2);

#define VkglTestCase_001795_1 "KHR-GLES31.core.blend_equation_advanced.bl"
#define VkglTestCase_001795_2 "end_all.GL_HSL_LUMINOSITY_KHR_all_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001795, VkglTestCase_001795_1, VkglTestCase_001795_2);
