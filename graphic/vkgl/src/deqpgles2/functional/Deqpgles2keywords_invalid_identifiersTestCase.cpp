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
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002341_1 "dEQP-GLES2.functional.shaders.keyword"
#define VkglTestCase_002341_2 "s.invalid_identifiers.gl_begin_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002341, VkglTestCase_002341_1, VkglTestCase_002341_2);

#define VkglTestCase_002342_1 "dEQP-GLES2.functional.shaders.keywords"
#define VkglTestCase_002342_2 ".invalid_identifiers.gl_begin_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002342, VkglTestCase_002342_1, VkglTestCase_002342_2);

#define VkglTestCase_002343_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002343_2 "rds.invalid_identifiers.digit_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002343, VkglTestCase_002343_1, VkglTestCase_002343_2);

#define VkglTestCase_002344_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002344_2 "ds.invalid_identifiers.digit_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002344, VkglTestCase_002344_1, VkglTestCase_002344_2);

#define VkglTestCase_002345_1 "dEQP-GLES2.functional.shaders.keywords"
#define VkglTestCase_002345_2 ".invalid_identifiers.digit_begin_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002345, VkglTestCase_002345_1, VkglTestCase_002345_2);

#define VkglTestCase_002346_1 "dEQP-GLES2.functional.shaders.keywords."
#define VkglTestCase_002346_2 "invalid_identifiers.digit_begin_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002346, VkglTestCase_002346_1, VkglTestCase_002346_2);
