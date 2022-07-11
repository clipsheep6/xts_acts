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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025178_1 "dEQP-GLES31.functional.primitive_boun"
#define VkglTestCase_025178_2 "ding_box.blit_fbo.blit_default_to_fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025178, VkglTestCase_025178_1, VkglTestCase_025178_2);

#define VkglTestCase_025179_1 "dEQP-GLES31.functional.primitive_boun"
#define VkglTestCase_025179_2 "ding_box.blit_fbo.blit_fbo_to_default"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025179, VkglTestCase_025179_1, VkglTestCase_025179_2);

#define VkglTestCase_025180_1 "dEQP-GLES31.functional.primitive_bo"
#define VkglTestCase_025180_2 "unding_box.blit_fbo.blit_fbo_to_fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025180, VkglTestCase_025180_1, VkglTestCase_025180_2);
