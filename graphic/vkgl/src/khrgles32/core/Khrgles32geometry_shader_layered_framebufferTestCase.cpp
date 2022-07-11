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

#define VkglTestCase_000104_1 "KHR-GLES32.core.geometry_shader.l"
#define VkglTestCase_000104_2 "ayered_framebuffer.stencil_support"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000104, VkglTestCase_000104_1, VkglTestCase_000104_2);

#define VkglTestCase_000105_1 "KHR-GLES32.core.geometry_shader."
#define VkglTestCase_000105_2 "layered_framebuffer.depth_support"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000105, VkglTestCase_000105_1, VkglTestCase_000105_2);

#define VkglTestCase_000106_1 "KHR-GLES32.core.geometry_shader.la"
#define VkglTestCase_000106_2 "yered_framebuffer.blending_support"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000106, VkglTestCase_000106_1, VkglTestCase_000106_2);

#define VkglTestCase_000107_1 "KHR-GLES32.core.geometry_shader.lay"
#define VkglTestCase_000107_2 "ered_framebuffer.clear_call_support"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000107, VkglTestCase_000107_1, VkglTestCase_000107_2);
