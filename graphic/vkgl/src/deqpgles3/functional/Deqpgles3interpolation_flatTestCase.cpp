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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30042TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_041700_1 "dEQP-GLES3.functional.transform_feedback.i"
#define VkglTestCase_041700_2 "nterpolation.flat.lowp_vec4_points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041700, VkglTestCase_041700_1, VkglTestCase_041700_2);

#define VkglTestCase_041701_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041701_2 "erpolation.flat.lowp_vec4_points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041701, VkglTestCase_041701_1, VkglTestCase_041701_2);

#define VkglTestCase_041702_1 "dEQP-GLES3.functional.transform_feedback.i"
#define VkglTestCase_041702_2 "nterpolation.flat.lowp_vec4_lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041702, VkglTestCase_041702_1, VkglTestCase_041702_2);

#define VkglTestCase_041703_1 "dEQP-GLES3.functional.transform_feedback.in"
#define VkglTestCase_041703_2 "terpolation.flat.lowp_vec4_lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041703, VkglTestCase_041703_1, VkglTestCase_041703_2);

#define VkglTestCase_041704_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041704_2 "erpolation.flat.lowp_vec4_triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041704, VkglTestCase_041704_1, VkglTestCase_041704_2);

#define VkglTestCase_041705_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041705_2 "rpolation.flat.lowp_vec4_triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041705, VkglTestCase_041705_1, VkglTestCase_041705_2);

#define VkglTestCase_041706_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041706_2 "erpolation.flat.mediump_vec4_points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041706, VkglTestCase_041706_1, VkglTestCase_041706_2);

#define VkglTestCase_041707_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041707_2 "rpolation.flat.mediump_vec4_points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041707, VkglTestCase_041707_1, VkglTestCase_041707_2);

#define VkglTestCase_041708_1 "dEQP-GLES3.functional.transform_feedback.in"
#define VkglTestCase_041708_2 "terpolation.flat.mediump_vec4_lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041708, VkglTestCase_041708_1, VkglTestCase_041708_2);

#define VkglTestCase_041709_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041709_2 "rpolation.flat.mediump_vec4_lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041709, VkglTestCase_041709_1, VkglTestCase_041709_2);

#define VkglTestCase_041710_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041710_2 "rpolation.flat.mediump_vec4_triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041710, VkglTestCase_041710_1, VkglTestCase_041710_2);

#define VkglTestCase_041711_1 "dEQP-GLES3.functional.transform_feedback.interp"
#define VkglTestCase_041711_2 "olation.flat.mediump_vec4_triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041711, VkglTestCase_041711_1, VkglTestCase_041711_2);

#define VkglTestCase_041712_1 "dEQP-GLES3.functional.transform_feedback.in"
#define VkglTestCase_041712_2 "terpolation.flat.highp_vec4_points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041712, VkglTestCase_041712_1, VkglTestCase_041712_2);

#define VkglTestCase_041713_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041713_2 "erpolation.flat.highp_vec4_points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041713, VkglTestCase_041713_1, VkglTestCase_041713_2);

#define VkglTestCase_041714_1 "dEQP-GLES3.functional.transform_feedback.i"
#define VkglTestCase_041714_2 "nterpolation.flat.highp_vec4_lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041714, VkglTestCase_041714_1, VkglTestCase_041714_2);

#define VkglTestCase_041715_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041715_2 "erpolation.flat.highp_vec4_lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041715, VkglTestCase_041715_1, VkglTestCase_041715_2);

#define VkglTestCase_041716_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041716_2 "erpolation.flat.highp_vec4_triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041716, VkglTestCase_041716_1, VkglTestCase_041716_2);

#define VkglTestCase_041717_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041717_2 "polation.flat.highp_vec4_triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041717, VkglTestCase_041717_1, VkglTestCase_041717_2);
