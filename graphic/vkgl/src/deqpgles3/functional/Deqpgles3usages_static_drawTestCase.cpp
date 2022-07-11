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

#define VkglTestCase_033355_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033355_2 "ribute.usages.static_draw.stride0_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033355, VkglTestCase_033355_1, VkglTestCase_033355_2);

#define VkglTestCase_033356_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033356_2 "ribute.usages.static_draw.stride8_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033356, VkglTestCase_033356_1, VkglTestCase_033356_2);

#define VkglTestCase_033357_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033357_2 "ribute.usages.static_draw.stride32_float_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033357, VkglTestCase_033357_1, VkglTestCase_033357_2);

#define VkglTestCase_033358_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033358_2 "ibute.usages.static_draw.stride0_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033358, VkglTestCase_033358_1, VkglTestCase_033358_2);

#define VkglTestCase_033359_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033359_2 "ibute.usages.static_draw.stride8_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033359, VkglTestCase_033359_1, VkglTestCase_033359_2);

#define VkglTestCase_033360_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033360_2 "ibute.usages.static_draw.stride32_float_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033360, VkglTestCase_033360_1, VkglTestCase_033360_2);

#define VkglTestCase_033361_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033361_2 "ribute.usages.static_draw.stride0_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033361, VkglTestCase_033361_1, VkglTestCase_033361_2);

#define VkglTestCase_033362_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033362_2 "ribute.usages.static_draw.stride8_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033362, VkglTestCase_033362_1, VkglTestCase_033362_2);

#define VkglTestCase_033363_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033363_2 "ribute.usages.static_draw.stride32_fixed_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033363, VkglTestCase_033363_1, VkglTestCase_033363_2);

#define VkglTestCase_033364_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033364_2 "ibute.usages.static_draw.stride0_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033364, VkglTestCase_033364_1, VkglTestCase_033364_2);

#define VkglTestCase_033365_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033365_2 "ibute.usages.static_draw.stride8_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033365, VkglTestCase_033365_1, VkglTestCase_033365_2);

#define VkglTestCase_033366_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033366_2 "ibute.usages.static_draw.stride32_fixed_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033366, VkglTestCase_033366_1, VkglTestCase_033366_2);

#define VkglTestCase_033367_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033367_2 "ribute.usages.static_draw.stride0_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033367, VkglTestCase_033367_1, VkglTestCase_033367_2);

#define VkglTestCase_033368_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033368_2 "ribute.usages.static_draw.stride4_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033368, VkglTestCase_033368_1, VkglTestCase_033368_2);

#define VkglTestCase_033369_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033369_2 "ribute.usages.static_draw.stride32_short_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033369, VkglTestCase_033369_1, VkglTestCase_033369_2);

#define VkglTestCase_033370_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033370_2 "ibute.usages.static_draw.stride0_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033370, VkglTestCase_033370_1, VkglTestCase_033370_2);

#define VkglTestCase_033371_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033371_2 "ibute.usages.static_draw.stride4_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033371, VkglTestCase_033371_1, VkglTestCase_033371_2);

#define VkglTestCase_033372_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033372_2 "ibute.usages.static_draw.stride32_short_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033372, VkglTestCase_033372_1, VkglTestCase_033372_2);

#define VkglTestCase_033373_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033373_2 "tribute.usages.static_draw.stride0_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033373, VkglTestCase_033373_1, VkglTestCase_033373_2);

#define VkglTestCase_033374_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033374_2 "tribute.usages.static_draw.stride2_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033374, VkglTestCase_033374_1, VkglTestCase_033374_2);

#define VkglTestCase_033375_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033375_2 "ribute.usages.static_draw.stride17_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033375, VkglTestCase_033375_1, VkglTestCase_033375_2);

#define VkglTestCase_033376_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033376_2 "ribute.usages.static_draw.stride32_byte_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033376, VkglTestCase_033376_1, VkglTestCase_033376_2);

#define VkglTestCase_033377_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033377_2 "ribute.usages.static_draw.stride0_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033377, VkglTestCase_033377_1, VkglTestCase_033377_2);

#define VkglTestCase_033378_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033378_2 "ribute.usages.static_draw.stride2_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033378, VkglTestCase_033378_1, VkglTestCase_033378_2);

#define VkglTestCase_033379_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033379_2 "ibute.usages.static_draw.stride17_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033379, VkglTestCase_033379_1, VkglTestCase_033379_2);

#define VkglTestCase_033380_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033380_2 "ibute.usages.static_draw.stride32_byte_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033380, VkglTestCase_033380_1, VkglTestCase_033380_2);
