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

#define VkglTestCase_021059_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_021059_2 "eferenced_by_shader.separable_tess_ctrl.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021059, VkglTestCase_021059_1, VkglTestCase_021059_2);

#define VkglTestCase_021060_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021060_2 "renced_by_shader.separable_tess_ctrl.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021060, VkglTestCase_021060_1, VkglTestCase_021060_2);

#define VkglTestCase_021061_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021061_2 "enced_by_shader.separable_tess_ctrl.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021061, VkglTestCase_021061_1, VkglTestCase_021061_2);

#define VkglTestCase_024213_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024213_2 "iable.referenced_by.separable_tess_ctrl.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024213, VkglTestCase_024213_1, VkglTestCase_024213_2);

#define VkglTestCase_024214_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024214_2 "le.referenced_by.separable_tess_ctrl.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024214, VkglTestCase_024214_1, VkglTestCase_024214_2);

#define VkglTestCase_024215_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024215_2 "le.referenced_by.separable_tess_ctrl.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024215, VkglTestCase_024215_1, VkglTestCase_024215_2);
