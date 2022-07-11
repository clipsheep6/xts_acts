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

#define VkglTestCase_000069_1 "KHR-GLESEXT.geometry_shader"
#define VkglTestCase_000069_2 ".blitting.layered_nonlayered"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000069, VkglTestCase_000069_1, VkglTestCase_000069_2);

#define VkglTestCase_000070_1 "KHR-GLESEXT.geometry_shader"
#define VkglTestCase_000070_2 ".blitting.nonlayered_layered"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000070, VkglTestCase_000070_1, VkglTestCase_000070_2);

#define VkglTestCase_000071_1 "KHR-GLESEXT.geometry_shade"
#define VkglTestCase_000071_2 "r.blitting.layered_layered"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000071, VkglTestCase_000071_1, VkglTestCase_000071_2);
