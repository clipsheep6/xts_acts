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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000070_1 "dEQP-GLES2.functional.buffer"
#define VkglTestCase_000070_2 ".write.use.vertex_array.array"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000070, VkglTestCase_000070_1, VkglTestCase_000070_2);

#define VkglTestCase_000071_1 "dEQP-GLES2.functional.buffer.wri"
#define VkglTestCase_000071_2 "te.use.vertex_array.element_array"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000071, VkglTestCase_000071_1, VkglTestCase_000071_2);
