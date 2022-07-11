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

#define VkglTestCase_000491_1 "KHR-GLES31.core.shader_bitfiel"
#define VkglTestCase_000491_2 "d_operation.bitCount.uint_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000491, VkglTestCase_000491_1, VkglTestCase_000491_2);

#define VkglTestCase_000492_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000492_2 "eld_operation.bitCount.uint_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000492, VkglTestCase_000492_1, VkglTestCase_000492_2);

#define VkglTestCase_000493_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000493_2 "eld_operation.bitCount.uint_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000493, VkglTestCase_000493_1, VkglTestCase_000493_2);

#define VkglTestCase_000494_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000494_2 "eld_operation.bitCount.uint_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000494, VkglTestCase_000494_1, VkglTestCase_000494_2);

#define VkglTestCase_000495_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000495_2 "eld_operation.bitCount.uint_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000495, VkglTestCase_000495_1, VkglTestCase_000495_2);

#define VkglTestCase_000496_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000496_2 "ld_operation.bitCount.uvec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000496, VkglTestCase_000496_1, VkglTestCase_000496_2);

#define VkglTestCase_000497_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000497_2 "ld_operation.bitCount.uvec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000497, VkglTestCase_000497_1, VkglTestCase_000497_2);

#define VkglTestCase_000498_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000498_2 "ld_operation.bitCount.uvec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000498, VkglTestCase_000498_1, VkglTestCase_000498_2);

#define VkglTestCase_000499_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000499_2 "ld_operation.bitCount.uvec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000499, VkglTestCase_000499_1, VkglTestCase_000499_2);

#define VkglTestCase_000500_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000500_2 "ld_operation.bitCount.uvec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000500, VkglTestCase_000500_1, VkglTestCase_000500_2);

#define VkglTestCase_000501_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000501_2 "ld_operation.bitCount.uvec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000501, VkglTestCase_000501_1, VkglTestCase_000501_2);

#define VkglTestCase_000502_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000502_2 "ld_operation.bitCount.uvec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000502, VkglTestCase_000502_1, VkglTestCase_000502_2);

#define VkglTestCase_000503_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000503_2 "ld_operation.bitCount.uvec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000503, VkglTestCase_000503_1, VkglTestCase_000503_2);

#define VkglTestCase_000504_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000504_2 "ld_operation.bitCount.uvec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000504, VkglTestCase_000504_1, VkglTestCase_000504_2);

#define VkglTestCase_000505_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000505_2 "ld_operation.bitCount.uvec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000505, VkglTestCase_000505_1, VkglTestCase_000505_2);

#define VkglTestCase_000506_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000506_2 "ld_operation.bitCount.uvec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000506, VkglTestCase_000506_1, VkglTestCase_000506_2);

#define VkglTestCase_000507_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000507_2 "ld_operation.bitCount.uvec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000507, VkglTestCase_000507_1, VkglTestCase_000507_2);

#define VkglTestCase_000508_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000508_2 "ld_operation.bitCount.int_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000508, VkglTestCase_000508_1, VkglTestCase_000508_2);

#define VkglTestCase_000509_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000509_2 "operation.bitCount.int_minus_one"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000509, VkglTestCase_000509_1, VkglTestCase_000509_2);

#define VkglTestCase_000510_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000510_2 "eld_operation.bitCount.int_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000510, VkglTestCase_000510_1, VkglTestCase_000510_2);

#define VkglTestCase_000511_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000511_2 "eld_operation.bitCount.int_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000511, VkglTestCase_000511_1, VkglTestCase_000511_2);

#define VkglTestCase_000512_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000512_2 "eld_operation.bitCount.int_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000512, VkglTestCase_000512_1, VkglTestCase_000512_2);

#define VkglTestCase_000513_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000513_2 "eld_operation.bitCount.int_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000513, VkglTestCase_000513_1, VkglTestCase_000513_2);

#define VkglTestCase_000514_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000514_2 "ld_operation.bitCount.ivec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000514, VkglTestCase_000514_1, VkglTestCase_000514_2);

#define VkglTestCase_000515_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000515_2 "ld_operation.bitCount.ivec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000515, VkglTestCase_000515_1, VkglTestCase_000515_2);

#define VkglTestCase_000516_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000516_2 "ld_operation.bitCount.ivec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000516, VkglTestCase_000516_1, VkglTestCase_000516_2);

#define VkglTestCase_000517_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000517_2 "ld_operation.bitCount.ivec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000517, VkglTestCase_000517_1, VkglTestCase_000517_2);

#define VkglTestCase_000518_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000518_2 "ld_operation.bitCount.ivec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000518, VkglTestCase_000518_1, VkglTestCase_000518_2);

#define VkglTestCase_000519_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000519_2 "ld_operation.bitCount.ivec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000519, VkglTestCase_000519_1, VkglTestCase_000519_2);

#define VkglTestCase_000520_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000520_2 "ld_operation.bitCount.ivec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000520, VkglTestCase_000520_1, VkglTestCase_000520_2);

#define VkglTestCase_000521_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000521_2 "ld_operation.bitCount.ivec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000521, VkglTestCase_000521_1, VkglTestCase_000521_2);

#define VkglTestCase_000522_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000522_2 "ld_operation.bitCount.ivec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000522, VkglTestCase_000522_1, VkglTestCase_000522_2);

#define VkglTestCase_000523_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000523_2 "ld_operation.bitCount.ivec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000523, VkglTestCase_000523_1, VkglTestCase_000523_2);

#define VkglTestCase_000524_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000524_2 "ld_operation.bitCount.ivec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000524, VkglTestCase_000524_1, VkglTestCase_000524_2);

#define VkglTestCase_000525_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000525_2 "ld_operation.bitCount.ivec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000525, VkglTestCase_000525_1, VkglTestCase_000525_2);
