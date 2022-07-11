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

#define VkglTestCase_000157_1 "KHR-GLES32.core.geometry_sh"
#define VkglTestCase_000157_2 "ader.layered_fbo.layered_fbo"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000157, VkglTestCase_000157_1, VkglTestCase_000157_2);

#define VkglTestCase_000158_1 "KHR-GLES32.core.geometry_shader.l"
#define VkglTestCase_000158_2 "ayered_fbo.layered_fbo_attachments"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000158, VkglTestCase_000158_1, VkglTestCase_000158_2);

#define VkglTestCase_000159_1 "KHR-GLES32.core.geometry_shader.la"
#define VkglTestCase_000159_2 "yered_fbo.fb_texture_invalid_target"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000159, VkglTestCase_000159_1, VkglTestCase_000159_2);

#define VkglTestCase_000160_1 "KHR-GLES32.core.geometry_shader.layere"
#define VkglTestCase_000160_2 "d_fbo.fb_texture_no_fbo_bound_to_target"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000160, VkglTestCase_000160_1, VkglTestCase_000160_2);

#define VkglTestCase_000161_1 "KHR-GLES32.core.geometry_shader.laye"
#define VkglTestCase_000161_2 "red_fbo.fb_texture_invalid_attachment"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000161, VkglTestCase_000161_1, VkglTestCase_000161_2);

#define VkglTestCase_000162_1 "KHR-GLES32.core.geometry_shader.la"
#define VkglTestCase_000162_2 "yered_fbo.fb_texture_invalid_value"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000162, VkglTestCase_000162_1, VkglTestCase_000162_2);

#define VkglTestCase_000163_1 "KHR-GLES32.core.geometry_shader.layer"
#define VkglTestCase_000163_2 "ed_fbo.fb_texture_invalid_level_number"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000163, VkglTestCase_000163_1, VkglTestCase_000163_2);

#define VkglTestCase_000164_1 "KHR-GLES32.core.geometry_shader.layered_fbo."
#define VkglTestCase_000164_2 "fb_texture_argument_refers_to_buffer_texture"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000164, VkglTestCase_000164_1, VkglTestCase_000164_2);
