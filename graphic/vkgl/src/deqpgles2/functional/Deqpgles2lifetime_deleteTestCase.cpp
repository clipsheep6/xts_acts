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

#define VkglTestCase_016463_1 "dEQP-GLES2.functional."
#define VkglTestCase_016463_2 "lifetime.delete.buffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016463, VkglTestCase_016463_1, VkglTestCase_016463_2);

#define VkglTestCase_016464_1 "dEQP-GLES2.functional."
#define VkglTestCase_016464_2 "lifetime.delete.texture"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016464, VkglTestCase_016464_1, VkglTestCase_016464_2);

#define VkglTestCase_016465_1 "dEQP-GLES2.functional.lif"
#define VkglTestCase_016465_2 "etime.delete.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016465, VkglTestCase_016465_1, VkglTestCase_016465_2);

#define VkglTestCase_016466_1 "dEQP-GLES2.functional.li"
#define VkglTestCase_016466_2 "fetime.delete.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016466, VkglTestCase_016466_1, VkglTestCase_016466_2);

#define VkglTestCase_016467_1 "dEQP-GLES2.functional."
#define VkglTestCase_016467_2 "lifetime.delete.shader"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016467, VkglTestCase_016467_1, VkglTestCase_016467_2);

#define VkglTestCase_016468_1 "dEQP-GLES2.functional."
#define VkglTestCase_016468_2 "lifetime.delete.program"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016468, VkglTestCase_016468_1, VkglTestCase_016468_2);
