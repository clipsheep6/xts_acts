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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004102_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004102_2 "s31.array_access.constant_expression_access_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004102, VkglTestCase_004102_1, VkglTestCase_004102_2);

#define VkglTestCase_004103_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004103_2 "31.array_access.constant_expression_access_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004103, VkglTestCase_004103_1, VkglTestCase_004103_2);

#define VkglTestCase_004104_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004104_2 "s31.array_access.dynamic_expression_access_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004104, VkglTestCase_004104_1, VkglTestCase_004104_2);

#define VkglTestCase_004105_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004105_2 "31.array_access.dynamic_expression_access_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004105, VkglTestCase_004105_1, VkglTestCase_004105_2);
