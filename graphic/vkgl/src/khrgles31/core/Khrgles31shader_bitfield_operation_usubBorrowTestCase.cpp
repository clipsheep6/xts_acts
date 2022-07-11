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

#define VkglTestCase_000612_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000612_2 "ld_operation.usubBorrow.uint_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000612, VkglTestCase_000612_1, VkglTestCase_000612_2);

#define VkglTestCase_000613_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000613_2 "ld_operation.usubBorrow.uint_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000613, VkglTestCase_000613_1, VkglTestCase_000613_2);

#define VkglTestCase_000614_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000614_2 "ld_operation.usubBorrow.uint_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000614, VkglTestCase_000614_1, VkglTestCase_000614_2);

#define VkglTestCase_000615_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000615_2 "ld_operation.usubBorrow.uint_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000615, VkglTestCase_000615_1, VkglTestCase_000615_2);

#define VkglTestCase_000616_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000616_2 "d_operation.usubBorrow.uvec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000616, VkglTestCase_000616_1, VkglTestCase_000616_2);

#define VkglTestCase_000617_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000617_2 "d_operation.usubBorrow.uvec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000617, VkglTestCase_000617_1, VkglTestCase_000617_2);

#define VkglTestCase_000618_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000618_2 "d_operation.usubBorrow.uvec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000618, VkglTestCase_000618_1, VkglTestCase_000618_2);

#define VkglTestCase_000619_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000619_2 "d_operation.usubBorrow.uvec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000619, VkglTestCase_000619_1, VkglTestCase_000619_2);

#define VkglTestCase_000620_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000620_2 "d_operation.usubBorrow.uvec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000620, VkglTestCase_000620_1, VkglTestCase_000620_2);

#define VkglTestCase_000621_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000621_2 "d_operation.usubBorrow.uvec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000621, VkglTestCase_000621_1, VkglTestCase_000621_2);

#define VkglTestCase_000622_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000622_2 "d_operation.usubBorrow.uvec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000622, VkglTestCase_000622_1, VkglTestCase_000622_2);

#define VkglTestCase_000623_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000623_2 "d_operation.usubBorrow.uvec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000623, VkglTestCase_000623_1, VkglTestCase_000623_2);

#define VkglTestCase_000624_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000624_2 "d_operation.usubBorrow.uvec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000624, VkglTestCase_000624_1, VkglTestCase_000624_2);

#define VkglTestCase_000625_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000625_2 "d_operation.usubBorrow.uvec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000625, VkglTestCase_000625_1, VkglTestCase_000625_2);

#define VkglTestCase_000626_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000626_2 "d_operation.usubBorrow.uvec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000626, VkglTestCase_000626_1, VkglTestCase_000626_2);

#define VkglTestCase_000627_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000627_2 "d_operation.usubBorrow.uvec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000627, VkglTestCase_000627_1, VkglTestCase_000627_2);
