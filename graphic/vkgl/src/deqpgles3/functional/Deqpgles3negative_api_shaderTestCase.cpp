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
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_042059_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042059_2 "ive_api.shader.create_shader"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042059, VkglTestCase_042059_1, VkglTestCase_042059_2);

#define VkglTestCase_042060_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042060_2 "ive_api.shader.shader_source"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042060, VkglTestCase_042060_1, VkglTestCase_042060_2);

#define VkglTestCase_042061_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042061_2 "ve_api.shader.compile_shader"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042061, VkglTestCase_042061_1, VkglTestCase_042061_2);

#define VkglTestCase_042062_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042062_2 "ive_api.shader.delete_shader"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042062, VkglTestCase_042062_1, VkglTestCase_042062_2);

#define VkglTestCase_042063_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042063_2 "ive_api.shader.shader_binary"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042063, VkglTestCase_042063_1, VkglTestCase_042063_2);

#define VkglTestCase_042064_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042064_2 "ive_api.shader.attach_shader"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042064, VkglTestCase_042064_1, VkglTestCase_042064_2);

#define VkglTestCase_042065_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042065_2 "ive_api.shader.detach_shader"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042065, VkglTestCase_042065_1, VkglTestCase_042065_2);

#define VkglTestCase_042066_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042066_2 "ive_api.shader.link_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042066, VkglTestCase_042066_1, VkglTestCase_042066_2);

#define VkglTestCase_042067_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042067_2 "tive_api.shader.use_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042067, VkglTestCase_042067_1, VkglTestCase_042067_2);

#define VkglTestCase_042068_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042068_2 "ve_api.shader.delete_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042068, VkglTestCase_042068_1, VkglTestCase_042068_2);

#define VkglTestCase_042069_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_042069_2 "e_api.shader.validate_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042069, VkglTestCase_042069_1, VkglTestCase_042069_2);

#define VkglTestCase_042070_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042070_2 "_api.shader.get_program_binary"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042070, VkglTestCase_042070_1, VkglTestCase_042070_2);

#define VkglTestCase_042071_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042071_2 "ve_api.shader.program_binary"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042071, VkglTestCase_042071_1, VkglTestCase_042071_2);

#define VkglTestCase_042072_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042072_2 "_api.shader.program_parameteri"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042072, VkglTestCase_042072_1, VkglTestCase_042072_2);

#define VkglTestCase_042073_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042073_2 "ive_api.shader.gen_samplers"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042073, VkglTestCase_042073_1, VkglTestCase_042073_2);

#define VkglTestCase_042074_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042074_2 "ive_api.shader.bind_sampler"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042074, VkglTestCase_042074_1, VkglTestCase_042074_2);

#define VkglTestCase_042075_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042075_2 "ve_api.shader.delete_samplers"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042075, VkglTestCase_042075_1, VkglTestCase_042075_2);

#define VkglTestCase_042076_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042076_2 "pi.shader.get_sampler_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042076, VkglTestCase_042076_1, VkglTestCase_042076_2);

#define VkglTestCase_042077_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042077_2 "pi.shader.get_sampler_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042077, VkglTestCase_042077_1, VkglTestCase_042077_2);

#define VkglTestCase_042078_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042078_2 "_api.shader.sampler_parameteri"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042078, VkglTestCase_042078_1, VkglTestCase_042078_2);

#define VkglTestCase_042079_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042079_2 "_api.shader.sampler_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042079, VkglTestCase_042079_1, VkglTestCase_042079_2);

#define VkglTestCase_042080_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042080_2 "_api.shader.sampler_parameterf"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042080, VkglTestCase_042080_1, VkglTestCase_042080_2);

#define VkglTestCase_042081_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042081_2 "_api.shader.sampler_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042081, VkglTestCase_042081_1, VkglTestCase_042081_2);

#define VkglTestCase_042082_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042082_2 "_api.shader.get_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042082, VkglTestCase_042082_1, VkglTestCase_042082_2);

#define VkglTestCase_042083_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042083_2 "api.shader.get_uniform_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042083, VkglTestCase_042083_1, VkglTestCase_042083_2);

#define VkglTestCase_042084_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042084_2 "api.shader.bind_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042084, VkglTestCase_042084_1, VkglTestCase_042084_2);

#define VkglTestCase_042085_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042085_2 "api.shader.uniform_block_binding"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042085, VkglTestCase_042085_1, VkglTestCase_042085_2);

#define VkglTestCase_042086_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042086_2 "i.shader.uniformf_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042086, VkglTestCase_042086_1, VkglTestCase_042086_2);

#define VkglTestCase_042087_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042087_2 ".shader.uniformf_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042087, VkglTestCase_042087_1, VkglTestCase_042087_2);

#define VkglTestCase_042088_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042088_2 "i.shader.uniformf_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042088, VkglTestCase_042088_1, VkglTestCase_042088_2);

#define VkglTestCase_042089_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042089_2 "i.shader.uniformfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042089, VkglTestCase_042089_1, VkglTestCase_042089_2);

#define VkglTestCase_042090_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042090_2 ".shader.uniformfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042090, VkglTestCase_042090_1, VkglTestCase_042090_2);

#define VkglTestCase_042091_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042091_2 ".shader.uniformfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042091, VkglTestCase_042091_1, VkglTestCase_042091_2);

#define VkglTestCase_042092_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042092_2 "pi.shader.uniformfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042092, VkglTestCase_042092_1, VkglTestCase_042092_2);

#define VkglTestCase_042093_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042093_2 "i.shader.uniformi_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042093, VkglTestCase_042093_1, VkglTestCase_042093_2);

#define VkglTestCase_042094_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042094_2 ".shader.uniformi_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042094, VkglTestCase_042094_1, VkglTestCase_042094_2);

#define VkglTestCase_042095_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042095_2 "i.shader.uniformi_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042095, VkglTestCase_042095_1, VkglTestCase_042095_2);

#define VkglTestCase_042096_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042096_2 "i.shader.uniformiv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042096, VkglTestCase_042096_1, VkglTestCase_042096_2);

#define VkglTestCase_042097_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042097_2 ".shader.uniformiv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042097, VkglTestCase_042097_1, VkglTestCase_042097_2);

#define VkglTestCase_042098_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042098_2 ".shader.uniformiv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042098, VkglTestCase_042098_1, VkglTestCase_042098_2);

#define VkglTestCase_042099_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042099_2 "pi.shader.uniformiv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042099, VkglTestCase_042099_1, VkglTestCase_042099_2);

#define VkglTestCase_042100_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042100_2 "i.shader.uniformui_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042100, VkglTestCase_042100_1, VkglTestCase_042100_2);

#define VkglTestCase_042101_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042101_2 ".shader.uniformui_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042101, VkglTestCase_042101_1, VkglTestCase_042101_2);

#define VkglTestCase_042102_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042102_2 ".shader.uniformui_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042102, VkglTestCase_042102_1, VkglTestCase_042102_2);

#define VkglTestCase_042103_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042103_2 ".shader.uniformuiv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042103, VkglTestCase_042103_1, VkglTestCase_042103_2);

#define VkglTestCase_042104_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042104_2 "shader.uniformuiv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042104, VkglTestCase_042104_1, VkglTestCase_042104_2);

#define VkglTestCase_042105_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042105_2 ".shader.uniformuiv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042105, VkglTestCase_042105_1, VkglTestCase_042105_2);

#define VkglTestCase_042106_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042106_2 "i.shader.uniformuiv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042106, VkglTestCase_042106_1, VkglTestCase_042106_2);

#define VkglTestCase_042107_1 "dEQP-GLES3.functional.negative_api.sh"
#define VkglTestCase_042107_2 "ader.uniform_matrixfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042107, VkglTestCase_042107_1, VkglTestCase_042107_2);

#define VkglTestCase_042108_1 "dEQP-GLES3.functional.negative_api.sha"
#define VkglTestCase_042108_2 "der.uniform_matrixfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042108, VkglTestCase_042108_1, VkglTestCase_042108_2);

#define VkglTestCase_042109_1 "dEQP-GLES3.functional.negative_api.sh"
#define VkglTestCase_042109_2 "ader.uniform_matrixfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042109, VkglTestCase_042109_1, VkglTestCase_042109_2);

#define VkglTestCase_042110_1 "dEQP-GLES3.functional.negative_api.s"
#define VkglTestCase_042110_2 "hader.uniform_matrixfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042110, VkglTestCase_042110_1, VkglTestCase_042110_2);

#define VkglTestCase_042111_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042111_2 "pi.shader.gen_transform_feedbacks"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042111, VkglTestCase_042111_1, VkglTestCase_042111_2);

#define VkglTestCase_042112_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042112_2 "pi.shader.bind_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042112, VkglTestCase_042112_1, VkglTestCase_042112_2);

#define VkglTestCase_042113_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042113_2 ".shader.delete_transform_feedbacks"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042113, VkglTestCase_042113_1, VkglTestCase_042113_2);

#define VkglTestCase_042114_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042114_2 "i.shader.begin_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042114, VkglTestCase_042114_1, VkglTestCase_042114_2);

#define VkglTestCase_042115_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042115_2 "i.shader.pause_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042115, VkglTestCase_042115_1, VkglTestCase_042115_2);

#define VkglTestCase_042116_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042116_2 "i.shader.resume_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042116, VkglTestCase_042116_1, VkglTestCase_042116_2);

#define VkglTestCase_042117_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042117_2 "pi.shader.end_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042117, VkglTestCase_042117_1, VkglTestCase_042117_2);

#define VkglTestCase_042118_1 "dEQP-GLES3.functional.negative_api.s"
#define VkglTestCase_042118_2 "hader.get_transform_feedback_varying"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042118, VkglTestCase_042118_1, VkglTestCase_042118_2);

#define VkglTestCase_042119_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042119_2 ".shader.transform_feedback_varyings"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042119, VkglTestCase_042119_1, VkglTestCase_042119_2);
