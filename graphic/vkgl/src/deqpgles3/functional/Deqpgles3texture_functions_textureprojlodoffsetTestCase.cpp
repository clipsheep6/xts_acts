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

#define VkglTestCase_017067_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017067_2 "textureprojlodoffset.sampler2d_vec3_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017067, VkglTestCase_017067_1, VkglTestCase_017067_2);

#define VkglTestCase_017068_1 "dEQP-GLES3.functional.shaders.texture_functions.t"
#define VkglTestCase_017068_2 "extureprojlodoffset.sampler2d_vec3_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017068, VkglTestCase_017068_1, VkglTestCase_017068_2);

#define VkglTestCase_017069_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017069_2 "textureprojlodoffset.sampler2d_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017069, VkglTestCase_017069_1, VkglTestCase_017069_2);

#define VkglTestCase_017070_1 "dEQP-GLES3.functional.shaders.texture_functions.t"
#define VkglTestCase_017070_2 "extureprojlodoffset.sampler2d_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017070, VkglTestCase_017070_1, VkglTestCase_017070_2);

#define VkglTestCase_017071_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017071_2 "ns.textureprojlodoffset.isampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017071, VkglTestCase_017071_1, VkglTestCase_017071_2);

#define VkglTestCase_017072_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017072_2 "s.textureprojlodoffset.isampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017072, VkglTestCase_017072_1, VkglTestCase_017072_2);

#define VkglTestCase_017073_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017073_2 "ns.textureprojlodoffset.usampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017073, VkglTestCase_017073_1, VkglTestCase_017073_2);

#define VkglTestCase_017074_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017074_2 "s.textureprojlodoffset.usampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017074, VkglTestCase_017074_1, VkglTestCase_017074_2);

#define VkglTestCase_017075_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017075_2 "textureprojlodoffset.sampler2d_vec4_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017075, VkglTestCase_017075_1, VkglTestCase_017075_2);

#define VkglTestCase_017076_1 "dEQP-GLES3.functional.shaders.texture_functions.t"
#define VkglTestCase_017076_2 "extureprojlodoffset.sampler2d_vec4_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017076, VkglTestCase_017076_1, VkglTestCase_017076_2);

#define VkglTestCase_017077_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017077_2 "textureprojlodoffset.sampler2d_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017077, VkglTestCase_017077_1, VkglTestCase_017077_2);

#define VkglTestCase_017078_1 "dEQP-GLES3.functional.shaders.texture_functions.t"
#define VkglTestCase_017078_2 "extureprojlodoffset.sampler2d_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017078, VkglTestCase_017078_1, VkglTestCase_017078_2);

#define VkglTestCase_017079_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017079_2 "ns.textureprojlodoffset.isampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017079, VkglTestCase_017079_1, VkglTestCase_017079_2);

#define VkglTestCase_017080_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017080_2 "s.textureprojlodoffset.isampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017080, VkglTestCase_017080_1, VkglTestCase_017080_2);

#define VkglTestCase_017081_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017081_2 "ns.textureprojlodoffset.usampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017081, VkglTestCase_017081_1, VkglTestCase_017081_2);

#define VkglTestCase_017082_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017082_2 "s.textureprojlodoffset.usampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017082, VkglTestCase_017082_1, VkglTestCase_017082_2);

#define VkglTestCase_017083_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017083_2 "ns.textureprojlodoffset.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017083, VkglTestCase_017083_1, VkglTestCase_017083_2);

#define VkglTestCase_017084_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017084_2 "s.textureprojlodoffset.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017084, VkglTestCase_017084_1, VkglTestCase_017084_2);

#define VkglTestCase_017085_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017085_2 "s.textureprojlodoffset.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017085, VkglTestCase_017085_1, VkglTestCase_017085_2);

#define VkglTestCase_017086_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017086_2 "ons.textureprojlodoffset.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017086, VkglTestCase_017086_1, VkglTestCase_017086_2);

#define VkglTestCase_017087_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017087_2 "ons.textureprojlodoffset.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017087, VkglTestCase_017087_1, VkglTestCase_017087_2);

#define VkglTestCase_017088_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017088_2 "ns.textureprojlodoffset.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017088, VkglTestCase_017088_1, VkglTestCase_017088_2);

#define VkglTestCase_017089_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017089_2 "s.textureprojlodoffset.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017089, VkglTestCase_017089_1, VkglTestCase_017089_2);
