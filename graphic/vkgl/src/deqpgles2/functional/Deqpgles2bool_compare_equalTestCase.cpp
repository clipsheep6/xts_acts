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

#define VkglTestCase_006744_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006744_2 "tor.bool_compare.equal.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006744, VkglTestCase_006744_1, VkglTestCase_006744_2);

#define VkglTestCase_006745_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006745_2 "or.bool_compare.equal.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006745, VkglTestCase_006745_1, VkglTestCase_006745_2);

#define VkglTestCase_006746_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006746_2 "tor.bool_compare.equal.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006746, VkglTestCase_006746_1, VkglTestCase_006746_2);

#define VkglTestCase_006747_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006747_2 "or.bool_compare.equal.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006747, VkglTestCase_006747_1, VkglTestCase_006747_2);

#define VkglTestCase_006748_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006748_2 "tor.bool_compare.equal.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006748, VkglTestCase_006748_1, VkglTestCase_006748_2);

#define VkglTestCase_006749_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006749_2 "or.bool_compare.equal.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006749, VkglTestCase_006749_1, VkglTestCase_006749_2);
