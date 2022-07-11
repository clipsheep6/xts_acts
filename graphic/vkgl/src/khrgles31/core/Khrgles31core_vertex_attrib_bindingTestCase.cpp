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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001813_1 "KHR-GLES31.core.vertex_a"
#define VkglTestCase_001813_2 "ttrib_binding.basic-usage"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001813, VkglTestCase_001813_1, VkglTestCase_001813_2);

#define VkglTestCase_001814_1 "KHR-GLES31.core.vertex_attr"
#define VkglTestCase_001814_2 "ib_binding.basic-input-case1"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001814, VkglTestCase_001814_1, VkglTestCase_001814_2);

#define VkglTestCase_001815_1 "KHR-GLES31.core.vertex_attr"
#define VkglTestCase_001815_2 "ib_binding.basic-input-case2"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001815, VkglTestCase_001815_1, VkglTestCase_001815_2);

#define VkglTestCase_001816_1 "KHR-GLES31.core.vertex_attr"
#define VkglTestCase_001816_2 "ib_binding.basic-input-case3"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001816, VkglTestCase_001816_1, VkglTestCase_001816_2);

#define VkglTestCase_001817_1 "KHR-GLES31.core.vertex_attr"
#define VkglTestCase_001817_2 "ib_binding.basic-input-case4"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001817, VkglTestCase_001817_1, VkglTestCase_001817_2);

#define VkglTestCase_001818_1 "KHR-GLES31.core.vertex_attr"
#define VkglTestCase_001818_2 "ib_binding.basic-input-case5"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001818, VkglTestCase_001818_1, VkglTestCase_001818_2);

#define VkglTestCase_001819_1 "KHR-GLES31.core.vertex_attr"
#define VkglTestCase_001819_2 "ib_binding.basic-input-case6"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001819, VkglTestCase_001819_1, VkglTestCase_001819_2);

#define VkglTestCase_001820_1 "KHR-GLES31.core.vertex_attr"
#define VkglTestCase_001820_2 "ib_binding.basic-input-case8"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001820, VkglTestCase_001820_1, VkglTestCase_001820_2);

#define VkglTestCase_001821_1 "KHR-GLES31.core.vertex_attr"
#define VkglTestCase_001821_2 "ib_binding.basic-input-case9"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001821, VkglTestCase_001821_1, VkglTestCase_001821_2);

#define VkglTestCase_001822_1 "KHR-GLES31.core.vertex_attri"
#define VkglTestCase_001822_2 "b_binding.basic-input-case11"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001822, VkglTestCase_001822_1, VkglTestCase_001822_2);

#define VkglTestCase_001823_1 "KHR-GLES31.core.vertex_attri"
#define VkglTestCase_001823_2 "b_binding.basic-input-case12"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001823, VkglTestCase_001823_1, VkglTestCase_001823_2);

#define VkglTestCase_001824_1 "KHR-GLES31.core.vertex_attri"
#define VkglTestCase_001824_2 "b_binding.basic-inputI-case1"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001824, VkglTestCase_001824_1, VkglTestCase_001824_2);

#define VkglTestCase_001825_1 "KHR-GLES31.core.vertex_attri"
#define VkglTestCase_001825_2 "b_binding.basic-inputI-case2"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001825, VkglTestCase_001825_1, VkglTestCase_001825_2);

#define VkglTestCase_001826_1 "KHR-GLES31.core.vertex_attri"
#define VkglTestCase_001826_2 "b_binding.basic-inputI-case3"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001826, VkglTestCase_001826_1, VkglTestCase_001826_2);

#define VkglTestCase_001827_1 "KHR-GLES31.core.vertex_at"
#define VkglTestCase_001827_2 "trib_binding.basic-state1"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001827, VkglTestCase_001827_1, VkglTestCase_001827_2);

#define VkglTestCase_001828_1 "KHR-GLES31.core.vertex_at"
#define VkglTestCase_001828_2 "trib_binding.basic-state2"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001828, VkglTestCase_001828_1, VkglTestCase_001828_2);

#define VkglTestCase_001829_1 "KHR-GLES31.core.vertex_attrib_"
#define VkglTestCase_001829_2 "binding.advanced-bindingUpdate"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001829, VkglTestCase_001829_1, VkglTestCase_001829_2);

#define VkglTestCase_001830_1 "KHR-GLES31.core.vertex_attri"
#define VkglTestCase_001830_2 "b_binding.advanced-iterations"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001830, VkglTestCase_001830_1, VkglTestCase_001830_2);

#define VkglTestCase_001831_1 "KHR-GLES31.core.vertex_attrib_binding.adv"
#define VkglTestCase_001831_2 "anced-largeStrideAndOffsetsNewAndLegacyAPI"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001831, VkglTestCase_001831_1, VkglTestCase_001831_2);

#define VkglTestCase_001832_1 "KHR-GLES31.core.vertex_attrib_b"
#define VkglTestCase_001832_2 "inding.negative-bindVertexBuffer"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001832, VkglTestCase_001832_1, VkglTestCase_001832_2);

#define VkglTestCase_001833_1 "KHR-GLES31.core.vertex_attrib_bi"
#define VkglTestCase_001833_2 "nding.negative-vertexAttribFormat"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001833, VkglTestCase_001833_1, VkglTestCase_001833_2);

#define VkglTestCase_001834_1 "KHR-GLES31.core.vertex_attrib_bin"
#define VkglTestCase_001834_2 "ding.negative-vertexAttribBinding"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001834, VkglTestCase_001834_1, VkglTestCase_001834_2);

#define VkglTestCase_001835_1 "KHR-GLES31.core.vertex_attrib_bin"
#define VkglTestCase_001835_2 "ding.negative-vertexAttribDivisor"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001835, VkglTestCase_001835_1, VkglTestCase_001835_2);
