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

#define VkglTestCase_003970_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003970_2 "rays.es31.parameter.unnamed.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003970, VkglTestCase_003970_1, VkglTestCase_003970_2);

#define VkglTestCase_003971_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003971_2 "ays.es31.parameter.unnamed.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003971, VkglTestCase_003971_1, VkglTestCase_003971_2);

#define VkglTestCase_003972_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003972_2 "rays.es31.parameter.unnamed.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003972, VkglTestCase_003972_1, VkglTestCase_003972_2);

#define VkglTestCase_003973_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003973_2 "ays.es31.parameter.unnamed.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003973, VkglTestCase_003973_1, VkglTestCase_003973_2);

#define VkglTestCase_003974_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003974_2 "ays.es31.parameter.unnamed.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003974, VkglTestCase_003974_1, VkglTestCase_003974_2);

#define VkglTestCase_003975_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003975_2 "ys.es31.parameter.unnamed.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003975, VkglTestCase_003975_1, VkglTestCase_003975_2);

#define VkglTestCase_003976_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003976_2 "rays.es31.parameter.unnamed.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003976, VkglTestCase_003976_1, VkglTestCase_003976_2);

#define VkglTestCase_003977_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003977_2 "ays.es31.parameter.unnamed.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003977, VkglTestCase_003977_1, VkglTestCase_003977_2);

#define VkglTestCase_003978_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003978_2 "ys.es31.parameter.unnamed.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003978, VkglTestCase_003978_1, VkglTestCase_003978_2);

#define VkglTestCase_003979_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_003979_2 "s.es31.parameter.unnamed.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003979, VkglTestCase_003979_1, VkglTestCase_003979_2);

#define VkglTestCase_003980_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003980_2 "rays.es31.parameter.unnamed.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003980, VkglTestCase_003980_1, VkglTestCase_003980_2);

#define VkglTestCase_003981_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003981_2 "ays.es31.parameter.unnamed.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003981, VkglTestCase_003981_1, VkglTestCase_003981_2);

#define VkglTestCase_003982_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003982_2 "rays.es31.parameter.unnamed.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003982, VkglTestCase_003982_1, VkglTestCase_003982_2);

#define VkglTestCase_003983_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003983_2 "ays.es31.parameter.unnamed.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003983, VkglTestCase_003983_1, VkglTestCase_003983_2);

#define VkglTestCase_003984_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003984_2 "rays.es31.parameter.unnamed.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003984, VkglTestCase_003984_1, VkglTestCase_003984_2);

#define VkglTestCase_003985_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003985_2 "ays.es31.parameter.unnamed.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003985, VkglTestCase_003985_1, VkglTestCase_003985_2);

#define VkglTestCase_003986_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003986_2 "ays.es31.parameter.unnamed.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003986, VkglTestCase_003986_1, VkglTestCase_003986_2);

#define VkglTestCase_003987_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003987_2 "ys.es31.parameter.unnamed.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003987, VkglTestCase_003987_1, VkglTestCase_003987_2);

#define VkglTestCase_003988_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003988_2 "rays.es31.parameter.unnamed.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003988, VkglTestCase_003988_1, VkglTestCase_003988_2);

#define VkglTestCase_003989_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003989_2 "ays.es31.parameter.unnamed.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003989, VkglTestCase_003989_1, VkglTestCase_003989_2);

#define VkglTestCase_004262_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004262_2 "rays.es32.parameter.unnamed.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004262, VkglTestCase_004262_1, VkglTestCase_004262_2);

#define VkglTestCase_004263_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004263_2 "ays.es32.parameter.unnamed.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004263, VkglTestCase_004263_1, VkglTestCase_004263_2);

#define VkglTestCase_004264_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004264_2 "rays.es32.parameter.unnamed.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004264, VkglTestCase_004264_1, VkglTestCase_004264_2);

#define VkglTestCase_004265_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004265_2 "ays.es32.parameter.unnamed.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004265, VkglTestCase_004265_1, VkglTestCase_004265_2);

#define VkglTestCase_004266_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004266_2 "ays.es32.parameter.unnamed.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004266, VkglTestCase_004266_1, VkglTestCase_004266_2);

#define VkglTestCase_004267_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004267_2 "ys.es32.parameter.unnamed.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004267, VkglTestCase_004267_1, VkglTestCase_004267_2);

#define VkglTestCase_004268_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004268_2 "rays.es32.parameter.unnamed.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004268, VkglTestCase_004268_1, VkglTestCase_004268_2);

#define VkglTestCase_004269_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004269_2 "ays.es32.parameter.unnamed.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004269, VkglTestCase_004269_1, VkglTestCase_004269_2);

#define VkglTestCase_004270_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004270_2 "ys.es32.parameter.unnamed.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004270, VkglTestCase_004270_1, VkglTestCase_004270_2);

#define VkglTestCase_004271_1 "dEQP-GLES31.functional.shaders.arrays_of_array"
#define VkglTestCase_004271_2 "s.es32.parameter.unnamed.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004271, VkglTestCase_004271_1, VkglTestCase_004271_2);

#define VkglTestCase_004272_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004272_2 "rays.es32.parameter.unnamed.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004272, VkglTestCase_004272_1, VkglTestCase_004272_2);

#define VkglTestCase_004273_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004273_2 "ays.es32.parameter.unnamed.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004273, VkglTestCase_004273_1, VkglTestCase_004273_2);

#define VkglTestCase_004274_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004274_2 "rays.es32.parameter.unnamed.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004274, VkglTestCase_004274_1, VkglTestCase_004274_2);

#define VkglTestCase_004275_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004275_2 "ays.es32.parameter.unnamed.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004275, VkglTestCase_004275_1, VkglTestCase_004275_2);

#define VkglTestCase_004276_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004276_2 "rays.es32.parameter.unnamed.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004276, VkglTestCase_004276_1, VkglTestCase_004276_2);

#define VkglTestCase_004277_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004277_2 "ays.es32.parameter.unnamed.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004277, VkglTestCase_004277_1, VkglTestCase_004277_2);

#define VkglTestCase_004278_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004278_2 "ays.es32.parameter.unnamed.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004278, VkglTestCase_004278_1, VkglTestCase_004278_2);

#define VkglTestCase_004279_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004279_2 "ys.es32.parameter.unnamed.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004279, VkglTestCase_004279_1, VkglTestCase_004279_2);

#define VkglTestCase_004280_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004280_2 "rays.es32.parameter.unnamed.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004280, VkglTestCase_004280_1, VkglTestCase_004280_2);

#define VkglTestCase_004281_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004281_2 "ays.es32.parameter.unnamed.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004281, VkglTestCase_004281_1, VkglTestCase_004281_2);
