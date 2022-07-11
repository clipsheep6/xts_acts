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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001552_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001552_2 "e.uniform.basic.precision_conflict_1"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001552, VkglTestCase_001552_1, VkglTestCase_001552_2);

#define VkglTestCase_001553_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001553_2 "e.uniform.basic.precision_conflict_2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001553, VkglTestCase_001553_1, VkglTestCase_001553_2);

#define VkglTestCase_001554_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001554_2 "e.uniform.basic.precision_conflict_3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001554, VkglTestCase_001554_1, VkglTestCase_001554_2);

#define VkglTestCase_001555_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001555_2 "e.uniform.basic.precision_conflict_4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001555, VkglTestCase_001555_1, VkglTestCase_001555_2);
