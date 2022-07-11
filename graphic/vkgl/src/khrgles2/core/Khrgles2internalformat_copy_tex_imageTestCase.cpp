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
#include "../Khrgles2BaseFunc.h"
#include "../ActsKhrgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000449_1 "KHR-GLES2.core.internalf"
#define VkglTestCase_000449_2 "ormat.copy_tex_image.rgb"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000449, VkglTestCase_000449_1, VkglTestCase_000449_2);

#define VkglTestCase_000450_1 "KHR-GLES2.core.internalf"
#define VkglTestCase_000450_2 "ormat.copy_tex_image.rgba"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000450, VkglTestCase_000450_1, VkglTestCase_000450_2);

#define VkglTestCase_000451_1 "KHR-GLES2.core.internalfo"
#define VkglTestCase_000451_2 "rmat.copy_tex_image.alpha"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000451, VkglTestCase_000451_1, VkglTestCase_000451_2);

#define VkglTestCase_000452_1 "KHR-GLES2.core.internalform"
#define VkglTestCase_000452_2 "at.copy_tex_image.luminance"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000452, VkglTestCase_000452_1, VkglTestCase_000452_2);

#define VkglTestCase_000453_1 "KHR-GLES2.core.internalformat."
#define VkglTestCase_000453_2 "copy_tex_image.luminance_alpha"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000453, VkglTestCase_000453_1, VkglTestCase_000453_2);

#define VkglTestCase_000454_1 "KHR-GLES2.core.internalfor"
#define VkglTestCase_000454_2 "mat.copy_tex_image.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000454, VkglTestCase_000454_1, VkglTestCase_000454_2);

#define VkglTestCase_000455_1 "KHR-GLES2.core.internalfo"
#define VkglTestCase_000455_2 "rmat.copy_tex_image.rgb565"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000455, VkglTestCase_000455_1, VkglTestCase_000455_2);

#define VkglTestCase_000456_1 "KHR-GLES2.core.internalfo"
#define VkglTestCase_000456_2 "rmat.copy_tex_image.rgba4"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000456, VkglTestCase_000456_1, VkglTestCase_000456_2);

#define VkglTestCase_000457_1 "KHR-GLES2.core.internalformat.cop"
#define VkglTestCase_000457_2 "y_tex_image.luminance4_alpha4_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000457, VkglTestCase_000457_1, VkglTestCase_000457_2);

#define VkglTestCase_000458_1 "KHR-GLES2.core.internalformat.cop"
#define VkglTestCase_000458_2 "y_tex_image.luminance8_alpha8_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000458, VkglTestCase_000458_1, VkglTestCase_000458_2);

#define VkglTestCase_000459_1 "KHR-GLES2.core.internalformat"
#define VkglTestCase_000459_2 ".copy_tex_image.luminance8_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000459, VkglTestCase_000459_1, VkglTestCase_000459_2);

#define VkglTestCase_000460_1 "KHR-GLES2.core.internalform"
#define VkglTestCase_000460_2 "at.copy_tex_image.alpha8_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000460, VkglTestCase_000460_1, VkglTestCase_000460_2);

#define VkglTestCase_000461_1 "KHR-GLES2.core.internalfor"
#define VkglTestCase_000461_2 "mat.copy_tex_image.rgb10_a2"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000461, VkglTestCase_000461_1, VkglTestCase_000461_2);

#define VkglTestCase_000462_1 "KHR-GLES2.core.internalfo"
#define VkglTestCase_000462_2 "rmat.copy_tex_image.rgb10"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000462, VkglTestCase_000462_1, VkglTestCase_000462_2);
