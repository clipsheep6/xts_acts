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

#define VkglTestCase_033381_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033381_2 "ribute.usages.stream_draw.stride0_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033381, VkglTestCase_033381_1, VkglTestCase_033381_2);

#define VkglTestCase_033382_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033382_2 "ribute.usages.stream_draw.stride8_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033382, VkglTestCase_033382_1, VkglTestCase_033382_2);

#define VkglTestCase_033383_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033383_2 "ribute.usages.stream_draw.stride32_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033383, VkglTestCase_033383_1, VkglTestCase_033383_2);

#define VkglTestCase_033384_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033384_2 "ibute.usages.stream_draw.stride0_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033384, VkglTestCase_033384_1, VkglTestCase_033384_2);

#define VkglTestCase_033385_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033385_2 "ibute.usages.stream_draw.stride8_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033385, VkglTestCase_033385_1, VkglTestCase_033385_2);

#define VkglTestCase_033386_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033386_2 "ibute.usages.stream_draw.stride32_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033386, VkglTestCase_033386_1, VkglTestCase_033386_2);

#define VkglTestCase_033387_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033387_2 "ribute.usages.stream_draw.stride0_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033387, VkglTestCase_033387_1, VkglTestCase_033387_2);

#define VkglTestCase_033388_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033388_2 "ribute.usages.stream_draw.stride8_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033388, VkglTestCase_033388_1, VkglTestCase_033388_2);

#define VkglTestCase_033389_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033389_2 "ribute.usages.stream_draw.stride32_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033389, VkglTestCase_033389_1, VkglTestCase_033389_2);

#define VkglTestCase_033390_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033390_2 "ibute.usages.stream_draw.stride0_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033390, VkglTestCase_033390_1, VkglTestCase_033390_2);

#define VkglTestCase_033391_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033391_2 "ibute.usages.stream_draw.stride8_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033391, VkglTestCase_033391_1, VkglTestCase_033391_2);

#define VkglTestCase_033392_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033392_2 "ibute.usages.stream_draw.stride32_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033392, VkglTestCase_033392_1, VkglTestCase_033392_2);

#define VkglTestCase_033393_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033393_2 "ribute.usages.stream_draw.stride0_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033393, VkglTestCase_033393_1, VkglTestCase_033393_2);

#define VkglTestCase_033394_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033394_2 "ribute.usages.stream_draw.stride4_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033394, VkglTestCase_033394_1, VkglTestCase_033394_2);

#define VkglTestCase_033395_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033395_2 "ribute.usages.stream_draw.stride32_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033395, VkglTestCase_033395_1, VkglTestCase_033395_2);

#define VkglTestCase_033396_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033396_2 "ibute.usages.stream_draw.stride0_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033396, VkglTestCase_033396_1, VkglTestCase_033396_2);

#define VkglTestCase_033397_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033397_2 "ibute.usages.stream_draw.stride4_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033397, VkglTestCase_033397_1, VkglTestCase_033397_2);

#define VkglTestCase_033398_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033398_2 "ibute.usages.stream_draw.stride32_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033398, VkglTestCase_033398_1, VkglTestCase_033398_2);

#define VkglTestCase_033399_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033399_2 "tribute.usages.stream_draw.stride0_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033399, VkglTestCase_033399_1, VkglTestCase_033399_2);

#define VkglTestCase_033400_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033400_2 "tribute.usages.stream_draw.stride2_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033400, VkglTestCase_033400_1, VkglTestCase_033400_2);

#define VkglTestCase_033401_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033401_2 "ribute.usages.stream_draw.stride17_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033401, VkglTestCase_033401_1, VkglTestCase_033401_2);

#define VkglTestCase_033402_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033402_2 "ribute.usages.stream_draw.stride32_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033402, VkglTestCase_033402_1, VkglTestCase_033402_2);

#define VkglTestCase_033403_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033403_2 "ribute.usages.stream_draw.stride0_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033403, VkglTestCase_033403_1, VkglTestCase_033403_2);

#define VkglTestCase_033404_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033404_2 "ribute.usages.stream_draw.stride2_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033404, VkglTestCase_033404_1, VkglTestCase_033404_2);

#define VkglTestCase_033405_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033405_2 "ibute.usages.stream_draw.stride17_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033405, VkglTestCase_033405_1, VkglTestCase_033405_2);

#define VkglTestCase_033406_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033406_2 "ibute.usages.stream_draw.stride32_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033406, VkglTestCase_033406_1, VkglTestCase_033406_2);
