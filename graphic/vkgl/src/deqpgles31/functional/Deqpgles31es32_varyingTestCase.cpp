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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017882_1 "dEQP-GLES31.functional.separate_shader"
#define VkglTestCase_017882_2 ".validation.es32.varying.missing_input"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017882, VkglTestCase_017882_1, VkglTestCase_017882_2);

#define VkglTestCase_017883_1 "dEQP-GLES31.functional.separate_shader"
#define VkglTestCase_017883_2 ".validation.es32.varying.missing_output"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017883, VkglTestCase_017883_1, VkglTestCase_017883_2);

#define VkglTestCase_017884_1 "dEQP-GLES31.functional.separate_shader"
#define VkglTestCase_017884_2 ".validation.es32.varying.mismatch_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017884, VkglTestCase_017884_1, VkglTestCase_017884_2);

#define VkglTestCase_017885_1 "dEQP-GLES31.functional.separate_shader.v"
#define VkglTestCase_017885_2 "alidation.es32.varying.mismatch_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017885, VkglTestCase_017885_1, VkglTestCase_017885_2);

#define VkglTestCase_017886_1 "dEQP-GLES31.functional.separate_shader.validati"
#define VkglTestCase_017886_2 "on.es32.varying.mismatch_explicit_location_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017886, VkglTestCase_017886_1, VkglTestCase_017886_2);

#define VkglTestCase_017887_1 "dEQP-GLES31.functional.separate_shader.validation"
#define VkglTestCase_017887_2 ".es32.varying.mismatch_explicit_location_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017887, VkglTestCase_017887_1, VkglTestCase_017887_2);

#define VkglTestCase_017888_1 "dEQP-GLES31.functional.separate_shader.valid"
#define VkglTestCase_017888_2 "ation.es32.varying.mismatch_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017888, VkglTestCase_017888_1, VkglTestCase_017888_2);

#define VkglTestCase_017889_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017889_2 "es32.varying.mismatch_implicit_explicit_location_1"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017889, VkglTestCase_017889_1, VkglTestCase_017889_2);

#define VkglTestCase_017890_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017890_2 "es32.varying.mismatch_implicit_explicit_location_2"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017890, VkglTestCase_017890_1, VkglTestCase_017890_2);

#define VkglTestCase_017891_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017891_2 "es32.varying.mismatch_implicit_explicit_location_3"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017891, VkglTestCase_017891_1, VkglTestCase_017891_2);

#define VkglTestCase_017892_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017892_2 "tion.es32.varying.match_different_struct_names"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017892, VkglTestCase_017892_1, VkglTestCase_017892_2);

#define VkglTestCase_017893_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017893_2 "tion.es32.varying.mismatch_struct_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017893, VkglTestCase_017893_1, VkglTestCase_017893_2);

#define VkglTestCase_017894_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017894_2 "tion.es32.varying.mismatch_struct_member_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017894, VkglTestCase_017894_1, VkglTestCase_017894_2);

#define VkglTestCase_017895_1 "dEQP-GLES31.functional.separate_shader.validati"
#define VkglTestCase_017895_2 "on.es32.varying.mismatch_struct_member_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017895, VkglTestCase_017895_1, VkglTestCase_017895_2);

#define VkglTestCase_017896_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017896_2 "tion.es32.varying.mismatch_struct_member_order"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017896, VkglTestCase_017896_1, VkglTestCase_017896_2);

#define VkglTestCase_017897_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017897_2 "tion.es32.varying.mismatch_array_element_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017897, VkglTestCase_017897_1, VkglTestCase_017897_2);

#define VkglTestCase_017898_1 "dEQP-GLES31.functional.separate_shader.val"
#define VkglTestCase_017898_2 "idation.es32.varying.mismatch_array_length"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017898, VkglTestCase_017898_1, VkglTestCase_017898_2);

#define VkglTestCase_017899_1 "dEQP-GLES31.functional.separate_shader.vali"
#define VkglTestCase_017899_2 "dation.es32.varying.mismatch_array_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017899, VkglTestCase_017899_1, VkglTestCase_017899_2);

#define VkglTestCase_017900_1 "dEQP-GLES31.functional.separate_shader.validation.es3"
#define VkglTestCase_017900_2 "2.varying.mismatch_qualifier_vertex_flat_fragment_none"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017900, VkglTestCase_017900_1, VkglTestCase_017900_2);

#define VkglTestCase_017901_1 "dEQP-GLES31.functional.separate_shader.validation.es32"
#define VkglTestCase_017901_2 ".varying.mismatch_qualifier_vertex_flat_fragment_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017901, VkglTestCase_017901_1, VkglTestCase_017901_2);

#define VkglTestCase_017902_1 "dEQP-GLES31.functional.separate_shader.validation.es32."
#define VkglTestCase_017902_2 "varying.mismatch_qualifier_vertex_flat_fragment_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017902, VkglTestCase_017902_1, VkglTestCase_017902_2);

#define VkglTestCase_017903_1 "dEQP-GLES31.functional.separate_shader.validation.es32"
#define VkglTestCase_017903_2 ".varying.mismatch_qualifier_vertex_smooth_fragment_flat"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017903, VkglTestCase_017903_1, VkglTestCase_017903_2);

#define VkglTestCase_017904_1 "dEQP-GLES31.functional.separate_shader.validation.es32."
#define VkglTestCase_017904_2 "varying.mismatch_qualifier_vertex_centroid_fragment_flat"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017904, VkglTestCase_017904_1, VkglTestCase_017904_2);
