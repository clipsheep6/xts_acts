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

#define VkglTestCase_021742_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021742_2 "query.atomic_counter_buffer.resource_list"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021742, VkglTestCase_021742_1, VkglTestCase_021742_2);

#define VkglTestCase_021743_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021743_2 "uery.atomic_counter_buffer.active_variables"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021743, VkglTestCase_021743_1, VkglTestCase_021743_2);

#define VkglTestCase_021744_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021744_2 "query.atomic_counter_buffer.buffer_binding"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021744, VkglTestCase_021744_1, VkglTestCase_021744_2);

#define VkglTestCase_021745_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021745_2 "uery.atomic_counter_buffer.buffer_data_size"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021745, VkglTestCase_021745_1, VkglTestCase_021745_2);

#define VkglTestCase_021746_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021746_2 "y.atomic_counter_buffer.referenced_by_compute"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021746, VkglTestCase_021746_1, VkglTestCase_021746_2);

#define VkglTestCase_021747_1 "dEQP-GLES31.functional.program_interface_query.at"
#define VkglTestCase_021747_2 "omic_counter_buffer.referenced_by_separable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021747, VkglTestCase_021747_1, VkglTestCase_021747_2);

#define VkglTestCase_021748_1 "dEQP-GLES31.functional.program_interface_query.ato"
#define VkglTestCase_021748_2 "mic_counter_buffer.referenced_by_separable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021748, VkglTestCase_021748_1, VkglTestCase_021748_2);

#define VkglTestCase_021749_1 "dEQP-GLES31.functional.program_interface_query.ato"
#define VkglTestCase_021749_2 "mic_counter_buffer.referenced_by_separable_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021749, VkglTestCase_021749_1, VkglTestCase_021749_2);

#define VkglTestCase_021750_1 "dEQP-GLES31.functional.program_interface_query.atom"
#define VkglTestCase_021750_2 "ic_counter_buffer.referenced_by_separable_tess_ctrl"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021750, VkglTestCase_021750_1, VkglTestCase_021750_2);

#define VkglTestCase_021751_1 "dEQP-GLES31.functional.program_interface_query.atom"
#define VkglTestCase_021751_2 "ic_counter_buffer.referenced_by_separable_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021751, VkglTestCase_021751_1, VkglTestCase_021751_2);

#define VkglTestCase_021752_1 "dEQP-GLES31.functional.program_interface_query.at"
#define VkglTestCase_021752_2 "omic_counter_buffer.referenced_by_vertex_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021752, VkglTestCase_021752_1, VkglTestCase_021752_2);

#define VkglTestCase_021753_1 "dEQP-GLES31.functional.program_interface_query.atomic_c"
#define VkglTestCase_021753_2 "ounter_buffer.referenced_by_vertex_fragment_only_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021753, VkglTestCase_021753_1, VkglTestCase_021753_2);

#define VkglTestCase_021754_1 "dEQP-GLES31.functional.program_interface_query.atomic_co"
#define VkglTestCase_021754_2 "unter_buffer.referenced_by_vertex_fragment_only_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021754, VkglTestCase_021754_1, VkglTestCase_021754_2);

#define VkglTestCase_021755_1 "dEQP-GLES31.functional.program_interface_query.atom"
#define VkglTestCase_021755_2 "ic_counter_buffer.referenced_by_vertex_tess_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021755, VkglTestCase_021755_1, VkglTestCase_021755_2);

#define VkglTestCase_021756_1 "dEQP-GLES31.functional.program_interface_query.atomic_cou"
#define VkglTestCase_021756_2 "nter_buffer.referenced_by_vertex_tess_fragment_only_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021756, VkglTestCase_021756_1, VkglTestCase_021756_2);

#define VkglTestCase_021757_1 "dEQP-GLES31.functional.program_interface_query.atomic_coun"
#define VkglTestCase_021757_2 "ter_buffer.referenced_by_vertex_tess_fragment_only_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021757, VkglTestCase_021757_1, VkglTestCase_021757_2);

#define VkglTestCase_021758_1 "dEQP-GLES31.functional.program_interface_query.atomic_count"
#define VkglTestCase_021758_2 "er_buffer.referenced_by_vertex_tess_fragment_only_tess_ctrl"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021758, VkglTestCase_021758_1, VkglTestCase_021758_2);

#define VkglTestCase_021759_1 "dEQP-GLES31.functional.program_interface_query.atomic_count"
#define VkglTestCase_021759_2 "er_buffer.referenced_by_vertex_tess_fragment_only_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021759, VkglTestCase_021759_1, VkglTestCase_021759_2);

#define VkglTestCase_021760_1 "dEQP-GLES31.functional.program_interface_query.atom"
#define VkglTestCase_021760_2 "ic_counter_buffer.referenced_by_vertex_geo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021760, VkglTestCase_021760_1, VkglTestCase_021760_2);

#define VkglTestCase_021761_1 "dEQP-GLES31.functional.program_interface_query.atomic_cou"
#define VkglTestCase_021761_2 "nter_buffer.referenced_by_vertex_geo_fragment_only_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021761, VkglTestCase_021761_1, VkglTestCase_021761_2);

#define VkglTestCase_021762_1 "dEQP-GLES31.functional.program_interface_query.atomic_coun"
#define VkglTestCase_021762_2 "ter_buffer.referenced_by_vertex_geo_fragment_only_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021762, VkglTestCase_021762_1, VkglTestCase_021762_2);

#define VkglTestCase_021763_1 "dEQP-GLES31.functional.program_interface_query.atomic_c"
#define VkglTestCase_021763_2 "ounter_buffer.referenced_by_vertex_geo_fragment_only_geo"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021763, VkglTestCase_021763_1, VkglTestCase_021763_2);

#define VkglTestCase_021764_1 "dEQP-GLES31.functional.program_interface_query.atomic"
#define VkglTestCase_021764_2 "_counter_buffer.referenced_by_vertex_tess_geo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021764, VkglTestCase_021764_1, VkglTestCase_021764_2);

#define VkglTestCase_021765_1 "dEQP-GLES31.functional.program_interface_query.atomic_count"
#define VkglTestCase_021765_2 "er_buffer.referenced_by_vertex_tess_geo_fragment_only_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021765, VkglTestCase_021765_1, VkglTestCase_021765_2);

#define VkglTestCase_021766_1 "dEQP-GLES31.functional.program_interface_query.atomic_counte"
#define VkglTestCase_021766_2 "r_buffer.referenced_by_vertex_tess_geo_fragment_only_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021766, VkglTestCase_021766_1, VkglTestCase_021766_2);

#define VkglTestCase_021767_1 "dEQP-GLES31.functional.program_interface_query.atomic_coun"
#define VkglTestCase_021767_2 "ter_buffer.referenced_by_vertex_tess_geo_fragment_only_geo"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021767, VkglTestCase_021767_1, VkglTestCase_021767_2);

#define VkglTestCase_021768_1 "dEQP-GLES31.functional.program_interface_query.atomic_counter"
#define VkglTestCase_021768_2 "_buffer.referenced_by_vertex_tess_geo_fragment_only_tess_ctrl"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021768, VkglTestCase_021768_1, VkglTestCase_021768_2);

#define VkglTestCase_021769_1 "dEQP-GLES31.functional.program_interface_query.atomic_counter"
#define VkglTestCase_021769_2 "_buffer.referenced_by_vertex_tess_geo_fragment_only_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021769, VkglTestCase_021769_1, VkglTestCase_021769_2);
