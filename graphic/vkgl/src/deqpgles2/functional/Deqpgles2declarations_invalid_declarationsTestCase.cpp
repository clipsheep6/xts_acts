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
#include "../ActsDeqpgles20002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001342_1 "dEQP-GLES2.functional.shaders.declarations.i"
#define VkglTestCase_001342_2 "nvalid_declarations.attribute_in_vertex_main"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001342, VkglTestCase_001342_1, VkglTestCase_001342_2);

#define VkglTestCase_001343_1 "dEQP-GLES2.functional.shaders.declarations"
#define VkglTestCase_001343_2 ".invalid_declarations.attribute_in_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001343, VkglTestCase_001343_1, VkglTestCase_001343_2);

#define VkglTestCase_001344_1 "dEQP-GLES2.functional.shaders.declarations."
#define VkglTestCase_001344_2 "invalid_declarations.uniform_in_vertex_main"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001344, VkglTestCase_001344_1, VkglTestCase_001344_2);

#define VkglTestCase_001345_1 "dEQP-GLES2.functional.shaders.declarations.i"
#define VkglTestCase_001345_2 "nvalid_declarations.uniform_in_fragment_main"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001345, VkglTestCase_001345_1, VkglTestCase_001345_2);

#define VkglTestCase_001346_1 "dEQP-GLES2.functional.shaders.declarations."
#define VkglTestCase_001346_2 "invalid_declarations.varying_in_vertex_main"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001346, VkglTestCase_001346_1, VkglTestCase_001346_2);

#define VkglTestCase_001347_1 "dEQP-GLES2.functional.shaders.declarations.i"
#define VkglTestCase_001347_2 "nvalid_declarations.varying_in_fragment_main"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001347, VkglTestCase_001347_1, VkglTestCase_001347_2);
