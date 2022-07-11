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

#define VkglTestCase_033511_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033511_2 "ribute.usages.static_read.stride0_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033511, VkglTestCase_033511_1, VkglTestCase_033511_2);

#define VkglTestCase_033512_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033512_2 "ribute.usages.static_read.stride8_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033512, VkglTestCase_033512_1, VkglTestCase_033512_2);

#define VkglTestCase_033513_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033513_2 "ribute.usages.static_read.stride32_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033513, VkglTestCase_033513_1, VkglTestCase_033513_2);

#define VkglTestCase_033514_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033514_2 "ibute.usages.static_read.stride0_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033514, VkglTestCase_033514_1, VkglTestCase_033514_2);

#define VkglTestCase_033515_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033515_2 "ibute.usages.static_read.stride8_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033515, VkglTestCase_033515_1, VkglTestCase_033515_2);

#define VkglTestCase_033516_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033516_2 "ibute.usages.static_read.stride32_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033516, VkglTestCase_033516_1, VkglTestCase_033516_2);

#define VkglTestCase_033517_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033517_2 "ribute.usages.static_read.stride0_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033517, VkglTestCase_033517_1, VkglTestCase_033517_2);

#define VkglTestCase_033518_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033518_2 "ribute.usages.static_read.stride8_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033518, VkglTestCase_033518_1, VkglTestCase_033518_2);

#define VkglTestCase_033519_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033519_2 "ribute.usages.static_read.stride32_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033519, VkglTestCase_033519_1, VkglTestCase_033519_2);

#define VkglTestCase_033520_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033520_2 "ibute.usages.static_read.stride0_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033520, VkglTestCase_033520_1, VkglTestCase_033520_2);

#define VkglTestCase_033521_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033521_2 "ibute.usages.static_read.stride8_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033521, VkglTestCase_033521_1, VkglTestCase_033521_2);

#define VkglTestCase_033522_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033522_2 "ibute.usages.static_read.stride32_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033522, VkglTestCase_033522_1, VkglTestCase_033522_2);

#define VkglTestCase_033523_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033523_2 "ribute.usages.static_read.stride0_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033523, VkglTestCase_033523_1, VkglTestCase_033523_2);

#define VkglTestCase_033524_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033524_2 "ribute.usages.static_read.stride4_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033524, VkglTestCase_033524_1, VkglTestCase_033524_2);

#define VkglTestCase_033525_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033525_2 "ribute.usages.static_read.stride32_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033525, VkglTestCase_033525_1, VkglTestCase_033525_2);

#define VkglTestCase_033526_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033526_2 "ibute.usages.static_read.stride0_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033526, VkglTestCase_033526_1, VkglTestCase_033526_2);

#define VkglTestCase_033527_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033527_2 "ibute.usages.static_read.stride4_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033527, VkglTestCase_033527_1, VkglTestCase_033527_2);

#define VkglTestCase_033528_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033528_2 "ibute.usages.static_read.stride32_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033528, VkglTestCase_033528_1, VkglTestCase_033528_2);

#define VkglTestCase_033529_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033529_2 "tribute.usages.static_read.stride0_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033529, VkglTestCase_033529_1, VkglTestCase_033529_2);

#define VkglTestCase_033530_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033530_2 "tribute.usages.static_read.stride2_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033530, VkglTestCase_033530_1, VkglTestCase_033530_2);

#define VkglTestCase_033531_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033531_2 "ribute.usages.static_read.stride17_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033531, VkglTestCase_033531_1, VkglTestCase_033531_2);

#define VkglTestCase_033532_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033532_2 "ribute.usages.static_read.stride32_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033532, VkglTestCase_033532_1, VkglTestCase_033532_2);

#define VkglTestCase_033533_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033533_2 "ribute.usages.static_read.stride0_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033533, VkglTestCase_033533_1, VkglTestCase_033533_2);

#define VkglTestCase_033534_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033534_2 "ribute.usages.static_read.stride2_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033534, VkglTestCase_033534_1, VkglTestCase_033534_2);

#define VkglTestCase_033535_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033535_2 "ibute.usages.static_read.stride17_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033535, VkglTestCase_033535_1, VkglTestCase_033535_2);

#define VkglTestCase_033536_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033536_2 "ibute.usages.static_read.stride32_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033536, VkglTestCase_033536_1, VkglTestCase_033536_2);
