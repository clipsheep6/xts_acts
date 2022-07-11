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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017153_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017153_2 "ns.textureprojgrad.sampler2d_vec3_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017153, VkglTestCase_017153_1, VkglTestCase_017153_2);

#define VkglTestCase_017154_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017154_2 "s.textureprojgrad.sampler2d_vec3_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017154, VkglTestCase_017154_1, VkglTestCase_017154_2);

#define VkglTestCase_017155_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017155_2 "ns.textureprojgrad.sampler2d_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017155, VkglTestCase_017155_1, VkglTestCase_017155_2);

#define VkglTestCase_017156_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017156_2 "s.textureprojgrad.sampler2d_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017156, VkglTestCase_017156_1, VkglTestCase_017156_2);

#define VkglTestCase_017157_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017157_2 "ions.textureprojgrad.isampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017157, VkglTestCase_017157_1, VkglTestCase_017157_2);

#define VkglTestCase_017158_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017158_2 "ons.textureprojgrad.isampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017158, VkglTestCase_017158_1, VkglTestCase_017158_2);

#define VkglTestCase_017159_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017159_2 "ions.textureprojgrad.usampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017159, VkglTestCase_017159_1, VkglTestCase_017159_2);

#define VkglTestCase_017160_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017160_2 "ons.textureprojgrad.usampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017160, VkglTestCase_017160_1, VkglTestCase_017160_2);

#define VkglTestCase_017161_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017161_2 "ns.textureprojgrad.sampler2d_vec4_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017161, VkglTestCase_017161_1, VkglTestCase_017161_2);

#define VkglTestCase_017162_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017162_2 "s.textureprojgrad.sampler2d_vec4_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017162, VkglTestCase_017162_1, VkglTestCase_017162_2);

#define VkglTestCase_017163_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017163_2 "ns.textureprojgrad.sampler2d_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017163, VkglTestCase_017163_1, VkglTestCase_017163_2);

#define VkglTestCase_017164_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017164_2 "s.textureprojgrad.sampler2d_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017164, VkglTestCase_017164_1, VkglTestCase_017164_2);

#define VkglTestCase_017165_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017165_2 "ions.textureprojgrad.isampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017165, VkglTestCase_017165_1, VkglTestCase_017165_2);

#define VkglTestCase_017166_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017166_2 "ons.textureprojgrad.isampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017166, VkglTestCase_017166_1, VkglTestCase_017166_2);

#define VkglTestCase_017167_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017167_2 "ions.textureprojgrad.usampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017167, VkglTestCase_017167_1, VkglTestCase_017167_2);

#define VkglTestCase_017168_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017168_2 "ons.textureprojgrad.usampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017168, VkglTestCase_017168_1, VkglTestCase_017168_2);

#define VkglTestCase_017169_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017169_2 "ions.textureprojgrad.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017169, VkglTestCase_017169_1, VkglTestCase_017169_2);

#define VkglTestCase_017170_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017170_2 "ons.textureprojgrad.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017170, VkglTestCase_017170_1, VkglTestCase_017170_2);

#define VkglTestCase_017171_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017171_2 "ions.textureprojgrad.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017171, VkglTestCase_017171_1, VkglTestCase_017171_2);

#define VkglTestCase_017172_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017172_2 "ons.textureprojgrad.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017172, VkglTestCase_017172_1, VkglTestCase_017172_2);

#define VkglTestCase_017173_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017173_2 "nctions.textureprojgrad.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017173, VkglTestCase_017173_1, VkglTestCase_017173_2);

#define VkglTestCase_017174_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017174_2 "ctions.textureprojgrad.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017174, VkglTestCase_017174_1, VkglTestCase_017174_2);

#define VkglTestCase_017175_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017175_2 "nctions.textureprojgrad.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017175, VkglTestCase_017175_1, VkglTestCase_017175_2);

#define VkglTestCase_017176_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017176_2 "ctions.textureprojgrad.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017176, VkglTestCase_017176_1, VkglTestCase_017176_2);

#define VkglTestCase_017177_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017177_2 "ions.textureprojgrad.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017177, VkglTestCase_017177_1, VkglTestCase_017177_2);

#define VkglTestCase_017178_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017178_2 "ons.textureprojgrad.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017178, VkglTestCase_017178_1, VkglTestCase_017178_2);
