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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007992_1 "dEQP-GLES31.functional.tessellation.misc"
#define VkglTestCase_007992_2 "_draw.fill_cover_triangles_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007992, VkglTestCase_007992_1, VkglTestCase_007992_2);

#define VkglTestCase_007993_1 "dEQP-GLES31.functional.tessellation.misc_dra"
#define VkglTestCase_007993_2 "w.fill_cover_triangles_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007993, VkglTestCase_007993_1, VkglTestCase_007993_2);

#define VkglTestCase_007994_1 "dEQP-GLES31.functional.tessellation.misc_draw"
#define VkglTestCase_007994_2 ".fill_cover_triangles_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007994, VkglTestCase_007994_1, VkglTestCase_007994_2);

#define VkglTestCase_007995_1 "dEQP-GLES31.functional.tessellation.mi"
#define VkglTestCase_007995_2 "sc_draw.fill_cover_quads_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007995, VkglTestCase_007995_1, VkglTestCase_007995_2);

#define VkglTestCase_007996_1 "dEQP-GLES31.functional.tessellation.misc_d"
#define VkglTestCase_007996_2 "raw.fill_cover_quads_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007996, VkglTestCase_007996_1, VkglTestCase_007996_2);

#define VkglTestCase_007997_1 "dEQP-GLES31.functional.tessellation.misc_dr"
#define VkglTestCase_007997_2 "aw.fill_cover_quads_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007997, VkglTestCase_007997_1, VkglTestCase_007997_2);

#define VkglTestCase_007998_1 "dEQP-GLES31.functional.tessellation.misc_"
#define VkglTestCase_007998_2 "draw.fill_overlap_triangles_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007998, VkglTestCase_007998_1, VkglTestCase_007998_2);

#define VkglTestCase_007999_1 "dEQP-GLES31.functional.tessellation.misc_draw"
#define VkglTestCase_007999_2 ".fill_overlap_triangles_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007999, VkglTestCase_007999_1, VkglTestCase_007999_2);

#define VkglTestCase_008000_1 "dEQP-GLES31.functional.tessellation.misc_draw."
#define VkglTestCase_008000_2 "fill_overlap_triangles_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008000, VkglTestCase_008000_1, VkglTestCase_008000_2);

#define VkglTestCase_008001_1 "dEQP-GLES31.functional.tessellation.mis"
#define VkglTestCase_008001_2 "c_draw.fill_overlap_quads_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008001, VkglTestCase_008001_1, VkglTestCase_008001_2);

#define VkglTestCase_008002_1 "dEQP-GLES31.functional.tessellation.misc_dr"
#define VkglTestCase_008002_2 "aw.fill_overlap_quads_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008002, VkglTestCase_008002_1, VkglTestCase_008002_2);

#define VkglTestCase_008003_1 "dEQP-GLES31.functional.tessellation.misc_dra"
#define VkglTestCase_008003_2 "w.fill_overlap_quads_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008003, VkglTestCase_008003_1, VkglTestCase_008003_2);

#define VkglTestCase_008004_1 "dEQP-GLES31.functional.tessellatio"
#define VkglTestCase_008004_2 "n.misc_draw.isolines_equal_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008004, VkglTestCase_008004_1, VkglTestCase_008004_2);

#define VkglTestCase_008005_1 "dEQP-GLES31.functional.tessellation.mi"
#define VkglTestCase_008005_2 "sc_draw.isolines_fractional_odd_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008005, VkglTestCase_008005_1, VkglTestCase_008005_2);

#define VkglTestCase_008006_1 "dEQP-GLES31.functional.tessellation.mis"
#define VkglTestCase_008006_2 "c_draw.isolines_fractional_even_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008006, VkglTestCase_008006_1, VkglTestCase_008006_2);
