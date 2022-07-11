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

#define VkglTestCase_000021_1 "KHR-GLES31.core.texture_storage_multisample.APIGLGetMultisamplefv.m"
#define VkglTestCase_000021_2 "ultisample_texture_get_multisamplefv_index_equal_gl_samples_rejected"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000021, VkglTestCase_000021_1, VkglTestCase_000021_2);

#define VkglTestCase_000022_1 "KHR-GLES31.core.texture_storage_multisample.APIGLGetMultisamplefv.mu"
#define VkglTestCase_000022_2 "ltisample_texture_get_multisamplefv_index_greater_gl_samples_rejected"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000022, VkglTestCase_000022_1, VkglTestCase_000022_2);

#define VkglTestCase_000023_1 "KHR-GLES31.core.texture_storage_multisample.APIGLGetMultisample"
#define VkglTestCase_000023_2 "fv.multisample_texture_get_multisamplefv_invalid_pname_rejected"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000023, VkglTestCase_000023_1, VkglTestCase_000023_2);

#define VkglTestCase_000024_1 "KHR-GLES31.core.texture_storage_multisample.APIGLGetMultisamplefv"
#define VkglTestCase_000024_2 ".multisample_texture_get_multisamplefv_null_val_arguments_accepted"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000024, VkglTestCase_000024_1, VkglTestCase_000024_2);

#define VkglTestCase_000025_1 "KHR-GLES31.core.texture_storage_multisample.APIGLGetMultisamplefv.mu"
#define VkglTestCase_000025_2 "ltisample_texture_get_multisamplefv_sample_position_values_validation"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000025, VkglTestCase_000025_1, VkglTestCase_000025_2);

#define VkglTestCase_000026_1 "KHR-GLES31.core.texture_storage_multisample.APIGLGetM"
#define VkglTestCase_000026_2 "ultisamplefv.multisample_texture_sample_maski_getters"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000026, VkglTestCase_000026_1, VkglTestCase_000026_2);

#define VkglTestCase_000027_1 "KHR-GLES31.core.texture_storage_multisample.APIGLGetMultisamplefv.mult"
#define VkglTestCase_000027_2 "isample_texture_sample_maski_index_lower_than_gl_max_sample_mask_words"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000027, VkglTestCase_000027_1, VkglTestCase_000027_2);

#define VkglTestCase_000028_1 "KHR-GLES31.core.texture_storage_multisample.APIGLGetMultisamplefv.m"
#define VkglTestCase_000028_2 "ultisample_texture_sample_maski_index_equal_gl_max_sample_mask_words"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000028, VkglTestCase_000028_1, VkglTestCase_000028_2);

#define VkglTestCase_000029_1 "KHR-GLES31.core.texture_storage_multisample.APIGLGetMultisamplefv.mu"
#define VkglTestCase_000029_2 "ltisample_texture_sample_maski_index_greater_gl_max_sample_mask_words"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000029, VkglTestCase_000029_1, VkglTestCase_000029_2);
