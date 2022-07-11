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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001113_1 "KHR-GLES32.core.internal"
#define VkglTestCase_001113_2 "format.copy_tex_image.rgb"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001113, VkglTestCase_001113_1, VkglTestCase_001113_2);

#define VkglTestCase_001114_1 "KHR-GLES32.core.internalf"
#define VkglTestCase_001114_2 "ormat.copy_tex_image.rgba"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001114, VkglTestCase_001114_1, VkglTestCase_001114_2);

#define VkglTestCase_001115_1 "KHR-GLES32.core.internalf"
#define VkglTestCase_001115_2 "ormat.copy_tex_image.alpha"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001115, VkglTestCase_001115_1, VkglTestCase_001115_2);

#define VkglTestCase_001116_1 "KHR-GLES32.core.internalfor"
#define VkglTestCase_001116_2 "mat.copy_tex_image.luminance"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001116, VkglTestCase_001116_1, VkglTestCase_001116_2);

#define VkglTestCase_001117_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001117_2 ".copy_tex_image.luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001117, VkglTestCase_001117_1, VkglTestCase_001117_2);

#define VkglTestCase_001118_1 "KHR-GLES32.core.internalf"
#define VkglTestCase_001118_2 "ormat.copy_tex_image.rgba4"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001118, VkglTestCase_001118_1, VkglTestCase_001118_2);

#define VkglTestCase_001119_1 "KHR-GLES32.core.internalfo"
#define VkglTestCase_001119_2 "rmat.copy_tex_image.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001119, VkglTestCase_001119_1, VkglTestCase_001119_2);

#define VkglTestCase_001120_1 "KHR-GLES32.core.internalfo"
#define VkglTestCase_001120_2 "rmat.copy_tex_image.rgb565"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001120, VkglTestCase_001120_1, VkglTestCase_001120_2);

#define VkglTestCase_001121_1 "KHR-GLES32.core.internalf"
#define VkglTestCase_001121_2 "ormat.copy_tex_image.rgba8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001121, VkglTestCase_001121_1, VkglTestCase_001121_2);

#define VkglTestCase_001122_1 "KHR-GLES32.core.internalf"
#define VkglTestCase_001122_2 "ormat.copy_tex_image.rgb8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001122, VkglTestCase_001122_1, VkglTestCase_001122_2);

#define VkglTestCase_001123_1 "KHR-GLES32.core.internalforma"
#define VkglTestCase_001123_2 "t.copy_tex_image.srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001123, VkglTestCase_001123_1, VkglTestCase_001123_2);

#define VkglTestCase_001124_1 "KHR-GLES32.core.internalf"
#define VkglTestCase_001124_2 "ormat.copy_tex_image.srgb8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001124, VkglTestCase_001124_1, VkglTestCase_001124_2);

#define VkglTestCase_001125_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001125_2 ".copy_tex_image.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001125, VkglTestCase_001125_1, VkglTestCase_001125_2);
