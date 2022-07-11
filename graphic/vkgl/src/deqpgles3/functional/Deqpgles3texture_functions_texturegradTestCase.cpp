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

#define VkglTestCase_017090_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017090_2 "ctions.texturegrad.sampler2d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017090, VkglTestCase_017090_1, VkglTestCase_017090_2);

#define VkglTestCase_017091_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017091_2 "tions.texturegrad.sampler2d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017091, VkglTestCase_017091_1, VkglTestCase_017091_2);

#define VkglTestCase_017092_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017092_2 "ctions.texturegrad.sampler2d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017092, VkglTestCase_017092_1, VkglTestCase_017092_2);

#define VkglTestCase_017093_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017093_2 "tions.texturegrad.sampler2d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017093, VkglTestCase_017093_1, VkglTestCase_017093_2);

#define VkglTestCase_017094_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017094_2 "functions.texturegrad.isampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017094, VkglTestCase_017094_1, VkglTestCase_017094_2);

#define VkglTestCase_017095_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017095_2 "unctions.texturegrad.isampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017095, VkglTestCase_017095_1, VkglTestCase_017095_2);

#define VkglTestCase_017096_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017096_2 "functions.texturegrad.usampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017096, VkglTestCase_017096_1, VkglTestCase_017096_2);

#define VkglTestCase_017097_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017097_2 "unctions.texturegrad.usampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017097, VkglTestCase_017097_1, VkglTestCase_017097_2);

#define VkglTestCase_017098_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017098_2 "tions.texturegrad.samplercube_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017098, VkglTestCase_017098_1, VkglTestCase_017098_2);

#define VkglTestCase_017099_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017099_2 "ions.texturegrad.samplercube_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017099, VkglTestCase_017099_1, VkglTestCase_017099_2);

#define VkglTestCase_017100_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017100_2 "tions.texturegrad.samplercube_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017100, VkglTestCase_017100_1, VkglTestCase_017100_2);

#define VkglTestCase_017101_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017101_2 "ions.texturegrad.samplercube_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017101, VkglTestCase_017101_1, VkglTestCase_017101_2);

#define VkglTestCase_017102_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017102_2 "unctions.texturegrad.isamplercube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017102, VkglTestCase_017102_1, VkglTestCase_017102_2);

#define VkglTestCase_017103_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017103_2 "unctions.texturegrad.usamplercube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017103, VkglTestCase_017103_1, VkglTestCase_017103_2);

#define VkglTestCase_017104_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017104_2 "nctions.texturegrad.usamplercube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017104, VkglTestCase_017104_1, VkglTestCase_017104_2);

#define VkglTestCase_017105_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017105_2 "ions.texturegrad.sampler2darray_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017105, VkglTestCase_017105_1, VkglTestCase_017105_2);

#define VkglTestCase_017106_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017106_2 "ons.texturegrad.sampler2darray_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017106, VkglTestCase_017106_1, VkglTestCase_017106_2);

#define VkglTestCase_017107_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017107_2 "ions.texturegrad.sampler2darray_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017107, VkglTestCase_017107_1, VkglTestCase_017107_2);

#define VkglTestCase_017108_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017108_2 "ons.texturegrad.sampler2darray_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017108, VkglTestCase_017108_1, VkglTestCase_017108_2);

#define VkglTestCase_017109_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017109_2 "ctions.texturegrad.isampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017109, VkglTestCase_017109_1, VkglTestCase_017109_2);

#define VkglTestCase_017110_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017110_2 "tions.texturegrad.isampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017110, VkglTestCase_017110_1, VkglTestCase_017110_2);

#define VkglTestCase_017111_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017111_2 "ctions.texturegrad.usampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017111, VkglTestCase_017111_1, VkglTestCase_017111_2);

#define VkglTestCase_017112_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017112_2 "tions.texturegrad.usampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017112, VkglTestCase_017112_1, VkglTestCase_017112_2);

#define VkglTestCase_017113_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017113_2 "ctions.texturegrad.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017113, VkglTestCase_017113_1, VkglTestCase_017113_2);

#define VkglTestCase_017114_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017114_2 "tions.texturegrad.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017114, VkglTestCase_017114_1, VkglTestCase_017114_2);

#define VkglTestCase_017115_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017115_2 "ctions.texturegrad.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017115, VkglTestCase_017115_1, VkglTestCase_017115_2);

#define VkglTestCase_017116_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017116_2 "tions.texturegrad.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017116, VkglTestCase_017116_1, VkglTestCase_017116_2);

#define VkglTestCase_017117_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017117_2 "functions.texturegrad.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017117, VkglTestCase_017117_1, VkglTestCase_017117_2);

#define VkglTestCase_017118_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017118_2 "unctions.texturegrad.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017118, VkglTestCase_017118_1, VkglTestCase_017118_2);

#define VkglTestCase_017119_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017119_2 "functions.texturegrad.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017119, VkglTestCase_017119_1, VkglTestCase_017119_2);

#define VkglTestCase_017120_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017120_2 "unctions.texturegrad.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017120, VkglTestCase_017120_1, VkglTestCase_017120_2);

#define VkglTestCase_017121_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017121_2 "ctions.texturegrad.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017121, VkglTestCase_017121_1, VkglTestCase_017121_2);

#define VkglTestCase_017122_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017122_2 "tions.texturegrad.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017122, VkglTestCase_017122_1, VkglTestCase_017122_2);

#define VkglTestCase_017123_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017123_2 "ions.texturegrad.sampler2darrayshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017123, VkglTestCase_017123_1, VkglTestCase_017123_2);

#define VkglTestCase_017124_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017124_2 "ons.texturegrad.sampler2darrayshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017124, VkglTestCase_017124_1, VkglTestCase_017124_2);
