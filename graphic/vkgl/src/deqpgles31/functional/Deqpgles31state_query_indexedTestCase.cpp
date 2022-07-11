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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015273_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015273_2 "dexed.sample_mask_value_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015273, VkglTestCase_015273_1, VkglTestCase_015273_2);

#define VkglTestCase_015274_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015274_2 "dexed.sample_mask_value_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015274, VkglTestCase_015274_1, VkglTestCase_015274_2);

#define VkglTestCase_015275_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015275_2 "exed.sample_mask_value_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015275, VkglTestCase_015275_1, VkglTestCase_015275_2);

#define VkglTestCase_015276_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015276_2 ".max_compute_work_group_count_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015276, VkglTestCase_015276_1, VkglTestCase_015276_2);

#define VkglTestCase_015277_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015277_2 ".max_compute_work_group_count_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015277, VkglTestCase_015277_1, VkglTestCase_015277_2);

#define VkglTestCase_015278_1 "dEQP-GLES31.functional.state_query.indexed."
#define VkglTestCase_015278_2 "max_compute_work_group_count_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015278, VkglTestCase_015278_1, VkglTestCase_015278_2);

#define VkglTestCase_015279_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015279_2 ".max_compute_work_group_size_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015279, VkglTestCase_015279_1, VkglTestCase_015279_2);

#define VkglTestCase_015280_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015280_2 ".max_compute_work_group_size_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015280, VkglTestCase_015280_1, VkglTestCase_015280_2);

#define VkglTestCase_015281_1 "dEQP-GLES31.functional.state_query.indexed."
#define VkglTestCase_015281_2 "max_compute_work_group_size_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015281, VkglTestCase_015281_1, VkglTestCase_015281_2);

#define VkglTestCase_015282_1 "dEQP-GLES31.functional.state_query.indexed."
#define VkglTestCase_015282_2 "atomic_counter_buffer_binding_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015282, VkglTestCase_015282_1, VkglTestCase_015282_2);

#define VkglTestCase_015283_1 "dEQP-GLES31.functional.state_query.indexed."
#define VkglTestCase_015283_2 "atomic_counter_buffer_binding_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015283, VkglTestCase_015283_1, VkglTestCase_015283_2);

#define VkglTestCase_015284_1 "dEQP-GLES31.functional.state_query.indexed.a"
#define VkglTestCase_015284_2 "tomic_counter_buffer_binding_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015284, VkglTestCase_015284_1, VkglTestCase_015284_2);

#define VkglTestCase_015285_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015285_2 ".atomic_counter_buffer_start_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015285, VkglTestCase_015285_1, VkglTestCase_015285_2);

#define VkglTestCase_015286_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015286_2 ".atomic_counter_buffer_start_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015286, VkglTestCase_015286_1, VkglTestCase_015286_2);

#define VkglTestCase_015287_1 "dEQP-GLES31.functional.state_query.indexed."
#define VkglTestCase_015287_2 "atomic_counter_buffer_start_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015287, VkglTestCase_015287_1, VkglTestCase_015287_2);

#define VkglTestCase_015288_1 "dEQP-GLES31.functional.state_query.indexe"
#define VkglTestCase_015288_2 "d.atomic_counter_buffer_size_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015288, VkglTestCase_015288_1, VkglTestCase_015288_2);

#define VkglTestCase_015289_1 "dEQP-GLES31.functional.state_query.indexe"
#define VkglTestCase_015289_2 "d.atomic_counter_buffer_size_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015289, VkglTestCase_015289_1, VkglTestCase_015289_2);

#define VkglTestCase_015290_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015290_2 ".atomic_counter_buffer_size_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015290, VkglTestCase_015290_1, VkglTestCase_015290_2);

#define VkglTestCase_015291_1 "dEQP-GLES31.functional.state_query.indexed."
#define VkglTestCase_015291_2 "shader_storage_buffer_binding_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015291, VkglTestCase_015291_1, VkglTestCase_015291_2);

#define VkglTestCase_015292_1 "dEQP-GLES31.functional.state_query.indexed."
#define VkglTestCase_015292_2 "shader_storage_buffer_binding_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015292, VkglTestCase_015292_1, VkglTestCase_015292_2);

#define VkglTestCase_015293_1 "dEQP-GLES31.functional.state_query.indexed.s"
#define VkglTestCase_015293_2 "hader_storage_buffer_binding_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015293, VkglTestCase_015293_1, VkglTestCase_015293_2);

#define VkglTestCase_015294_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015294_2 ".shader_storage_buffer_start_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015294, VkglTestCase_015294_1, VkglTestCase_015294_2);

#define VkglTestCase_015295_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015295_2 ".shader_storage_buffer_start_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015295, VkglTestCase_015295_1, VkglTestCase_015295_2);

#define VkglTestCase_015296_1 "dEQP-GLES31.functional.state_query.indexed."
#define VkglTestCase_015296_2 "shader_storage_buffer_start_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015296, VkglTestCase_015296_1, VkglTestCase_015296_2);

#define VkglTestCase_015297_1 "dEQP-GLES31.functional.state_query.indexe"
#define VkglTestCase_015297_2 "d.shader_storage_buffer_size_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015297, VkglTestCase_015297_1, VkglTestCase_015297_2);

#define VkglTestCase_015298_1 "dEQP-GLES31.functional.state_query.indexe"
#define VkglTestCase_015298_2 "d.shader_storage_buffer_size_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015298, VkglTestCase_015298_1, VkglTestCase_015298_2);

#define VkglTestCase_015299_1 "dEQP-GLES31.functional.state_query.indexed"
#define VkglTestCase_015299_2 ".shader_storage_buffer_size_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015299, VkglTestCase_015299_1, VkglTestCase_015299_2);

#define VkglTestCase_015300_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015300_2 "dexed.image_binding_name_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015300, VkglTestCase_015300_1, VkglTestCase_015300_2);

#define VkglTestCase_015301_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015301_2 "dexed.image_binding_name_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015301, VkglTestCase_015301_1, VkglTestCase_015301_2);

#define VkglTestCase_015302_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015302_2 "exed.image_binding_name_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015302, VkglTestCase_015302_1, VkglTestCase_015302_2);

#define VkglTestCase_015303_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015303_2 "exed.image_binding_level_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015303, VkglTestCase_015303_1, VkglTestCase_015303_2);

#define VkglTestCase_015304_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015304_2 "exed.image_binding_level_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015304, VkglTestCase_015304_1, VkglTestCase_015304_2);

#define VkglTestCase_015305_1 "dEQP-GLES31.functional.state_query.inde"
#define VkglTestCase_015305_2 "xed.image_binding_level_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015305, VkglTestCase_015305_1, VkglTestCase_015305_2);

#define VkglTestCase_015306_1 "dEQP-GLES31.functional.state_query.inde"
#define VkglTestCase_015306_2 "xed.image_binding_layered_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015306, VkglTestCase_015306_1, VkglTestCase_015306_2);

#define VkglTestCase_015307_1 "dEQP-GLES31.functional.state_query.inde"
#define VkglTestCase_015307_2 "xed.image_binding_layered_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015307, VkglTestCase_015307_1, VkglTestCase_015307_2);

#define VkglTestCase_015308_1 "dEQP-GLES31.functional.state_query.index"
#define VkglTestCase_015308_2 "ed.image_binding_layered_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015308, VkglTestCase_015308_1, VkglTestCase_015308_2);

#define VkglTestCase_015309_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015309_2 "exed.image_binding_layer_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015309, VkglTestCase_015309_1, VkglTestCase_015309_2);

#define VkglTestCase_015310_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015310_2 "exed.image_binding_layer_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015310, VkglTestCase_015310_1, VkglTestCase_015310_2);

#define VkglTestCase_015311_1 "dEQP-GLES31.functional.state_query.inde"
#define VkglTestCase_015311_2 "xed.image_binding_layer_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015311, VkglTestCase_015311_1, VkglTestCase_015311_2);

#define VkglTestCase_015312_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015312_2 "exed.image_binding_access_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015312, VkglTestCase_015312_1, VkglTestCase_015312_2);

#define VkglTestCase_015313_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015313_2 "exed.image_binding_access_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015313, VkglTestCase_015313_1, VkglTestCase_015313_2);

#define VkglTestCase_015314_1 "dEQP-GLES31.functional.state_query.inde"
#define VkglTestCase_015314_2 "xed.image_binding_access_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015314, VkglTestCase_015314_1, VkglTestCase_015314_2);

#define VkglTestCase_015315_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015315_2 "exed.image_binding_format_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015315, VkglTestCase_015315_1, VkglTestCase_015315_2);

#define VkglTestCase_015316_1 "dEQP-GLES31.functional.state_query.ind"
#define VkglTestCase_015316_2 "exed.image_binding_format_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015316, VkglTestCase_015316_1, VkglTestCase_015316_2);

#define VkglTestCase_015317_1 "dEQP-GLES31.functional.state_query.inde"
#define VkglTestCase_015317_2 "xed.image_binding_format_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015317, VkglTestCase_015317_1, VkglTestCase_015317_2);

#define VkglTestCase_015318_1 "dEQP-GLES31.functional.state_"
#define VkglTestCase_015318_2 "query.indexed.blend_isenabledi"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015318, VkglTestCase_015318_1, VkglTestCase_015318_2);

#define VkglTestCase_015319_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_015319_2 "y.indexed.color_mask_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015319, VkglTestCase_015319_1, VkglTestCase_015319_2);

#define VkglTestCase_015320_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_015320_2 "y.indexed.color_mask_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015320, VkglTestCase_015320_1, VkglTestCase_015320_2);

#define VkglTestCase_015321_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_015321_2 ".indexed.color_mask_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015321, VkglTestCase_015321_1, VkglTestCase_015321_2);

#define VkglTestCase_015322_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_015322_2 "y.indexed.blend_func_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015322, VkglTestCase_015322_1, VkglTestCase_015322_2);

#define VkglTestCase_015323_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_015323_2 "y.indexed.blend_func_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015323, VkglTestCase_015323_1, VkglTestCase_015323_2);

#define VkglTestCase_015324_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_015324_2 ".indexed.blend_func_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015324, VkglTestCase_015324_1, VkglTestCase_015324_2);

#define VkglTestCase_015325_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015325_2 "indexed.blend_equation_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015325, VkglTestCase_015325_1, VkglTestCase_015325_2);

#define VkglTestCase_015326_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015326_2 "indexed.blend_equation_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015326, VkglTestCase_015326_1, VkglTestCase_015326_2);

#define VkglTestCase_015327_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_015327_2 "ndexed.blend_equation_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015327, VkglTestCase_015327_1, VkglTestCase_015327_2);

#define VkglTestCase_015328_1 "dEQP-GLES31.functional.state_query.index"
#define VkglTestCase_015328_2 "ed.blend_equation_advanced_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015328, VkglTestCase_015328_1, VkglTestCase_015328_2);

#define VkglTestCase_015329_1 "dEQP-GLES31.functional.state_query.index"
#define VkglTestCase_015329_2 "ed.blend_equation_advanced_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015329, VkglTestCase_015329_1, VkglTestCase_015329_2);

#define VkglTestCase_015330_1 "dEQP-GLES31.functional.state_query.indexe"
#define VkglTestCase_015330_2 "d.blend_equation_advanced_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015330, VkglTestCase_015330_1, VkglTestCase_015330_2);
