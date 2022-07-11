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

#define VkglTestCase_017205_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017205_2 "nctions.texelfetch.sampler2d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017205, VkglTestCase_017205_1, VkglTestCase_017205_2);

#define VkglTestCase_017206_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017206_2 "ctions.texelfetch.sampler2d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017206, VkglTestCase_017206_1, VkglTestCase_017206_2);

#define VkglTestCase_017207_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017207_2 "nctions.texelfetch.sampler2d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017207, VkglTestCase_017207_1, VkglTestCase_017207_2);

#define VkglTestCase_017208_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017208_2 "ctions.texelfetch.sampler2d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017208, VkglTestCase_017208_1, VkglTestCase_017208_2);

#define VkglTestCase_017209_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017209_2 "functions.texelfetch.isampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017209, VkglTestCase_017209_1, VkglTestCase_017209_2);

#define VkglTestCase_017210_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017210_2 "unctions.texelfetch.isampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017210, VkglTestCase_017210_1, VkglTestCase_017210_2);

#define VkglTestCase_017211_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017211_2 "functions.texelfetch.usampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017211, VkglTestCase_017211_1, VkglTestCase_017211_2);

#define VkglTestCase_017212_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017212_2 "unctions.texelfetch.usampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017212, VkglTestCase_017212_1, VkglTestCase_017212_2);

#define VkglTestCase_017213_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017213_2 "ions.texelfetch.sampler2darray_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017213, VkglTestCase_017213_1, VkglTestCase_017213_2);

#define VkglTestCase_017214_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017214_2 "ons.texelfetch.sampler2darray_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017214, VkglTestCase_017214_1, VkglTestCase_017214_2);

#define VkglTestCase_017215_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017215_2 "ions.texelfetch.sampler2darray_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017215, VkglTestCase_017215_1, VkglTestCase_017215_2);

#define VkglTestCase_017216_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017216_2 "ons.texelfetch.sampler2darray_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017216, VkglTestCase_017216_1, VkglTestCase_017216_2);

#define VkglTestCase_017217_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017217_2 "nctions.texelfetch.isampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017217, VkglTestCase_017217_1, VkglTestCase_017217_2);

#define VkglTestCase_017218_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017218_2 "ctions.texelfetch.isampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017218, VkglTestCase_017218_1, VkglTestCase_017218_2);

#define VkglTestCase_017219_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017219_2 "nctions.texelfetch.usampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017219, VkglTestCase_017219_1, VkglTestCase_017219_2);

#define VkglTestCase_017220_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017220_2 "ctions.texelfetch.usampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017220, VkglTestCase_017220_1, VkglTestCase_017220_2);

#define VkglTestCase_017221_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017221_2 "nctions.texelfetch.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017221, VkglTestCase_017221_1, VkglTestCase_017221_2);

#define VkglTestCase_017222_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017222_2 "ctions.texelfetch.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017222, VkglTestCase_017222_1, VkglTestCase_017222_2);

#define VkglTestCase_017223_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017223_2 "nctions.texelfetch.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017223, VkglTestCase_017223_1, VkglTestCase_017223_2);

#define VkglTestCase_017224_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017224_2 "ctions.texelfetch.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017224, VkglTestCase_017224_1, VkglTestCase_017224_2);

#define VkglTestCase_017225_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017225_2 "functions.texelfetch.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017225, VkglTestCase_017225_1, VkglTestCase_017225_2);

#define VkglTestCase_017226_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017226_2 "unctions.texelfetch.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017226, VkglTestCase_017226_1, VkglTestCase_017226_2);

#define VkglTestCase_017227_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017227_2 "functions.texelfetch.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017227, VkglTestCase_017227_1, VkglTestCase_017227_2);

#define VkglTestCase_017228_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017228_2 "unctions.texelfetch.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017228, VkglTestCase_017228_1, VkglTestCase_017228_2);
