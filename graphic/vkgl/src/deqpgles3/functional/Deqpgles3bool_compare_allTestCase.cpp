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

#define VkglTestCase_013624_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013624_2 "ator.bool_compare.all.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013624, VkglTestCase_013624_1, VkglTestCase_013624_2);

#define VkglTestCase_013625_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013625_2 "tor.bool_compare.all.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013625, VkglTestCase_013625_1, VkglTestCase_013625_2);

#define VkglTestCase_013626_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013626_2 "ator.bool_compare.all.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013626, VkglTestCase_013626_1, VkglTestCase_013626_2);

#define VkglTestCase_013627_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013627_2 "tor.bool_compare.all.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013627, VkglTestCase_013627_1, VkglTestCase_013627_2);

#define VkglTestCase_013628_1 "dEQP-GLES3.functional.shaders.oper"
#define VkglTestCase_013628_2 "ator.bool_compare.all.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013628, VkglTestCase_013628_1, VkglTestCase_013628_2);

#define VkglTestCase_013629_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013629_2 "tor.bool_compare.all.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013629, VkglTestCase_013629_1, VkglTestCase_013629_2);
