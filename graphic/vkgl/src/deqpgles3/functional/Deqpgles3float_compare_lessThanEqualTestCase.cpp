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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013408_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013408_2 "oat_compare.lessThanEqual.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013408, VkglTestCase_013408_1, VkglTestCase_013408_2);

#define VkglTestCase_013409_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013409_2 "at_compare.lessThanEqual.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013409, VkglTestCase_013409_1, VkglTestCase_013409_2);

#define VkglTestCase_013410_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013410_2 "t_compare.lessThanEqual.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013410, VkglTestCase_013410_1, VkglTestCase_013410_2);

#define VkglTestCase_013411_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013411_2 "_compare.lessThanEqual.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013411, VkglTestCase_013411_1, VkglTestCase_013411_2);

#define VkglTestCase_013412_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013412_2 "at_compare.lessThanEqual.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013412, VkglTestCase_013412_1, VkglTestCase_013412_2);

#define VkglTestCase_013413_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013413_2 "t_compare.lessThanEqual.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013413, VkglTestCase_013413_1, VkglTestCase_013413_2);

#define VkglTestCase_013414_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013414_2 "oat_compare.lessThanEqual.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013414, VkglTestCase_013414_1, VkglTestCase_013414_2);

#define VkglTestCase_013415_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013415_2 "at_compare.lessThanEqual.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013415, VkglTestCase_013415_1, VkglTestCase_013415_2);

#define VkglTestCase_013416_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013416_2 "t_compare.lessThanEqual.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013416, VkglTestCase_013416_1, VkglTestCase_013416_2);

#define VkglTestCase_013417_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013417_2 "_compare.lessThanEqual.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013417, VkglTestCase_013417_1, VkglTestCase_013417_2);

#define VkglTestCase_013418_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013418_2 "at_compare.lessThanEqual.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013418, VkglTestCase_013418_1, VkglTestCase_013418_2);

#define VkglTestCase_013419_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013419_2 "t_compare.lessThanEqual.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013419, VkglTestCase_013419_1, VkglTestCase_013419_2);

#define VkglTestCase_013420_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013420_2 "oat_compare.lessThanEqual.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013420, VkglTestCase_013420_1, VkglTestCase_013420_2);

#define VkglTestCase_013421_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013421_2 "at_compare.lessThanEqual.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013421, VkglTestCase_013421_1, VkglTestCase_013421_2);

#define VkglTestCase_013422_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013422_2 "t_compare.lessThanEqual.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013422, VkglTestCase_013422_1, VkglTestCase_013422_2);

#define VkglTestCase_013423_1 "dEQP-GLES3.functional.shaders.operator.float"
#define VkglTestCase_013423_2 "_compare.lessThanEqual.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013423, VkglTestCase_013423_1, VkglTestCase_013423_2);

#define VkglTestCase_013424_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013424_2 "at_compare.lessThanEqual.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013424, VkglTestCase_013424_1, VkglTestCase_013424_2);

#define VkglTestCase_013425_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013425_2 "t_compare.lessThanEqual.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013425, VkglTestCase_013425_1, VkglTestCase_013425_2);
