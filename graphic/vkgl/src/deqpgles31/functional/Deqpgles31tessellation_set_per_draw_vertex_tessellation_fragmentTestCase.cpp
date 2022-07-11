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

#define VkglTestCase_024994_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellation_s"
#define VkglTestCase_024994_2 "et_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024994, VkglTestCase_024994_1, VkglTestCase_024994_2);

#define VkglTestCase_024995_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellation_se"
#define VkglTestCase_024995_2 "t_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024995, VkglTestCase_024995_1, VkglTestCase_024995_2);

#define VkglTestCase_024996_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellation_se"
#define VkglTestCase_024996_2 "t_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024996, VkglTestCase_024996_1, VkglTestCase_024996_2);

#define VkglTestCase_024997_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessel"
#define VkglTestCase_024997_2 "lation_set_per_draw.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024997, VkglTestCase_024997_1, VkglTestCase_024997_2);

#define VkglTestCase_024998_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessell"
#define VkglTestCase_024998_2 "ation_set_per_draw.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024998, VkglTestCase_024998_1, VkglTestCase_024998_2);

#define VkglTestCase_024999_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessell"
#define VkglTestCase_024999_2 "ation_set_per_draw.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024999, VkglTestCase_024999_1, VkglTestCase_024999_2);

#define VkglTestCase_025034_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_set"
#define VkglTestCase_025034_2 "_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025034, VkglTestCase_025034_1, VkglTestCase_025034_2);

#define VkglTestCase_025035_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_set_"
#define VkglTestCase_025035_2 "per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025035, VkglTestCase_025035_1, VkglTestCase_025035_2);

#define VkglTestCase_025036_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_set_"
#define VkglTestCase_025036_2 "per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025036, VkglTestCase_025036_1, VkglTestCase_025036_2);

#define VkglTestCase_025037_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessella"
#define VkglTestCase_025037_2 "tion_set_per_draw.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025037, VkglTestCase_025037_1, VkglTestCase_025037_2);

#define VkglTestCase_025038_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellat"
#define VkglTestCase_025038_2 "ion_set_per_draw.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025038, VkglTestCase_025038_1, VkglTestCase_025038_2);

#define VkglTestCase_025039_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellat"
#define VkglTestCase_025039_2 "ion_set_per_draw.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025039, VkglTestCase_025039_1, VkglTestCase_025039_2);

#define VkglTestCase_025074_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_set"
#define VkglTestCase_025074_2 "_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025074, VkglTestCase_025074_1, VkglTestCase_025074_2);

#define VkglTestCase_025075_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_set"
#define VkglTestCase_025075_2 "_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025075, VkglTestCase_025075_1, VkglTestCase_025075_2);

#define VkglTestCase_025076_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_set_"
#define VkglTestCase_025076_2 "per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025076, VkglTestCase_025076_1, VkglTestCase_025076_2);

#define VkglTestCase_025077_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessella"
#define VkglTestCase_025077_2 "tion_set_per_draw.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025077, VkglTestCase_025077_1, VkglTestCase_025077_2);

#define VkglTestCase_025078_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessella"
#define VkglTestCase_025078_2 "tion_set_per_draw.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025078, VkglTestCase_025078_1, VkglTestCase_025078_2);

#define VkglTestCase_025079_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellat"
#define VkglTestCase_025079_2 "ion_set_per_draw.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025079, VkglTestCase_025079_1, VkglTestCase_025079_2);

#define VkglTestCase_025114_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellation_s"
#define VkglTestCase_025114_2 "et_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025114, VkglTestCase_025114_1, VkglTestCase_025114_2);

#define VkglTestCase_025115_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellation_s"
#define VkglTestCase_025115_2 "et_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025115, VkglTestCase_025115_1, VkglTestCase_025115_2);

#define VkglTestCase_025116_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellation_se"
#define VkglTestCase_025116_2 "t_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025116, VkglTestCase_025116_1, VkglTestCase_025116_2);

#define VkglTestCase_025117_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessel"
#define VkglTestCase_025117_2 "lation_set_per_draw.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025117, VkglTestCase_025117_1, VkglTestCase_025117_2);

#define VkglTestCase_025118_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessel"
#define VkglTestCase_025118_2 "lation_set_per_draw.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025118, VkglTestCase_025118_1, VkglTestCase_025118_2);

#define VkglTestCase_025119_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessell"
#define VkglTestCase_025119_2 "ation_set_per_draw.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025119, VkglTestCase_025119_1, VkglTestCase_025119_2);

#define VkglTestCase_025154_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellation_"
#define VkglTestCase_025154_2 "set_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025154, VkglTestCase_025154_1, VkglTestCase_025154_2);

#define VkglTestCase_025155_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellation_s"
#define VkglTestCase_025155_2 "et_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025155, VkglTestCase_025155_1, VkglTestCase_025155_2);

#define VkglTestCase_025156_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellation_s"
#define VkglTestCase_025156_2 "et_per_draw.vertex_tessellation_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025156, VkglTestCase_025156_1, VkglTestCase_025156_2);

#define VkglTestCase_025157_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tesse"
#define VkglTestCase_025157_2 "llation_set_per_draw.vertex_tessellation_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025157, VkglTestCase_025157_1, VkglTestCase_025157_2);

#define VkglTestCase_025158_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessel"
#define VkglTestCase_025158_2 "lation_set_per_draw.vertex_tessellation_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025158, VkglTestCase_025158_1, VkglTestCase_025158_2);

#define VkglTestCase_025159_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessel"
#define VkglTestCase_025159_2 "lation_set_per_draw.vertex_tessellation_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025159, VkglTestCase_025159_1, VkglTestCase_025159_2);
