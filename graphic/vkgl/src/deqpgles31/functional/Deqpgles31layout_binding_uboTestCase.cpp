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

#define VkglTestCase_024817_1 "dEQP-GLES31.functional.layout_b"
#define VkglTestCase_024817_2 "inding.ubo.vertex_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024817, VkglTestCase_024817_1, VkglTestCase_024817_2);

#define VkglTestCase_024818_1 "dEQP-GLES31.functional.layout_"
#define VkglTestCase_024818_2 "binding.ubo.vertex_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024818, VkglTestCase_024818_1, VkglTestCase_024818_2);

#define VkglTestCase_024819_1 "dEQP-GLES31.functional.layout_bi"
#define VkglTestCase_024819_2 "nding.ubo.vertex_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024819, VkglTestCase_024819_1, VkglTestCase_024819_2);

#define VkglTestCase_024820_1 "dEQP-GLES31.functional.layout_b"
#define VkglTestCase_024820_2 "inding.ubo.vertex_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024820, VkglTestCase_024820_1, VkglTestCase_024820_2);

#define VkglTestCase_024821_1 "dEQP-GLES31.functional.layout_bin"
#define VkglTestCase_024821_2 "ding.ubo.vertex_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024821, VkglTestCase_024821_1, VkglTestCase_024821_2);

#define VkglTestCase_024822_1 "dEQP-GLES31.functional.layout_bi"
#define VkglTestCase_024822_2 "nding.ubo.fragment_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024822, VkglTestCase_024822_1, VkglTestCase_024822_2);

#define VkglTestCase_024823_1 "dEQP-GLES31.functional.layout_b"
#define VkglTestCase_024823_2 "inding.ubo.fragment_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024823, VkglTestCase_024823_1, VkglTestCase_024823_2);

#define VkglTestCase_024824_1 "dEQP-GLES31.functional.layout_bin"
#define VkglTestCase_024824_2 "ding.ubo.fragment_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024824, VkglTestCase_024824_1, VkglTestCase_024824_2);

#define VkglTestCase_024825_1 "dEQP-GLES31.functional.layout_bi"
#define VkglTestCase_024825_2 "nding.ubo.fragment_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024825, VkglTestCase_024825_1, VkglTestCase_024825_2);

#define VkglTestCase_024826_1 "dEQP-GLES31.functional.layout_bind"
#define VkglTestCase_024826_2 "ing.ubo.fragment_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024826, VkglTestCase_024826_1, VkglTestCase_024826_2);
