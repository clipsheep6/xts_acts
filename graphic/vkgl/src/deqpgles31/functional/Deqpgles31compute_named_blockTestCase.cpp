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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024156_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_024156_2 "er_variable.referenced_by.compute.named_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024156, VkglTestCase_024156_1, VkglTestCase_024156_2);

#define VkglTestCase_024157_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024157_2 "variable.referenced_by.compute.named_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024157, VkglTestCase_024157_1, VkglTestCase_024157_2);

#define VkglTestCase_024158_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024158_2 "variable.referenced_by.compute.named_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024158, VkglTestCase_024158_1, VkglTestCase_024158_2);

#define VkglTestCase_024159_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024159_2 "iable.referenced_by.compute.named_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024159, VkglTestCase_024159_1, VkglTestCase_024159_2);

#define VkglTestCase_024160_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024160_2 "iable.referenced_by.compute.named_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024160, VkglTestCase_024160_1, VkglTestCase_024160_2);

#define VkglTestCase_024161_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024161_2 "iable.referenced_by.compute.named_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024161, VkglTestCase_024161_1, VkglTestCase_024161_2);

#define VkglTestCase_024162_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024162_2 "able.referenced_by.compute.named_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024162, VkglTestCase_024162_1, VkglTestCase_024162_2);

#define VkglTestCase_024163_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024163_2 "able.referenced_by.compute.named_block.float_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024163, VkglTestCase_024163_1, VkglTestCase_024163_2);

#define VkglTestCase_024164_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024164_2 "e.referenced_by.compute.named_block.float_unsized_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024164, VkglTestCase_024164_1, VkglTestCase_024164_2);
