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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025000_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellation_set_pe"
#define VkglTestCase_025000_2 "r_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025000, VkglTestCase_025000_1, VkglTestCase_025000_2);

#define VkglTestCase_025001_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellation_set_pe"
#define VkglTestCase_025001_2 "r_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025001, VkglTestCase_025001_1, VkglTestCase_025001_2);

#define VkglTestCase_025002_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellation_set_per"
#define VkglTestCase_025002_2 "_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025002, VkglTestCase_025002_1, VkglTestCase_025002_2);

#define VkglTestCase_025003_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellatio"
#define VkglTestCase_025003_2 "n_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025003, VkglTestCase_025003_1, VkglTestCase_025003_2);

#define VkglTestCase_025004_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellatio"
#define VkglTestCase_025004_2 "n_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025004, VkglTestCase_025004_1, VkglTestCase_025004_2);

#define VkglTestCase_025005_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellation"
#define VkglTestCase_025005_2 "_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025005, VkglTestCase_025005_1, VkglTestCase_025005_2);

#define VkglTestCase_025040_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_set_per_"
#define VkglTestCase_025040_2 "draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025040, VkglTestCase_025040_1, VkglTestCase_025040_2);

#define VkglTestCase_025041_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_set_per_"
#define VkglTestCase_025041_2 "draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025041, VkglTestCase_025041_1, VkglTestCase_025041_2);

#define VkglTestCase_025042_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_set_per_d"
#define VkglTestCase_025042_2 "raw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025042, VkglTestCase_025042_1, VkglTestCase_025042_2);

#define VkglTestCase_025043_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_"
#define VkglTestCase_025043_2 "set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025043, VkglTestCase_025043_1, VkglTestCase_025043_2);

#define VkglTestCase_025044_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_"
#define VkglTestCase_025044_2 "set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025044, VkglTestCase_025044_1, VkglTestCase_025044_2);

#define VkglTestCase_025045_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_s"
#define VkglTestCase_025045_2 "et_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025045, VkglTestCase_025045_1, VkglTestCase_025045_2);

#define VkglTestCase_025080_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_set_per"
#define VkglTestCase_025080_2 "_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025080, VkglTestCase_025080_1, VkglTestCase_025080_2);

#define VkglTestCase_025081_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_set_per_"
#define VkglTestCase_025081_2 "draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025081, VkglTestCase_025081_1, VkglTestCase_025081_2);

#define VkglTestCase_025082_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_set_per_"
#define VkglTestCase_025082_2 "draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025082, VkglTestCase_025082_1, VkglTestCase_025082_2);

#define VkglTestCase_025083_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation"
#define VkglTestCase_025083_2 "_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025083, VkglTestCase_025083_1, VkglTestCase_025083_2);

#define VkglTestCase_025084_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_"
#define VkglTestCase_025084_2 "set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025084, VkglTestCase_025084_1, VkglTestCase_025084_2);

#define VkglTestCase_025085_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_"
#define VkglTestCase_025085_2 "set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025085, VkglTestCase_025085_1, VkglTestCase_025085_2);

#define VkglTestCase_025120_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellation_set_p"
#define VkglTestCase_025120_2 "er_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025120, VkglTestCase_025120_1, VkglTestCase_025120_2);

#define VkglTestCase_025121_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellation_set_pe"
#define VkglTestCase_025121_2 "r_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025121, VkglTestCase_025121_1, VkglTestCase_025121_2);

#define VkglTestCase_025122_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellation_set_pe"
#define VkglTestCase_025122_2 "r_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025122, VkglTestCase_025122_1, VkglTestCase_025122_2);

#define VkglTestCase_025123_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellati"
#define VkglTestCase_025123_2 "on_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025123, VkglTestCase_025123_1, VkglTestCase_025123_2);

#define VkglTestCase_025124_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellatio"
#define VkglTestCase_025124_2 "n_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025124, VkglTestCase_025124_1, VkglTestCase_025124_2);

#define VkglTestCase_025125_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellatio"
#define VkglTestCase_025125_2 "n_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025125, VkglTestCase_025125_1, VkglTestCase_025125_2);

#define VkglTestCase_025160_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellation_set_p"
#define VkglTestCase_025160_2 "er_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025160, VkglTestCase_025160_1, VkglTestCase_025160_2);

#define VkglTestCase_025161_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellation_set_p"
#define VkglTestCase_025161_2 "er_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025161, VkglTestCase_025161_1, VkglTestCase_025161_2);

#define VkglTestCase_025162_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellation_set_pe"
#define VkglTestCase_025162_2 "r_draw.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025162, VkglTestCase_025162_1, VkglTestCase_025162_2);

#define VkglTestCase_025163_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellati"
#define VkglTestCase_025163_2 "on_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025163, VkglTestCase_025163_1, VkglTestCase_025163_2);

#define VkglTestCase_025164_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellati"
#define VkglTestCase_025164_2 "on_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025164, VkglTestCase_025164_1, VkglTestCase_025164_2);

#define VkglTestCase_025165_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellatio"
#define VkglTestCase_025165_2 "n_set_per_draw.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025165, VkglTestCase_025165_1, VkglTestCase_025165_2);
