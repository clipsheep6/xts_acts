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
#include "../ActsDeqpgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002772_1 "dEQP-GLES3.functional.shaders.conditiona"
#define VkglTestCase_002772_2 "ls.invalid_if.missing_parenthesis_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002772, VkglTestCase_002772_1, VkglTestCase_002772_2);

#define VkglTestCase_002773_1 "dEQP-GLES3.functional.shaders.conditional"
#define VkglTestCase_002773_2 "s.invalid_if.missing_parenthesis_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002773, VkglTestCase_002773_1, VkglTestCase_002773_2);

#define VkglTestCase_002774_1 "dEQP-GLES3.functional.shaders.conditiona"
#define VkglTestCase_002774_2 "ls.invalid_if.unclosed_parenthesis_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002774, VkglTestCase_002774_1, VkglTestCase_002774_2);

#define VkglTestCase_002775_1 "dEQP-GLES3.functional.shaders.conditional"
#define VkglTestCase_002775_2 "s.invalid_if.unclosed_parenthesis_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002775, VkglTestCase_002775_1, VkglTestCase_002775_2);

#define VkglTestCase_002776_1 "dEQP-GLES3.functional.shaders.conditi"
#define VkglTestCase_002776_2 "onals.invalid_if.int_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002776, VkglTestCase_002776_1, VkglTestCase_002776_2);

#define VkglTestCase_002777_1 "dEQP-GLES3.functional.shaders.conditio"
#define VkglTestCase_002777_2 "nals.invalid_if.int_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002777, VkglTestCase_002777_1, VkglTestCase_002777_2);

#define VkglTestCase_002778_1 "dEQP-GLES3.functional.shaders.condition"
#define VkglTestCase_002778_2 "als.invalid_if.int_zero_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002778, VkglTestCase_002778_1, VkglTestCase_002778_2);

#define VkglTestCase_002779_1 "dEQP-GLES3.functional.shaders.conditiona"
#define VkglTestCase_002779_2 "ls.invalid_if.int_zero_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002779, VkglTestCase_002779_1, VkglTestCase_002779_2);

#define VkglTestCase_002780_1 "dEQP-GLES3.functional.shaders.condition"
#define VkglTestCase_002780_2 "als.invalid_if.int_one_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002780, VkglTestCase_002780_1, VkglTestCase_002780_2);

#define VkglTestCase_002781_1 "dEQP-GLES3.functional.shaders.conditiona"
#define VkglTestCase_002781_2 "ls.invalid_if.int_one_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002781, VkglTestCase_002781_1, VkglTestCase_002781_2);

#define VkglTestCase_002782_1 "dEQP-GLES3.functional.shaders.conditional"
#define VkglTestCase_002782_2 "s.invalid_if.int_uniform_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002782, VkglTestCase_002782_1, VkglTestCase_002782_2);

#define VkglTestCase_002783_1 "dEQP-GLES3.functional.shaders.conditionals"
#define VkglTestCase_002783_2 ".invalid_if.int_uniform_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002783, VkglTestCase_002783_1, VkglTestCase_002783_2);

#define VkglTestCase_002784_1 "dEQP-GLES3.functional.shaders.conditio"
#define VkglTestCase_002784_2 "nals.invalid_if.float_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002784, VkglTestCase_002784_1, VkglTestCase_002784_2);

#define VkglTestCase_002785_1 "dEQP-GLES3.functional.shaders.condition"
#define VkglTestCase_002785_2 "als.invalid_if.float_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002785, VkglTestCase_002785_1, VkglTestCase_002785_2);

#define VkglTestCase_002786_1 "dEQP-GLES3.functional.shaders.conditiona"
#define VkglTestCase_002786_2 "ls.invalid_if.float_zero_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002786, VkglTestCase_002786_1, VkglTestCase_002786_2);

#define VkglTestCase_002787_1 "dEQP-GLES3.functional.shaders.conditional"
#define VkglTestCase_002787_2 "s.invalid_if.float_zero_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002787, VkglTestCase_002787_1, VkglTestCase_002787_2);

#define VkglTestCase_002788_1 "dEQP-GLES3.functional.shaders.conditiona"
#define VkglTestCase_002788_2 "ls.invalid_if.float_one_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002788, VkglTestCase_002788_1, VkglTestCase_002788_2);

#define VkglTestCase_002789_1 "dEQP-GLES3.functional.shaders.conditional"
#define VkglTestCase_002789_2 "s.invalid_if.float_one_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002789, VkglTestCase_002789_1, VkglTestCase_002789_2);

#define VkglTestCase_002790_1 "dEQP-GLES3.functional.shaders.condition"
#define VkglTestCase_002790_2 "als.invalid_if.sampler_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002790, VkglTestCase_002790_1, VkglTestCase_002790_2);

#define VkglTestCase_002791_1 "dEQP-GLES3.functional.shaders.conditiona"
#define VkglTestCase_002791_2 "ls.invalid_if.sampler_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002791, VkglTestCase_002791_1, VkglTestCase_002791_2);
