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

#define VkglTestCase_024976_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.global_s"
#define VkglTestCase_024976_2 "tate.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024976, VkglTestCase_024976_1, VkglTestCase_024976_2);

#define VkglTestCase_024977_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.global_s"
#define VkglTestCase_024977_2 "tate.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024977, VkglTestCase_024977_1, VkglTestCase_024977_2);

#define VkglTestCase_024978_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.global_st"
#define VkglTestCase_024978_2 "ate.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024978, VkglTestCase_024978_1, VkglTestCase_024978_2);

#define VkglTestCase_024979_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles."
#define VkglTestCase_024979_2 "global_state.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024979, VkglTestCase_024979_1, VkglTestCase_024979_2);

#define VkglTestCase_024980_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles."
#define VkglTestCase_024980_2 "global_state.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024980, VkglTestCase_024980_1, VkglTestCase_024980_2);

#define VkglTestCase_024981_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.g"
#define VkglTestCase_024981_2 "lobal_state.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024981, VkglTestCase_024981_1, VkglTestCase_024981_2);

#define VkglTestCase_025016_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_sta"
#define VkglTestCase_025016_2 "te.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025016, VkglTestCase_025016_1, VkglTestCase_025016_2);

#define VkglTestCase_025017_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_sta"
#define VkglTestCase_025017_2 "te.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025017, VkglTestCase_025017_1, VkglTestCase_025017_2);

#define VkglTestCase_025018_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.global_stat"
#define VkglTestCase_025018_2 "e.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025018, VkglTestCase_025018_1, VkglTestCase_025018_2);

#define VkglTestCase_025019_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.gl"
#define VkglTestCase_025019_2 "obal_state.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025019, VkglTestCase_025019_1, VkglTestCase_025019_2);

#define VkglTestCase_025020_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.gl"
#define VkglTestCase_025020_2 "obal_state.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025020, VkglTestCase_025020_1, VkglTestCase_025020_2);

#define VkglTestCase_025021_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.glo"
#define VkglTestCase_025021_2 "bal_state.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025021, VkglTestCase_025021_1, VkglTestCase_025021_2);

#define VkglTestCase_025056_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_st"
#define VkglTestCase_025056_2 "ate.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025056, VkglTestCase_025056_1, VkglTestCase_025056_2);

#define VkglTestCase_025057_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_sta"
#define VkglTestCase_025057_2 "te.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025057, VkglTestCase_025057_1, VkglTestCase_025057_2);

#define VkglTestCase_025058_1 "dEQP-GLES31.functional.primitive_bounding_box.points.global_sta"
#define VkglTestCase_025058_2 "te.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025058, VkglTestCase_025058_1, VkglTestCase_025058_2);

#define VkglTestCase_025059_1 "dEQP-GLES31.functional.primitive_bounding_box.points.g"
#define VkglTestCase_025059_2 "lobal_state.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025059, VkglTestCase_025059_1, VkglTestCase_025059_2);

#define VkglTestCase_025060_1 "dEQP-GLES31.functional.primitive_bounding_box.points.gl"
#define VkglTestCase_025060_2 "obal_state.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025060, VkglTestCase_025060_1, VkglTestCase_025060_2);

#define VkglTestCase_025061_1 "dEQP-GLES31.functional.primitive_bounding_box.points.gl"
#define VkglTestCase_025061_2 "obal_state.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025061, VkglTestCase_025061_1, VkglTestCase_025061_2);

#define VkglTestCase_025096_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.global_"
#define VkglTestCase_025096_2 "state.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025096, VkglTestCase_025096_1, VkglTestCase_025096_2);

#define VkglTestCase_025097_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.global_s"
#define VkglTestCase_025097_2 "tate.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025097, VkglTestCase_025097_1, VkglTestCase_025097_2);

#define VkglTestCase_025098_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.global_s"
#define VkglTestCase_025098_2 "tate.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025098, VkglTestCase_025098_1, VkglTestCase_025098_2);

#define VkglTestCase_025099_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines"
#define VkglTestCase_025099_2 ".global_state.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025099, VkglTestCase_025099_1, VkglTestCase_025099_2);

#define VkglTestCase_025100_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines."
#define VkglTestCase_025100_2 "global_state.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025100, VkglTestCase_025100_1, VkglTestCase_025100_2);

#define VkglTestCase_025101_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines."
#define VkglTestCase_025101_2 "global_state.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025101, VkglTestCase_025101_1, VkglTestCase_025101_2);

#define VkglTestCase_025136_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.global_"
#define VkglTestCase_025136_2 "state.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025136, VkglTestCase_025136_1, VkglTestCase_025136_2);

#define VkglTestCase_025137_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.global_"
#define VkglTestCase_025137_2 "state.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025137, VkglTestCase_025137_1, VkglTestCase_025137_2);

#define VkglTestCase_025138_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.global_s"
#define VkglTestCase_025138_2 "tate.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025138, VkglTestCase_025138_1, VkglTestCase_025138_2);

#define VkglTestCase_025139_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points"
#define VkglTestCase_025139_2 ".global_state.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025139, VkglTestCase_025139_1, VkglTestCase_025139_2);

#define VkglTestCase_025140_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points"
#define VkglTestCase_025140_2 ".global_state.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025140, VkglTestCase_025140_1, VkglTestCase_025140_2);

#define VkglTestCase_025141_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points."
#define VkglTestCase_025141_2 "global_state.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025141, VkglTestCase_025141_1, VkglTestCase_025141_2);
