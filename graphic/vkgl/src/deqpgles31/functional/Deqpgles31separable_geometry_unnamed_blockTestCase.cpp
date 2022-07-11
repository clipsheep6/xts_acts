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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021106_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021106_2 "ferenced_by_shader.separable_geometry.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021106, VkglTestCase_021106_1, VkglTestCase_021106_2);

#define VkglTestCase_021107_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021107_2 "enced_by_shader.separable_geometry.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021107, VkglTestCase_021107_1, VkglTestCase_021107_2);

#define VkglTestCase_021108_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021108_2 "enced_by_shader.separable_geometry.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021108, VkglTestCase_021108_1, VkglTestCase_021108_2);

#define VkglTestCase_024240_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024240_2 "iable.referenced_by.separable_geometry.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024240, VkglTestCase_024240_1, VkglTestCase_024240_2);

#define VkglTestCase_024241_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024241_2 "le.referenced_by.separable_geometry.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024241, VkglTestCase_024241_1, VkglTestCase_024241_2);

#define VkglTestCase_024242_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024242_2 "e.referenced_by.separable_geometry.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024242, VkglTestCase_024242_1, VkglTestCase_024242_2);
