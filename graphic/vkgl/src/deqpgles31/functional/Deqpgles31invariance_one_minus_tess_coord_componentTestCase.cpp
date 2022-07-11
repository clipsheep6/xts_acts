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

#define VkglTestCase_008213_1 "dEQP-GLES31.functional.tessellation.invariance.one_m"
#define VkglTestCase_008213_2 "inus_tess_coord_component.triangles_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008213, VkglTestCase_008213_1, VkglTestCase_008213_2);

#define VkglTestCase_008214_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_t"
#define VkglTestCase_008214_2 "ess_coord_component.triangles_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008214, VkglTestCase_008214_1, VkglTestCase_008214_2);

#define VkglTestCase_008215_1 "dEQP-GLES31.functional.tessellation.invariance.one_m"
#define VkglTestCase_008215_2 "inus_tess_coord_component.triangles_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008215, VkglTestCase_008215_1, VkglTestCase_008215_2);

#define VkglTestCase_008216_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_"
#define VkglTestCase_008216_2 "tess_coord_component.triangles_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008216, VkglTestCase_008216_1, VkglTestCase_008216_2);

#define VkglTestCase_008217_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_"
#define VkglTestCase_008217_2 "tess_coord_component.triangles_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008217, VkglTestCase_008217_1, VkglTestCase_008217_2);

#define VkglTestCase_008218_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tess_"
#define VkglTestCase_008218_2 "coord_component.triangles_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008218, VkglTestCase_008218_1, VkglTestCase_008218_2);

#define VkglTestCase_008219_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus"
#define VkglTestCase_008219_2 "_tess_coord_component.triangles_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008219, VkglTestCase_008219_1, VkglTestCase_008219_2);

#define VkglTestCase_008220_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tess_"
#define VkglTestCase_008220_2 "coord_component.triangles_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008220, VkglTestCase_008220_1, VkglTestCase_008220_2);

#define VkglTestCase_008221_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_"
#define VkglTestCase_008221_2 "tess_coord_component.triangles_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008221, VkglTestCase_008221_1, VkglTestCase_008221_2);

#define VkglTestCase_008222_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tess_c"
#define VkglTestCase_008222_2 "oord_component.triangles_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008222, VkglTestCase_008222_1, VkglTestCase_008222_2);

#define VkglTestCase_008223_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_"
#define VkglTestCase_008223_2 "tess_coord_component.triangles_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008223, VkglTestCase_008223_1, VkglTestCase_008223_2);

#define VkglTestCase_008224_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tess_"
#define VkglTestCase_008224_2 "coord_component.triangles_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008224, VkglTestCase_008224_1, VkglTestCase_008224_2);

#define VkglTestCase_008225_1 "dEQP-GLES31.functional.tessellation.invariance.one"
#define VkglTestCase_008225_2 "_minus_tess_coord_component.quads_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008225, VkglTestCase_008225_1, VkglTestCase_008225_2);

#define VkglTestCase_008226_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus"
#define VkglTestCase_008226_2 "_tess_coord_component.quads_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008226, VkglTestCase_008226_1, VkglTestCase_008226_2);

#define VkglTestCase_008227_1 "dEQP-GLES31.functional.tessellation.invariance.one"
#define VkglTestCase_008227_2 "_minus_tess_coord_component.quads_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008227, VkglTestCase_008227_1, VkglTestCase_008227_2);

#define VkglTestCase_008228_1 "dEQP-GLES31.functional.tessellation.invariance.one_minu"
#define VkglTestCase_008228_2 "s_tess_coord_component.quads_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008228, VkglTestCase_008228_1, VkglTestCase_008228_2);

#define VkglTestCase_008229_1 "dEQP-GLES31.functional.tessellation.invariance.one_minu"
#define VkglTestCase_008229_2 "s_tess_coord_component.quads_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008229, VkglTestCase_008229_1, VkglTestCase_008229_2);

#define VkglTestCase_008230_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tes"
#define VkglTestCase_008230_2 "s_coord_component.quads_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008230, VkglTestCase_008230_1, VkglTestCase_008230_2);

#define VkglTestCase_008231_1 "dEQP-GLES31.functional.tessellation.invariance.one_min"
#define VkglTestCase_008231_2 "us_tess_coord_component.quads_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008231, VkglTestCase_008231_1, VkglTestCase_008231_2);

#define VkglTestCase_008232_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tes"
#define VkglTestCase_008232_2 "s_coord_component.quads_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008232, VkglTestCase_008232_1, VkglTestCase_008232_2);

#define VkglTestCase_008233_1 "dEQP-GLES31.functional.tessellation.invariance.one_minu"
#define VkglTestCase_008233_2 "s_tess_coord_component.quads_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008233, VkglTestCase_008233_1, VkglTestCase_008233_2);

#define VkglTestCase_008234_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tess"
#define VkglTestCase_008234_2 "_coord_component.quads_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008234, VkglTestCase_008234_1, VkglTestCase_008234_2);

#define VkglTestCase_008235_1 "dEQP-GLES31.functional.tessellation.invariance.one_minu"
#define VkglTestCase_008235_2 "s_tess_coord_component.quads_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008235, VkglTestCase_008235_1, VkglTestCase_008235_2);

#define VkglTestCase_008236_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tes"
#define VkglTestCase_008236_2 "s_coord_component.quads_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008236, VkglTestCase_008236_1, VkglTestCase_008236_2);

#define VkglTestCase_008237_1 "dEQP-GLES31.functional.tessellation.invariance.one_m"
#define VkglTestCase_008237_2 "inus_tess_coord_component.isolines_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008237, VkglTestCase_008237_1, VkglTestCase_008237_2);

#define VkglTestCase_008238_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_"
#define VkglTestCase_008238_2 "tess_coord_component.isolines_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008238, VkglTestCase_008238_1, VkglTestCase_008238_2);

#define VkglTestCase_008239_1 "dEQP-GLES31.functional.tessellation.invariance.one_"
#define VkglTestCase_008239_2 "minus_tess_coord_component.isolines_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008239, VkglTestCase_008239_1, VkglTestCase_008239_2);

#define VkglTestCase_008240_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_"
#define VkglTestCase_008240_2 "tess_coord_component.isolines_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008240, VkglTestCase_008240_1, VkglTestCase_008240_2);

#define VkglTestCase_008241_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus"
#define VkglTestCase_008241_2 "_tess_coord_component.isolines_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008241, VkglTestCase_008241_1, VkglTestCase_008241_2);

#define VkglTestCase_008242_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tess_"
#define VkglTestCase_008242_2 "coord_component.isolines_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008242, VkglTestCase_008242_1, VkglTestCase_008242_2);

#define VkglTestCase_008243_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus"
#define VkglTestCase_008243_2 "_tess_coord_component.isolines_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008243, VkglTestCase_008243_1, VkglTestCase_008243_2);

#define VkglTestCase_008244_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tess"
#define VkglTestCase_008244_2 "_coord_component.isolines_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008244, VkglTestCase_008244_1, VkglTestCase_008244_2);

#define VkglTestCase_008245_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_"
#define VkglTestCase_008245_2 "tess_coord_component.isolines_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008245, VkglTestCase_008245_1, VkglTestCase_008245_2);

#define VkglTestCase_008246_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tess_"
#define VkglTestCase_008246_2 "coord_component.isolines_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008246, VkglTestCase_008246_1, VkglTestCase_008246_2);

#define VkglTestCase_008247_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus"
#define VkglTestCase_008247_2 "_tess_coord_component.isolines_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008247, VkglTestCase_008247_1, VkglTestCase_008247_2);

#define VkglTestCase_008248_1 "dEQP-GLES31.functional.tessellation.invariance.one_minus_tess_"
#define VkglTestCase_008248_2 "coord_component.isolines_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008248, VkglTestCase_008248_1, VkglTestCase_008248_2);
