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

#define VkglTestCase_021867_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021867_2 ".program_input.location.separable_geometry.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021867, VkglTestCase_021867_1, VkglTestCase_021867_2);

#define VkglTestCase_021868_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021868_2 "input.location.separable_geometry.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021868, VkglTestCase_021868_1, VkglTestCase_021868_2);

#define VkglTestCase_022465_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022465_2 ".program_output.location.separable_geometry.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022465, VkglTestCase_022465_1, VkglTestCase_022465_2);

#define VkglTestCase_022466_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022466_2 "output.location.separable_geometry.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022466, VkglTestCase_022466_1, VkglTestCase_022466_2);

#define VkglTestCase_022467_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022467_2 "gram_output.location.separable_geometry.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022467, VkglTestCase_022467_1, VkglTestCase_022467_2);

#define VkglTestCase_022468_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022468_2 "ut.location.separable_geometry.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022468, VkglTestCase_022468_1, VkglTestCase_022468_2);

#define VkglTestCase_022469_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022469_2 "ogram_output.location.separable_geometry.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022469, VkglTestCase_022469_1, VkglTestCase_022469_2);

#define VkglTestCase_022470_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022470_2 "put.location.separable_geometry.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022470, VkglTestCase_022470_1, VkglTestCase_022470_2);
