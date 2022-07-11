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

#define VkglTestCase_041682_1 "dEQP-GLES3.functional.transform_feedback.in"
#define VkglTestCase_041682_2 "terpolation.smooth.lowp_vec4_points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041682, VkglTestCase_041682_1, VkglTestCase_041682_2);

#define VkglTestCase_041683_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041683_2 "rpolation.smooth.lowp_vec4_points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041683, VkglTestCase_041683_1, VkglTestCase_041683_2);

#define VkglTestCase_041684_1 "dEQP-GLES3.functional.transform_feedback.in"
#define VkglTestCase_041684_2 "terpolation.smooth.lowp_vec4_lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041684, VkglTestCase_041684_1, VkglTestCase_041684_2);

#define VkglTestCase_041685_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041685_2 "erpolation.smooth.lowp_vec4_lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041685, VkglTestCase_041685_1, VkglTestCase_041685_2);

#define VkglTestCase_041686_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041686_2 "rpolation.smooth.lowp_vec4_triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041686, VkglTestCase_041686_1, VkglTestCase_041686_2);

#define VkglTestCase_041687_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041687_2 "polation.smooth.lowp_vec4_triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041687, VkglTestCase_041687_1, VkglTestCase_041687_2);

#define VkglTestCase_041688_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041688_2 "rpolation.smooth.mediump_vec4_points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041688, VkglTestCase_041688_1, VkglTestCase_041688_2);

#define VkglTestCase_041689_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041689_2 "polation.smooth.mediump_vec4_points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041689, VkglTestCase_041689_1, VkglTestCase_041689_2);

#define VkglTestCase_041690_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041690_2 "erpolation.smooth.mediump_vec4_lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041690, VkglTestCase_041690_1, VkglTestCase_041690_2);

#define VkglTestCase_041691_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041691_2 "polation.smooth.mediump_vec4_lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041691, VkglTestCase_041691_1, VkglTestCase_041691_2);

#define VkglTestCase_041692_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041692_2 "polation.smooth.mediump_vec4_triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041692, VkglTestCase_041692_1, VkglTestCase_041692_2);

#define VkglTestCase_041693_1 "dEQP-GLES3.functional.transform_feedback.interpo"
#define VkglTestCase_041693_2 "lation.smooth.mediump_vec4_triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041693, VkglTestCase_041693_1, VkglTestCase_041693_2);

#define VkglTestCase_041694_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041694_2 "erpolation.smooth.highp_vec4_points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041694, VkglTestCase_041694_1, VkglTestCase_041694_2);

#define VkglTestCase_041695_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041695_2 "rpolation.smooth.highp_vec4_points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041695, VkglTestCase_041695_1, VkglTestCase_041695_2);

#define VkglTestCase_041696_1 "dEQP-GLES3.functional.transform_feedback.in"
#define VkglTestCase_041696_2 "terpolation.smooth.highp_vec4_lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041696, VkglTestCase_041696_1, VkglTestCase_041696_2);

#define VkglTestCase_041697_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041697_2 "rpolation.smooth.highp_vec4_lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041697, VkglTestCase_041697_1, VkglTestCase_041697_2);

#define VkglTestCase_041698_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041698_2 "rpolation.smooth.highp_vec4_triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041698, VkglTestCase_041698_1, VkglTestCase_041698_2);

#define VkglTestCase_041699_1 "dEQP-GLES3.functional.transform_feedback.interp"
#define VkglTestCase_041699_2 "olation.smooth.highp_vec4_triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041699, VkglTestCase_041699_1, VkglTestCase_041699_2);
