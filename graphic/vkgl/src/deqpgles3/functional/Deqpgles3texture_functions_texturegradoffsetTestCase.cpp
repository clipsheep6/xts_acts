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

#define VkglTestCase_017125_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017125_2 "ons.texturegradoffset.sampler2d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017125, VkglTestCase_017125_1, VkglTestCase_017125_2);

#define VkglTestCase_017126_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017126_2 "ns.texturegradoffset.sampler2d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017126, VkglTestCase_017126_1, VkglTestCase_017126_2);

#define VkglTestCase_017127_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017127_2 "ons.texturegradoffset.sampler2d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017127, VkglTestCase_017127_1, VkglTestCase_017127_2);

#define VkglTestCase_017128_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017128_2 "ns.texturegradoffset.sampler2d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017128, VkglTestCase_017128_1, VkglTestCase_017128_2);

#define VkglTestCase_017129_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017129_2 "ctions.texturegradoffset.isampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017129, VkglTestCase_017129_1, VkglTestCase_017129_2);

#define VkglTestCase_017130_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017130_2 "tions.texturegradoffset.isampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017130, VkglTestCase_017130_1, VkglTestCase_017130_2);

#define VkglTestCase_017131_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017131_2 "ctions.texturegradoffset.usampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017131, VkglTestCase_017131_1, VkglTestCase_017131_2);

#define VkglTestCase_017132_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017132_2 "tions.texturegradoffset.usampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017132, VkglTestCase_017132_1, VkglTestCase_017132_2);

#define VkglTestCase_017133_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017133_2 "s.texturegradoffset.sampler2darray_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017133, VkglTestCase_017133_1, VkglTestCase_017133_2);

#define VkglTestCase_017134_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017134_2 ".texturegradoffset.sampler2darray_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017134, VkglTestCase_017134_1, VkglTestCase_017134_2);

#define VkglTestCase_017135_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017135_2 "s.texturegradoffset.sampler2darray_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017135, VkglTestCase_017135_1, VkglTestCase_017135_2);

#define VkglTestCase_017136_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017136_2 ".texturegradoffset.sampler2darray_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017136, VkglTestCase_017136_1, VkglTestCase_017136_2);

#define VkglTestCase_017137_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017137_2 "ons.texturegradoffset.isampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017137, VkglTestCase_017137_1, VkglTestCase_017137_2);

#define VkglTestCase_017138_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017138_2 "ns.texturegradoffset.isampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017138, VkglTestCase_017138_1, VkglTestCase_017138_2);

#define VkglTestCase_017139_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017139_2 "ons.texturegradoffset.usampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017139, VkglTestCase_017139_1, VkglTestCase_017139_2);

#define VkglTestCase_017140_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017140_2 "ns.texturegradoffset.usampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017140, VkglTestCase_017140_1, VkglTestCase_017140_2);

#define VkglTestCase_017141_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017141_2 "ons.texturegradoffset.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017141, VkglTestCase_017141_1, VkglTestCase_017141_2);

#define VkglTestCase_017142_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017142_2 "ns.texturegradoffset.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017142, VkglTestCase_017142_1, VkglTestCase_017142_2);

#define VkglTestCase_017143_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017143_2 "ons.texturegradoffset.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017143, VkglTestCase_017143_1, VkglTestCase_017143_2);

#define VkglTestCase_017144_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017144_2 "ns.texturegradoffset.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017144, VkglTestCase_017144_1, VkglTestCase_017144_2);

#define VkglTestCase_017145_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017145_2 "ctions.texturegradoffset.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017145, VkglTestCase_017145_1, VkglTestCase_017145_2);

#define VkglTestCase_017146_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017146_2 "tions.texturegradoffset.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017146, VkglTestCase_017146_1, VkglTestCase_017146_2);

#define VkglTestCase_017147_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017147_2 "ctions.texturegradoffset.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017147, VkglTestCase_017147_1, VkglTestCase_017147_2);

#define VkglTestCase_017148_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017148_2 "tions.texturegradoffset.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017148, VkglTestCase_017148_1, VkglTestCase_017148_2);

#define VkglTestCase_017149_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017149_2 "ons.texturegradoffset.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017149, VkglTestCase_017149_1, VkglTestCase_017149_2);

#define VkglTestCase_017150_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017150_2 "ns.texturegradoffset.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017150, VkglTestCase_017150_1, VkglTestCase_017150_2);

#define VkglTestCase_017151_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017151_2 "s.texturegradoffset.sampler2darrayshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017151, VkglTestCase_017151_1, VkglTestCase_017151_2);

#define VkglTestCase_017152_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017152_2 ".texturegradoffset.sampler2darrayshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017152, VkglTestCase_017152_1, VkglTestCase_017152_2);
