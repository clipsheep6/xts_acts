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

#define VkglTestCase_000044_1 "KHR-GLESEXT.geometry_shader"
#define VkglTestCase_000044_2 ".input.gl_in_array_contents"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000044, VkglTestCase_000044_1, VkglTestCase_000044_2);

#define VkglTestCase_000045_1 "KHR-GLESEXT.geometry_shade"
#define VkglTestCase_000045_2 "r.input.gl_in_array_length"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000045, VkglTestCase_000045_1, VkglTestCase_000045_2);

#define VkglTestCase_000046_1 "KHR-GLESEXT.geometry_shade"
#define VkglTestCase_000046_2 "r.input.gl_pointsize_value"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000046, VkglTestCase_000046_1, VkglTestCase_000046_2);

#define VkglTestCase_000047_1 "KHR-GLESEXT.geometry_shad"
#define VkglTestCase_000047_2 "er.input.gl_position_value"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000047, VkglTestCase_000047_1, VkglTestCase_000047_2);
