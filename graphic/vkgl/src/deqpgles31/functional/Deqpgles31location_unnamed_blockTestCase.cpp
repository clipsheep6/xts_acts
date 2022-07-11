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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020614_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_020614_2 "query.uniform.location.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020614, VkglTestCase_020614_1, VkglTestCase_020614_2);

#define VkglTestCase_020615_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_020615_2 "_query.uniform.location.unnamed_block.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020615, VkglTestCase_020615_1, VkglTestCase_020615_2);

#define VkglTestCase_020616_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_020616_2 "query.uniform.location.unnamed_block.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020616, VkglTestCase_020616_1, VkglTestCase_020616_2);

#define VkglTestCase_020617_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_020617_2 "query.uniform.location.unnamed_block.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020617, VkglTestCase_020617_1, VkglTestCase_020617_2);

#define VkglTestCase_020618_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_020618_2 "query.uniform.location.unnamed_block.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020618, VkglTestCase_020618_1, VkglTestCase_020618_2);

#define VkglTestCase_020619_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_020619_2 "query.uniform.location.unnamed_block.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020619, VkglTestCase_020619_1, VkglTestCase_020619_2);
