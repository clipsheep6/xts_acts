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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003786_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003786_2 "indexing.atomic_counter.const_literal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003786, VkglTestCase_003786_1, VkglTestCase_003786_2);

#define VkglTestCase_003787_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003787_2 "ndexing.atomic_counter.const_literal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003787, VkglTestCase_003787_1, VkglTestCase_003787_2);

#define VkglTestCase_003788_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003788_2 "ndexing.atomic_counter.const_literal_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003788, VkglTestCase_003788_1, VkglTestCase_003788_2);

#define VkglTestCase_003789_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003789_2 "ndexing.atomic_counter.const_literal_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003789, VkglTestCase_003789_1, VkglTestCase_003789_2);

#define VkglTestCase_003790_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003790_2 "g.atomic_counter.const_literal_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003790, VkglTestCase_003790_1, VkglTestCase_003790_2);

#define VkglTestCase_003791_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003791_2 "atomic_counter.const_literal_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003791, VkglTestCase_003791_1, VkglTestCase_003791_2);

#define VkglTestCase_003792_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003792_2 "dexing.atomic_counter.const_expression_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003792, VkglTestCase_003792_1, VkglTestCase_003792_2);

#define VkglTestCase_003793_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003793_2 "exing.atomic_counter.const_expression_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003793, VkglTestCase_003793_1, VkglTestCase_003793_2);

#define VkglTestCase_003794_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003794_2 "dexing.atomic_counter.const_expression_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003794, VkglTestCase_003794_1, VkglTestCase_003794_2);

#define VkglTestCase_003795_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003795_2 "exing.atomic_counter.const_expression_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003795, VkglTestCase_003795_1, VkglTestCase_003795_2);

#define VkglTestCase_003796_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003796_2 "atomic_counter.const_expression_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003796, VkglTestCase_003796_1, VkglTestCase_003796_2);

#define VkglTestCase_003797_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.a"
#define VkglTestCase_003797_2 "tomic_counter.const_expression_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003797, VkglTestCase_003797_1, VkglTestCase_003797_2);

#define VkglTestCase_003798_1 "dEQP-GLES31.functional.shaders.opaque_ty"
#define VkglTestCase_003798_2 "pe_indexing.atomic_counter.uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003798, VkglTestCase_003798_1, VkglTestCase_003798_2);

#define VkglTestCase_003799_1 "dEQP-GLES31.functional.shaders.opaque_typ"
#define VkglTestCase_003799_2 "e_indexing.atomic_counter.uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003799, VkglTestCase_003799_1, VkglTestCase_003799_2);

#define VkglTestCase_003800_1 "dEQP-GLES31.functional.shaders.opaque_typ"
#define VkglTestCase_003800_2 "e_indexing.atomic_counter.uniform_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003800, VkglTestCase_003800_1, VkglTestCase_003800_2);

#define VkglTestCase_003801_1 "dEQP-GLES31.functional.shaders.opaque_typ"
#define VkglTestCase_003801_2 "e_indexing.atomic_counter.uniform_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003801, VkglTestCase_003801_1, VkglTestCase_003801_2);

#define VkglTestCase_003802_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003802_2 "xing.atomic_counter.uniform_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003802, VkglTestCase_003802_1, VkglTestCase_003802_2);

#define VkglTestCase_003803_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003803_2 "ng.atomic_counter.uniform_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003803, VkglTestCase_003803_1, VkglTestCase_003803_2);

#define VkglTestCase_003804_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003804_2 "exing.atomic_counter.dynamically_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003804, VkglTestCase_003804_1, VkglTestCase_003804_2);

#define VkglTestCase_003805_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003805_2 "xing.atomic_counter.dynamically_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003805, VkglTestCase_003805_1, VkglTestCase_003805_2);

#define VkglTestCase_003806_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003806_2 "xing.atomic_counter.dynamically_uniform_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003806, VkglTestCase_003806_1, VkglTestCase_003806_2);

#define VkglTestCase_003807_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003807_2 "xing.atomic_counter.dynamically_uniform_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003807, VkglTestCase_003807_1, VkglTestCase_003807_2);

#define VkglTestCase_003808_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.a"
#define VkglTestCase_003808_2 "tomic_counter.dynamically_uniform_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003808, VkglTestCase_003808_1, VkglTestCase_003808_2);

#define VkglTestCase_003809_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.ato"
#define VkglTestCase_003809_2 "mic_counter.dynamically_uniform_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003809, VkglTestCase_003809_1, VkglTestCase_003809_2);
