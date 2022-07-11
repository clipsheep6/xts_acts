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

#define VkglTestCase_000009_1 "KHR-GLESEXT.geometry_shader.rendering"
#define VkglTestCase_000009_2 ".rendering.points_input_points_output"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000009, VkglTestCase_000009_1, VkglTestCase_000009_2);

#define VkglTestCase_000010_1 "KHR-GLESEXT.geometry_shader.rendering.r"
#define VkglTestCase_000010_2 "endering.points_input_line_strip_output"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000010, VkglTestCase_000010_1, VkglTestCase_000010_2);

#define VkglTestCase_000011_1 "KHR-GLESEXT.geometry_shader.rendering."
#define VkglTestCase_000011_2 "rendering.points_input_triangles_output"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000011, VkglTestCase_000011_1, VkglTestCase_000011_2);

#define VkglTestCase_000012_1 "KHR-GLESEXT.geometry_shader.rendering.render"
#define VkglTestCase_000012_2 "ing.lines_input_points_output_lines_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000012, VkglTestCase_000012_1, VkglTestCase_000012_2);

#define VkglTestCase_000013_1 "KHR-GLESEXT.geometry_shader.rendering.renderin"
#define VkglTestCase_000013_2 "g.lines_input_line_strip_output_lines_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000013, VkglTestCase_000013_1, VkglTestCase_000013_2);

#define VkglTestCase_000014_1 "KHR-GLESEXT.geometry_shader.rendering.rendering."
#define VkglTestCase_000014_2 "lines_input_triangle_strip_output_lines_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000014, VkglTestCase_000014_1, VkglTestCase_000014_2);

#define VkglTestCase_000015_1 "KHR-GLESEXT.geometry_shader.rendering.renderin"
#define VkglTestCase_000015_2 "g.lines_input_points_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000015, VkglTestCase_000015_1, VkglTestCase_000015_2);

#define VkglTestCase_000016_1 "KHR-GLESEXT.geometry_shader.rendering.rendering."
#define VkglTestCase_000016_2 "lines_input_line_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000016, VkglTestCase_000016_1, VkglTestCase_000016_2);

#define VkglTestCase_000017_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.li"
#define VkglTestCase_000017_2 "nes_input_triangle_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000017, VkglTestCase_000017_1, VkglTestCase_000017_2);

#define VkglTestCase_000018_1 "KHR-GLESEXT.geometry_shader.rendering.renderin"
#define VkglTestCase_000018_2 "g.lines_input_points_output_line_loop_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000018, VkglTestCase_000018_1, VkglTestCase_000018_2);

#define VkglTestCase_000019_1 "KHR-GLESEXT.geometry_shader.rendering.rendering."
#define VkglTestCase_000019_2 "lines_input_line_strip_output_line_loop_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000019, VkglTestCase_000019_1, VkglTestCase_000019_2);

#define VkglTestCase_000020_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.li"
#define VkglTestCase_000020_2 "nes_input_triangle_strip_output_line_loop_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000020, VkglTestCase_000020_1, VkglTestCase_000020_2);

#define VkglTestCase_000021_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.lines_wi"
#define VkglTestCase_000021_2 "th_adjacency_input_points_output_lines_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000021, VkglTestCase_000021_1, VkglTestCase_000021_2);

#define VkglTestCase_000022_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.lines_with"
#define VkglTestCase_000022_2 "_adjacency_input_line_strip_output_lines_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000022, VkglTestCase_000022_1, VkglTestCase_000022_2);

#define VkglTestCase_000023_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.lines_with_a"
#define VkglTestCase_000023_2 "djacency_input_triangle_strip_output_lines_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000023, VkglTestCase_000023_1, VkglTestCase_000023_2);

#define VkglTestCase_000024_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.lines_"
#define VkglTestCase_000024_2 "with_adjacency_input_points_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000024, VkglTestCase_000024_1, VkglTestCase_000024_2);

#define VkglTestCase_000025_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.lines_wi"
#define VkglTestCase_000025_2 "th_adjacency_input_line_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000025, VkglTestCase_000025_1, VkglTestCase_000025_2);

#define VkglTestCase_000026_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.lines_with"
#define VkglTestCase_000026_2 "_adjacency_input_triangle_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000026, VkglTestCase_000026_1, VkglTestCase_000026_2);

#define VkglTestCase_000027_1 "KHR-GLESEXT.geometry_shader.rendering.rendering."
#define VkglTestCase_000027_2 "triangles_input_points_output_triangles_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000027, VkglTestCase_000027_1, VkglTestCase_000027_2);

#define VkglTestCase_000028_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.tr"
#define VkglTestCase_000028_2 "iangles_input_line_strip_output_triangles_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000028, VkglTestCase_000028_1, VkglTestCase_000028_2);

#define VkglTestCase_000029_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.tria"
#define VkglTestCase_000029_2 "ngles_input_triangle_strip_output_triangles_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000029, VkglTestCase_000029_1, VkglTestCase_000029_2);

#define VkglTestCase_000030_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.t"
#define VkglTestCase_000030_2 "riangles_input_points_output_triangle_fan_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000030, VkglTestCase_000030_1, VkglTestCase_000030_2);

#define VkglTestCase_000031_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.tri"
#define VkglTestCase_000031_2 "angles_input_line_strip_output_triangle_fan_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000031, VkglTestCase_000031_1, VkglTestCase_000031_2);

#define VkglTestCase_000032_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.trian"
#define VkglTestCase_000032_2 "gles_input_triangle_strip_output_triangle_fan_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000032, VkglTestCase_000032_1, VkglTestCase_000032_2);

#define VkglTestCase_000033_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.tr"
#define VkglTestCase_000033_2 "iangles_input_points_output_triangle_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000033, VkglTestCase_000033_1, VkglTestCase_000033_2);

#define VkglTestCase_000034_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.tria"
#define VkglTestCase_000034_2 "ngles_input_line_strip_output_triangle_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000034, VkglTestCase_000034_1, VkglTestCase_000034_2);

#define VkglTestCase_000035_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.triang"
#define VkglTestCase_000035_2 "les_input_triangle_strip_output_triangle_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000035, VkglTestCase_000035_1, VkglTestCase_000035_2);

#define VkglTestCase_000036_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.triangles_wi"
#define VkglTestCase_000036_2 "th_adjacency_input_points_output_triangles_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000036, VkglTestCase_000036_1, VkglTestCase_000036_2);

#define VkglTestCase_000037_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.triangles_with"
#define VkglTestCase_000037_2 "_adjacency_input_line_strip_output_triangles_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000037, VkglTestCase_000037_1, VkglTestCase_000037_2);

#define VkglTestCase_000038_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.triangles_with_a"
#define VkglTestCase_000038_2 "djacency_input_triangle_strip_output_triangles_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000038, VkglTestCase_000038_1, VkglTestCase_000038_2);

#define VkglTestCase_000039_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.triangles_with_"
#define VkglTestCase_000039_2 "adjacency_input_points_output_triangle_strip_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000039, VkglTestCase_000039_1, VkglTestCase_000039_2);

#define VkglTestCase_000040_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.triangles_with_ad"
#define VkglTestCase_000040_2 "jacency_input_line_strip_output_triangle_strip_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000040, VkglTestCase_000040_1, VkglTestCase_000040_2);

#define VkglTestCase_000041_1 "KHR-GLESEXT.geometry_shader.rendering.rendering.triangles_with_adja"
#define VkglTestCase_000041_2 "cency_input_triangle_strip_output_triangle_strip_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000041, VkglTestCase_000041_1, VkglTestCase_000041_2);
