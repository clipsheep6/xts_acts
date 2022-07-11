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

#define VkglTestCase_017179_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017179_2 "textureprojgradoffset.sampler2d_vec3_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017179, VkglTestCase_017179_1, VkglTestCase_017179_2);

#define VkglTestCase_017180_1 "dEQP-GLES3.functional.shaders.texture_functions.t"
#define VkglTestCase_017180_2 "extureprojgradoffset.sampler2d_vec3_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017180, VkglTestCase_017180_1, VkglTestCase_017180_2);

#define VkglTestCase_017181_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017181_2 "textureprojgradoffset.sampler2d_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017181, VkglTestCase_017181_1, VkglTestCase_017181_2);

#define VkglTestCase_017182_1 "dEQP-GLES3.functional.shaders.texture_functions.t"
#define VkglTestCase_017182_2 "extureprojgradoffset.sampler2d_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017182, VkglTestCase_017182_1, VkglTestCase_017182_2);

#define VkglTestCase_017183_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017183_2 "s.textureprojgradoffset.isampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017183, VkglTestCase_017183_1, VkglTestCase_017183_2);

#define VkglTestCase_017184_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017184_2 ".textureprojgradoffset.isampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017184, VkglTestCase_017184_1, VkglTestCase_017184_2);

#define VkglTestCase_017185_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017185_2 "s.textureprojgradoffset.usampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017185, VkglTestCase_017185_1, VkglTestCase_017185_2);

#define VkglTestCase_017186_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017186_2 ".textureprojgradoffset.usampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017186, VkglTestCase_017186_1, VkglTestCase_017186_2);

#define VkglTestCase_017187_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017187_2 "textureprojgradoffset.sampler2d_vec4_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017187, VkglTestCase_017187_1, VkglTestCase_017187_2);

#define VkglTestCase_017188_1 "dEQP-GLES3.functional.shaders.texture_functions.t"
#define VkglTestCase_017188_2 "extureprojgradoffset.sampler2d_vec4_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017188, VkglTestCase_017188_1, VkglTestCase_017188_2);

#define VkglTestCase_017189_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017189_2 "textureprojgradoffset.sampler2d_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017189, VkglTestCase_017189_1, VkglTestCase_017189_2);

#define VkglTestCase_017190_1 "dEQP-GLES3.functional.shaders.texture_functions.t"
#define VkglTestCase_017190_2 "extureprojgradoffset.sampler2d_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017190, VkglTestCase_017190_1, VkglTestCase_017190_2);

#define VkglTestCase_017191_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017191_2 "s.textureprojgradoffset.isampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017191, VkglTestCase_017191_1, VkglTestCase_017191_2);

#define VkglTestCase_017192_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017192_2 ".textureprojgradoffset.isampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017192, VkglTestCase_017192_1, VkglTestCase_017192_2);

#define VkglTestCase_017193_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017193_2 "s.textureprojgradoffset.usampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017193, VkglTestCase_017193_1, VkglTestCase_017193_2);

#define VkglTestCase_017194_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017194_2 ".textureprojgradoffset.usampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017194, VkglTestCase_017194_1, VkglTestCase_017194_2);

#define VkglTestCase_017195_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017195_2 "s.textureprojgradoffset.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017195, VkglTestCase_017195_1, VkglTestCase_017195_2);

#define VkglTestCase_017196_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017196_2 ".textureprojgradoffset.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017196, VkglTestCase_017196_1, VkglTestCase_017196_2);

#define VkglTestCase_017197_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017197_2 "s.textureprojgradoffset.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017197, VkglTestCase_017197_1, VkglTestCase_017197_2);

#define VkglTestCase_017198_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017198_2 ".textureprojgradoffset.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017198, VkglTestCase_017198_1, VkglTestCase_017198_2);

#define VkglTestCase_017199_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017199_2 "ions.textureprojgradoffset.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017199, VkglTestCase_017199_1, VkglTestCase_017199_2);

#define VkglTestCase_017200_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017200_2 "ons.textureprojgradoffset.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017200, VkglTestCase_017200_1, VkglTestCase_017200_2);

#define VkglTestCase_017201_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017201_2 "ions.textureprojgradoffset.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017201, VkglTestCase_017201_1, VkglTestCase_017201_2);

#define VkglTestCase_017202_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017202_2 "ons.textureprojgradoffset.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017202, VkglTestCase_017202_1, VkglTestCase_017202_2);

#define VkglTestCase_017203_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017203_2 "s.textureprojgradoffset.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017203, VkglTestCase_017203_1, VkglTestCase_017203_2);

#define VkglTestCase_017204_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017204_2 ".textureprojgradoffset.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017204, VkglTestCase_017204_1, VkglTestCase_017204_2);
