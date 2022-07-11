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

#define VkglTestCase_000001_1 "KHR-GLESEXT.geometry_shader.adja"
#define VkglTestCase_000001_2 "cency.adjacency_non_indiced_lines"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000001, VkglTestCase_000001_1, VkglTestCase_000001_2);

#define VkglTestCase_000002_1 "KHR-GLESEXT.geometry_shader.ad"
#define VkglTestCase_000002_2 "jacency.adjacency_indiced_lines"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000002, VkglTestCase_000002_1, VkglTestCase_000002_2);

#define VkglTestCase_000003_1 "KHR-GLESEXT.geometry_shader.adjacen"
#define VkglTestCase_000003_2 "cy.adjacency_non_indiced_line_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000003, VkglTestCase_000003_1, VkglTestCase_000003_2);

#define VkglTestCase_000004_1 "KHR-GLESEXT.geometry_shader.adjac"
#define VkglTestCase_000004_2 "ency.adjacency_indiced_line_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000004, VkglTestCase_000004_1, VkglTestCase_000004_2);

#define VkglTestCase_000005_1 "KHR-GLESEXT.geometry_shader.adjace"
#define VkglTestCase_000005_2 "ncy.adjacency_non_indiced_triangles"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000005, VkglTestCase_000005_1, VkglTestCase_000005_2);

#define VkglTestCase_000006_1 "KHR-GLESEXT.geometry_shader.adja"
#define VkglTestCase_000006_2 "cency.adjacency_indiced_triangles"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000006, VkglTestCase_000006_1, VkglTestCase_000006_2);

#define VkglTestCase_000007_1 "KHR-GLESEXT.geometry_shader.adjacency"
#define VkglTestCase_000007_2 ".adjacency_non_indiced_triangle_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000007, VkglTestCase_000007_1, VkglTestCase_000007_2);

#define VkglTestCase_000008_1 "KHR-GLESEXT.geometry_shader.adjacen"
#define VkglTestCase_000008_2 "cy.adjacency_indiced_triangle_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000008, VkglTestCase_000008_1, VkglTestCase_000008_2);
