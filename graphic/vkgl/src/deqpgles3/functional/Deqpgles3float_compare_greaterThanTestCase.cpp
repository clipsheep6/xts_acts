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

#define VkglTestCase_013426_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013426_2 "loat_compare.greaterThan.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013426, VkglTestCase_013426_1, VkglTestCase_013426_2);

#define VkglTestCase_013427_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013427_2 "oat_compare.greaterThan.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013427, VkglTestCase_013427_1, VkglTestCase_013427_2);

#define VkglTestCase_013428_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013428_2 "at_compare.greaterThan.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013428, VkglTestCase_013428_1, VkglTestCase_013428_2);

#define VkglTestCase_013429_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013429_2 "t_compare.greaterThan.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013429, VkglTestCase_013429_1, VkglTestCase_013429_2);

#define VkglTestCase_013430_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013430_2 "oat_compare.greaterThan.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013430, VkglTestCase_013430_1, VkglTestCase_013430_2);

#define VkglTestCase_013431_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013431_2 "at_compare.greaterThan.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013431, VkglTestCase_013431_1, VkglTestCase_013431_2);

#define VkglTestCase_013432_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013432_2 "loat_compare.greaterThan.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013432, VkglTestCase_013432_1, VkglTestCase_013432_2);

#define VkglTestCase_013433_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013433_2 "oat_compare.greaterThan.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013433, VkglTestCase_013433_1, VkglTestCase_013433_2);

#define VkglTestCase_013434_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013434_2 "at_compare.greaterThan.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013434, VkglTestCase_013434_1, VkglTestCase_013434_2);

#define VkglTestCase_013435_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013435_2 "t_compare.greaterThan.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013435, VkglTestCase_013435_1, VkglTestCase_013435_2);

#define VkglTestCase_013436_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013436_2 "oat_compare.greaterThan.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013436, VkglTestCase_013436_1, VkglTestCase_013436_2);

#define VkglTestCase_013437_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013437_2 "at_compare.greaterThan.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013437, VkglTestCase_013437_1, VkglTestCase_013437_2);

#define VkglTestCase_013438_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013438_2 "loat_compare.greaterThan.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013438, VkglTestCase_013438_1, VkglTestCase_013438_2);

#define VkglTestCase_013439_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013439_2 "oat_compare.greaterThan.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013439, VkglTestCase_013439_1, VkglTestCase_013439_2);

#define VkglTestCase_013440_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013440_2 "at_compare.greaterThan.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013440, VkglTestCase_013440_1, VkglTestCase_013440_2);

#define VkglTestCase_013441_1 "dEQP-GLES3.functional.shaders.operator.floa"
#define VkglTestCase_013441_2 "t_compare.greaterThan.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013441, VkglTestCase_013441_1, VkglTestCase_013441_2);

#define VkglTestCase_013442_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013442_2 "oat_compare.greaterThan.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013442, VkglTestCase_013442_1, VkglTestCase_013442_2);

#define VkglTestCase_013443_1 "dEQP-GLES3.functional.shaders.operator.flo"
#define VkglTestCase_013443_2 "at_compare.greaterThan.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013443, VkglTestCase_013443_1, VkglTestCase_013443_2);
