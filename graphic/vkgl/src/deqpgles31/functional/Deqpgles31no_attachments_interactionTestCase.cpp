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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020028_1 "dEQP-GLES31.functional.fbo.no_attachments"
#define VkglTestCase_020028_2 ".interaction.256x256ms0_default_128x128ms1"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020028, VkglTestCase_020028_1, VkglTestCase_020028_2);

#define VkglTestCase_020029_1 "dEQP-GLES31.functional.fbo.no_attachments"
#define VkglTestCase_020029_2 ".interaction.256x256ms1_default_128x128ms0"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020029, VkglTestCase_020029_1, VkglTestCase_020029_2);

#define VkglTestCase_020030_1 "dEQP-GLES31.functional.fbo.no_attachments"
#define VkglTestCase_020030_2 ".interaction.256x256ms0_default_512x512ms2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020030, VkglTestCase_020030_1, VkglTestCase_020030_2);

#define VkglTestCase_020031_1 "dEQP-GLES31.functional.fbo.no_attachments"
#define VkglTestCase_020031_2 ".interaction.256x256ms2_default_128x512ms0"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020031, VkglTestCase_020031_1, VkglTestCase_020031_2);

#define VkglTestCase_020032_1 "dEQP-GLES31.functional.fbo.no_attachments"
#define VkglTestCase_020032_2 ".interaction.127x127ms0_default_129x129ms0"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020032, VkglTestCase_020032_1, VkglTestCase_020032_2);

#define VkglTestCase_020033_1 "dEQP-GLES31.functional.fbo.no_attachment"
#define VkglTestCase_020033_2 "s.interaction.17x512ms4_default_16x16ms2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020033, VkglTestCase_020033_1, VkglTestCase_020033_2);

#define VkglTestCase_020034_1 "dEQP-GLES31.functional.fbo.no_attachment"
#define VkglTestCase_020034_2 "s.interaction.2048x2048ms4_default_1x1ms0"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020034, VkglTestCase_020034_1, VkglTestCase_020034_2);

#define VkglTestCase_020035_1 "dEQP-GLES31.functional.fbo.no_attachment"
#define VkglTestCase_020035_2 "s.interaction.1x1ms0_default_2048x2048ms4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020035, VkglTestCase_020035_1, VkglTestCase_020035_2);
