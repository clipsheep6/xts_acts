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

#define VkglTestCase_016825_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016825_2 "unctions.texture.sampler2d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016825, VkglTestCase_016825_1, VkglTestCase_016825_2);

#define VkglTestCase_016826_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016826_2 "nctions.texture.sampler2d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016826, VkglTestCase_016826_1, VkglTestCase_016826_2);

#define VkglTestCase_016827_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016827_2 "unctions.texture.sampler2d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016827, VkglTestCase_016827_1, VkglTestCase_016827_2);

#define VkglTestCase_016828_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016828_2 "nctions.texture.sampler2d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016828, VkglTestCase_016828_1, VkglTestCase_016828_2);

#define VkglTestCase_016829_1 "dEQP-GLES3.functional.shaders.textur"
#define VkglTestCase_016829_2 "e_functions.texture.isampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016829, VkglTestCase_016829_1, VkglTestCase_016829_2);

#define VkglTestCase_016830_1 "dEQP-GLES3.functional.shaders.texture"
#define VkglTestCase_016830_2 "_functions.texture.isampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016830, VkglTestCase_016830_1, VkglTestCase_016830_2);

#define VkglTestCase_016831_1 "dEQP-GLES3.functional.shaders.textur"
#define VkglTestCase_016831_2 "e_functions.texture.usampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016831, VkglTestCase_016831_1, VkglTestCase_016831_2);

#define VkglTestCase_016832_1 "dEQP-GLES3.functional.shaders.texture"
#define VkglTestCase_016832_2 "_functions.texture.usampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016832, VkglTestCase_016832_1, VkglTestCase_016832_2);

#define VkglTestCase_016833_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016833_2 "tions.texture.sampler2d_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016833, VkglTestCase_016833_1, VkglTestCase_016833_2);

#define VkglTestCase_016834_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016834_2 "tions.texture.sampler2d_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016834, VkglTestCase_016834_1, VkglTestCase_016834_2);

#define VkglTestCase_016835_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016835_2 "nctions.texture.isampler2d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016835, VkglTestCase_016835_1, VkglTestCase_016835_2);

#define VkglTestCase_016836_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016836_2 "nctions.texture.usampler2d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016836, VkglTestCase_016836_1, VkglTestCase_016836_2);

#define VkglTestCase_016837_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016837_2 "nctions.texture.samplercube_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016837, VkglTestCase_016837_1, VkglTestCase_016837_2);

#define VkglTestCase_016838_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016838_2 "ctions.texture.samplercube_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016838, VkglTestCase_016838_1, VkglTestCase_016838_2);

#define VkglTestCase_016839_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016839_2 "nctions.texture.samplercube_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016839, VkglTestCase_016839_1, VkglTestCase_016839_2);

#define VkglTestCase_016840_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016840_2 "ctions.texture.samplercube_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016840, VkglTestCase_016840_1, VkglTestCase_016840_2);

#define VkglTestCase_016841_1 "dEQP-GLES3.functional.shaders.texture"
#define VkglTestCase_016841_2 "_functions.texture.isamplercube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016841, VkglTestCase_016841_1, VkglTestCase_016841_2);

#define VkglTestCase_016842_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_016842_2 "functions.texture.isamplercube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016842, VkglTestCase_016842_1, VkglTestCase_016842_2);

#define VkglTestCase_016843_1 "dEQP-GLES3.functional.shaders.texture"
#define VkglTestCase_016843_2 "_functions.texture.usamplercube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016843, VkglTestCase_016843_1, VkglTestCase_016843_2);

#define VkglTestCase_016844_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_016844_2 "functions.texture.usamplercube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016844, VkglTestCase_016844_1, VkglTestCase_016844_2);

#define VkglTestCase_016845_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016845_2 "ions.texture.samplercube_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016845, VkglTestCase_016845_1, VkglTestCase_016845_2);

#define VkglTestCase_016846_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016846_2 "ions.texture.samplercube_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016846, VkglTestCase_016846_1, VkglTestCase_016846_2);

#define VkglTestCase_016847_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016847_2 "ctions.texture.isamplercube_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016847, VkglTestCase_016847_1, VkglTestCase_016847_2);

#define VkglTestCase_016848_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016848_2 "ctions.texture.usamplercube_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016848, VkglTestCase_016848_1, VkglTestCase_016848_2);

#define VkglTestCase_016849_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016849_2 "ctions.texture.sampler2darray_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016849, VkglTestCase_016849_1, VkglTestCase_016849_2);

#define VkglTestCase_016850_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016850_2 "tions.texture.sampler2darray_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016850, VkglTestCase_016850_1, VkglTestCase_016850_2);

#define VkglTestCase_016851_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016851_2 "ctions.texture.sampler2darray_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016851, VkglTestCase_016851_1, VkglTestCase_016851_2);

#define VkglTestCase_016852_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016852_2 "tions.texture.sampler2darray_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016852, VkglTestCase_016852_1, VkglTestCase_016852_2);

#define VkglTestCase_016853_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016853_2 "unctions.texture.isampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016853, VkglTestCase_016853_1, VkglTestCase_016853_2);

#define VkglTestCase_016854_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016854_2 "nctions.texture.isampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016854, VkglTestCase_016854_1, VkglTestCase_016854_2);

#define VkglTestCase_016855_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016855_2 "unctions.texture.usampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016855, VkglTestCase_016855_1, VkglTestCase_016855_2);

#define VkglTestCase_016856_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016856_2 "nctions.texture.usampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016856, VkglTestCase_016856_1, VkglTestCase_016856_2);

#define VkglTestCase_016857_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016857_2 "ns.texture.sampler2darray_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016857, VkglTestCase_016857_1, VkglTestCase_016857_2);

#define VkglTestCase_016858_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_016858_2 "ns.texture.sampler2darray_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016858, VkglTestCase_016858_1, VkglTestCase_016858_2);

#define VkglTestCase_016859_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016859_2 "tions.texture.isampler2darray_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016859, VkglTestCase_016859_1, VkglTestCase_016859_2);

#define VkglTestCase_016860_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016860_2 "tions.texture.usampler2darray_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016860, VkglTestCase_016860_1, VkglTestCase_016860_2);

#define VkglTestCase_016861_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016861_2 "unctions.texture.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016861, VkglTestCase_016861_1, VkglTestCase_016861_2);

#define VkglTestCase_016862_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016862_2 "nctions.texture.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016862, VkglTestCase_016862_1, VkglTestCase_016862_2);

#define VkglTestCase_016863_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016863_2 "unctions.texture.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016863, VkglTestCase_016863_1, VkglTestCase_016863_2);

#define VkglTestCase_016864_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016864_2 "nctions.texture.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016864, VkglTestCase_016864_1, VkglTestCase_016864_2);

#define VkglTestCase_016865_1 "dEQP-GLES3.functional.shaders.textur"
#define VkglTestCase_016865_2 "e_functions.texture.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016865, VkglTestCase_016865_1, VkglTestCase_016865_2);

#define VkglTestCase_016866_1 "dEQP-GLES3.functional.shaders.texture"
#define VkglTestCase_016866_2 "_functions.texture.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016866, VkglTestCase_016866_1, VkglTestCase_016866_2);

#define VkglTestCase_016867_1 "dEQP-GLES3.functional.shaders.textur"
#define VkglTestCase_016867_2 "e_functions.texture.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016867, VkglTestCase_016867_1, VkglTestCase_016867_2);

#define VkglTestCase_016868_1 "dEQP-GLES3.functional.shaders.texture"
#define VkglTestCase_016868_2 "_functions.texture.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016868, VkglTestCase_016868_1, VkglTestCase_016868_2);

#define VkglTestCase_016869_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016869_2 "tions.texture.sampler3d_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016869, VkglTestCase_016869_1, VkglTestCase_016869_2);

#define VkglTestCase_016870_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016870_2 "tions.texture.sampler3d_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016870, VkglTestCase_016870_1, VkglTestCase_016870_2);

#define VkglTestCase_016871_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016871_2 "nctions.texture.isampler3d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016871, VkglTestCase_016871_1, VkglTestCase_016871_2);

#define VkglTestCase_016872_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016872_2 "nctions.texture.usampler3d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016872, VkglTestCase_016872_1, VkglTestCase_016872_2);

#define VkglTestCase_016873_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016873_2 "unctions.texture.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016873, VkglTestCase_016873_1, VkglTestCase_016873_2);

#define VkglTestCase_016874_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016874_2 "nctions.texture.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016874, VkglTestCase_016874_1, VkglTestCase_016874_2);

#define VkglTestCase_016875_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016875_2 "tions.texture.sampler2dshadow_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016875, VkglTestCase_016875_1, VkglTestCase_016875_2);

#define VkglTestCase_016876_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016876_2 "nctions.texture.samplercubeshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016876, VkglTestCase_016876_1, VkglTestCase_016876_2);

#define VkglTestCase_016877_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016877_2 "ctions.texture.samplercubeshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016877, VkglTestCase_016877_1, VkglTestCase_016877_2);

#define VkglTestCase_016878_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016878_2 "ions.texture.samplercubeshadow_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016878, VkglTestCase_016878_1, VkglTestCase_016878_2);

#define VkglTestCase_016879_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016879_2 "tions.texture.sampler2darrayshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016879, VkglTestCase_016879_1, VkglTestCase_016879_2);
