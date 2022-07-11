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

#define VkglTestCase_008099_1 "dEQP-GLES31.functional.tessellation.invariance."
#define VkglTestCase_008099_2 "outer_edge_symmetry.triangles_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008099, VkglTestCase_008099_1, VkglTestCase_008099_2);

#define VkglTestCase_008100_1 "dEQP-GLES31.functional.tessellation.invariance.outer"
#define VkglTestCase_008100_2 "_edge_symmetry.triangles_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008100, VkglTestCase_008100_1, VkglTestCase_008100_2);

#define VkglTestCase_008101_1 "dEQP-GLES31.functional.tessellation.invariance"
#define VkglTestCase_008101_2 ".outer_edge_symmetry.triangles_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008101, VkglTestCase_008101_1, VkglTestCase_008101_2);

#define VkglTestCase_008102_1 "dEQP-GLES31.functional.tessellation.invariance.outer"
#define VkglTestCase_008102_2 "_edge_symmetry.triangles_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008102, VkglTestCase_008102_1, VkglTestCase_008102_2);

#define VkglTestCase_008103_1 "dEQP-GLES31.functional.tessellation.invariance.oute"
#define VkglTestCase_008103_2 "r_edge_symmetry.triangles_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008103, VkglTestCase_008103_1, VkglTestCase_008103_2);

#define VkglTestCase_008104_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge"
#define VkglTestCase_008104_2 "_symmetry.triangles_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008104, VkglTestCase_008104_1, VkglTestCase_008104_2);

#define VkglTestCase_008105_1 "dEQP-GLES31.functional.tessellation.invariance.oute"
#define VkglTestCase_008105_2 "r_edge_symmetry.triangles_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008105, VkglTestCase_008105_1, VkglTestCase_008105_2);

#define VkglTestCase_008106_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edg"
#define VkglTestCase_008106_2 "e_symmetry.triangles_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008106, VkglTestCase_008106_1, VkglTestCase_008106_2);

#define VkglTestCase_008107_1 "dEQP-GLES31.functional.tessellation.invariance.outer"
#define VkglTestCase_008107_2 "_edge_symmetry.triangles_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008107, VkglTestCase_008107_1, VkglTestCase_008107_2);

#define VkglTestCase_008108_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge"
#define VkglTestCase_008108_2 "_symmetry.triangles_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008108, VkglTestCase_008108_1, VkglTestCase_008108_2);

#define VkglTestCase_008109_1 "dEQP-GLES31.functional.tessellation.invariance.oute"
#define VkglTestCase_008109_2 "r_edge_symmetry.triangles_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008109, VkglTestCase_008109_1, VkglTestCase_008109_2);

#define VkglTestCase_008110_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge"
#define VkglTestCase_008110_2 "_symmetry.triangles_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008110, VkglTestCase_008110_1, VkglTestCase_008110_2);

#define VkglTestCase_008111_1 "dEQP-GLES31.functional.tessellation.invarianc"
#define VkglTestCase_008111_2 "e.outer_edge_symmetry.quads_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008111, VkglTestCase_008111_1, VkglTestCase_008111_2);

#define VkglTestCase_008112_1 "dEQP-GLES31.functional.tessellation.invariance.out"
#define VkglTestCase_008112_2 "er_edge_symmetry.quads_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008112, VkglTestCase_008112_1, VkglTestCase_008112_2);

#define VkglTestCase_008113_1 "dEQP-GLES31.functional.tessellation.invarian"
#define VkglTestCase_008113_2 "ce.outer_edge_symmetry.quads_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008113, VkglTestCase_008113_1, VkglTestCase_008113_2);

#define VkglTestCase_008114_1 "dEQP-GLES31.functional.tessellation.invariance.out"
#define VkglTestCase_008114_2 "er_edge_symmetry.quads_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008114, VkglTestCase_008114_1, VkglTestCase_008114_2);

#define VkglTestCase_008115_1 "dEQP-GLES31.functional.tessellation.invariance.ou"
#define VkglTestCase_008115_2 "ter_edge_symmetry.quads_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008115, VkglTestCase_008115_1, VkglTestCase_008115_2);

#define VkglTestCase_008116_1 "dEQP-GLES31.functional.tessellation.invariance.outer_ed"
#define VkglTestCase_008116_2 "ge_symmetry.quads_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008116, VkglTestCase_008116_1, VkglTestCase_008116_2);

#define VkglTestCase_008117_1 "dEQP-GLES31.functional.tessellation.invariance.ou"
#define VkglTestCase_008117_2 "ter_edge_symmetry.quads_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008117, VkglTestCase_008117_1, VkglTestCase_008117_2);

#define VkglTestCase_008118_1 "dEQP-GLES31.functional.tessellation.invariance.outer_e"
#define VkglTestCase_008118_2 "dge_symmetry.quads_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008118, VkglTestCase_008118_1, VkglTestCase_008118_2);

#define VkglTestCase_008119_1 "dEQP-GLES31.functional.tessellation.invariance.out"
#define VkglTestCase_008119_2 "er_edge_symmetry.quads_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008119, VkglTestCase_008119_1, VkglTestCase_008119_2);

#define VkglTestCase_008120_1 "dEQP-GLES31.functional.tessellation.invariance.outer_ed"
#define VkglTestCase_008120_2 "ge_symmetry.quads_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008120, VkglTestCase_008120_1, VkglTestCase_008120_2);

#define VkglTestCase_008121_1 "dEQP-GLES31.functional.tessellation.invariance.ou"
#define VkglTestCase_008121_2 "ter_edge_symmetry.quads_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008121, VkglTestCase_008121_1, VkglTestCase_008121_2);

#define VkglTestCase_008122_1 "dEQP-GLES31.functional.tessellation.invariance.outer_ed"
#define VkglTestCase_008122_2 "ge_symmetry.quads_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008122, VkglTestCase_008122_1, VkglTestCase_008122_2);

#define VkglTestCase_008123_1 "dEQP-GLES31.functional.tessellation.invariance"
#define VkglTestCase_008123_2 ".outer_edge_symmetry.isolines_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008123, VkglTestCase_008123_1, VkglTestCase_008123_2);

#define VkglTestCase_008124_1 "dEQP-GLES31.functional.tessellation.invariance.outer"
#define VkglTestCase_008124_2 "_edge_symmetry.isolines_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008124, VkglTestCase_008124_1, VkglTestCase_008124_2);

#define VkglTestCase_008125_1 "dEQP-GLES31.functional.tessellation.invariance"
#define VkglTestCase_008125_2 ".outer_edge_symmetry.isolines_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008125, VkglTestCase_008125_1, VkglTestCase_008125_2);

#define VkglTestCase_008126_1 "dEQP-GLES31.functional.tessellation.invariance.oute"
#define VkglTestCase_008126_2 "r_edge_symmetry.isolines_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008126, VkglTestCase_008126_1, VkglTestCase_008126_2);

#define VkglTestCase_008127_1 "dEQP-GLES31.functional.tessellation.invariance.oute"
#define VkglTestCase_008127_2 "r_edge_symmetry.isolines_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008127, VkglTestCase_008127_1, VkglTestCase_008127_2);

#define VkglTestCase_008128_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edg"
#define VkglTestCase_008128_2 "e_symmetry.isolines_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008128, VkglTestCase_008128_1, VkglTestCase_008128_2);

#define VkglTestCase_008129_1 "dEQP-GLES31.functional.tessellation.invariance.out"
#define VkglTestCase_008129_2 "er_edge_symmetry.isolines_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008129, VkglTestCase_008129_1, VkglTestCase_008129_2);

#define VkglTestCase_008130_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edg"
#define VkglTestCase_008130_2 "e_symmetry.isolines_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008130, VkglTestCase_008130_1, VkglTestCase_008130_2);

#define VkglTestCase_008131_1 "dEQP-GLES31.functional.tessellation.invariance.oute"
#define VkglTestCase_008131_2 "r_edge_symmetry.isolines_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008131, VkglTestCase_008131_1, VkglTestCase_008131_2);

#define VkglTestCase_008132_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edge"
#define VkglTestCase_008132_2 "_symmetry.isolines_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008132, VkglTestCase_008132_1, VkglTestCase_008132_2);

#define VkglTestCase_008133_1 "dEQP-GLES31.functional.tessellation.invariance.oute"
#define VkglTestCase_008133_2 "r_edge_symmetry.isolines_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008133, VkglTestCase_008133_1, VkglTestCase_008133_2);

#define VkglTestCase_008134_1 "dEQP-GLES31.functional.tessellation.invariance.outer_edg"
#define VkglTestCase_008134_2 "e_symmetry.isolines_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008134, VkglTestCase_008134_1, VkglTestCase_008134_2);
