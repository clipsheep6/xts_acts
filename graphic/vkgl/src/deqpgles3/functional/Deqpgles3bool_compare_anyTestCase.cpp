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

#define VkglTestCase_013618_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013618_2 "ator.bool_compare.any.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013618, VkglTestCase_013618_1, VkglTestCase_013618_2);

#define VkglTestCase_013619_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013619_2 "tor.bool_compare.any.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013619, VkglTestCase_013619_1, VkglTestCase_013619_2);

#define VkglTestCase_013620_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013620_2 "ator.bool_compare.any.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013620, VkglTestCase_013620_1, VkglTestCase_013620_2);

#define VkglTestCase_013621_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013621_2 "tor.bool_compare.any.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013621, VkglTestCase_013621_1, VkglTestCase_013621_2);

#define VkglTestCase_013622_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013622_2 "ator.bool_compare.any.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013622, VkglTestCase_013622_1, VkglTestCase_013622_2);

#define VkglTestCase_013623_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013623_2 "tor.bool_compare.any.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013623, VkglTestCase_013623_1, VkglTestCase_013623_2);
