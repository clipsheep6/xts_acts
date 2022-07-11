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

#define VkglTestCase_033621_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033621_2 "bute.offset.int2_10_10_10.offset4_stride4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033621, VkglTestCase_033621_1, VkglTestCase_033621_2);

#define VkglTestCase_033622_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033622_2 "bute.offset.int2_10_10_10.offset4_stride32_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033622, VkglTestCase_033622_1, VkglTestCase_033622_2);

#define VkglTestCase_033623_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033623_2 "ute.offset.int2_10_10_10.offset4_stride4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033623, VkglTestCase_033623_1, VkglTestCase_033623_2);

#define VkglTestCase_033624_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033624_2 "ute.offset.int2_10_10_10.offset4_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033624, VkglTestCase_033624_1, VkglTestCase_033624_2);

#define VkglTestCase_033625_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033625_2 "bute.offset.int2_10_10_10.offset32_stride4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033625, VkglTestCase_033625_1, VkglTestCase_033625_2);

#define VkglTestCase_033626_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033626_2 "ute.offset.int2_10_10_10.offset32_stride32_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033626, VkglTestCase_033626_1, VkglTestCase_033626_2);

#define VkglTestCase_033627_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033627_2 "ute.offset.int2_10_10_10.offset32_stride4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033627, VkglTestCase_033627_1, VkglTestCase_033627_2);

#define VkglTestCase_033628_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_033628_2 "te.offset.int2_10_10_10.offset32_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033628, VkglTestCase_033628_1, VkglTestCase_033628_2);
