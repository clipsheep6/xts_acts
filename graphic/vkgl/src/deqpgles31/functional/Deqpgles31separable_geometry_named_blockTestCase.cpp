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

#define VkglTestCase_024231_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024231_2 "riable.referenced_by.separable_geometry.named_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024231, VkglTestCase_024231_1, VkglTestCase_024231_2);

#define VkglTestCase_024232_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024232_2 "ble.referenced_by.separable_geometry.named_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024232, VkglTestCase_024232_1, VkglTestCase_024232_2);

#define VkglTestCase_024233_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024233_2 "le.referenced_by.separable_geometry.named_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024233, VkglTestCase_024233_1, VkglTestCase_024233_2);

#define VkglTestCase_024234_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024234_2 "referenced_by.separable_geometry.named_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024234, VkglTestCase_024234_1, VkglTestCase_024234_2);

#define VkglTestCase_024235_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024235_2 "referenced_by.separable_geometry.named_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024235, VkglTestCase_024235_1, VkglTestCase_024235_2);

#define VkglTestCase_024236_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024236_2 ".referenced_by.separable_geometry.named_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024236, VkglTestCase_024236_1, VkglTestCase_024236_2);

#define VkglTestCase_024237_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024237_2 "referenced_by.separable_geometry.named_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024237, VkglTestCase_024237_1, VkglTestCase_024237_2);

#define VkglTestCase_024238_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024238_2 "referenced_by.separable_geometry.named_block.float_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024238, VkglTestCase_024238_1, VkglTestCase_024238_2);

#define VkglTestCase_024239_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024239_2 "renced_by.separable_geometry.named_block.float_unsized_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024239, VkglTestCase_024239_1, VkglTestCase_024239_2);
