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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016428_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016428_2 "g.negative.type_points_primitive_lines"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016428, VkglTestCase_016428_1, VkglTestCase_016428_2);

#define VkglTestCase_016429_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016429_2 "negative.type_points_primitive_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016429, VkglTestCase_016429_1, VkglTestCase_016429_2);

#define VkglTestCase_016430_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016430_2 "negative.type_points_primitive_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016430, VkglTestCase_016430_1, VkglTestCase_016430_2);

#define VkglTestCase_016431_1 "dEQP-GLES31.functional.geometry_shading.neg"
#define VkglTestCase_016431_2 "ative.type_points_primitive_lines_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016431, VkglTestCase_016431_1, VkglTestCase_016431_2);

#define VkglTestCase_016432_1 "dEQP-GLES31.functional.geometry_shading.negat"
#define VkglTestCase_016432_2 "ive.type_points_primitive_line_strip_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016432, VkglTestCase_016432_1, VkglTestCase_016432_2);

#define VkglTestCase_016433_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016433_2 "negative.type_points_primitive_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016433, VkglTestCase_016433_1, VkglTestCase_016433_2);

#define VkglTestCase_016434_1 "dEQP-GLES31.functional.geometry_shading.ne"
#define VkglTestCase_016434_2 "gative.type_points_primitive_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016434, VkglTestCase_016434_1, VkglTestCase_016434_2);

#define VkglTestCase_016435_1 "dEQP-GLES31.functional.geometry_shading.n"
#define VkglTestCase_016435_2 "egative.type_points_primitive_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016435, VkglTestCase_016435_1, VkglTestCase_016435_2);

#define VkglTestCase_016436_1 "dEQP-GLES31.functional.geometry_shading.negat"
#define VkglTestCase_016436_2 "ive.type_points_primitive_triangles_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016436, VkglTestCase_016436_1, VkglTestCase_016436_2);

#define VkglTestCase_016437_1 "dEQP-GLES31.functional.geometry_shading.negativ"
#define VkglTestCase_016437_2 "e.type_points_primitive_triangle_strip_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016437, VkglTestCase_016437_1, VkglTestCase_016437_2);

#define VkglTestCase_016438_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016438_2 "g.negative.type_lines_primitive_points"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016438, VkglTestCase_016438_1, VkglTestCase_016438_2);

#define VkglTestCase_016439_1 "dEQP-GLES31.functional.geometry_shading.ne"
#define VkglTestCase_016439_2 "gative.type_lines_primitive_lines_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016439, VkglTestCase_016439_1, VkglTestCase_016439_2);

#define VkglTestCase_016440_1 "dEQP-GLES31.functional.geometry_shading.negat"
#define VkglTestCase_016440_2 "ive.type_lines_primitive_line_strip_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016440, VkglTestCase_016440_1, VkglTestCase_016440_2);

#define VkglTestCase_016441_1 "dEQP-GLES31.functional.geometry_shading"
#define VkglTestCase_016441_2 ".negative.type_lines_primitive_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016441, VkglTestCase_016441_1, VkglTestCase_016441_2);

#define VkglTestCase_016442_1 "dEQP-GLES31.functional.geometry_shading.ne"
#define VkglTestCase_016442_2 "gative.type_lines_primitive_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016442, VkglTestCase_016442_1, VkglTestCase_016442_2);

#define VkglTestCase_016443_1 "dEQP-GLES31.functional.geometry_shading.n"
#define VkglTestCase_016443_2 "egative.type_lines_primitive_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016443, VkglTestCase_016443_1, VkglTestCase_016443_2);

#define VkglTestCase_016444_1 "dEQP-GLES31.functional.geometry_shading.nega"
#define VkglTestCase_016444_2 "tive.type_lines_primitive_triangles_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016444, VkglTestCase_016444_1, VkglTestCase_016444_2);

#define VkglTestCase_016445_1 "dEQP-GLES31.functional.geometry_shading.negativ"
#define VkglTestCase_016445_2 "e.type_lines_primitive_triangle_strip_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016445, VkglTestCase_016445_1, VkglTestCase_016445_2);

#define VkglTestCase_016446_1 "dEQP-GLES31.functional.geometry_shading.neg"
#define VkglTestCase_016446_2 "ative.type_lines_adjacency_primitive_points"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016446, VkglTestCase_016446_1, VkglTestCase_016446_2);

#define VkglTestCase_016447_1 "dEQP-GLES31.functional.geometry_shading.ne"
#define VkglTestCase_016447_2 "gative.type_lines_adjacency_primitive_lines"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016447, VkglTestCase_016447_1, VkglTestCase_016447_2);

#define VkglTestCase_016448_1 "dEQP-GLES31.functional.geometry_shading.nega"
#define VkglTestCase_016448_2 "tive.type_lines_adjacency_primitive_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016448, VkglTestCase_016448_1, VkglTestCase_016448_2);

#define VkglTestCase_016449_1 "dEQP-GLES31.functional.geometry_shading.negat"
#define VkglTestCase_016449_2 "ive.type_lines_adjacency_primitive_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016449, VkglTestCase_016449_1, VkglTestCase_016449_2);

#define VkglTestCase_016450_1 "dEQP-GLES31.functional.geometry_shading.nega"
#define VkglTestCase_016450_2 "tive.type_lines_adjacency_primitive_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016450, VkglTestCase_016450_1, VkglTestCase_016450_2);

#define VkglTestCase_016451_1 "dEQP-GLES31.functional.geometry_shading.negativ"
#define VkglTestCase_016451_2 "e.type_lines_adjacency_primitive_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016451, VkglTestCase_016451_1, VkglTestCase_016451_2);

#define VkglTestCase_016452_1 "dEQP-GLES31.functional.geometry_shading.negati"
#define VkglTestCase_016452_2 "ve.type_lines_adjacency_primitive_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016452, VkglTestCase_016452_1, VkglTestCase_016452_2);

#define VkglTestCase_016453_1 "dEQP-GLES31.functional.geometry_shading.negative."
#define VkglTestCase_016453_2 "type_lines_adjacency_primitive_triangles_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016453, VkglTestCase_016453_1, VkglTestCase_016453_2);

#define VkglTestCase_016454_1 "dEQP-GLES31.functional.geometry_shading.negative.typ"
#define VkglTestCase_016454_2 "e_lines_adjacency_primitive_triangle_strip_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016454, VkglTestCase_016454_1, VkglTestCase_016454_2);

#define VkglTestCase_016455_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016455_2 "negative.type_triangles_primitive_points"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016455, VkglTestCase_016455_1, VkglTestCase_016455_2);

#define VkglTestCase_016456_1 "dEQP-GLES31.functional.geometry_shading"
#define VkglTestCase_016456_2 ".negative.type_triangles_primitive_lines"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016456, VkglTestCase_016456_1, VkglTestCase_016456_2);

#define VkglTestCase_016457_1 "dEQP-GLES31.functional.geometry_shading.n"
#define VkglTestCase_016457_2 "egative.type_triangles_primitive_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016457, VkglTestCase_016457_1, VkglTestCase_016457_2);

#define VkglTestCase_016458_1 "dEQP-GLES31.functional.geometry_shading.ne"
#define VkglTestCase_016458_2 "gative.type_triangles_primitive_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016458, VkglTestCase_016458_1, VkglTestCase_016458_2);

#define VkglTestCase_016459_1 "dEQP-GLES31.functional.geometry_shading.nega"
#define VkglTestCase_016459_2 "tive.type_triangles_primitive_lines_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016459, VkglTestCase_016459_1, VkglTestCase_016459_2);

#define VkglTestCase_016460_1 "dEQP-GLES31.functional.geometry_shading.negativ"
#define VkglTestCase_016460_2 "e.type_triangles_primitive_line_strip_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016460, VkglTestCase_016460_1, VkglTestCase_016460_2);

#define VkglTestCase_016461_1 "dEQP-GLES31.functional.geometry_shading.negati"
#define VkglTestCase_016461_2 "ve.type_triangles_primitive_triangles_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016461, VkglTestCase_016461_1, VkglTestCase_016461_2);

#define VkglTestCase_016462_1 "dEQP-GLES31.functional.geometry_shading.negative."
#define VkglTestCase_016462_2 "type_triangles_primitive_triangle_strip_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016462, VkglTestCase_016462_1, VkglTestCase_016462_2);

#define VkglTestCase_016463_1 "dEQP-GLES31.functional.geometry_shading.negat"
#define VkglTestCase_016463_2 "ive.type_triangles_adjacency_primitive_points"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016463, VkglTestCase_016463_1, VkglTestCase_016463_2);

#define VkglTestCase_016464_1 "dEQP-GLES31.functional.geometry_shading.nega"
#define VkglTestCase_016464_2 "tive.type_triangles_adjacency_primitive_lines"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016464, VkglTestCase_016464_1, VkglTestCase_016464_2);

#define VkglTestCase_016465_1 "dEQP-GLES31.functional.geometry_shading.negati"
#define VkglTestCase_016465_2 "ve.type_triangles_adjacency_primitive_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016465, VkglTestCase_016465_1, VkglTestCase_016465_2);

#define VkglTestCase_016466_1 "dEQP-GLES31.functional.geometry_shading.negativ"
#define VkglTestCase_016466_2 "e.type_triangles_adjacency_primitive_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016466, VkglTestCase_016466_1, VkglTestCase_016466_2);

#define VkglTestCase_016467_1 "dEQP-GLES31.functional.geometry_shading.negative."
#define VkglTestCase_016467_2 "type_triangles_adjacency_primitive_lines_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016467, VkglTestCase_016467_1, VkglTestCase_016467_2);

#define VkglTestCase_016468_1 "dEQP-GLES31.functional.geometry_shading.negative.typ"
#define VkglTestCase_016468_2 "e_triangles_adjacency_primitive_line_strip_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016468, VkglTestCase_016468_1, VkglTestCase_016468_2);

#define VkglTestCase_016469_1 "dEQP-GLES31.functional.geometry_shading.negati"
#define VkglTestCase_016469_2 "ve.type_triangles_adjacency_primitive_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016469, VkglTestCase_016469_1, VkglTestCase_016469_2);

#define VkglTestCase_016470_1 "dEQP-GLES31.functional.geometry_shading.negative."
#define VkglTestCase_016470_2 "type_triangles_adjacency_primitive_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016470, VkglTestCase_016470_1, VkglTestCase_016470_2);

#define VkglTestCase_016471_1 "dEQP-GLES31.functional.geometry_shading.negative"
#define VkglTestCase_016471_2 ".type_triangles_adjacency_primitive_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016471, VkglTestCase_016471_1, VkglTestCase_016471_2);
