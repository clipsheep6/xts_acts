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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019006_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019006_2 "ve_coverage.log.shader.create_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019006, VkglTestCase_019006_1, VkglTestCase_019006_2);

#define VkglTestCase_019007_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019007_2 "ve_coverage.log.shader.shader_source"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019007, VkglTestCase_019007_1, VkglTestCase_019007_2);

#define VkglTestCase_019008_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019008_2 "e_coverage.log.shader.compile_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019008, VkglTestCase_019008_1, VkglTestCase_019008_2);

#define VkglTestCase_019009_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019009_2 "ve_coverage.log.shader.delete_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019009, VkglTestCase_019009_1, VkglTestCase_019009_2);

#define VkglTestCase_019010_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019010_2 "ve_coverage.log.shader.shader_binary"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019010, VkglTestCase_019010_1, VkglTestCase_019010_2);

#define VkglTestCase_019011_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019011_2 "ve_coverage.log.shader.attach_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019011, VkglTestCase_019011_1, VkglTestCase_019011_2);

#define VkglTestCase_019012_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019012_2 "ve_coverage.log.shader.detach_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019012, VkglTestCase_019012_1, VkglTestCase_019012_2);

#define VkglTestCase_019013_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019013_2 "ve_coverage.log.shader.link_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019013, VkglTestCase_019013_1, VkglTestCase_019013_2);

#define VkglTestCase_019014_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019014_2 "ive_coverage.log.shader.use_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019014, VkglTestCase_019014_1, VkglTestCase_019014_2);

#define VkglTestCase_019015_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019015_2 "e_coverage.log.shader.delete_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019015, VkglTestCase_019015_1, VkglTestCase_019015_2);

#define VkglTestCase_019016_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019016_2 "_coverage.log.shader.validate_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019016, VkglTestCase_019016_1, VkglTestCase_019016_2);

#define VkglTestCase_019017_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019017_2 "coverage.log.shader.get_program_binary"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019017, VkglTestCase_019017_1, VkglTestCase_019017_2);

#define VkglTestCase_019018_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019018_2 "e_coverage.log.shader.program_binary"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019018, VkglTestCase_019018_1, VkglTestCase_019018_2);

#define VkglTestCase_019019_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019019_2 "coverage.log.shader.program_parameteri"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019019, VkglTestCase_019019_1, VkglTestCase_019019_2);

#define VkglTestCase_019020_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019020_2 "ve_coverage.log.shader.gen_samplers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019020, VkglTestCase_019020_1, VkglTestCase_019020_2);

#define VkglTestCase_019021_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019021_2 "ve_coverage.log.shader.bind_sampler"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019021, VkglTestCase_019021_1, VkglTestCase_019021_2);

#define VkglTestCase_019022_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019022_2 "e_coverage.log.shader.delete_samplers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019022, VkglTestCase_019022_1, VkglTestCase_019022_2);

#define VkglTestCase_019023_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019023_2 "verage.log.shader.get_sampler_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019023, VkglTestCase_019023_1, VkglTestCase_019023_2);

#define VkglTestCase_019024_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019024_2 "verage.log.shader.get_sampler_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019024, VkglTestCase_019024_1, VkglTestCase_019024_2);

#define VkglTestCase_019025_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019025_2 "erage.log.shader.get_sampler_parameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019025, VkglTestCase_019025_1, VkglTestCase_019025_2);

#define VkglTestCase_019026_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019026_2 "erage.log.shader.get_sampler_parameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019026, VkglTestCase_019026_1, VkglTestCase_019026_2);

#define VkglTestCase_019027_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019027_2 "coverage.log.shader.sampler_parameteri"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019027, VkglTestCase_019027_1, VkglTestCase_019027_2);

#define VkglTestCase_019028_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019028_2 "coverage.log.shader.sampler_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019028, VkglTestCase_019028_1, VkglTestCase_019028_2);

#define VkglTestCase_019029_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019029_2 "coverage.log.shader.sampler_parameterf"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019029, VkglTestCase_019029_1, VkglTestCase_019029_2);

#define VkglTestCase_019030_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019030_2 "coverage.log.shader.sampler_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019030, VkglTestCase_019030_1, VkglTestCase_019030_2);

#define VkglTestCase_019031_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019031_2 "overage.log.shader.sampler_parameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019031, VkglTestCase_019031_1, VkglTestCase_019031_2);

#define VkglTestCase_019032_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019032_2 "overage.log.shader.sampler_parameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019032, VkglTestCase_019032_1, VkglTestCase_019032_2);

#define VkglTestCase_019033_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019033_2 "coverage.log.shader.get_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019033, VkglTestCase_019033_1, VkglTestCase_019033_2);

#define VkglTestCase_019034_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019034_2 "overage.log.shader.get_uniform_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019034, VkglTestCase_019034_1, VkglTestCase_019034_2);

#define VkglTestCase_019035_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019035_2 "overage.log.shader.bind_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019035, VkglTestCase_019035_1, VkglTestCase_019035_2);

#define VkglTestCase_019036_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019036_2 "overage.log.shader.uniform_block_binding"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019036, VkglTestCase_019036_1, VkglTestCase_019036_2);

#define VkglTestCase_019037_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019037_2 "erage.log.shader.uniformf_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019037, VkglTestCase_019037_1, VkglTestCase_019037_2);

#define VkglTestCase_019038_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019038_2 "rage.log.shader.uniformf_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019038, VkglTestCase_019038_1, VkglTestCase_019038_2);

#define VkglTestCase_019039_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019039_2 "erage.log.shader.uniformf_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019039, VkglTestCase_019039_1, VkglTestCase_019039_2);

#define VkglTestCase_019040_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019040_2 "erage.log.shader.uniformfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019040, VkglTestCase_019040_1, VkglTestCase_019040_2);

#define VkglTestCase_019041_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019041_2 "rage.log.shader.uniformfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019041, VkglTestCase_019041_1, VkglTestCase_019041_2);

#define VkglTestCase_019042_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019042_2 "rage.log.shader.uniformfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019042, VkglTestCase_019042_1, VkglTestCase_019042_2);

#define VkglTestCase_019043_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019043_2 "verage.log.shader.uniformfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019043, VkglTestCase_019043_1, VkglTestCase_019043_2);

#define VkglTestCase_019044_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019044_2 "erage.log.shader.uniformi_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019044, VkglTestCase_019044_1, VkglTestCase_019044_2);

#define VkglTestCase_019045_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019045_2 "rage.log.shader.uniformi_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019045, VkglTestCase_019045_1, VkglTestCase_019045_2);

#define VkglTestCase_019046_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019046_2 "erage.log.shader.uniformi_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019046, VkglTestCase_019046_1, VkglTestCase_019046_2);

#define VkglTestCase_019047_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019047_2 "erage.log.shader.uniformiv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019047, VkglTestCase_019047_1, VkglTestCase_019047_2);

#define VkglTestCase_019048_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019048_2 "rage.log.shader.uniformiv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019048, VkglTestCase_019048_1, VkglTestCase_019048_2);

#define VkglTestCase_019049_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019049_2 "rage.log.shader.uniformiv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019049, VkglTestCase_019049_1, VkglTestCase_019049_2);

#define VkglTestCase_019050_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019050_2 "verage.log.shader.uniformiv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019050, VkglTestCase_019050_1, VkglTestCase_019050_2);

#define VkglTestCase_019051_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019051_2 "erage.log.shader.uniformui_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019051, VkglTestCase_019051_1, VkglTestCase_019051_2);

#define VkglTestCase_019052_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019052_2 "rage.log.shader.uniformui_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019052, VkglTestCase_019052_1, VkglTestCase_019052_2);

#define VkglTestCase_019053_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019053_2 "rage.log.shader.uniformui_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019053, VkglTestCase_019053_1, VkglTestCase_019053_2);

#define VkglTestCase_019054_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019054_2 "rage.log.shader.uniformuiv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019054, VkglTestCase_019054_1, VkglTestCase_019054_2);

#define VkglTestCase_019055_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019055_2 "age.log.shader.uniformuiv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019055, VkglTestCase_019055_1, VkglTestCase_019055_2);

#define VkglTestCase_019056_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019056_2 "rage.log.shader.uniformuiv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019056, VkglTestCase_019056_1, VkglTestCase_019056_2);

#define VkglTestCase_019057_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019057_2 "erage.log.shader.uniformuiv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019057, VkglTestCase_019057_1, VkglTestCase_019057_2);

#define VkglTestCase_019058_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019058_2 "e.log.shader.uniform_matrixfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019058, VkglTestCase_019058_1, VkglTestCase_019058_2);

#define VkglTestCase_019059_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019059_2 ".log.shader.uniform_matrixfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019059, VkglTestCase_019059_1, VkglTestCase_019059_2);

#define VkglTestCase_019060_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019060_2 "e.log.shader.uniform_matrixfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019060, VkglTestCase_019060_1, VkglTestCase_019060_2);

#define VkglTestCase_019061_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019061_2 "ge.log.shader.uniform_matrixfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019061, VkglTestCase_019061_1, VkglTestCase_019061_2);

#define VkglTestCase_019062_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019062_2 "verage.log.shader.gen_transform_feedbacks"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019062, VkglTestCase_019062_1, VkglTestCase_019062_2);

#define VkglTestCase_019063_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019063_2 "verage.log.shader.bind_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019063, VkglTestCase_019063_1, VkglTestCase_019063_2);

#define VkglTestCase_019064_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019064_2 "rage.log.shader.delete_transform_feedbacks"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019064, VkglTestCase_019064_1, VkglTestCase_019064_2);

#define VkglTestCase_019065_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019065_2 "erage.log.shader.begin_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019065, VkglTestCase_019065_1, VkglTestCase_019065_2);

#define VkglTestCase_019066_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019066_2 "erage.log.shader.pause_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019066, VkglTestCase_019066_1, VkglTestCase_019066_2);

#define VkglTestCase_019067_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019067_2 "erage.log.shader.resume_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019067, VkglTestCase_019067_1, VkglTestCase_019067_2);

#define VkglTestCase_019068_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019068_2 "verage.log.shader.end_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019068, VkglTestCase_019068_1, VkglTestCase_019068_2);

#define VkglTestCase_019069_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019069_2 "ge.log.shader.get_transform_feedback_varying"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019069, VkglTestCase_019069_1, VkglTestCase_019069_2);

#define VkglTestCase_019070_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019070_2 "rage.log.shader.transform_feedback_varyings"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019070, VkglTestCase_019070_1, VkglTestCase_019070_2);

#define VkglTestCase_019071_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019071_2 "verage.log.shader.compile_compute_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019071, VkglTestCase_019071_1, VkglTestCase_019071_2);

#define VkglTestCase_019072_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019072_2 "coverage.log.shader.link_compute_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019072, VkglTestCase_019072_1, VkglTestCase_019072_2);

#define VkglTestCase_019073_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019073_2 "age.log.shader.srgb_decode_samplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019073, VkglTestCase_019073_1, VkglTestCase_019073_2);

#define VkglTestCase_019074_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019074_2 "age.log.shader.srgb_decode_samplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019074, VkglTestCase_019074_1, VkglTestCase_019074_2);

#define VkglTestCase_019075_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019075_2 "ge.log.shader.srgb_decode_samplerparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019075, VkglTestCase_019075_1, VkglTestCase_019075_2);

#define VkglTestCase_019076_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019076_2 "ge.log.shader.srgb_decode_samplerparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019076, VkglTestCase_019076_1, VkglTestCase_019076_2);

#define VkglTestCase_019077_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019077_2 "ge.log.shader.srgb_decode_samplerparameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019077, VkglTestCase_019077_1, VkglTestCase_019077_2);

#define VkglTestCase_019078_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019078_2 "e.log.shader.srgb_decode_samplerparameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019078, VkglTestCase_019078_1, VkglTestCase_019078_2);
