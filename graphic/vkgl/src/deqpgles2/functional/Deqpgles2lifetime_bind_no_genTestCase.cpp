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
#include "../ActsDeqpgles20017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016477_1 "dEQP-GLES2.functional.li"
#define VkglTestCase_016477_2 "fetime.bind_no_gen.buffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016477, VkglTestCase_016477_1, VkglTestCase_016477_2);

#define VkglTestCase_016478_1 "dEQP-GLES2.functional.lif"
#define VkglTestCase_016478_2 "etime.bind_no_gen.texture"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016478, VkglTestCase_016478_1, VkglTestCase_016478_2);

#define VkglTestCase_016479_1 "dEQP-GLES2.functional.lifet"
#define VkglTestCase_016479_2 "ime.bind_no_gen.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016479, VkglTestCase_016479_1, VkglTestCase_016479_2);

#define VkglTestCase_016480_1 "dEQP-GLES2.functional.lifet"
#define VkglTestCase_016480_2 "ime.bind_no_gen.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016480, VkglTestCase_016480_1, VkglTestCase_016480_2);
