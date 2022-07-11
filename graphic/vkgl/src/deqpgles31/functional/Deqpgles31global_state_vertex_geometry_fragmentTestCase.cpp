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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024982_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.global"
#define VkglTestCase_024982_2 "_state.vertex_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024982, VkglTestCase_024982_1, VkglTestCase_024982_2);

#define VkglTestCase_024983_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.global"
#define VkglTestCase_024983_2 "_state.vertex_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024983, VkglTestCase_024983_1, VkglTestCase_024983_2);

#define VkglTestCase_024984_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.global_"
#define VkglTestCase_024984_2 "state.vertex_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024984, VkglTestCase_024984_1, VkglTestCase_024984_2);

#define VkglTestCase_024985_1 "dEQP-GLES31.functional.primitive_bounding_box.triangle"
#define VkglTestCase_024985_2 "s.global_state.vertex_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024985, VkglTestCase_024985_1, VkglTestCase_024985_2);

#define VkglTestCase_024986_1 "dEQP-GLES31.functional.primitive_bounding_box.triangle"
#define VkglTestCase_024986_2 "s.global_state.vertex_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024986, VkglTestCase_024986_1, VkglTestCase_024986_2);

#define VkglTestCase_024987_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles"
#define VkglTestCase_024987_2 ".global_state.vertex_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024987, VkglTestCase_024987_1, VkglTestCase_024987_2);

#define VkglTestCase_025022_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_s"
#define VkglTestCase_025022_2 "tate.vertex_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025022, VkglTestCase_025022_1, VkglTestCase_025022_2);

#define VkglTestCase_025023_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_s"
#define VkglTestCase_025023_2 "tate.vertex_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025023, VkglTestCase_025023_1, VkglTestCase_025023_2);

#define VkglTestCase_025024_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_st"
#define VkglTestCase_025024_2 "ate.vertex_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025024, VkglTestCase_025024_1, VkglTestCase_025024_2);

#define VkglTestCase_025025_1 "dEQP-GLES31.functional.primitive_bounding_box.lines."
#define VkglTestCase_025025_2 "global_state.vertex_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025025, VkglTestCase_025025_1, VkglTestCase_025025_2);

#define VkglTestCase_025026_1 "dEQP-GLES31.functional.primitive_bounding_box.lines."
#define VkglTestCase_025026_2 "global_state.vertex_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025026, VkglTestCase_025026_1, VkglTestCase_025026_2);

#define VkglTestCase_025027_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.g"
#define VkglTestCase_025027_2 "lobal_state.vertex_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025027, VkglTestCase_025027_1, VkglTestCase_025027_2);

#define VkglTestCase_025062_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_"
#define VkglTestCase_025062_2 "state.vertex_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025062, VkglTestCase_025062_1, VkglTestCase_025062_2);

#define VkglTestCase_025063_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_s"
#define VkglTestCase_025063_2 "tate.vertex_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025063, VkglTestCase_025063_1, VkglTestCase_025063_2);

#define VkglTestCase_025064_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_s"
#define VkglTestCase_025064_2 "tate.vertex_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025064, VkglTestCase_025064_1, VkglTestCase_025064_2);

#define VkglTestCase_025065_1 "dEQP-GLES31.functional.primitive_bounding_box.points"
#define VkglTestCase_025065_2 ".global_state.vertex_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025065, VkglTestCase_025065_1, VkglTestCase_025065_2);

#define VkglTestCase_025066_1 "dEQP-GLES31.functional.primitive_bounding_box.points."
#define VkglTestCase_025066_2 "global_state.vertex_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025066, VkglTestCase_025066_1, VkglTestCase_025066_2);

#define VkglTestCase_025067_1 "dEQP-GLES31.functional.primitive_bounding_box.points."
#define VkglTestCase_025067_2 "global_state.vertex_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025067, VkglTestCase_025067_1, VkglTestCase_025067_2);

#define VkglTestCase_025102_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.globa"
#define VkglTestCase_025102_2 "l_state.vertex_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025102, VkglTestCase_025102_1, VkglTestCase_025102_2);

#define VkglTestCase_025103_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.global"
#define VkglTestCase_025103_2 "_state.vertex_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025103, VkglTestCase_025103_1, VkglTestCase_025103_2);

#define VkglTestCase_025104_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.global"
#define VkglTestCase_025104_2 "_state.vertex_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025104, VkglTestCase_025104_1, VkglTestCase_025104_2);

#define VkglTestCase_025105_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lin"
#define VkglTestCase_025105_2 "es.global_state.vertex_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025105, VkglTestCase_025105_1, VkglTestCase_025105_2);

#define VkglTestCase_025106_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_line"
#define VkglTestCase_025106_2 "s.global_state.vertex_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025106, VkglTestCase_025106_1, VkglTestCase_025106_2);

#define VkglTestCase_025107_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_line"
#define VkglTestCase_025107_2 "s.global_state.vertex_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025107, VkglTestCase_025107_1, VkglTestCase_025107_2);

#define VkglTestCase_025142_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.globa"
#define VkglTestCase_025142_2 "l_state.vertex_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025142, VkglTestCase_025142_1, VkglTestCase_025142_2);

#define VkglTestCase_025143_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.globa"
#define VkglTestCase_025143_2 "l_state.vertex_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025143, VkglTestCase_025143_1, VkglTestCase_025143_2);

#define VkglTestCase_025144_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.global"
#define VkglTestCase_025144_2 "_state.vertex_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025144, VkglTestCase_025144_1, VkglTestCase_025144_2);

#define VkglTestCase_025145_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_poin"
#define VkglTestCase_025145_2 "ts.global_state.vertex_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025145, VkglTestCase_025145_1, VkglTestCase_025145_2);

#define VkglTestCase_025146_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_poin"
#define VkglTestCase_025146_2 "ts.global_state.vertex_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025146, VkglTestCase_025146_1, VkglTestCase_025146_2);

#define VkglTestCase_025147_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_point"
#define VkglTestCase_025147_2 "s.global_state.vertex_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025147, VkglTestCase_025147_1, VkglTestCase_025147_2);
