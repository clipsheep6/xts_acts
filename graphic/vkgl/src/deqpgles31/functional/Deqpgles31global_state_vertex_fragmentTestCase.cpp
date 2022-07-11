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

#define VkglTestCase_024970_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.g"
#define VkglTestCase_024970_2 "lobal_state.vertex_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024970, VkglTestCase_024970_1, VkglTestCase_024970_2);

#define VkglTestCase_024971_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.gl"
#define VkglTestCase_024971_2 "obal_state.vertex_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024971, VkglTestCase_024971_1, VkglTestCase_024971_2);

#define VkglTestCase_024972_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.gl"
#define VkglTestCase_024972_2 "obal_state.vertex_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024972, VkglTestCase_024972_1, VkglTestCase_024972_2);

#define VkglTestCase_024973_1 "dEQP-GLES31.functional.primitive_bounding_box.tri"
#define VkglTestCase_024973_2 "angles.global_state.vertex_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024973, VkglTestCase_024973_1, VkglTestCase_024973_2);

#define VkglTestCase_024974_1 "dEQP-GLES31.functional.primitive_bounding_box.tria"
#define VkglTestCase_024974_2 "ngles.global_state.vertex_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024974, VkglTestCase_024974_1, VkglTestCase_024974_2);

#define VkglTestCase_024975_1 "dEQP-GLES31.functional.primitive_bounding_box.tria"
#define VkglTestCase_024975_2 "ngles.global_state.vertex_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024975, VkglTestCase_024975_1, VkglTestCase_024975_2);

#define VkglTestCase_025010_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.glo"
#define VkglTestCase_025010_2 "bal_state.vertex_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025010, VkglTestCase_025010_1, VkglTestCase_025010_2);

#define VkglTestCase_025011_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.glob"
#define VkglTestCase_025011_2 "al_state.vertex_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025011, VkglTestCase_025011_1, VkglTestCase_025011_2);

#define VkglTestCase_025012_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.glob"
#define VkglTestCase_025012_2 "al_state.vertex_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025012, VkglTestCase_025012_1, VkglTestCase_025012_2);

#define VkglTestCase_025013_1 "dEQP-GLES31.functional.primitive_bounding_box.l"
#define VkglTestCase_025013_2 "ines.global_state.vertex_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025013, VkglTestCase_025013_1, VkglTestCase_025013_2);

#define VkglTestCase_025014_1 "dEQP-GLES31.functional.primitive_bounding_box.li"
#define VkglTestCase_025014_2 "nes.global_state.vertex_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025014, VkglTestCase_025014_1, VkglTestCase_025014_2);

#define VkglTestCase_025015_1 "dEQP-GLES31.functional.primitive_bounding_box.li"
#define VkglTestCase_025015_2 "nes.global_state.vertex_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025015, VkglTestCase_025015_1, VkglTestCase_025015_2);

#define VkglTestCase_025050_1 "dEQP-GLES31.functional.primitive_bounding_box.points.glo"
#define VkglTestCase_025050_2 "bal_state.vertex_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025050, VkglTestCase_025050_1, VkglTestCase_025050_2);

#define VkglTestCase_025051_1 "dEQP-GLES31.functional.primitive_bounding_box.points.glo"
#define VkglTestCase_025051_2 "bal_state.vertex_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025051, VkglTestCase_025051_1, VkglTestCase_025051_2);

#define VkglTestCase_025052_1 "dEQP-GLES31.functional.primitive_bounding_box.points.glob"
#define VkglTestCase_025052_2 "al_state.vertex_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025052, VkglTestCase_025052_1, VkglTestCase_025052_2);

#define VkglTestCase_025053_1 "dEQP-GLES31.functional.primitive_bounding_box.po"
#define VkglTestCase_025053_2 "ints.global_state.vertex_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025053, VkglTestCase_025053_1, VkglTestCase_025053_2);

#define VkglTestCase_025054_1 "dEQP-GLES31.functional.primitive_bounding_box.po"
#define VkglTestCase_025054_2 "ints.global_state.vertex_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025054, VkglTestCase_025054_1, VkglTestCase_025054_2);

#define VkglTestCase_025055_1 "dEQP-GLES31.functional.primitive_bounding_box.poi"
#define VkglTestCase_025055_2 "nts.global_state.vertex_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025055, VkglTestCase_025055_1, VkglTestCase_025055_2);

#define VkglTestCase_025090_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.g"
#define VkglTestCase_025090_2 "lobal_state.vertex_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025090, VkglTestCase_025090_1, VkglTestCase_025090_2);

#define VkglTestCase_025091_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.g"
#define VkglTestCase_025091_2 "lobal_state.vertex_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025091, VkglTestCase_025091_1, VkglTestCase_025091_2);

#define VkglTestCase_025092_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.gl"
#define VkglTestCase_025092_2 "obal_state.vertex_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025092, VkglTestCase_025092_1, VkglTestCase_025092_2);

#define VkglTestCase_025093_1 "dEQP-GLES31.functional.primitive_bounding_box.wide"
#define VkglTestCase_025093_2 "_lines.global_state.vertex_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025093, VkglTestCase_025093_1, VkglTestCase_025093_2);

#define VkglTestCase_025094_1 "dEQP-GLES31.functional.primitive_bounding_box.wide"
#define VkglTestCase_025094_2 "_lines.global_state.vertex_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025094, VkglTestCase_025094_1, VkglTestCase_025094_2);

#define VkglTestCase_025095_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_"
#define VkglTestCase_025095_2 "lines.global_state.vertex_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025095, VkglTestCase_025095_1, VkglTestCase_025095_2);

#define VkglTestCase_025130_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points."
#define VkglTestCase_025130_2 "global_state.vertex_fragment.default_framebuffer_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025130, VkglTestCase_025130_1, VkglTestCase_025130_2);

#define VkglTestCase_025131_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.g"
#define VkglTestCase_025131_2 "lobal_state.vertex_fragment.default_framebuffer_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025131, VkglTestCase_025131_1, VkglTestCase_025131_2);

#define VkglTestCase_025132_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.g"
#define VkglTestCase_025132_2 "lobal_state.vertex_fragment.default_framebuffer_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025132, VkglTestCase_025132_1, VkglTestCase_025132_2);

#define VkglTestCase_025133_1 "dEQP-GLES31.functional.primitive_bounding_box.wide"
#define VkglTestCase_025133_2 "_points.global_state.vertex_fragment.fbo_bbox_equal"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025133, VkglTestCase_025133_1, VkglTestCase_025133_2);

#define VkglTestCase_025134_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_"
#define VkglTestCase_025134_2 "points.global_state.vertex_fragment.fbo_bbox_larger"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025134, VkglTestCase_025134_1, VkglTestCase_025134_2);

#define VkglTestCase_025135_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_"
#define VkglTestCase_025135_2 "points.global_state.vertex_fragment.fbo_bbox_smaller"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_025135, VkglTestCase_025135_1, VkglTestCase_025135_2);
