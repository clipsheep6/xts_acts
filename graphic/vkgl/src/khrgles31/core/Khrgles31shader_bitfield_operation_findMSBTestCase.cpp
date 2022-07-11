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

#define VkglTestCase_000561_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000561_2 "ld_operation.findMSB.uint_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000561, VkglTestCase_000561_1, VkglTestCase_000561_2);

#define VkglTestCase_000562_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000562_2 "eld_operation.findMSB.uint_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000562, VkglTestCase_000562_1, VkglTestCase_000562_2);

#define VkglTestCase_000563_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000563_2 "eld_operation.findMSB.uint_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000563, VkglTestCase_000563_1, VkglTestCase_000563_2);

#define VkglTestCase_000564_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000564_2 "eld_operation.findMSB.uint_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000564, VkglTestCase_000564_1, VkglTestCase_000564_2);

#define VkglTestCase_000565_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000565_2 "eld_operation.findMSB.uint_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000565, VkglTestCase_000565_1, VkglTestCase_000565_2);

#define VkglTestCase_000566_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000566_2 "eld_operation.findMSB.uvec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000566, VkglTestCase_000566_1, VkglTestCase_000566_2);

#define VkglTestCase_000567_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000567_2 "eld_operation.findMSB.uvec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000567, VkglTestCase_000567_1, VkglTestCase_000567_2);

#define VkglTestCase_000568_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000568_2 "eld_operation.findMSB.uvec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000568, VkglTestCase_000568_1, VkglTestCase_000568_2);

#define VkglTestCase_000569_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000569_2 "eld_operation.findMSB.uvec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000569, VkglTestCase_000569_1, VkglTestCase_000569_2);

#define VkglTestCase_000570_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000570_2 "eld_operation.findMSB.uvec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000570, VkglTestCase_000570_1, VkglTestCase_000570_2);

#define VkglTestCase_000571_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000571_2 "eld_operation.findMSB.uvec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000571, VkglTestCase_000571_1, VkglTestCase_000571_2);

#define VkglTestCase_000572_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000572_2 "eld_operation.findMSB.uvec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000572, VkglTestCase_000572_1, VkglTestCase_000572_2);

#define VkglTestCase_000573_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000573_2 "eld_operation.findMSB.uvec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000573, VkglTestCase_000573_1, VkglTestCase_000573_2);

#define VkglTestCase_000574_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000574_2 "eld_operation.findMSB.uvec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000574, VkglTestCase_000574_1, VkglTestCase_000574_2);

#define VkglTestCase_000575_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000575_2 "eld_operation.findMSB.uvec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000575, VkglTestCase_000575_1, VkglTestCase_000575_2);

#define VkglTestCase_000576_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000576_2 "eld_operation.findMSB.uvec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000576, VkglTestCase_000576_1, VkglTestCase_000576_2);

#define VkglTestCase_000577_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000577_2 "eld_operation.findMSB.uvec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000577, VkglTestCase_000577_1, VkglTestCase_000577_2);

#define VkglTestCase_000578_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000578_2 "ld_operation.findMSB.int_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000578, VkglTestCase_000578_1, VkglTestCase_000578_2);

#define VkglTestCase_000579_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000579_2 "_operation.findMSB.int_minus_one"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000579, VkglTestCase_000579_1, VkglTestCase_000579_2);

#define VkglTestCase_000580_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000580_2 "ield_operation.findMSB.int_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000580, VkglTestCase_000580_1, VkglTestCase_000580_2);

#define VkglTestCase_000581_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000581_2 "ield_operation.findMSB.int_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000581, VkglTestCase_000581_1, VkglTestCase_000581_2);

#define VkglTestCase_000582_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000582_2 "ield_operation.findMSB.int_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000582, VkglTestCase_000582_1, VkglTestCase_000582_2);

#define VkglTestCase_000583_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000583_2 "ield_operation.findMSB.int_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000583, VkglTestCase_000583_1, VkglTestCase_000583_2);

#define VkglTestCase_000584_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000584_2 "eld_operation.findMSB.ivec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000584, VkglTestCase_000584_1, VkglTestCase_000584_2);

#define VkglTestCase_000585_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000585_2 "eld_operation.findMSB.ivec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000585, VkglTestCase_000585_1, VkglTestCase_000585_2);

#define VkglTestCase_000586_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000586_2 "eld_operation.findMSB.ivec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000586, VkglTestCase_000586_1, VkglTestCase_000586_2);

#define VkglTestCase_000587_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000587_2 "eld_operation.findMSB.ivec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000587, VkglTestCase_000587_1, VkglTestCase_000587_2);

#define VkglTestCase_000588_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000588_2 "eld_operation.findMSB.ivec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000588, VkglTestCase_000588_1, VkglTestCase_000588_2);

#define VkglTestCase_000589_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000589_2 "eld_operation.findMSB.ivec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000589, VkglTestCase_000589_1, VkglTestCase_000589_2);

#define VkglTestCase_000590_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000590_2 "eld_operation.findMSB.ivec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000590, VkglTestCase_000590_1, VkglTestCase_000590_2);

#define VkglTestCase_000591_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000591_2 "eld_operation.findMSB.ivec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000591, VkglTestCase_000591_1, VkglTestCase_000591_2);

#define VkglTestCase_000592_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000592_2 "eld_operation.findMSB.ivec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000592, VkglTestCase_000592_1, VkglTestCase_000592_2);

#define VkglTestCase_000593_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000593_2 "eld_operation.findMSB.ivec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000593, VkglTestCase_000593_1, VkglTestCase_000593_2);

#define VkglTestCase_000594_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000594_2 "eld_operation.findMSB.ivec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000594, VkglTestCase_000594_1, VkglTestCase_000594_2);

#define VkglTestCase_000595_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000595_2 "eld_operation.findMSB.ivec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000595, VkglTestCase_000595_1, VkglTestCase_000595_2);
