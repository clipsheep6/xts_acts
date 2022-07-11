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

#define VkglTestCase_020252_1 "dEQP-GLES31.functional.program_interface"
#define VkglTestCase_020252_2 "_query.uniform.array_size.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020252, VkglTestCase_020252_1, VkglTestCase_020252_2);

#define VkglTestCase_020253_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020253_2 "ry.uniform.array_size.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020253, VkglTestCase_020253_1, VkglTestCase_020253_2);

#define VkglTestCase_020254_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020254_2 "uniform.array_size.block_array.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020254, VkglTestCase_020254_1, VkglTestCase_020254_2);

#define VkglTestCase_020255_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020255_2 "uniform.array_size.block_array.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020255, VkglTestCase_020255_1, VkglTestCase_020255_2);

#define VkglTestCase_020256_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020256_2 "ery.uniform.array_size.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020256, VkglTestCase_020256_1, VkglTestCase_020256_2);

#define VkglTestCase_020257_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020257_2 "uniform.array_size.block_array.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020257, VkglTestCase_020257_1, VkglTestCase_020257_2);

#define VkglTestCase_020258_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020258_2 ".uniform.array_size.block_array.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020258, VkglTestCase_020258_1, VkglTestCase_020258_2);
