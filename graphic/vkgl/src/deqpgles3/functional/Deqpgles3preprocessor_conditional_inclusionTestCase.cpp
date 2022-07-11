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

#define VkglTestCase_000960_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_000960_2 "sor.conditional_inclusion.basic_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000960, VkglTestCase_000960_1, VkglTestCase_000960_2);

#define VkglTestCase_000961_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_000961_2 "or.conditional_inclusion.basic_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000961, VkglTestCase_000961_1, VkglTestCase_000961_2);

#define VkglTestCase_000962_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_000962_2 "sor.conditional_inclusion.basic_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000962, VkglTestCase_000962_1, VkglTestCase_000962_2);

#define VkglTestCase_000963_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_000963_2 "or.conditional_inclusion.basic_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000963, VkglTestCase_000963_1, VkglTestCase_000963_2);

#define VkglTestCase_000964_1 "dEQP-GLES3.functional.shaders.preprocessor.co"
#define VkglTestCase_000964_2 "nditional_inclusion.defined_macro_undef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000964, VkglTestCase_000964_1, VkglTestCase_000964_2);

#define VkglTestCase_000965_1 "dEQP-GLES3.functional.shaders.preprocessor.con"
#define VkglTestCase_000965_2 "ditional_inclusion.defined_macro_undef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000965, VkglTestCase_000965_1, VkglTestCase_000965_2);

#define VkglTestCase_000966_1 "dEQP-GLES3.functional.shaders.preprocessor.conditional_in"
#define VkglTestCase_000966_2 "clusion.defined_invalid_before_all_macros_replaced_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000966, VkglTestCase_000966_1, VkglTestCase_000966_2);

#define VkglTestCase_000967_1 "dEQP-GLES3.functional.shaders.preprocessor.conditional_inc"
#define VkglTestCase_000967_2 "lusion.defined_invalid_before_all_macros_replaced_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000967, VkglTestCase_000967_1, VkglTestCase_000967_2);

#define VkglTestCase_000968_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_000968_2 "sor.conditional_inclusion.basic_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000968, VkglTestCase_000968_1, VkglTestCase_000968_2);

#define VkglTestCase_000969_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_000969_2 "or.conditional_inclusion.basic_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000969, VkglTestCase_000969_1, VkglTestCase_000969_2);

#define VkglTestCase_000970_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_000970_2 "sor.conditional_inclusion.basic_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000970, VkglTestCase_000970_1, VkglTestCase_000970_2);

#define VkglTestCase_000971_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_000971_2 "or.conditional_inclusion.basic_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000971, VkglTestCase_000971_1, VkglTestCase_000971_2);

#define VkglTestCase_000972_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_000972_2 "sor.conditional_inclusion.basic_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000972, VkglTestCase_000972_1, VkglTestCase_000972_2);

#define VkglTestCase_000973_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_000973_2 "or.conditional_inclusion.basic_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000973, VkglTestCase_000973_1, VkglTestCase_000973_2);

#define VkglTestCase_000974_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_000974_2 "r.conditional_inclusion.unary_ops_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000974, VkglTestCase_000974_1, VkglTestCase_000974_2);

#define VkglTestCase_000975_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_000975_2 ".conditional_inclusion.unary_ops_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000975, VkglTestCase_000975_1, VkglTestCase_000975_2);

#define VkglTestCase_000976_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_000976_2 "r.conditional_inclusion.unary_ops_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000976, VkglTestCase_000976_1, VkglTestCase_000976_2);

#define VkglTestCase_000977_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_000977_2 ".conditional_inclusion.unary_ops_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000977, VkglTestCase_000977_1, VkglTestCase_000977_2);
