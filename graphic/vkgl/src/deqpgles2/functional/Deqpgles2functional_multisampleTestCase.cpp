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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013976_1 "dEQP-GLES2.functional.mult"
#define VkglTestCase_013976_2 "isample.num_samples_polygon"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013976, VkglTestCase_013976_1, VkglTestCase_013976_2);

#define VkglTestCase_013977_1 "dEQP-GLES2.functional.mul"
#define VkglTestCase_013977_2 "tisample.num_samples_line"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013977, VkglTestCase_013977_1, VkglTestCase_013977_2);

#define VkglTestCase_013978_1 "dEQP-GLES2.functional.multis"
#define VkglTestCase_013978_2 "ample.common_edge_small_quads"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013978, VkglTestCase_013978_1, VkglTestCase_013978_2);

#define VkglTestCase_013979_1 "dEQP-GLES2.functional.multi"
#define VkglTestCase_013979_2 "sample.common_edge_big_quad"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013979, VkglTestCase_013979_1, VkglTestCase_013979_2);

#define VkglTestCase_013980_1 "dEQP-GLES2.functional.multisa"
#define VkglTestCase_013980_2 "mple.common_edge_viewport_quad"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013980, VkglTestCase_013980_1, VkglTestCase_013980_2);

#define VkglTestCase_013981_1 "dEQP-GLES2.function"
#define VkglTestCase_013981_2 "al.multisample.depth"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013981, VkglTestCase_013981_1, VkglTestCase_013981_2);

#define VkglTestCase_013982_1 "dEQP-GLES2.functiona"
#define VkglTestCase_013982_2 "l.multisample.stencil"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013982, VkglTestCase_013982_1, VkglTestCase_013982_2);

#define VkglTestCase_013983_1 "dEQP-GLES2.functional.multis"
#define VkglTestCase_013983_2 "ample.sample_coverage_invert"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013983, VkglTestCase_013983_1, VkglTestCase_013983_2);

#define VkglTestCase_013984_1 "dEQP-GLES2.functional.multisample"
#define VkglTestCase_013984_2 ".proportionality_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013984, VkglTestCase_013984_1, VkglTestCase_013984_2);

#define VkglTestCase_013985_1 "dEQP-GLES2.functional.multisampl"
#define VkglTestCase_013985_2 "e.proportionality_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013985, VkglTestCase_013985_1, VkglTestCase_013985_2);

#define VkglTestCase_013986_1 "dEQP-GLES2.functional.multisample.pro"
#define VkglTestCase_013986_2 "portionality_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013986, VkglTestCase_013986_1, VkglTestCase_013986_2);

#define VkglTestCase_013987_1 "dEQP-GLES2.functional.multisam"
#define VkglTestCase_013987_2 "ple.constancy_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013987, VkglTestCase_013987_1, VkglTestCase_013987_2);

#define VkglTestCase_013988_1 "dEQP-GLES2.functional.multisa"
#define VkglTestCase_013988_2 "mple.constancy_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013988, VkglTestCase_013988_1, VkglTestCase_013988_2);

#define VkglTestCase_013989_1 "dEQP-GLES2.functional.multisample."
#define VkglTestCase_013989_2 "constancy_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013989, VkglTestCase_013989_1, VkglTestCase_013989_2);

#define VkglTestCase_013990_1 "dEQP-GLES2.functional.mu"
#define VkglTestCase_013990_2 "ltisample.constancy_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013990, VkglTestCase_013990_1, VkglTestCase_013990_2);

#define VkglTestCase_013991_1 "dEQP-GLES2.functional.multis"
#define VkglTestCase_013991_2 "ample.constancy_both_inverted"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013991, VkglTestCase_013991_1, VkglTestCase_013991_2);
