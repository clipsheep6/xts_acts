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

#define VkglTestCase_033433_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033433_2 "ribute.usages.static_copy.stride0_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033433, VkglTestCase_033433_1, VkglTestCase_033433_2);

#define VkglTestCase_033434_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033434_2 "ribute.usages.static_copy.stride8_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033434, VkglTestCase_033434_1, VkglTestCase_033434_2);

#define VkglTestCase_033435_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033435_2 "ribute.usages.static_copy.stride32_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033435, VkglTestCase_033435_1, VkglTestCase_033435_2);

#define VkglTestCase_033436_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033436_2 "ibute.usages.static_copy.stride0_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033436, VkglTestCase_033436_1, VkglTestCase_033436_2);

#define VkglTestCase_033437_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033437_2 "ibute.usages.static_copy.stride8_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033437, VkglTestCase_033437_1, VkglTestCase_033437_2);

#define VkglTestCase_033438_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033438_2 "ibute.usages.static_copy.stride32_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033438, VkglTestCase_033438_1, VkglTestCase_033438_2);

#define VkglTestCase_033439_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033439_2 "ribute.usages.static_copy.stride0_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033439, VkglTestCase_033439_1, VkglTestCase_033439_2);

#define VkglTestCase_033440_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033440_2 "ribute.usages.static_copy.stride8_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033440, VkglTestCase_033440_1, VkglTestCase_033440_2);

#define VkglTestCase_033441_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033441_2 "ribute.usages.static_copy.stride32_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033441, VkglTestCase_033441_1, VkglTestCase_033441_2);

#define VkglTestCase_033442_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033442_2 "ibute.usages.static_copy.stride0_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033442, VkglTestCase_033442_1, VkglTestCase_033442_2);

#define VkglTestCase_033443_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033443_2 "ibute.usages.static_copy.stride8_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033443, VkglTestCase_033443_1, VkglTestCase_033443_2);

#define VkglTestCase_033444_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033444_2 "ibute.usages.static_copy.stride32_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033444, VkglTestCase_033444_1, VkglTestCase_033444_2);

#define VkglTestCase_033445_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033445_2 "ribute.usages.static_copy.stride0_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033445, VkglTestCase_033445_1, VkglTestCase_033445_2);

#define VkglTestCase_033446_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033446_2 "ribute.usages.static_copy.stride4_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033446, VkglTestCase_033446_1, VkglTestCase_033446_2);

#define VkglTestCase_033447_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033447_2 "ribute.usages.static_copy.stride32_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033447, VkglTestCase_033447_1, VkglTestCase_033447_2);

#define VkglTestCase_033448_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033448_2 "ibute.usages.static_copy.stride0_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033448, VkglTestCase_033448_1, VkglTestCase_033448_2);

#define VkglTestCase_033449_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033449_2 "ibute.usages.static_copy.stride4_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033449, VkglTestCase_033449_1, VkglTestCase_033449_2);

#define VkglTestCase_033450_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033450_2 "ibute.usages.static_copy.stride32_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033450, VkglTestCase_033450_1, VkglTestCase_033450_2);

#define VkglTestCase_033451_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033451_2 "tribute.usages.static_copy.stride0_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033451, VkglTestCase_033451_1, VkglTestCase_033451_2);

#define VkglTestCase_033452_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033452_2 "tribute.usages.static_copy.stride2_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033452, VkglTestCase_033452_1, VkglTestCase_033452_2);

#define VkglTestCase_033453_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033453_2 "ribute.usages.static_copy.stride17_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033453, VkglTestCase_033453_1, VkglTestCase_033453_2);

#define VkglTestCase_033454_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033454_2 "ribute.usages.static_copy.stride32_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033454, VkglTestCase_033454_1, VkglTestCase_033454_2);

#define VkglTestCase_033455_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033455_2 "ribute.usages.static_copy.stride0_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033455, VkglTestCase_033455_1, VkglTestCase_033455_2);

#define VkglTestCase_033456_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033456_2 "ribute.usages.static_copy.stride2_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033456, VkglTestCase_033456_1, VkglTestCase_033456_2);

#define VkglTestCase_033457_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033457_2 "ibute.usages.static_copy.stride17_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033457, VkglTestCase_033457_1, VkglTestCase_033457_2);

#define VkglTestCase_033458_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033458_2 "ibute.usages.static_copy.stride32_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033458, VkglTestCase_033458_1, VkglTestCase_033458_2);
