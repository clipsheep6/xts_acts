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

#define VkglTestCase_002535_1 "KHR-GLES31.core.geometry_sh"
#define VkglTestCase_002535_2 "ader.layered_fbo.layered_fbo"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002535, VkglTestCase_002535_1, VkglTestCase_002535_2);

#define VkglTestCase_002536_1 "KHR-GLES31.core.geometry_shader.l"
#define VkglTestCase_002536_2 "ayered_fbo.layered_fbo_attachments"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002536, VkglTestCase_002536_1, VkglTestCase_002536_2);

#define VkglTestCase_002537_1 "KHR-GLES31.core.geometry_shader.la"
#define VkglTestCase_002537_2 "yered_fbo.fb_texture_invalid_target"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002537, VkglTestCase_002537_1, VkglTestCase_002537_2);

#define VkglTestCase_002538_1 "KHR-GLES31.core.geometry_shader.layere"
#define VkglTestCase_002538_2 "d_fbo.fb_texture_no_fbo_bound_to_target"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002538, VkglTestCase_002538_1, VkglTestCase_002538_2);

#define VkglTestCase_002539_1 "KHR-GLES31.core.geometry_shader.laye"
#define VkglTestCase_002539_2 "red_fbo.fb_texture_invalid_attachment"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002539, VkglTestCase_002539_1, VkglTestCase_002539_2);

#define VkglTestCase_002540_1 "KHR-GLES31.core.geometry_shader.la"
#define VkglTestCase_002540_2 "yered_fbo.fb_texture_invalid_value"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002540, VkglTestCase_002540_1, VkglTestCase_002540_2);

#define VkglTestCase_002541_1 "KHR-GLES31.core.geometry_shader.layer"
#define VkglTestCase_002541_2 "ed_fbo.fb_texture_invalid_level_number"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002541, VkglTestCase_002541_1, VkglTestCase_002541_2);

#define VkglTestCase_002542_1 "KHR-GLES31.core.geometry_shader.layered_fbo."
#define VkglTestCase_002542_2 "fb_texture_argument_refers_to_buffer_texture"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002542, VkglTestCase_002542_1, VkglTestCase_002542_2);
