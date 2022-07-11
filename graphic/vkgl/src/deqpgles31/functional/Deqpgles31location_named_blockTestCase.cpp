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

#define VkglTestCase_020608_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_020608_2 "_query.uniform.location.named_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020608, VkglTestCase_020608_1, VkglTestCase_020608_2);

#define VkglTestCase_020609_1 "dEQP-GLES31.functional.program_interfac"
#define VkglTestCase_020609_2 "e_query.uniform.location.named_block.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020609, VkglTestCase_020609_1, VkglTestCase_020609_2);

#define VkglTestCase_020610_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_020610_2 "_query.uniform.location.named_block.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020610, VkglTestCase_020610_1, VkglTestCase_020610_2);

#define VkglTestCase_020611_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_020611_2 "_query.uniform.location.named_block.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020611, VkglTestCase_020611_1, VkglTestCase_020611_2);

#define VkglTestCase_020612_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_020612_2 "_query.uniform.location.named_block.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020612, VkglTestCase_020612_1, VkglTestCase_020612_2);

#define VkglTestCase_020613_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_020613_2 "_query.uniform.location.named_block.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020613, VkglTestCase_020613_1, VkglTestCase_020613_2);
