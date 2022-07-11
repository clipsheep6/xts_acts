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

#define VkglTestCase_033597_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033597_2 "attribute.offset.byte.offset1_stride2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033597, VkglTestCase_033597_1, VkglTestCase_033597_2);

#define VkglTestCase_033598_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033598_2 "ttribute.offset.byte.offset1_stride17_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033598, VkglTestCase_033598_1, VkglTestCase_033598_2);

#define VkglTestCase_033599_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033599_2 "ttribute.offset.byte.offset1_stride32_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033599, VkglTestCase_033599_1, VkglTestCase_033599_2);

#define VkglTestCase_033600_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033600_2 "ttribute.offset.byte.offset1_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033600, VkglTestCase_033600_1, VkglTestCase_033600_2);

#define VkglTestCase_033601_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033601_2 "tribute.offset.byte.offset1_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033601, VkglTestCase_033601_1, VkglTestCase_033601_2);

#define VkglTestCase_033602_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033602_2 "tribute.offset.byte.offset1_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033602, VkglTestCase_033602_1, VkglTestCase_033602_2);

#define VkglTestCase_033603_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033603_2 "attribute.offset.byte.offset4_stride2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033603, VkglTestCase_033603_1, VkglTestCase_033603_2);

#define VkglTestCase_033604_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033604_2 "ttribute.offset.byte.offset4_stride17_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033604, VkglTestCase_033604_1, VkglTestCase_033604_2);

#define VkglTestCase_033605_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033605_2 "ttribute.offset.byte.offset4_stride32_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033605, VkglTestCase_033605_1, VkglTestCase_033605_2);

#define VkglTestCase_033606_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033606_2 "ttribute.offset.byte.offset4_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033606, VkglTestCase_033606_1, VkglTestCase_033606_2);

#define VkglTestCase_033607_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033607_2 "tribute.offset.byte.offset4_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033607, VkglTestCase_033607_1, VkglTestCase_033607_2);

#define VkglTestCase_033608_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033608_2 "tribute.offset.byte.offset4_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033608, VkglTestCase_033608_1, VkglTestCase_033608_2);

#define VkglTestCase_033609_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033609_2 "ttribute.offset.byte.offset17_stride2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033609, VkglTestCase_033609_1, VkglTestCase_033609_2);

#define VkglTestCase_033610_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033610_2 "ttribute.offset.byte.offset17_stride17_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033610, VkglTestCase_033610_1, VkglTestCase_033610_2);

#define VkglTestCase_033611_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033611_2 "ttribute.offset.byte.offset17_stride32_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033611, VkglTestCase_033611_1, VkglTestCase_033611_2);

#define VkglTestCase_033612_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033612_2 "tribute.offset.byte.offset17_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033612, VkglTestCase_033612_1, VkglTestCase_033612_2);

#define VkglTestCase_033613_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033613_2 "tribute.offset.byte.offset17_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033613, VkglTestCase_033613_1, VkglTestCase_033613_2);

#define VkglTestCase_033614_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033614_2 "tribute.offset.byte.offset17_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033614, VkglTestCase_033614_1, VkglTestCase_033614_2);

#define VkglTestCase_033615_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033615_2 "ttribute.offset.byte.offset32_stride2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033615, VkglTestCase_033615_1, VkglTestCase_033615_2);

#define VkglTestCase_033616_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033616_2 "ttribute.offset.byte.offset32_stride17_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033616, VkglTestCase_033616_1, VkglTestCase_033616_2);

#define VkglTestCase_033617_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033617_2 "ttribute.offset.byte.offset32_stride32_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033617, VkglTestCase_033617_1, VkglTestCase_033617_2);

#define VkglTestCase_033618_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033618_2 "tribute.offset.byte.offset32_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033618, VkglTestCase_033618_1, VkglTestCase_033618_2);

#define VkglTestCase_033619_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033619_2 "tribute.offset.byte.offset32_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033619, VkglTestCase_033619_1, VkglTestCase_033619_2);

#define VkglTestCase_033620_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033620_2 "tribute.offset.byte.offset32_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033620, VkglTestCase_033620_1, VkglTestCase_033620_2);
