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

#define VkglTestCase_000637_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000637_2 "ons.common.floatbitstoint.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000637, VkglTestCase_000637_1, VkglTestCase_000637_2);

#define VkglTestCase_000638_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000638_2 "s.common.floatbitstoint.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000638, VkglTestCase_000638_1, VkglTestCase_000638_2);

#define VkglTestCase_000639_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000639_2 "ons.common.floatbitstoint.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000639, VkglTestCase_000639_1, VkglTestCase_000639_2);

#define VkglTestCase_000640_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000640_2 "ions.common.floatbitstoint.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000640, VkglTestCase_000640_1, VkglTestCase_000640_2);

#define VkglTestCase_000641_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000641_2 "ns.common.floatbitstoint.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000641, VkglTestCase_000641_1, VkglTestCase_000641_2);

#define VkglTestCase_000642_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000642_2 ".common.floatbitstoint.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000642, VkglTestCase_000642_1, VkglTestCase_000642_2);

#define VkglTestCase_000643_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000643_2 "s.common.floatbitstoint.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000643, VkglTestCase_000643_1, VkglTestCase_000643_2);

#define VkglTestCase_000644_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000644_2 "ns.common.floatbitstoint.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000644, VkglTestCase_000644_1, VkglTestCase_000644_2);

#define VkglTestCase_000645_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000645_2 "ons.common.floatbitstoint.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000645, VkglTestCase_000645_1, VkglTestCase_000645_2);

#define VkglTestCase_000646_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000646_2 "s.common.floatbitstoint.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000646, VkglTestCase_000646_1, VkglTestCase_000646_2);

#define VkglTestCase_000647_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000647_2 "ns.common.floatbitstoint.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000647, VkglTestCase_000647_1, VkglTestCase_000647_2);

#define VkglTestCase_000648_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000648_2 "ons.common.floatbitstoint.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000648, VkglTestCase_000648_1, VkglTestCase_000648_2);

#define VkglTestCase_000649_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000649_2 "ions.common.floatbitstoint.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000649, VkglTestCase_000649_1, VkglTestCase_000649_2);

#define VkglTestCase_000650_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000650_2 "ns.common.floatbitstoint.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000650, VkglTestCase_000650_1, VkglTestCase_000650_2);

#define VkglTestCase_000651_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000651_2 "ons.common.floatbitstoint.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000651, VkglTestCase_000651_1, VkglTestCase_000651_2);

#define VkglTestCase_000652_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000652_2 "ions.common.floatbitstoint.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000652, VkglTestCase_000652_1, VkglTestCase_000652_2);

#define VkglTestCase_000653_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000653_2 "ns.common.floatbitstoint.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000653, VkglTestCase_000653_1, VkglTestCase_000653_2);

#define VkglTestCase_000654_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000654_2 ".common.floatbitstoint.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000654, VkglTestCase_000654_1, VkglTestCase_000654_2);

#define VkglTestCase_000655_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000655_2 "ns.common.floatbitstoint.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000655, VkglTestCase_000655_1, VkglTestCase_000655_2);

#define VkglTestCase_000656_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000656_2 "ons.common.floatbitstoint.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000656, VkglTestCase_000656_1, VkglTestCase_000656_2);

#define VkglTestCase_000657_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000657_2 "ons.common.floatbitstoint.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000657, VkglTestCase_000657_1, VkglTestCase_000657_2);

#define VkglTestCase_000658_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000658_2 "s.common.floatbitstoint.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000658, VkglTestCase_000658_1, VkglTestCase_000658_2);

#define VkglTestCase_000659_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000659_2 "ons.common.floatbitstoint.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000659, VkglTestCase_000659_1, VkglTestCase_000659_2);

#define VkglTestCase_000660_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000660_2 "ions.common.floatbitstoint.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000660, VkglTestCase_000660_1, VkglTestCase_000660_2);

#define VkglTestCase_000661_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000661_2 "ions.common.floatbitstoint.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000661, VkglTestCase_000661_1, VkglTestCase_000661_2);

#define VkglTestCase_000662_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000662_2 "ns.common.floatbitstoint.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000662, VkglTestCase_000662_1, VkglTestCase_000662_2);

#define VkglTestCase_000663_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000663_2 "ons.common.floatbitstoint.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000663, VkglTestCase_000663_1, VkglTestCase_000663_2);

#define VkglTestCase_000664_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000664_2 "ions.common.floatbitstoint.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000664, VkglTestCase_000664_1, VkglTestCase_000664_2);

#define VkglTestCase_000665_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000665_2 "ns.common.floatbitstoint.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000665, VkglTestCase_000665_1, VkglTestCase_000665_2);

#define VkglTestCase_000666_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000666_2 ".common.floatbitstoint.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000666, VkglTestCase_000666_1, VkglTestCase_000666_2);

#define VkglTestCase_000667_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000667_2 "ns.common.floatbitstoint.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000667, VkglTestCase_000667_1, VkglTestCase_000667_2);

#define VkglTestCase_000668_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000668_2 "ons.common.floatbitstoint.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000668, VkglTestCase_000668_1, VkglTestCase_000668_2);

#define VkglTestCase_000669_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000669_2 "ons.common.floatbitstoint.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000669, VkglTestCase_000669_1, VkglTestCase_000669_2);

#define VkglTestCase_000670_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000670_2 "s.common.floatbitstoint.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000670, VkglTestCase_000670_1, VkglTestCase_000670_2);

#define VkglTestCase_000671_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000671_2 "ons.common.floatbitstoint.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000671, VkglTestCase_000671_1, VkglTestCase_000671_2);

#define VkglTestCase_000672_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000672_2 "ions.common.floatbitstoint.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000672, VkglTestCase_000672_1, VkglTestCase_000672_2);

#define VkglTestCase_000673_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000673_2 "ions.common.floatbitstoint.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000673, VkglTestCase_000673_1, VkglTestCase_000673_2);

#define VkglTestCase_000674_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000674_2 "ns.common.floatbitstoint.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000674, VkglTestCase_000674_1, VkglTestCase_000674_2);

#define VkglTestCase_000675_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000675_2 "ons.common.floatbitstoint.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000675, VkglTestCase_000675_1, VkglTestCase_000675_2);

#define VkglTestCase_000676_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000676_2 "ions.common.floatbitstoint.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000676, VkglTestCase_000676_1, VkglTestCase_000676_2);

#define VkglTestCase_000677_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000677_2 "ns.common.floatbitstoint.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000677, VkglTestCase_000677_1, VkglTestCase_000677_2);

#define VkglTestCase_000678_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000678_2 ".common.floatbitstoint.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000678, VkglTestCase_000678_1, VkglTestCase_000678_2);

#define VkglTestCase_000679_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000679_2 "ns.common.floatbitstoint.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000679, VkglTestCase_000679_1, VkglTestCase_000679_2);

#define VkglTestCase_000680_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000680_2 "ons.common.floatbitstoint.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000680, VkglTestCase_000680_1, VkglTestCase_000680_2);

#define VkglTestCase_000681_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000681_2 "ons.common.floatbitstoint.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000681, VkglTestCase_000681_1, VkglTestCase_000681_2);

#define VkglTestCase_000682_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000682_2 "s.common.floatbitstoint.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000682, VkglTestCase_000682_1, VkglTestCase_000682_2);

#define VkglTestCase_000683_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000683_2 "ons.common.floatbitstoint.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000683, VkglTestCase_000683_1, VkglTestCase_000683_2);

#define VkglTestCase_000684_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000684_2 "ions.common.floatbitstoint.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000684, VkglTestCase_000684_1, VkglTestCase_000684_2);
