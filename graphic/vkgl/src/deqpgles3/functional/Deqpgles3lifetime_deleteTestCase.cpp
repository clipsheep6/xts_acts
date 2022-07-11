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
#include "../ActsDeqpgles30045TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_044341_1 "dEQP-GLES3.functional."
#define VkglTestCase_044341_2 "lifetime.delete.buffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044341, VkglTestCase_044341_1, VkglTestCase_044341_2);

#define VkglTestCase_044342_1 "dEQP-GLES3.functional."
#define VkglTestCase_044342_2 "lifetime.delete.texture"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044342, VkglTestCase_044342_1, VkglTestCase_044342_2);

#define VkglTestCase_044343_1 "dEQP-GLES3.functional.lif"
#define VkglTestCase_044343_2 "etime.delete.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044343, VkglTestCase_044343_1, VkglTestCase_044343_2);

#define VkglTestCase_044344_1 "dEQP-GLES3.functional.li"
#define VkglTestCase_044344_2 "fetime.delete.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044344, VkglTestCase_044344_1, VkglTestCase_044344_2);

#define VkglTestCase_044345_1 "dEQP-GLES3.functional."
#define VkglTestCase_044345_2 "lifetime.delete.shader"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044345, VkglTestCase_044345_1, VkglTestCase_044345_2);

#define VkglTestCase_044346_1 "dEQP-GLES3.functional."
#define VkglTestCase_044346_2 "lifetime.delete.program"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044346, VkglTestCase_044346_1, VkglTestCase_044346_2);

#define VkglTestCase_044347_1 "dEQP-GLES3.functional"
#define VkglTestCase_044347_2 ".lifetime.delete.query"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044347, VkglTestCase_044347_1, VkglTestCase_044347_2);

#define VkglTestCase_044348_1 "dEQP-GLES3.functional.lifeti"
#define VkglTestCase_044348_2 "me.delete.transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044348, VkglTestCase_044348_1, VkglTestCase_044348_2);

#define VkglTestCase_044349_1 "dEQP-GLES3.functional.lif"
#define VkglTestCase_044349_2 "etime.delete.vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044349, VkglTestCase_044349_1, VkglTestCase_044349_2);

#define VkglTestCase_044350_1 "dEQP-GLES3.functional."
#define VkglTestCase_044350_2 "lifetime.delete.sampler"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044350, VkglTestCase_044350_1, VkglTestCase_044350_2);
