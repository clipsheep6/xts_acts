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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000784_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_000784_2 "ocessor.basic.correct_phases_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000784, VkglTestCase_000784_1, VkglTestCase_000784_2);

#define VkglTestCase_000785_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_000785_2 "cessor.basic.correct_phases_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000785, VkglTestCase_000785_1, VkglTestCase_000785_2);

#define VkglTestCase_000786_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000786_2 "essor.basic.invalid_identifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000786, VkglTestCase_000786_1, VkglTestCase_000786_2);

#define VkglTestCase_000787_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000787_2 "ssor.basic.invalid_identifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000787, VkglTestCase_000787_1, VkglTestCase_000787_2);

#define VkglTestCase_000788_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_000788_2 "ocessor.basic.null_directive_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000788, VkglTestCase_000788_1, VkglTestCase_000788_2);

#define VkglTestCase_000789_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_000789_2 "cessor.basic.null_directive_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000789, VkglTestCase_000789_1, VkglTestCase_000789_2);

#define VkglTestCase_000790_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_000790_2 "cessor.basic.invalid_directive_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000790, VkglTestCase_000790_1, VkglTestCase_000790_2);

#define VkglTestCase_000791_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000791_2 "essor.basic.invalid_directive_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000791, VkglTestCase_000791_1, VkglTestCase_000791_2);

#define VkglTestCase_000792_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000792_2 "essor.basic.missing_identifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000792, VkglTestCase_000792_1, VkglTestCase_000792_2);

#define VkglTestCase_000793_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000793_2 "ssor.basic.missing_identifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000793, VkglTestCase_000793_1, VkglTestCase_000793_2);

#define VkglTestCase_000794_1 "dEQP-GLES3.functional.shaders.prep"
#define VkglTestCase_000794_2 "rocessor.basic.empty_object_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000794, VkglTestCase_000794_1, VkglTestCase_000794_2);

#define VkglTestCase_000795_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_000795_2 "ocessor.basic.empty_object_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000795, VkglTestCase_000795_1, VkglTestCase_000795_2);

#define VkglTestCase_000796_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_000796_2 "ocessor.basic.empty_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000796, VkglTestCase_000796_1, VkglTestCase_000796_2);

#define VkglTestCase_000797_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_000797_2 "cessor.basic.empty_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000797, VkglTestCase_000797_1, VkglTestCase_000797_2);

#define VkglTestCase_000798_1 "dEQP-GLES3.functional.shaders.prepr"
#define VkglTestCase_000798_2 "ocessor.basic.empty_directive_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000798, VkglTestCase_000798_1, VkglTestCase_000798_2);

#define VkglTestCase_000799_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_000799_2 "cessor.basic.empty_directive_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000799, VkglTestCase_000799_1, VkglTestCase_000799_2);

#define VkglTestCase_000800_1 "dEQP-GLES3.functional.shaders.preprocessor.b"
#define VkglTestCase_000800_2 "asic.identifier_with_double_underscore_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000800, VkglTestCase_000800_1, VkglTestCase_000800_2);

#define VkglTestCase_000801_1 "dEQP-GLES3.functional.shaders.preprocessor.ba"
#define VkglTestCase_000801_2 "sic.identifier_with_double_underscore_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000801, VkglTestCase_000801_1, VkglTestCase_000801_2);
