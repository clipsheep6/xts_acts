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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016732_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016732_2 "recision.float.highp_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016732, VkglTestCase_016732_1, VkglTestCase_016732_2);

#define VkglTestCase_016733_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016733_2 "ecision.float.highp_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016733, VkglTestCase_016733_1, VkglTestCase_016733_2);

#define VkglTestCase_016734_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016734_2 "recision.float.highp_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016734, VkglTestCase_016734_1, VkglTestCase_016734_2);

#define VkglTestCase_016735_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016735_2 "ecision.float.highp_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016735, VkglTestCase_016735_1, VkglTestCase_016735_2);

#define VkglTestCase_016736_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016736_2 "recision.float.highp_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016736, VkglTestCase_016736_1, VkglTestCase_016736_2);

#define VkglTestCase_016737_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016737_2 "ecision.float.highp_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016737, VkglTestCase_016737_1, VkglTestCase_016737_2);

#define VkglTestCase_016738_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016738_2 "recision.float.highp_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016738, VkglTestCase_016738_1, VkglTestCase_016738_2);

#define VkglTestCase_016739_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016739_2 "ecision.float.highp_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016739, VkglTestCase_016739_1, VkglTestCase_016739_2);

#define VkglTestCase_016740_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016740_2 "ecision.float.mediump_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016740, VkglTestCase_016740_1, VkglTestCase_016740_2);

#define VkglTestCase_016741_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_016741_2 "cision.float.mediump_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016741, VkglTestCase_016741_1, VkglTestCase_016741_2);

#define VkglTestCase_016742_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016742_2 "ecision.float.mediump_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016742, VkglTestCase_016742_1, VkglTestCase_016742_2);

#define VkglTestCase_016743_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_016743_2 "cision.float.mediump_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016743, VkglTestCase_016743_1, VkglTestCase_016743_2);

#define VkglTestCase_016744_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016744_2 "ecision.float.mediump_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016744, VkglTestCase_016744_1, VkglTestCase_016744_2);

#define VkglTestCase_016745_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_016745_2 "cision.float.mediump_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016745, VkglTestCase_016745_1, VkglTestCase_016745_2);

#define VkglTestCase_016746_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016746_2 "ecision.float.mediump_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016746, VkglTestCase_016746_1, VkglTestCase_016746_2);

#define VkglTestCase_016747_1 "dEQP-GLES3.functional.shaders.pre"
#define VkglTestCase_016747_2 "cision.float.mediump_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016747, VkglTestCase_016747_1, VkglTestCase_016747_2);
