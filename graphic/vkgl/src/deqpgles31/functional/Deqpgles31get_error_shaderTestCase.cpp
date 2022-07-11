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

#define VkglTestCase_019503_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019503_2 "coverage.get_error.shader.create_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019503, VkglTestCase_019503_1, VkglTestCase_019503_2);

#define VkglTestCase_019504_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019504_2 "coverage.get_error.shader.shader_source"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019504, VkglTestCase_019504_1, VkglTestCase_019504_2);

#define VkglTestCase_019505_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019505_2 "overage.get_error.shader.compile_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019505, VkglTestCase_019505_1, VkglTestCase_019505_2);

#define VkglTestCase_019506_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019506_2 "coverage.get_error.shader.delete_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019506, VkglTestCase_019506_1, VkglTestCase_019506_2);

#define VkglTestCase_019507_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019507_2 "coverage.get_error.shader.shader_binary"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019507, VkglTestCase_019507_1, VkglTestCase_019507_2);

#define VkglTestCase_019508_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019508_2 "coverage.get_error.shader.attach_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019508, VkglTestCase_019508_1, VkglTestCase_019508_2);

#define VkglTestCase_019509_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019509_2 "coverage.get_error.shader.detach_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019509, VkglTestCase_019509_1, VkglTestCase_019509_2);

#define VkglTestCase_019510_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019510_2 "coverage.get_error.shader.link_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019510, VkglTestCase_019510_1, VkglTestCase_019510_2);

#define VkglTestCase_019511_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019511_2 "_coverage.get_error.shader.use_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019511, VkglTestCase_019511_1, VkglTestCase_019511_2);

#define VkglTestCase_019512_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019512_2 "overage.get_error.shader.delete_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019512, VkglTestCase_019512_1, VkglTestCase_019512_2);

#define VkglTestCase_019513_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019513_2 "verage.get_error.shader.validate_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019513, VkglTestCase_019513_1, VkglTestCase_019513_2);

#define VkglTestCase_019514_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019514_2 "erage.get_error.shader.get_program_binary"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019514, VkglTestCase_019514_1, VkglTestCase_019514_2);

#define VkglTestCase_019515_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019515_2 "overage.get_error.shader.program_binary"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019515, VkglTestCase_019515_1, VkglTestCase_019515_2);

#define VkglTestCase_019516_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019516_2 "erage.get_error.shader.program_parameteri"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019516, VkglTestCase_019516_1, VkglTestCase_019516_2);

#define VkglTestCase_019517_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019517_2 "coverage.get_error.shader.gen_samplers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019517, VkglTestCase_019517_1, VkglTestCase_019517_2);

#define VkglTestCase_019518_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019518_2 "coverage.get_error.shader.bind_sampler"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019518, VkglTestCase_019518_1, VkglTestCase_019518_2);

#define VkglTestCase_019519_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019519_2 "overage.get_error.shader.delete_samplers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019519, VkglTestCase_019519_1, VkglTestCase_019519_2);

#define VkglTestCase_019520_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019520_2 "age.get_error.shader.get_sampler_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019520, VkglTestCase_019520_1, VkglTestCase_019520_2);

#define VkglTestCase_019521_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019521_2 "age.get_error.shader.get_sampler_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019521, VkglTestCase_019521_1, VkglTestCase_019521_2);

#define VkglTestCase_019522_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019522_2 "ge.get_error.shader.get_sampler_parameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019522, VkglTestCase_019522_1, VkglTestCase_019522_2);

#define VkglTestCase_019523_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019523_2 "ge.get_error.shader.get_sampler_parameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019523, VkglTestCase_019523_1, VkglTestCase_019523_2);

#define VkglTestCase_019524_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019524_2 "erage.get_error.shader.sampler_parameteri"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019524, VkglTestCase_019524_1, VkglTestCase_019524_2);

#define VkglTestCase_019525_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019525_2 "erage.get_error.shader.sampler_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019525, VkglTestCase_019525_1, VkglTestCase_019525_2);

#define VkglTestCase_019526_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019526_2 "erage.get_error.shader.sampler_parameterf"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019526, VkglTestCase_019526_1, VkglTestCase_019526_2);

#define VkglTestCase_019527_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019527_2 "erage.get_error.shader.sampler_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019527, VkglTestCase_019527_1, VkglTestCase_019527_2);

#define VkglTestCase_019528_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019528_2 "rage.get_error.shader.sampler_parameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019528, VkglTestCase_019528_1, VkglTestCase_019528_2);

#define VkglTestCase_019529_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019529_2 "rage.get_error.shader.sampler_parameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019529, VkglTestCase_019529_1, VkglTestCase_019529_2);

#define VkglTestCase_019530_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019530_2 "erage.get_error.shader.get_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019530, VkglTestCase_019530_1, VkglTestCase_019530_2);

#define VkglTestCase_019531_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019531_2 "rage.get_error.shader.get_uniform_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019531, VkglTestCase_019531_1, VkglTestCase_019531_2);

#define VkglTestCase_019532_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019532_2 "rage.get_error.shader.bind_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019532, VkglTestCase_019532_1, VkglTestCase_019532_2);

#define VkglTestCase_019533_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019533_2 "rage.get_error.shader.uniform_block_binding"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019533, VkglTestCase_019533_1, VkglTestCase_019533_2);

#define VkglTestCase_019534_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019534_2 "ge.get_error.shader.uniformf_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019534, VkglTestCase_019534_1, VkglTestCase_019534_2);

#define VkglTestCase_019535_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019535_2 "e.get_error.shader.uniformf_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019535, VkglTestCase_019535_1, VkglTestCase_019535_2);

#define VkglTestCase_019536_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019536_2 "ge.get_error.shader.uniformf_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019536, VkglTestCase_019536_1, VkglTestCase_019536_2);

#define VkglTestCase_019537_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019537_2 "ge.get_error.shader.uniformfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019537, VkglTestCase_019537_1, VkglTestCase_019537_2);

#define VkglTestCase_019538_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019538_2 "e.get_error.shader.uniformfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019538, VkglTestCase_019538_1, VkglTestCase_019538_2);

#define VkglTestCase_019539_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019539_2 "e.get_error.shader.uniformfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019539, VkglTestCase_019539_1, VkglTestCase_019539_2);

#define VkglTestCase_019540_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019540_2 "age.get_error.shader.uniformfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019540, VkglTestCase_019540_1, VkglTestCase_019540_2);

#define VkglTestCase_019541_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019541_2 "ge.get_error.shader.uniformi_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019541, VkglTestCase_019541_1, VkglTestCase_019541_2);

#define VkglTestCase_019542_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019542_2 "e.get_error.shader.uniformi_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019542, VkglTestCase_019542_1, VkglTestCase_019542_2);

#define VkglTestCase_019543_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019543_2 "ge.get_error.shader.uniformi_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019543, VkglTestCase_019543_1, VkglTestCase_019543_2);

#define VkglTestCase_019544_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019544_2 "ge.get_error.shader.uniformiv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019544, VkglTestCase_019544_1, VkglTestCase_019544_2);

#define VkglTestCase_019545_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019545_2 "e.get_error.shader.uniformiv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019545, VkglTestCase_019545_1, VkglTestCase_019545_2);

#define VkglTestCase_019546_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019546_2 "e.get_error.shader.uniformiv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019546, VkglTestCase_019546_1, VkglTestCase_019546_2);

#define VkglTestCase_019547_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019547_2 "age.get_error.shader.uniformiv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019547, VkglTestCase_019547_1, VkglTestCase_019547_2);

#define VkglTestCase_019548_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019548_2 "ge.get_error.shader.uniformui_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019548, VkglTestCase_019548_1, VkglTestCase_019548_2);

#define VkglTestCase_019549_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019549_2 "e.get_error.shader.uniformui_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019549, VkglTestCase_019549_1, VkglTestCase_019549_2);

#define VkglTestCase_019550_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019550_2 "e.get_error.shader.uniformui_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019550, VkglTestCase_019550_1, VkglTestCase_019550_2);

#define VkglTestCase_019551_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019551_2 "e.get_error.shader.uniformuiv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019551, VkglTestCase_019551_1, VkglTestCase_019551_2);

#define VkglTestCase_019552_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019552_2 ".get_error.shader.uniformuiv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019552, VkglTestCase_019552_1, VkglTestCase_019552_2);

#define VkglTestCase_019553_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019553_2 "e.get_error.shader.uniformuiv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019553, VkglTestCase_019553_1, VkglTestCase_019553_2);

#define VkglTestCase_019554_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019554_2 "ge.get_error.shader.uniformuiv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019554, VkglTestCase_019554_1, VkglTestCase_019554_2);

#define VkglTestCase_019555_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019555_2 "et_error.shader.uniform_matrixfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019555, VkglTestCase_019555_1, VkglTestCase_019555_2);

#define VkglTestCase_019556_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019556_2 "t_error.shader.uniform_matrixfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019556, VkglTestCase_019556_1, VkglTestCase_019556_2);

#define VkglTestCase_019557_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019557_2 "et_error.shader.uniform_matrixfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019557, VkglTestCase_019557_1, VkglTestCase_019557_2);

#define VkglTestCase_019558_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019558_2 "get_error.shader.uniform_matrixfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019558, VkglTestCase_019558_1, VkglTestCase_019558_2);

#define VkglTestCase_019559_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019559_2 "age.get_error.shader.gen_transform_feedbacks"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019559, VkglTestCase_019559_1, VkglTestCase_019559_2);

#define VkglTestCase_019560_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019560_2 "age.get_error.shader.bind_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019560, VkglTestCase_019560_1, VkglTestCase_019560_2);

#define VkglTestCase_019561_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019561_2 "e.get_error.shader.delete_transform_feedbacks"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019561, VkglTestCase_019561_1, VkglTestCase_019561_2);

#define VkglTestCase_019562_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019562_2 "ge.get_error.shader.begin_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019562, VkglTestCase_019562_1, VkglTestCase_019562_2);

#define VkglTestCase_019563_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019563_2 "ge.get_error.shader.pause_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019563, VkglTestCase_019563_1, VkglTestCase_019563_2);

#define VkglTestCase_019564_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019564_2 "ge.get_error.shader.resume_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019564, VkglTestCase_019564_1, VkglTestCase_019564_2);

#define VkglTestCase_019565_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019565_2 "age.get_error.shader.end_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019565, VkglTestCase_019565_1, VkglTestCase_019565_2);

#define VkglTestCase_019566_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019566_2 "get_error.shader.get_transform_feedback_varying"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019566, VkglTestCase_019566_1, VkglTestCase_019566_2);

#define VkglTestCase_019567_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019567_2 "e.get_error.shader.transform_feedback_varyings"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019567, VkglTestCase_019567_1, VkglTestCase_019567_2);

#define VkglTestCase_019568_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019568_2 "age.get_error.shader.compile_compute_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019568, VkglTestCase_019568_1, VkglTestCase_019568_2);

#define VkglTestCase_019569_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019569_2 "erage.get_error.shader.link_compute_shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019569, VkglTestCase_019569_1, VkglTestCase_019569_2);

#define VkglTestCase_019570_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019570_2 ".get_error.shader.srgb_decode_samplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019570, VkglTestCase_019570_1, VkglTestCase_019570_2);

#define VkglTestCase_019571_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019571_2 ".get_error.shader.srgb_decode_samplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019571, VkglTestCase_019571_1, VkglTestCase_019571_2);

#define VkglTestCase_019572_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019572_2 "get_error.shader.srgb_decode_samplerparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019572, VkglTestCase_019572_1, VkglTestCase_019572_2);

#define VkglTestCase_019573_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019573_2 "get_error.shader.srgb_decode_samplerparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019573, VkglTestCase_019573_1, VkglTestCase_019573_2);

#define VkglTestCase_019574_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019574_2 "get_error.shader.srgb_decode_samplerparameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019574, VkglTestCase_019574_1, VkglTestCase_019574_2);

#define VkglTestCase_019575_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019575_2 "et_error.shader.srgb_decode_samplerparameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019575, VkglTestCase_019575_1, VkglTestCase_019575_2);
