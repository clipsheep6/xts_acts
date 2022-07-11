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

#define VkglTestCase_017536_1 "dEQP-GLES31.functional.program_uniform.basic_a"
#define VkglTestCase_017536_2 "rray_assign_partial.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017536, VkglTestCase_017536_1, VkglTestCase_017536_2);

#define VkglTestCase_017537_1 "dEQP-GLES31.functional.program_uniform.basic_ar"
#define VkglTestCase_017537_2 "ray_assign_partial.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017537, VkglTestCase_017537_1, VkglTestCase_017537_2);

#define VkglTestCase_017538_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017538_2 "array_assign_partial.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017538, VkglTestCase_017538_1, VkglTestCase_017538_2);
