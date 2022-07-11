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
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000002_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage2DMult"
#define VkglTestCase_000002_2 "isample.multisample_texture_tex_storage_2d_general_samples_number"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000002, VkglTestCase_000002_1, VkglTestCase_000002_2);

#define VkglTestCase_000003_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage2DMultisample"
#define VkglTestCase_000003_2 ".multisample_texture_tex_storage_2d_invalid_and_border_case_texture_sizes"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000003, VkglTestCase_000003_1, VkglTestCase_000003_2);

#define VkglTestCase_000004_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage2DMultisample.multisa"
#define VkglTestCase_000004_2 "mple_texture_tex_storage_2d_non_color_depth_or_stencil_internal_formats_rejected"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000004, VkglTestCase_000004_1, VkglTestCase_000004_2);

#define VkglTestCase_000005_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage2DMulti"
#define VkglTestCase_000005_2 "sample.multisample_texture_tex_storage_2d_reconfiguration_rejected"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000005, VkglTestCase_000005_1, VkglTestCase_000005_2);

#define VkglTestCase_000006_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage2DMultis"
#define VkglTestCase_000006_2 "ample.multisample_texture_tex_storage_2d_texture_2d_multsample_array"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000006, VkglTestCase_000006_1, VkglTestCase_000006_2);

#define VkglTestCase_000007_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage2DMultisample.multisa"
#define VkglTestCase_000007_2 "mple_texture_tex_storage_2d_unsupported_samples_count_for_color_textures_rejected"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000007, VkglTestCase_000007_1, VkglTestCase_000007_2);

#define VkglTestCase_000008_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage2DMultisample.multisa"
#define VkglTestCase_000008_2 "mple_texture_tex_storage_2d_unsupported_samples_count_for_depth_textures_rejected"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000008, VkglTestCase_000008_1, VkglTestCase_000008_2);

#define VkglTestCase_000009_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage2DMultisample.multisample"
#define VkglTestCase_000009_2 "_texture_tex_storage_2d_unsupported_samples_count_for_depth_stencil_textures_rejected"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000009, VkglTestCase_000009_1, VkglTestCase_000009_2);

#define VkglTestCase_000010_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage"
#define VkglTestCase_000010_2 "2DMultisample.multisample_texture_tex_storage_2d_valid_calls"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000010, VkglTestCase_000010_1, VkglTestCase_000010_2);

#define VkglTestCase_000011_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage"
#define VkglTestCase_000011_2 "2DMultisample.multisample_texture_tex_storage_2d_zero_sample"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000011, VkglTestCase_000011_1, VkglTestCase_000011_2);
