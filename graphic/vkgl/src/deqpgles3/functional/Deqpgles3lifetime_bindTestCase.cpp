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

#define VkglTestCase_044351_1 "dEQP-GLES3.functional"
#define VkglTestCase_044351_2 ".lifetime.bind.buffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044351, VkglTestCase_044351_1, VkglTestCase_044351_2);

#define VkglTestCase_044352_1 "dEQP-GLES3.functional"
#define VkglTestCase_044352_2 ".lifetime.bind.texture"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044352, VkglTestCase_044352_1, VkglTestCase_044352_2);

#define VkglTestCase_044353_1 "dEQP-GLES3.functional.li"
#define VkglTestCase_044353_2 "fetime.bind.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044353, VkglTestCase_044353_1, VkglTestCase_044353_2);

#define VkglTestCase_044354_1 "dEQP-GLES3.functional.l"
#define VkglTestCase_044354_2 "ifetime.bind.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044354, VkglTestCase_044354_1, VkglTestCase_044354_2);

#define VkglTestCase_044355_1 "dEQP-GLES3.functiona"
#define VkglTestCase_044355_2 "l.lifetime.bind.query"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044355, VkglTestCase_044355_1, VkglTestCase_044355_2);

#define VkglTestCase_044356_1 "dEQP-GLES3.functional.lifet"
#define VkglTestCase_044356_2 "ime.bind.transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044356, VkglTestCase_044356_1, VkglTestCase_044356_2);

#define VkglTestCase_044357_1 "dEQP-GLES3.functional.li"
#define VkglTestCase_044357_2 "fetime.bind.vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044357, VkglTestCase_044357_1, VkglTestCase_044357_2);

#define VkglTestCase_044358_1 "dEQP-GLES3.functional"
#define VkglTestCase_044358_2 ".lifetime.bind.sampler"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044358, VkglTestCase_044358_1, VkglTestCase_044358_2);
