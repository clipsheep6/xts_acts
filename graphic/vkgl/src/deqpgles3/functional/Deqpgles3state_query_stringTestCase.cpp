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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043164_1 "dEQP-GLES3.functional.st"
#define VkglTestCase_043164_2 "ate_query.string.renderer"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043164, VkglTestCase_043164_1, VkglTestCase_043164_2);

#define VkglTestCase_043165_1 "dEQP-GLES3.functional.s"
#define VkglTestCase_043165_2 "tate_query.string.vendor"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043165, VkglTestCase_043165_1, VkglTestCase_043165_2);

#define VkglTestCase_043166_1 "dEQP-GLES3.functional.st"
#define VkglTestCase_043166_2 "ate_query.string.version"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043166, VkglTestCase_043166_1, VkglTestCase_043166_2);

#define VkglTestCase_043167_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043167_2 "y.string.shading_language_version"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043167, VkglTestCase_043167_1, VkglTestCase_043167_2);

#define VkglTestCase_043168_1 "dEQP-GLES3.functional.sta"
#define VkglTestCase_043168_2 "te_query.string.extensions"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043168, VkglTestCase_043168_1, VkglTestCase_043168_2);
