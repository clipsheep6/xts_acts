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

#define VkglTestCase_033629_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033629_2 "ibute.first.float.first6_offset16_stride8_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033629, VkglTestCase_033629_1, VkglTestCase_033629_2);

#define VkglTestCase_033630_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033630_2 "bute.first.float.first24_offset16_stride8_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033630, VkglTestCase_033630_1, VkglTestCase_033630_2);

#define VkglTestCase_033631_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033631_2 "bute.first.float.first6_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033631, VkglTestCase_033631_1, VkglTestCase_033631_2);

#define VkglTestCase_033632_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033632_2 "bute.first.float.first24_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033632, VkglTestCase_033632_1, VkglTestCase_033632_2);

#define VkglTestCase_033633_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033633_2 "bute.first.float.first6_offset16_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033633, VkglTestCase_033633_1, VkglTestCase_033633_2);

#define VkglTestCase_033634_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033634_2 "ute.first.float.first24_offset16_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033634, VkglTestCase_033634_1, VkglTestCase_033634_2);

#define VkglTestCase_033635_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033635_2 "ute.first.float.first6_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033635, VkglTestCase_033635_1, VkglTestCase_033635_2);

#define VkglTestCase_033636_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033636_2 "ute.first.float.first24_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033636, VkglTestCase_033636_1, VkglTestCase_033636_2);
