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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001322_1 "dEQP-GLES2.functional.shaders.conditiona"
#define VkglTestCase_001322_2 "ls.invalid_if.missing_parenthesis_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001322, VkglTestCase_001322_1, VkglTestCase_001322_2);

#define VkglTestCase_001323_1 "dEQP-GLES2.functional.shaders.conditional"
#define VkglTestCase_001323_2 "s.invalid_if.missing_parenthesis_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001323, VkglTestCase_001323_1, VkglTestCase_001323_2);

#define VkglTestCase_001324_1 "dEQP-GLES2.functional.shaders.conditiona"
#define VkglTestCase_001324_2 "ls.invalid_if.unclosed_parenthesis_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001324, VkglTestCase_001324_1, VkglTestCase_001324_2);

#define VkglTestCase_001325_1 "dEQP-GLES2.functional.shaders.conditional"
#define VkglTestCase_001325_2 "s.invalid_if.unclosed_parenthesis_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001325, VkglTestCase_001325_1, VkglTestCase_001325_2);

#define VkglTestCase_001326_1 "dEQP-GLES2.functional.shaders.conditi"
#define VkglTestCase_001326_2 "onals.invalid_if.int_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001326, VkglTestCase_001326_1, VkglTestCase_001326_2);

#define VkglTestCase_001327_1 "dEQP-GLES2.functional.shaders.conditio"
#define VkglTestCase_001327_2 "nals.invalid_if.int_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001327, VkglTestCase_001327_1, VkglTestCase_001327_2);

#define VkglTestCase_001328_1 "dEQP-GLES2.functional.shaders.condition"
#define VkglTestCase_001328_2 "als.invalid_if.int_zero_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001328, VkglTestCase_001328_1, VkglTestCase_001328_2);

#define VkglTestCase_001329_1 "dEQP-GLES2.functional.shaders.conditiona"
#define VkglTestCase_001329_2 "ls.invalid_if.int_zero_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001329, VkglTestCase_001329_1, VkglTestCase_001329_2);

#define VkglTestCase_001330_1 "dEQP-GLES2.functional.shaders.condition"
#define VkglTestCase_001330_2 "als.invalid_if.int_one_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001330, VkglTestCase_001330_1, VkglTestCase_001330_2);

#define VkglTestCase_001331_1 "dEQP-GLES2.functional.shaders.conditiona"
#define VkglTestCase_001331_2 "ls.invalid_if.int_one_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001331, VkglTestCase_001331_1, VkglTestCase_001331_2);

#define VkglTestCase_001332_1 "dEQP-GLES2.functional.shaders.conditional"
#define VkglTestCase_001332_2 "s.invalid_if.int_uniform_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001332, VkglTestCase_001332_1, VkglTestCase_001332_2);

#define VkglTestCase_001333_1 "dEQP-GLES2.functional.shaders.conditionals"
#define VkglTestCase_001333_2 ".invalid_if.int_uniform_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001333, VkglTestCase_001333_1, VkglTestCase_001333_2);

#define VkglTestCase_001334_1 "dEQP-GLES2.functional.shaders.conditio"
#define VkglTestCase_001334_2 "nals.invalid_if.float_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001334, VkglTestCase_001334_1, VkglTestCase_001334_2);

#define VkglTestCase_001335_1 "dEQP-GLES2.functional.shaders.condition"
#define VkglTestCase_001335_2 "als.invalid_if.float_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001335, VkglTestCase_001335_1, VkglTestCase_001335_2);

#define VkglTestCase_001336_1 "dEQP-GLES2.functional.shaders.conditiona"
#define VkglTestCase_001336_2 "ls.invalid_if.float_zero_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001336, VkglTestCase_001336_1, VkglTestCase_001336_2);

#define VkglTestCase_001337_1 "dEQP-GLES2.functional.shaders.conditional"
#define VkglTestCase_001337_2 "s.invalid_if.float_zero_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001337, VkglTestCase_001337_1, VkglTestCase_001337_2);

#define VkglTestCase_001338_1 "dEQP-GLES2.functional.shaders.conditiona"
#define VkglTestCase_001338_2 "ls.invalid_if.float_one_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001338, VkglTestCase_001338_1, VkglTestCase_001338_2);

#define VkglTestCase_001339_1 "dEQP-GLES2.functional.shaders.conditional"
#define VkglTestCase_001339_2 "s.invalid_if.float_one_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001339, VkglTestCase_001339_1, VkglTestCase_001339_2);

#define VkglTestCase_001340_1 "dEQP-GLES2.functional.shaders.condition"
#define VkglTestCase_001340_2 "als.invalid_if.sampler_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001340, VkglTestCase_001340_1, VkglTestCase_001340_2);

#define VkglTestCase_001341_1 "dEQP-GLES2.functional.shaders.conditiona"
#define VkglTestCase_001341_2 "ls.invalid_if.sampler_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001341, VkglTestCase_001341_1, VkglTestCase_001341_2);
