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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036838_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036838_2 "consistency.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036838, VkglTestCase_036838_1, VkglTestCase_036838_2);

#define VkglTestCase_036839_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036839_2 "onsistency.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036839, VkglTestCase_036839_1, VkglTestCase_036839_2);

#define VkglTestCase_036840_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036840_2 ".consistency.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036840, VkglTestCase_036840_1, VkglTestCase_036840_2);

#define VkglTestCase_036841_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036841_2 ".consistency.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036841, VkglTestCase_036841_1, VkglTestCase_036841_2);

#define VkglTestCase_036842_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036842_2 "consistency.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036842, VkglTestCase_036842_1, VkglTestCase_036842_2);

#define VkglTestCase_036843_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036843_2 "y.consistency.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036843, VkglTestCase_036843_1, VkglTestCase_036843_2);

#define VkglTestCase_036844_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036844_2 ".consistency.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036844, VkglTestCase_036844_1, VkglTestCase_036844_2);

#define VkglTestCase_036845_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036845_2 "consistency.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036845, VkglTestCase_036845_1, VkglTestCase_036845_2);

#define VkglTestCase_036846_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036846_2 "y.consistency.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036846, VkglTestCase_036846_1, VkglTestCase_036846_2);

#define VkglTestCase_036847_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036847_2 "consistency.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036847, VkglTestCase_036847_1, VkglTestCase_036847_2);

#define VkglTestCase_036848_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036848_2 "onsistency.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036848, VkglTestCase_036848_1, VkglTestCase_036848_2);

#define VkglTestCase_036849_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036849_2 ".consistency.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036849, VkglTestCase_036849_1, VkglTestCase_036849_2);

#define VkglTestCase_036850_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036850_2 "consistency.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036850, VkglTestCase_036850_1, VkglTestCase_036850_2);

#define VkglTestCase_036851_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036851_2 "onsistency.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036851, VkglTestCase_036851_1, VkglTestCase_036851_2);

#define VkglTestCase_036852_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036852_2 ".consistency.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036852, VkglTestCase_036852_1, VkglTestCase_036852_2);

#define VkglTestCase_036853_1 "dEQP-GLES3.functional.uniform_api.info_query.consi"
#define VkglTestCase_036853_2 "stency.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036853, VkglTestCase_036853_1, VkglTestCase_036853_2);

#define VkglTestCase_036854_1 "dEQP-GLES3.functional.uniform_api.info_query.consis"
#define VkglTestCase_036854_2 "tency.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036854, VkglTestCase_036854_1, VkglTestCase_036854_2);

#define VkglTestCase_036855_1 "dEQP-GLES3.functional.uniform_api.info_query.cons"
#define VkglTestCase_036855_2 "istency.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036855, VkglTestCase_036855_1, VkglTestCase_036855_2);
