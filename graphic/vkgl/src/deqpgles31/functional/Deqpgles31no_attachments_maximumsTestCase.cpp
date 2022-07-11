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

#define VkglTestCase_020036_1 "dEQP-GLES31.functional.fbo.n"
#define VkglTestCase_020036_2 "o_attachments.maximums.width"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020036, VkglTestCase_020036_1, VkglTestCase_020036_2);

#define VkglTestCase_020037_1 "dEQP-GLES31.functional.fbo.n"
#define VkglTestCase_020037_2 "o_attachments.maximums.height"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020037, VkglTestCase_020037_1, VkglTestCase_020037_2);

#define VkglTestCase_020038_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_020038_2 "no_attachments.maximums.size"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020038, VkglTestCase_020038_1, VkglTestCase_020038_2);

#define VkglTestCase_020039_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_020039_2 "_attachments.maximums.samples"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020039, VkglTestCase_020039_1, VkglTestCase_020039_2);

#define VkglTestCase_020040_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_020040_2 "no_attachments.maximums.all"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020040, VkglTestCase_020040_1, VkglTestCase_020040_2);
