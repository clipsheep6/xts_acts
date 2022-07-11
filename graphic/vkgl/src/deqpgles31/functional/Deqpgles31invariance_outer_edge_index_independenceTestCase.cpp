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
#include "../ActsDeqpgles310009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008135_1 "dEQP-GLES31.functional.tessellation.invariance.outer"
#define VkglTestCase_008135_2 "_edge_index_independence.triangles_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008135, VkglTestCase_008135_1, VkglTestCase_008135_2);

#define VkglTestCase_008136_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge"
#define VkglTestCase_008136_2 "_index_independence.triangles_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008136, VkglTestCase_008136_1, VkglTestCase_008136_2);

#define VkglTestCase_008137_1 "dEQP-GLES31.functional.tessellation.invariance.oute"
#define VkglTestCase_008137_2 "r_edge_index_independence.triangles_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008137, VkglTestCase_008137_1, VkglTestCase_008137_2);

#define VkglTestCase_008138_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge"
#define VkglTestCase_008138_2 "_index_independence.triangles_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008138, VkglTestCase_008138_1, VkglTestCase_008138_2);

#define VkglTestCase_008139_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edg"
#define VkglTestCase_008139_2 "e_index_independence.triangles_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008139, VkglTestCase_008139_1, VkglTestCase_008139_2);

#define VkglTestCase_008140_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge_inde"
#define VkglTestCase_008140_2 "x_independence.triangles_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008140, VkglTestCase_008140_1, VkglTestCase_008140_2);

#define VkglTestCase_008141_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edg"
#define VkglTestCase_008141_2 "e_index_independence.triangles_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008141, VkglTestCase_008141_1, VkglTestCase_008141_2);

#define VkglTestCase_008142_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge_ind"
#define VkglTestCase_008142_2 "ex_independence.triangles_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008142, VkglTestCase_008142_1, VkglTestCase_008142_2);

#define VkglTestCase_008143_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge"
#define VkglTestCase_008143_2 "_index_independence.triangles_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008143, VkglTestCase_008143_1, VkglTestCase_008143_2);

#define VkglTestCase_008144_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge_inde"
#define VkglTestCase_008144_2 "x_independence.triangles_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008144, VkglTestCase_008144_1, VkglTestCase_008144_2);

#define VkglTestCase_008145_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edg"
#define VkglTestCase_008145_2 "e_index_independence.triangles_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008145, VkglTestCase_008145_1, VkglTestCase_008145_2);

#define VkglTestCase_008146_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge_inde"
#define VkglTestCase_008146_2 "x_independence.triangles_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008146, VkglTestCase_008146_1, VkglTestCase_008146_2);

#define VkglTestCase_008147_1 "dEQP-GLES31.functional.tessellation.invariance.out"
#define VkglTestCase_008147_2 "er_edge_index_independence.quads_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008147, VkglTestCase_008147_1, VkglTestCase_008147_2);

#define VkglTestCase_008148_1 "dEQP-GLES31.functional.tessellation.invariance.outer_ed"
#define VkglTestCase_008148_2 "ge_index_independence.quads_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008148, VkglTestCase_008148_1, VkglTestCase_008148_2);

#define VkglTestCase_008149_1 "dEQP-GLES31.functional.tessellation.invariance.ou"
#define VkglTestCase_008149_2 "ter_edge_index_independence.quads_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008149, VkglTestCase_008149_1, VkglTestCase_008149_2);

#define VkglTestCase_008150_1 "dEQP-GLES31.functional.tessellation.invariance.outer_ed"
#define VkglTestCase_008150_2 "ge_index_independence.quads_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008150, VkglTestCase_008150_1, VkglTestCase_008150_2);

#define VkglTestCase_008151_1 "dEQP-GLES31.functional.tessellation.invariance.outer_e"
#define VkglTestCase_008151_2 "dge_index_independence.quads_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008151, VkglTestCase_008151_1, VkglTestCase_008151_2);

#define VkglTestCase_008152_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge_in"
#define VkglTestCase_008152_2 "dex_independence.quads_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008152, VkglTestCase_008152_1, VkglTestCase_008152_2);

#define VkglTestCase_008153_1 "dEQP-GLES31.functional.tessellation.invariance.outer_e"
#define VkglTestCase_008153_2 "dge_index_independence.quads_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008153, VkglTestCase_008153_1, VkglTestCase_008153_2);

#define VkglTestCase_008154_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge_i"
#define VkglTestCase_008154_2 "ndex_independence.quads_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008154, VkglTestCase_008154_1, VkglTestCase_008154_2);

#define VkglTestCase_008155_1 "dEQP-GLES31.functional.tessellation.invariance.outer_ed"
#define VkglTestCase_008155_2 "ge_index_independence.quads_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008155, VkglTestCase_008155_1, VkglTestCase_008155_2);

#define VkglTestCase_008156_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge_in"
#define VkglTestCase_008156_2 "dex_independence.quads_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008156, VkglTestCase_008156_1, VkglTestCase_008156_2);

#define VkglTestCase_008157_1 "dEQP-GLES31.functional.tessellation.invariance.outer_e"
#define VkglTestCase_008157_2 "dge_index_independence.quads_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008157, VkglTestCase_008157_1, VkglTestCase_008157_2);

#define VkglTestCase_008158_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge_in"
#define VkglTestCase_008158_2 "dex_independence.quads_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008158, VkglTestCase_008158_1, VkglTestCase_008158_2);
