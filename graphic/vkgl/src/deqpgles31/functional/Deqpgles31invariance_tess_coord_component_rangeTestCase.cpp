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

#define VkglTestCase_008177_1 "dEQP-GLES31.functional.tessellation.invariance.tes"
#define VkglTestCase_008177_2 "s_coord_component_range.triangles_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008177, VkglTestCase_008177_1, VkglTestCase_008177_2);

#define VkglTestCase_008178_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coor"
#define VkglTestCase_008178_2 "d_component_range.triangles_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008178, VkglTestCase_008178_1, VkglTestCase_008178_2);

#define VkglTestCase_008179_1 "dEQP-GLES31.functional.tessellation.invariance.tes"
#define VkglTestCase_008179_2 "s_coord_component_range.triangles_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008179, VkglTestCase_008179_1, VkglTestCase_008179_2);

#define VkglTestCase_008180_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
#define VkglTestCase_008180_2 "rd_component_range.triangles_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008180, VkglTestCase_008180_1, VkglTestCase_008180_2);

#define VkglTestCase_008181_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
#define VkglTestCase_008181_2 "rd_component_range.triangles_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008181, VkglTestCase_008181_1, VkglTestCase_008181_2);

#define VkglTestCase_008182_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
#define VkglTestCase_008182_2 "mponent_range.triangles_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008182, VkglTestCase_008182_1, VkglTestCase_008182_2);

#define VkglTestCase_008183_1 "dEQP-GLES31.functional.tessellation.invariance.tess_co"
#define VkglTestCase_008183_2 "ord_component_range.triangles_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008183, VkglTestCase_008183_1, VkglTestCase_008183_2);

#define VkglTestCase_008184_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
#define VkglTestCase_008184_2 "mponent_range.triangles_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008184, VkglTestCase_008184_1, VkglTestCase_008184_2);

#define VkglTestCase_008185_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
#define VkglTestCase_008185_2 "rd_component_range.triangles_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008185, VkglTestCase_008185_1, VkglTestCase_008185_2);

#define VkglTestCase_008186_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_com"
#define VkglTestCase_008186_2 "ponent_range.triangles_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008186, VkglTestCase_008186_1, VkglTestCase_008186_2);

#define VkglTestCase_008187_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
#define VkglTestCase_008187_2 "rd_component_range.triangles_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008187, VkglTestCase_008187_1, VkglTestCase_008187_2);

#define VkglTestCase_008188_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
#define VkglTestCase_008188_2 "mponent_range.triangles_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008188, VkglTestCase_008188_1, VkglTestCase_008188_2);

#define VkglTestCase_008189_1 "dEQP-GLES31.functional.tessellation.invariance.t"
#define VkglTestCase_008189_2 "ess_coord_component_range.quads_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008189, VkglTestCase_008189_1, VkglTestCase_008189_2);

#define VkglTestCase_008190_1 "dEQP-GLES31.functional.tessellation.invariance.tess_co"
#define VkglTestCase_008190_2 "ord_component_range.quads_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008190, VkglTestCase_008190_1, VkglTestCase_008190_2);

#define VkglTestCase_008191_1 "dEQP-GLES31.functional.tessellation.invariance.t"
#define VkglTestCase_008191_2 "ess_coord_component_range.quads_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008191, VkglTestCase_008191_1, VkglTestCase_008191_2);

#define VkglTestCase_008192_1 "dEQP-GLES31.functional.tessellation.invariance.tess_c"
#define VkglTestCase_008192_2 "oord_component_range.quads_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008192, VkglTestCase_008192_1, VkglTestCase_008192_2);

#define VkglTestCase_008193_1 "dEQP-GLES31.functional.tessellation.invariance.tess_c"
#define VkglTestCase_008193_2 "oord_component_range.quads_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008193, VkglTestCase_008193_1, VkglTestCase_008193_2);

#define VkglTestCase_008194_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_"
#define VkglTestCase_008194_2 "component_range.quads_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008194, VkglTestCase_008194_1, VkglTestCase_008194_2);

#define VkglTestCase_008195_1 "dEQP-GLES31.functional.tessellation.invariance.tess_"
#define VkglTestCase_008195_2 "coord_component_range.quads_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008195, VkglTestCase_008195_1, VkglTestCase_008195_2);

#define VkglTestCase_008196_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_"
#define VkglTestCase_008196_2 "component_range.quads_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008196, VkglTestCase_008196_1, VkglTestCase_008196_2);

#define VkglTestCase_008197_1 "dEQP-GLES31.functional.tessellation.invariance.tess_c"
#define VkglTestCase_008197_2 "oord_component_range.quads_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008197, VkglTestCase_008197_1, VkglTestCase_008197_2);

#define VkglTestCase_008198_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_c"
#define VkglTestCase_008198_2 "omponent_range.quads_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008198, VkglTestCase_008198_1, VkglTestCase_008198_2);

#define VkglTestCase_008199_1 "dEQP-GLES31.functional.tessellation.invariance.tess_c"
#define VkglTestCase_008199_2 "oord_component_range.quads_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008199, VkglTestCase_008199_1, VkglTestCase_008199_2);

#define VkglTestCase_008200_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_"
#define VkglTestCase_008200_2 "component_range.quads_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008200, VkglTestCase_008200_1, VkglTestCase_008200_2);

#define VkglTestCase_008201_1 "dEQP-GLES31.functional.tessellation.invariance.tes"
#define VkglTestCase_008201_2 "s_coord_component_range.isolines_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008201, VkglTestCase_008201_1, VkglTestCase_008201_2);

#define VkglTestCase_008202_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
#define VkglTestCase_008202_2 "rd_component_range.isolines_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008202, VkglTestCase_008202_1, VkglTestCase_008202_2);

#define VkglTestCase_008203_1 "dEQP-GLES31.functional.tessellation.invariance.te"
#define VkglTestCase_008203_2 "ss_coord_component_range.isolines_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008203, VkglTestCase_008203_1, VkglTestCase_008203_2);

#define VkglTestCase_008204_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
#define VkglTestCase_008204_2 "rd_component_range.isolines_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008204, VkglTestCase_008204_1, VkglTestCase_008204_2);

#define VkglTestCase_008205_1 "dEQP-GLES31.functional.tessellation.invariance.tess_co"
#define VkglTestCase_008205_2 "ord_component_range.isolines_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008205, VkglTestCase_008205_1, VkglTestCase_008205_2);

#define VkglTestCase_008206_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
#define VkglTestCase_008206_2 "mponent_range.isolines_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008206, VkglTestCase_008206_1, VkglTestCase_008206_2);

#define VkglTestCase_008207_1 "dEQP-GLES31.functional.tessellation.invariance.tess_co"
#define VkglTestCase_008207_2 "ord_component_range.isolines_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008207, VkglTestCase_008207_1, VkglTestCase_008207_2);

#define VkglTestCase_008208_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_c"
#define VkglTestCase_008208_2 "omponent_range.isolines_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008208, VkglTestCase_008208_1, VkglTestCase_008208_2);

#define VkglTestCase_008209_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
#define VkglTestCase_008209_2 "rd_component_range.isolines_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008209, VkglTestCase_008209_1, VkglTestCase_008209_2);

#define VkglTestCase_008210_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
#define VkglTestCase_008210_2 "mponent_range.isolines_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008210, VkglTestCase_008210_1, VkglTestCase_008210_2);

#define VkglTestCase_008211_1 "dEQP-GLES31.functional.tessellation.invariance.tess_co"
#define VkglTestCase_008211_2 "ord_component_range.isolines_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008211, VkglTestCase_008211_1, VkglTestCase_008211_2);

#define VkglTestCase_008212_1 "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
#define VkglTestCase_008212_2 "mponent_range.isolines_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008212, VkglTestCase_008212_1, VkglTestCase_008212_2);
