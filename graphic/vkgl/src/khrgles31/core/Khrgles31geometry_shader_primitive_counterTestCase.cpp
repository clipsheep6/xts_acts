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

#define VkglTestCase_002454_1 "KHR-GLES31.core.geometry_shader."
#define VkglTestCase_002454_2 "primitive_counter.point_to_point"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002454, VkglTestCase_002454_1, VkglTestCase_002454_2);

#define VkglTestCase_002455_1 "KHR-GLES31.core.geometry_shader.pri"
#define VkglTestCase_002455_2 "mitive_counter.points_to_line_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002455, VkglTestCase_002455_1, VkglTestCase_002455_2);

#define VkglTestCase_002456_1 "KHR-GLES31.core.geometry_shader.primi"
#define VkglTestCase_002456_2 "tive_counter.points_to_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002456, VkglTestCase_002456_1, VkglTestCase_002456_2);

#define VkglTestCase_002457_1 "KHR-GLES31.core.geometry_shader."
#define VkglTestCase_002457_2 "primitive_counter.lines_to_points"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002457, VkglTestCase_002457_1, VkglTestCase_002457_2);

#define VkglTestCase_002458_1 "KHR-GLES31.core.geometry_shader.pr"
#define VkglTestCase_002458_2 "imitive_counter.lines_to_line_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002458, VkglTestCase_002458_1, VkglTestCase_002458_2);

#define VkglTestCase_002459_1 "KHR-GLES31.core.geometry_shader.prim"
#define VkglTestCase_002459_2 "itive_counter.lines_to_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002459, VkglTestCase_002459_1, VkglTestCase_002459_2);

#define VkglTestCase_002460_1 "KHR-GLES31.core.geometry_shader.pr"
#define VkglTestCase_002460_2 "imitive_counter.triangles_to_points"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002460, VkglTestCase_002460_1, VkglTestCase_002460_2);

#define VkglTestCase_002461_1 "KHR-GLES31.core.geometry_shader.prim"
#define VkglTestCase_002461_2 "itive_counter.triangles_to_line_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002461, VkglTestCase_002461_1, VkglTestCase_002461_2);

#define VkglTestCase_002462_1 "KHR-GLES31.core.geometry_shader.primit"
#define VkglTestCase_002462_2 "ive_counter.triangles_to_triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002462, VkglTestCase_002462_1, VkglTestCase_002462_2);

#define VkglTestCase_002463_1 "KHR-GLES31.core.geometry_shader.pr"
#define VkglTestCase_002463_2 "imitive_counter.points_to_points_rp"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002463, VkglTestCase_002463_1, VkglTestCase_002463_2);

#define VkglTestCase_002464_1 "KHR-GLES31.core.geometry_shader.prim"
#define VkglTestCase_002464_2 "itive_counter.points_to_line_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002464, VkglTestCase_002464_1, VkglTestCase_002464_2);

#define VkglTestCase_002465_1 "KHR-GLES31.core.geometry_shader.primit"
#define VkglTestCase_002465_2 "ive_counter.points_to_triangle_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002465, VkglTestCase_002465_1, VkglTestCase_002465_2);

#define VkglTestCase_002466_1 "KHR-GLES31.core.geometry_shader.pr"
#define VkglTestCase_002466_2 "imitive_counter.lines_to_points_rp"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002466, VkglTestCase_002466_1, VkglTestCase_002466_2);

#define VkglTestCase_002467_1 "KHR-GLES31.core.geometry_shader.prim"
#define VkglTestCase_002467_2 "itive_counter.lines_to_line_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002467, VkglTestCase_002467_1, VkglTestCase_002467_2);

#define VkglTestCase_002468_1 "KHR-GLES31.core.geometry_shader.primit"
#define VkglTestCase_002468_2 "ive_counter.lines_to_triangle_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002468, VkglTestCase_002468_1, VkglTestCase_002468_2);

#define VkglTestCase_002469_1 "KHR-GLES31.core.geometry_shader.prim"
#define VkglTestCase_002469_2 "itive_counter.triangles_to_points_rp"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002469, VkglTestCase_002469_1, VkglTestCase_002469_2);

#define VkglTestCase_002470_1 "KHR-GLES31.core.geometry_shader.primit"
#define VkglTestCase_002470_2 "ive_counter.triangles_to_line_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002470, VkglTestCase_002470_1, VkglTestCase_002470_2);

#define VkglTestCase_002471_1 "KHR-GLES31.core.geometry_shader.primitiv"
#define VkglTestCase_002471_2 "e_counter.triangles_to_triangle_strip_rp"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002471, VkglTestCase_002471_1, VkglTestCase_002471_2);

#define VkglTestCase_002472_1 "KHR-GLES31.core.geometry_shader.primit"
#define VkglTestCase_002472_2 "ive_counter.primitive_id_from_fragment"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002472, VkglTestCase_002472_1, VkglTestCase_002472_2);
