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

#define VkglTestCase_000113_1 "KHR-GLES32.core.geometry_shader.primi"
#define VkglTestCase_000113_2 "tive_queries.primitive_queries_points"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000113, VkglTestCase_000113_1, VkglTestCase_000113_2);

#define VkglTestCase_000114_1 "KHR-GLES32.core.geometry_shader.prim"
#define VkglTestCase_000114_2 "itive_queries.primitive_queries_lines"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000114, VkglTestCase_000114_1, VkglTestCase_000114_2);

#define VkglTestCase_000115_1 "KHR-GLES32.core.geometry_shader.primit"
#define VkglTestCase_000115_2 "ive_queries.primitive_queries_triangles"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000115, VkglTestCase_000115_1, VkglTestCase_000115_2);
