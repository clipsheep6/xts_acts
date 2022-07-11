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

#define VkglTestCase_020245_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_020245_2 "query.uniform.array_size.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020245, VkglTestCase_020245_1, VkglTestCase_020245_2);

#define VkglTestCase_020246_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020246_2 "y.uniform.array_size.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020246, VkglTestCase_020246_1, VkglTestCase_020246_2);

#define VkglTestCase_020247_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020247_2 "niform.array_size.unnamed_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020247, VkglTestCase_020247_1, VkglTestCase_020247_2);

#define VkglTestCase_020248_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020248_2 "niform.array_size.unnamed_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020248, VkglTestCase_020248_1, VkglTestCase_020248_2);

#define VkglTestCase_020249_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020249_2 "ry.uniform.array_size.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020249, VkglTestCase_020249_1, VkglTestCase_020249_2);

#define VkglTestCase_020250_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020250_2 "niform.array_size.unnamed_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020250, VkglTestCase_020250_1, VkglTestCase_020250_2);

#define VkglTestCase_020251_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020251_2 "uniform.array_size.unnamed_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020251, VkglTestCase_020251_1, VkglTestCase_020251_2);
