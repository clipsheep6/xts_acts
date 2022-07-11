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

#define VkglTestCase_033673_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033673_2 "e.first.int2_10_10_10.first6_offset16_stride8_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033673, VkglTestCase_033673_1, VkglTestCase_033673_2);

#define VkglTestCase_033674_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033674_2 ".first.int2_10_10_10.first24_offset16_stride8_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033674, VkglTestCase_033674_1, VkglTestCase_033674_2);

#define VkglTestCase_033675_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033675_2 ".first.int2_10_10_10.first6_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033675, VkglTestCase_033675_1, VkglTestCase_033675_2);

#define VkglTestCase_033676_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033676_2 ".first.int2_10_10_10.first24_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033676, VkglTestCase_033676_1, VkglTestCase_033676_2);

#define VkglTestCase_033677_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033677_2 ".first.int2_10_10_10.first6_offset16_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033677, VkglTestCase_033677_1, VkglTestCase_033677_2);

#define VkglTestCase_033678_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033678_2 "first.int2_10_10_10.first24_offset16_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033678, VkglTestCase_033678_1, VkglTestCase_033678_2);

#define VkglTestCase_033679_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033679_2 "first.int2_10_10_10.first6_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033679, VkglTestCase_033679_1, VkglTestCase_033679_2);

#define VkglTestCase_033680_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033680_2 "first.int2_10_10_10.first24_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033680, VkglTestCase_033680_1, VkglTestCase_033680_2);
