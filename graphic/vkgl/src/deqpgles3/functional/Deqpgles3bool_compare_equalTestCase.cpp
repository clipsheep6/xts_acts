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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013606_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013606_2 "tor.bool_compare.equal.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013606, VkglTestCase_013606_1, VkglTestCase_013606_2);

#define VkglTestCase_013607_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013607_2 "or.bool_compare.equal.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013607, VkglTestCase_013607_1, VkglTestCase_013607_2);

#define VkglTestCase_013608_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013608_2 "tor.bool_compare.equal.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013608, VkglTestCase_013608_1, VkglTestCase_013608_2);

#define VkglTestCase_013609_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013609_2 "or.bool_compare.equal.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013609, VkglTestCase_013609_1, VkglTestCase_013609_2);

#define VkglTestCase_013610_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013610_2 "tor.bool_compare.equal.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013610, VkglTestCase_013610_1, VkglTestCase_013610_2);

#define VkglTestCase_013611_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013611_2 "or.bool_compare.equal.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013611, VkglTestCase_013611_1, VkglTestCase_013611_2);
