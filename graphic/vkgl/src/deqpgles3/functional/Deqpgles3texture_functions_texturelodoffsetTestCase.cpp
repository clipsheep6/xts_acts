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

#define VkglTestCase_017018_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017018_2 "ions.texturelodoffset.sampler2d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017018, VkglTestCase_017018_1, VkglTestCase_017018_2);

#define VkglTestCase_017019_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017019_2 "ons.texturelodoffset.sampler2d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017019, VkglTestCase_017019_1, VkglTestCase_017019_2);

#define VkglTestCase_017020_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017020_2 "ions.texturelodoffset.sampler2d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017020, VkglTestCase_017020_1, VkglTestCase_017020_2);

#define VkglTestCase_017021_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017021_2 "ons.texturelodoffset.sampler2d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017021, VkglTestCase_017021_1, VkglTestCase_017021_2);

#define VkglTestCase_017022_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017022_2 "ctions.texturelodoffset.isampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017022, VkglTestCase_017022_1, VkglTestCase_017022_2);

#define VkglTestCase_017023_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017023_2 "tions.texturelodoffset.isampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017023, VkglTestCase_017023_1, VkglTestCase_017023_2);

#define VkglTestCase_017024_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017024_2 "ctions.texturelodoffset.usampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017024, VkglTestCase_017024_1, VkglTestCase_017024_2);

#define VkglTestCase_017025_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017025_2 "tions.texturelodoffset.usampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017025, VkglTestCase_017025_1, VkglTestCase_017025_2);

#define VkglTestCase_017026_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017026_2 "s.texturelodoffset.sampler2darray_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017026, VkglTestCase_017026_1, VkglTestCase_017026_2);

#define VkglTestCase_017027_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017027_2 ".texturelodoffset.sampler2darray_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017027, VkglTestCase_017027_1, VkglTestCase_017027_2);

#define VkglTestCase_017028_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017028_2 "s.texturelodoffset.sampler2darray_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017028, VkglTestCase_017028_1, VkglTestCase_017028_2);

#define VkglTestCase_017029_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017029_2 ".texturelodoffset.sampler2darray_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017029, VkglTestCase_017029_1, VkglTestCase_017029_2);

#define VkglTestCase_017030_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017030_2 "ions.texturelodoffset.isampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017030, VkglTestCase_017030_1, VkglTestCase_017030_2);

#define VkglTestCase_017031_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017031_2 "ons.texturelodoffset.isampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017031, VkglTestCase_017031_1, VkglTestCase_017031_2);

#define VkglTestCase_017032_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017032_2 "ons.texturelodoffset.usampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017032, VkglTestCase_017032_1, VkglTestCase_017032_2);

#define VkglTestCase_017033_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017033_2 "ions.texturelodoffset.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017033, VkglTestCase_017033_1, VkglTestCase_017033_2);

#define VkglTestCase_017034_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017034_2 "ons.texturelodoffset.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017034, VkglTestCase_017034_1, VkglTestCase_017034_2);

#define VkglTestCase_017035_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017035_2 "ons.texturelodoffset.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017035, VkglTestCase_017035_1, VkglTestCase_017035_2);

#define VkglTestCase_017036_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017036_2 "ctions.texturelodoffset.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017036, VkglTestCase_017036_1, VkglTestCase_017036_2);

#define VkglTestCase_017037_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017037_2 "tions.texturelodoffset.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017037, VkglTestCase_017037_1, VkglTestCase_017037_2);

#define VkglTestCase_017038_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017038_2 "tions.texturelodoffset.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017038, VkglTestCase_017038_1, VkglTestCase_017038_2);

#define VkglTestCase_017039_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017039_2 "ions.texturelodoffset.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017039, VkglTestCase_017039_1, VkglTestCase_017039_2);

#define VkglTestCase_017040_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017040_2 "ons.texturelodoffset.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017040, VkglTestCase_017040_1, VkglTestCase_017040_2);
