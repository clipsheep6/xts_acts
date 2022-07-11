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

#define VkglTestCase_008021_1 "dEQP-GLES31.functional.tessellation.prim"
#define VkglTestCase_008021_2 "itive_discard.triangles_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008021, VkglTestCase_008021_1, VkglTestCase_008021_2);

#define VkglTestCase_008022_1 "dEQP-GLES31.functional.tessellation.primitive_"
#define VkglTestCase_008022_2 "discard.triangles_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008022, VkglTestCase_008022_1, VkglTestCase_008022_2);

#define VkglTestCase_008023_1 "dEQP-GLES31.functional.tessellation.prim"
#define VkglTestCase_008023_2 "itive_discard.triangles_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008023, VkglTestCase_008023_1, VkglTestCase_008023_2);

#define VkglTestCase_008024_1 "dEQP-GLES31.functional.tessellation.primitive"
#define VkglTestCase_008024_2 "_discard.triangles_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008024, VkglTestCase_008024_1, VkglTestCase_008024_2);

#define VkglTestCase_008025_1 "dEQP-GLES31.functional.tessellation.primitive"
#define VkglTestCase_008025_2 "_discard.triangles_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008025, VkglTestCase_008025_1, VkglTestCase_008025_2);

#define VkglTestCase_008026_1 "dEQP-GLES31.functional.tessellation.primitive_disc"
#define VkglTestCase_008026_2 "ard.triangles_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008026, VkglTestCase_008026_1, VkglTestCase_008026_2);

#define VkglTestCase_008027_1 "dEQP-GLES31.functional.tessellation.primitiv"
#define VkglTestCase_008027_2 "e_discard.triangles_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008027, VkglTestCase_008027_1, VkglTestCase_008027_2);

#define VkglTestCase_008028_1 "dEQP-GLES31.functional.tessellation.primitive_disc"
#define VkglTestCase_008028_2 "ard.triangles_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008028, VkglTestCase_008028_1, VkglTestCase_008028_2);

#define VkglTestCase_008029_1 "dEQP-GLES31.functional.tessellation.primitive"
#define VkglTestCase_008029_2 "_discard.triangles_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008029, VkglTestCase_008029_1, VkglTestCase_008029_2);

#define VkglTestCase_008030_1 "dEQP-GLES31.functional.tessellation.primitive_disca"
#define VkglTestCase_008030_2 "rd.triangles_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008030, VkglTestCase_008030_1, VkglTestCase_008030_2);

#define VkglTestCase_008031_1 "dEQP-GLES31.functional.tessellation.primitive"
#define VkglTestCase_008031_2 "_discard.triangles_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008031, VkglTestCase_008031_1, VkglTestCase_008031_2);

#define VkglTestCase_008032_1 "dEQP-GLES31.functional.tessellation.primitive_disc"
#define VkglTestCase_008032_2 "ard.triangles_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008032, VkglTestCase_008032_1, VkglTestCase_008032_2);

#define VkglTestCase_008033_1 "dEQP-GLES31.functional.tessellation.pr"
#define VkglTestCase_008033_2 "imitive_discard.quads_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008033, VkglTestCase_008033_1, VkglTestCase_008033_2);

#define VkglTestCase_008034_1 "dEQP-GLES31.functional.tessellation.primitiv"
#define VkglTestCase_008034_2 "e_discard.quads_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008034, VkglTestCase_008034_1, VkglTestCase_008034_2);

#define VkglTestCase_008035_1 "dEQP-GLES31.functional.tessellation.pr"
#define VkglTestCase_008035_2 "imitive_discard.quads_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008035, VkglTestCase_008035_1, VkglTestCase_008035_2);

#define VkglTestCase_008036_1 "dEQP-GLES31.functional.tessellation.primiti"
#define VkglTestCase_008036_2 "ve_discard.quads_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008036, VkglTestCase_008036_1, VkglTestCase_008036_2);

#define VkglTestCase_008037_1 "dEQP-GLES31.functional.tessellation.primiti"
#define VkglTestCase_008037_2 "ve_discard.quads_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008037, VkglTestCase_008037_1, VkglTestCase_008037_2);

#define VkglTestCase_008038_1 "dEQP-GLES31.functional.tessellation.primitive_di"
#define VkglTestCase_008038_2 "scard.quads_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008038, VkglTestCase_008038_1, VkglTestCase_008038_2);

#define VkglTestCase_008039_1 "dEQP-GLES31.functional.tessellation.primit"
#define VkglTestCase_008039_2 "ive_discard.quads_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008039, VkglTestCase_008039_1, VkglTestCase_008039_2);

#define VkglTestCase_008040_1 "dEQP-GLES31.functional.tessellation.primitive_di"
#define VkglTestCase_008040_2 "scard.quads_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008040, VkglTestCase_008040_1, VkglTestCase_008040_2);

#define VkglTestCase_008041_1 "dEQP-GLES31.functional.tessellation.primiti"
#define VkglTestCase_008041_2 "ve_discard.quads_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008041, VkglTestCase_008041_1, VkglTestCase_008041_2);

#define VkglTestCase_008042_1 "dEQP-GLES31.functional.tessellation.primitive_dis"
#define VkglTestCase_008042_2 "card.quads_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008042, VkglTestCase_008042_1, VkglTestCase_008042_2);

#define VkglTestCase_008043_1 "dEQP-GLES31.functional.tessellation.primiti"
#define VkglTestCase_008043_2 "ve_discard.quads_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008043, VkglTestCase_008043_1, VkglTestCase_008043_2);

#define VkglTestCase_008044_1 "dEQP-GLES31.functional.tessellation.primitive_di"
#define VkglTestCase_008044_2 "scard.quads_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008044, VkglTestCase_008044_1, VkglTestCase_008044_2);

#define VkglTestCase_008045_1 "dEQP-GLES31.functional.tessellation.prim"
#define VkglTestCase_008045_2 "itive_discard.isolines_equal_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008045, VkglTestCase_008045_1, VkglTestCase_008045_2);

#define VkglTestCase_008046_1 "dEQP-GLES31.functional.tessellation.primitive"
#define VkglTestCase_008046_2 "_discard.isolines_equal_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008046, VkglTestCase_008046_1, VkglTestCase_008046_2);

#define VkglTestCase_008047_1 "dEQP-GLES31.functional.tessellation.pri"
#define VkglTestCase_008047_2 "mitive_discard.isolines_equal_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008047, VkglTestCase_008047_1, VkglTestCase_008047_2);

#define VkglTestCase_008048_1 "dEQP-GLES31.functional.tessellation.primitive"
#define VkglTestCase_008048_2 "_discard.isolines_equal_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008048, VkglTestCase_008048_1, VkglTestCase_008048_2);

#define VkglTestCase_008049_1 "dEQP-GLES31.functional.tessellation.primitiv"
#define VkglTestCase_008049_2 "e_discard.isolines_fractional_odd_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008049, VkglTestCase_008049_1, VkglTestCase_008049_2);

#define VkglTestCase_008050_1 "dEQP-GLES31.functional.tessellation.primitive_disc"
#define VkglTestCase_008050_2 "ard.isolines_fractional_odd_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008050, VkglTestCase_008050_1, VkglTestCase_008050_2);

#define VkglTestCase_008051_1 "dEQP-GLES31.functional.tessellation.primitiv"
#define VkglTestCase_008051_2 "e_discard.isolines_fractional_odd_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008051, VkglTestCase_008051_1, VkglTestCase_008051_2);

#define VkglTestCase_008052_1 "dEQP-GLES31.functional.tessellation.primitive_dis"
#define VkglTestCase_008052_2 "card.isolines_fractional_odd_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008052, VkglTestCase_008052_1, VkglTestCase_008052_2);

#define VkglTestCase_008053_1 "dEQP-GLES31.functional.tessellation.primitive"
#define VkglTestCase_008053_2 "_discard.isolines_fractional_even_spacing_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008053, VkglTestCase_008053_1, VkglTestCase_008053_2);

#define VkglTestCase_008054_1 "dEQP-GLES31.functional.tessellation.primitive_disc"
#define VkglTestCase_008054_2 "ard.isolines_fractional_even_spacing_ccw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008054, VkglTestCase_008054_1, VkglTestCase_008054_2);

#define VkglTestCase_008055_1 "dEQP-GLES31.functional.tessellation.primitiv"
#define VkglTestCase_008055_2 "e_discard.isolines_fractional_even_spacing_cw"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008055, VkglTestCase_008055_1, VkglTestCase_008055_2);

#define VkglTestCase_008056_1 "dEQP-GLES31.functional.tessellation.primitive_disc"
#define VkglTestCase_008056_2 "ard.isolines_fractional_even_spacing_cw_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008056, VkglTestCase_008056_1, VkglTestCase_008056_2);
