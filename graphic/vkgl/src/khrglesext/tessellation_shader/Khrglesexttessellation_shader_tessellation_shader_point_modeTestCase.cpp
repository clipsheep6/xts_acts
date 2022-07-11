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

#define VkglTestCase_000182_1 "KHR-GLESEXT.tessellation_shader.tessell"
#define VkglTestCase_000182_2 "ation_shader_point_mode.point_rendering"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000182, VkglTestCase_000182_1, VkglTestCase_000182_2);

#define VkglTestCase_000183_1 "KHR-GLESEXT.tessellation_shader.tessellat"
#define VkglTestCase_000183_2 "ion_shader_point_mode.points_verification"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000183, VkglTestCase_000183_1, VkglTestCase_000183_2);
