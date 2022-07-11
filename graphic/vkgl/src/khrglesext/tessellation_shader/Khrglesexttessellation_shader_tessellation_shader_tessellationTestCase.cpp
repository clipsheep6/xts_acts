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

#define VkglTestCase_000174_1 "KHR-GLESEXT.tessellation_shader.tessellation_shader_te"
#define VkglTestCase_000174_2 "ssellation.gl_InvocationID_PatchVerticesIn_PrimitiveID"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000174, VkglTestCase_000174_1, VkglTestCase_000174_2);

#define VkglTestCase_000175_1 "KHR-GLESEXT.tessellation_shader.tess"
#define VkglTestCase_000175_2 "ellation_shader_tessellation.TCS_TES"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000175, VkglTestCase_000175_1, VkglTestCase_000175_2);

#define VkglTestCase_000176_1 "KHR-GLESEXT.tessellation_shader.te"
#define VkglTestCase_000176_2 "ssellation_shader_tessellation.TES"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000176, VkglTestCase_000176_1, VkglTestCase_000176_2);

#define VkglTestCase_000177_1 "KHR-GLESEXT.tessellation_shader.tessellati"
#define VkglTestCase_000177_2 "on_shader_tessellation.input_patch_discard"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000177, VkglTestCase_000177_1, VkglTestCase_000177_2);

#define VkglTestCase_000178_1 "KHR-GLESEXT.tessellation_shader.tessellatio"
#define VkglTestCase_000178_2 "n_shader_tessellation.max_in_out_attributes"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000178, VkglTestCase_000178_1, VkglTestCase_000178_2);
