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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013335_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013335_2 "ibute.first.float_first6_offset16_stride8_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013335, VkglTestCase_013335_1, VkglTestCase_013335_2);

#define VkglTestCase_013336_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013336_2 "bute.first.float_first24_offset16_stride8_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013336, VkglTestCase_013336_1, VkglTestCase_013336_2);

#define VkglTestCase_013337_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013337_2 "bute.first.float_first6_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013337, VkglTestCase_013337_1, VkglTestCase_013337_2);

#define VkglTestCase_013338_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013338_2 "bute.first.float_first24_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013338, VkglTestCase_013338_1, VkglTestCase_013338_2);

#define VkglTestCase_013339_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013339_2 "bute.first.float_first6_offset16_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013339, VkglTestCase_013339_1, VkglTestCase_013339_2);

#define VkglTestCase_013340_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013340_2 "ute.first.float_first24_offset16_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013340, VkglTestCase_013340_1, VkglTestCase_013340_2);

#define VkglTestCase_013341_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013341_2 "ute.first.float_first6_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013341, VkglTestCase_013341_1, VkglTestCase_013341_2);

#define VkglTestCase_013342_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013342_2 "ute.first.float_first24_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013342, VkglTestCase_013342_1, VkglTestCase_013342_2);

#define VkglTestCase_013343_1 "dEQP-GLES2.functional.vertex_arrays.single_att"
#define VkglTestCase_013343_2 "ribute.first.byte_first6_offset1_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013343, VkglTestCase_013343_1, VkglTestCase_013343_2);

#define VkglTestCase_013344_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013344_2 "ibute.first.byte_first24_offset1_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013344, VkglTestCase_013344_1, VkglTestCase_013344_2);

#define VkglTestCase_013345_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013345_2 "ibute.first.byte_first6_offset1_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013345, VkglTestCase_013345_1, VkglTestCase_013345_2);

#define VkglTestCase_013346_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013346_2 "ibute.first.byte_first24_offset1_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013346, VkglTestCase_013346_1, VkglTestCase_013346_2);

#define VkglTestCase_013347_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013347_2 "ibute.first.byte_first6_offset1_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013347, VkglTestCase_013347_1, VkglTestCase_013347_2);

#define VkglTestCase_013348_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013348_2 "ibute.first.byte_first24_offset1_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013348, VkglTestCase_013348_1, VkglTestCase_013348_2);

#define VkglTestCase_013349_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013349_2 "ibute.first.byte_first6_offset1_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013349, VkglTestCase_013349_1, VkglTestCase_013349_2);

#define VkglTestCase_013350_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013350_2 "bute.first.byte_first24_offset1_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013350, VkglTestCase_013350_1, VkglTestCase_013350_2);

#define VkglTestCase_013351_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013351_2 "bute.first.byte_first6_offset1_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013351, VkglTestCase_013351_1, VkglTestCase_013351_2);

#define VkglTestCase_013352_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013352_2 "bute.first.byte_first24_offset1_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013352, VkglTestCase_013352_1, VkglTestCase_013352_2);

#define VkglTestCase_013353_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013353_2 "bute.first.byte_first6_offset1_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013353, VkglTestCase_013353_1, VkglTestCase_013353_2);

#define VkglTestCase_013354_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013354_2 "bute.first.byte_first24_offset1_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013354, VkglTestCase_013354_1, VkglTestCase_013354_2);

#define VkglTestCase_013355_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013355_2 "ibute.first.byte_first6_offset16_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013355, VkglTestCase_013355_1, VkglTestCase_013355_2);

#define VkglTestCase_013356_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013356_2 "ibute.first.byte_first24_offset16_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013356, VkglTestCase_013356_1, VkglTestCase_013356_2);

#define VkglTestCase_013357_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013357_2 "ibute.first.byte_first6_offset16_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013357, VkglTestCase_013357_1, VkglTestCase_013357_2);

#define VkglTestCase_013358_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013358_2 "bute.first.byte_first24_offset16_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013358, VkglTestCase_013358_1, VkglTestCase_013358_2);

#define VkglTestCase_013359_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013359_2 "ibute.first.byte_first6_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013359, VkglTestCase_013359_1, VkglTestCase_013359_2);

#define VkglTestCase_013360_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013360_2 "bute.first.byte_first24_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013360, VkglTestCase_013360_1, VkglTestCase_013360_2);

#define VkglTestCase_013361_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013361_2 "bute.first.byte_first6_offset16_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013361, VkglTestCase_013361_1, VkglTestCase_013361_2);

#define VkglTestCase_013362_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013362_2 "bute.first.byte_first24_offset16_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013362, VkglTestCase_013362_1, VkglTestCase_013362_2);

#define VkglTestCase_013363_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013363_2 "bute.first.byte_first6_offset16_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013363, VkglTestCase_013363_1, VkglTestCase_013363_2);

#define VkglTestCase_013364_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013364_2 "ute.first.byte_first24_offset16_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013364, VkglTestCase_013364_1, VkglTestCase_013364_2);

#define VkglTestCase_013365_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013365_2 "bute.first.byte_first6_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013365, VkglTestCase_013365_1, VkglTestCase_013365_2);

#define VkglTestCase_013366_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013366_2 "ute.first.byte_first24_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013366, VkglTestCase_013366_1, VkglTestCase_013366_2);

#define VkglTestCase_013367_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013367_2 "ibute.first.byte_first6_offset17_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013367, VkglTestCase_013367_1, VkglTestCase_013367_2);

#define VkglTestCase_013368_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013368_2 "ibute.first.byte_first24_offset17_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013368, VkglTestCase_013368_1, VkglTestCase_013368_2);

#define VkglTestCase_013369_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013369_2 "ibute.first.byte_first6_offset17_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013369, VkglTestCase_013369_1, VkglTestCase_013369_2);

#define VkglTestCase_013370_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013370_2 "bute.first.byte_first24_offset17_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013370, VkglTestCase_013370_1, VkglTestCase_013370_2);

#define VkglTestCase_013371_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013371_2 "ibute.first.byte_first6_offset17_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013371, VkglTestCase_013371_1, VkglTestCase_013371_2);

#define VkglTestCase_013372_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013372_2 "bute.first.byte_first24_offset17_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013372, VkglTestCase_013372_1, VkglTestCase_013372_2);

#define VkglTestCase_013373_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013373_2 "bute.first.byte_first6_offset17_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013373, VkglTestCase_013373_1, VkglTestCase_013373_2);

#define VkglTestCase_013374_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013374_2 "bute.first.byte_first24_offset17_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013374, VkglTestCase_013374_1, VkglTestCase_013374_2);

#define VkglTestCase_013375_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013375_2 "bute.first.byte_first6_offset17_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013375, VkglTestCase_013375_1, VkglTestCase_013375_2);

#define VkglTestCase_013376_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013376_2 "ute.first.byte_first24_offset17_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013376, VkglTestCase_013376_1, VkglTestCase_013376_2);

#define VkglTestCase_013377_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013377_2 "bute.first.byte_first6_offset17_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013377, VkglTestCase_013377_1, VkglTestCase_013377_2);

#define VkglTestCase_013378_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013378_2 "ute.first.byte_first24_offset17_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013378, VkglTestCase_013378_1, VkglTestCase_013378_2);

#define VkglTestCase_013379_1 "dEQP-GLES2.functional.vertex_arrays.single_attr"
#define VkglTestCase_013379_2 "ibute.first.fixed_first6_offset16_stride8_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013379, VkglTestCase_013379_1, VkglTestCase_013379_2);

#define VkglTestCase_013380_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013380_2 "bute.first.fixed_first24_offset16_stride8_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013380, VkglTestCase_013380_1, VkglTestCase_013380_2);

#define VkglTestCase_013381_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013381_2 "bute.first.fixed_first6_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013381, VkglTestCase_013381_1, VkglTestCase_013381_2);

#define VkglTestCase_013382_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013382_2 "bute.first.fixed_first24_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013382, VkglTestCase_013382_1, VkglTestCase_013382_2);

#define VkglTestCase_013383_1 "dEQP-GLES2.functional.vertex_arrays.single_attri"
#define VkglTestCase_013383_2 "bute.first.fixed_first6_offset16_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013383, VkglTestCase_013383_1, VkglTestCase_013383_2);

#define VkglTestCase_013384_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013384_2 "ute.first.fixed_first24_offset16_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013384, VkglTestCase_013384_1, VkglTestCase_013384_2);

#define VkglTestCase_013385_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013385_2 "ute.first.fixed_first6_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013385, VkglTestCase_013385_1, VkglTestCase_013385_2);

#define VkglTestCase_013386_1 "dEQP-GLES2.functional.vertex_arrays.single_attrib"
#define VkglTestCase_013386_2 "ute.first.fixed_first24_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013386, VkglTestCase_013386_1, VkglTestCase_013386_2);
