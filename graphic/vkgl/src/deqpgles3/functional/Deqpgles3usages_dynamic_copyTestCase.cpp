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

#define VkglTestCase_033485_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033485_2 "ribute.usages.dynamic_copy.stride0_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033485, VkglTestCase_033485_1, VkglTestCase_033485_2);

#define VkglTestCase_033486_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033486_2 "ribute.usages.dynamic_copy.stride8_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033486, VkglTestCase_033486_1, VkglTestCase_033486_2);

#define VkglTestCase_033487_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033487_2 "ibute.usages.dynamic_copy.stride32_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033487, VkglTestCase_033487_1, VkglTestCase_033487_2);

#define VkglTestCase_033488_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033488_2 "ibute.usages.dynamic_copy.stride0_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033488, VkglTestCase_033488_1, VkglTestCase_033488_2);

#define VkglTestCase_033489_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033489_2 "ibute.usages.dynamic_copy.stride8_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033489, VkglTestCase_033489_1, VkglTestCase_033489_2);

#define VkglTestCase_033490_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033490_2 "bute.usages.dynamic_copy.stride32_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033490, VkglTestCase_033490_1, VkglTestCase_033490_2);

#define VkglTestCase_033491_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033491_2 "ribute.usages.dynamic_copy.stride0_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033491, VkglTestCase_033491_1, VkglTestCase_033491_2);

#define VkglTestCase_033492_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033492_2 "ribute.usages.dynamic_copy.stride8_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033492, VkglTestCase_033492_1, VkglTestCase_033492_2);

#define VkglTestCase_033493_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033493_2 "ibute.usages.dynamic_copy.stride32_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033493, VkglTestCase_033493_1, VkglTestCase_033493_2);

#define VkglTestCase_033494_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033494_2 "ibute.usages.dynamic_copy.stride0_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033494, VkglTestCase_033494_1, VkglTestCase_033494_2);

#define VkglTestCase_033495_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033495_2 "ibute.usages.dynamic_copy.stride8_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033495, VkglTestCase_033495_1, VkglTestCase_033495_2);

#define VkglTestCase_033496_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033496_2 "bute.usages.dynamic_copy.stride32_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033496, VkglTestCase_033496_1, VkglTestCase_033496_2);

#define VkglTestCase_033497_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033497_2 "ribute.usages.dynamic_copy.stride0_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033497, VkglTestCase_033497_1, VkglTestCase_033497_2);

#define VkglTestCase_033498_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033498_2 "ribute.usages.dynamic_copy.stride4_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033498, VkglTestCase_033498_1, VkglTestCase_033498_2);

#define VkglTestCase_033499_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033499_2 "ibute.usages.dynamic_copy.stride32_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033499, VkglTestCase_033499_1, VkglTestCase_033499_2);

#define VkglTestCase_033500_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033500_2 "ibute.usages.dynamic_copy.stride0_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033500, VkglTestCase_033500_1, VkglTestCase_033500_2);

#define VkglTestCase_033501_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033501_2 "ibute.usages.dynamic_copy.stride4_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033501, VkglTestCase_033501_1, VkglTestCase_033501_2);

#define VkglTestCase_033502_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033502_2 "bute.usages.dynamic_copy.stride32_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033502, VkglTestCase_033502_1, VkglTestCase_033502_2);

#define VkglTestCase_033503_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033503_2 "ribute.usages.dynamic_copy.stride0_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033503, VkglTestCase_033503_1, VkglTestCase_033503_2);

#define VkglTestCase_033504_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033504_2 "ribute.usages.dynamic_copy.stride2_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033504, VkglTestCase_033504_1, VkglTestCase_033504_2);

#define VkglTestCase_033505_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033505_2 "ribute.usages.dynamic_copy.stride17_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033505, VkglTestCase_033505_1, VkglTestCase_033505_2);

#define VkglTestCase_033506_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033506_2 "ribute.usages.dynamic_copy.stride32_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033506, VkglTestCase_033506_1, VkglTestCase_033506_2);

#define VkglTestCase_033507_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033507_2 "ibute.usages.dynamic_copy.stride0_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033507, VkglTestCase_033507_1, VkglTestCase_033507_2);

#define VkglTestCase_033508_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033508_2 "ibute.usages.dynamic_copy.stride2_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033508, VkglTestCase_033508_1, VkglTestCase_033508_2);

#define VkglTestCase_033509_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033509_2 "ibute.usages.dynamic_copy.stride17_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033509, VkglTestCase_033509_1, VkglTestCase_033509_2);

#define VkglTestCase_033510_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033510_2 "ibute.usages.dynamic_copy.stride32_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033510, VkglTestCase_033510_1, VkglTestCase_033510_2);
