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
#include "../ActsDeqpgles30033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032036_1 "dEQP-GLES3.functional.fbo.de"
#define VkglTestCase_032036_2 "pth.basic.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032036, VkglTestCase_032036_1, VkglTestCase_032036_2);

#define VkglTestCase_032037_1 "dEQP-GLES3.functional.fbo.d"
#define VkglTestCase_032037_2 "epth.basic.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032037, VkglTestCase_032037_1, VkglTestCase_032037_2);

#define VkglTestCase_032038_1 "dEQP-GLES3.functional.fbo.d"
#define VkglTestCase_032038_2 "epth.basic.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032038, VkglTestCase_032038_1, VkglTestCase_032038_2);

#define VkglTestCase_032039_1 "dEQP-GLES3.functional.fbo.d"
#define VkglTestCase_032039_2 "epth.basic.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032039, VkglTestCase_032039_1, VkglTestCase_032039_2);

#define VkglTestCase_032040_1 "dEQP-GLES3.functional.fbo.d"
#define VkglTestCase_032040_2 "epth.basic.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032040, VkglTestCase_032040_1, VkglTestCase_032040_2);
