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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018508_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018508_2 "coverage.callbacks.shader.create_shader"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018508, VkglTestCase_018508_1, VkglTestCase_018508_2);

#define VkglTestCase_018509_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018509_2 "coverage.callbacks.shader.shader_source"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018509, VkglTestCase_018509_1, VkglTestCase_018509_2);

#define VkglTestCase_018510_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018510_2 "overage.callbacks.shader.compile_shader"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018510, VkglTestCase_018510_1, VkglTestCase_018510_2);

#define VkglTestCase_018511_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018511_2 "coverage.callbacks.shader.delete_shader"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018511, VkglTestCase_018511_1, VkglTestCase_018511_2);

#define VkglTestCase_018512_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018512_2 "coverage.callbacks.shader.shader_binary"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018512, VkglTestCase_018512_1, VkglTestCase_018512_2);

#define VkglTestCase_018513_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018513_2 "coverage.callbacks.shader.attach_shader"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018513, VkglTestCase_018513_1, VkglTestCase_018513_2);

#define VkglTestCase_018514_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018514_2 "coverage.callbacks.shader.detach_shader"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018514, VkglTestCase_018514_1, VkglTestCase_018514_2);

#define VkglTestCase_018515_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018515_2 "coverage.callbacks.shader.link_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018515, VkglTestCase_018515_1, VkglTestCase_018515_2);

#define VkglTestCase_018516_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018516_2 "_coverage.callbacks.shader.use_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018516, VkglTestCase_018516_1, VkglTestCase_018516_2);

#define VkglTestCase_018517_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018517_2 "overage.callbacks.shader.delete_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018517, VkglTestCase_018517_1, VkglTestCase_018517_2);

#define VkglTestCase_018518_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018518_2 "verage.callbacks.shader.validate_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018518, VkglTestCase_018518_1, VkglTestCase_018518_2);

#define VkglTestCase_018519_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018519_2 "erage.callbacks.shader.get_program_binary"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018519, VkglTestCase_018519_1, VkglTestCase_018519_2);

#define VkglTestCase_018520_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018520_2 "overage.callbacks.shader.program_binary"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018520, VkglTestCase_018520_1, VkglTestCase_018520_2);

#define VkglTestCase_018521_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018521_2 "erage.callbacks.shader.program_parameteri"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018521, VkglTestCase_018521_1, VkglTestCase_018521_2);

#define VkglTestCase_018522_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018522_2 "coverage.callbacks.shader.gen_samplers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018522, VkglTestCase_018522_1, VkglTestCase_018522_2);

#define VkglTestCase_018523_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018523_2 "coverage.callbacks.shader.bind_sampler"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018523, VkglTestCase_018523_1, VkglTestCase_018523_2);

#define VkglTestCase_018524_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018524_2 "overage.callbacks.shader.delete_samplers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018524, VkglTestCase_018524_1, VkglTestCase_018524_2);

#define VkglTestCase_018525_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018525_2 "age.callbacks.shader.get_sampler_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018525, VkglTestCase_018525_1, VkglTestCase_018525_2);

#define VkglTestCase_018526_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018526_2 "age.callbacks.shader.get_sampler_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018526, VkglTestCase_018526_1, VkglTestCase_018526_2);

#define VkglTestCase_018527_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018527_2 "ge.callbacks.shader.get_sampler_parameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018527, VkglTestCase_018527_1, VkglTestCase_018527_2);

#define VkglTestCase_018528_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018528_2 "ge.callbacks.shader.get_sampler_parameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018528, VkglTestCase_018528_1, VkglTestCase_018528_2);

#define VkglTestCase_018529_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018529_2 "erage.callbacks.shader.sampler_parameteri"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018529, VkglTestCase_018529_1, VkglTestCase_018529_2);

#define VkglTestCase_018530_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018530_2 "erage.callbacks.shader.sampler_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018530, VkglTestCase_018530_1, VkglTestCase_018530_2);

#define VkglTestCase_018531_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018531_2 "erage.callbacks.shader.sampler_parameterf"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018531, VkglTestCase_018531_1, VkglTestCase_018531_2);

#define VkglTestCase_018532_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018532_2 "erage.callbacks.shader.sampler_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018532, VkglTestCase_018532_1, VkglTestCase_018532_2);

#define VkglTestCase_018533_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018533_2 "rage.callbacks.shader.sampler_parameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018533, VkglTestCase_018533_1, VkglTestCase_018533_2);

#define VkglTestCase_018534_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018534_2 "rage.callbacks.shader.sampler_parameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018534, VkglTestCase_018534_1, VkglTestCase_018534_2);

#define VkglTestCase_018535_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018535_2 "erage.callbacks.shader.get_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018535, VkglTestCase_018535_1, VkglTestCase_018535_2);

#define VkglTestCase_018536_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018536_2 "rage.callbacks.shader.get_uniform_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018536, VkglTestCase_018536_1, VkglTestCase_018536_2);

#define VkglTestCase_018537_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018537_2 "rage.callbacks.shader.bind_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018537, VkglTestCase_018537_1, VkglTestCase_018537_2);

#define VkglTestCase_018538_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018538_2 "rage.callbacks.shader.uniform_block_binding"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018538, VkglTestCase_018538_1, VkglTestCase_018538_2);

#define VkglTestCase_018539_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018539_2 "ge.callbacks.shader.uniformf_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018539, VkglTestCase_018539_1, VkglTestCase_018539_2);

#define VkglTestCase_018540_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018540_2 "e.callbacks.shader.uniformf_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018540, VkglTestCase_018540_1, VkglTestCase_018540_2);

#define VkglTestCase_018541_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018541_2 "ge.callbacks.shader.uniformf_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018541, VkglTestCase_018541_1, VkglTestCase_018541_2);

#define VkglTestCase_018542_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018542_2 "ge.callbacks.shader.uniformfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018542, VkglTestCase_018542_1, VkglTestCase_018542_2);

#define VkglTestCase_018543_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018543_2 "e.callbacks.shader.uniformfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018543, VkglTestCase_018543_1, VkglTestCase_018543_2);

#define VkglTestCase_018544_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018544_2 "e.callbacks.shader.uniformfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018544, VkglTestCase_018544_1, VkglTestCase_018544_2);

#define VkglTestCase_018545_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018545_2 "age.callbacks.shader.uniformfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018545, VkglTestCase_018545_1, VkglTestCase_018545_2);

#define VkglTestCase_018546_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018546_2 "ge.callbacks.shader.uniformi_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018546, VkglTestCase_018546_1, VkglTestCase_018546_2);

#define VkglTestCase_018547_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018547_2 "e.callbacks.shader.uniformi_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018547, VkglTestCase_018547_1, VkglTestCase_018547_2);

#define VkglTestCase_018548_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018548_2 "ge.callbacks.shader.uniformi_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018548, VkglTestCase_018548_1, VkglTestCase_018548_2);

#define VkglTestCase_018549_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018549_2 "ge.callbacks.shader.uniformiv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018549, VkglTestCase_018549_1, VkglTestCase_018549_2);

#define VkglTestCase_018550_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018550_2 "e.callbacks.shader.uniformiv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018550, VkglTestCase_018550_1, VkglTestCase_018550_2);

#define VkglTestCase_018551_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018551_2 "e.callbacks.shader.uniformiv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018551, VkglTestCase_018551_1, VkglTestCase_018551_2);

#define VkglTestCase_018552_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018552_2 "age.callbacks.shader.uniformiv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018552, VkglTestCase_018552_1, VkglTestCase_018552_2);

#define VkglTestCase_018553_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018553_2 "ge.callbacks.shader.uniformui_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018553, VkglTestCase_018553_1, VkglTestCase_018553_2);

#define VkglTestCase_018554_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018554_2 "e.callbacks.shader.uniformui_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018554, VkglTestCase_018554_1, VkglTestCase_018554_2);

#define VkglTestCase_018555_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018555_2 "e.callbacks.shader.uniformui_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018555, VkglTestCase_018555_1, VkglTestCase_018555_2);

#define VkglTestCase_018556_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018556_2 "e.callbacks.shader.uniformuiv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018556, VkglTestCase_018556_1, VkglTestCase_018556_2);

#define VkglTestCase_018557_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018557_2 ".callbacks.shader.uniformuiv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018557, VkglTestCase_018557_1, VkglTestCase_018557_2);

#define VkglTestCase_018558_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018558_2 "e.callbacks.shader.uniformuiv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018558, VkglTestCase_018558_1, VkglTestCase_018558_2);

#define VkglTestCase_018559_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018559_2 "ge.callbacks.shader.uniformuiv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018559, VkglTestCase_018559_1, VkglTestCase_018559_2);

#define VkglTestCase_018560_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018560_2 "allbacks.shader.uniform_matrixfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018560, VkglTestCase_018560_1, VkglTestCase_018560_2);

#define VkglTestCase_018561_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018561_2 "llbacks.shader.uniform_matrixfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018561, VkglTestCase_018561_1, VkglTestCase_018561_2);

#define VkglTestCase_018562_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018562_2 "allbacks.shader.uniform_matrixfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018562, VkglTestCase_018562_1, VkglTestCase_018562_2);

#define VkglTestCase_018563_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018563_2 "callbacks.shader.uniform_matrixfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018563, VkglTestCase_018563_1, VkglTestCase_018563_2);

#define VkglTestCase_018564_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018564_2 "age.callbacks.shader.gen_transform_feedbacks"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018564, VkglTestCase_018564_1, VkglTestCase_018564_2);

#define VkglTestCase_018565_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018565_2 "age.callbacks.shader.bind_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018565, VkglTestCase_018565_1, VkglTestCase_018565_2);

#define VkglTestCase_018566_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018566_2 "e.callbacks.shader.delete_transform_feedbacks"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018566, VkglTestCase_018566_1, VkglTestCase_018566_2);

#define VkglTestCase_018567_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018567_2 "ge.callbacks.shader.begin_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018567, VkglTestCase_018567_1, VkglTestCase_018567_2);

#define VkglTestCase_018568_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018568_2 "ge.callbacks.shader.pause_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018568, VkglTestCase_018568_1, VkglTestCase_018568_2);

#define VkglTestCase_018569_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018569_2 "ge.callbacks.shader.resume_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018569, VkglTestCase_018569_1, VkglTestCase_018569_2);

#define VkglTestCase_018570_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018570_2 "age.callbacks.shader.end_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018570, VkglTestCase_018570_1, VkglTestCase_018570_2);

#define VkglTestCase_018571_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018571_2 "callbacks.shader.get_transform_feedback_varying"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018571, VkglTestCase_018571_1, VkglTestCase_018571_2);

#define VkglTestCase_018572_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018572_2 "e.callbacks.shader.transform_feedback_varyings"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018572, VkglTestCase_018572_1, VkglTestCase_018572_2);

#define VkglTestCase_018573_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018573_2 "age.callbacks.shader.compile_compute_shader"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018573, VkglTestCase_018573_1, VkglTestCase_018573_2);

#define VkglTestCase_018574_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018574_2 "erage.callbacks.shader.link_compute_shader"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018574, VkglTestCase_018574_1, VkglTestCase_018574_2);

#define VkglTestCase_018575_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018575_2 ".callbacks.shader.srgb_decode_samplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018575, VkglTestCase_018575_1, VkglTestCase_018575_2);

#define VkglTestCase_018576_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018576_2 ".callbacks.shader.srgb_decode_samplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018576, VkglTestCase_018576_1, VkglTestCase_018576_2);

#define VkglTestCase_018577_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018577_2 "callbacks.shader.srgb_decode_samplerparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018577, VkglTestCase_018577_1, VkglTestCase_018577_2);

#define VkglTestCase_018578_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018578_2 "callbacks.shader.srgb_decode_samplerparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018578, VkglTestCase_018578_1, VkglTestCase_018578_2);

#define VkglTestCase_018579_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018579_2 "callbacks.shader.srgb_decode_samplerparameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018579, VkglTestCase_018579_1, VkglTestCase_018579_2);

#define VkglTestCase_018580_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018580_2 "allbacks.shader.srgb_decode_samplerparameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018580, VkglTestCase_018580_1, VkglTestCase_018580_2);
