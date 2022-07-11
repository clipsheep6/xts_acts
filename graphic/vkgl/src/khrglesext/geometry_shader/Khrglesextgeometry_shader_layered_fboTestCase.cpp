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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000129_1 "KHR-GLESEXT.geometry_shad"
#define VkglTestCase_000129_2 "er.layered_fbo.layered_fbo"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000129, VkglTestCase_000129_1, VkglTestCase_000129_2);

#define VkglTestCase_000130_1 "KHR-GLESEXT.geometry_shader.lay"
#define VkglTestCase_000130_2 "ered_fbo.layered_fbo_attachments"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000130, VkglTestCase_000130_1, VkglTestCase_000130_2);

#define VkglTestCase_000131_1 "KHR-GLESEXT.geometry_shader.laye"
#define VkglTestCase_000131_2 "red_fbo.fb_texture_invalid_target"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000131, VkglTestCase_000131_1, VkglTestCase_000131_2);

#define VkglTestCase_000132_1 "KHR-GLESEXT.geometry_shader.layered_"
#define VkglTestCase_000132_2 "fbo.fb_texture_no_fbo_bound_to_target"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000132, VkglTestCase_000132_1, VkglTestCase_000132_2);

#define VkglTestCase_000133_1 "KHR-GLESEXT.geometry_shader.layere"
#define VkglTestCase_000133_2 "d_fbo.fb_texture_invalid_attachment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000133, VkglTestCase_000133_1, VkglTestCase_000133_2);

#define VkglTestCase_000134_1 "KHR-GLESEXT.geometry_shader.laye"
#define VkglTestCase_000134_2 "red_fbo.fb_texture_invalid_value"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000134, VkglTestCase_000134_1, VkglTestCase_000134_2);

#define VkglTestCase_000135_1 "KHR-GLESEXT.geometry_shader.layered"
#define VkglTestCase_000135_2 "_fbo.fb_texture_invalid_level_number"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000135, VkglTestCase_000135_1, VkglTestCase_000135_2);

#define VkglTestCase_000136_1 "KHR-GLESEXT.geometry_shader.layered_fbo.fb"
#define VkglTestCase_000136_2 "_texture_argument_refers_to_buffer_texture"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000136, VkglTestCase_000136_1, VkglTestCase_000136_2);
