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

#define VkglTestCase_044367_1 "dEQP-GLES3.functional.li"
#define VkglTestCase_044367_2 "fetime.bind_no_gen.buffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044367, VkglTestCase_044367_1, VkglTestCase_044367_2);

#define VkglTestCase_044368_1 "dEQP-GLES3.functional.lif"
#define VkglTestCase_044368_2 "etime.bind_no_gen.texture"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044368, VkglTestCase_044368_1, VkglTestCase_044368_2);

#define VkglTestCase_044369_1 "dEQP-GLES3.functional.lifet"
#define VkglTestCase_044369_2 "ime.bind_no_gen.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044369, VkglTestCase_044369_1, VkglTestCase_044369_2);

#define VkglTestCase_044370_1 "dEQP-GLES3.functional.lifet"
#define VkglTestCase_044370_2 "ime.bind_no_gen.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044370, VkglTestCase_044370_1, VkglTestCase_044370_2);

#define VkglTestCase_044371_1 "dEQP-GLES3.functional.li"
#define VkglTestCase_044371_2 "fetime.bind_no_gen.query"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044371, VkglTestCase_044371_1, VkglTestCase_044371_2);

#define VkglTestCase_044372_1 "dEQP-GLES3.functional.lifetime"
#define VkglTestCase_044372_2 ".bind_no_gen.transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044372, VkglTestCase_044372_1, VkglTestCase_044372_2);

#define VkglTestCase_044373_1 "dEQP-GLES3.functional.lifet"
#define VkglTestCase_044373_2 "ime.bind_no_gen.vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044373, VkglTestCase_044373_1, VkglTestCase_044373_2);

#define VkglTestCase_044374_1 "dEQP-GLES3.functional.lif"
#define VkglTestCase_044374_2 "etime.bind_no_gen.sampler"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044374, VkglTestCase_044374_1, VkglTestCase_044374_2);
