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

#define VkglTestCase_008057_1 "dEQP-GLES31.functional.tessellation.invarian"
#define VkglTestCase_008057_2 "ce.primitive_set.triangles_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008057, VkglTestCase_008057_1, VkglTestCase_008057_2);

#define VkglTestCase_008058_1 "dEQP-GLES31.functional.tessellation.invariance.pr"
#define VkglTestCase_008058_2 "imitive_set.triangles_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008058, VkglTestCase_008058_1, VkglTestCase_008058_2);

#define VkglTestCase_008059_1 "dEQP-GLES31.functional.tessellation.invaria"
#define VkglTestCase_008059_2 "nce.primitive_set.triangles_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008059, VkglTestCase_008059_1, VkglTestCase_008059_2);

#define VkglTestCase_008060_1 "dEQP-GLES31.functional.tessellation.invariance.pr"
#define VkglTestCase_008060_2 "imitive_set.triangles_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008060, VkglTestCase_008060_1, VkglTestCase_008060_2);

#define VkglTestCase_008061_1 "dEQP-GLES31.functional.tessellation.invariance.p"
#define VkglTestCase_008061_2 "rimitive_set.triangles_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008061, VkglTestCase_008061_1, VkglTestCase_008061_2);

#define VkglTestCase_008062_1 "dEQP-GLES31.functional.tessellation.invariance.primiti"
#define VkglTestCase_008062_2 "ve_set.triangles_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008062, VkglTestCase_008062_1, VkglTestCase_008062_2);

#define VkglTestCase_008063_1 "dEQP-GLES31.functional.tessellation.invariance.p"
#define VkglTestCase_008063_2 "rimitive_set.triangles_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008063, VkglTestCase_008063_1, VkglTestCase_008063_2);

#define VkglTestCase_008064_1 "dEQP-GLES31.functional.tessellation.invariance.primit"
#define VkglTestCase_008064_2 "ive_set.triangles_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008064, VkglTestCase_008064_1, VkglTestCase_008064_2);

#define VkglTestCase_008065_1 "dEQP-GLES31.functional.tessellation.invariance.pr"
#define VkglTestCase_008065_2 "imitive_set.triangles_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008065, VkglTestCase_008065_1, VkglTestCase_008065_2);

#define VkglTestCase_008066_1 "dEQP-GLES31.functional.tessellation.invariance.primiti"
#define VkglTestCase_008066_2 "ve_set.triangles_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008066, VkglTestCase_008066_1, VkglTestCase_008066_2);

#define VkglTestCase_008067_1 "dEQP-GLES31.functional.tessellation.invariance.p"
#define VkglTestCase_008067_2 "rimitive_set.triangles_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008067, VkglTestCase_008067_1, VkglTestCase_008067_2);

#define VkglTestCase_008068_1 "dEQP-GLES31.functional.tessellation.invariance.primiti"
#define VkglTestCase_008068_2 "ve_set.triangles_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008068, VkglTestCase_008068_1, VkglTestCase_008068_2);

#define VkglTestCase_008069_1 "dEQP-GLES31.functional.tessellation.invari"
#define VkglTestCase_008069_2 "ance.primitive_set.quads_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008069, VkglTestCase_008069_1, VkglTestCase_008069_2);

#define VkglTestCase_008070_1 "dEQP-GLES31.functional.tessellation.invariance."
#define VkglTestCase_008070_2 "primitive_set.quads_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008070, VkglTestCase_008070_1, VkglTestCase_008070_2);

#define VkglTestCase_008071_1 "dEQP-GLES31.functional.tessellation.invar"
#define VkglTestCase_008071_2 "iance.primitive_set.quads_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008071, VkglTestCase_008071_1, VkglTestCase_008071_2);

#define VkglTestCase_008072_1 "dEQP-GLES31.functional.tessellation.invariance."
#define VkglTestCase_008072_2 "primitive_set.quads_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008072, VkglTestCase_008072_1, VkglTestCase_008072_2);

#define VkglTestCase_008073_1 "dEQP-GLES31.functional.tessellation.invariance"
#define VkglTestCase_008073_2 ".primitive_set.quads_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008073, VkglTestCase_008073_1, VkglTestCase_008073_2);

#define VkglTestCase_008074_1 "dEQP-GLES31.functional.tessellation.invariance.primi"
#define VkglTestCase_008074_2 "tive_set.quads_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008074, VkglTestCase_008074_1, VkglTestCase_008074_2);

#define VkglTestCase_008075_1 "dEQP-GLES31.functional.tessellation.invariance"
#define VkglTestCase_008075_2 ".primitive_set.quads_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008075, VkglTestCase_008075_1, VkglTestCase_008075_2);

#define VkglTestCase_008076_1 "dEQP-GLES31.functional.tessellation.invariance.prim"
#define VkglTestCase_008076_2 "itive_set.quads_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008076, VkglTestCase_008076_1, VkglTestCase_008076_2);

#define VkglTestCase_008077_1 "dEQP-GLES31.functional.tessellation.invariance."
#define VkglTestCase_008077_2 "primitive_set.quads_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008077, VkglTestCase_008077_1, VkglTestCase_008077_2);

#define VkglTestCase_008078_1 "dEQP-GLES31.functional.tessellation.invariance.primi"
#define VkglTestCase_008078_2 "tive_set.quads_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008078, VkglTestCase_008078_1, VkglTestCase_008078_2);

#define VkglTestCase_008079_1 "dEQP-GLES31.functional.tessellation.invariance"
#define VkglTestCase_008079_2 ".primitive_set.quads_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008079, VkglTestCase_008079_1, VkglTestCase_008079_2);

#define VkglTestCase_008080_1 "dEQP-GLES31.functional.tessellation.invariance.primi"
#define VkglTestCase_008080_2 "tive_set.quads_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008080, VkglTestCase_008080_1, VkglTestCase_008080_2);

#define VkglTestCase_008081_1 "dEQP-GLES31.functional.tessellation.invaria"
#define VkglTestCase_008081_2 "nce.primitive_set.isolines_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008081, VkglTestCase_008081_1, VkglTestCase_008081_2);

#define VkglTestCase_008082_1 "dEQP-GLES31.functional.tessellation.invariance.pr"
#define VkglTestCase_008082_2 "imitive_set.isolines_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008082, VkglTestCase_008082_1, VkglTestCase_008082_2);

#define VkglTestCase_008083_1 "dEQP-GLES31.functional.tessellation.invaria"
#define VkglTestCase_008083_2 "nce.primitive_set.isolines_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008083, VkglTestCase_008083_1, VkglTestCase_008083_2);

#define VkglTestCase_008084_1 "dEQP-GLES31.functional.tessellation.invariance.p"
#define VkglTestCase_008084_2 "rimitive_set.isolines_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008084, VkglTestCase_008084_1, VkglTestCase_008084_2);

#define VkglTestCase_008085_1 "dEQP-GLES31.functional.tessellation.invariance.p"
#define VkglTestCase_008085_2 "rimitive_set.isolines_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008085, VkglTestCase_008085_1, VkglTestCase_008085_2);

#define VkglTestCase_008086_1 "dEQP-GLES31.functional.tessellation.invariance.primit"
#define VkglTestCase_008086_2 "ive_set.isolines_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008086, VkglTestCase_008086_1, VkglTestCase_008086_2);

#define VkglTestCase_008087_1 "dEQP-GLES31.functional.tessellation.invariance."
#define VkglTestCase_008087_2 "primitive_set.isolines_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008087, VkglTestCase_008087_1, VkglTestCase_008087_2);

#define VkglTestCase_008088_1 "dEQP-GLES31.functional.tessellation.invariance.primit"
#define VkglTestCase_008088_2 "ive_set.isolines_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008088, VkglTestCase_008088_1, VkglTestCase_008088_2);

#define VkglTestCase_008089_1 "dEQP-GLES31.functional.tessellation.invariance.p"
#define VkglTestCase_008089_2 "rimitive_set.isolines_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008089, VkglTestCase_008089_1, VkglTestCase_008089_2);

#define VkglTestCase_008090_1 "dEQP-GLES31.functional.tessellation.invariance.primiti"
#define VkglTestCase_008090_2 "ve_set.isolines_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008090, VkglTestCase_008090_1, VkglTestCase_008090_2);

#define VkglTestCase_008091_1 "dEQP-GLES31.functional.tessellation.invariance.p"
#define VkglTestCase_008091_2 "rimitive_set.isolines_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008091, VkglTestCase_008091_1, VkglTestCase_008091_2);

#define VkglTestCase_008092_1 "dEQP-GLES31.functional.tessellation.invariance.primit"
#define VkglTestCase_008092_2 "ive_set.isolines_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008092, VkglTestCase_008092_1, VkglTestCase_008092_2);
