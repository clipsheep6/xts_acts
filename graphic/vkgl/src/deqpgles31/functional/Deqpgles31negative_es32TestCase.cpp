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

#define VkglTestCase_008326_1 "dEQP-GLES31.functional.tessellation.user_defin"
#define VkglTestCase_008326_2 "ed_io.negative.es32.per_patch_array_of_structs"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008326, VkglTestCase_008326_1, VkglTestCase_008326_2);

#define VkglTestCase_008327_1 "dEQP-GLES31.functional.tessellation.user_defined_i"
#define VkglTestCase_008327_2 "o.negative.es32.per_patch_structs_containing_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008327, VkglTestCase_008327_1, VkglTestCase_008327_2);

#define VkglTestCase_008328_1 "dEQP-GLES31.functional.tessellation.user_defined_io.negative."
#define VkglTestCase_008328_2 "es32.per_vertex_incorrect_control_explicit_output_array_size_1"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008328, VkglTestCase_008328_1, VkglTestCase_008328_2);

#define VkglTestCase_008329_1 "dEQP-GLES31.functional.tessellation.user_defined_io.negative."
#define VkglTestCase_008329_2 "es32.per_vertex_incorrect_control_explicit_output_array_size_2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008329, VkglTestCase_008329_1, VkglTestCase_008329_2);

#define VkglTestCase_008330_1 "dEQP-GLES31.functional.tessellation.user_defined_io.negative."
#define VkglTestCase_008330_2 "es32.per_vertex_incorrect_control_explicit_output_array_size_3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008330, VkglTestCase_008330_1, VkglTestCase_008330_2);

#define VkglTestCase_008331_1 "dEQP-GLES31.functional.tessellation.user_defined_io.negati"
#define VkglTestCase_008331_2 "ve.es32.per_vertex_incorrect_eval_explicit_input_array_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008331, VkglTestCase_008331_1, VkglTestCase_008331_2);

#define VkglTestCase_018263_1 "dEQP-GLES31.functional.uniform_location"
#define VkglTestCase_018263_2 ".negative.es32.duplicate_location_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018263, VkglTestCase_018263_1, VkglTestCase_018263_2);

#define VkglTestCase_018264_1 "dEQP-GLES31.functional.uniform_location."
#define VkglTestCase_018264_2 "negative.es32.duplicate_location_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018264, VkglTestCase_018264_1, VkglTestCase_018264_2);

#define VkglTestCase_018265_1 "dEQP-GLES31.functional.uniform_location.neg"
#define VkglTestCase_018265_2 "ative.es32.duplicate_location_unused_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018265, VkglTestCase_018265_1, VkglTestCase_018265_2);

#define VkglTestCase_018266_1 "dEQP-GLES31.functional.uniform_location.nega"
#define VkglTestCase_018266_2 "tive.es32.duplicate_location_unused_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018266, VkglTestCase_018266_1, VkglTestCase_018266_2);

#define VkglTestCase_018267_1 "dEQP-GLES31.functional.uniform_location"
#define VkglTestCase_018267_2 ".negative.es32.duplicate_location_split"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018267, VkglTestCase_018267_1, VkglTestCase_018267_2);

#define VkglTestCase_018268_1 "dEQP-GLES31.functional.uniform_locati"
#define VkglTestCase_018268_2 "on.negative.es32.array_overlap_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018268, VkglTestCase_018268_1, VkglTestCase_018268_2);

#define VkglTestCase_018269_1 "dEQP-GLES31.functional.uniform_locatio"
#define VkglTestCase_018269_2 "n.negative.es32.array_overlap_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018269, VkglTestCase_018269_1, VkglTestCase_018269_2);

#define VkglTestCase_018270_1 "dEQP-GLES31.functional.uniform_location."
#define VkglTestCase_018270_2 "negative.es32.array_overlap_unused_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018270, VkglTestCase_018270_1, VkglTestCase_018270_2);

#define VkglTestCase_018271_1 "dEQP-GLES31.functional.uniform_location.n"
#define VkglTestCase_018271_2 "egative.es32.array_overlap_unused_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018271, VkglTestCase_018271_1, VkglTestCase_018271_2);

#define VkglTestCase_018272_1 "dEQP-GLES31.functional.uniform_locat"
#define VkglTestCase_018272_2 "ion.negative.es32.array_overlap_split"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018272, VkglTestCase_018272_1, VkglTestCase_018272_2);

#define VkglTestCase_018273_1 "dEQP-GLES31.functional.uniform_locati"
#define VkglTestCase_018273_2 "on.negative.es32.struct_overlap_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018273, VkglTestCase_018273_1, VkglTestCase_018273_2);

#define VkglTestCase_018274_1 "dEQP-GLES31.functional.uniform_locatio"
#define VkglTestCase_018274_2 "n.negative.es32.struct_overlap_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018274, VkglTestCase_018274_1, VkglTestCase_018274_2);

#define VkglTestCase_018275_1 "dEQP-GLES31.functional.uniform_location.n"
#define VkglTestCase_018275_2 "egative.es32.struct_overlap_unused_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018275, VkglTestCase_018275_1, VkglTestCase_018275_2);

#define VkglTestCase_018276_1 "dEQP-GLES31.functional.uniform_location.ne"
#define VkglTestCase_018276_2 "gative.es32.struct_overlap_unused_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018276, VkglTestCase_018276_1, VkglTestCase_018276_2);

#define VkglTestCase_018277_1 "dEQP-GLES31.functional.uniform_locati"
#define VkglTestCase_018277_2 "on.negative.es32.struct_overlap_split"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018277, VkglTestCase_018277_1, VkglTestCase_018277_2);

#define VkglTestCase_018278_1 "dEQP-GLES31.functional.uniform_locatio"
#define VkglTestCase_018278_2 "n.negative.es32.complex_overlap_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018278, VkglTestCase_018278_1, VkglTestCase_018278_2);

#define VkglTestCase_018279_1 "dEQP-GLES31.functional.uniform_location"
#define VkglTestCase_018279_2 ".negative.es32.complex_overlap_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018279, VkglTestCase_018279_1, VkglTestCase_018279_2);

#define VkglTestCase_018280_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018280_2 "cation.negative.es32.atomic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018280, VkglTestCase_018280_1, VkglTestCase_018280_2);

#define VkglTestCase_018281_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018281_2 "ation.negative.es32.atomic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_018281, VkglTestCase_018281_1, VkglTestCase_018281_2);
