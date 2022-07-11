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

#define VkglTestCase_000085_1 "KHR-GLESEXT.geometry_shader.primiti"
#define VkglTestCase_000085_2 "ve_queries.primitive_queries_points"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000085, VkglTestCase_000085_1, VkglTestCase_000085_2);

#define VkglTestCase_000086_1 "KHR-GLESEXT.geometry_shader.primit"
#define VkglTestCase_000086_2 "ive_queries.primitive_queries_lines"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000086, VkglTestCase_000086_1, VkglTestCase_000086_2);

#define VkglTestCase_000087_1 "KHR-GLESEXT.geometry_shader.primitiv"
#define VkglTestCase_000087_2 "e_queries.primitive_queries_triangles"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000087, VkglTestCase_000087_1, VkglTestCase_000087_2);
