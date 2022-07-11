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

#define VkglTestCase_000526_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000526_2 "ld_operation.findLSB.uint_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000526, VkglTestCase_000526_1, VkglTestCase_000526_2);

#define VkglTestCase_000527_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000527_2 "eld_operation.findLSB.uint_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000527, VkglTestCase_000527_1, VkglTestCase_000527_2);

#define VkglTestCase_000528_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000528_2 "eld_operation.findLSB.uint_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000528, VkglTestCase_000528_1, VkglTestCase_000528_2);

#define VkglTestCase_000529_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000529_2 "eld_operation.findLSB.uint_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000529, VkglTestCase_000529_1, VkglTestCase_000529_2);

#define VkglTestCase_000530_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000530_2 "eld_operation.findLSB.uint_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000530, VkglTestCase_000530_1, VkglTestCase_000530_2);

#define VkglTestCase_000531_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000531_2 "eld_operation.findLSB.uvec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000531, VkglTestCase_000531_1, VkglTestCase_000531_2);

#define VkglTestCase_000532_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000532_2 "eld_operation.findLSB.uvec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000532, VkglTestCase_000532_1, VkglTestCase_000532_2);

#define VkglTestCase_000533_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000533_2 "eld_operation.findLSB.uvec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000533, VkglTestCase_000533_1, VkglTestCase_000533_2);

#define VkglTestCase_000534_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000534_2 "eld_operation.findLSB.uvec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000534, VkglTestCase_000534_1, VkglTestCase_000534_2);

#define VkglTestCase_000535_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000535_2 "eld_operation.findLSB.uvec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000535, VkglTestCase_000535_1, VkglTestCase_000535_2);

#define VkglTestCase_000536_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000536_2 "eld_operation.findLSB.uvec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000536, VkglTestCase_000536_1, VkglTestCase_000536_2);

#define VkglTestCase_000537_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000537_2 "eld_operation.findLSB.uvec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000537, VkglTestCase_000537_1, VkglTestCase_000537_2);

#define VkglTestCase_000538_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000538_2 "eld_operation.findLSB.uvec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000538, VkglTestCase_000538_1, VkglTestCase_000538_2);

#define VkglTestCase_000539_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000539_2 "eld_operation.findLSB.uvec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000539, VkglTestCase_000539_1, VkglTestCase_000539_2);

#define VkglTestCase_000540_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000540_2 "eld_operation.findLSB.uvec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000540, VkglTestCase_000540_1, VkglTestCase_000540_2);

#define VkglTestCase_000541_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000541_2 "eld_operation.findLSB.uvec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000541, VkglTestCase_000541_1, VkglTestCase_000541_2);

#define VkglTestCase_000542_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000542_2 "eld_operation.findLSB.uvec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000542, VkglTestCase_000542_1, VkglTestCase_000542_2);

#define VkglTestCase_000543_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000543_2 "ld_operation.findLSB.int_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000543, VkglTestCase_000543_1, VkglTestCase_000543_2);

#define VkglTestCase_000544_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000544_2 "_operation.findLSB.int_minus_one"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000544, VkglTestCase_000544_1, VkglTestCase_000544_2);

#define VkglTestCase_000545_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000545_2 "ield_operation.findLSB.int_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000545, VkglTestCase_000545_1, VkglTestCase_000545_2);

#define VkglTestCase_000546_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000546_2 "ield_operation.findLSB.int_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000546, VkglTestCase_000546_1, VkglTestCase_000546_2);

#define VkglTestCase_000547_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000547_2 "ield_operation.findLSB.int_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000547, VkglTestCase_000547_1, VkglTestCase_000547_2);

#define VkglTestCase_000548_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000548_2 "ield_operation.findLSB.int_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000548, VkglTestCase_000548_1, VkglTestCase_000548_2);

#define VkglTestCase_000549_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000549_2 "eld_operation.findLSB.ivec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000549, VkglTestCase_000549_1, VkglTestCase_000549_2);

#define VkglTestCase_000550_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000550_2 "eld_operation.findLSB.ivec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000550, VkglTestCase_000550_1, VkglTestCase_000550_2);

#define VkglTestCase_000551_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000551_2 "eld_operation.findLSB.ivec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000551, VkglTestCase_000551_1, VkglTestCase_000551_2);

#define VkglTestCase_000552_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000552_2 "eld_operation.findLSB.ivec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000552, VkglTestCase_000552_1, VkglTestCase_000552_2);

#define VkglTestCase_000553_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000553_2 "eld_operation.findLSB.ivec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000553, VkglTestCase_000553_1, VkglTestCase_000553_2);

#define VkglTestCase_000554_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000554_2 "eld_operation.findLSB.ivec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000554, VkglTestCase_000554_1, VkglTestCase_000554_2);

#define VkglTestCase_000555_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000555_2 "eld_operation.findLSB.ivec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000555, VkglTestCase_000555_1, VkglTestCase_000555_2);

#define VkglTestCase_000556_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000556_2 "eld_operation.findLSB.ivec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000556, VkglTestCase_000556_1, VkglTestCase_000556_2);

#define VkglTestCase_000557_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000557_2 "eld_operation.findLSB.ivec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000557, VkglTestCase_000557_1, VkglTestCase_000557_2);

#define VkglTestCase_000558_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000558_2 "eld_operation.findLSB.ivec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000558, VkglTestCase_000558_1, VkglTestCase_000558_2);

#define VkglTestCase_000559_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000559_2 "eld_operation.findLSB.ivec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000559, VkglTestCase_000559_1, VkglTestCase_000559_2);

#define VkglTestCase_000560_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000560_2 "eld_operation.findLSB.ivec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000560, VkglTestCase_000560_1, VkglTestCase_000560_2);
