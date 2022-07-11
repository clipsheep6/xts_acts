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

#define VkglTestCase_009708_1 "dEQP-GLES31.functional.ssbo.layout.single_nes"
#define VkglTestCase_009708_2 "ted_struct.single_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009708, VkglTestCase_009708_1, VkglTestCase_009708_2);

#define VkglTestCase_009709_1 "dEQP-GLES31.functional.ssbo.layout.single_nes"
#define VkglTestCase_009709_2 "ted_struct.single_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009709, VkglTestCase_009709_1, VkglTestCase_009709_2);

#define VkglTestCase_009710_1 "dEQP-GLES31.functional.ssbo.layout.single_nes"
#define VkglTestCase_009710_2 "ted_struct.single_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009710, VkglTestCase_009710_1, VkglTestCase_009710_2);

#define VkglTestCase_009711_1 "dEQP-GLES31.functional.ssbo.layout.single_nes"
#define VkglTestCase_009711_2 "ted_struct.single_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009711, VkglTestCase_009711_1, VkglTestCase_009711_2);
