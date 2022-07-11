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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043030_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043030_2 "ry.texture.texture_2d_is_texture"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043030, VkglTestCase_043030_1, VkglTestCase_043030_2);

#define VkglTestCase_043031_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043031_2 "exture_2d_texture_swizzle_r_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043031, VkglTestCase_043031_1, VkglTestCase_043031_2);

#define VkglTestCase_043032_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043032_2 "exture_2d_texture_swizzle_r_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043032, VkglTestCase_043032_1, VkglTestCase_043032_2);

#define VkglTestCase_043033_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043033_2 "exture_2d_texture_swizzle_g_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043033, VkglTestCase_043033_1, VkglTestCase_043033_2);

#define VkglTestCase_043034_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043034_2 "exture_2d_texture_swizzle_g_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043034, VkglTestCase_043034_1, VkglTestCase_043034_2);

#define VkglTestCase_043035_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043035_2 "exture_2d_texture_swizzle_b_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043035, VkglTestCase_043035_1, VkglTestCase_043035_2);

#define VkglTestCase_043036_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043036_2 "exture_2d_texture_swizzle_b_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043036, VkglTestCase_043036_1, VkglTestCase_043036_2);

#define VkglTestCase_043037_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043037_2 "exture_2d_texture_swizzle_a_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043037, VkglTestCase_043037_1, VkglTestCase_043037_2);

#define VkglTestCase_043038_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043038_2 "exture_2d_texture_swizzle_a_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043038, VkglTestCase_043038_1, VkglTestCase_043038_2);

#define VkglTestCase_043039_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043039_2 "texture_2d_texture_wrap_s_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043039, VkglTestCase_043039_1, VkglTestCase_043039_2);

#define VkglTestCase_043040_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043040_2 "texture_2d_texture_wrap_s_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043040, VkglTestCase_043040_1, VkglTestCase_043040_2);

#define VkglTestCase_043041_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043041_2 "texture_2d_texture_wrap_t_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043041, VkglTestCase_043041_1, VkglTestCase_043041_2);

#define VkglTestCase_043042_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043042_2 "texture_2d_texture_wrap_t_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043042, VkglTestCase_043042_1, VkglTestCase_043042_2);

#define VkglTestCase_043043_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043043_2 "xture_2d_texture_mag_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043043, VkglTestCase_043043_1, VkglTestCase_043043_2);

#define VkglTestCase_043044_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043044_2 "xture_2d_texture_mag_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043044, VkglTestCase_043044_1, VkglTestCase_043044_2);

#define VkglTestCase_043045_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043045_2 "xture_2d_texture_min_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043045, VkglTestCase_043045_1, VkglTestCase_043045_2);

#define VkglTestCase_043046_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043046_2 "xture_2d_texture_min_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043046, VkglTestCase_043046_1, VkglTestCase_043046_2);

#define VkglTestCase_043047_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043047_2 "texture_2d_texture_min_lod_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043047, VkglTestCase_043047_1, VkglTestCase_043047_2);

#define VkglTestCase_043048_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043048_2 "texture_2d_texture_min_lod_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043048, VkglTestCase_043048_1, VkglTestCase_043048_2);

#define VkglTestCase_043049_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043049_2 "texture_2d_texture_max_lod_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043049, VkglTestCase_043049_1, VkglTestCase_043049_2);

#define VkglTestCase_043050_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043050_2 "texture_2d_texture_max_lod_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043050, VkglTestCase_043050_1, VkglTestCase_043050_2);

#define VkglTestCase_043051_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043051_2 "xture_2d_texture_base_level_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043051, VkglTestCase_043051_1, VkglTestCase_043051_2);

#define VkglTestCase_043052_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043052_2 "xture_2d_texture_base_level_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043052, VkglTestCase_043052_1, VkglTestCase_043052_2);

#define VkglTestCase_043053_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043053_2 "exture_2d_texture_max_level_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043053, VkglTestCase_043053_1, VkglTestCase_043053_2);

#define VkglTestCase_043054_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043054_2 "exture_2d_texture_max_level_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043054, VkglTestCase_043054_1, VkglTestCase_043054_2);

#define VkglTestCase_043055_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043055_2 "ture_2d_texture_compare_mode_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043055, VkglTestCase_043055_1, VkglTestCase_043055_2);

#define VkglTestCase_043056_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043056_2 "ture_2d_texture_compare_mode_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043056, VkglTestCase_043056_1, VkglTestCase_043056_2);

#define VkglTestCase_043057_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043057_2 "ture_2d_texture_compare_func_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043057, VkglTestCase_043057_1, VkglTestCase_043057_2);

#define VkglTestCase_043058_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043058_2 "ture_2d_texture_compare_func_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043058, VkglTestCase_043058_1, VkglTestCase_043058_2);

#define VkglTestCase_043059_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043059_2 "re_2d_texture_immutable_levels_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043059, VkglTestCase_043059_1, VkglTestCase_043059_2);

#define VkglTestCase_043060_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043060_2 "re_2d_texture_immutable_levels_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043060, VkglTestCase_043060_1, VkglTestCase_043060_2);

#define VkglTestCase_043061_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043061_2 "re_2d_texture_immutable_format_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043061, VkglTestCase_043061_1, VkglTestCase_043061_2);

#define VkglTestCase_043062_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043062_2 "re_2d_texture_immutable_format_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043062, VkglTestCase_043062_1, VkglTestCase_043062_2);

#define VkglTestCase_043063_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043063_2 "ry.texture.texture_3d_is_texture"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043063, VkglTestCase_043063_1, VkglTestCase_043063_2);

#define VkglTestCase_043064_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043064_2 "exture_3d_texture_swizzle_r_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043064, VkglTestCase_043064_1, VkglTestCase_043064_2);

#define VkglTestCase_043065_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043065_2 "exture_3d_texture_swizzle_r_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043065, VkglTestCase_043065_1, VkglTestCase_043065_2);

#define VkglTestCase_043066_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043066_2 "exture_3d_texture_swizzle_g_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043066, VkglTestCase_043066_1, VkglTestCase_043066_2);

#define VkglTestCase_043067_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043067_2 "exture_3d_texture_swizzle_g_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043067, VkglTestCase_043067_1, VkglTestCase_043067_2);

#define VkglTestCase_043068_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043068_2 "exture_3d_texture_swizzle_b_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043068, VkglTestCase_043068_1, VkglTestCase_043068_2);

#define VkglTestCase_043069_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043069_2 "exture_3d_texture_swizzle_b_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043069, VkglTestCase_043069_1, VkglTestCase_043069_2);

#define VkglTestCase_043070_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043070_2 "exture_3d_texture_swizzle_a_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043070, VkglTestCase_043070_1, VkglTestCase_043070_2);

#define VkglTestCase_043071_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043071_2 "exture_3d_texture_swizzle_a_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043071, VkglTestCase_043071_1, VkglTestCase_043071_2);

#define VkglTestCase_043072_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043072_2 "texture_3d_texture_wrap_s_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043072, VkglTestCase_043072_1, VkglTestCase_043072_2);

#define VkglTestCase_043073_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043073_2 "texture_3d_texture_wrap_s_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043073, VkglTestCase_043073_1, VkglTestCase_043073_2);

#define VkglTestCase_043074_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043074_2 "texture_3d_texture_wrap_t_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043074, VkglTestCase_043074_1, VkglTestCase_043074_2);

#define VkglTestCase_043075_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043075_2 "texture_3d_texture_wrap_t_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043075, VkglTestCase_043075_1, VkglTestCase_043075_2);

#define VkglTestCase_043076_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043076_2 "texture_3d_texture_wrap_r_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043076, VkglTestCase_043076_1, VkglTestCase_043076_2);

#define VkglTestCase_043077_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043077_2 "texture_3d_texture_wrap_r_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043077, VkglTestCase_043077_1, VkglTestCase_043077_2);

#define VkglTestCase_043078_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043078_2 "xture_3d_texture_mag_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043078, VkglTestCase_043078_1, VkglTestCase_043078_2);

#define VkglTestCase_043079_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043079_2 "xture_3d_texture_mag_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043079, VkglTestCase_043079_1, VkglTestCase_043079_2);

#define VkglTestCase_043080_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043080_2 "xture_3d_texture_min_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043080, VkglTestCase_043080_1, VkglTestCase_043080_2);

#define VkglTestCase_043081_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043081_2 "xture_3d_texture_min_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043081, VkglTestCase_043081_1, VkglTestCase_043081_2);

#define VkglTestCase_043082_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043082_2 "texture_3d_texture_min_lod_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043082, VkglTestCase_043082_1, VkglTestCase_043082_2);

#define VkglTestCase_043083_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043083_2 "texture_3d_texture_min_lod_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043083, VkglTestCase_043083_1, VkglTestCase_043083_2);

#define VkglTestCase_043084_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043084_2 "texture_3d_texture_max_lod_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043084, VkglTestCase_043084_1, VkglTestCase_043084_2);

#define VkglTestCase_043085_1 "dEQP-GLES3.functional.state_query.texture."
#define VkglTestCase_043085_2 "texture_3d_texture_max_lod_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043085, VkglTestCase_043085_1, VkglTestCase_043085_2);

#define VkglTestCase_043086_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043086_2 "xture_3d_texture_base_level_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043086, VkglTestCase_043086_1, VkglTestCase_043086_2);

#define VkglTestCase_043087_1 "dEQP-GLES3.functional.state_query.texture.te"
#define VkglTestCase_043087_2 "xture_3d_texture_base_level_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043087, VkglTestCase_043087_1, VkglTestCase_043087_2);

#define VkglTestCase_043088_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043088_2 "exture_3d_texture_max_level_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043088, VkglTestCase_043088_1, VkglTestCase_043088_2);

#define VkglTestCase_043089_1 "dEQP-GLES3.functional.state_query.texture.t"
#define VkglTestCase_043089_2 "exture_3d_texture_max_level_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043089, VkglTestCase_043089_1, VkglTestCase_043089_2);

#define VkglTestCase_043090_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043090_2 "ture_3d_texture_compare_mode_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043090, VkglTestCase_043090_1, VkglTestCase_043090_2);

#define VkglTestCase_043091_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043091_2 "ture_3d_texture_compare_mode_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043091, VkglTestCase_043091_1, VkglTestCase_043091_2);

#define VkglTestCase_043092_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043092_2 "ture_3d_texture_compare_func_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043092, VkglTestCase_043092_1, VkglTestCase_043092_2);

#define VkglTestCase_043093_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043093_2 "ture_3d_texture_compare_func_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043093, VkglTestCase_043093_1, VkglTestCase_043093_2);

#define VkglTestCase_043094_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043094_2 "re_3d_texture_immutable_levels_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043094, VkglTestCase_043094_1, VkglTestCase_043094_2);

#define VkglTestCase_043095_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043095_2 "re_3d_texture_immutable_levels_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043095, VkglTestCase_043095_1, VkglTestCase_043095_2);

#define VkglTestCase_043096_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043096_2 "re_3d_texture_immutable_format_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043096, VkglTestCase_043096_1, VkglTestCase_043096_2);

#define VkglTestCase_043097_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043097_2 "re_3d_texture_immutable_format_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043097, VkglTestCase_043097_1, VkglTestCase_043097_2);

#define VkglTestCase_043098_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043098_2 "texture.texture_2d_array_is_texture"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043098, VkglTestCase_043098_1, VkglTestCase_043098_2);

#define VkglTestCase_043099_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043099_2 "ure_2d_array_texture_swizzle_r_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043099, VkglTestCase_043099_1, VkglTestCase_043099_2);

#define VkglTestCase_043100_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043100_2 "ure_2d_array_texture_swizzle_r_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043100, VkglTestCase_043100_1, VkglTestCase_043100_2);

#define VkglTestCase_043101_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043101_2 "ure_2d_array_texture_swizzle_g_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043101, VkglTestCase_043101_1, VkglTestCase_043101_2);

#define VkglTestCase_043102_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043102_2 "ure_2d_array_texture_swizzle_g_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043102, VkglTestCase_043102_1, VkglTestCase_043102_2);

#define VkglTestCase_043103_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043103_2 "ure_2d_array_texture_swizzle_b_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043103, VkglTestCase_043103_1, VkglTestCase_043103_2);

#define VkglTestCase_043104_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043104_2 "ure_2d_array_texture_swizzle_b_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043104, VkglTestCase_043104_1, VkglTestCase_043104_2);

#define VkglTestCase_043105_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043105_2 "ure_2d_array_texture_swizzle_a_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043105, VkglTestCase_043105_1, VkglTestCase_043105_2);

#define VkglTestCase_043106_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043106_2 "ure_2d_array_texture_swizzle_a_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043106, VkglTestCase_043106_1, VkglTestCase_043106_2);

#define VkglTestCase_043107_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043107_2 "ture_2d_array_texture_wrap_s_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043107, VkglTestCase_043107_1, VkglTestCase_043107_2);

#define VkglTestCase_043108_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043108_2 "ture_2d_array_texture_wrap_s_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043108, VkglTestCase_043108_1, VkglTestCase_043108_2);

#define VkglTestCase_043109_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043109_2 "ture_2d_array_texture_wrap_t_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043109, VkglTestCase_043109_1, VkglTestCase_043109_2);

#define VkglTestCase_043110_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043110_2 "ture_2d_array_texture_wrap_t_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043110, VkglTestCase_043110_1, VkglTestCase_043110_2);

#define VkglTestCase_043111_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043111_2 "re_2d_array_texture_mag_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043111, VkglTestCase_043111_1, VkglTestCase_043111_2);

#define VkglTestCase_043112_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043112_2 "re_2d_array_texture_mag_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043112, VkglTestCase_043112_1, VkglTestCase_043112_2);

#define VkglTestCase_043113_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043113_2 "re_2d_array_texture_min_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043113, VkglTestCase_043113_1, VkglTestCase_043113_2);

#define VkglTestCase_043114_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043114_2 "re_2d_array_texture_min_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043114, VkglTestCase_043114_1, VkglTestCase_043114_2);

#define VkglTestCase_043115_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043115_2 "ture_2d_array_texture_min_lod_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043115, VkglTestCase_043115_1, VkglTestCase_043115_2);

#define VkglTestCase_043116_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043116_2 "ture_2d_array_texture_min_lod_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043116, VkglTestCase_043116_1, VkglTestCase_043116_2);

#define VkglTestCase_043117_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043117_2 "ture_2d_array_texture_max_lod_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043117, VkglTestCase_043117_1, VkglTestCase_043117_2);

#define VkglTestCase_043118_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043118_2 "ture_2d_array_texture_max_lod_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043118, VkglTestCase_043118_1, VkglTestCase_043118_2);

#define VkglTestCase_043119_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043119_2 "re_2d_array_texture_base_level_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043119, VkglTestCase_043119_1, VkglTestCase_043119_2);

#define VkglTestCase_043120_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043120_2 "re_2d_array_texture_base_level_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043120, VkglTestCase_043120_1, VkglTestCase_043120_2);

#define VkglTestCase_043121_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043121_2 "ure_2d_array_texture_max_level_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043121, VkglTestCase_043121_1, VkglTestCase_043121_2);

#define VkglTestCase_043122_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043122_2 "ure_2d_array_texture_max_level_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043122, VkglTestCase_043122_1, VkglTestCase_043122_2);

#define VkglTestCase_043123_1 "dEQP-GLES3.functional.state_query.texture.textur"
#define VkglTestCase_043123_2 "e_2d_array_texture_compare_mode_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043123, VkglTestCase_043123_1, VkglTestCase_043123_2);

#define VkglTestCase_043124_1 "dEQP-GLES3.functional.state_query.texture.textur"
#define VkglTestCase_043124_2 "e_2d_array_texture_compare_mode_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043124, VkglTestCase_043124_1, VkglTestCase_043124_2);

#define VkglTestCase_043125_1 "dEQP-GLES3.functional.state_query.texture.textur"
#define VkglTestCase_043125_2 "e_2d_array_texture_compare_func_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043125, VkglTestCase_043125_1, VkglTestCase_043125_2);

#define VkglTestCase_043126_1 "dEQP-GLES3.functional.state_query.texture.textur"
#define VkglTestCase_043126_2 "e_2d_array_texture_compare_func_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043126, VkglTestCase_043126_1, VkglTestCase_043126_2);

#define VkglTestCase_043127_1 "dEQP-GLES3.functional.state_query.texture.texture_"
#define VkglTestCase_043127_2 "2d_array_texture_immutable_levels_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043127, VkglTestCase_043127_1, VkglTestCase_043127_2);

#define VkglTestCase_043128_1 "dEQP-GLES3.functional.state_query.texture.texture_"
#define VkglTestCase_043128_2 "2d_array_texture_immutable_levels_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043128, VkglTestCase_043128_1, VkglTestCase_043128_2);

#define VkglTestCase_043129_1 "dEQP-GLES3.functional.state_query.texture.texture_"
#define VkglTestCase_043129_2 "2d_array_texture_immutable_format_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043129, VkglTestCase_043129_1, VkglTestCase_043129_2);

#define VkglTestCase_043130_1 "dEQP-GLES3.functional.state_query.texture.texture_"
#define VkglTestCase_043130_2 "2d_array_texture_immutable_format_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043130, VkglTestCase_043130_1, VkglTestCase_043130_2);

#define VkglTestCase_043131_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043131_2 "texture.texture_cube_map_is_texture"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043131, VkglTestCase_043131_1, VkglTestCase_043131_2);

#define VkglTestCase_043132_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043132_2 "ure_cube_map_texture_swizzle_r_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043132, VkglTestCase_043132_1, VkglTestCase_043132_2);

#define VkglTestCase_043133_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043133_2 "ure_cube_map_texture_swizzle_r_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043133, VkglTestCase_043133_1, VkglTestCase_043133_2);

#define VkglTestCase_043134_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043134_2 "ure_cube_map_texture_swizzle_g_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043134, VkglTestCase_043134_1, VkglTestCase_043134_2);

#define VkglTestCase_043135_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043135_2 "ure_cube_map_texture_swizzle_g_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043135, VkglTestCase_043135_1, VkglTestCase_043135_2);

#define VkglTestCase_043136_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043136_2 "ure_cube_map_texture_swizzle_b_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043136, VkglTestCase_043136_1, VkglTestCase_043136_2);

#define VkglTestCase_043137_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043137_2 "ure_cube_map_texture_swizzle_b_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043137, VkglTestCase_043137_1, VkglTestCase_043137_2);

#define VkglTestCase_043138_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043138_2 "ure_cube_map_texture_swizzle_a_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043138, VkglTestCase_043138_1, VkglTestCase_043138_2);

#define VkglTestCase_043139_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043139_2 "ure_cube_map_texture_swizzle_a_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043139, VkglTestCase_043139_1, VkglTestCase_043139_2);

#define VkglTestCase_043140_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043140_2 "ture_cube_map_texture_wrap_s_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043140, VkglTestCase_043140_1, VkglTestCase_043140_2);

#define VkglTestCase_043141_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043141_2 "ture_cube_map_texture_wrap_s_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043141, VkglTestCase_043141_1, VkglTestCase_043141_2);

#define VkglTestCase_043142_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043142_2 "ture_cube_map_texture_wrap_t_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043142, VkglTestCase_043142_1, VkglTestCase_043142_2);

#define VkglTestCase_043143_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043143_2 "ture_cube_map_texture_wrap_t_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043143, VkglTestCase_043143_1, VkglTestCase_043143_2);

#define VkglTestCase_043144_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043144_2 "re_cube_map_texture_mag_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043144, VkglTestCase_043144_1, VkglTestCase_043144_2);

#define VkglTestCase_043145_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043145_2 "re_cube_map_texture_mag_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043145, VkglTestCase_043145_1, VkglTestCase_043145_2);

#define VkglTestCase_043146_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043146_2 "re_cube_map_texture_min_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043146, VkglTestCase_043146_1, VkglTestCase_043146_2);

#define VkglTestCase_043147_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043147_2 "re_cube_map_texture_min_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043147, VkglTestCase_043147_1, VkglTestCase_043147_2);

#define VkglTestCase_043148_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043148_2 "ture_cube_map_texture_min_lod_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043148, VkglTestCase_043148_1, VkglTestCase_043148_2);

#define VkglTestCase_043149_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043149_2 "ture_cube_map_texture_min_lod_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043149, VkglTestCase_043149_1, VkglTestCase_043149_2);

#define VkglTestCase_043150_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043150_2 "ture_cube_map_texture_max_lod_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043150, VkglTestCase_043150_1, VkglTestCase_043150_2);

#define VkglTestCase_043151_1 "dEQP-GLES3.functional.state_query.texture.tex"
#define VkglTestCase_043151_2 "ture_cube_map_texture_max_lod_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043151, VkglTestCase_043151_1, VkglTestCase_043151_2);

#define VkglTestCase_043152_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043152_2 "re_cube_map_texture_base_level_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043152, VkglTestCase_043152_1, VkglTestCase_043152_2);

#define VkglTestCase_043153_1 "dEQP-GLES3.functional.state_query.texture.textu"
#define VkglTestCase_043153_2 "re_cube_map_texture_base_level_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043153, VkglTestCase_043153_1, VkglTestCase_043153_2);

#define VkglTestCase_043154_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043154_2 "ure_cube_map_texture_max_level_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043154, VkglTestCase_043154_1, VkglTestCase_043154_2);

#define VkglTestCase_043155_1 "dEQP-GLES3.functional.state_query.texture.text"
#define VkglTestCase_043155_2 "ure_cube_map_texture_max_level_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043155, VkglTestCase_043155_1, VkglTestCase_043155_2);

#define VkglTestCase_043156_1 "dEQP-GLES3.functional.state_query.texture.textur"
#define VkglTestCase_043156_2 "e_cube_map_texture_compare_mode_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043156, VkglTestCase_043156_1, VkglTestCase_043156_2);

#define VkglTestCase_043157_1 "dEQP-GLES3.functional.state_query.texture.textur"
#define VkglTestCase_043157_2 "e_cube_map_texture_compare_mode_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043157, VkglTestCase_043157_1, VkglTestCase_043157_2);

#define VkglTestCase_043158_1 "dEQP-GLES3.functional.state_query.texture.textur"
#define VkglTestCase_043158_2 "e_cube_map_texture_compare_func_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043158, VkglTestCase_043158_1, VkglTestCase_043158_2);

#define VkglTestCase_043159_1 "dEQP-GLES3.functional.state_query.texture.textur"
#define VkglTestCase_043159_2 "e_cube_map_texture_compare_func_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043159, VkglTestCase_043159_1, VkglTestCase_043159_2);

#define VkglTestCase_043160_1 "dEQP-GLES3.functional.state_query.texture.texture_"
#define VkglTestCase_043160_2 "cube_map_texture_immutable_levels_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043160, VkglTestCase_043160_1, VkglTestCase_043160_2);

#define VkglTestCase_043161_1 "dEQP-GLES3.functional.state_query.texture.texture_"
#define VkglTestCase_043161_2 "cube_map_texture_immutable_levels_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043161, VkglTestCase_043161_1, VkglTestCase_043161_2);

#define VkglTestCase_043162_1 "dEQP-GLES3.functional.state_query.texture.texture_"
#define VkglTestCase_043162_2 "cube_map_texture_immutable_format_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043162, VkglTestCase_043162_1, VkglTestCase_043162_2);

#define VkglTestCase_043163_1 "dEQP-GLES3.functional.state_query.texture.texture_"
#define VkglTestCase_043163_2 "cube_map_texture_immutable_format_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043163, VkglTestCase_043163_1, VkglTestCase_043163_2);
