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

#define VkglTestCase_024827_1 "dEQP-GLES31.functional.layout_bi"
#define VkglTestCase_024827_2 "nding.ssbo.vertex_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024827, VkglTestCase_024827_1, VkglTestCase_024827_2);

#define VkglTestCase_024828_1 "dEQP-GLES31.functional.layout_"
#define VkglTestCase_024828_2 "binding.ssbo.vertex_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024828, VkglTestCase_024828_1, VkglTestCase_024828_2);

#define VkglTestCase_024829_1 "dEQP-GLES31.functional.layout_bin"
#define VkglTestCase_024829_2 "ding.ssbo.vertex_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024829, VkglTestCase_024829_1, VkglTestCase_024829_2);

#define VkglTestCase_024830_1 "dEQP-GLES31.functional.layout_b"
#define VkglTestCase_024830_2 "inding.ssbo.vertex_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024830, VkglTestCase_024830_1, VkglTestCase_024830_2);

#define VkglTestCase_024831_1 "dEQP-GLES31.functional.layout_bin"
#define VkglTestCase_024831_2 "ding.ssbo.vertex_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024831, VkglTestCase_024831_1, VkglTestCase_024831_2);

#define VkglTestCase_024832_1 "dEQP-GLES31.functional.layout_bin"
#define VkglTestCase_024832_2 "ding.ssbo.fragment_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024832, VkglTestCase_024832_1, VkglTestCase_024832_2);

#define VkglTestCase_024833_1 "dEQP-GLES31.functional.layout_b"
#define VkglTestCase_024833_2 "inding.ssbo.fragment_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024833, VkglTestCase_024833_1, VkglTestCase_024833_2);

#define VkglTestCase_024834_1 "dEQP-GLES31.functional.layout_bind"
#define VkglTestCase_024834_2 "ing.ssbo.fragment_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024834, VkglTestCase_024834_1, VkglTestCase_024834_2);

#define VkglTestCase_024835_1 "dEQP-GLES31.functional.layout_bi"
#define VkglTestCase_024835_2 "nding.ssbo.fragment_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024835, VkglTestCase_024835_1, VkglTestCase_024835_2);

#define VkglTestCase_024836_1 "dEQP-GLES31.functional.layout_bind"
#define VkglTestCase_024836_2 "ing.ssbo.fragment_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024836, VkglTestCase_024836_1, VkglTestCase_024836_2);
