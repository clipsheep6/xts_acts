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
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000303_1 "KHR-GLES32.core.texture_buffer.tex"
#define VkglTestCase_000303_2 "ture_buffer_operations_buffer_load"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000303, VkglTestCase_000303_1, VkglTestCase_000303_2);

#define VkglTestCase_000304_1 "KHR-GLES32.core.texture_buffer.te"
#define VkglTestCase_000304_2 "xture_buffer_operations_cpu_writes"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000304, VkglTestCase_000304_1, VkglTestCase_000304_2);

#define VkglTestCase_000305_1 "KHR-GLES32.core.texture_buffer.texture"
#define VkglTestCase_000305_2 "_buffer_operations_framebuffer_readback"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000305, VkglTestCase_000305_1, VkglTestCase_000305_2);

#define VkglTestCase_000306_1 "KHR-GLES32.core.texture_buffer.textur"
#define VkglTestCase_000306_2 "e_buffer_operations_transform_feedback"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000306, VkglTestCase_000306_1, VkglTestCase_000306_2);

#define VkglTestCase_000307_1 "KHR-GLES32.core.texture_buffer.tex"
#define VkglTestCase_000307_2 "ture_buffer_operations_image_store"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000307, VkglTestCase_000307_1, VkglTestCase_000307_2);

#define VkglTestCase_000308_1 "KHR-GLES32.core.texture_buffer.tex"
#define VkglTestCase_000308_2 "ture_buffer_operations_ssbo_writes"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000308, VkglTestCase_000308_1, VkglTestCase_000308_2);

#define VkglTestCase_000309_1 "KHR-GLES32.core.texture_buf"
#define VkglTestCase_000309_2 "fer.texture_buffer_max_size"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000309, VkglTestCase_000309_1, VkglTestCase_000309_2);

#define VkglTestCase_000310_1 "KHR-GLES32.core.texture_buffer.te"
#define VkglTestCase_000310_2 "xture_buffer_texture_buffer_range"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000310, VkglTestCase_000310_1, VkglTestCase_000310_2);

#define VkglTestCase_000311_1 "KHR-GLES32.core.texture_buffer."
#define VkglTestCase_000311_2 "texture_buffer_conv_int_to_float"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000311, VkglTestCase_000311_1, VkglTestCase_000311_2);

#define VkglTestCase_000312_1 "KHR-GLES32.core.texture_buffer."
#define VkglTestCase_000312_2 "texture_buffer_atomic_functions"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000312, VkglTestCase_000312_1, VkglTestCase_000312_2);

#define VkglTestCase_000313_1 "KHR-GLES32.core.texture_buff"
#define VkglTestCase_000313_2 "er.texture_buffer_parameters"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000313, VkglTestCase_000313_1, VkglTestCase_000313_2);

#define VkglTestCase_000314_1 "KHR-GLES32.core.texture_bu"
#define VkglTestCase_000314_2 "ffer.texture_buffer_errors"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000314, VkglTestCase_000314_1, VkglTestCase_000314_2);

#define VkglTestCase_000315_1 "KHR-GLES32.core.texture_buffer.texture_buff"
#define VkglTestCase_000315_2 "er_active_uniform_validation_fragment_shader"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000315, VkglTestCase_000315_1, VkglTestCase_000315_2);

#define VkglTestCase_000316_1 "KHR-GLES32.core.texture_buffer.texture_buff"
#define VkglTestCase_000316_2 "er_active_uniform_validation_compute_shader"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000316, VkglTestCase_000316_1, VkglTestCase_000316_2);

#define VkglTestCase_000317_1 "KHR-GLES32.core.texture_buffer."
#define VkglTestCase_000317_2 "texture_buffer_buffer_parameters"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000317, VkglTestCase_000317_1, VkglTestCase_000317_2);

#define VkglTestCase_000318_1 "KHR-GLES32.core.texture_buf"
#define VkglTestCase_000318_2 "fer.texture_buffer_precision"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000318, VkglTestCase_000318_1, VkglTestCase_000318_2);
