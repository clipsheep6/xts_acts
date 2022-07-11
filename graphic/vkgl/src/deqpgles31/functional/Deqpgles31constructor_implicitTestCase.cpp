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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003860_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003860_2 "ys.es31.constructor.implicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003860, VkglTestCase_003860_1, VkglTestCase_003860_2);

#define VkglTestCase_003861_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003861_2 "s.es31.constructor.implicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003861, VkglTestCase_003861_1, VkglTestCase_003861_2);

#define VkglTestCase_003862_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003862_2 "ys.es31.constructor.implicit.float_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003862, VkglTestCase_003862_1, VkglTestCase_003862_2);

#define VkglTestCase_003863_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003863_2 "s.es31.constructor.implicit.float_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003863, VkglTestCase_003863_1, VkglTestCase_003863_2);

#define VkglTestCase_003864_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003864_2 "ays.es31.constructor.implicit.int_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003864, VkglTestCase_003864_1, VkglTestCase_003864_2);

#define VkglTestCase_003865_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003865_2 "ys.es31.constructor.implicit.int_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003865, VkglTestCase_003865_1, VkglTestCase_003865_2);

#define VkglTestCase_003866_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003866_2 "ys.es31.constructor.implicit.int_4x4x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003866, VkglTestCase_003866_1, VkglTestCase_003866_2);

#define VkglTestCase_003867_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003867_2 "s.es31.constructor.implicit.int_4x4x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003867, VkglTestCase_003867_1, VkglTestCase_003867_2);

#define VkglTestCase_003868_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003868_2 "ys.es31.constructor.implicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003868, VkglTestCase_003868_1, VkglTestCase_003868_2);

#define VkglTestCase_003869_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003869_2 "s.es31.constructor.implicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003869, VkglTestCase_003869_1, VkglTestCase_003869_2);

#define VkglTestCase_003870_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003870_2 "ys.es31.constructor.implicit.bool_2x1x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003870, VkglTestCase_003870_1, VkglTestCase_003870_2);

#define VkglTestCase_003871_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003871_2 "s.es31.constructor.implicit.bool_2x1x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003871, VkglTestCase_003871_1, VkglTestCase_003871_2);

#define VkglTestCase_003872_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003872_2 "ys.es31.constructor.implicit.struct_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003872, VkglTestCase_003872_1, VkglTestCase_003872_2);

#define VkglTestCase_003873_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003873_2 "s.es31.constructor.implicit.struct_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003873, VkglTestCase_003873_1, VkglTestCase_003873_2);

#define VkglTestCase_003874_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003874_2 "s.es31.constructor.implicit.struct_4x1x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003874, VkglTestCase_003874_1, VkglTestCase_003874_2);

#define VkglTestCase_003875_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_003875_2 ".es31.constructor.implicit.struct_4x1x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003875, VkglTestCase_003875_1, VkglTestCase_003875_2);

#define VkglTestCase_003876_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003876_2 "ays.es31.constructor.implicit.vec3_4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003876, VkglTestCase_003876_1, VkglTestCase_003876_2);

#define VkglTestCase_003877_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003877_2 "ys.es31.constructor.implicit.vec3_4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003877, VkglTestCase_003877_1, VkglTestCase_003877_2);

#define VkglTestCase_003878_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003878_2 "s.es31.constructor.implicit.ivec3_3x2x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003878, VkglTestCase_003878_1, VkglTestCase_003878_2);

#define VkglTestCase_003879_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_003879_2 ".es31.constructor.implicit.ivec3_3x2x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003879, VkglTestCase_003879_1, VkglTestCase_003879_2);

#define VkglTestCase_003880_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003880_2 "s.es31.constructor.implicit.bvec3_1x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003880, VkglTestCase_003880_1, VkglTestCase_003880_2);

#define VkglTestCase_003881_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_003881_2 ".es31.constructor.implicit.bvec3_1x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003881, VkglTestCase_003881_1, VkglTestCase_003881_2);

#define VkglTestCase_003882_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003882_2 "ays.es31.constructor.implicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003882, VkglTestCase_003882_1, VkglTestCase_003882_2);

#define VkglTestCase_003883_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003883_2 "ys.es31.constructor.implicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003883, VkglTestCase_003883_1, VkglTestCase_003883_2);

#define VkglTestCase_003884_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003884_2 "ys.es31.constructor.implicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003884, VkglTestCase_003884_1, VkglTestCase_003884_2);

#define VkglTestCase_003885_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003885_2 "s.es31.constructor.implicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003885, VkglTestCase_003885_1, VkglTestCase_003885_2);

#define VkglTestCase_003886_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003886_2 "ays.es31.constructor.implicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003886, VkglTestCase_003886_1, VkglTestCase_003886_2);

#define VkglTestCase_003887_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003887_2 "ys.es31.constructor.implicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003887, VkglTestCase_003887_1, VkglTestCase_003887_2);

#define VkglTestCase_003888_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31."
#define VkglTestCase_003888_2 "constructor.implicit.int_high_dimensional_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003888, VkglTestCase_003888_1, VkglTestCase_003888_2);

#define VkglTestCase_003889_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.c"
#define VkglTestCase_003889_2 "onstructor.implicit.int_high_dimensional_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003889, VkglTestCase_003889_1, VkglTestCase_003889_2);

#define VkglTestCase_004152_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004152_2 "ys.es32.constructor.implicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004152, VkglTestCase_004152_1, VkglTestCase_004152_2);

#define VkglTestCase_004153_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004153_2 "s.es32.constructor.implicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004153, VkglTestCase_004153_1, VkglTestCase_004153_2);

#define VkglTestCase_004154_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004154_2 "ys.es32.constructor.implicit.float_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004154, VkglTestCase_004154_1, VkglTestCase_004154_2);

#define VkglTestCase_004155_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004155_2 "s.es32.constructor.implicit.float_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004155, VkglTestCase_004155_1, VkglTestCase_004155_2);

#define VkglTestCase_004156_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004156_2 "ays.es32.constructor.implicit.int_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004156, VkglTestCase_004156_1, VkglTestCase_004156_2);

#define VkglTestCase_004157_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004157_2 "ys.es32.constructor.implicit.int_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004157, VkglTestCase_004157_1, VkglTestCase_004157_2);

#define VkglTestCase_004158_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004158_2 "ys.es32.constructor.implicit.int_4x4x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004158, VkglTestCase_004158_1, VkglTestCase_004158_2);

#define VkglTestCase_004159_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004159_2 "s.es32.constructor.implicit.int_4x4x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004159, VkglTestCase_004159_1, VkglTestCase_004159_2);

#define VkglTestCase_004160_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004160_2 "ys.es32.constructor.implicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004160, VkglTestCase_004160_1, VkglTestCase_004160_2);

#define VkglTestCase_004161_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004161_2 "s.es32.constructor.implicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004161, VkglTestCase_004161_1, VkglTestCase_004161_2);

#define VkglTestCase_004162_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004162_2 "ys.es32.constructor.implicit.bool_2x1x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004162, VkglTestCase_004162_1, VkglTestCase_004162_2);

#define VkglTestCase_004163_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004163_2 "s.es32.constructor.implicit.bool_2x1x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004163, VkglTestCase_004163_1, VkglTestCase_004163_2);

#define VkglTestCase_004164_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004164_2 "ys.es32.constructor.implicit.struct_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004164, VkglTestCase_004164_1, VkglTestCase_004164_2);

#define VkglTestCase_004165_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004165_2 "s.es32.constructor.implicit.struct_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004165, VkglTestCase_004165_1, VkglTestCase_004165_2);

#define VkglTestCase_004166_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004166_2 "s.es32.constructor.implicit.struct_4x1x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004166, VkglTestCase_004166_1, VkglTestCase_004166_2);

#define VkglTestCase_004167_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_004167_2 ".es32.constructor.implicit.struct_4x1x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004167, VkglTestCase_004167_1, VkglTestCase_004167_2);

#define VkglTestCase_004168_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004168_2 "ays.es32.constructor.implicit.vec3_4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004168, VkglTestCase_004168_1, VkglTestCase_004168_2);

#define VkglTestCase_004169_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004169_2 "ys.es32.constructor.implicit.vec3_4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004169, VkglTestCase_004169_1, VkglTestCase_004169_2);

#define VkglTestCase_004170_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004170_2 "s.es32.constructor.implicit.ivec3_3x2x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004170, VkglTestCase_004170_1, VkglTestCase_004170_2);

#define VkglTestCase_004171_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_004171_2 ".es32.constructor.implicit.ivec3_3x2x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004171, VkglTestCase_004171_1, VkglTestCase_004171_2);

#define VkglTestCase_004172_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004172_2 "s.es32.constructor.implicit.bvec3_1x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004172, VkglTestCase_004172_1, VkglTestCase_004172_2);

#define VkglTestCase_004173_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_004173_2 ".es32.constructor.implicit.bvec3_1x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004173, VkglTestCase_004173_1, VkglTestCase_004173_2);

#define VkglTestCase_004174_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004174_2 "ays.es32.constructor.implicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004174, VkglTestCase_004174_1, VkglTestCase_004174_2);

#define VkglTestCase_004175_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004175_2 "ys.es32.constructor.implicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004175, VkglTestCase_004175_1, VkglTestCase_004175_2);

#define VkglTestCase_004176_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004176_2 "ys.es32.constructor.implicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004176, VkglTestCase_004176_1, VkglTestCase_004176_2);

#define VkglTestCase_004177_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004177_2 "s.es32.constructor.implicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004177, VkglTestCase_004177_1, VkglTestCase_004177_2);

#define VkglTestCase_004178_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004178_2 "ays.es32.constructor.implicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004178, VkglTestCase_004178_1, VkglTestCase_004178_2);

#define VkglTestCase_004179_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004179_2 "ys.es32.constructor.implicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004179, VkglTestCase_004179_1, VkglTestCase_004179_2);

#define VkglTestCase_004180_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32."
#define VkglTestCase_004180_2 "constructor.implicit.int_high_dimensional_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004180, VkglTestCase_004180_1, VkglTestCase_004180_2);

#define VkglTestCase_004181_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.c"
#define VkglTestCase_004181_2 "onstructor.implicit.int_high_dimensional_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004181, VkglTestCase_004181_1, VkglTestCase_004181_2);
