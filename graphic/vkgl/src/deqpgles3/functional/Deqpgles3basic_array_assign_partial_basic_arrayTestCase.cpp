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
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038254_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038254_2 "asic_array_assign_partial.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038254, VkglTestCase_038254_1, VkglTestCase_038254_2);

#define VkglTestCase_038255_1 "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_038255_2 "sic_array_assign_partial.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038255, VkglTestCase_038255_1, VkglTestCase_038255_2);

#define VkglTestCase_038256_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038256_2 "basic_array_assign_partial.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038256, VkglTestCase_038256_1, VkglTestCase_038256_2);

#define VkglTestCase_038257_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038257_2 "basic_array_assign_partial.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038257, VkglTestCase_038257_1, VkglTestCase_038257_2);

#define VkglTestCase_038258_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038258_2 "asic_array_assign_partial.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038258, VkglTestCase_038258_1, VkglTestCase_038258_2);

#define VkglTestCase_038259_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038259_2 ".basic_array_assign_partial.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038259, VkglTestCase_038259_1, VkglTestCase_038259_2);

#define VkglTestCase_038260_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038260_2 "basic_array_assign_partial.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038260, VkglTestCase_038260_1, VkglTestCase_038260_2);

#define VkglTestCase_038261_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038261_2 "asic_array_assign_partial.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038261, VkglTestCase_038261_1, VkglTestCase_038261_2);

#define VkglTestCase_038262_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038262_2 ".basic_array_assign_partial.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038262, VkglTestCase_038262_1, VkglTestCase_038262_2);

#define VkglTestCase_038263_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038263_2 "basic_array_assign_partial.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038263, VkglTestCase_038263_1, VkglTestCase_038263_2);

#define VkglTestCase_038264_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038264_2 "asic_array_assign_partial.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038264, VkglTestCase_038264_1, VkglTestCase_038264_2);

#define VkglTestCase_038265_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038265_2 ".basic_array_assign_partial.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038265, VkglTestCase_038265_1, VkglTestCase_038265_2);

#define VkglTestCase_038266_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038266_2 "asic_array_assign_partial.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038266, VkglTestCase_038266_1, VkglTestCase_038266_2);

#define VkglTestCase_038267_1 "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_038267_2 "sic_array_assign_partial.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038267, VkglTestCase_038267_1, VkglTestCase_038267_2);

#define VkglTestCase_038268_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038268_2 "basic_array_assign_partial.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038268, VkglTestCase_038268_1, VkglTestCase_038268_2);

#define VkglTestCase_038269_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038269_2 "basic_array_assign_partial.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038269, VkglTestCase_038269_1, VkglTestCase_038269_2);

#define VkglTestCase_038270_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038270_2 "asic_array_assign_partial.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038270, VkglTestCase_038270_1, VkglTestCase_038270_2);

#define VkglTestCase_038271_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038271_2 ".basic_array_assign_partial.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038271, VkglTestCase_038271_1, VkglTestCase_038271_2);

#define VkglTestCase_038272_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038272_2 "asic_array_assign_partial.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038272, VkglTestCase_038272_1, VkglTestCase_038272_2);

#define VkglTestCase_038273_1 "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_038273_2 "sic_array_assign_partial.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038273, VkglTestCase_038273_1, VkglTestCase_038273_2);

#define VkglTestCase_038274_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038274_2 "basic_array_assign_partial.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038274, VkglTestCase_038274_1, VkglTestCase_038274_2);

#define VkglTestCase_038275_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038275_2 "basic_array_assign_partial.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038275, VkglTestCase_038275_1, VkglTestCase_038275_2);

#define VkglTestCase_038276_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038276_2 "asic_array_assign_partial.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038276, VkglTestCase_038276_1, VkglTestCase_038276_2);

#define VkglTestCase_038277_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038277_2 ".basic_array_assign_partial.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038277, VkglTestCase_038277_1, VkglTestCase_038277_2);

#define VkglTestCase_038278_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038278_2 "asic_array_assign_partial.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038278, VkglTestCase_038278_1, VkglTestCase_038278_2);

#define VkglTestCase_038279_1 "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_038279_2 "sic_array_assign_partial.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038279, VkglTestCase_038279_1, VkglTestCase_038279_2);

#define VkglTestCase_038280_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038280_2 "basic_array_assign_partial.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038280, VkglTestCase_038280_1, VkglTestCase_038280_2);

#define VkglTestCase_038281_1 "dEQP-GLES3.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_038281_2 "ic_array_assign_partial.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038281, VkglTestCase_038281_1, VkglTestCase_038281_2);

#define VkglTestCase_038282_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038282_2 "c_array_assign_partial.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038282, VkglTestCase_038282_1, VkglTestCase_038282_2);

#define VkglTestCase_038283_1 "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_038283_2 "sic_array_assign_partial.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038283, VkglTestCase_038283_1, VkglTestCase_038283_2);
