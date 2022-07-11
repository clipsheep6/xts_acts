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

#define VkglTestCase_000685_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000685_2 "ons.common.floatbitstouint.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000685, VkglTestCase_000685_1, VkglTestCase_000685_2);

#define VkglTestCase_000686_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000686_2 "s.common.floatbitstouint.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000686, VkglTestCase_000686_1, VkglTestCase_000686_2);

#define VkglTestCase_000687_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000687_2 "ns.common.floatbitstouint.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000687, VkglTestCase_000687_1, VkglTestCase_000687_2);

#define VkglTestCase_000688_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000688_2 "ons.common.floatbitstouint.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000688, VkglTestCase_000688_1, VkglTestCase_000688_2);

#define VkglTestCase_000689_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000689_2 "s.common.floatbitstouint.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000689, VkglTestCase_000689_1, VkglTestCase_000689_2);

#define VkglTestCase_000690_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_000690_2 "common.floatbitstouint.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000690, VkglTestCase_000690_1, VkglTestCase_000690_2);

#define VkglTestCase_000691_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000691_2 "s.common.floatbitstouint.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000691, VkglTestCase_000691_1, VkglTestCase_000691_2);

#define VkglTestCase_000692_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000692_2 "ns.common.floatbitstouint.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000692, VkglTestCase_000692_1, VkglTestCase_000692_2);

#define VkglTestCase_000693_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000693_2 "ns.common.floatbitstouint.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000693, VkglTestCase_000693_1, VkglTestCase_000693_2);

#define VkglTestCase_000694_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000694_2 ".common.floatbitstouint.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000694, VkglTestCase_000694_1, VkglTestCase_000694_2);

#define VkglTestCase_000695_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000695_2 "ns.common.floatbitstouint.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000695, VkglTestCase_000695_1, VkglTestCase_000695_2);

#define VkglTestCase_000696_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000696_2 "ons.common.floatbitstouint.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000696, VkglTestCase_000696_1, VkglTestCase_000696_2);

#define VkglTestCase_000697_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000697_2 "ons.common.floatbitstouint.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000697, VkglTestCase_000697_1, VkglTestCase_000697_2);

#define VkglTestCase_000698_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000698_2 "s.common.floatbitstouint.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000698, VkglTestCase_000698_1, VkglTestCase_000698_2);

#define VkglTestCase_000699_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000699_2 "ons.common.floatbitstouint.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000699, VkglTestCase_000699_1, VkglTestCase_000699_2);

#define VkglTestCase_000700_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000700_2 "ions.common.floatbitstouint.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000700, VkglTestCase_000700_1, VkglTestCase_000700_2);

#define VkglTestCase_000701_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000701_2 "ns.common.floatbitstouint.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000701, VkglTestCase_000701_1, VkglTestCase_000701_2);

#define VkglTestCase_000702_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000702_2 ".common.floatbitstouint.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000702, VkglTestCase_000702_1, VkglTestCase_000702_2);

#define VkglTestCase_000703_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000703_2 "s.common.floatbitstouint.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000703, VkglTestCase_000703_1, VkglTestCase_000703_2);

#define VkglTestCase_000704_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000704_2 "ns.common.floatbitstouint.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000704, VkglTestCase_000704_1, VkglTestCase_000704_2);

#define VkglTestCase_000705_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000705_2 "ons.common.floatbitstouint.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000705, VkglTestCase_000705_1, VkglTestCase_000705_2);

#define VkglTestCase_000706_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000706_2 "s.common.floatbitstouint.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000706, VkglTestCase_000706_1, VkglTestCase_000706_2);

#define VkglTestCase_000707_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000707_2 "ns.common.floatbitstouint.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000707, VkglTestCase_000707_1, VkglTestCase_000707_2);

#define VkglTestCase_000708_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000708_2 "ons.common.floatbitstouint.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000708, VkglTestCase_000708_1, VkglTestCase_000708_2);

#define VkglTestCase_000709_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000709_2 "ons.common.floatbitstouint.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000709, VkglTestCase_000709_1, VkglTestCase_000709_2);

#define VkglTestCase_000710_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000710_2 "s.common.floatbitstouint.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000710, VkglTestCase_000710_1, VkglTestCase_000710_2);

#define VkglTestCase_000711_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000711_2 "ons.common.floatbitstouint.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000711, VkglTestCase_000711_1, VkglTestCase_000711_2);

#define VkglTestCase_000712_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000712_2 "ions.common.floatbitstouint.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000712, VkglTestCase_000712_1, VkglTestCase_000712_2);

#define VkglTestCase_000713_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000713_2 "ns.common.floatbitstouint.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000713, VkglTestCase_000713_1, VkglTestCase_000713_2);

#define VkglTestCase_000714_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000714_2 ".common.floatbitstouint.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000714, VkglTestCase_000714_1, VkglTestCase_000714_2);

#define VkglTestCase_000715_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000715_2 "s.common.floatbitstouint.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000715, VkglTestCase_000715_1, VkglTestCase_000715_2);

#define VkglTestCase_000716_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000716_2 "ns.common.floatbitstouint.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000716, VkglTestCase_000716_1, VkglTestCase_000716_2);

#define VkglTestCase_000717_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000717_2 "ons.common.floatbitstouint.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000717, VkglTestCase_000717_1, VkglTestCase_000717_2);

#define VkglTestCase_000718_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000718_2 "s.common.floatbitstouint.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000718, VkglTestCase_000718_1, VkglTestCase_000718_2);

#define VkglTestCase_000719_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000719_2 "ns.common.floatbitstouint.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000719, VkglTestCase_000719_1, VkglTestCase_000719_2);

#define VkglTestCase_000720_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000720_2 "ons.common.floatbitstouint.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000720, VkglTestCase_000720_1, VkglTestCase_000720_2);

#define VkglTestCase_000721_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000721_2 "ons.common.floatbitstouint.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000721, VkglTestCase_000721_1, VkglTestCase_000721_2);

#define VkglTestCase_000722_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000722_2 "s.common.floatbitstouint.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000722, VkglTestCase_000722_1, VkglTestCase_000722_2);

#define VkglTestCase_000723_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000723_2 "ons.common.floatbitstouint.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000723, VkglTestCase_000723_1, VkglTestCase_000723_2);

#define VkglTestCase_000724_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000724_2 "ions.common.floatbitstouint.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000724, VkglTestCase_000724_1, VkglTestCase_000724_2);

#define VkglTestCase_000725_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000725_2 "ns.common.floatbitstouint.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000725, VkglTestCase_000725_1, VkglTestCase_000725_2);

#define VkglTestCase_000726_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000726_2 ".common.floatbitstouint.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000726, VkglTestCase_000726_1, VkglTestCase_000726_2);

#define VkglTestCase_000727_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000727_2 "s.common.floatbitstouint.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000727, VkglTestCase_000727_1, VkglTestCase_000727_2);

#define VkglTestCase_000728_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000728_2 "ns.common.floatbitstouint.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000728, VkglTestCase_000728_1, VkglTestCase_000728_2);

#define VkglTestCase_000729_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000729_2 "ons.common.floatbitstouint.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000729, VkglTestCase_000729_1, VkglTestCase_000729_2);

#define VkglTestCase_000730_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000730_2 "s.common.floatbitstouint.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000730, VkglTestCase_000730_1, VkglTestCase_000730_2);

#define VkglTestCase_000731_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000731_2 "ns.common.floatbitstouint.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000731, VkglTestCase_000731_1, VkglTestCase_000731_2);

#define VkglTestCase_000732_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000732_2 "ons.common.floatbitstouint.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000732, VkglTestCase_000732_1, VkglTestCase_000732_2);
