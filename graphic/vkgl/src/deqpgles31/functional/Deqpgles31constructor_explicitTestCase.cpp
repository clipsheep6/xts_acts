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

#define VkglTestCase_003830_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003830_2 "ys.es31.constructor.explicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003830, VkglTestCase_003830_1, VkglTestCase_003830_2);

#define VkglTestCase_003831_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003831_2 "s.es31.constructor.explicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003831, VkglTestCase_003831_1, VkglTestCase_003831_2);

#define VkglTestCase_003832_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003832_2 "ys.es31.constructor.explicit.float_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003832, VkglTestCase_003832_1, VkglTestCase_003832_2);

#define VkglTestCase_003833_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003833_2 "s.es31.constructor.explicit.float_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003833, VkglTestCase_003833_1, VkglTestCase_003833_2);

#define VkglTestCase_003834_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003834_2 "ays.es31.constructor.explicit.int_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003834, VkglTestCase_003834_1, VkglTestCase_003834_2);

#define VkglTestCase_003835_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003835_2 "ys.es31.constructor.explicit.int_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003835, VkglTestCase_003835_1, VkglTestCase_003835_2);

#define VkglTestCase_003836_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003836_2 "ys.es31.constructor.explicit.int_4x4x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003836, VkglTestCase_003836_1, VkglTestCase_003836_2);

#define VkglTestCase_003837_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003837_2 "s.es31.constructor.explicit.int_4x4x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003837, VkglTestCase_003837_1, VkglTestCase_003837_2);

#define VkglTestCase_003838_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003838_2 "ys.es31.constructor.explicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003838, VkglTestCase_003838_1, VkglTestCase_003838_2);

#define VkglTestCase_003839_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003839_2 "s.es31.constructor.explicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003839, VkglTestCase_003839_1, VkglTestCase_003839_2);

#define VkglTestCase_003840_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003840_2 "ys.es31.constructor.explicit.bool_2x1x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003840, VkglTestCase_003840_1, VkglTestCase_003840_2);

#define VkglTestCase_003841_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003841_2 "s.es31.constructor.explicit.bool_2x1x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003841, VkglTestCase_003841_1, VkglTestCase_003841_2);

#define VkglTestCase_003842_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003842_2 "ys.es31.constructor.explicit.struct_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003842, VkglTestCase_003842_1, VkglTestCase_003842_2);

#define VkglTestCase_003843_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003843_2 "s.es31.constructor.explicit.struct_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003843, VkglTestCase_003843_1, VkglTestCase_003843_2);

#define VkglTestCase_003844_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003844_2 "s.es31.constructor.explicit.struct_4x1x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003844, VkglTestCase_003844_1, VkglTestCase_003844_2);

#define VkglTestCase_003845_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_003845_2 ".es31.constructor.explicit.struct_4x1x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003845, VkglTestCase_003845_1, VkglTestCase_003845_2);

#define VkglTestCase_003846_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003846_2 "ays.es31.constructor.explicit.vec3_4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003846, VkglTestCase_003846_1, VkglTestCase_003846_2);

#define VkglTestCase_003847_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003847_2 "ys.es31.constructor.explicit.vec3_4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003847, VkglTestCase_003847_1, VkglTestCase_003847_2);

#define VkglTestCase_003848_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003848_2 "s.es31.constructor.explicit.ivec3_3x2x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003848, VkglTestCase_003848_1, VkglTestCase_003848_2);

#define VkglTestCase_003849_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_003849_2 ".es31.constructor.explicit.ivec3_3x2x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003849, VkglTestCase_003849_1, VkglTestCase_003849_2);

#define VkglTestCase_003850_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003850_2 "s.es31.constructor.explicit.bvec3_1x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003850, VkglTestCase_003850_1, VkglTestCase_003850_2);

#define VkglTestCase_003851_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_003851_2 ".es31.constructor.explicit.bvec3_1x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003851, VkglTestCase_003851_1, VkglTestCase_003851_2);

#define VkglTestCase_003852_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003852_2 "ays.es31.constructor.explicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003852, VkglTestCase_003852_1, VkglTestCase_003852_2);

#define VkglTestCase_003853_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003853_2 "ys.es31.constructor.explicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003853, VkglTestCase_003853_1, VkglTestCase_003853_2);

#define VkglTestCase_003854_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003854_2 "ys.es31.constructor.explicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003854, VkglTestCase_003854_1, VkglTestCase_003854_2);

#define VkglTestCase_003855_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003855_2 "s.es31.constructor.explicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003855, VkglTestCase_003855_1, VkglTestCase_003855_2);

#define VkglTestCase_003856_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003856_2 "ays.es31.constructor.explicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003856, VkglTestCase_003856_1, VkglTestCase_003856_2);

#define VkglTestCase_003857_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003857_2 "ys.es31.constructor.explicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003857, VkglTestCase_003857_1, VkglTestCase_003857_2);

#define VkglTestCase_003858_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_003858_2 "1.constructor.explicit.high_dimensional_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003858, VkglTestCase_003858_1, VkglTestCase_003858_2);

#define VkglTestCase_003859_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_003859_2 ".constructor.explicit.high_dimensional_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003859, VkglTestCase_003859_1, VkglTestCase_003859_2);

#define VkglTestCase_004122_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004122_2 "ys.es32.constructor.explicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004122, VkglTestCase_004122_1, VkglTestCase_004122_2);

#define VkglTestCase_004123_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004123_2 "s.es32.constructor.explicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004123, VkglTestCase_004123_1, VkglTestCase_004123_2);

#define VkglTestCase_004124_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004124_2 "ys.es32.constructor.explicit.float_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004124, VkglTestCase_004124_1, VkglTestCase_004124_2);

#define VkglTestCase_004125_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004125_2 "s.es32.constructor.explicit.float_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004125, VkglTestCase_004125_1, VkglTestCase_004125_2);

#define VkglTestCase_004126_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004126_2 "ays.es32.constructor.explicit.int_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004126, VkglTestCase_004126_1, VkglTestCase_004126_2);

#define VkglTestCase_004127_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004127_2 "ys.es32.constructor.explicit.int_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004127, VkglTestCase_004127_1, VkglTestCase_004127_2);

#define VkglTestCase_004128_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004128_2 "ys.es32.constructor.explicit.int_4x4x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004128, VkglTestCase_004128_1, VkglTestCase_004128_2);

#define VkglTestCase_004129_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004129_2 "s.es32.constructor.explicit.int_4x4x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004129, VkglTestCase_004129_1, VkglTestCase_004129_2);

#define VkglTestCase_004130_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004130_2 "ys.es32.constructor.explicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004130, VkglTestCase_004130_1, VkglTestCase_004130_2);

#define VkglTestCase_004131_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004131_2 "s.es32.constructor.explicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004131, VkglTestCase_004131_1, VkglTestCase_004131_2);

#define VkglTestCase_004132_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004132_2 "ys.es32.constructor.explicit.bool_2x1x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004132, VkglTestCase_004132_1, VkglTestCase_004132_2);

#define VkglTestCase_004133_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004133_2 "s.es32.constructor.explicit.bool_2x1x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004133, VkglTestCase_004133_1, VkglTestCase_004133_2);

#define VkglTestCase_004134_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004134_2 "ys.es32.constructor.explicit.struct_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004134, VkglTestCase_004134_1, VkglTestCase_004134_2);

#define VkglTestCase_004135_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004135_2 "s.es32.constructor.explicit.struct_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004135, VkglTestCase_004135_1, VkglTestCase_004135_2);

#define VkglTestCase_004136_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004136_2 "s.es32.constructor.explicit.struct_4x1x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004136, VkglTestCase_004136_1, VkglTestCase_004136_2);

#define VkglTestCase_004137_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_004137_2 ".es32.constructor.explicit.struct_4x1x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004137, VkglTestCase_004137_1, VkglTestCase_004137_2);

#define VkglTestCase_004138_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004138_2 "ays.es32.constructor.explicit.vec3_4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004138, VkglTestCase_004138_1, VkglTestCase_004138_2);

#define VkglTestCase_004139_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004139_2 "ys.es32.constructor.explicit.vec3_4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004139, VkglTestCase_004139_1, VkglTestCase_004139_2);

#define VkglTestCase_004140_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004140_2 "s.es32.constructor.explicit.ivec3_3x2x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004140, VkglTestCase_004140_1, VkglTestCase_004140_2);

#define VkglTestCase_004141_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_004141_2 ".es32.constructor.explicit.ivec3_3x2x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004141, VkglTestCase_004141_1, VkglTestCase_004141_2);

#define VkglTestCase_004142_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004142_2 "s.es32.constructor.explicit.bvec3_1x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004142, VkglTestCase_004142_1, VkglTestCase_004142_2);

#define VkglTestCase_004143_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays"
#define VkglTestCase_004143_2 ".es32.constructor.explicit.bvec3_1x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004143, VkglTestCase_004143_1, VkglTestCase_004143_2);

#define VkglTestCase_004144_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004144_2 "ays.es32.constructor.explicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004144, VkglTestCase_004144_1, VkglTestCase_004144_2);

#define VkglTestCase_004145_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004145_2 "ys.es32.constructor.explicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004145, VkglTestCase_004145_1, VkglTestCase_004145_2);

#define VkglTestCase_004146_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004146_2 "ys.es32.constructor.explicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004146, VkglTestCase_004146_1, VkglTestCase_004146_2);

#define VkglTestCase_004147_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004147_2 "s.es32.constructor.explicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004147, VkglTestCase_004147_1, VkglTestCase_004147_2);

#define VkglTestCase_004148_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004148_2 "ays.es32.constructor.explicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004148, VkglTestCase_004148_1, VkglTestCase_004148_2);

#define VkglTestCase_004149_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004149_2 "ys.es32.constructor.explicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004149, VkglTestCase_004149_1, VkglTestCase_004149_2);

#define VkglTestCase_004150_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004150_2 "2.constructor.explicit.high_dimensional_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004150, VkglTestCase_004150_1, VkglTestCase_004150_2);

#define VkglTestCase_004151_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004151_2 ".constructor.explicit.high_dimensional_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004151, VkglTestCase_004151_1, VkglTestCase_004151_2);
