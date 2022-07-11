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

#define VkglTestCase_044359_1 "dEQP-GLES3.functional.lif"
#define VkglTestCase_044359_2 "etime.delete_bound.buffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044359, VkglTestCase_044359_1, VkglTestCase_044359_2);

#define VkglTestCase_044360_1 "dEQP-GLES3.functional.lif"
#define VkglTestCase_044360_2 "etime.delete_bound.texture"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044360, VkglTestCase_044360_1, VkglTestCase_044360_2);

#define VkglTestCase_044361_1 "dEQP-GLES3.functional.lifeti"
#define VkglTestCase_044361_2 "me.delete_bound.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044361, VkglTestCase_044361_1, VkglTestCase_044361_2);

#define VkglTestCase_044362_1 "dEQP-GLES3.functional.lifet"
#define VkglTestCase_044362_2 "ime.delete_bound.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044362, VkglTestCase_044362_1, VkglTestCase_044362_2);

#define VkglTestCase_044363_1 "dEQP-GLES3.functional.li"
#define VkglTestCase_044363_2 "fetime.delete_bound.query"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044363, VkglTestCase_044363_1, VkglTestCase_044363_2);

#define VkglTestCase_044364_1 "dEQP-GLES3.functional.lifetime."
#define VkglTestCase_044364_2 "delete_bound.transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044364, VkglTestCase_044364_1, VkglTestCase_044364_2);

#define VkglTestCase_044365_1 "dEQP-GLES3.functional.lifeti"
#define VkglTestCase_044365_2 "me.delete_bound.vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044365, VkglTestCase_044365_1, VkglTestCase_044365_2);

#define VkglTestCase_044366_1 "dEQP-GLES3.functional.lif"
#define VkglTestCase_044366_2 "etime.delete_bound.sampler"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044366, VkglTestCase_044366_1, VkglTestCase_044366_2);
