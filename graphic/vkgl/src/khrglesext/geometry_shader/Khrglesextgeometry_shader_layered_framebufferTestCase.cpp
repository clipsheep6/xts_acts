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

#define VkglTestCase_000076_1 "KHR-GLESEXT.geometry_shader.lay"
#define VkglTestCase_000076_2 "ered_framebuffer.stencil_support"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000076, VkglTestCase_000076_1, VkglTestCase_000076_2);

#define VkglTestCase_000077_1 "KHR-GLESEXT.geometry_shader.la"
#define VkglTestCase_000077_2 "yered_framebuffer.depth_support"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000077, VkglTestCase_000077_1, VkglTestCase_000077_2);

#define VkglTestCase_000078_1 "KHR-GLESEXT.geometry_shader.laye"
#define VkglTestCase_000078_2 "red_framebuffer.blending_support"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000078, VkglTestCase_000078_1, VkglTestCase_000078_2);

#define VkglTestCase_000079_1 "KHR-GLESEXT.geometry_shader.layer"
#define VkglTestCase_000079_2 "ed_framebuffer.clear_call_support"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000079, VkglTestCase_000079_1, VkglTestCase_000079_2);
