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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033289_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033289_2 "ribute.output_types.int.components2_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033289, VkglTestCase_033289_1, VkglTestCase_033289_2);

#define VkglTestCase_033290_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033290_2 "ibute.output_types.int.components2_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033290, VkglTestCase_033290_1, VkglTestCase_033290_2);

#define VkglTestCase_033291_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033291_2 "ribute.output_types.int.components3_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033291, VkglTestCase_033291_1, VkglTestCase_033291_2);

#define VkglTestCase_033292_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033292_2 "ibute.output_types.int.components3_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033292, VkglTestCase_033292_1, VkglTestCase_033292_2);

#define VkglTestCase_033293_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033293_2 "ribute.output_types.int.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033293, VkglTestCase_033293_1, VkglTestCase_033293_2);

#define VkglTestCase_033294_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033294_2 "ibute.output_types.int.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033294, VkglTestCase_033294_1, VkglTestCase_033294_2);

#define VkglTestCase_033295_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033295_2 "ribute.output_types.int.components2_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033295, VkglTestCase_033295_1, VkglTestCase_033295_2);

#define VkglTestCase_033296_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033296_2 "ibute.output_types.int.components2_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033296, VkglTestCase_033296_1, VkglTestCase_033296_2);

#define VkglTestCase_033297_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033297_2 "ribute.output_types.int.components3_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033297, VkglTestCase_033297_1, VkglTestCase_033297_2);

#define VkglTestCase_033298_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033298_2 "ibute.output_types.int.components3_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033298, VkglTestCase_033298_1, VkglTestCase_033298_2);

#define VkglTestCase_033299_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033299_2 "ribute.output_types.int.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033299, VkglTestCase_033299_1, VkglTestCase_033299_2);

#define VkglTestCase_033300_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033300_2 "ibute.output_types.int.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033300, VkglTestCase_033300_1, VkglTestCase_033300_2);

#define VkglTestCase_033301_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033301_2 "ribute.output_types.int.components2_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033301, VkglTestCase_033301_1, VkglTestCase_033301_2);

#define VkglTestCase_033302_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033302_2 "ibute.output_types.int.components2_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033302, VkglTestCase_033302_1, VkglTestCase_033302_2);

#define VkglTestCase_033303_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033303_2 "ribute.output_types.int.components3_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033303, VkglTestCase_033303_1, VkglTestCase_033303_2);

#define VkglTestCase_033304_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033304_2 "ibute.output_types.int.components3_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033304, VkglTestCase_033304_1, VkglTestCase_033304_2);

#define VkglTestCase_033305_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033305_2 "ribute.output_types.int.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033305, VkglTestCase_033305_1, VkglTestCase_033305_2);

#define VkglTestCase_033306_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033306_2 "ibute.output_types.int.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033306, VkglTestCase_033306_1, VkglTestCase_033306_2);

#define VkglTestCase_033307_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033307_2 "ibute.output_types.int.components2_ivec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033307, VkglTestCase_033307_1, VkglTestCase_033307_2);

#define VkglTestCase_033308_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033308_2 "bute.output_types.int.components2_ivec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033308, VkglTestCase_033308_1, VkglTestCase_033308_2);

#define VkglTestCase_033309_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033309_2 "ibute.output_types.int.components3_ivec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033309, VkglTestCase_033309_1, VkglTestCase_033309_2);

#define VkglTestCase_033310_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033310_2 "bute.output_types.int.components3_ivec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033310, VkglTestCase_033310_1, VkglTestCase_033310_2);

#define VkglTestCase_033311_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033311_2 "ibute.output_types.int.components4_ivec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033311, VkglTestCase_033311_1, VkglTestCase_033311_2);

#define VkglTestCase_033312_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033312_2 "bute.output_types.int.components4_ivec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033312, VkglTestCase_033312_1, VkglTestCase_033312_2);

#define VkglTestCase_033313_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033313_2 "ibute.output_types.int.components2_ivec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033313, VkglTestCase_033313_1, VkglTestCase_033313_2);

#define VkglTestCase_033314_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033314_2 "bute.output_types.int.components2_ivec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033314, VkglTestCase_033314_1, VkglTestCase_033314_2);

#define VkglTestCase_033315_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033315_2 "ibute.output_types.int.components3_ivec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033315, VkglTestCase_033315_1, VkglTestCase_033315_2);

#define VkglTestCase_033316_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033316_2 "bute.output_types.int.components3_ivec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033316, VkglTestCase_033316_1, VkglTestCase_033316_2);

#define VkglTestCase_033317_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033317_2 "ibute.output_types.int.components4_ivec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033317, VkglTestCase_033317_1, VkglTestCase_033317_2);

#define VkglTestCase_033318_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033318_2 "bute.output_types.int.components4_ivec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033318, VkglTestCase_033318_1, VkglTestCase_033318_2);

#define VkglTestCase_033319_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033319_2 "ibute.output_types.int.components2_ivec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033319, VkglTestCase_033319_1, VkglTestCase_033319_2);

#define VkglTestCase_033320_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033320_2 "bute.output_types.int.components2_ivec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033320, VkglTestCase_033320_1, VkglTestCase_033320_2);

#define VkglTestCase_033321_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033321_2 "ibute.output_types.int.components3_ivec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033321, VkglTestCase_033321_1, VkglTestCase_033321_2);

#define VkglTestCase_033322_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033322_2 "bute.output_types.int.components3_ivec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033322, VkglTestCase_033322_1, VkglTestCase_033322_2);

#define VkglTestCase_033323_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033323_2 "ibute.output_types.int.components4_ivec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033323, VkglTestCase_033323_1, VkglTestCase_033323_2);

#define VkglTestCase_033324_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033324_2 "bute.output_types.int.components4_ivec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033324, VkglTestCase_033324_1, VkglTestCase_033324_2);
