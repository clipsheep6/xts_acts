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

#define VkglTestCase_021037_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021037_2 "ferenced_by_shader.separable_tess_ctrl.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021037, VkglTestCase_021037_1, VkglTestCase_021037_2);

#define VkglTestCase_021038_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021038_2 "enced_by_shader.separable_tess_ctrl.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021038, VkglTestCase_021038_1, VkglTestCase_021038_2);

#define VkglTestCase_021039_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021039_2 "nced_by_shader.separable_tess_ctrl.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021039, VkglTestCase_021039_1, VkglTestCase_021039_2);

#define VkglTestCase_021040_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021040_2 "erenced_by_shader.separable_tess_ctrl.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021040, VkglTestCase_021040_1, VkglTestCase_021040_2);

#define VkglTestCase_021041_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021041_2 "nced_by_shader.separable_tess_ctrl.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021041, VkglTestCase_021041_1, VkglTestCase_021041_2);

#define VkglTestCase_021042_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021042_2 "ced_by_shader.separable_tess_ctrl.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021042, VkglTestCase_021042_1, VkglTestCase_021042_2);

#define VkglTestCase_021043_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021043_2 "enced_by_shader.separable_tess_ctrl.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021043, VkglTestCase_021043_1, VkglTestCase_021043_2);

#define VkglTestCase_021044_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021044_2 "ed_by_shader.separable_tess_ctrl.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021044, VkglTestCase_021044_1, VkglTestCase_021044_2);

#define VkglTestCase_021045_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021045_2 "d_by_shader.separable_tess_ctrl.default_block.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021045, VkglTestCase_021045_1, VkglTestCase_021045_2);

#define VkglTestCase_021046_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021046_2 "d_by_shader.separable_tess_ctrl.default_block.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021046, VkglTestCase_021046_1, VkglTestCase_021046_2);

#define VkglTestCase_021047_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021047_2 "ed_by_shader.separable_tess_ctrl.default_block.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021047, VkglTestCase_021047_1, VkglTestCase_021047_2);

#define VkglTestCase_021048_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021048_2 "d_by_shader.separable_tess_ctrl.default_block.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021048, VkglTestCase_021048_1, VkglTestCase_021048_2);
