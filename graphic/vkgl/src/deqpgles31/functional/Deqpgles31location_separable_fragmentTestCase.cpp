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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021851_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021851_2 ".program_input.location.separable_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021851, VkglTestCase_021851_1, VkglTestCase_021851_2);

#define VkglTestCase_021852_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021852_2 "input.location.separable_fragment.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021852, VkglTestCase_021852_1, VkglTestCase_021852_2);

#define VkglTestCase_021853_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_021853_2 "ogram_input.location.separable_fragment.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021853, VkglTestCase_021853_1, VkglTestCase_021853_2);

#define VkglTestCase_021854_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021854_2 "ut.location.separable_fragment.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021854, VkglTestCase_021854_1, VkglTestCase_021854_2);

#define VkglTestCase_021855_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_021855_2 "ogram_input.location.separable_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021855, VkglTestCase_021855_1, VkglTestCase_021855_2);

#define VkglTestCase_021856_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021856_2 "ut.location.separable_fragment.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021856, VkglTestCase_021856_1, VkglTestCase_021856_2);

#define VkglTestCase_022447_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022447_2 ".program_output.location.separable_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022447, VkglTestCase_022447_1, VkglTestCase_022447_2);

#define VkglTestCase_022448_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022448_2 "output.location.separable_fragment.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022448, VkglTestCase_022448_1, VkglTestCase_022448_2);

#define VkglTestCase_022449_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022449_2 "ogram_output.location.separable_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022449, VkglTestCase_022449_1, VkglTestCase_022449_2);

#define VkglTestCase_022450_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022450_2 "put.location.separable_fragment.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022450, VkglTestCase_022450_1, VkglTestCase_022450_2);
