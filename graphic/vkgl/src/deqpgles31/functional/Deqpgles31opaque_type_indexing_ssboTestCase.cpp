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

#define VkglTestCase_003774_1 "dEQP-GLES31.functional.shaders.opaque_"
#define VkglTestCase_003774_2 "type_indexing.ssbo.const_literal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003774, VkglTestCase_003774_1, VkglTestCase_003774_2);

#define VkglTestCase_003775_1 "dEQP-GLES31.functional.shaders.opaque_t"
#define VkglTestCase_003775_2 "ype_indexing.ssbo.const_literal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003775, VkglTestCase_003775_1, VkglTestCase_003775_2);

#define VkglTestCase_003776_1 "dEQP-GLES31.functional.shaders.opaque_t"
#define VkglTestCase_003776_2 "ype_indexing.ssbo.const_literal_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003776, VkglTestCase_003776_1, VkglTestCase_003776_2);

#define VkglTestCase_003777_1 "dEQP-GLES31.functional.shaders.opaque_t"
#define VkglTestCase_003777_2 "ype_indexing.ssbo.const_literal_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003777, VkglTestCase_003777_1, VkglTestCase_003777_2);

#define VkglTestCase_003778_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003778_2 "dexing.ssbo.const_literal_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003778, VkglTestCase_003778_1, VkglTestCase_003778_2);

#define VkglTestCase_003779_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003779_2 "xing.ssbo.const_literal_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003779, VkglTestCase_003779_1, VkglTestCase_003779_2);

#define VkglTestCase_003780_1 "dEQP-GLES31.functional.shaders.opaque_ty"
#define VkglTestCase_003780_2 "pe_indexing.ssbo.const_expression_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003780, VkglTestCase_003780_1, VkglTestCase_003780_2);

#define VkglTestCase_003781_1 "dEQP-GLES31.functional.shaders.opaque_typ"
#define VkglTestCase_003781_2 "e_indexing.ssbo.const_expression_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003781, VkglTestCase_003781_1, VkglTestCase_003781_2);

#define VkglTestCase_003782_1 "dEQP-GLES31.functional.shaders.opaque_ty"
#define VkglTestCase_003782_2 "pe_indexing.ssbo.const_expression_compute"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003782, VkglTestCase_003782_1, VkglTestCase_003782_2);

#define VkglTestCase_003783_1 "dEQP-GLES31.functional.shaders.opaque_typ"
#define VkglTestCase_003783_2 "e_indexing.ssbo.const_expression_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003783, VkglTestCase_003783_1, VkglTestCase_003783_2);

#define VkglTestCase_003784_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003784_2 "xing.ssbo.const_expression_tessellation_control"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003784, VkglTestCase_003784_1, VkglTestCase_003784_2);

#define VkglTestCase_003785_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003785_2 "ing.ssbo.const_expression_tessellation_evaluation"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003785, VkglTestCase_003785_1, VkglTestCase_003785_2);
