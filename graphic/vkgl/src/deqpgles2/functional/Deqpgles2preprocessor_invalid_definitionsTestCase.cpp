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

#define VkglTestCase_000159_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000159_2 "valid_definitions.define_non_identifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000159, VkglTestCase_000159_1, VkglTestCase_000159_2);

#define VkglTestCase_000160_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000160_2 "alid_definitions.define_non_identifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000160, VkglTestCase_000160_1, VkglTestCase_000160_2);

#define VkglTestCase_000161_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000161_2 "alid_definitions.undef_non_identifier_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000161, VkglTestCase_000161_1, VkglTestCase_000161_2);

#define VkglTestCase_000162_1 "dEQP-GLES2.functional.shaders.preprocessor.inva"
#define VkglTestCase_000162_2 "lid_definitions.undef_non_identifier_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000162, VkglTestCase_000162_1, VkglTestCase_000162_2);

#define VkglTestCase_000163_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000163_2 "alid_definitions.undef_non_identifier_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000163, VkglTestCase_000163_1, VkglTestCase_000163_2);

#define VkglTestCase_000164_1 "dEQP-GLES2.functional.shaders.preprocessor.inva"
#define VkglTestCase_000164_2 "lid_definitions.undef_non_identifier_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000164, VkglTestCase_000164_1, VkglTestCase_000164_2);
