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
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033563_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033563_2 "ribute.usages.dynamic_read.stride0_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033563, VkglTestCase_033563_1, VkglTestCase_033563_2);

#define VkglTestCase_033564_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033564_2 "ribute.usages.dynamic_read.stride8_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033564, VkglTestCase_033564_1, VkglTestCase_033564_2);

#define VkglTestCase_033565_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033565_2 "ibute.usages.dynamic_read.stride32_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033565, VkglTestCase_033565_1, VkglTestCase_033565_2);

#define VkglTestCase_033566_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033566_2 "ibute.usages.dynamic_read.stride0_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033566, VkglTestCase_033566_1, VkglTestCase_033566_2);

#define VkglTestCase_033567_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033567_2 "ibute.usages.dynamic_read.stride8_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033567, VkglTestCase_033567_1, VkglTestCase_033567_2);

#define VkglTestCase_033568_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033568_2 "bute.usages.dynamic_read.stride32_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033568, VkglTestCase_033568_1, VkglTestCase_033568_2);

#define VkglTestCase_033569_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033569_2 "ribute.usages.dynamic_read.stride0_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033569, VkglTestCase_033569_1, VkglTestCase_033569_2);

#define VkglTestCase_033570_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033570_2 "ribute.usages.dynamic_read.stride8_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033570, VkglTestCase_033570_1, VkglTestCase_033570_2);

#define VkglTestCase_033571_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033571_2 "ibute.usages.dynamic_read.stride32_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033571, VkglTestCase_033571_1, VkglTestCase_033571_2);

#define VkglTestCase_033572_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033572_2 "ibute.usages.dynamic_read.stride0_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033572, VkglTestCase_033572_1, VkglTestCase_033572_2);

#define VkglTestCase_033573_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033573_2 "ibute.usages.dynamic_read.stride8_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033573, VkglTestCase_033573_1, VkglTestCase_033573_2);

#define VkglTestCase_033574_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033574_2 "bute.usages.dynamic_read.stride32_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033574, VkglTestCase_033574_1, VkglTestCase_033574_2);

#define VkglTestCase_033575_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033575_2 "ribute.usages.dynamic_read.stride0_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033575, VkglTestCase_033575_1, VkglTestCase_033575_2);

#define VkglTestCase_033576_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033576_2 "ribute.usages.dynamic_read.stride4_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033576, VkglTestCase_033576_1, VkglTestCase_033576_2);

#define VkglTestCase_033577_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033577_2 "ibute.usages.dynamic_read.stride32_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033577, VkglTestCase_033577_1, VkglTestCase_033577_2);

#define VkglTestCase_033578_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033578_2 "ibute.usages.dynamic_read.stride0_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033578, VkglTestCase_033578_1, VkglTestCase_033578_2);

#define VkglTestCase_033579_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033579_2 "ibute.usages.dynamic_read.stride4_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033579, VkglTestCase_033579_1, VkglTestCase_033579_2);

#define VkglTestCase_033580_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033580_2 "bute.usages.dynamic_read.stride32_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033580, VkglTestCase_033580_1, VkglTestCase_033580_2);

#define VkglTestCase_033581_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033581_2 "ribute.usages.dynamic_read.stride0_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033581, VkglTestCase_033581_1, VkglTestCase_033581_2);

#define VkglTestCase_033582_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033582_2 "ribute.usages.dynamic_read.stride2_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033582, VkglTestCase_033582_1, VkglTestCase_033582_2);

#define VkglTestCase_033583_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033583_2 "ribute.usages.dynamic_read.stride17_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033583, VkglTestCase_033583_1, VkglTestCase_033583_2);

#define VkglTestCase_033584_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033584_2 "ribute.usages.dynamic_read.stride32_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033584, VkglTestCase_033584_1, VkglTestCase_033584_2);

#define VkglTestCase_033585_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033585_2 "ibute.usages.dynamic_read.stride0_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033585, VkglTestCase_033585_1, VkglTestCase_033585_2);

#define VkglTestCase_033586_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033586_2 "ibute.usages.dynamic_read.stride2_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033586, VkglTestCase_033586_1, VkglTestCase_033586_2);

#define VkglTestCase_033587_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033587_2 "ibute.usages.dynamic_read.stride17_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033587, VkglTestCase_033587_1, VkglTestCase_033587_2);

#define VkglTestCase_033588_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033588_2 "ibute.usages.dynamic_read.stride32_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033588, VkglTestCase_033588_1, VkglTestCase_033588_2);
