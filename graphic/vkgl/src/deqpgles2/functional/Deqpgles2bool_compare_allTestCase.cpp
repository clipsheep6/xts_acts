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

#define VkglTestCase_006762_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006762_2 "ator.bool_compare.all.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006762, VkglTestCase_006762_1, VkglTestCase_006762_2);

#define VkglTestCase_006763_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006763_2 "tor.bool_compare.all.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006763, VkglTestCase_006763_1, VkglTestCase_006763_2);

#define VkglTestCase_006764_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006764_2 "ator.bool_compare.all.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006764, VkglTestCase_006764_1, VkglTestCase_006764_2);

#define VkglTestCase_006765_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006765_2 "tor.bool_compare.all.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006765, VkglTestCase_006765_1, VkglTestCase_006765_2);

#define VkglTestCase_006766_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006766_2 "ator.bool_compare.all.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006766, VkglTestCase_006766_1, VkglTestCase_006766_2);

#define VkglTestCase_006767_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006767_2 "tor.bool_compare.all.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006767, VkglTestCase_006767_1, VkglTestCase_006767_2);
