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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021062_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021062_2 "ferenced_by_shader.separable_tess_eval.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021062, VkglTestCase_021062_1, VkglTestCase_021062_2);

#define VkglTestCase_021063_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021063_2 "enced_by_shader.separable_tess_eval.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021063, VkglTestCase_021063_1, VkglTestCase_021063_2);

#define VkglTestCase_021064_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021064_2 "nced_by_shader.separable_tess_eval.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021064, VkglTestCase_021064_1, VkglTestCase_021064_2);

#define VkglTestCase_021065_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021065_2 "erenced_by_shader.separable_tess_eval.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021065, VkglTestCase_021065_1, VkglTestCase_021065_2);

#define VkglTestCase_021066_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021066_2 "nced_by_shader.separable_tess_eval.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021066, VkglTestCase_021066_1, VkglTestCase_021066_2);

#define VkglTestCase_021067_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021067_2 "ced_by_shader.separable_tess_eval.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021067, VkglTestCase_021067_1, VkglTestCase_021067_2);

#define VkglTestCase_021068_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021068_2 "enced_by_shader.separable_tess_eval.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021068, VkglTestCase_021068_1, VkglTestCase_021068_2);

#define VkglTestCase_021069_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021069_2 "ed_by_shader.separable_tess_eval.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021069, VkglTestCase_021069_1, VkglTestCase_021069_2);

#define VkglTestCase_021070_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021070_2 "d_by_shader.separable_tess_eval.default_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021070, VkglTestCase_021070_1, VkglTestCase_021070_2);

#define VkglTestCase_021071_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021071_2 "d_by_shader.separable_tess_eval.default_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021071, VkglTestCase_021071_1, VkglTestCase_021071_2);

#define VkglTestCase_021072_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021072_2 "ed_by_shader.separable_tess_eval.default_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021072, VkglTestCase_021072_1, VkglTestCase_021072_2);

#define VkglTestCase_021073_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021073_2 "d_by_shader.separable_tess_eval.default_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021073, VkglTestCase_021073_1, VkglTestCase_021073_2);
