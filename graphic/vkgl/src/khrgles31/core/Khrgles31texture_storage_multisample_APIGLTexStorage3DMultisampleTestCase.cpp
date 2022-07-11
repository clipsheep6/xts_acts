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

#define VkglTestCase_000012_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage3DMult"
#define VkglTestCase_000012_2 "isample.invalid_texture_sizes_are_rejected_valid_are_accepted_test"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000012, VkglTestCase_000012_1, VkglTestCase_000012_2);

#define VkglTestCase_000013_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage"
#define VkglTestCase_000013_2 "3DMultisample.multisample_texture_tex_storage_3d_zero_sample"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000013, VkglTestCase_000013_1, VkglTestCase_000013_2);

#define VkglTestCase_000014_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage3DMultisamp"
#define VkglTestCase_000014_2 "le.non_color_depth_stencil_renderable_internalformats_are_rejected_test"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000014, VkglTestCase_000014_1, VkglTestCase_000014_2);

#define VkglTestCase_000015_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage3DMultisample.requests_to_"
#define VkglTestCase_000015_2 "set_up_multisample_color_textures_with_unsupported_number_of_samples_are_rejected_test"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000015, VkglTestCase_000015_1, VkglTestCase_000015_2);

#define VkglTestCase_000016_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage3DMultisample.requests_to_"
#define VkglTestCase_000016_2 "set_up_multisample_depth_textures_with_unsupported_number_of_samples_are_rejected_test"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000016, VkglTestCase_000016_1, VkglTestCase_000016_2);

#define VkglTestCase_000017_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage3DMultisample.requests_to_s"
#define VkglTestCase_000017_2 "et_up_multisample_stencil_textures_with_unsupported_number_of_samples_are_rejected_test"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000017, VkglTestCase_000017_1, VkglTestCase_000017_2);

#define VkglTestCase_000018_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage3DMultisample.reques"
#define VkglTestCase_000018_2 "ts_to_set_up_multisample_textures_with_valid_and_invalid_number_of_samples_test"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000018, VkglTestCase_000018_1, VkglTestCase_000018_2);

#define VkglTestCase_000019_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStorage"
#define VkglTestCase_000019_2 "3DMultisample.texture_2D_multisample_target_is_rejected_test"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000019, VkglTestCase_000019_1, VkglTestCase_000019_2);

#define VkglTestCase_000020_1 "KHR-GLES31.core.texture_storage_multisample.APIGLTexStor"
#define VkglTestCase_000020_2 "age3DMultisample.valid_internalformats_are_accepted_test"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000020, VkglTestCase_000020_1, VkglTestCase_000020_2);
