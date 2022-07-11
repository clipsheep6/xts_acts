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

#define VkglTestCase_002680_1 "KHR-GLES31.core.texture_buffer.tex"
#define VkglTestCase_002680_2 "ture_buffer_operations_buffer_load"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002680, VkglTestCase_002680_1, VkglTestCase_002680_2);

#define VkglTestCase_002681_1 "KHR-GLES31.core.texture_buffer.te"
#define VkglTestCase_002681_2 "xture_buffer_operations_cpu_writes"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002681, VkglTestCase_002681_1, VkglTestCase_002681_2);

#define VkglTestCase_002682_1 "KHR-GLES31.core.texture_buffer.texture"
#define VkglTestCase_002682_2 "_buffer_operations_framebuffer_readback"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002682, VkglTestCase_002682_1, VkglTestCase_002682_2);

#define VkglTestCase_002683_1 "KHR-GLES31.core.texture_buffer.textur"
#define VkglTestCase_002683_2 "e_buffer_operations_transform_feedback"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002683, VkglTestCase_002683_1, VkglTestCase_002683_2);

#define VkglTestCase_002684_1 "KHR-GLES31.core.texture_buffer.tex"
#define VkglTestCase_002684_2 "ture_buffer_operations_image_store"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002684, VkglTestCase_002684_1, VkglTestCase_002684_2);

#define VkglTestCase_002685_1 "KHR-GLES31.core.texture_buffer.tex"
#define VkglTestCase_002685_2 "ture_buffer_operations_ssbo_writes"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002685, VkglTestCase_002685_1, VkglTestCase_002685_2);

#define VkglTestCase_002686_1 "KHR-GLES31.core.texture_buf"
#define VkglTestCase_002686_2 "fer.texture_buffer_max_size"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002686, VkglTestCase_002686_1, VkglTestCase_002686_2);

#define VkglTestCase_002687_1 "KHR-GLES31.core.texture_buffer.te"
#define VkglTestCase_002687_2 "xture_buffer_texture_buffer_range"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002687, VkglTestCase_002687_1, VkglTestCase_002687_2);

#define VkglTestCase_002688_1 "KHR-GLES31.core.texture_buffer."
#define VkglTestCase_002688_2 "texture_buffer_conv_int_to_float"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002688, VkglTestCase_002688_1, VkglTestCase_002688_2);

#define VkglTestCase_002689_1 "KHR-GLES31.core.texture_buffer."
#define VkglTestCase_002689_2 "texture_buffer_atomic_functions"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002689, VkglTestCase_002689_1, VkglTestCase_002689_2);

#define VkglTestCase_002690_1 "KHR-GLES31.core.texture_buff"
#define VkglTestCase_002690_2 "er.texture_buffer_parameters"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002690, VkglTestCase_002690_1, VkglTestCase_002690_2);

#define VkglTestCase_002691_1 "KHR-GLES31.core.texture_bu"
#define VkglTestCase_002691_2 "ffer.texture_buffer_errors"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002691, VkglTestCase_002691_1, VkglTestCase_002691_2);

#define VkglTestCase_002692_1 "KHR-GLES31.core.texture_buffer.texture_buff"
#define VkglTestCase_002692_2 "er_active_uniform_validation_fragment_shader"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002692, VkglTestCase_002692_1, VkglTestCase_002692_2);

#define VkglTestCase_002693_1 "KHR-GLES31.core.texture_buffer.texture_buff"
#define VkglTestCase_002693_2 "er_active_uniform_validation_compute_shader"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002693, VkglTestCase_002693_1, VkglTestCase_002693_2);

#define VkglTestCase_002694_1 "KHR-GLES31.core.texture_buffer."
#define VkglTestCase_002694_2 "texture_buffer_buffer_parameters"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002694, VkglTestCase_002694_1, VkglTestCase_002694_2);

#define VkglTestCase_002695_1 "KHR-GLES31.core.texture_buf"
#define VkglTestCase_002695_2 "fer.texture_buffer_precision"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002695, VkglTestCase_002695_1, VkglTestCase_002695_2);
