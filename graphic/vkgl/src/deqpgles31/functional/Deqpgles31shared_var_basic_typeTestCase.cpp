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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007551_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007551_2 "shared_var.basic_type.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007551, VkglTestCase_007551_1, VkglTestCase_007551_2);

#define VkglTestCase_007552_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007552_2 "ared_var.basic_type.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007552, VkglTestCase_007552_1, VkglTestCase_007552_2);

#define VkglTestCase_007553_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007553_2 "hared_var.basic_type.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007553, VkglTestCase_007553_1, VkglTestCase_007553_2);

#define VkglTestCase_007554_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007554_2 "shared_var.basic_type.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007554, VkglTestCase_007554_1, VkglTestCase_007554_2);

#define VkglTestCase_007555_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007555_2 "hared_var.basic_type.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007555, VkglTestCase_007555_1, VkglTestCase_007555_2);

#define VkglTestCase_007556_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007556_2 "shared_var.basic_type.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007556, VkglTestCase_007556_1, VkglTestCase_007556_2);

#define VkglTestCase_007557_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007557_2 "shared_var.basic_type.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007557, VkglTestCase_007557_1, VkglTestCase_007557_2);

#define VkglTestCase_007558_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007558_2 "hared_var.basic_type.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007558, VkglTestCase_007558_1, VkglTestCase_007558_2);

#define VkglTestCase_007559_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007559_2 "shared_var.basic_type.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007559, VkglTestCase_007559_1, VkglTestCase_007559_2);

#define VkglTestCase_007560_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007560_2 "shared_var.basic_type.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007560, VkglTestCase_007560_1, VkglTestCase_007560_2);

#define VkglTestCase_007561_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007561_2 "hared_var.basic_type.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007561, VkglTestCase_007561_1, VkglTestCase_007561_2);

#define VkglTestCase_007562_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007562_2 "shared_var.basic_type.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007562, VkglTestCase_007562_1, VkglTestCase_007562_2);

#define VkglTestCase_007563_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007563_2 "shared_var.basic_type.mat2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007563, VkglTestCase_007563_1, VkglTestCase_007563_2);

#define VkglTestCase_007564_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007564_2 "hared_var.basic_type.mat2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007564, VkglTestCase_007564_1, VkglTestCase_007564_2);

#define VkglTestCase_007565_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007565_2 "shared_var.basic_type.mat2_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007565, VkglTestCase_007565_1, VkglTestCase_007565_2);

#define VkglTestCase_007566_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007566_2 "hared_var.basic_type.mat2x3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007566, VkglTestCase_007566_1, VkglTestCase_007566_2);

#define VkglTestCase_007567_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007567_2 "ared_var.basic_type.mat2x3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007567, VkglTestCase_007567_1, VkglTestCase_007567_2);

#define VkglTestCase_007568_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007568_2 "hared_var.basic_type.mat2x3_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007568, VkglTestCase_007568_1, VkglTestCase_007568_2);

#define VkglTestCase_007569_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007569_2 "hared_var.basic_type.mat2x4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007569, VkglTestCase_007569_1, VkglTestCase_007569_2);

#define VkglTestCase_007570_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007570_2 "ared_var.basic_type.mat2x4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007570, VkglTestCase_007570_1, VkglTestCase_007570_2);

#define VkglTestCase_007571_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007571_2 "hared_var.basic_type.mat2x4_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007571, VkglTestCase_007571_1, VkglTestCase_007571_2);

#define VkglTestCase_007572_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007572_2 "hared_var.basic_type.mat3x2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007572, VkglTestCase_007572_1, VkglTestCase_007572_2);

#define VkglTestCase_007573_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007573_2 "ared_var.basic_type.mat3x2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007573, VkglTestCase_007573_1, VkglTestCase_007573_2);

#define VkglTestCase_007574_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007574_2 "hared_var.basic_type.mat3x2_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007574, VkglTestCase_007574_1, VkglTestCase_007574_2);

#define VkglTestCase_007575_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007575_2 "shared_var.basic_type.mat3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007575, VkglTestCase_007575_1, VkglTestCase_007575_2);

#define VkglTestCase_007576_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007576_2 "hared_var.basic_type.mat3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007576, VkglTestCase_007576_1, VkglTestCase_007576_2);

#define VkglTestCase_007577_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007577_2 "shared_var.basic_type.mat3_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007577, VkglTestCase_007577_1, VkglTestCase_007577_2);

#define VkglTestCase_007578_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007578_2 "hared_var.basic_type.mat3x4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007578, VkglTestCase_007578_1, VkglTestCase_007578_2);

#define VkglTestCase_007579_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007579_2 "ared_var.basic_type.mat3x4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007579, VkglTestCase_007579_1, VkglTestCase_007579_2);

#define VkglTestCase_007580_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007580_2 "hared_var.basic_type.mat3x4_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007580, VkglTestCase_007580_1, VkglTestCase_007580_2);

#define VkglTestCase_007581_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007581_2 "hared_var.basic_type.mat4x2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007581, VkglTestCase_007581_1, VkglTestCase_007581_2);

#define VkglTestCase_007582_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007582_2 "ared_var.basic_type.mat4x2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007582, VkglTestCase_007582_1, VkglTestCase_007582_2);

#define VkglTestCase_007583_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007583_2 "hared_var.basic_type.mat4x2_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007583, VkglTestCase_007583_1, VkglTestCase_007583_2);

#define VkglTestCase_007584_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007584_2 "hared_var.basic_type.mat4x3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007584, VkglTestCase_007584_1, VkglTestCase_007584_2);

#define VkglTestCase_007585_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007585_2 "ared_var.basic_type.mat4x3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007585, VkglTestCase_007585_1, VkglTestCase_007585_2);

#define VkglTestCase_007586_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007586_2 "hared_var.basic_type.mat4x3_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007586, VkglTestCase_007586_1, VkglTestCase_007586_2);

#define VkglTestCase_007587_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007587_2 "shared_var.basic_type.mat4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007587, VkglTestCase_007587_1, VkglTestCase_007587_2);

#define VkglTestCase_007588_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007588_2 "hared_var.basic_type.mat4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007588, VkglTestCase_007588_1, VkglTestCase_007588_2);

#define VkglTestCase_007589_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007589_2 "shared_var.basic_type.mat4_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007589, VkglTestCase_007589_1, VkglTestCase_007589_2);

#define VkglTestCase_007590_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007590_2 ".shared_var.basic_type.int_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007590, VkglTestCase_007590_1, VkglTestCase_007590_2);

#define VkglTestCase_007591_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007591_2 "hared_var.basic_type.int_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007591, VkglTestCase_007591_1, VkglTestCase_007591_2);

#define VkglTestCase_007592_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007592_2 "shared_var.basic_type.int_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007592, VkglTestCase_007592_1, VkglTestCase_007592_2);

#define VkglTestCase_007593_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007593_2 "shared_var.basic_type.ivec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007593, VkglTestCase_007593_1, VkglTestCase_007593_2);

#define VkglTestCase_007594_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007594_2 "ared_var.basic_type.ivec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007594, VkglTestCase_007594_1, VkglTestCase_007594_2);

#define VkglTestCase_007595_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007595_2 "hared_var.basic_type.ivec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007595, VkglTestCase_007595_1, VkglTestCase_007595_2);

#define VkglTestCase_007596_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007596_2 "shared_var.basic_type.ivec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007596, VkglTestCase_007596_1, VkglTestCase_007596_2);

#define VkglTestCase_007597_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007597_2 "ared_var.basic_type.ivec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007597, VkglTestCase_007597_1, VkglTestCase_007597_2);

#define VkglTestCase_007598_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007598_2 "hared_var.basic_type.ivec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007598, VkglTestCase_007598_1, VkglTestCase_007598_2);

#define VkglTestCase_007599_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007599_2 "shared_var.basic_type.ivec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007599, VkglTestCase_007599_1, VkglTestCase_007599_2);

#define VkglTestCase_007600_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007600_2 "ared_var.basic_type.ivec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007600, VkglTestCase_007600_1, VkglTestCase_007600_2);

#define VkglTestCase_007601_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007601_2 "hared_var.basic_type.ivec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007601, VkglTestCase_007601_1, VkglTestCase_007601_2);

#define VkglTestCase_007602_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007602_2 "shared_var.basic_type.uint_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007602, VkglTestCase_007602_1, VkglTestCase_007602_2);

#define VkglTestCase_007603_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007603_2 "hared_var.basic_type.uint_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007603, VkglTestCase_007603_1, VkglTestCase_007603_2);

#define VkglTestCase_007604_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007604_2 "shared_var.basic_type.uint_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007604, VkglTestCase_007604_1, VkglTestCase_007604_2);

#define VkglTestCase_007605_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007605_2 "shared_var.basic_type.uvec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007605, VkglTestCase_007605_1, VkglTestCase_007605_2);

#define VkglTestCase_007606_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007606_2 "ared_var.basic_type.uvec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007606, VkglTestCase_007606_1, VkglTestCase_007606_2);

#define VkglTestCase_007607_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007607_2 "hared_var.basic_type.uvec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007607, VkglTestCase_007607_1, VkglTestCase_007607_2);

#define VkglTestCase_007608_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007608_2 "shared_var.basic_type.uvec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007608, VkglTestCase_007608_1, VkglTestCase_007608_2);

#define VkglTestCase_007609_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007609_2 "ared_var.basic_type.uvec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007609, VkglTestCase_007609_1, VkglTestCase_007609_2);

#define VkglTestCase_007610_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007610_2 "hared_var.basic_type.uvec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007610, VkglTestCase_007610_1, VkglTestCase_007610_2);

#define VkglTestCase_007611_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007611_2 "shared_var.basic_type.uvec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007611, VkglTestCase_007611_1, VkglTestCase_007611_2);

#define VkglTestCase_007612_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007612_2 "ared_var.basic_type.uvec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007612, VkglTestCase_007612_1, VkglTestCase_007612_2);

#define VkglTestCase_007613_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007613_2 "hared_var.basic_type.uvec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007613, VkglTestCase_007613_1, VkglTestCase_007613_2);

#define VkglTestCase_007614_1 "dEQP-GLES31.functional.compu"
#define VkglTestCase_007614_2 "te.shared_var.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007614, VkglTestCase_007614_1, VkglTestCase_007614_2);

#define VkglTestCase_007615_1 "dEQP-GLES31.functional.comput"
#define VkglTestCase_007615_2 "e.shared_var.basic_type.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007615, VkglTestCase_007615_1, VkglTestCase_007615_2);

#define VkglTestCase_007616_1 "dEQP-GLES31.functional.comput"
#define VkglTestCase_007616_2 "e.shared_var.basic_type.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007616, VkglTestCase_007616_1, VkglTestCase_007616_2);

#define VkglTestCase_007617_1 "dEQP-GLES31.functional.comput"
#define VkglTestCase_007617_2 "e.shared_var.basic_type.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007617, VkglTestCase_007617_1, VkglTestCase_007617_2);
