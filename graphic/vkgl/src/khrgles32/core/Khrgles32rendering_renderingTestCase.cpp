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

#define VkglTestCase_000037_1 "KHR-GLES32.core.geometry_shader.renderi"
#define VkglTestCase_000037_2 "ng.rendering.points_input_points_output"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000037, VkglTestCase_000037_1, VkglTestCase_000037_2);

#define VkglTestCase_000038_1 "KHR-GLES32.core.geometry_shader.rendering"
#define VkglTestCase_000038_2 ".rendering.points_input_line_strip_output"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000038, VkglTestCase_000038_1, VkglTestCase_000038_2);

#define VkglTestCase_000039_1 "KHR-GLES32.core.geometry_shader.renderin"
#define VkglTestCase_000039_2 "g.rendering.points_input_triangles_output"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000039, VkglTestCase_000039_1, VkglTestCase_000039_2);

#define VkglTestCase_000040_1 "KHR-GLES32.core.geometry_shader.rendering.rend"
#define VkglTestCase_000040_2 "ering.lines_input_points_output_lines_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000040, VkglTestCase_000040_1, VkglTestCase_000040_2);

#define VkglTestCase_000041_1 "KHR-GLES32.core.geometry_shader.rendering.render"
#define VkglTestCase_000041_2 "ing.lines_input_line_strip_output_lines_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000041, VkglTestCase_000041_1, VkglTestCase_000041_2);

#define VkglTestCase_000042_1 "KHR-GLES32.core.geometry_shader.rendering.renderin"
#define VkglTestCase_000042_2 "g.lines_input_triangle_strip_output_lines_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000042, VkglTestCase_000042_1, VkglTestCase_000042_2);

#define VkglTestCase_000043_1 "KHR-GLES32.core.geometry_shader.rendering.render"
#define VkglTestCase_000043_2 "ing.lines_input_points_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000043, VkglTestCase_000043_1, VkglTestCase_000043_2);

#define VkglTestCase_000044_1 "KHR-GLES32.core.geometry_shader.rendering.renderin"
#define VkglTestCase_000044_2 "g.lines_input_line_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000044, VkglTestCase_000044_1, VkglTestCase_000044_2);

#define VkglTestCase_000045_1 "KHR-GLES32.core.geometry_shader.rendering.rendering."
#define VkglTestCase_000045_2 "lines_input_triangle_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000045, VkglTestCase_000045_1, VkglTestCase_000045_2);

#define VkglTestCase_000046_1 "KHR-GLES32.core.geometry_shader.rendering.render"
#define VkglTestCase_000046_2 "ing.lines_input_points_output_line_loop_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000046, VkglTestCase_000046_1, VkglTestCase_000046_2);

#define VkglTestCase_000047_1 "KHR-GLES32.core.geometry_shader.rendering.renderin"
#define VkglTestCase_000047_2 "g.lines_input_line_strip_output_line_loop_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000047, VkglTestCase_000047_1, VkglTestCase_000047_2);

#define VkglTestCase_000048_1 "KHR-GLES32.core.geometry_shader.rendering.rendering."
#define VkglTestCase_000048_2 "lines_input_triangle_strip_output_line_loop_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000048, VkglTestCase_000048_1, VkglTestCase_000048_2);

#define VkglTestCase_000049_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.lines_"
#define VkglTestCase_000049_2 "with_adjacency_input_points_output_lines_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000049, VkglTestCase_000049_1, VkglTestCase_000049_2);

#define VkglTestCase_000050_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.lines_wi"
#define VkglTestCase_000050_2 "th_adjacency_input_line_strip_output_lines_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000050, VkglTestCase_000050_1, VkglTestCase_000050_2);

#define VkglTestCase_000051_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.lines_with"
#define VkglTestCase_000051_2 "_adjacency_input_triangle_strip_output_lines_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000051, VkglTestCase_000051_1, VkglTestCase_000051_2);

#define VkglTestCase_000052_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.line"
#define VkglTestCase_000052_2 "s_with_adjacency_input_points_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000052, VkglTestCase_000052_1, VkglTestCase_000052_2);

#define VkglTestCase_000053_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.lines_"
#define VkglTestCase_000053_2 "with_adjacency_input_line_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000053, VkglTestCase_000053_1, VkglTestCase_000053_2);

#define VkglTestCase_000054_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.lines_wi"
#define VkglTestCase_000054_2 "th_adjacency_input_triangle_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000054, VkglTestCase_000054_1, VkglTestCase_000054_2);

#define VkglTestCase_000055_1 "KHR-GLES32.core.geometry_shader.rendering.renderin"
#define VkglTestCase_000055_2 "g.triangles_input_points_output_triangles_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000055, VkglTestCase_000055_1, VkglTestCase_000055_2);

#define VkglTestCase_000056_1 "KHR-GLES32.core.geometry_shader.rendering.rendering."
#define VkglTestCase_000056_2 "triangles_input_line_strip_output_triangles_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000056, VkglTestCase_000056_1, VkglTestCase_000056_2);

#define VkglTestCase_000057_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.tr"
#define VkglTestCase_000057_2 "iangles_input_triangle_strip_output_triangles_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000057, VkglTestCase_000057_1, VkglTestCase_000057_2);

#define VkglTestCase_000058_1 "KHR-GLES32.core.geometry_shader.rendering.rendering"
#define VkglTestCase_000058_2 ".triangles_input_points_output_triangle_fan_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000058, VkglTestCase_000058_1, VkglTestCase_000058_2);

#define VkglTestCase_000059_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.t"
#define VkglTestCase_000059_2 "riangles_input_line_strip_output_triangle_fan_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000059, VkglTestCase_000059_1, VkglTestCase_000059_2);

#define VkglTestCase_000060_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.tri"
#define VkglTestCase_000060_2 "angles_input_triangle_strip_output_triangle_fan_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000060, VkglTestCase_000060_1, VkglTestCase_000060_2);

#define VkglTestCase_000061_1 "KHR-GLES32.core.geometry_shader.rendering.rendering."
#define VkglTestCase_000061_2 "triangles_input_points_output_triangle_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000061, VkglTestCase_000061_1, VkglTestCase_000061_2);

#define VkglTestCase_000062_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.tr"
#define VkglTestCase_000062_2 "iangles_input_line_strip_output_triangle_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000062, VkglTestCase_000062_1, VkglTestCase_000062_2);

#define VkglTestCase_000063_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.tria"
#define VkglTestCase_000063_2 "ngles_input_triangle_strip_output_triangle_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000063, VkglTestCase_000063_1, VkglTestCase_000063_2);

#define VkglTestCase_000064_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.triangles_"
#define VkglTestCase_000064_2 "with_adjacency_input_points_output_triangles_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000064, VkglTestCase_000064_1, VkglTestCase_000064_2);

#define VkglTestCase_000065_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.triangles_wi"
#define VkglTestCase_000065_2 "th_adjacency_input_line_strip_output_triangles_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000065, VkglTestCase_000065_1, VkglTestCase_000065_2);

#define VkglTestCase_000066_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.triangles_with"
#define VkglTestCase_000066_2 "_adjacency_input_triangle_strip_output_triangles_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000066, VkglTestCase_000066_1, VkglTestCase_000066_2);

#define VkglTestCase_000067_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.triangles_wit"
#define VkglTestCase_000067_2 "h_adjacency_input_points_output_triangle_strip_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000067, VkglTestCase_000067_1, VkglTestCase_000067_2);

#define VkglTestCase_000068_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.triangles_with_"
#define VkglTestCase_000068_2 "adjacency_input_line_strip_output_triangle_strip_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000068, VkglTestCase_000068_1, VkglTestCase_000068_2);

#define VkglTestCase_000069_1 "KHR-GLES32.core.geometry_shader.rendering.rendering.triangles_with_ad"
#define VkglTestCase_000069_2 "jacency_input_triangle_strip_output_triangle_strip_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000069, VkglTestCase_000069_1, VkglTestCase_000069_2);
