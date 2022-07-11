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
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000596_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000596_2 "ld_operation.uaddCarry.uint_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000596, VkglTestCase_000596_1, VkglTestCase_000596_2);

#define VkglTestCase_000597_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000597_2 "ld_operation.uaddCarry.uint_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000597, VkglTestCase_000597_1, VkglTestCase_000597_2);

#define VkglTestCase_000598_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000598_2 "ld_operation.uaddCarry.uint_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000598, VkglTestCase_000598_1, VkglTestCase_000598_2);

#define VkglTestCase_000599_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000599_2 "ld_operation.uaddCarry.uint_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000599, VkglTestCase_000599_1, VkglTestCase_000599_2);

#define VkglTestCase_000600_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000600_2 "ld_operation.uaddCarry.uvec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000600, VkglTestCase_000600_1, VkglTestCase_000600_2);

#define VkglTestCase_000601_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000601_2 "ld_operation.uaddCarry.uvec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000601, VkglTestCase_000601_1, VkglTestCase_000601_2);

#define VkglTestCase_000602_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000602_2 "ld_operation.uaddCarry.uvec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000602, VkglTestCase_000602_1, VkglTestCase_000602_2);

#define VkglTestCase_000603_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000603_2 "ld_operation.uaddCarry.uvec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000603, VkglTestCase_000603_1, VkglTestCase_000603_2);

#define VkglTestCase_000604_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000604_2 "ld_operation.uaddCarry.uvec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000604, VkglTestCase_000604_1, VkglTestCase_000604_2);

#define VkglTestCase_000605_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000605_2 "ld_operation.uaddCarry.uvec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000605, VkglTestCase_000605_1, VkglTestCase_000605_2);

#define VkglTestCase_000606_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000606_2 "ld_operation.uaddCarry.uvec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000606, VkglTestCase_000606_1, VkglTestCase_000606_2);

#define VkglTestCase_000607_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000607_2 "ld_operation.uaddCarry.uvec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000607, VkglTestCase_000607_1, VkglTestCase_000607_2);

#define VkglTestCase_000608_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000608_2 "ld_operation.uaddCarry.uvec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000608, VkglTestCase_000608_1, VkglTestCase_000608_2);

#define VkglTestCase_000609_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000609_2 "ld_operation.uaddCarry.uvec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000609, VkglTestCase_000609_1, VkglTestCase_000609_2);

#define VkglTestCase_000610_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000610_2 "ld_operation.uaddCarry.uvec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000610, VkglTestCase_000610_1, VkglTestCase_000610_2);

#define VkglTestCase_000611_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000611_2 "ld_operation.uaddCarry.uvec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000611, VkglTestCase_000611_1, VkglTestCase_000611_2);
