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

#define VkglTestCase_001149_1 "KHR-GLES32.core.framebuffer_complet"
#define VkglTestCase_001149_2 "eness.incomplete_missing_attachment"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001149, VkglTestCase_001149_1, VkglTestCase_001149_2);

#define VkglTestCase_001150_1 "KHR-GLES32.core.framebuffer_comple"
#define VkglTestCase_001150_2 "teness.incomplete_image_zero_width"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001150, VkglTestCase_001150_1, VkglTestCase_001150_2);

#define VkglTestCase_001151_1 "KHR-GLES32.core.framebuffer_comple"
#define VkglTestCase_001151_2 "teness.incomplete_image_zero_height"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001151, VkglTestCase_001151_1, VkglTestCase_001151_2);

#define VkglTestCase_001152_1 "KHR-GLES32.core.framebuffer_complete"
#define VkglTestCase_001152_2 "ness.incomplete_texture_3d_layer_oob"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001152, VkglTestCase_001152_1, VkglTestCase_001152_2);

#define VkglTestCase_001153_1 "KHR-GLES32.core.framebuffer_complete"
#define VkglTestCase_001153_2 "ness.incomplete_texture_2d_layer_oob"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001153, VkglTestCase_001153_1, VkglTestCase_001153_2);

#define VkglTestCase_001154_1 "KHR-GLES32.core.framebuffer_completen"
#define VkglTestCase_001154_2 "ess.incomplete_texture_2d_mm_layer_oob"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001154, VkglTestCase_001154_1, VkglTestCase_001154_2);

#define VkglTestCase_001155_1 "KHR-GLES32.core.framebuffer_completeness."
#define VkglTestCase_001155_2 "mutable_nbl_texture_expect_mipmap_complete"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001155, VkglTestCase_001155_1, VkglTestCase_001155_2);

#define VkglTestCase_001156_1 "KHR-GLES32.core.framebuffer_completeness"
#define VkglTestCase_001156_2 ".mutable_nbl_texture_expect_cube_complete"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001156, VkglTestCase_001156_1, VkglTestCase_001156_2);

#define VkglTestCase_001157_1 "KHR-GLES32.core.framebuffer_completen"
#define VkglTestCase_001157_2 "ess.expect_renderable_internal_format"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001157, VkglTestCase_001157_1, VkglTestCase_001157_2);

#define VkglTestCase_001158_1 "KHR-GLES32.core.framebuffer_complete"
#define VkglTestCase_001158_2 "ness.all_rbos_expect_same_numsamples"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001158, VkglTestCase_001158_1, VkglTestCase_001158_2);

#define VkglTestCase_001159_1 "KHR-GLES32.core.framebuffer_completenes"
#define VkglTestCase_001159_2 "s.rbo_and_texture_expect_zero_numsamples"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001159, VkglTestCase_001159_1, VkglTestCase_001159_2);

#define VkglTestCase_001160_1 "KHR-GLES32.core.framebuffer_comp"
#define VkglTestCase_001160_2 "leteness.expect_equal_numsamples"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001160, VkglTestCase_001160_1, VkglTestCase_001160_2);

#define VkglTestCase_001161_1 "KHR-GLES32.core.framebuffer_"
#define VkglTestCase_001161_2 "completeness.status_tracking"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001161, VkglTestCase_001161_1, VkglTestCase_001161_2);

#define VkglTestCase_001162_1 "KHR-GLES32.core.framebuffer_completeness"
#define VkglTestCase_001162_2 ".mutable_texture_missing_attachment_level"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001162, VkglTestCase_001162_1, VkglTestCase_001162_2);

#define VkglTestCase_001163_1 "KHR-GLES32.core.framebuffer_completeness."
#define VkglTestCase_001163_2 "immutable_texture_any_level_as_attachment"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001163, VkglTestCase_001163_1, VkglTestCase_001163_2);

#define VkglTestCase_001164_1 "KHR-GLES32.core.framebuffer_completeness.cube"
#define VkglTestCase_001164_2 "_map_layered_attachment_valid_size_and_format"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001164, VkglTestCase_001164_1, VkglTestCase_001164_2);

#define VkglTestCase_001165_1 "KHR-GLES32.core.framebuffer_completeness.cu"
#define VkglTestCase_001165_2 "be_map_layered_attachment_different_formats"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001165, VkglTestCase_001165_1, VkglTestCase_001165_2);

#define VkglTestCase_001166_1 "KHR-GLES32.core.framebuffer_completeness.c"
#define VkglTestCase_001166_2 "ube_map_layered_attachment_different_sizes"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001166, VkglTestCase_001166_1, VkglTestCase_001166_2);
