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

#define VkglTestCase_003688_1 "KHR-GLES3.core.internalf"
#define VkglTestCase_003688_2 "ormat.copy_tex_image.rgb"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003688, VkglTestCase_003688_1, VkglTestCase_003688_2);

#define VkglTestCase_003689_1 "KHR-GLES3.core.internalf"
#define VkglTestCase_003689_2 "ormat.copy_tex_image.rgba"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003689, VkglTestCase_003689_1, VkglTestCase_003689_2);

#define VkglTestCase_003690_1 "KHR-GLES3.core.internalfo"
#define VkglTestCase_003690_2 "rmat.copy_tex_image.alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003690, VkglTestCase_003690_1, VkglTestCase_003690_2);

#define VkglTestCase_003691_1 "KHR-GLES3.core.internalform"
#define VkglTestCase_003691_2 "at.copy_tex_image.luminance"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003691, VkglTestCase_003691_1, VkglTestCase_003691_2);

#define VkglTestCase_003692_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003692_2 "copy_tex_image.luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003692, VkglTestCase_003692_1, VkglTestCase_003692_2);

#define VkglTestCase_003693_1 "KHR-GLES3.core.internalfo"
#define VkglTestCase_003693_2 "rmat.copy_tex_image.rgba4"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003693, VkglTestCase_003693_1, VkglTestCase_003693_2);

#define VkglTestCase_003694_1 "KHR-GLES3.core.internalfor"
#define VkglTestCase_003694_2 "mat.copy_tex_image.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003694, VkglTestCase_003694_1, VkglTestCase_003694_2);

#define VkglTestCase_003695_1 "KHR-GLES3.core.internalfo"
#define VkglTestCase_003695_2 "rmat.copy_tex_image.rgb565"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003695, VkglTestCase_003695_1, VkglTestCase_003695_2);

#define VkglTestCase_003696_1 "KHR-GLES3.core.internalfo"
#define VkglTestCase_003696_2 "rmat.copy_tex_image.rgba8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003696, VkglTestCase_003696_1, VkglTestCase_003696_2);

#define VkglTestCase_003697_1 "KHR-GLES3.core.internalf"
#define VkglTestCase_003697_2 "ormat.copy_tex_image.rgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003697, VkglTestCase_003697_1, VkglTestCase_003697_2);

#define VkglTestCase_003698_1 "KHR-GLES3.core.internalforma"
#define VkglTestCase_003698_2 "t.copy_tex_image.srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003698, VkglTestCase_003698_1, VkglTestCase_003698_2);

#define VkglTestCase_003699_1 "KHR-GLES3.core.internalfo"
#define VkglTestCase_003699_2 "rmat.copy_tex_image.srgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003699, VkglTestCase_003699_1, VkglTestCase_003699_2);

#define VkglTestCase_003700_1 "KHR-GLES3.core.internalformat"
#define VkglTestCase_003700_2 ".copy_tex_image.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003700, VkglTestCase_003700_1, VkglTestCase_003700_2);
