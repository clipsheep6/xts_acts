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

#define VkglTestCase_041718_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041718_2 "erpolation.centroid.lowp_vec4_points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041718, VkglTestCase_041718_1, VkglTestCase_041718_2);

#define VkglTestCase_041719_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041719_2 "polation.centroid.lowp_vec4_points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041719, VkglTestCase_041719_1, VkglTestCase_041719_2);

#define VkglTestCase_041720_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041720_2 "erpolation.centroid.lowp_vec4_lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041720, VkglTestCase_041720_1, VkglTestCase_041720_2);

#define VkglTestCase_041721_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041721_2 "rpolation.centroid.lowp_vec4_lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041721, VkglTestCase_041721_1, VkglTestCase_041721_2);

#define VkglTestCase_041722_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041722_2 "polation.centroid.lowp_vec4_triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041722, VkglTestCase_041722_1, VkglTestCase_041722_2);

#define VkglTestCase_041723_1 "dEQP-GLES3.functional.transform_feedback.interp"
#define VkglTestCase_041723_2 "olation.centroid.lowp_vec4_triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041723, VkglTestCase_041723_1, VkglTestCase_041723_2);

#define VkglTestCase_041724_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041724_2 "polation.centroid.mediump_vec4_points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041724, VkglTestCase_041724_1, VkglTestCase_041724_2);

#define VkglTestCase_041725_1 "dEQP-GLES3.functional.transform_feedback.interp"
#define VkglTestCase_041725_2 "olation.centroid.mediump_vec4_points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041725, VkglTestCase_041725_1, VkglTestCase_041725_2);

#define VkglTestCase_041726_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041726_2 "rpolation.centroid.mediump_vec4_lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041726, VkglTestCase_041726_1, VkglTestCase_041726_2);

#define VkglTestCase_041727_1 "dEQP-GLES3.functional.transform_feedback.interp"
#define VkglTestCase_041727_2 "olation.centroid.mediump_vec4_lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041727, VkglTestCase_041727_1, VkglTestCase_041727_2);

#define VkglTestCase_041728_1 "dEQP-GLES3.functional.transform_feedback.interp"
#define VkglTestCase_041728_2 "olation.centroid.mediump_vec4_triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041728, VkglTestCase_041728_1, VkglTestCase_041728_2);

#define VkglTestCase_041729_1 "dEQP-GLES3.functional.transform_feedback.interpol"
#define VkglTestCase_041729_2 "ation.centroid.mediump_vec4_triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041729, VkglTestCase_041729_1, VkglTestCase_041729_2);

#define VkglTestCase_041730_1 "dEQP-GLES3.functional.transform_feedback.inte"
#define VkglTestCase_041730_2 "rpolation.centroid.highp_vec4_points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041730, VkglTestCase_041730_1, VkglTestCase_041730_2);

#define VkglTestCase_041731_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041731_2 "polation.centroid.highp_vec4_points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041731, VkglTestCase_041731_1, VkglTestCase_041731_2);

#define VkglTestCase_041732_1 "dEQP-GLES3.functional.transform_feedback.int"
#define VkglTestCase_041732_2 "erpolation.centroid.highp_vec4_lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041732, VkglTestCase_041732_1, VkglTestCase_041732_2);

#define VkglTestCase_041733_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041733_2 "polation.centroid.highp_vec4_lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041733, VkglTestCase_041733_1, VkglTestCase_041733_2);

#define VkglTestCase_041734_1 "dEQP-GLES3.functional.transform_feedback.inter"
#define VkglTestCase_041734_2 "polation.centroid.highp_vec4_triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041734, VkglTestCase_041734_1, VkglTestCase_041734_2);

#define VkglTestCase_041735_1 "dEQP-GLES3.functional.transform_feedback.interpo"
#define VkglTestCase_041735_2 "lation.centroid.highp_vec4_triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041735, VkglTestCase_041735_1, VkglTestCase_041735_2);
