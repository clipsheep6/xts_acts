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

#define VkglTestCase_000029_1 "KHR-GLES32.core.geometry_shader.ad"
#define VkglTestCase_000029_2 "jacency.adjacency_non_indiced_lines"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000029, VkglTestCase_000029_1, VkglTestCase_000029_2);

#define VkglTestCase_000030_1 "KHR-GLES32.core.geometry_shader."
#define VkglTestCase_000030_2 "adjacency.adjacency_indiced_lines"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000030, VkglTestCase_000030_1, VkglTestCase_000030_2);

#define VkglTestCase_000031_1 "KHR-GLES32.core.geometry_shader.adjac"
#define VkglTestCase_000031_2 "ency.adjacency_non_indiced_line_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000031, VkglTestCase_000031_1, VkglTestCase_000031_2);

#define VkglTestCase_000032_1 "KHR-GLES32.core.geometry_shader.adj"
#define VkglTestCase_000032_2 "acency.adjacency_indiced_line_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000032, VkglTestCase_000032_1, VkglTestCase_000032_2);

#define VkglTestCase_000033_1 "KHR-GLES32.core.geometry_shader.adja"
#define VkglTestCase_000033_2 "cency.adjacency_non_indiced_triangles"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000033, VkglTestCase_000033_1, VkglTestCase_000033_2);

#define VkglTestCase_000034_1 "KHR-GLES32.core.geometry_shader.ad"
#define VkglTestCase_000034_2 "jacency.adjacency_indiced_triangles"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000034, VkglTestCase_000034_1, VkglTestCase_000034_2);

#define VkglTestCase_000035_1 "KHR-GLES32.core.geometry_shader.adjacen"
#define VkglTestCase_000035_2 "cy.adjacency_non_indiced_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000035, VkglTestCase_000035_1, VkglTestCase_000035_2);

#define VkglTestCase_000036_1 "KHR-GLES32.core.geometry_shader.adjac"
#define VkglTestCase_000036_2 "ency.adjacency_indiced_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000036, VkglTestCase_000036_1, VkglTestCase_000036_2);
