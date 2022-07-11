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

#define VkglTestCase_021231_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021231_2 "_by_shader.vertex_tess_fragment_only_tess_eval.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021231, VkglTestCase_021231_1, VkglTestCase_021231_2);

#define VkglTestCase_021232_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021232_2 "_shader.vertex_tess_fragment_only_tess_eval.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021232, VkglTestCase_021232_1, VkglTestCase_021232_2);

#define VkglTestCase_021233_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021233_2 "shader.vertex_tess_fragment_only_tess_eval.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021233, VkglTestCase_021233_1, VkglTestCase_021233_2);

#define VkglTestCase_021234_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021234_2 "by_shader.vertex_tess_fragment_only_tess_eval.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021234, VkglTestCase_021234_1, VkglTestCase_021234_2);

#define VkglTestCase_021235_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021235_2 "shader.vertex_tess_fragment_only_tess_eval.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021235, VkglTestCase_021235_1, VkglTestCase_021235_2);

#define VkglTestCase_021236_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021236_2 "hader.vertex_tess_fragment_only_tess_eval.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021236, VkglTestCase_021236_1, VkglTestCase_021236_2);

#define VkglTestCase_021237_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021237_2 "_shader.vertex_tess_fragment_only_tess_eval.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021237, VkglTestCase_021237_1, VkglTestCase_021237_2);

#define VkglTestCase_021238_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021238_2 "ader.vertex_tess_fragment_only_tess_eval.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021238, VkglTestCase_021238_1, VkglTestCase_021238_2);
