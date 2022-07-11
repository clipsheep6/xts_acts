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

#define VkglTestCase_002415_1 "KHR-GLES31.core.geometry_shader.renderi"
#define VkglTestCase_002415_2 "ng.rendering.points_input_points_output"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002415, VkglTestCase_002415_1, VkglTestCase_002415_2);

#define VkglTestCase_002416_1 "KHR-GLES31.core.geometry_shader.rendering"
#define VkglTestCase_002416_2 ".rendering.points_input_line_strip_output"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002416, VkglTestCase_002416_1, VkglTestCase_002416_2);

#define VkglTestCase_002417_1 "KHR-GLES31.core.geometry_shader.renderin"
#define VkglTestCase_002417_2 "g.rendering.points_input_triangles_output"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002417, VkglTestCase_002417_1, VkglTestCase_002417_2);

#define VkglTestCase_002418_1 "KHR-GLES31.core.geometry_shader.rendering.rend"
#define VkglTestCase_002418_2 "ering.lines_input_points_output_lines_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002418, VkglTestCase_002418_1, VkglTestCase_002418_2);

#define VkglTestCase_002419_1 "KHR-GLES31.core.geometry_shader.rendering.render"
#define VkglTestCase_002419_2 "ing.lines_input_line_strip_output_lines_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002419, VkglTestCase_002419_1, VkglTestCase_002419_2);

#define VkglTestCase_002420_1 "KHR-GLES31.core.geometry_shader.rendering.renderin"
#define VkglTestCase_002420_2 "g.lines_input_triangle_strip_output_lines_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002420, VkglTestCase_002420_1, VkglTestCase_002420_2);

#define VkglTestCase_002421_1 "KHR-GLES31.core.geometry_shader.rendering.render"
#define VkglTestCase_002421_2 "ing.lines_input_points_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002421, VkglTestCase_002421_1, VkglTestCase_002421_2);

#define VkglTestCase_002422_1 "KHR-GLES31.core.geometry_shader.rendering.renderin"
#define VkglTestCase_002422_2 "g.lines_input_line_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002422, VkglTestCase_002422_1, VkglTestCase_002422_2);

#define VkglTestCase_002423_1 "KHR-GLES31.core.geometry_shader.rendering.rendering."
#define VkglTestCase_002423_2 "lines_input_triangle_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002423, VkglTestCase_002423_1, VkglTestCase_002423_2);

#define VkglTestCase_002424_1 "KHR-GLES31.core.geometry_shader.rendering.render"
#define VkglTestCase_002424_2 "ing.lines_input_points_output_line_loop_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002424, VkglTestCase_002424_1, VkglTestCase_002424_2);

#define VkglTestCase_002425_1 "KHR-GLES31.core.geometry_shader.rendering.renderin"
#define VkglTestCase_002425_2 "g.lines_input_line_strip_output_line_loop_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002425, VkglTestCase_002425_1, VkglTestCase_002425_2);

#define VkglTestCase_002426_1 "KHR-GLES31.core.geometry_shader.rendering.rendering."
#define VkglTestCase_002426_2 "lines_input_triangle_strip_output_line_loop_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002426, VkglTestCase_002426_1, VkglTestCase_002426_2);

#define VkglTestCase_002427_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.lines_"
#define VkglTestCase_002427_2 "with_adjacency_input_points_output_lines_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002427, VkglTestCase_002427_1, VkglTestCase_002427_2);

#define VkglTestCase_002428_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.lines_wi"
#define VkglTestCase_002428_2 "th_adjacency_input_line_strip_output_lines_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002428, VkglTestCase_002428_1, VkglTestCase_002428_2);

#define VkglTestCase_002429_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.lines_with"
#define VkglTestCase_002429_2 "_adjacency_input_triangle_strip_output_lines_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002429, VkglTestCase_002429_1, VkglTestCase_002429_2);

#define VkglTestCase_002430_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.line"
#define VkglTestCase_002430_2 "s_with_adjacency_input_points_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002430, VkglTestCase_002430_1, VkglTestCase_002430_2);

#define VkglTestCase_002431_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.lines_"
#define VkglTestCase_002431_2 "with_adjacency_input_line_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002431, VkglTestCase_002431_1, VkglTestCase_002431_2);

#define VkglTestCase_002432_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.lines_wi"
#define VkglTestCase_002432_2 "th_adjacency_input_triangle_strip_output_line_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002432, VkglTestCase_002432_1, VkglTestCase_002432_2);

#define VkglTestCase_002433_1 "KHR-GLES31.core.geometry_shader.rendering.renderin"
#define VkglTestCase_002433_2 "g.triangles_input_points_output_triangles_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002433, VkglTestCase_002433_1, VkglTestCase_002433_2);

#define VkglTestCase_002434_1 "KHR-GLES31.core.geometry_shader.rendering.rendering."
#define VkglTestCase_002434_2 "triangles_input_line_strip_output_triangles_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002434, VkglTestCase_002434_1, VkglTestCase_002434_2);

#define VkglTestCase_002435_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.tr"
#define VkglTestCase_002435_2 "iangles_input_triangle_strip_output_triangles_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002435, VkglTestCase_002435_1, VkglTestCase_002435_2);

#define VkglTestCase_002436_1 "KHR-GLES31.core.geometry_shader.rendering.rendering"
#define VkglTestCase_002436_2 ".triangles_input_points_output_triangle_fan_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002436, VkglTestCase_002436_1, VkglTestCase_002436_2);

#define VkglTestCase_002437_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.t"
#define VkglTestCase_002437_2 "riangles_input_line_strip_output_triangle_fan_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002437, VkglTestCase_002437_1, VkglTestCase_002437_2);

#define VkglTestCase_002438_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.tri"
#define VkglTestCase_002438_2 "angles_input_triangle_strip_output_triangle_fan_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002438, VkglTestCase_002438_1, VkglTestCase_002438_2);

#define VkglTestCase_002439_1 "KHR-GLES31.core.geometry_shader.rendering.rendering."
#define VkglTestCase_002439_2 "triangles_input_points_output_triangle_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002439, VkglTestCase_002439_1, VkglTestCase_002439_2);

#define VkglTestCase_002440_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.tr"
#define VkglTestCase_002440_2 "iangles_input_line_strip_output_triangle_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002440, VkglTestCase_002440_1, VkglTestCase_002440_2);

#define VkglTestCase_002441_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.tria"
#define VkglTestCase_002441_2 "ngles_input_triangle_strip_output_triangle_strip_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002441, VkglTestCase_002441_1, VkglTestCase_002441_2);

#define VkglTestCase_002442_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.triangles_"
#define VkglTestCase_002442_2 "with_adjacency_input_points_output_triangles_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002442, VkglTestCase_002442_1, VkglTestCase_002442_2);

#define VkglTestCase_002443_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.triangles_wi"
#define VkglTestCase_002443_2 "th_adjacency_input_line_strip_output_triangles_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002443, VkglTestCase_002443_1, VkglTestCase_002443_2);

#define VkglTestCase_002444_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.triangles_with"
#define VkglTestCase_002444_2 "_adjacency_input_triangle_strip_output_triangles_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002444, VkglTestCase_002444_1, VkglTestCase_002444_2);

#define VkglTestCase_002445_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.triangles_wit"
#define VkglTestCase_002445_2 "h_adjacency_input_points_output_triangle_strip_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002445, VkglTestCase_002445_1, VkglTestCase_002445_2);

#define VkglTestCase_002446_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.triangles_with_"
#define VkglTestCase_002446_2 "adjacency_input_line_strip_output_triangle_strip_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002446, VkglTestCase_002446_1, VkglTestCase_002446_2);

#define VkglTestCase_002447_1 "KHR-GLES31.core.geometry_shader.rendering.rendering.triangles_with_ad"
#define VkglTestCase_002447_2 "jacency_input_triangle_strip_output_triangle_strip_adjacency_drawcall"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002447, VkglTestCase_002447_1, VkglTestCase_002447_2);
