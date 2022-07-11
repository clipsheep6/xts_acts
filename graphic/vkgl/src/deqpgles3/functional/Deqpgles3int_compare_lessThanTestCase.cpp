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

#define VkglTestCase_013498_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013498_2 ".int_compare.lessThan.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013498, VkglTestCase_013498_1, VkglTestCase_013498_2);

#define VkglTestCase_013499_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013499_2 "int_compare.lessThan.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013499, VkglTestCase_013499_1, VkglTestCase_013499_2);

#define VkglTestCase_013500_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013500_2 "nt_compare.lessThan.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013500, VkglTestCase_013500_1, VkglTestCase_013500_2);

#define VkglTestCase_013501_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013501_2 "t_compare.lessThan.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013501, VkglTestCase_013501_1, VkglTestCase_013501_2);

#define VkglTestCase_013502_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013502_2 "int_compare.lessThan.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013502, VkglTestCase_013502_1, VkglTestCase_013502_2);

#define VkglTestCase_013503_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013503_2 "nt_compare.lessThan.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013503, VkglTestCase_013503_1, VkglTestCase_013503_2);

#define VkglTestCase_013504_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013504_2 ".int_compare.lessThan.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013504, VkglTestCase_013504_1, VkglTestCase_013504_2);

#define VkglTestCase_013505_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013505_2 "int_compare.lessThan.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013505, VkglTestCase_013505_1, VkglTestCase_013505_2);

#define VkglTestCase_013506_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013506_2 "nt_compare.lessThan.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013506, VkglTestCase_013506_1, VkglTestCase_013506_2);

#define VkglTestCase_013507_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013507_2 "t_compare.lessThan.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013507, VkglTestCase_013507_1, VkglTestCase_013507_2);

#define VkglTestCase_013508_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013508_2 "int_compare.lessThan.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013508, VkglTestCase_013508_1, VkglTestCase_013508_2);

#define VkglTestCase_013509_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013509_2 "nt_compare.lessThan.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013509, VkglTestCase_013509_1, VkglTestCase_013509_2);

#define VkglTestCase_013510_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013510_2 ".int_compare.lessThan.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013510, VkglTestCase_013510_1, VkglTestCase_013510_2);

#define VkglTestCase_013511_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013511_2 "int_compare.lessThan.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013511, VkglTestCase_013511_1, VkglTestCase_013511_2);

#define VkglTestCase_013512_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013512_2 "nt_compare.lessThan.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013512, VkglTestCase_013512_1, VkglTestCase_013512_2);

#define VkglTestCase_013513_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013513_2 "t_compare.lessThan.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013513, VkglTestCase_013513_1, VkglTestCase_013513_2);

#define VkglTestCase_013514_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013514_2 "int_compare.lessThan.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013514, VkglTestCase_013514_1, VkglTestCase_013514_2);

#define VkglTestCase_013515_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013515_2 "nt_compare.lessThan.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013515, VkglTestCase_013515_1, VkglTestCase_013515_2);
