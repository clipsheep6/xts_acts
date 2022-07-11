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

#define VkglTestCase_013612_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013612_2 "or.bool_compare.notEqual.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013612, VkglTestCase_013612_1, VkglTestCase_013612_2);

#define VkglTestCase_013613_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013613_2 "r.bool_compare.notEqual.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013613, VkglTestCase_013613_1, VkglTestCase_013613_2);

#define VkglTestCase_013614_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013614_2 "or.bool_compare.notEqual.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013614, VkglTestCase_013614_1, VkglTestCase_013614_2);

#define VkglTestCase_013615_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013615_2 "r.bool_compare.notEqual.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013615, VkglTestCase_013615_1, VkglTestCase_013615_2);

#define VkglTestCase_013616_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013616_2 "or.bool_compare.notEqual.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013616, VkglTestCase_013616_1, VkglTestCase_013616_2);

#define VkglTestCase_013617_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013617_2 "r.bool_compare.notEqual.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013617, VkglTestCase_013617_1, VkglTestCase_013617_2);
