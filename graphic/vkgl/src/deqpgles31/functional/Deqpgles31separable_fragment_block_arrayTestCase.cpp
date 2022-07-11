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

#define VkglTestCase_021034_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_021034_2 "eferenced_by_shader.separable_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021034, VkglTestCase_021034_1, VkglTestCase_021034_2);

#define VkglTestCase_021035_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021035_2 "renced_by_shader.separable_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021035, VkglTestCase_021035_1, VkglTestCase_021035_2);

#define VkglTestCase_021036_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021036_2 "renced_by_shader.separable_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021036, VkglTestCase_021036_1, VkglTestCase_021036_2);

#define VkglTestCase_024198_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024198_2 "riable.referenced_by.separable_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024198, VkglTestCase_024198_1, VkglTestCase_024198_2);

#define VkglTestCase_024199_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024199_2 "ble.referenced_by.separable_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024199, VkglTestCase_024199_1, VkglTestCase_024199_2);

#define VkglTestCase_024200_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024200_2 "le.referenced_by.separable_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024200, VkglTestCase_024200_1, VkglTestCase_024200_2);
