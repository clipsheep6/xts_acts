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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016350_1 "dEQP-GLES31.functional.geometry_"
#define VkglTestCase_016350_2 "shading.emit.points_emit_0_end_0"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016350, VkglTestCase_016350_1, VkglTestCase_016350_2);

#define VkglTestCase_016351_1 "dEQP-GLES31.functional.geometry_"
#define VkglTestCase_016351_2 "shading.emit.points_emit_0_end_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016351, VkglTestCase_016351_1, VkglTestCase_016351_2);

#define VkglTestCase_016352_1 "dEQP-GLES31.functional.geometry_"
#define VkglTestCase_016352_2 "shading.emit.points_emit_1_end_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016352, VkglTestCase_016352_1, VkglTestCase_016352_2);

#define VkglTestCase_016353_1 "dEQP-GLES31.functional.geometry_"
#define VkglTestCase_016353_2 "shading.emit.points_emit_0_end_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016353, VkglTestCase_016353_1, VkglTestCase_016353_2);

#define VkglTestCase_016354_1 "dEQP-GLES31.functional.geometry_"
#define VkglTestCase_016354_2 "shading.emit.points_emit_1_end_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016354, VkglTestCase_016354_1, VkglTestCase_016354_2);

#define VkglTestCase_016355_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016355_2 "ading.emit.line_strip_emit_0_end_0"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016355, VkglTestCase_016355_1, VkglTestCase_016355_2);

#define VkglTestCase_016356_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016356_2 "ading.emit.line_strip_emit_0_end_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016356, VkglTestCase_016356_1, VkglTestCase_016356_2);

#define VkglTestCase_016357_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016357_2 "ading.emit.line_strip_emit_1_end_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016357, VkglTestCase_016357_1, VkglTestCase_016357_2);

#define VkglTestCase_016358_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016358_2 "ading.emit.line_strip_emit_2_end_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016358, VkglTestCase_016358_1, VkglTestCase_016358_2);

#define VkglTestCase_016359_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016359_2 "ading.emit.line_strip_emit_0_end_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016359, VkglTestCase_016359_1, VkglTestCase_016359_2);

#define VkglTestCase_016360_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016360_2 "ading.emit.line_strip_emit_1_end_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016360, VkglTestCase_016360_1, VkglTestCase_016360_2);

#define VkglTestCase_016361_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016361_2 "ading.emit.line_strip_emit_2_end_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016361, VkglTestCase_016361_1, VkglTestCase_016361_2);

#define VkglTestCase_016362_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016362_2 "emit.line_strip_emit_2_end_2_emit_2_end_0"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016362, VkglTestCase_016362_1, VkglTestCase_016362_2);

#define VkglTestCase_016363_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016363_2 "ing.emit.triangle_strip_emit_0_end_0"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016363, VkglTestCase_016363_1, VkglTestCase_016363_2);

#define VkglTestCase_016364_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016364_2 "ing.emit.triangle_strip_emit_0_end_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016364, VkglTestCase_016364_1, VkglTestCase_016364_2);

#define VkglTestCase_016365_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016365_2 "ing.emit.triangle_strip_emit_1_end_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016365, VkglTestCase_016365_1, VkglTestCase_016365_2);

#define VkglTestCase_016366_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016366_2 "ing.emit.triangle_strip_emit_2_end_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016366, VkglTestCase_016366_1, VkglTestCase_016366_2);

#define VkglTestCase_016367_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016367_2 "ing.emit.triangle_strip_emit_3_end_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016367, VkglTestCase_016367_1, VkglTestCase_016367_2);

#define VkglTestCase_016368_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016368_2 "ing.emit.triangle_strip_emit_0_end_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016368, VkglTestCase_016368_1, VkglTestCase_016368_2);

#define VkglTestCase_016369_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016369_2 "ing.emit.triangle_strip_emit_1_end_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016369, VkglTestCase_016369_1, VkglTestCase_016369_2);

#define VkglTestCase_016370_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016370_2 "ing.emit.triangle_strip_emit_2_end_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016370, VkglTestCase_016370_1, VkglTestCase_016370_2);

#define VkglTestCase_016371_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016371_2 "ing.emit.triangle_strip_emit_3_end_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016371, VkglTestCase_016371_1, VkglTestCase_016371_2);

#define VkglTestCase_016372_1 "dEQP-GLES31.functional.geometry_shading.em"
#define VkglTestCase_016372_2 "it.triangle_strip_emit_3_end_2_emit_3_end_0"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016372, VkglTestCase_016372_1, VkglTestCase_016372_2);
