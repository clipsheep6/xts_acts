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

#define VkglTestCase_016482_1 "dEQP-GLES2.functional.lifetime.atta"
#define VkglTestCase_016482_2 "ch.deleted_name.texture_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016482, VkglTestCase_016482_1, VkglTestCase_016482_2);

#define VkglTestCase_016483_1 "dEQP-GLES2.functional.lifetime.attach"
#define VkglTestCase_016483_2 ".deleted_name.renderbuffer_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016483, VkglTestCase_016483_1, VkglTestCase_016483_2);

#define VkglTestCase_016484_1 "dEQP-GLES2.functional.lifetime.a"
#define VkglTestCase_016484_2 "ttach.deleted_name.shader_program"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016484, VkglTestCase_016484_1, VkglTestCase_016484_2);
