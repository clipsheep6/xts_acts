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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015648_1 "dEQP-GLES2.functional.st"
#define VkglTestCase_015648_2 "ate_query.string.renderer"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015648, VkglTestCase_015648_1, VkglTestCase_015648_2);

#define VkglTestCase_015649_1 "dEQP-GLES2.functional.s"
#define VkglTestCase_015649_2 "tate_query.string.vendor"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015649, VkglTestCase_015649_1, VkglTestCase_015649_2);

#define VkglTestCase_015650_1 "dEQP-GLES2.functional.st"
#define VkglTestCase_015650_2 "ate_query.string.version"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015650, VkglTestCase_015650_1, VkglTestCase_015650_2);

#define VkglTestCase_015651_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015651_2 "y.string.shading_language_version"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015651, VkglTestCase_015651_1, VkglTestCase_015651_2);

#define VkglTestCase_015652_1 "dEQP-GLES2.functional.sta"
#define VkglTestCase_015652_2 "te_query.string.extensions"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015652, VkglTestCase_015652_1, VkglTestCase_015652_2);
