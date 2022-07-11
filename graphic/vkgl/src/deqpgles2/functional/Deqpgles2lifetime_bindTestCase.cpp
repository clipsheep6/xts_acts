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

#define VkglTestCase_016469_1 "dEQP-GLES2.functional"
#define VkglTestCase_016469_2 ".lifetime.bind.buffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016469, VkglTestCase_016469_1, VkglTestCase_016469_2);

#define VkglTestCase_016470_1 "dEQP-GLES2.functional"
#define VkglTestCase_016470_2 ".lifetime.bind.texture"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016470, VkglTestCase_016470_1, VkglTestCase_016470_2);

#define VkglTestCase_016471_1 "dEQP-GLES2.functional.li"
#define VkglTestCase_016471_2 "fetime.bind.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016471, VkglTestCase_016471_1, VkglTestCase_016471_2);

#define VkglTestCase_016472_1 "dEQP-GLES2.functional.l"
#define VkglTestCase_016472_2 "ifetime.bind.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016472, VkglTestCase_016472_1, VkglTestCase_016472_2);
