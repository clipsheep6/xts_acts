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

#define VkglTestCase_037120_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037120_2 "initial.get_uniform.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037120, VkglTestCase_037120_1, VkglTestCase_037120_2);

#define VkglTestCase_037121_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037121_2 "nitial.get_uniform.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037121, VkglTestCase_037121_1, VkglTestCase_037121_2);

#define VkglTestCase_037122_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037122_2 ".initial.get_uniform.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037122, VkglTestCase_037122_1, VkglTestCase_037122_2);

#define VkglTestCase_037603_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037603_2 "ed.by_pointer.get_uniform.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037603, VkglTestCase_037603_1, VkglTestCase_037603_2);

#define VkglTestCase_037604_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037604_2 "d.by_pointer.get_uniform.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037604, VkglTestCase_037604_1, VkglTestCase_037604_2);

#define VkglTestCase_037605_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037605_2 "ned.by_pointer.get_uniform.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037605, VkglTestCase_037605_1, VkglTestCase_037605_2);
