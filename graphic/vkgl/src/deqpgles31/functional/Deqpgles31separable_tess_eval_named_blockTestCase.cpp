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

#define VkglTestCase_024216_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024216_2 "iable.referenced_by.separable_tess_eval.named_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024216, VkglTestCase_024216_1, VkglTestCase_024216_2);

#define VkglTestCase_024217_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024217_2 "le.referenced_by.separable_tess_eval.named_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024217, VkglTestCase_024217_1, VkglTestCase_024217_2);

#define VkglTestCase_024218_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024218_2 "le.referenced_by.separable_tess_eval.named_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024218, VkglTestCase_024218_1, VkglTestCase_024218_2);

#define VkglTestCase_024219_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024219_2 "referenced_by.separable_tess_eval.named_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024219, VkglTestCase_024219_1, VkglTestCase_024219_2);

#define VkglTestCase_024220_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024220_2 "referenced_by.separable_tess_eval.named_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024220, VkglTestCase_024220_1, VkglTestCase_024220_2);

#define VkglTestCase_024221_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024221_2 "referenced_by.separable_tess_eval.named_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024221, VkglTestCase_024221_1, VkglTestCase_024221_2);

#define VkglTestCase_024222_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024222_2 "eferenced_by.separable_tess_eval.named_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024222, VkglTestCase_024222_1, VkglTestCase_024222_2);

#define VkglTestCase_024223_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024223_2 "eferenced_by.separable_tess_eval.named_block.float_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024223, VkglTestCase_024223_1, VkglTestCase_024223_2);

#define VkglTestCase_024224_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024224_2 "renced_by.separable_tess_eval.named_block.float_unsized_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024224, VkglTestCase_024224_1, VkglTestCase_024224_2);
