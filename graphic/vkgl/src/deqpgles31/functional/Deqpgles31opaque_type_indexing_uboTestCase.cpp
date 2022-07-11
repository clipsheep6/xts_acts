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

#define VkglTestCase_003750_1 "dEQP-GLES31.functional.shaders.opaque_"
#define VkglTestCase_003750_2 "type_indexing.ubo.const_literal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003750, VkglTestCase_003750_1, VkglTestCase_003750_2);

#define VkglTestCase_003751_1 "dEQP-GLES31.functional.shaders.opaque_t"
#define VkglTestCase_003751_2 "ype_indexing.ubo.const_literal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003751, VkglTestCase_003751_1, VkglTestCase_003751_2);

#define VkglTestCase_003752_1 "dEQP-GLES31.functional.shaders.opaque_"
#define VkglTestCase_003752_2 "type_indexing.ubo.const_literal_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003752, VkglTestCase_003752_1, VkglTestCase_003752_2);

#define VkglTestCase_003753_1 "dEQP-GLES31.functional.shaders.opaque_t"
#define VkglTestCase_003753_2 "ype_indexing.ubo.const_literal_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003753, VkglTestCase_003753_1, VkglTestCase_003753_2);

#define VkglTestCase_003754_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003754_2 "dexing.ubo.const_literal_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003754, VkglTestCase_003754_1, VkglTestCase_003754_2);

#define VkglTestCase_003755_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003755_2 "exing.ubo.const_literal_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003755, VkglTestCase_003755_1, VkglTestCase_003755_2);

#define VkglTestCase_003756_1 "dEQP-GLES31.functional.shaders.opaque_t"
#define VkglTestCase_003756_2 "ype_indexing.ubo.const_expression_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003756, VkglTestCase_003756_1, VkglTestCase_003756_2);

#define VkglTestCase_003757_1 "dEQP-GLES31.functional.shaders.opaque_ty"
#define VkglTestCase_003757_2 "pe_indexing.ubo.const_expression_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003757, VkglTestCase_003757_1, VkglTestCase_003757_2);

#define VkglTestCase_003758_1 "dEQP-GLES31.functional.shaders.opaque_ty"
#define VkglTestCase_003758_2 "pe_indexing.ubo.const_expression_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003758, VkglTestCase_003758_1, VkglTestCase_003758_2);

#define VkglTestCase_003759_1 "dEQP-GLES31.functional.shaders.opaque_ty"
#define VkglTestCase_003759_2 "pe_indexing.ubo.const_expression_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003759, VkglTestCase_003759_1, VkglTestCase_003759_2);

#define VkglTestCase_003760_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003760_2 "exing.ubo.const_expression_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003760, VkglTestCase_003760_1, VkglTestCase_003760_2);

#define VkglTestCase_003761_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003761_2 "ing.ubo.const_expression_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003761, VkglTestCase_003761_1, VkglTestCase_003761_2);

#define VkglTestCase_003762_1 "dEQP-GLES31.functional.shaders.opaq"
#define VkglTestCase_003762_2 "ue_type_indexing.ubo.uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003762, VkglTestCase_003762_1, VkglTestCase_003762_2);

#define VkglTestCase_003763_1 "dEQP-GLES31.functional.shaders.opaqu"
#define VkglTestCase_003763_2 "e_type_indexing.ubo.uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003763, VkglTestCase_003763_1, VkglTestCase_003763_2);

#define VkglTestCase_003764_1 "dEQP-GLES31.functional.shaders.opaq"
#define VkglTestCase_003764_2 "ue_type_indexing.ubo.uniform_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003764, VkglTestCase_003764_1, VkglTestCase_003764_2);

#define VkglTestCase_003765_1 "dEQP-GLES31.functional.shaders.opaqu"
#define VkglTestCase_003765_2 "e_type_indexing.ubo.uniform_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003765, VkglTestCase_003765_1, VkglTestCase_003765_2);

#define VkglTestCase_003766_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003766_2 "_indexing.ubo.uniform_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003766, VkglTestCase_003766_1, VkglTestCase_003766_2);

#define VkglTestCase_003767_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003767_2 "indexing.ubo.uniform_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003767, VkglTestCase_003767_1, VkglTestCase_003767_2);

#define VkglTestCase_003768_1 "dEQP-GLES31.functional.shaders.opaque_typ"
#define VkglTestCase_003768_2 "e_indexing.ubo.dynamically_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003768, VkglTestCase_003768_1, VkglTestCase_003768_2);

#define VkglTestCase_003769_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003769_2 "_indexing.ubo.dynamically_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003769, VkglTestCase_003769_1, VkglTestCase_003769_2);

#define VkglTestCase_003770_1 "dEQP-GLES31.functional.shaders.opaque_typ"
#define VkglTestCase_003770_2 "e_indexing.ubo.dynamically_uniform_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003770, VkglTestCase_003770_1, VkglTestCase_003770_2);

#define VkglTestCase_003771_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003771_2 "_indexing.ubo.dynamically_uniform_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003771, VkglTestCase_003771_1, VkglTestCase_003771_2);

#define VkglTestCase_003772_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003772_2 "ing.ubo.dynamically_uniform_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003772, VkglTestCase_003772_1, VkglTestCase_003772_2);

#define VkglTestCase_003773_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003773_2 "ng.ubo.dynamically_uniform_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003773, VkglTestCase_003773_1, VkglTestCase_003773_2);
