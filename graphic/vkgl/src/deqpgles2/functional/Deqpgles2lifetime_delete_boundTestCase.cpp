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

#define VkglTestCase_016473_1 "dEQP-GLES2.functional.lif"
#define VkglTestCase_016473_2 "etime.delete_bound.buffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016473, VkglTestCase_016473_1, VkglTestCase_016473_2);

#define VkglTestCase_016474_1 "dEQP-GLES2.functional.lif"
#define VkglTestCase_016474_2 "etime.delete_bound.texture"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016474, VkglTestCase_016474_1, VkglTestCase_016474_2);

#define VkglTestCase_016475_1 "dEQP-GLES2.functional.lifeti"
#define VkglTestCase_016475_2 "me.delete_bound.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016475, VkglTestCase_016475_1, VkglTestCase_016475_2);

#define VkglTestCase_016476_1 "dEQP-GLES2.functional.lifet"
#define VkglTestCase_016476_2 "ime.delete_bound.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016476, VkglTestCase_016476_1, VkglTestCase_016476_2);
