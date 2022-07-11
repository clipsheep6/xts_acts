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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016837_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016837_2 "_pointer.get_uniform.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016837, VkglTestCase_016837_1, VkglTestCase_016837_2);

#define VkglTestCase_016838_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016838_2 "pointer.get_uniform.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016838, VkglTestCase_016838_1, VkglTestCase_016838_2);

#define VkglTestCase_016839_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016839_2 "y_pointer.get_uniform.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016839, VkglTestCase_016839_1, VkglTestCase_016839_2);
