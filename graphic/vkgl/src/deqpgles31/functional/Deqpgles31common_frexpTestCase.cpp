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
#include "../ActsDeqpgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000733_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000733_2 "functions.common.frexp.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000733, VkglTestCase_000733_1, VkglTestCase_000733_2);

#define VkglTestCase_000734_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000734_2 "unctions.common.frexp.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000734, VkglTestCase_000734_1, VkglTestCase_000734_2);

#define VkglTestCase_000735_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000735_2 "unctions.common.frexp.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000735, VkglTestCase_000735_1, VkglTestCase_000735_2);

#define VkglTestCase_000736_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000736_2 "ctions.common.frexp.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000736, VkglTestCase_000736_1, VkglTestCase_000736_2);

#define VkglTestCase_000737_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000737_2 "nctions.common.frexp.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000737, VkglTestCase_000737_1, VkglTestCase_000737_2);

#define VkglTestCase_000738_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000738_2 "unctions.common.frexp.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000738, VkglTestCase_000738_1, VkglTestCase_000738_2);

#define VkglTestCase_000739_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000739_2 "nctions.common.frexp.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000739, VkglTestCase_000739_1, VkglTestCase_000739_2);

#define VkglTestCase_000740_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000740_2 "ctions.common.frexp.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000740, VkglTestCase_000740_1, VkglTestCase_000740_2);

#define VkglTestCase_000741_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000741_2 "ctions.common.frexp.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000741, VkglTestCase_000741_1, VkglTestCase_000741_2);

#define VkglTestCase_000742_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000742_2 "ions.common.frexp.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000742, VkglTestCase_000742_1, VkglTestCase_000742_2);

#define VkglTestCase_000743_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000743_2 "ctions.common.frexp.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000743, VkglTestCase_000743_1, VkglTestCase_000743_2);

#define VkglTestCase_000744_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000744_2 "nctions.common.frexp.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000744, VkglTestCase_000744_1, VkglTestCase_000744_2);

#define VkglTestCase_000745_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000745_2 "unctions.common.frexp.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000745, VkglTestCase_000745_1, VkglTestCase_000745_2);

#define VkglTestCase_000746_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000746_2 "nctions.common.frexp.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000746, VkglTestCase_000746_1, VkglTestCase_000746_2);

#define VkglTestCase_000747_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000747_2 "nctions.common.frexp.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000747, VkglTestCase_000747_1, VkglTestCase_000747_2);

#define VkglTestCase_000748_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000748_2 "tions.common.frexp.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000748, VkglTestCase_000748_1, VkglTestCase_000748_2);

#define VkglTestCase_000749_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000749_2 "nctions.common.frexp.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000749, VkglTestCase_000749_1, VkglTestCase_000749_2);

#define VkglTestCase_000750_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000750_2 "unctions.common.frexp.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000750, VkglTestCase_000750_1, VkglTestCase_000750_2);

#define VkglTestCase_000751_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000751_2 "functions.common.frexp.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000751, VkglTestCase_000751_1, VkglTestCase_000751_2);

#define VkglTestCase_000752_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000752_2 "unctions.common.frexp.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000752, VkglTestCase_000752_1, VkglTestCase_000752_2);

#define VkglTestCase_000753_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000753_2 "unctions.common.frexp.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000753, VkglTestCase_000753_1, VkglTestCase_000753_2);

#define VkglTestCase_000754_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000754_2 "ctions.common.frexp.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000754, VkglTestCase_000754_1, VkglTestCase_000754_2);

#define VkglTestCase_000755_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000755_2 "unctions.common.frexp.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000755, VkglTestCase_000755_1, VkglTestCase_000755_2);

#define VkglTestCase_000756_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000756_2 "functions.common.frexp.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000756, VkglTestCase_000756_1, VkglTestCase_000756_2);

#define VkglTestCase_000757_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000757_2 "unctions.common.frexp.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000757, VkglTestCase_000757_1, VkglTestCase_000757_2);

#define VkglTestCase_000758_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000758_2 "nctions.common.frexp.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000758, VkglTestCase_000758_1, VkglTestCase_000758_2);

#define VkglTestCase_000759_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000759_2 "nctions.common.frexp.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000759, VkglTestCase_000759_1, VkglTestCase_000759_2);

#define VkglTestCase_000760_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000760_2 "tions.common.frexp.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000760, VkglTestCase_000760_1, VkglTestCase_000760_2);

#define VkglTestCase_000761_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000761_2 "ctions.common.frexp.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000761, VkglTestCase_000761_1, VkglTestCase_000761_2);

#define VkglTestCase_000762_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000762_2 "nctions.common.frexp.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000762, VkglTestCase_000762_1, VkglTestCase_000762_2);

#define VkglTestCase_000763_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000763_2 "functions.common.frexp.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000763, VkglTestCase_000763_1, VkglTestCase_000763_2);

#define VkglTestCase_000764_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000764_2 "unctions.common.frexp.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000764, VkglTestCase_000764_1, VkglTestCase_000764_2);

#define VkglTestCase_000765_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000765_2 "unctions.common.frexp.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000765, VkglTestCase_000765_1, VkglTestCase_000765_2);

#define VkglTestCase_000766_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000766_2 "ctions.common.frexp.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000766, VkglTestCase_000766_1, VkglTestCase_000766_2);

#define VkglTestCase_000767_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000767_2 "nctions.common.frexp.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000767, VkglTestCase_000767_1, VkglTestCase_000767_2);

#define VkglTestCase_000768_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000768_2 "unctions.common.frexp.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000768, VkglTestCase_000768_1, VkglTestCase_000768_2);

#define VkglTestCase_000769_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000769_2 "functions.common.frexp.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000769, VkglTestCase_000769_1, VkglTestCase_000769_2);

#define VkglTestCase_000770_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000770_2 "unctions.common.frexp.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000770, VkglTestCase_000770_1, VkglTestCase_000770_2);

#define VkglTestCase_000771_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000771_2 "unctions.common.frexp.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000771, VkglTestCase_000771_1, VkglTestCase_000771_2);

#define VkglTestCase_000772_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000772_2 "ctions.common.frexp.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000772, VkglTestCase_000772_1, VkglTestCase_000772_2);

#define VkglTestCase_000773_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000773_2 "unctions.common.frexp.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000773, VkglTestCase_000773_1, VkglTestCase_000773_2);

#define VkglTestCase_000774_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000774_2 "functions.common.frexp.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000774, VkglTestCase_000774_1, VkglTestCase_000774_2);

#define VkglTestCase_000775_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000775_2 "unctions.common.frexp.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000775, VkglTestCase_000775_1, VkglTestCase_000775_2);

#define VkglTestCase_000776_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000776_2 "nctions.common.frexp.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000776, VkglTestCase_000776_1, VkglTestCase_000776_2);

#define VkglTestCase_000777_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000777_2 "nctions.common.frexp.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000777, VkglTestCase_000777_1, VkglTestCase_000777_2);

#define VkglTestCase_000778_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000778_2 "tions.common.frexp.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000778, VkglTestCase_000778_1, VkglTestCase_000778_2);

#define VkglTestCase_000779_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000779_2 "ctions.common.frexp.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000779, VkglTestCase_000779_1, VkglTestCase_000779_2);

#define VkglTestCase_000780_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000780_2 "nctions.common.frexp.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000780, VkglTestCase_000780_1, VkglTestCase_000780_2);

#define VkglTestCase_000781_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000781_2 "functions.common.frexp.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000781, VkglTestCase_000781_1, VkglTestCase_000781_2);

#define VkglTestCase_000782_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000782_2 "unctions.common.frexp.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000782, VkglTestCase_000782_1, VkglTestCase_000782_2);

#define VkglTestCase_000783_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000783_2 "unctions.common.frexp.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000783, VkglTestCase_000783_1, VkglTestCase_000783_2);

#define VkglTestCase_000784_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000784_2 "ctions.common.frexp.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000784, VkglTestCase_000784_1, VkglTestCase_000784_2);

#define VkglTestCase_000785_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000785_2 "nctions.common.frexp.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000785, VkglTestCase_000785_1, VkglTestCase_000785_2);

#define VkglTestCase_000786_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000786_2 "unctions.common.frexp.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000786, VkglTestCase_000786_1, VkglTestCase_000786_2);

#define VkglTestCase_000787_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000787_2 "functions.common.frexp.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000787, VkglTestCase_000787_1, VkglTestCase_000787_2);

#define VkglTestCase_000788_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000788_2 "unctions.common.frexp.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000788, VkglTestCase_000788_1, VkglTestCase_000788_2);

#define VkglTestCase_000789_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000789_2 "unctions.common.frexp.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000789, VkglTestCase_000789_1, VkglTestCase_000789_2);

#define VkglTestCase_000790_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000790_2 "ctions.common.frexp.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000790, VkglTestCase_000790_1, VkglTestCase_000790_2);

#define VkglTestCase_000791_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000791_2 "unctions.common.frexp.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000791, VkglTestCase_000791_1, VkglTestCase_000791_2);

#define VkglTestCase_000792_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000792_2 "functions.common.frexp.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000792, VkglTestCase_000792_1, VkglTestCase_000792_2);

#define VkglTestCase_000793_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000793_2 "unctions.common.frexp.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000793, VkglTestCase_000793_1, VkglTestCase_000793_2);

#define VkglTestCase_000794_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000794_2 "nctions.common.frexp.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000794, VkglTestCase_000794_1, VkglTestCase_000794_2);

#define VkglTestCase_000795_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000795_2 "nctions.common.frexp.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000795, VkglTestCase_000795_1, VkglTestCase_000795_2);

#define VkglTestCase_000796_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000796_2 "tions.common.frexp.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000796, VkglTestCase_000796_1, VkglTestCase_000796_2);

#define VkglTestCase_000797_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000797_2 "ctions.common.frexp.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000797, VkglTestCase_000797_1, VkglTestCase_000797_2);

#define VkglTestCase_000798_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000798_2 "nctions.common.frexp.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000798, VkglTestCase_000798_1, VkglTestCase_000798_2);

#define VkglTestCase_000799_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000799_2 "functions.common.frexp.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000799, VkglTestCase_000799_1, VkglTestCase_000799_2);

#define VkglTestCase_000800_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000800_2 "unctions.common.frexp.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000800, VkglTestCase_000800_1, VkglTestCase_000800_2);

#define VkglTestCase_000801_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000801_2 "unctions.common.frexp.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000801, VkglTestCase_000801_1, VkglTestCase_000801_2);

#define VkglTestCase_000802_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000802_2 "ctions.common.frexp.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000802, VkglTestCase_000802_1, VkglTestCase_000802_2);

#define VkglTestCase_000803_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000803_2 "nctions.common.frexp.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000803, VkglTestCase_000803_1, VkglTestCase_000803_2);

#define VkglTestCase_000804_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000804_2 "unctions.common.frexp.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000804, VkglTestCase_000804_1, VkglTestCase_000804_2);
