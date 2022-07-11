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

#define VkglTestCase_021214_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021214_2 "_by_shader.vertex_tess_fragment_only_tess_ctrl.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021214, VkglTestCase_021214_1, VkglTestCase_021214_2);

#define VkglTestCase_021215_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021215_2 "_shader.vertex_tess_fragment_only_tess_ctrl.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021215, VkglTestCase_021215_1, VkglTestCase_021215_2);

#define VkglTestCase_021216_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021216_2 "shader.vertex_tess_fragment_only_tess_ctrl.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021216, VkglTestCase_021216_1, VkglTestCase_021216_2);

#define VkglTestCase_021217_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021217_2 "by_shader.vertex_tess_fragment_only_tess_ctrl.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021217, VkglTestCase_021217_1, VkglTestCase_021217_2);

#define VkglTestCase_021218_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021218_2 "shader.vertex_tess_fragment_only_tess_ctrl.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021218, VkglTestCase_021218_1, VkglTestCase_021218_2);

#define VkglTestCase_021219_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021219_2 "hader.vertex_tess_fragment_only_tess_ctrl.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021219, VkglTestCase_021219_1, VkglTestCase_021219_2);

#define VkglTestCase_021220_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021220_2 "_shader.vertex_tess_fragment_only_tess_ctrl.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021220, VkglTestCase_021220_1, VkglTestCase_021220_2);

#define VkglTestCase_021221_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021221_2 "ader.vertex_tess_fragment_only_tess_ctrl.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021221, VkglTestCase_021221_1, VkglTestCase_021221_2);
