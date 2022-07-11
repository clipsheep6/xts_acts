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

#define VkglTestCase_000167_1 "KHR-GLESEXT.tessellation_shader.tessellatio"
#define VkglTestCase_000167_2 "n_shader_quads_tessellation.degenerate_case"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000167, VkglTestCase_000167_1, VkglTestCase_000167_2);

#define VkglTestCase_000168_1 "KHR-GLESEXT.tessellation_shader.tessellation_shader_"
#define VkglTestCase_000168_2 "quads_tessellation.inner_tessellation_level_rounding"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000168, VkglTestCase_000168_1, VkglTestCase_000168_2);
