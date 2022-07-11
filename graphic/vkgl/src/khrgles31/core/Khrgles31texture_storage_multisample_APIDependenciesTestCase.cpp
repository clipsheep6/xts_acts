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

#define VkglTestCase_000035_1 "KHR-GLES31.core.texture_storage_multisample.APIDepende"
#define VkglTestCase_000035_2 "ncies.fbo_with_attachments_of_varying_amount_of_samples"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000035, VkglTestCase_000035_1, VkglTestCase_000035_2);

#define VkglTestCase_000036_1 "KHR-GLES31.core.texture_storage_multisample.APIDepe"
#define VkglTestCase_000036_2 "ndencies.fbo_with_single_and_multisample_attachments"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000036, VkglTestCase_000036_1, VkglTestCase_000036_2);

#define VkglTestCase_000037_1 "KHR-GLES31.core.texture_storage_multisample.APIDependenci"
#define VkglTestCase_000037_2 "es.fbo_with_fixed_and_varying_sample_locations_attachments"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000037, VkglTestCase_000037_1, VkglTestCase_000037_2);

#define VkglTestCase_000038_1 "KHR-GLES31.core.texture_storage_multisample.APIDependencies.fbo_with"
#define VkglTestCase_000038_2 "_different_fixedsamplelocations_texture_and_renderbuffer_attachments"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000038, VkglTestCase_000038_1, VkglTestCase_000038_2);

#define VkglTestCase_000039_1 "KHR-GLES31.core.texture_storage_multisample.APIDependencies.fbo_with_render"
#define VkglTestCase_000039_2 "buffer_and_multisample_texture_attachments_with_different_number_of_samples"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000039, VkglTestCase_000039_1, VkglTestCase_000039_2);

#define VkglTestCase_000040_1 "KHR-GLES31.core.texture_storage_multisample.APIDependenci"
#define VkglTestCase_000040_2 "es.framebuffer_texture2d_used_with_invalid_texture_target"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000040, VkglTestCase_000040_1, VkglTestCase_000040_2);

#define VkglTestCase_000041_1 "KHR-GLES31.core.texture_storage_multisample.APIDepen"
#define VkglTestCase_000041_2 "dencies.framebuffer_texture2d_used_with_invalid_level"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000041, VkglTestCase_000041_1, VkglTestCase_000041_2);

#define VkglTestCase_000042_1 "KHR-GLES31.core.texture_storage_multisample.APIDependencie"
#define VkglTestCase_000042_2 "s.framebuffer_texture_layer_used_for_invalid_texture_target"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000042, VkglTestCase_000042_1, VkglTestCase_000042_2);

#define VkglTestCase_000043_1 "KHR-GLES31.core.texture_storage_multisample.APIDependencies"
#define VkglTestCase_000043_2 ".framebuffer_texture_layer_used_with_invalid_level_argument"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000043, VkglTestCase_000043_1, VkglTestCase_000043_2);

#define VkglTestCase_000044_1 "KHR-GLES31.core.texture_storage_multisample.APIDependencies.renderbuffer_s"
#define VkglTestCase_000044_2 "torage_multisample_invalid_samples_argument_for_noninteger_internalformats"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000044, VkglTestCase_000044_1, VkglTestCase_000044_2);

#define VkglTestCase_000045_1 "KHR-GLES31.core.texture_storage_multisample.APIDependencies.renderbuffer"
#define VkglTestCase_000045_2 "_storage_multisample_invalid_samples_argument_for_integer_internalformats"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000045, VkglTestCase_000045_1, VkglTestCase_000045_2);

#define VkglTestCase_000046_1 "KHR-GLES31.core.texture_storage_multisample.APIDependencie"
#define VkglTestCase_000046_2 "s.no_error_generated_for_valid_framebuffer_texture2d_calls"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000046, VkglTestCase_000046_1, VkglTestCase_000046_2);

#define VkglTestCase_000047_1 "KHR-GLES31.core.texture_storage_multisample.APIDependencies.no_"
#define VkglTestCase_000047_2 "error_generated_for_valid_renderbuffer_storage_multisample_calls"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000047, VkglTestCase_000047_1, VkglTestCase_000047_2);

#define VkglTestCase_000048_1 "KHR-GLES31.core.texture_storage_multisam"
#define VkglTestCase_000048_2 "ple.APIDependencies.tex_parameter_support"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000048, VkglTestCase_000048_1, VkglTestCase_000048_2);
