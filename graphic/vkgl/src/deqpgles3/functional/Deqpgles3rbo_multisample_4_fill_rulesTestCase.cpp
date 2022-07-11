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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039844_1 "dEQP-GLES3.functional.rasterization.fbo"
#define VkglTestCase_039844_2 ".rbo_multisample_4.fill_rules.basic_quad"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039844, VkglTestCase_039844_1, VkglTestCase_039844_2);

#define VkglTestCase_039845_1 "dEQP-GLES3.functional.rasterization.fbo.rbo"
#define VkglTestCase_039845_2 "_multisample_4.fill_rules.basic_quad_reverse"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039845, VkglTestCase_039845_1, VkglTestCase_039845_2);

#define VkglTestCase_039846_1 "dEQP-GLES3.functional.rasterization.fbo."
#define VkglTestCase_039846_2 "rbo_multisample_4.fill_rules.clipped_full"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039846, VkglTestCase_039846_1, VkglTestCase_039846_2);

#define VkglTestCase_039847_1 "dEQP-GLES3.functional.rasterization.fbo.r"
#define VkglTestCase_039847_2 "bo_multisample_4.fill_rules.clipped_partly"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039847, VkglTestCase_039847_1, VkglTestCase_039847_2);

#define VkglTestCase_039848_1 "dEQP-GLES3.functional.rasterization.fbo"
#define VkglTestCase_039848_2 ".rbo_multisample_4.fill_rules.projected"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039848, VkglTestCase_039848_1, VkglTestCase_039848_2);
