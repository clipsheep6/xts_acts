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

#define VkglTestCase_013630_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013630_2 "ator.bool_compare.not.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013630, VkglTestCase_013630_1, VkglTestCase_013630_2);

#define VkglTestCase_013631_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013631_2 "tor.bool_compare.not.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013631, VkglTestCase_013631_1, VkglTestCase_013631_2);

#define VkglTestCase_013632_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013632_2 "ator.bool_compare.not.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013632, VkglTestCase_013632_1, VkglTestCase_013632_2);

#define VkglTestCase_013633_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013633_2 "tor.bool_compare.not.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013633, VkglTestCase_013633_1, VkglTestCase_013633_2);

#define VkglTestCase_013634_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013634_2 "ator.bool_compare.not.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013634, VkglTestCase_013634_1, VkglTestCase_013634_2);

#define VkglTestCase_013635_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013635_2 "tor.bool_compare.not.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013635, VkglTestCase_013635_1, VkglTestCase_013635_2);
