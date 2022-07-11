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

#define VkglTestCase_024186_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024186_2 "riable.referenced_by.separable_fragment.named_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024186, VkglTestCase_024186_1, VkglTestCase_024186_2);

#define VkglTestCase_024187_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024187_2 "ble.referenced_by.separable_fragment.named_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024187, VkglTestCase_024187_1, VkglTestCase_024187_2);

#define VkglTestCase_024188_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024188_2 "le.referenced_by.separable_fragment.named_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024188, VkglTestCase_024188_1, VkglTestCase_024188_2);

#define VkglTestCase_024189_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024189_2 "referenced_by.separable_fragment.named_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024189, VkglTestCase_024189_1, VkglTestCase_024189_2);

#define VkglTestCase_024190_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024190_2 "referenced_by.separable_fragment.named_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024190, VkglTestCase_024190_1, VkglTestCase_024190_2);

#define VkglTestCase_024191_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024191_2 ".referenced_by.separable_fragment.named_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024191, VkglTestCase_024191_1, VkglTestCase_024191_2);

#define VkglTestCase_024192_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024192_2 "referenced_by.separable_fragment.named_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024192, VkglTestCase_024192_1, VkglTestCase_024192_2);

#define VkglTestCase_024193_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024193_2 "referenced_by.separable_fragment.named_block.float_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024193, VkglTestCase_024193_1, VkglTestCase_024193_2);

#define VkglTestCase_024194_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024194_2 "renced_by.separable_fragment.named_block.float_unsized_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024194, VkglTestCase_024194_1, VkglTestCase_024194_2);
