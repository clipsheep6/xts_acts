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

#define VkglTestCase_016953_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_016953_2 "s.textureprojoffset.sampler2d_vec3_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016953, VkglTestCase_016953_1, VkglTestCase_016953_2);

#define VkglTestCase_016954_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016954_2 ".textureprojoffset.sampler2d_vec3_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016954, VkglTestCase_016954_1, VkglTestCase_016954_2);

#define VkglTestCase_016955_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_016955_2 "s.textureprojoffset.sampler2d_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016955, VkglTestCase_016955_1, VkglTestCase_016955_2);

#define VkglTestCase_016956_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016956_2 ".textureprojoffset.sampler2d_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016956, VkglTestCase_016956_1, VkglTestCase_016956_2);

#define VkglTestCase_016957_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016957_2 "ons.textureprojoffset.isampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016957, VkglTestCase_016957_1, VkglTestCase_016957_2);

#define VkglTestCase_016958_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016958_2 "ns.textureprojoffset.isampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016958, VkglTestCase_016958_1, VkglTestCase_016958_2);

#define VkglTestCase_016959_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016959_2 "ons.textureprojoffset.usampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016959, VkglTestCase_016959_1, VkglTestCase_016959_2);

#define VkglTestCase_016960_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016960_2 "ns.textureprojoffset.usampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016960, VkglTestCase_016960_1, VkglTestCase_016960_2);

#define VkglTestCase_016961_1 "dEQP-GLES3.functional.shaders.texture_functions.te"
#define VkglTestCase_016961_2 "xtureprojoffset.sampler2d_vec3_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016961, VkglTestCase_016961_1, VkglTestCase_016961_2);

#define VkglTestCase_016962_1 "dEQP-GLES3.functional.shaders.texture_functions.te"
#define VkglTestCase_016962_2 "xtureprojoffset.sampler2d_vec3_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016962, VkglTestCase_016962_1, VkglTestCase_016962_2);

#define VkglTestCase_016963_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016963_2 ".textureprojoffset.isampler2d_vec3_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016963, VkglTestCase_016963_1, VkglTestCase_016963_2);

#define VkglTestCase_016964_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016964_2 ".textureprojoffset.usampler2d_vec3_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016964, VkglTestCase_016964_1, VkglTestCase_016964_2);

#define VkglTestCase_016965_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_016965_2 "s.textureprojoffset.sampler2d_vec4_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016965, VkglTestCase_016965_1, VkglTestCase_016965_2);

#define VkglTestCase_016966_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016966_2 ".textureprojoffset.sampler2d_vec4_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016966, VkglTestCase_016966_1, VkglTestCase_016966_2);

#define VkglTestCase_016967_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_016967_2 "s.textureprojoffset.sampler2d_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016967, VkglTestCase_016967_1, VkglTestCase_016967_2);

#define VkglTestCase_016968_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016968_2 ".textureprojoffset.sampler2d_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016968, VkglTestCase_016968_1, VkglTestCase_016968_2);

#define VkglTestCase_016969_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016969_2 "ons.textureprojoffset.isampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016969, VkglTestCase_016969_1, VkglTestCase_016969_2);

#define VkglTestCase_016970_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016970_2 "ns.textureprojoffset.isampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016970, VkglTestCase_016970_1, VkglTestCase_016970_2);

#define VkglTestCase_016971_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016971_2 "ons.textureprojoffset.usampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016971, VkglTestCase_016971_1, VkglTestCase_016971_2);

#define VkglTestCase_016972_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016972_2 "ns.textureprojoffset.usampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016972, VkglTestCase_016972_1, VkglTestCase_016972_2);

#define VkglTestCase_016973_1 "dEQP-GLES3.functional.shaders.texture_functions.te"
#define VkglTestCase_016973_2 "xtureprojoffset.sampler2d_vec4_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016973, VkglTestCase_016973_1, VkglTestCase_016973_2);

#define VkglTestCase_016974_1 "dEQP-GLES3.functional.shaders.texture_functions.te"
#define VkglTestCase_016974_2 "xtureprojoffset.sampler2d_vec4_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016974, VkglTestCase_016974_1, VkglTestCase_016974_2);

#define VkglTestCase_016975_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016975_2 ".textureprojoffset.isampler2d_vec4_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016975, VkglTestCase_016975_1, VkglTestCase_016975_2);

#define VkglTestCase_016976_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016976_2 ".textureprojoffset.usampler2d_vec4_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016976, VkglTestCase_016976_1, VkglTestCase_016976_2);

#define VkglTestCase_016977_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016977_2 "ons.textureprojoffset.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016977, VkglTestCase_016977_1, VkglTestCase_016977_2);

#define VkglTestCase_016978_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016978_2 "ons.textureprojoffset.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016978, VkglTestCase_016978_1, VkglTestCase_016978_2);

#define VkglTestCase_016979_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016979_2 "ctions.textureprojoffset.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016979, VkglTestCase_016979_1, VkglTestCase_016979_2);

#define VkglTestCase_016980_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016980_2 "ctions.textureprojoffset.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016980, VkglTestCase_016980_1, VkglTestCase_016980_2);

#define VkglTestCase_016981_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016981_2 "ons.textureprojoffset.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016981, VkglTestCase_016981_1, VkglTestCase_016981_2);

#define VkglTestCase_016982_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016982_2 "ns.textureprojoffset.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016982, VkglTestCase_016982_1, VkglTestCase_016982_2);

#define VkglTestCase_016983_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016983_2 ".textureprojoffset.sampler2dshadow_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016983, VkglTestCase_016983_1, VkglTestCase_016983_2);
