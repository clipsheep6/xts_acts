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

#define VkglTestCase_000048_1 "KHR-GLESEXT.geometry_shader.pr"
#define VkglTestCase_000048_2 "imitive_counter.point_to_point"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000048, VkglTestCase_000048_1, VkglTestCase_000048_2);

#define VkglTestCase_000049_1 "KHR-GLESEXT.geometry_shader.primi"
#define VkglTestCase_000049_2 "tive_counter.points_to_line_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000049, VkglTestCase_000049_1, VkglTestCase_000049_2);

#define VkglTestCase_000050_1 "KHR-GLESEXT.geometry_shader.primiti"
#define VkglTestCase_000050_2 "ve_counter.points_to_triangle_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000050, VkglTestCase_000050_1, VkglTestCase_000050_2);

#define VkglTestCase_000051_1 "KHR-GLESEXT.geometry_shader.pr"
#define VkglTestCase_000051_2 "imitive_counter.lines_to_points"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000051, VkglTestCase_000051_1, VkglTestCase_000051_2);

#define VkglTestCase_000052_1 "KHR-GLESEXT.geometry_shader.prim"
#define VkglTestCase_000052_2 "itive_counter.lines_to_line_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000052, VkglTestCase_000052_1, VkglTestCase_000052_2);

#define VkglTestCase_000053_1 "KHR-GLESEXT.geometry_shader.primit"
#define VkglTestCase_000053_2 "ive_counter.lines_to_triangle_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000053, VkglTestCase_000053_1, VkglTestCase_000053_2);

#define VkglTestCase_000054_1 "KHR-GLESEXT.geometry_shader.prim"
#define VkglTestCase_000054_2 "itive_counter.triangles_to_points"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000054, VkglTestCase_000054_1, VkglTestCase_000054_2);

#define VkglTestCase_000055_1 "KHR-GLESEXT.geometry_shader.primit"
#define VkglTestCase_000055_2 "ive_counter.triangles_to_line_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000055, VkglTestCase_000055_1, VkglTestCase_000055_2);

#define VkglTestCase_000056_1 "KHR-GLESEXT.geometry_shader.primitiv"
#define VkglTestCase_000056_2 "e_counter.triangles_to_triangle_strip"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000056, VkglTestCase_000056_1, VkglTestCase_000056_2);

#define VkglTestCase_000057_1 "KHR-GLESEXT.geometry_shader.prim"
#define VkglTestCase_000057_2 "itive_counter.points_to_points_rp"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000057, VkglTestCase_000057_1, VkglTestCase_000057_2);

#define VkglTestCase_000058_1 "KHR-GLESEXT.geometry_shader.primit"
#define VkglTestCase_000058_2 "ive_counter.points_to_line_strip_rp"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000058, VkglTestCase_000058_1, VkglTestCase_000058_2);

#define VkglTestCase_000059_1 "KHR-GLESEXT.geometry_shader.primitiv"
#define VkglTestCase_000059_2 "e_counter.points_to_triangle_strip_rp"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000059, VkglTestCase_000059_1, VkglTestCase_000059_2);

#define VkglTestCase_000060_1 "KHR-GLESEXT.geometry_shader.prim"
#define VkglTestCase_000060_2 "itive_counter.lines_to_points_rp"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000060, VkglTestCase_000060_1, VkglTestCase_000060_2);

#define VkglTestCase_000061_1 "KHR-GLESEXT.geometry_shader.primit"
#define VkglTestCase_000061_2 "ive_counter.lines_to_line_strip_rp"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000061, VkglTestCase_000061_1, VkglTestCase_000061_2);

#define VkglTestCase_000062_1 "KHR-GLESEXT.geometry_shader.primitiv"
#define VkglTestCase_000062_2 "e_counter.lines_to_triangle_strip_rp"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000062, VkglTestCase_000062_1, VkglTestCase_000062_2);

#define VkglTestCase_000063_1 "KHR-GLESEXT.geometry_shader.primit"
#define VkglTestCase_000063_2 "ive_counter.triangles_to_points_rp"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000063, VkglTestCase_000063_1, VkglTestCase_000063_2);

#define VkglTestCase_000064_1 "KHR-GLESEXT.geometry_shader.primitiv"
#define VkglTestCase_000064_2 "e_counter.triangles_to_line_strip_rp"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000064, VkglTestCase_000064_1, VkglTestCase_000064_2);

#define VkglTestCase_000065_1 "KHR-GLESEXT.geometry_shader.primitive_"
#define VkglTestCase_000065_2 "counter.triangles_to_triangle_strip_rp"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000065, VkglTestCase_000065_1, VkglTestCase_000065_2);

#define VkglTestCase_000066_1 "KHR-GLESEXT.geometry_shader.primitiv"
#define VkglTestCase_000066_2 "e_counter.primitive_id_from_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000066, VkglTestCase_000066_1, VkglTestCase_000066_2);
