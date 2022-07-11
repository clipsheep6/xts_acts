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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037123_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037123_2 "tial.get_uniform.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037123, VkglTestCase_037123_1, VkglTestCase_037123_2);

#define VkglTestCase_037124_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037124_2 "ial.get_uniform.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037124, VkglTestCase_037124_1, VkglTestCase_037124_2);

#define VkglTestCase_037125_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037125_2 "itial.get_uniform.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037125, VkglTestCase_037125_1, VkglTestCase_037125_2);

#define VkglTestCase_037606_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037606_2 "by_pointer.get_uniform.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037606, VkglTestCase_037606_1, VkglTestCase_037606_2);

#define VkglTestCase_037607_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037607_2 "y_pointer.get_uniform.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037607, VkglTestCase_037607_1, VkglTestCase_037607_2);

#define VkglTestCase_037608_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037608_2 ".by_pointer.get_uniform.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037608, VkglTestCase_037608_1, VkglTestCase_037608_2);

#define VkglTestCase_038050_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038050_2 ".by_value.get_uniform.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038050, VkglTestCase_038050_1, VkglTestCase_038050_2);

#define VkglTestCase_038051_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038051_2 "by_value.get_uniform.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038051, VkglTestCase_038051_1, VkglTestCase_038051_2);

#define VkglTestCase_038052_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038052_2 "d.by_value.get_uniform.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038052, VkglTestCase_038052_1, VkglTestCase_038052_2);
