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

#define VkglTestCase_000076_1 "KHR-GLES32.core.geometry_shader."
#define VkglTestCase_000076_2 "primitive_counter.point_to_point"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000076, VkglTestCase_000076_1, VkglTestCase_000076_2);

#define VkglTestCase_000077_1 "KHR-GLES32.core.geometry_shader.pri"
#define VkglTestCase_000077_2 "mitive_counter.points_to_line_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000077, VkglTestCase_000077_1, VkglTestCase_000077_2);

#define VkglTestCase_000078_1 "KHR-GLES32.core.geometry_shader.primi"
#define VkglTestCase_000078_2 "tive_counter.points_to_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000078, VkglTestCase_000078_1, VkglTestCase_000078_2);

#define VkglTestCase_000079_1 "KHR-GLES32.core.geometry_shader."
#define VkglTestCase_000079_2 "primitive_counter.lines_to_points"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000079, VkglTestCase_000079_1, VkglTestCase_000079_2);

#define VkglTestCase_000080_1 "KHR-GLES32.core.geometry_shader.pr"
#define VkglTestCase_000080_2 "imitive_counter.lines_to_line_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000080, VkglTestCase_000080_1, VkglTestCase_000080_2);

#define VkglTestCase_000081_1 "KHR-GLES32.core.geometry_shader.prim"
#define VkglTestCase_000081_2 "itive_counter.lines_to_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000081, VkglTestCase_000081_1, VkglTestCase_000081_2);

#define VkglTestCase_000082_1 "KHR-GLES32.core.geometry_shader.pr"
#define VkglTestCase_000082_2 "imitive_counter.triangles_to_points"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000082, VkglTestCase_000082_1, VkglTestCase_000082_2);

#define VkglTestCase_000083_1 "KHR-GLES32.core.geometry_shader.prim"
#define VkglTestCase_000083_2 "itive_counter.triangles_to_line_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000083, VkglTestCase_000083_1, VkglTestCase_000083_2);

#define VkglTestCase_000084_1 "KHR-GLES32.core.geometry_shader.primit"
#define VkglTestCase_000084_2 "ive_counter.triangles_to_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000084, VkglTestCase_000084_1, VkglTestCase_000084_2);

#define VkglTestCase_000085_1 "KHR-GLES32.core.geometry_shader.pr"
#define VkglTestCase_000085_2 "imitive_counter.points_to_points_rp"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000085, VkglTestCase_000085_1, VkglTestCase_000085_2);

#define VkglTestCase_000086_1 "KHR-GLES32.core.geometry_shader.prim"
#define VkglTestCase_000086_2 "itive_counter.points_to_line_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000086, VkglTestCase_000086_1, VkglTestCase_000086_2);

#define VkglTestCase_000087_1 "KHR-GLES32.core.geometry_shader.primit"
#define VkglTestCase_000087_2 "ive_counter.points_to_triangle_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000087, VkglTestCase_000087_1, VkglTestCase_000087_2);

#define VkglTestCase_000088_1 "KHR-GLES32.core.geometry_shader.pr"
#define VkglTestCase_000088_2 "imitive_counter.lines_to_points_rp"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000088, VkglTestCase_000088_1, VkglTestCase_000088_2);

#define VkglTestCase_000089_1 "KHR-GLES32.core.geometry_shader.prim"
#define VkglTestCase_000089_2 "itive_counter.lines_to_line_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000089, VkglTestCase_000089_1, VkglTestCase_000089_2);

#define VkglTestCase_000090_1 "KHR-GLES32.core.geometry_shader.primit"
#define VkglTestCase_000090_2 "ive_counter.lines_to_triangle_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000090, VkglTestCase_000090_1, VkglTestCase_000090_2);

#define VkglTestCase_000091_1 "KHR-GLES32.core.geometry_shader.prim"
#define VkglTestCase_000091_2 "itive_counter.triangles_to_points_rp"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000091, VkglTestCase_000091_1, VkglTestCase_000091_2);

#define VkglTestCase_000092_1 "KHR-GLES32.core.geometry_shader.primit"
#define VkglTestCase_000092_2 "ive_counter.triangles_to_line_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000092, VkglTestCase_000092_1, VkglTestCase_000092_2);

#define VkglTestCase_000093_1 "KHR-GLES32.core.geometry_shader.primitiv"
#define VkglTestCase_000093_2 "e_counter.triangles_to_triangle_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000093, VkglTestCase_000093_1, VkglTestCase_000093_2);

#define VkglTestCase_000094_1 "KHR-GLES32.core.geometry_shader.primit"
#define VkglTestCase_000094_2 "ive_counter.primitive_id_from_fragment"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000094, VkglTestCase_000094_1, VkglTestCase_000094_2);
