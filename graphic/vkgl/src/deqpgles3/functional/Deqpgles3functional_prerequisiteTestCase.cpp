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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000007_1 "dEQP-GLES3.functional.p"
#define VkglTestCase_000007_2 "rerequisite.state_reset"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000007, VkglTestCase_000007_1, VkglTestCase_000007_2);

#define VkglTestCase_000008_1 "dEQP-GLES3.functional.p"
#define VkglTestCase_000008_2 "rerequisite.clear_color"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000008, VkglTestCase_000008_1, VkglTestCase_000008_2);

#define VkglTestCase_000009_1 "dEQP-GLES3.functional.p"
#define VkglTestCase_000009_2 "rerequisite.read_pixels"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000009, VkglTestCase_000009_1, VkglTestCase_000009_2);
