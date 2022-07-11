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

#define VkglTestCase_017253_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017253_2 "ctions.texturesize.sampler2d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017253, VkglTestCase_017253_1, VkglTestCase_017253_2);

#define VkglTestCase_017254_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017254_2 "tions.texturesize.sampler2d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017254, VkglTestCase_017254_1, VkglTestCase_017254_2);

#define VkglTestCase_017255_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017255_2 "ctions.texturesize.sampler2d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017255, VkglTestCase_017255_1, VkglTestCase_017255_2);

#define VkglTestCase_017256_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017256_2 "tions.texturesize.sampler2d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017256, VkglTestCase_017256_1, VkglTestCase_017256_2);

#define VkglTestCase_017257_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017257_2 "functions.texturesize.isampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017257, VkglTestCase_017257_1, VkglTestCase_017257_2);

#define VkglTestCase_017258_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017258_2 "unctions.texturesize.isampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017258, VkglTestCase_017258_1, VkglTestCase_017258_2);

#define VkglTestCase_017259_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017259_2 "functions.texturesize.usampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017259, VkglTestCase_017259_1, VkglTestCase_017259_2);

#define VkglTestCase_017260_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017260_2 "unctions.texturesize.usampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017260, VkglTestCase_017260_1, VkglTestCase_017260_2);

#define VkglTestCase_017261_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017261_2 "ctions.texturesize.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017261, VkglTestCase_017261_1, VkglTestCase_017261_2);

#define VkglTestCase_017262_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017262_2 "tions.texturesize.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017262, VkglTestCase_017262_1, VkglTestCase_017262_2);

#define VkglTestCase_017263_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017263_2 "ctions.texturesize.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017263, VkglTestCase_017263_1, VkglTestCase_017263_2);

#define VkglTestCase_017264_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017264_2 "tions.texturesize.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017264, VkglTestCase_017264_1, VkglTestCase_017264_2);

#define VkglTestCase_017265_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017265_2 "ctions.texturesize.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017265, VkglTestCase_017265_1, VkglTestCase_017265_2);

#define VkglTestCase_017266_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017266_2 "tions.texturesize.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017266, VkglTestCase_017266_1, VkglTestCase_017266_2);

#define VkglTestCase_017267_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017267_2 "functions.texturesize.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017267, VkglTestCase_017267_1, VkglTestCase_017267_2);

#define VkglTestCase_017268_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017268_2 "unctions.texturesize.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017268, VkglTestCase_017268_1, VkglTestCase_017268_2);

#define VkglTestCase_017269_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017269_2 "functions.texturesize.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017269, VkglTestCase_017269_1, VkglTestCase_017269_2);

#define VkglTestCase_017270_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017270_2 "unctions.texturesize.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017270, VkglTestCase_017270_1, VkglTestCase_017270_2);

#define VkglTestCase_017271_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017271_2 "tions.texturesize.samplercube_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017271, VkglTestCase_017271_1, VkglTestCase_017271_2);

#define VkglTestCase_017272_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017272_2 "ions.texturesize.samplercube_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017272, VkglTestCase_017272_1, VkglTestCase_017272_2);

#define VkglTestCase_017273_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017273_2 "tions.texturesize.samplercube_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017273, VkglTestCase_017273_1, VkglTestCase_017273_2);

#define VkglTestCase_017274_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017274_2 "ions.texturesize.samplercube_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017274, VkglTestCase_017274_1, VkglTestCase_017274_2);

#define VkglTestCase_017275_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017275_2 "unctions.texturesize.isamplercube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017275, VkglTestCase_017275_1, VkglTestCase_017275_2);

#define VkglTestCase_017276_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017276_2 "nctions.texturesize.isamplercube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017276, VkglTestCase_017276_1, VkglTestCase_017276_2);

#define VkglTestCase_017277_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017277_2 "unctions.texturesize.usamplercube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017277, VkglTestCase_017277_1, VkglTestCase_017277_2);

#define VkglTestCase_017278_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017278_2 "nctions.texturesize.usamplercube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017278, VkglTestCase_017278_1, VkglTestCase_017278_2);

#define VkglTestCase_017279_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017279_2 "tions.texturesize.samplercubeshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017279, VkglTestCase_017279_1, VkglTestCase_017279_2);

#define VkglTestCase_017280_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017280_2 "ions.texturesize.samplercubeshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017280, VkglTestCase_017280_1, VkglTestCase_017280_2);

#define VkglTestCase_017281_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017281_2 "ions.texturesize.sampler2darray_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017281, VkglTestCase_017281_1, VkglTestCase_017281_2);

#define VkglTestCase_017282_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017282_2 "ons.texturesize.sampler2darray_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017282, VkglTestCase_017282_1, VkglTestCase_017282_2);

#define VkglTestCase_017283_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017283_2 "ions.texturesize.sampler2darray_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017283, VkglTestCase_017283_1, VkglTestCase_017283_2);

#define VkglTestCase_017284_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017284_2 "ons.texturesize.sampler2darray_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017284, VkglTestCase_017284_1, VkglTestCase_017284_2);

#define VkglTestCase_017285_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017285_2 "ctions.texturesize.isampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017285, VkglTestCase_017285_1, VkglTestCase_017285_2);

#define VkglTestCase_017286_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017286_2 "tions.texturesize.isampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017286, VkglTestCase_017286_1, VkglTestCase_017286_2);

#define VkglTestCase_017287_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017287_2 "ctions.texturesize.usampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017287, VkglTestCase_017287_1, VkglTestCase_017287_2);

#define VkglTestCase_017288_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_017288_2 "tions.texturesize.usampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017288, VkglTestCase_017288_1, VkglTestCase_017288_2);

#define VkglTestCase_017289_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017289_2 "ions.texturesize.sampler2darrayshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017289, VkglTestCase_017289_1, VkglTestCase_017289_2);

#define VkglTestCase_017290_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017290_2 "ons.texturesize.sampler2darrayshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017290, VkglTestCase_017290_1, VkglTestCase_017290_2);
