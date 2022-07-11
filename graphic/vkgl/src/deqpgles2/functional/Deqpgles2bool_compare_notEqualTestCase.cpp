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
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006750_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006750_2 "or.bool_compare.notEqual.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006750, VkglTestCase_006750_1, VkglTestCase_006750_2);

#define VkglTestCase_006751_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006751_2 "r.bool_compare.notEqual.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006751, VkglTestCase_006751_1, VkglTestCase_006751_2);

#define VkglTestCase_006752_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006752_2 "or.bool_compare.notEqual.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006752, VkglTestCase_006752_1, VkglTestCase_006752_2);

#define VkglTestCase_006753_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006753_2 "r.bool_compare.notEqual.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006753, VkglTestCase_006753_1, VkglTestCase_006753_2);

#define VkglTestCase_006754_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006754_2 "or.bool_compare.notEqual.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006754, VkglTestCase_006754_1, VkglTestCase_006754_2);

#define VkglTestCase_006755_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006755_2 "r.bool_compare.notEqual.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006755, VkglTestCase_006755_1, VkglTestCase_006755_2);
