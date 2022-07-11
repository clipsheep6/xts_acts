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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016880_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016880_2 "tions.textureoffset.sampler2d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016880, VkglTestCase_016880_1, VkglTestCase_016880_2);

#define VkglTestCase_016881_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016881_2 "ions.textureoffset.sampler2d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016881, VkglTestCase_016881_1, VkglTestCase_016881_2);

#define VkglTestCase_016882_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016882_2 "tions.textureoffset.sampler2d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016882, VkglTestCase_016882_1, VkglTestCase_016882_2);

#define VkglTestCase_016883_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016883_2 "ions.textureoffset.sampler2d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016883, VkglTestCase_016883_1, VkglTestCase_016883_2);

#define VkglTestCase_016884_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016884_2 "unctions.textureoffset.isampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016884, VkglTestCase_016884_1, VkglTestCase_016884_2);

#define VkglTestCase_016885_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016885_2 "nctions.textureoffset.isampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016885, VkglTestCase_016885_1, VkglTestCase_016885_2);

#define VkglTestCase_016886_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016886_2 "unctions.textureoffset.usampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016886, VkglTestCase_016886_1, VkglTestCase_016886_2);

#define VkglTestCase_016887_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016887_2 "nctions.textureoffset.usampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016887, VkglTestCase_016887_1, VkglTestCase_016887_2);

#define VkglTestCase_016888_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016888_2 "ns.textureoffset.sampler2d_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016888, VkglTestCase_016888_1, VkglTestCase_016888_2);

#define VkglTestCase_016889_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016889_2 "ns.textureoffset.sampler2d_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016889, VkglTestCase_016889_1, VkglTestCase_016889_2);

#define VkglTestCase_016890_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016890_2 "ions.textureoffset.isampler2d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016890, VkglTestCase_016890_1, VkglTestCase_016890_2);

#define VkglTestCase_016891_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016891_2 "ions.textureoffset.usampler2d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016891, VkglTestCase_016891_1, VkglTestCase_016891_2);

#define VkglTestCase_016892_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016892_2 "ons.textureoffset.sampler2darray_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016892, VkglTestCase_016892_1, VkglTestCase_016892_2);

#define VkglTestCase_016893_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016893_2 "ns.textureoffset.sampler2darray_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016893, VkglTestCase_016893_1, VkglTestCase_016893_2);

#define VkglTestCase_016894_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016894_2 "ons.textureoffset.sampler2darray_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016894, VkglTestCase_016894_1, VkglTestCase_016894_2);

#define VkglTestCase_016895_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016895_2 "ns.textureoffset.sampler2darray_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016895, VkglTestCase_016895_1, VkglTestCase_016895_2);

#define VkglTestCase_016896_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016896_2 "tions.textureoffset.isampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016896, VkglTestCase_016896_1, VkglTestCase_016896_2);

#define VkglTestCase_016897_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016897_2 "ions.textureoffset.isampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016897, VkglTestCase_016897_1, VkglTestCase_016897_2);

#define VkglTestCase_016898_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016898_2 "tions.textureoffset.usampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016898, VkglTestCase_016898_1, VkglTestCase_016898_2);

#define VkglTestCase_016899_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016899_2 "ions.textureoffset.usampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016899, VkglTestCase_016899_1, VkglTestCase_016899_2);

#define VkglTestCase_016900_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_016900_2 "textureoffset.sampler2darray_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016900, VkglTestCase_016900_1, VkglTestCase_016900_2);

#define VkglTestCase_016901_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_016901_2 "textureoffset.sampler2darray_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016901, VkglTestCase_016901_1, VkglTestCase_016901_2);

#define VkglTestCase_016902_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016902_2 "ns.textureoffset.isampler2darray_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016902, VkglTestCase_016902_1, VkglTestCase_016902_2);

#define VkglTestCase_016903_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016903_2 "ns.textureoffset.usampler2darray_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016903, VkglTestCase_016903_1, VkglTestCase_016903_2);

#define VkglTestCase_016904_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016904_2 "tions.textureoffset.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016904, VkglTestCase_016904_1, VkglTestCase_016904_2);

#define VkglTestCase_016905_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016905_2 "tions.textureoffset.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016905, VkglTestCase_016905_1, VkglTestCase_016905_2);

#define VkglTestCase_016906_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016906_2 "unctions.textureoffset.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016906, VkglTestCase_016906_1, VkglTestCase_016906_2);

#define VkglTestCase_016907_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016907_2 "ns.textureoffset.sampler3d_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016907, VkglTestCase_016907_1, VkglTestCase_016907_2);

#define VkglTestCase_016908_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016908_2 "ns.textureoffset.sampler3d_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016908, VkglTestCase_016908_1, VkglTestCase_016908_2);

#define VkglTestCase_016909_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016909_2 "ions.textureoffset.isampler3d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016909, VkglTestCase_016909_1, VkglTestCase_016909_2);

#define VkglTestCase_016910_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016910_2 "ions.textureoffset.usampler3d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016910, VkglTestCase_016910_1, VkglTestCase_016910_2);

#define VkglTestCase_016911_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016911_2 "tions.textureoffset.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016911, VkglTestCase_016911_1, VkglTestCase_016911_2);

#define VkglTestCase_016912_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016912_2 "ions.textureoffset.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016912, VkglTestCase_016912_1, VkglTestCase_016912_2);

#define VkglTestCase_016913_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016913_2 "ns.textureoffset.sampler2dshadow_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016913, VkglTestCase_016913_1, VkglTestCase_016913_2);
