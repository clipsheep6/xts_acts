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

#define VkglTestCase_012454_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012454_2 "r.exponential.exp.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012454, VkglTestCase_012454_1, VkglTestCase_012454_2);

#define VkglTestCase_012455_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012455_2 ".exponential.exp.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012455, VkglTestCase_012455_1, VkglTestCase_012455_2);

#define VkglTestCase_012456_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012456_2 "or.exponential.exp.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012456, VkglTestCase_012456_1, VkglTestCase_012456_2);

#define VkglTestCase_012457_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012457_2 "r.exponential.exp.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012457, VkglTestCase_012457_1, VkglTestCase_012457_2);

#define VkglTestCase_012458_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012458_2 "r.exponential.exp.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012458, VkglTestCase_012458_1, VkglTestCase_012458_2);

#define VkglTestCase_012459_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012459_2 ".exponential.exp.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012459, VkglTestCase_012459_1, VkglTestCase_012459_2);

#define VkglTestCase_012460_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012460_2 "or.exponential.exp.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012460, VkglTestCase_012460_1, VkglTestCase_012460_2);

#define VkglTestCase_012461_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012461_2 "r.exponential.exp.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012461, VkglTestCase_012461_1, VkglTestCase_012461_2);

#define VkglTestCase_012462_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012462_2 "r.exponential.exp.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012462, VkglTestCase_012462_1, VkglTestCase_012462_2);

#define VkglTestCase_012463_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012463_2 ".exponential.exp.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012463, VkglTestCase_012463_1, VkglTestCase_012463_2);

#define VkglTestCase_012464_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012464_2 "or.exponential.exp.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012464, VkglTestCase_012464_1, VkglTestCase_012464_2);

#define VkglTestCase_012465_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012465_2 "r.exponential.exp.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012465, VkglTestCase_012465_1, VkglTestCase_012465_2);

#define VkglTestCase_012466_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012466_2 "r.exponential.exp.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012466, VkglTestCase_012466_1, VkglTestCase_012466_2);

#define VkglTestCase_012467_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012467_2 ".exponential.exp.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012467, VkglTestCase_012467_1, VkglTestCase_012467_2);

#define VkglTestCase_012468_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012468_2 "or.exponential.exp.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012468, VkglTestCase_012468_1, VkglTestCase_012468_2);

#define VkglTestCase_012469_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012469_2 "r.exponential.exp.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012469, VkglTestCase_012469_1, VkglTestCase_012469_2);
