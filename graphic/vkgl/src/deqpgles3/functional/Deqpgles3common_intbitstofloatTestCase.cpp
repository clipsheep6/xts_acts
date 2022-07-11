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
#include "../ActsDeqpgles30019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018327_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018327_2 "ions.common.intbitstofloat.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018327, VkglTestCase_018327_1, VkglTestCase_018327_2);

#define VkglTestCase_018328_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018328_2 "ons.common.intbitstofloat.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018328, VkglTestCase_018328_1, VkglTestCase_018328_2);

#define VkglTestCase_018329_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018329_2 "ons.common.intbitstofloat.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018329, VkglTestCase_018329_1, VkglTestCase_018329_2);

#define VkglTestCase_018330_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018330_2 "ns.common.intbitstofloat.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018330, VkglTestCase_018330_1, VkglTestCase_018330_2);

#define VkglTestCase_018331_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018331_2 "ons.common.intbitstofloat.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018331, VkglTestCase_018331_1, VkglTestCase_018331_2);

#define VkglTestCase_018332_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018332_2 "ns.common.intbitstofloat.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018332, VkglTestCase_018332_1, VkglTestCase_018332_2);
