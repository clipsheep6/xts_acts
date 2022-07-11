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

#define VkglTestCase_020455_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_020455_2 "_query.uniform.block_index.default_block"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020455, VkglTestCase_020455_1, VkglTestCase_020455_2);

#define VkglTestCase_020456_1 "dEQP-GLES31.functional.program_interfac"
#define VkglTestCase_020456_2 "e_query.uniform.block_index.named_block"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020456, VkglTestCase_020456_1, VkglTestCase_020456_2);

#define VkglTestCase_020457_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_020457_2 "_query.uniform.block_index.unnamed_block"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020457, VkglTestCase_020457_1, VkglTestCase_020457_2);

#define VkglTestCase_020458_1 "dEQP-GLES31.functional.program_interfac"
#define VkglTestCase_020458_2 "e_query.uniform.block_index.block_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020458, VkglTestCase_020458_1, VkglTestCase_020458_2);
