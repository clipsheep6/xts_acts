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
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012438_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012438_2 "r.exponential.pow.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012438, VkglTestCase_012438_1, VkglTestCase_012438_2);

#define VkglTestCase_012439_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012439_2 ".exponential.pow.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012439, VkglTestCase_012439_1, VkglTestCase_012439_2);

#define VkglTestCase_012440_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012440_2 "or.exponential.pow.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012440, VkglTestCase_012440_1, VkglTestCase_012440_2);

#define VkglTestCase_012441_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012441_2 "r.exponential.pow.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012441, VkglTestCase_012441_1, VkglTestCase_012441_2);

#define VkglTestCase_012442_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012442_2 "r.exponential.pow.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012442, VkglTestCase_012442_1, VkglTestCase_012442_2);

#define VkglTestCase_012443_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012443_2 ".exponential.pow.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012443, VkglTestCase_012443_1, VkglTestCase_012443_2);

#define VkglTestCase_012444_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012444_2 "or.exponential.pow.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012444, VkglTestCase_012444_1, VkglTestCase_012444_2);

#define VkglTestCase_012445_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012445_2 "r.exponential.pow.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012445, VkglTestCase_012445_1, VkglTestCase_012445_2);

#define VkglTestCase_012446_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012446_2 "r.exponential.pow.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012446, VkglTestCase_012446_1, VkglTestCase_012446_2);

#define VkglTestCase_012447_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012447_2 ".exponential.pow.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012447, VkglTestCase_012447_1, VkglTestCase_012447_2);

#define VkglTestCase_012448_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012448_2 "or.exponential.pow.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012448, VkglTestCase_012448_1, VkglTestCase_012448_2);

#define VkglTestCase_012449_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012449_2 "r.exponential.pow.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012449, VkglTestCase_012449_1, VkglTestCase_012449_2);

#define VkglTestCase_012450_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012450_2 "r.exponential.pow.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012450, VkglTestCase_012450_1, VkglTestCase_012450_2);

#define VkglTestCase_012451_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012451_2 ".exponential.pow.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012451, VkglTestCase_012451_1, VkglTestCase_012451_2);

#define VkglTestCase_012452_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012452_2 "or.exponential.pow.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012452, VkglTestCase_012452_1, VkglTestCase_012452_2);

#define VkglTestCase_012453_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012453_2 "r.exponential.pow.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012453, VkglTestCase_012453_1, VkglTestCase_012453_2);
