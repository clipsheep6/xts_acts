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

#define VkglTestCase_020834_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020834_2 "uery.uniform.name_length.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020834, VkglTestCase_020834_1, VkglTestCase_020834_2);

#define VkglTestCase_020835_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020835_2 "y.uniform.name_length.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020835, VkglTestCase_020835_1, VkglTestCase_020835_2);

#define VkglTestCase_020836_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020836_2 "y.uniform.name_length.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020836, VkglTestCase_020836_1, VkglTestCase_020836_2);
