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

#define VkglTestCase_000080_1 "KHR-GLESEXT.geometry_shader.out"
#define VkglTestCase_000080_2 "put.conflicted_output_primitive"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000080, VkglTestCase_000080_1, VkglTestCase_000080_2);

#define VkglTestCase_000081_1 "KHR-GLESEXT.geometry_shader.outp"
#define VkglTestCase_000081_2 "ut.conflicted_output_vertices_max"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000081, VkglTestCase_000081_1, VkglTestCase_000081_2);

#define VkglTestCase_000082_1 "KHR-GLESEXT.geometry_shade"
#define VkglTestCase_000082_2 "r.output.vertex_emit_at_end"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000082, VkglTestCase_000082_1, VkglTestCase_000082_2);

#define VkglTestCase_000083_1 "KHR-GLESEXT.geometry_shader.ou"
#define VkglTestCase_000083_2 "tput.primitive_end_done_at_end"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000083, VkglTestCase_000083_1, VkglTestCase_000083_2);

#define VkglTestCase_000084_1 "KHR-GLESEXT.geometry_shader.output.p"
#define VkglTestCase_000084_2 "rimite_end_done_for_single_primitive"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000084, VkglTestCase_000084_1, VkglTestCase_000084_2);
