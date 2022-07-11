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

#define VkglTestCase_024246_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024246_2 "ariable.referenced_by.vertex_fragment.named_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024246, VkglTestCase_024246_1, VkglTestCase_024246_2);

#define VkglTestCase_024247_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024247_2 "able.referenced_by.vertex_fragment.named_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024247, VkglTestCase_024247_1, VkglTestCase_024247_2);

#define VkglTestCase_024248_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024248_2 "able.referenced_by.vertex_fragment.named_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024248, VkglTestCase_024248_1, VkglTestCase_024248_2);
