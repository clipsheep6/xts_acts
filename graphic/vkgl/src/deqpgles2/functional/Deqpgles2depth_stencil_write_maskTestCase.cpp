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
#include "../ActsDeqpgles20012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011107_1 "dEQP-GLES2.functional.fragment_o"
#define VkglTestCase_011107_2 "ps.depth_stencil.write_mask.depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011107, VkglTestCase_011107_1, VkglTestCase_011107_2);

#define VkglTestCase_011108_1 "dEQP-GLES2.functional.fragment_op"
#define VkglTestCase_011108_2 "s.depth_stencil.write_mask.stencil"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011108, VkglTestCase_011108_1, VkglTestCase_011108_2);

#define VkglTestCase_011109_1 "dEQP-GLES2.functional.fragment_o"
#define VkglTestCase_011109_2 "ps.depth_stencil.write_mask.both"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011109, VkglTestCase_011109_1, VkglTestCase_011109_2);
