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

#define VkglTestCase_017229_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017229_2 "ions.texelfetchoffset.sampler2d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017229, VkglTestCase_017229_1, VkglTestCase_017229_2);

#define VkglTestCase_017230_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017230_2 "ons.texelfetchoffset.sampler2d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017230, VkglTestCase_017230_1, VkglTestCase_017230_2);

#define VkglTestCase_017231_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017231_2 "ions.texelfetchoffset.sampler2d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017231, VkglTestCase_017231_1, VkglTestCase_017231_2);

#define VkglTestCase_017232_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017232_2 "ons.texelfetchoffset.sampler2d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017232, VkglTestCase_017232_1, VkglTestCase_017232_2);

#define VkglTestCase_017233_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017233_2 "ctions.texelfetchoffset.isampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017233, VkglTestCase_017233_1, VkglTestCase_017233_2);

#define VkglTestCase_017234_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017234_2 "tions.texelfetchoffset.isampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017234, VkglTestCase_017234_1, VkglTestCase_017234_2);

#define VkglTestCase_017235_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017235_2 "ctions.texelfetchoffset.usampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017235, VkglTestCase_017235_1, VkglTestCase_017235_2);

#define VkglTestCase_017236_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017236_2 "tions.texelfetchoffset.usampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017236, VkglTestCase_017236_1, VkglTestCase_017236_2);

#define VkglTestCase_017237_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017237_2 "s.texelfetchoffset.sampler2darray_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017237, VkglTestCase_017237_1, VkglTestCase_017237_2);

#define VkglTestCase_017238_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017238_2 ".texelfetchoffset.sampler2darray_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017238, VkglTestCase_017238_1, VkglTestCase_017238_2);

#define VkglTestCase_017239_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017239_2 "s.texelfetchoffset.sampler2darray_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017239, VkglTestCase_017239_1, VkglTestCase_017239_2);

#define VkglTestCase_017240_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017240_2 ".texelfetchoffset.sampler2darray_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017240, VkglTestCase_017240_1, VkglTestCase_017240_2);

#define VkglTestCase_017241_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017241_2 "ions.texelfetchoffset.isampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017241, VkglTestCase_017241_1, VkglTestCase_017241_2);

#define VkglTestCase_017242_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017242_2 "ons.texelfetchoffset.isampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017242, VkglTestCase_017242_1, VkglTestCase_017242_2);

#define VkglTestCase_017243_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017243_2 "ions.texelfetchoffset.usampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017243, VkglTestCase_017243_1, VkglTestCase_017243_2);

#define VkglTestCase_017244_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017244_2 "ons.texelfetchoffset.usampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017244, VkglTestCase_017244_1, VkglTestCase_017244_2);

#define VkglTestCase_017245_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017245_2 "ions.texelfetchoffset.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017245, VkglTestCase_017245_1, VkglTestCase_017245_2);

#define VkglTestCase_017246_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017246_2 "ons.texelfetchoffset.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017246, VkglTestCase_017246_1, VkglTestCase_017246_2);

#define VkglTestCase_017247_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017247_2 "ions.texelfetchoffset.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017247, VkglTestCase_017247_1, VkglTestCase_017247_2);

#define VkglTestCase_017248_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017248_2 "ons.texelfetchoffset.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017248, VkglTestCase_017248_1, VkglTestCase_017248_2);

#define VkglTestCase_017249_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017249_2 "ctions.texelfetchoffset.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017249, VkglTestCase_017249_1, VkglTestCase_017249_2);

#define VkglTestCase_017250_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017250_2 "tions.texelfetchoffset.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017250, VkglTestCase_017250_1, VkglTestCase_017250_2);

#define VkglTestCase_017251_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017251_2 "ctions.texelfetchoffset.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017251, VkglTestCase_017251_1, VkglTestCase_017251_2);

#define VkglTestCase_017252_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017252_2 "tions.texelfetchoffset.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017252, VkglTestCase_017252_1, VkglTestCase_017252_2);
