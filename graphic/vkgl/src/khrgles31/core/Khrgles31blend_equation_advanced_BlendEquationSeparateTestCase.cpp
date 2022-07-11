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

#define VkglTestCase_001731_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001731_2 "d.BlendEquationSeparate.GL_MULTIPLY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001731, VkglTestCase_001731_1, VkglTestCase_001731_2);

#define VkglTestCase_001732_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001732_2 "ed.BlendEquationSeparate.GL_SCREEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001732, VkglTestCase_001732_1, VkglTestCase_001732_2);

#define VkglTestCase_001733_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001733_2 "d.BlendEquationSeparate.GL_OVERLAY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001733, VkglTestCase_001733_1, VkglTestCase_001733_2);

#define VkglTestCase_001734_1 "KHR-GLES31.core.blend_equation_advanc"
#define VkglTestCase_001734_2 "ed.BlendEquationSeparate.GL_DARKEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001734, VkglTestCase_001734_1, VkglTestCase_001734_2);

#define VkglTestCase_001735_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001735_2 "d.BlendEquationSeparate.GL_LIGHTEN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001735, VkglTestCase_001735_1, VkglTestCase_001735_2);

#define VkglTestCase_001736_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001736_2 ".BlendEquationSeparate.GL_COLORDODGE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001736, VkglTestCase_001736_1, VkglTestCase_001736_2);

#define VkglTestCase_001737_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001737_2 ".BlendEquationSeparate.GL_COLORBURN_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001737, VkglTestCase_001737_1, VkglTestCase_001737_2);

#define VkglTestCase_001738_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001738_2 ".BlendEquationSeparate.GL_HARDLIGHT_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001738, VkglTestCase_001738_1, VkglTestCase_001738_2);

#define VkglTestCase_001739_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001739_2 ".BlendEquationSeparate.GL_SOFTLIGHT_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001739, VkglTestCase_001739_1, VkglTestCase_001739_2);

#define VkglTestCase_001740_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001740_2 ".BlendEquationSeparate.GL_DIFFERENCE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001740, VkglTestCase_001740_1, VkglTestCase_001740_2);

#define VkglTestCase_001741_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001741_2 ".BlendEquationSeparate.GL_EXCLUSION_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001741, VkglTestCase_001741_1, VkglTestCase_001741_2);

#define VkglTestCase_001742_1 "KHR-GLES31.core.blend_equation_advance"
#define VkglTestCase_001742_2 "d.BlendEquationSeparate.GL_HSL_HUE_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001742, VkglTestCase_001742_1, VkglTestCase_001742_2);

#define VkglTestCase_001743_1 "KHR-GLES31.core.blend_equation_advanced.B"
#define VkglTestCase_001743_2 "lendEquationSeparate.GL_HSL_SATURATION_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001743, VkglTestCase_001743_1, VkglTestCase_001743_2);

#define VkglTestCase_001744_1 "KHR-GLES31.core.blend_equation_advanced"
#define VkglTestCase_001744_2 ".BlendEquationSeparate.GL_HSL_COLOR_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001744, VkglTestCase_001744_1, VkglTestCase_001744_2);

#define VkglTestCase_001745_1 "KHR-GLES31.core.blend_equation_advanced.B"
#define VkglTestCase_001745_2 "lendEquationSeparate.GL_HSL_LUMINOSITY_KHR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001745, VkglTestCase_001745_1, VkglTestCase_001745_2);
