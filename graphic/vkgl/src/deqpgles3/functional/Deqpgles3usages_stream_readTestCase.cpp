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

#define VkglTestCase_033537_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033537_2 "ribute.usages.stream_read.stride0_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033537, VkglTestCase_033537_1, VkglTestCase_033537_2);

#define VkglTestCase_033538_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033538_2 "ribute.usages.stream_read.stride8_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033538, VkglTestCase_033538_1, VkglTestCase_033538_2);

#define VkglTestCase_033539_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033539_2 "ribute.usages.stream_read.stride32_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033539, VkglTestCase_033539_1, VkglTestCase_033539_2);

#define VkglTestCase_033540_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033540_2 "ibute.usages.stream_read.stride0_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033540, VkglTestCase_033540_1, VkglTestCase_033540_2);

#define VkglTestCase_033541_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033541_2 "ibute.usages.stream_read.stride8_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033541, VkglTestCase_033541_1, VkglTestCase_033541_2);

#define VkglTestCase_033542_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033542_2 "ibute.usages.stream_read.stride32_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033542, VkglTestCase_033542_1, VkglTestCase_033542_2);

#define VkglTestCase_033543_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033543_2 "ribute.usages.stream_read.stride0_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033543, VkglTestCase_033543_1, VkglTestCase_033543_2);

#define VkglTestCase_033544_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033544_2 "ribute.usages.stream_read.stride8_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033544, VkglTestCase_033544_1, VkglTestCase_033544_2);

#define VkglTestCase_033545_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033545_2 "ribute.usages.stream_read.stride32_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033545, VkglTestCase_033545_1, VkglTestCase_033545_2);

#define VkglTestCase_033546_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033546_2 "ibute.usages.stream_read.stride0_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033546, VkglTestCase_033546_1, VkglTestCase_033546_2);

#define VkglTestCase_033547_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033547_2 "ibute.usages.stream_read.stride8_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033547, VkglTestCase_033547_1, VkglTestCase_033547_2);

#define VkglTestCase_033548_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033548_2 "ibute.usages.stream_read.stride32_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033548, VkglTestCase_033548_1, VkglTestCase_033548_2);

#define VkglTestCase_033549_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033549_2 "ribute.usages.stream_read.stride0_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033549, VkglTestCase_033549_1, VkglTestCase_033549_2);

#define VkglTestCase_033550_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033550_2 "ribute.usages.stream_read.stride4_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033550, VkglTestCase_033550_1, VkglTestCase_033550_2);

#define VkglTestCase_033551_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033551_2 "ribute.usages.stream_read.stride32_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033551, VkglTestCase_033551_1, VkglTestCase_033551_2);

#define VkglTestCase_033552_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033552_2 "ibute.usages.stream_read.stride0_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033552, VkglTestCase_033552_1, VkglTestCase_033552_2);

#define VkglTestCase_033553_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033553_2 "ibute.usages.stream_read.stride4_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033553, VkglTestCase_033553_1, VkglTestCase_033553_2);

#define VkglTestCase_033554_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033554_2 "ibute.usages.stream_read.stride32_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033554, VkglTestCase_033554_1, VkglTestCase_033554_2);

#define VkglTestCase_033555_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033555_2 "tribute.usages.stream_read.stride0_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033555, VkglTestCase_033555_1, VkglTestCase_033555_2);

#define VkglTestCase_033556_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033556_2 "tribute.usages.stream_read.stride2_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033556, VkglTestCase_033556_1, VkglTestCase_033556_2);

#define VkglTestCase_033557_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033557_2 "ribute.usages.stream_read.stride17_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033557, VkglTestCase_033557_1, VkglTestCase_033557_2);

#define VkglTestCase_033558_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033558_2 "ribute.usages.stream_read.stride32_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033558, VkglTestCase_033558_1, VkglTestCase_033558_2);

#define VkglTestCase_033559_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033559_2 "ribute.usages.stream_read.stride0_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033559, VkglTestCase_033559_1, VkglTestCase_033559_2);

#define VkglTestCase_033560_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033560_2 "ribute.usages.stream_read.stride2_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033560, VkglTestCase_033560_1, VkglTestCase_033560_2);

#define VkglTestCase_033561_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033561_2 "ibute.usages.stream_read.stride17_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033561, VkglTestCase_033561_1, VkglTestCase_033561_2);

#define VkglTestCase_033562_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033562_2 "ibute.usages.stream_read.stride32_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033562, VkglTestCase_033562_1, VkglTestCase_033562_2);
