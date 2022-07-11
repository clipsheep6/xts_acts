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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009720_1 "dEQP-GLES31.functional.ssbo.layout.single_nested"
#define VkglTestCase_009720_2 "_struct_array.single_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009720, VkglTestCase_009720_1, VkglTestCase_009720_2);

#define VkglTestCase_009721_1 "dEQP-GLES31.functional.ssbo.layout.single_nested"
#define VkglTestCase_009721_2 "_struct_array.single_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009721, VkglTestCase_009721_1, VkglTestCase_009721_2);

#define VkglTestCase_009722_1 "dEQP-GLES31.functional.ssbo.layout.single_nested"
#define VkglTestCase_009722_2 "_struct_array.single_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009722, VkglTestCase_009722_1, VkglTestCase_009722_2);

#define VkglTestCase_009723_1 "dEQP-GLES31.functional.ssbo.layout.single_nested"
#define VkglTestCase_009723_2 "_struct_array.single_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009723, VkglTestCase_009723_1, VkglTestCase_009723_2);
