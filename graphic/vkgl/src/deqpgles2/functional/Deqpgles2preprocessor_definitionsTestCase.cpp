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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000149_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000149_2 "definitions.define_value_and_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000149, VkglTestCase_000149_1, VkglTestCase_000149_2);

#define VkglTestCase_000150_1 "dEQP-GLES2.functional.shaders.preprocessor.d"
#define VkglTestCase_000150_2 "efinitions.define_value_and_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000150, VkglTestCase_000150_1, VkglTestCase_000150_2);

#define VkglTestCase_000151_1 "dEQP-GLES2.functional.shaders.preprocessor.def"
#define VkglTestCase_000151_2 "initions.undefine_object_invalid_syntax_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000151, VkglTestCase_000151_1, VkglTestCase_000151_2);

#define VkglTestCase_000152_1 "dEQP-GLES2.functional.shaders.preprocessor.defi"
#define VkglTestCase_000152_2 "nitions.undefine_object_invalid_syntax_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000152, VkglTestCase_000152_1, VkglTestCase_000152_2);

#define VkglTestCase_000153_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000153_2 "definitions.undefine_invalid_object_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000153, VkglTestCase_000153_1, VkglTestCase_000153_2);

#define VkglTestCase_000154_1 "dEQP-GLES2.functional.shaders.preprocessor.d"
#define VkglTestCase_000154_2 "efinitions.undefine_invalid_object_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000154, VkglTestCase_000154_1, VkglTestCase_000154_2);

#define VkglTestCase_000155_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000155_2 "definitions.undefine_invalid_object_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000155, VkglTestCase_000155_1, VkglTestCase_000155_2);

#define VkglTestCase_000156_1 "dEQP-GLES2.functional.shaders.preprocessor.d"
#define VkglTestCase_000156_2 "efinitions.undefine_invalid_object_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000156, VkglTestCase_000156_1, VkglTestCase_000156_2);

#define VkglTestCase_000157_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000157_2 "sor.definitions.undefine_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000157, VkglTestCase_000157_1, VkglTestCase_000157_2);

#define VkglTestCase_000158_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000158_2 "or.definitions.undefine_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000158, VkglTestCase_000158_1, VkglTestCase_000158_2);
