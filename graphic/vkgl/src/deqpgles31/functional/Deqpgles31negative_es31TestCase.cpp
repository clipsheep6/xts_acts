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

#define VkglTestCase_008321_1 "dEQP-GLES31.functional.tessellation.user_defin"
#define VkglTestCase_008321_2 "ed_io.negative.es31.per_patch_array_of_structs"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008321, VkglTestCase_008321_1, VkglTestCase_008321_2);

#define VkglTestCase_008322_1 "dEQP-GLES31.functional.tessellation.user_defined_i"
#define VkglTestCase_008322_2 "o.negative.es31.per_patch_structs_containing_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008322, VkglTestCase_008322_1, VkglTestCase_008322_2);

#define VkglTestCase_008323_1 "dEQP-GLES31.functional.tessellation.user_defined_io.negative."
#define VkglTestCase_008323_2 "es31.per_vertex_incorrect_control_explicit_output_array_size_2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008323, VkglTestCase_008323_1, VkglTestCase_008323_2);

#define VkglTestCase_008324_1 "dEQP-GLES31.functional.tessellation.user_defined_io.negative."
#define VkglTestCase_008324_2 "es31.per_vertex_incorrect_control_explicit_output_array_size_3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008324, VkglTestCase_008324_1, VkglTestCase_008324_2);

#define VkglTestCase_008325_1 "dEQP-GLES31.functional.tessellation.user_defined_io.negati"
#define VkglTestCase_008325_2 "ve.es31.per_vertex_incorrect_eval_explicit_input_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008325, VkglTestCase_008325_1, VkglTestCase_008325_2);

#define VkglTestCase_018244_1 "dEQP-GLES31.functional.uniform_location"
#define VkglTestCase_018244_2 ".negative.es31.duplicate_location_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018244, VkglTestCase_018244_1, VkglTestCase_018244_2);

#define VkglTestCase_018245_1 "dEQP-GLES31.functional.uniform_location."
#define VkglTestCase_018245_2 "negative.es31.duplicate_location_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018245, VkglTestCase_018245_1, VkglTestCase_018245_2);

#define VkglTestCase_018246_1 "dEQP-GLES31.functional.uniform_location.neg"
#define VkglTestCase_018246_2 "ative.es31.duplicate_location_unused_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018246, VkglTestCase_018246_1, VkglTestCase_018246_2);

#define VkglTestCase_018247_1 "dEQP-GLES31.functional.uniform_location.nega"
#define VkglTestCase_018247_2 "tive.es31.duplicate_location_unused_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018247, VkglTestCase_018247_1, VkglTestCase_018247_2);

#define VkglTestCase_018248_1 "dEQP-GLES31.functional.uniform_location"
#define VkglTestCase_018248_2 ".negative.es31.duplicate_location_split"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018248, VkglTestCase_018248_1, VkglTestCase_018248_2);

#define VkglTestCase_018249_1 "dEQP-GLES31.functional.uniform_locati"
#define VkglTestCase_018249_2 "on.negative.es31.array_overlap_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018249, VkglTestCase_018249_1, VkglTestCase_018249_2);

#define VkglTestCase_018250_1 "dEQP-GLES31.functional.uniform_locatio"
#define VkglTestCase_018250_2 "n.negative.es31.array_overlap_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018250, VkglTestCase_018250_1, VkglTestCase_018250_2);

#define VkglTestCase_018251_1 "dEQP-GLES31.functional.uniform_location."
#define VkglTestCase_018251_2 "negative.es31.array_overlap_unused_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018251, VkglTestCase_018251_1, VkglTestCase_018251_2);

#define VkglTestCase_018252_1 "dEQP-GLES31.functional.uniform_location.n"
#define VkglTestCase_018252_2 "egative.es31.array_overlap_unused_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018252, VkglTestCase_018252_1, VkglTestCase_018252_2);

#define VkglTestCase_018253_1 "dEQP-GLES31.functional.uniform_locat"
#define VkglTestCase_018253_2 "ion.negative.es31.array_overlap_split"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018253, VkglTestCase_018253_1, VkglTestCase_018253_2);

#define VkglTestCase_018254_1 "dEQP-GLES31.functional.uniform_locati"
#define VkglTestCase_018254_2 "on.negative.es31.struct_overlap_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018254, VkglTestCase_018254_1, VkglTestCase_018254_2);

#define VkglTestCase_018255_1 "dEQP-GLES31.functional.uniform_locatio"
#define VkglTestCase_018255_2 "n.negative.es31.struct_overlap_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018255, VkglTestCase_018255_1, VkglTestCase_018255_2);

#define VkglTestCase_018256_1 "dEQP-GLES31.functional.uniform_location.n"
#define VkglTestCase_018256_2 "egative.es31.struct_overlap_unused_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018256, VkglTestCase_018256_1, VkglTestCase_018256_2);

#define VkglTestCase_018257_1 "dEQP-GLES31.functional.uniform_location.ne"
#define VkglTestCase_018257_2 "gative.es31.struct_overlap_unused_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018257, VkglTestCase_018257_1, VkglTestCase_018257_2);

#define VkglTestCase_018258_1 "dEQP-GLES31.functional.uniform_locati"
#define VkglTestCase_018258_2 "on.negative.es31.struct_overlap_split"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018258, VkglTestCase_018258_1, VkglTestCase_018258_2);

#define VkglTestCase_018259_1 "dEQP-GLES31.functional.uniform_locatio"
#define VkglTestCase_018259_2 "n.negative.es31.complex_overlap_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018259, VkglTestCase_018259_1, VkglTestCase_018259_2);

#define VkglTestCase_018260_1 "dEQP-GLES31.functional.uniform_location"
#define VkglTestCase_018260_2 ".negative.es31.complex_overlap_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018260, VkglTestCase_018260_1, VkglTestCase_018260_2);

#define VkglTestCase_018261_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018261_2 "cation.negative.es31.atomic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018261, VkglTestCase_018261_1, VkglTestCase_018261_2);

#define VkglTestCase_018262_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018262_2 "ation.negative.es31.atomic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018262, VkglTestCase_018262_1, VkglTestCase_018262_2);
