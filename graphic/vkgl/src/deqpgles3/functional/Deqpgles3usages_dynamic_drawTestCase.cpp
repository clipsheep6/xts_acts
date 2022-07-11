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

#define VkglTestCase_033407_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033407_2 "ribute.usages.dynamic_draw.stride0_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033407, VkglTestCase_033407_1, VkglTestCase_033407_2);

#define VkglTestCase_033408_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033408_2 "ribute.usages.dynamic_draw.stride8_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033408, VkglTestCase_033408_1, VkglTestCase_033408_2);

#define VkglTestCase_033409_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033409_2 "ibute.usages.dynamic_draw.stride32_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033409, VkglTestCase_033409_1, VkglTestCase_033409_2);

#define VkglTestCase_033410_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033410_2 "ibute.usages.dynamic_draw.stride0_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033410, VkglTestCase_033410_1, VkglTestCase_033410_2);

#define VkglTestCase_033411_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033411_2 "ibute.usages.dynamic_draw.stride8_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033411, VkglTestCase_033411_1, VkglTestCase_033411_2);

#define VkglTestCase_033412_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033412_2 "bute.usages.dynamic_draw.stride32_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033412, VkglTestCase_033412_1, VkglTestCase_033412_2);

#define VkglTestCase_033413_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033413_2 "ribute.usages.dynamic_draw.stride0_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033413, VkglTestCase_033413_1, VkglTestCase_033413_2);

#define VkglTestCase_033414_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033414_2 "ribute.usages.dynamic_draw.stride8_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033414, VkglTestCase_033414_1, VkglTestCase_033414_2);

#define VkglTestCase_033415_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033415_2 "ibute.usages.dynamic_draw.stride32_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033415, VkglTestCase_033415_1, VkglTestCase_033415_2);

#define VkglTestCase_033416_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033416_2 "ibute.usages.dynamic_draw.stride0_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033416, VkglTestCase_033416_1, VkglTestCase_033416_2);

#define VkglTestCase_033417_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033417_2 "ibute.usages.dynamic_draw.stride8_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033417, VkglTestCase_033417_1, VkglTestCase_033417_2);

#define VkglTestCase_033418_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033418_2 "bute.usages.dynamic_draw.stride32_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033418, VkglTestCase_033418_1, VkglTestCase_033418_2);

#define VkglTestCase_033419_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033419_2 "ribute.usages.dynamic_draw.stride0_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033419, VkglTestCase_033419_1, VkglTestCase_033419_2);

#define VkglTestCase_033420_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033420_2 "ribute.usages.dynamic_draw.stride4_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033420, VkglTestCase_033420_1, VkglTestCase_033420_2);

#define VkglTestCase_033421_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033421_2 "ibute.usages.dynamic_draw.stride32_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033421, VkglTestCase_033421_1, VkglTestCase_033421_2);

#define VkglTestCase_033422_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033422_2 "ibute.usages.dynamic_draw.stride0_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033422, VkglTestCase_033422_1, VkglTestCase_033422_2);

#define VkglTestCase_033423_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033423_2 "ibute.usages.dynamic_draw.stride4_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033423, VkglTestCase_033423_1, VkglTestCase_033423_2);

#define VkglTestCase_033424_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033424_2 "bute.usages.dynamic_draw.stride32_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033424, VkglTestCase_033424_1, VkglTestCase_033424_2);

#define VkglTestCase_033425_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033425_2 "ribute.usages.dynamic_draw.stride0_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033425, VkglTestCase_033425_1, VkglTestCase_033425_2);

#define VkglTestCase_033426_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033426_2 "ribute.usages.dynamic_draw.stride2_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033426, VkglTestCase_033426_1, VkglTestCase_033426_2);

#define VkglTestCase_033427_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033427_2 "ribute.usages.dynamic_draw.stride17_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033427, VkglTestCase_033427_1, VkglTestCase_033427_2);

#define VkglTestCase_033428_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033428_2 "ribute.usages.dynamic_draw.stride32_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033428, VkglTestCase_033428_1, VkglTestCase_033428_2);

#define VkglTestCase_033429_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033429_2 "ibute.usages.dynamic_draw.stride0_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033429, VkglTestCase_033429_1, VkglTestCase_033429_2);

#define VkglTestCase_033430_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033430_2 "ibute.usages.dynamic_draw.stride2_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033430, VkglTestCase_033430_1, VkglTestCase_033430_2);

#define VkglTestCase_033431_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033431_2 "ibute.usages.dynamic_draw.stride17_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033431, VkglTestCase_033431_1, VkglTestCase_033431_2);

#define VkglTestCase_033432_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033432_2 "ibute.usages.dynamic_draw.stride32_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033432, VkglTestCase_033432_1, VkglTestCase_033432_2);
