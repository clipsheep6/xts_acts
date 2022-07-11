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

#define VkglTestCase_024988_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.global_state"
#define VkglTestCase_024988_2 ".vertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024988, VkglTestCase_024988_1, VkglTestCase_024988_2);

#define VkglTestCase_024989_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.global_state."
#define VkglTestCase_024989_2 "vertex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024989, VkglTestCase_024989_1, VkglTestCase_024989_2);

#define VkglTestCase_024990_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.global_state."
#define VkglTestCase_024990_2 "vertex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024990, VkglTestCase_024990_1, VkglTestCase_024990_2);

#define VkglTestCase_024991_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.glob"
#define VkglTestCase_024991_2 "al_state.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024991, VkglTestCase_024991_1, VkglTestCase_024991_2);

#define VkglTestCase_024992_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.globa"
#define VkglTestCase_024992_2 "l_state.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024992, VkglTestCase_024992_1, VkglTestCase_024992_2);

#define VkglTestCase_024993_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.globa"
#define VkglTestCase_024993_2 "l_state.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024993, VkglTestCase_024993_1, VkglTestCase_024993_2);

#define VkglTestCase_025028_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_state.v"
#define VkglTestCase_025028_2 "ertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025028, VkglTestCase_025028_1, VkglTestCase_025028_2);

#define VkglTestCase_025029_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_state.ve"
#define VkglTestCase_025029_2 "rtex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025029, VkglTestCase_025029_1, VkglTestCase_025029_2);

#define VkglTestCase_025030_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_state.ve"
#define VkglTestCase_025030_2 "rtex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025030, VkglTestCase_025030_1, VkglTestCase_025030_2);

#define VkglTestCase_025031_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global"
#define VkglTestCase_025031_2 "_state.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025031, VkglTestCase_025031_1, VkglTestCase_025031_2);

#define VkglTestCase_025032_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_"
#define VkglTestCase_025032_2 "state.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025032, VkglTestCase_025032_1, VkglTestCase_025032_2);

#define VkglTestCase_025033_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_"
#define VkglTestCase_025033_2 "state.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025033, VkglTestCase_025033_1, VkglTestCase_025033_2);

#define VkglTestCase_025068_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_state.v"
#define VkglTestCase_025068_2 "ertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025068, VkglTestCase_025068_1, VkglTestCase_025068_2);

#define VkglTestCase_025069_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_state.v"
#define VkglTestCase_025069_2 "ertex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025069, VkglTestCase_025069_1, VkglTestCase_025069_2);

#define VkglTestCase_025070_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_state.ve"
#define VkglTestCase_025070_2 "rtex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025070, VkglTestCase_025070_1, VkglTestCase_025070_2);

#define VkglTestCase_025071_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global"
#define VkglTestCase_025071_2 "_state.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025071, VkglTestCase_025071_1, VkglTestCase_025071_2);

#define VkglTestCase_025072_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global"
#define VkglTestCase_025072_2 "_state.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025072, VkglTestCase_025072_1, VkglTestCase_025072_2);

#define VkglTestCase_025073_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_"
#define VkglTestCase_025073_2 "state.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025073, VkglTestCase_025073_1, VkglTestCase_025073_2);

#define VkglTestCase_025108_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.global_state"
#define VkglTestCase_025108_2 ".vertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025108, VkglTestCase_025108_1, VkglTestCase_025108_2);

#define VkglTestCase_025109_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.global_state"
#define VkglTestCase_025109_2 ".vertex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025109, VkglTestCase_025109_1, VkglTestCase_025109_2);

#define VkglTestCase_025110_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.global_state."
#define VkglTestCase_025110_2 "vertex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025110, VkglTestCase_025110_1, VkglTestCase_025110_2);

#define VkglTestCase_025111_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.glob"
#define VkglTestCase_025111_2 "al_state.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025111, VkglTestCase_025111_1, VkglTestCase_025111_2);

#define VkglTestCase_025112_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.glob"
#define VkglTestCase_025112_2 "al_state.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025112, VkglTestCase_025112_1, VkglTestCase_025112_2);

#define VkglTestCase_025113_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.globa"
#define VkglTestCase_025113_2 "l_state.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025113, VkglTestCase_025113_1, VkglTestCase_025113_2);

#define VkglTestCase_025148_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.global_stat"
#define VkglTestCase_025148_2 "e.vertex_tessellation_geometry_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025148, VkglTestCase_025148_1, VkglTestCase_025148_2);

#define VkglTestCase_025149_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.global_state"
#define VkglTestCase_025149_2 ".vertex_tessellation_geometry_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025149, VkglTestCase_025149_1, VkglTestCase_025149_2);

#define VkglTestCase_025150_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.global_state"
#define VkglTestCase_025150_2 ".vertex_tessellation_geometry_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025150, VkglTestCase_025150_1, VkglTestCase_025150_2);

#define VkglTestCase_025151_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.glo"
#define VkglTestCase_025151_2 "bal_state.vertex_tessellation_geometry_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025151, VkglTestCase_025151_1, VkglTestCase_025151_2);

#define VkglTestCase_025152_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.glob"
#define VkglTestCase_025152_2 "al_state.vertex_tessellation_geometry_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025152, VkglTestCase_025152_1, VkglTestCase_025152_2);

#define VkglTestCase_025153_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.glob"
#define VkglTestCase_025153_2 "al_state.vertex_tessellation_geometry_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025153, VkglTestCase_025153_1, VkglTestCase_025153_2);
