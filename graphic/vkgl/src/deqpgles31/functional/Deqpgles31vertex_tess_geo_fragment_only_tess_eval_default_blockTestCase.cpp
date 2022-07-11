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

#define VkglTestCase_021401_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021401_2 "y_shader.vertex_tess_geo_fragment_only_tess_eval.default_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021401, VkglTestCase_021401_1, VkglTestCase_021401_2);

#define VkglTestCase_021402_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021402_2 "hader.vertex_tess_geo_fragment_only_tess_eval.default_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021402, VkglTestCase_021402_1, VkglTestCase_021402_2);

#define VkglTestCase_021403_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021403_2 "ader.vertex_tess_geo_fragment_only_tess_eval.default_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021403, VkglTestCase_021403_1, VkglTestCase_021403_2);

#define VkglTestCase_021404_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021404_2 "_shader.vertex_tess_geo_fragment_only_tess_eval.default_block.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021404, VkglTestCase_021404_1, VkglTestCase_021404_2);

#define VkglTestCase_021405_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021405_2 "ader.vertex_tess_geo_fragment_only_tess_eval.default_block.sampler_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021405, VkglTestCase_021405_1, VkglTestCase_021405_2);

#define VkglTestCase_021406_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sha"
#define VkglTestCase_021406_2 "der.vertex_tess_geo_fragment_only_tess_eval.default_block.sampler_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021406, VkglTestCase_021406_1, VkglTestCase_021406_2);

#define VkglTestCase_021407_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021407_2 "hader.vertex_tess_geo_fragment_only_tess_eval.default_block.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021407, VkglTestCase_021407_1, VkglTestCase_021407_2);

#define VkglTestCase_021408_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_shad"
#define VkglTestCase_021408_2 "er.vertex_tess_geo_fragment_only_tess_eval.default_block.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021408, VkglTestCase_021408_1, VkglTestCase_021408_2);
