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

#define VkglTestCase_033459_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033459_2 "ribute.usages.stream_copy.stride0_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033459, VkglTestCase_033459_1, VkglTestCase_033459_2);

#define VkglTestCase_033460_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033460_2 "ribute.usages.stream_copy.stride8_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033460, VkglTestCase_033460_1, VkglTestCase_033460_2);

#define VkglTestCase_033461_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033461_2 "ribute.usages.stream_copy.stride32_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033461, VkglTestCase_033461_1, VkglTestCase_033461_2);

#define VkglTestCase_033462_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033462_2 "ibute.usages.stream_copy.stride0_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033462, VkglTestCase_033462_1, VkglTestCase_033462_2);

#define VkglTestCase_033463_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033463_2 "ibute.usages.stream_copy.stride8_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033463, VkglTestCase_033463_1, VkglTestCase_033463_2);

#define VkglTestCase_033464_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033464_2 "ibute.usages.stream_copy.stride32_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033464, VkglTestCase_033464_1, VkglTestCase_033464_2);

#define VkglTestCase_033465_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033465_2 "ribute.usages.stream_copy.stride0_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033465, VkglTestCase_033465_1, VkglTestCase_033465_2);

#define VkglTestCase_033466_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033466_2 "ribute.usages.stream_copy.stride8_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033466, VkglTestCase_033466_1, VkglTestCase_033466_2);

#define VkglTestCase_033467_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033467_2 "ribute.usages.stream_copy.stride32_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033467, VkglTestCase_033467_1, VkglTestCase_033467_2);

#define VkglTestCase_033468_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033468_2 "ibute.usages.stream_copy.stride0_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033468, VkglTestCase_033468_1, VkglTestCase_033468_2);

#define VkglTestCase_033469_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033469_2 "ibute.usages.stream_copy.stride8_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033469, VkglTestCase_033469_1, VkglTestCase_033469_2);

#define VkglTestCase_033470_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033470_2 "ibute.usages.stream_copy.stride32_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033470, VkglTestCase_033470_1, VkglTestCase_033470_2);

#define VkglTestCase_033471_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033471_2 "ribute.usages.stream_copy.stride0_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033471, VkglTestCase_033471_1, VkglTestCase_033471_2);

#define VkglTestCase_033472_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033472_2 "ribute.usages.stream_copy.stride4_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033472, VkglTestCase_033472_1, VkglTestCase_033472_2);

#define VkglTestCase_033473_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033473_2 "ribute.usages.stream_copy.stride32_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033473, VkglTestCase_033473_1, VkglTestCase_033473_2);

#define VkglTestCase_033474_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033474_2 "ibute.usages.stream_copy.stride0_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033474, VkglTestCase_033474_1, VkglTestCase_033474_2);

#define VkglTestCase_033475_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033475_2 "ibute.usages.stream_copy.stride4_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033475, VkglTestCase_033475_1, VkglTestCase_033475_2);

#define VkglTestCase_033476_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033476_2 "ibute.usages.stream_copy.stride32_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033476, VkglTestCase_033476_1, VkglTestCase_033476_2);

#define VkglTestCase_033477_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033477_2 "tribute.usages.stream_copy.stride0_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033477, VkglTestCase_033477_1, VkglTestCase_033477_2);

#define VkglTestCase_033478_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033478_2 "tribute.usages.stream_copy.stride2_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033478, VkglTestCase_033478_1, VkglTestCase_033478_2);

#define VkglTestCase_033479_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033479_2 "ribute.usages.stream_copy.stride17_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033479, VkglTestCase_033479_1, VkglTestCase_033479_2);

#define VkglTestCase_033480_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033480_2 "ribute.usages.stream_copy.stride32_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033480, VkglTestCase_033480_1, VkglTestCase_033480_2);

#define VkglTestCase_033481_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033481_2 "ribute.usages.stream_copy.stride0_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033481, VkglTestCase_033481_1, VkglTestCase_033481_2);

#define VkglTestCase_033482_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033482_2 "ribute.usages.stream_copy.stride2_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033482, VkglTestCase_033482_1, VkglTestCase_033482_2);

#define VkglTestCase_033483_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033483_2 "ibute.usages.stream_copy.stride17_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033483, VkglTestCase_033483_1, VkglTestCase_033483_2);

#define VkglTestCase_033484_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033484_2 "ibute.usages.stream_copy.stride32_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033484, VkglTestCase_033484_1, VkglTestCase_033484_2);
