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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016512_1 "dEQP-GLES31.functional.vertex_attribute"
#define VkglTestCase_016512_2 "_binding.usage.single_binding.elements_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016512, VkglTestCase_016512_1, VkglTestCase_016512_2);

#define VkglTestCase_016513_1 "dEQP-GLES31.functional.vertex_attribute"
#define VkglTestCase_016513_2 "_binding.usage.single_binding.elements_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016513, VkglTestCase_016513_1, VkglTestCase_016513_2);

#define VkglTestCase_016514_1 "dEQP-GLES31.functional.vertex_attribute_binding"
#define VkglTestCase_016514_2 ".usage.single_binding.elements_2_share_elements"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016514, VkglTestCase_016514_1, VkglTestCase_016514_2);

#define VkglTestCase_016515_1 "dEQP-GLES31.functional.vertex_attribute_bin"
#define VkglTestCase_016515_2 "ding.usage.single_binding.offset_elements_1"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016515, VkglTestCase_016515_1, VkglTestCase_016515_2);

#define VkglTestCase_016516_1 "dEQP-GLES31.functional.vertex_attribute_bin"
#define VkglTestCase_016516_2 "ding.usage.single_binding.offset_elements_2"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016516, VkglTestCase_016516_1, VkglTestCase_016516_2);

#define VkglTestCase_016517_1 "dEQP-GLES31.functional.vertex_attribute_binding.us"
#define VkglTestCase_016517_2 "age.single_binding.offset_elements_2_share_elements"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016517, VkglTestCase_016517_1, VkglTestCase_016517_2);

#define VkglTestCase_016518_1 "dEQP-GLES31.functional.vertex_attribute_binding.usage.si"
#define VkglTestCase_016518_2 "ngle_binding.unaligned_offset_elements_1_aligned_elements"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016518, VkglTestCase_016518_1, VkglTestCase_016518_2);
