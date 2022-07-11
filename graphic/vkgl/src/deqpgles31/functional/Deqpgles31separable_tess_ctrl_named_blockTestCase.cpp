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

#define VkglTestCase_024201_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024201_2 "iable.referenced_by.separable_tess_ctrl.named_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024201, VkglTestCase_024201_1, VkglTestCase_024201_2);

#define VkglTestCase_024202_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024202_2 "le.referenced_by.separable_tess_ctrl.named_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024202, VkglTestCase_024202_1, VkglTestCase_024202_2);

#define VkglTestCase_024203_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024203_2 "le.referenced_by.separable_tess_ctrl.named_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024203, VkglTestCase_024203_1, VkglTestCase_024203_2);

#define VkglTestCase_024204_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024204_2 "referenced_by.separable_tess_ctrl.named_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024204, VkglTestCase_024204_1, VkglTestCase_024204_2);

#define VkglTestCase_024205_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024205_2 "referenced_by.separable_tess_ctrl.named_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024205, VkglTestCase_024205_1, VkglTestCase_024205_2);

#define VkglTestCase_024206_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024206_2 "referenced_by.separable_tess_ctrl.named_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024206, VkglTestCase_024206_1, VkglTestCase_024206_2);

#define VkglTestCase_024207_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024207_2 "eferenced_by.separable_tess_ctrl.named_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024207, VkglTestCase_024207_1, VkglTestCase_024207_2);

#define VkglTestCase_024208_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024208_2 "eferenced_by.separable_tess_ctrl.named_block.float_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024208, VkglTestCase_024208_1, VkglTestCase_024208_2);

#define VkglTestCase_024209_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024209_2 "renced_by.separable_tess_ctrl.named_block.float_unsized_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024209, VkglTestCase_024209_1, VkglTestCase_024209_2);
