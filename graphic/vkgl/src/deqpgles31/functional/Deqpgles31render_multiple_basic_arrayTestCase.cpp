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

#define VkglTestCase_017062_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017062_2 "pointer.render.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017062, VkglTestCase_017062_1, VkglTestCase_017062_2);

#define VkglTestCase_017063_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_017063_2 "ointer.render.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017063, VkglTestCase_017063_1, VkglTestCase_017063_2);

#define VkglTestCase_017064_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017064_2 "_pointer.render.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017064, VkglTestCase_017064_1, VkglTestCase_017064_2);

#define VkglTestCase_017431_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017431_2 "_value.render.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017431, VkglTestCase_017431_1, VkglTestCase_017431_2);

#define VkglTestCase_017432_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017432_2 "value.render.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017432, VkglTestCase_017432_1, VkglTestCase_017432_2);

#define VkglTestCase_017433_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017433_2 "y_value.render.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017433, VkglTestCase_017433_1, VkglTestCase_017433_2);
