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

#define VkglTestCase_037303_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037303_2 "nitial.render.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037303, VkglTestCase_037303_1, VkglTestCase_037303_2);

#define VkglTestCase_037304_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037304_2 "itial.render.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037304, VkglTestCase_037304_1, VkglTestCase_037304_2);

#define VkglTestCase_037305_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037305_2 "initial.render.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037305, VkglTestCase_037305_1, VkglTestCase_037305_2);

#define VkglTestCase_037828_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037828_2 "d.by_pointer.render.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037828, VkglTestCase_037828_1, VkglTestCase_037828_2);

#define VkglTestCase_037829_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037829_2 ".by_pointer.render.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037829, VkglTestCase_037829_1, VkglTestCase_037829_2);

#define VkglTestCase_037830_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037830_2 "ed.by_pointer.render.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037830, VkglTestCase_037830_1, VkglTestCase_037830_2);

#define VkglTestCase_038197_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_038197_2 "ed.by_value.render.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038197, VkglTestCase_038197_1, VkglTestCase_038197_2);

#define VkglTestCase_038198_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038198_2 "d.by_value.render.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038198, VkglTestCase_038198_1, VkglTestCase_038198_2);

#define VkglTestCase_038199_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038199_2 "ned.by_value.render.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038199, VkglTestCase_038199_1, VkglTestCase_038199_2);
