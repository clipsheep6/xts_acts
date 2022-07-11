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

#define VkglTestCase_000802_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_000802_2 "definitions.define_value_and_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000802, VkglTestCase_000802_1, VkglTestCase_000802_2);

#define VkglTestCase_000803_1 "dEQP-GLES3.functional.shaders.preprocessor.d"
#define VkglTestCase_000803_2 "efinitions.define_value_and_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000803, VkglTestCase_000803_1, VkglTestCase_000803_2);

#define VkglTestCase_000804_1 "dEQP-GLES3.functional.shaders.preprocessor.def"
#define VkglTestCase_000804_2 "initions.undefine_object_invalid_syntax_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000804, VkglTestCase_000804_1, VkglTestCase_000804_2);

#define VkglTestCase_000805_1 "dEQP-GLES3.functional.shaders.preprocessor.defi"
#define VkglTestCase_000805_2 "nitions.undefine_object_invalid_syntax_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000805, VkglTestCase_000805_1, VkglTestCase_000805_2);

#define VkglTestCase_000806_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_000806_2 "definitions.undefine_invalid_object_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000806, VkglTestCase_000806_1, VkglTestCase_000806_2);

#define VkglTestCase_000807_1 "dEQP-GLES3.functional.shaders.preprocessor.d"
#define VkglTestCase_000807_2 "efinitions.undefine_invalid_object_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000807, VkglTestCase_000807_1, VkglTestCase_000807_2);

#define VkglTestCase_000808_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_000808_2 "definitions.undefine_invalid_object_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000808, VkglTestCase_000808_1, VkglTestCase_000808_2);

#define VkglTestCase_000809_1 "dEQP-GLES3.functional.shaders.preprocessor.d"
#define VkglTestCase_000809_2 "efinitions.undefine_invalid_object_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000809, VkglTestCase_000809_1, VkglTestCase_000809_2);

#define VkglTestCase_000810_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_000810_2 "definitions.undefine_invalid_object_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000810, VkglTestCase_000810_1, VkglTestCase_000810_2);

#define VkglTestCase_000811_1 "dEQP-GLES3.functional.shaders.preprocessor.d"
#define VkglTestCase_000811_2 "efinitions.undefine_invalid_object_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000811, VkglTestCase_000811_1, VkglTestCase_000811_2);

#define VkglTestCase_000812_1 "dEQP-GLES3.functional.shaders.preprocessor."
#define VkglTestCase_000812_2 "definitions.undefine_invalid_object_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000812, VkglTestCase_000812_1, VkglTestCase_000812_2);

#define VkglTestCase_000813_1 "dEQP-GLES3.functional.shaders.preprocessor.d"
#define VkglTestCase_000813_2 "efinitions.undefine_invalid_object_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000813, VkglTestCase_000813_1, VkglTestCase_000813_2);

#define VkglTestCase_000814_1 "dEQP-GLES3.functional.shaders.preproces"
#define VkglTestCase_000814_2 "sor.definitions.undefine_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000814, VkglTestCase_000814_1, VkglTestCase_000814_2);

#define VkglTestCase_000815_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_000815_2 "or.definitions.undefine_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000815, VkglTestCase_000815_1, VkglTestCase_000815_2);
