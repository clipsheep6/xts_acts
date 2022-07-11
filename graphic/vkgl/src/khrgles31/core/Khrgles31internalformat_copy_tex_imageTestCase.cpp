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
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002349_1 "KHR-GLES31.core.internal"
#define VkglTestCase_002349_2 "format.copy_tex_image.rgb"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002349, VkglTestCase_002349_1, VkglTestCase_002349_2);

#define VkglTestCase_002350_1 "KHR-GLES31.core.internalf"
#define VkglTestCase_002350_2 "ormat.copy_tex_image.rgba"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002350, VkglTestCase_002350_1, VkglTestCase_002350_2);

#define VkglTestCase_002351_1 "KHR-GLES31.core.internalf"
#define VkglTestCase_002351_2 "ormat.copy_tex_image.alpha"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002351, VkglTestCase_002351_1, VkglTestCase_002351_2);

#define VkglTestCase_002352_1 "KHR-GLES31.core.internalfor"
#define VkglTestCase_002352_2 "mat.copy_tex_image.luminance"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002352, VkglTestCase_002352_1, VkglTestCase_002352_2);

#define VkglTestCase_002353_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002353_2 ".copy_tex_image.luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002353, VkglTestCase_002353_1, VkglTestCase_002353_2);

#define VkglTestCase_002354_1 "KHR-GLES31.core.internalf"
#define VkglTestCase_002354_2 "ormat.copy_tex_image.rgba4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002354, VkglTestCase_002354_1, VkglTestCase_002354_2);

#define VkglTestCase_002355_1 "KHR-GLES31.core.internalfo"
#define VkglTestCase_002355_2 "rmat.copy_tex_image.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002355, VkglTestCase_002355_1, VkglTestCase_002355_2);

#define VkglTestCase_002356_1 "KHR-GLES31.core.internalfo"
#define VkglTestCase_002356_2 "rmat.copy_tex_image.rgb565"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002356, VkglTestCase_002356_1, VkglTestCase_002356_2);

#define VkglTestCase_002357_1 "KHR-GLES31.core.internalf"
#define VkglTestCase_002357_2 "ormat.copy_tex_image.rgba8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002357, VkglTestCase_002357_1, VkglTestCase_002357_2);

#define VkglTestCase_002358_1 "KHR-GLES31.core.internalf"
#define VkglTestCase_002358_2 "ormat.copy_tex_image.rgb8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002358, VkglTestCase_002358_1, VkglTestCase_002358_2);

#define VkglTestCase_002359_1 "KHR-GLES31.core.internalforma"
#define VkglTestCase_002359_2 "t.copy_tex_image.srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002359, VkglTestCase_002359_1, VkglTestCase_002359_2);

#define VkglTestCase_002360_1 "KHR-GLES31.core.internalf"
#define VkglTestCase_002360_2 "ormat.copy_tex_image.srgb8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002360, VkglTestCase_002360_1, VkglTestCase_002360_2);

#define VkglTestCase_002361_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002361_2 ".copy_tex_image.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002361, VkglTestCase_002361_1, VkglTestCase_002361_2);
