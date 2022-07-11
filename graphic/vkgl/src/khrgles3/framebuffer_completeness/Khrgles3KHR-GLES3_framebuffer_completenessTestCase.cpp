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

#define VkglTestCase_003908_1 "KHR-GLES3.framebuffer_completene"
#define VkglTestCase_003908_2 "ss.incomplete_missing_attachment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003908, VkglTestCase_003908_1, VkglTestCase_003908_2);

#define VkglTestCase_003909_1 "KHR-GLES3.framebuffer_completen"
#define VkglTestCase_003909_2 "ess.incomplete_image_zero_width"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003909, VkglTestCase_003909_1, VkglTestCase_003909_2);

#define VkglTestCase_003910_1 "KHR-GLES3.framebuffer_completen"
#define VkglTestCase_003910_2 "ess.incomplete_image_zero_height"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003910, VkglTestCase_003910_1, VkglTestCase_003910_2);

#define VkglTestCase_003911_1 "KHR-GLES3.framebuffer_completenes"
#define VkglTestCase_003911_2 "s.incomplete_texture_3d_layer_oob"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003911, VkglTestCase_003911_1, VkglTestCase_003911_2);

#define VkglTestCase_003912_1 "KHR-GLES3.framebuffer_completenes"
#define VkglTestCase_003912_2 "s.incomplete_texture_2d_layer_oob"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003912, VkglTestCase_003912_1, VkglTestCase_003912_2);

#define VkglTestCase_003913_1 "KHR-GLES3.framebuffer_completeness"
#define VkglTestCase_003913_2 ".incomplete_texture_2d_mm_layer_oob"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003913, VkglTestCase_003913_1, VkglTestCase_003913_2);

#define VkglTestCase_003914_1 "KHR-GLES3.framebuffer_completeness.mut"
#define VkglTestCase_003914_2 "able_nbl_texture_expect_mipmap_complete"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003914, VkglTestCase_003914_1, VkglTestCase_003914_2);

#define VkglTestCase_003915_1 "KHR-GLES3.framebuffer_completeness.mu"
#define VkglTestCase_003915_2 "table_nbl_texture_expect_cube_complete"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003915, VkglTestCase_003915_1, VkglTestCase_003915_2);

#define VkglTestCase_003916_1 "KHR-GLES3.framebuffer_completeness"
#define VkglTestCase_003916_2 ".expect_renderable_internal_format"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003916, VkglTestCase_003916_1, VkglTestCase_003916_2);

#define VkglTestCase_003917_1 "KHR-GLES3.framebuffer_completenes"
#define VkglTestCase_003917_2 "s.all_rbos_expect_same_numsamples"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003917, VkglTestCase_003917_1, VkglTestCase_003917_2);

#define VkglTestCase_003918_1 "KHR-GLES3.framebuffer_completeness.r"
#define VkglTestCase_003918_2 "bo_and_texture_expect_zero_numsamples"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003918, VkglTestCase_003918_1, VkglTestCase_003918_2);

#define VkglTestCase_003919_1 "KHR-GLES3.framebuffer_com"
#define VkglTestCase_003919_2 "pleteness.status_tracking"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003919, VkglTestCase_003919_1, VkglTestCase_003919_2);

#define VkglTestCase_003920_1 "KHR-GLES3.framebuffer_completeness.mu"
#define VkglTestCase_003920_2 "table_texture_missing_attachment_level"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003920, VkglTestCase_003920_1, VkglTestCase_003920_2);

#define VkglTestCase_003921_1 "KHR-GLES3.framebuffer_completeness.imm"
#define VkglTestCase_003921_2 "utable_texture_any_level_as_attachment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003921, VkglTestCase_003921_1, VkglTestCase_003921_2);
