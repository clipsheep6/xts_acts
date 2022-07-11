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

#define VkglTestCase_017041_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017041_2 "ns.textureprojlod.sampler2d_vec3_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017041, VkglTestCase_017041_1, VkglTestCase_017041_2);

#define VkglTestCase_017042_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017042_2 "s.textureprojlod.sampler2d_vec3_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017042, VkglTestCase_017042_1, VkglTestCase_017042_2);

#define VkglTestCase_017043_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017043_2 "ns.textureprojlod.sampler2d_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017043, VkglTestCase_017043_1, VkglTestCase_017043_2);

#define VkglTestCase_017044_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017044_2 "s.textureprojlod.sampler2d_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017044, VkglTestCase_017044_1, VkglTestCase_017044_2);

#define VkglTestCase_017045_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017045_2 "tions.textureprojlod.isampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017045, VkglTestCase_017045_1, VkglTestCase_017045_2);

#define VkglTestCase_017046_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017046_2 "ions.textureprojlod.isampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017046, VkglTestCase_017046_1, VkglTestCase_017046_2);

#define VkglTestCase_017047_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017047_2 "tions.textureprojlod.usampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017047, VkglTestCase_017047_1, VkglTestCase_017047_2);

#define VkglTestCase_017048_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017048_2 "ions.textureprojlod.usampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017048, VkglTestCase_017048_1, VkglTestCase_017048_2);

#define VkglTestCase_017049_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017049_2 "ns.textureprojlod.sampler2d_vec4_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017049, VkglTestCase_017049_1, VkglTestCase_017049_2);

#define VkglTestCase_017050_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017050_2 "s.textureprojlod.sampler2d_vec4_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017050, VkglTestCase_017050_1, VkglTestCase_017050_2);

#define VkglTestCase_017051_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017051_2 "ns.textureprojlod.sampler2d_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017051, VkglTestCase_017051_1, VkglTestCase_017051_2);

#define VkglTestCase_017052_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017052_2 "s.textureprojlod.sampler2d_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017052, VkglTestCase_017052_1, VkglTestCase_017052_2);

#define VkglTestCase_017053_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017053_2 "tions.textureprojlod.isampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017053, VkglTestCase_017053_1, VkglTestCase_017053_2);

#define VkglTestCase_017054_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017054_2 "ions.textureprojlod.isampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017054, VkglTestCase_017054_1, VkglTestCase_017054_2);

#define VkglTestCase_017055_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017055_2 "tions.textureprojlod.usampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017055, VkglTestCase_017055_1, VkglTestCase_017055_2);

#define VkglTestCase_017056_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017056_2 "ions.textureprojlod.usampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017056, VkglTestCase_017056_1, VkglTestCase_017056_2);

#define VkglTestCase_017057_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017057_2 "tions.textureprojlod.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017057, VkglTestCase_017057_1, VkglTestCase_017057_2);

#define VkglTestCase_017058_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017058_2 "ions.textureprojlod.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017058, VkglTestCase_017058_1, VkglTestCase_017058_2);

#define VkglTestCase_017059_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017059_2 "tions.textureprojlod.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017059, VkglTestCase_017059_1, VkglTestCase_017059_2);

#define VkglTestCase_017060_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017060_2 "ions.textureprojlod.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017060, VkglTestCase_017060_1, VkglTestCase_017060_2);

#define VkglTestCase_017061_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017061_2 "nctions.textureprojlod.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017061, VkglTestCase_017061_1, VkglTestCase_017061_2);

#define VkglTestCase_017062_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017062_2 "ctions.textureprojlod.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017062, VkglTestCase_017062_1, VkglTestCase_017062_2);

#define VkglTestCase_017063_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017063_2 "nctions.textureprojlod.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017063, VkglTestCase_017063_1, VkglTestCase_017063_2);

#define VkglTestCase_017064_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017064_2 "ctions.textureprojlod.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017064, VkglTestCase_017064_1, VkglTestCase_017064_2);

#define VkglTestCase_017065_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017065_2 "tions.textureprojlod.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017065, VkglTestCase_017065_1, VkglTestCase_017065_2);

#define VkglTestCase_017066_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017066_2 "ions.textureprojlod.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017066, VkglTestCase_017066_1, VkglTestCase_017066_2);
