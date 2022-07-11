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

#define VkglTestCase_016457_1 "dEQP-GLES2.functiona"
#define VkglTestCase_016457_2 "l.lifetime.gen.buffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016457, VkglTestCase_016457_1, VkglTestCase_016457_2);

#define VkglTestCase_016458_1 "dEQP-GLES2.functional"
#define VkglTestCase_016458_2 ".lifetime.gen.texture"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016458, VkglTestCase_016458_1, VkglTestCase_016458_2);

#define VkglTestCase_016459_1 "dEQP-GLES2.functional.l"
#define VkglTestCase_016459_2 "ifetime.gen.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016459, VkglTestCase_016459_1, VkglTestCase_016459_2);

#define VkglTestCase_016460_1 "dEQP-GLES2.functional.l"
#define VkglTestCase_016460_2 "ifetime.gen.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016460, VkglTestCase_016460_1, VkglTestCase_016460_2);

#define VkglTestCase_016461_1 "dEQP-GLES2.functiona"
#define VkglTestCase_016461_2 "l.lifetime.gen.shader"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016461, VkglTestCase_016461_1, VkglTestCase_016461_2);

#define VkglTestCase_016462_1 "dEQP-GLES2.functional"
#define VkglTestCase_016462_2 ".lifetime.gen.program"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016462, VkglTestCase_016462_1, VkglTestCase_016462_2);
