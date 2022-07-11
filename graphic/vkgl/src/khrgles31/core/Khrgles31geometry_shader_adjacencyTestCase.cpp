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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002407_1 "KHR-GLES31.core.geometry_shader.ad"
#define VkglTestCase_002407_2 "jacency.adjacency_non_indiced_lines"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002407, VkglTestCase_002407_1, VkglTestCase_002407_2);

#define VkglTestCase_002408_1 "KHR-GLES31.core.geometry_shader."
#define VkglTestCase_002408_2 "adjacency.adjacency_indiced_lines"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002408, VkglTestCase_002408_1, VkglTestCase_002408_2);

#define VkglTestCase_002409_1 "KHR-GLES31.core.geometry_shader.adjac"
#define VkglTestCase_002409_2 "ency.adjacency_non_indiced_line_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002409, VkglTestCase_002409_1, VkglTestCase_002409_2);

#define VkglTestCase_002410_1 "KHR-GLES31.core.geometry_shader.adj"
#define VkglTestCase_002410_2 "acency.adjacency_indiced_line_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002410, VkglTestCase_002410_1, VkglTestCase_002410_2);

#define VkglTestCase_002411_1 "KHR-GLES31.core.geometry_shader.adja"
#define VkglTestCase_002411_2 "cency.adjacency_non_indiced_triangles"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002411, VkglTestCase_002411_1, VkglTestCase_002411_2);

#define VkglTestCase_002412_1 "KHR-GLES31.core.geometry_shader.ad"
#define VkglTestCase_002412_2 "jacency.adjacency_indiced_triangles"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002412, VkglTestCase_002412_1, VkglTestCase_002412_2);

#define VkglTestCase_002413_1 "KHR-GLES31.core.geometry_shader.adjacen"
#define VkglTestCase_002413_2 "cy.adjacency_non_indiced_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002413, VkglTestCase_002413_1, VkglTestCase_002413_2);

#define VkglTestCase_002414_1 "KHR-GLES31.core.geometry_shader.adjac"
#define VkglTestCase_002414_2 "ency.adjacency_indiced_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002414, VkglTestCase_002414_1, VkglTestCase_002414_2);
