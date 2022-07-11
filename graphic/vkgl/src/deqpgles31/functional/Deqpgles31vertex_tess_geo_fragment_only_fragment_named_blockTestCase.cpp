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

#define VkglTestCase_024372_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024372_2 "erenced_by.vertex_tess_geo_fragment_only_fragment.named_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024372, VkglTestCase_024372_1, VkglTestCase_024372_2);

#define VkglTestCase_024373_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
#define VkglTestCase_024373_2 "nced_by.vertex_tess_geo_fragment_only_fragment.named_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024373, VkglTestCase_024373_1, VkglTestCase_024373_2);

#define VkglTestCase_024374_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referen"
#define VkglTestCase_024374_2 "ced_by.vertex_tess_geo_fragment_only_fragment.named_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024374, VkglTestCase_024374_1, VkglTestCase_024374_2);
