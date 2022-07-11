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

#define VkglTestCase_013534_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013534_2 "nt_compare.greaterThan.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013534, VkglTestCase_013534_1, VkglTestCase_013534_2);

#define VkglTestCase_013535_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013535_2 "t_compare.greaterThan.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013535, VkglTestCase_013535_1, VkglTestCase_013535_2);

#define VkglTestCase_013536_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013536_2 "t_compare.greaterThan.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013536, VkglTestCase_013536_1, VkglTestCase_013536_2);

#define VkglTestCase_013537_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013537_2 "_compare.greaterThan.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013537, VkglTestCase_013537_1, VkglTestCase_013537_2);

#define VkglTestCase_013538_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013538_2 "nt_compare.greaterThan.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013538, VkglTestCase_013538_1, VkglTestCase_013538_2);

#define VkglTestCase_013539_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013539_2 "t_compare.greaterThan.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013539, VkglTestCase_013539_1, VkglTestCase_013539_2);

#define VkglTestCase_013540_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013540_2 "nt_compare.greaterThan.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013540, VkglTestCase_013540_1, VkglTestCase_013540_2);

#define VkglTestCase_013541_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013541_2 "t_compare.greaterThan.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013541, VkglTestCase_013541_1, VkglTestCase_013541_2);

#define VkglTestCase_013542_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013542_2 "t_compare.greaterThan.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013542, VkglTestCase_013542_1, VkglTestCase_013542_2);

#define VkglTestCase_013543_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013543_2 "_compare.greaterThan.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013543, VkglTestCase_013543_1, VkglTestCase_013543_2);

#define VkglTestCase_013544_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013544_2 "nt_compare.greaterThan.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013544, VkglTestCase_013544_1, VkglTestCase_013544_2);

#define VkglTestCase_013545_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013545_2 "t_compare.greaterThan.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013545, VkglTestCase_013545_1, VkglTestCase_013545_2);

#define VkglTestCase_013546_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013546_2 "nt_compare.greaterThan.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013546, VkglTestCase_013546_1, VkglTestCase_013546_2);

#define VkglTestCase_013547_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013547_2 "t_compare.greaterThan.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013547, VkglTestCase_013547_1, VkglTestCase_013547_2);

#define VkglTestCase_013548_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013548_2 "t_compare.greaterThan.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013548, VkglTestCase_013548_1, VkglTestCase_013548_2);

#define VkglTestCase_013549_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013549_2 "_compare.greaterThan.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013549, VkglTestCase_013549_1, VkglTestCase_013549_2);

#define VkglTestCase_013550_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013550_2 "nt_compare.greaterThan.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013550, VkglTestCase_013550_1, VkglTestCase_013550_2);

#define VkglTestCase_013551_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013551_2 "t_compare.greaterThan.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013551, VkglTestCase_013551_1, VkglTestCase_013551_2);
