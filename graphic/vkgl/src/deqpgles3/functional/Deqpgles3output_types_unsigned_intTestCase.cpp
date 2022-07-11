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

#define VkglTestCase_033253_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033253_2 "e.output_types.unsigned_int.components2_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033253, VkglTestCase_033253_1, VkglTestCase_033253_2);

#define VkglTestCase_033254_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033254_2 ".output_types.unsigned_int.components2_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033254, VkglTestCase_033254_1, VkglTestCase_033254_2);

#define VkglTestCase_033255_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033255_2 "e.output_types.unsigned_int.components3_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033255, VkglTestCase_033255_1, VkglTestCase_033255_2);

#define VkglTestCase_033256_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033256_2 ".output_types.unsigned_int.components3_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033256, VkglTestCase_033256_1, VkglTestCase_033256_2);

#define VkglTestCase_033257_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033257_2 "e.output_types.unsigned_int.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033257, VkglTestCase_033257_1, VkglTestCase_033257_2);

#define VkglTestCase_033258_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033258_2 ".output_types.unsigned_int.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033258, VkglTestCase_033258_1, VkglTestCase_033258_2);

#define VkglTestCase_033259_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033259_2 "e.output_types.unsigned_int.components2_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033259, VkglTestCase_033259_1, VkglTestCase_033259_2);

#define VkglTestCase_033260_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033260_2 ".output_types.unsigned_int.components2_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033260, VkglTestCase_033260_1, VkglTestCase_033260_2);

#define VkglTestCase_033261_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033261_2 "e.output_types.unsigned_int.components3_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033261, VkglTestCase_033261_1, VkglTestCase_033261_2);

#define VkglTestCase_033262_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033262_2 ".output_types.unsigned_int.components3_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033262, VkglTestCase_033262_1, VkglTestCase_033262_2);

#define VkglTestCase_033263_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033263_2 "e.output_types.unsigned_int.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033263, VkglTestCase_033263_1, VkglTestCase_033263_2);

#define VkglTestCase_033264_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033264_2 ".output_types.unsigned_int.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033264, VkglTestCase_033264_1, VkglTestCase_033264_2);

#define VkglTestCase_033265_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033265_2 "e.output_types.unsigned_int.components2_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033265, VkglTestCase_033265_1, VkglTestCase_033265_2);

#define VkglTestCase_033266_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033266_2 ".output_types.unsigned_int.components2_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033266, VkglTestCase_033266_1, VkglTestCase_033266_2);

#define VkglTestCase_033267_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033267_2 "e.output_types.unsigned_int.components3_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033267, VkglTestCase_033267_1, VkglTestCase_033267_2);

#define VkglTestCase_033268_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033268_2 ".output_types.unsigned_int.components3_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033268, VkglTestCase_033268_1, VkglTestCase_033268_2);

#define VkglTestCase_033269_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033269_2 "e.output_types.unsigned_int.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033269, VkglTestCase_033269_1, VkglTestCase_033269_2);

#define VkglTestCase_033270_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033270_2 ".output_types.unsigned_int.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033270, VkglTestCase_033270_1, VkglTestCase_033270_2);

#define VkglTestCase_033271_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033271_2 "e.output_types.unsigned_int.components2_uvec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033271, VkglTestCase_033271_1, VkglTestCase_033271_2);

#define VkglTestCase_033272_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033272_2 ".output_types.unsigned_int.components2_uvec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033272, VkglTestCase_033272_1, VkglTestCase_033272_2);

#define VkglTestCase_033273_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033273_2 "e.output_types.unsigned_int.components3_uvec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033273, VkglTestCase_033273_1, VkglTestCase_033273_2);

#define VkglTestCase_033274_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033274_2 ".output_types.unsigned_int.components3_uvec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033274, VkglTestCase_033274_1, VkglTestCase_033274_2);

#define VkglTestCase_033275_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033275_2 "e.output_types.unsigned_int.components4_uvec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033275, VkglTestCase_033275_1, VkglTestCase_033275_2);

#define VkglTestCase_033276_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033276_2 ".output_types.unsigned_int.components4_uvec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033276, VkglTestCase_033276_1, VkglTestCase_033276_2);

#define VkglTestCase_033277_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033277_2 "e.output_types.unsigned_int.components2_uvec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033277, VkglTestCase_033277_1, VkglTestCase_033277_2);

#define VkglTestCase_033278_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033278_2 ".output_types.unsigned_int.components2_uvec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033278, VkglTestCase_033278_1, VkglTestCase_033278_2);

#define VkglTestCase_033279_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033279_2 "e.output_types.unsigned_int.components3_uvec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033279, VkglTestCase_033279_1, VkglTestCase_033279_2);

#define VkglTestCase_033280_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033280_2 ".output_types.unsigned_int.components3_uvec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033280, VkglTestCase_033280_1, VkglTestCase_033280_2);

#define VkglTestCase_033281_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033281_2 "e.output_types.unsigned_int.components4_uvec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033281, VkglTestCase_033281_1, VkglTestCase_033281_2);

#define VkglTestCase_033282_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033282_2 ".output_types.unsigned_int.components4_uvec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033282, VkglTestCase_033282_1, VkglTestCase_033282_2);

#define VkglTestCase_033283_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033283_2 "e.output_types.unsigned_int.components2_uvec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033283, VkglTestCase_033283_1, VkglTestCase_033283_2);

#define VkglTestCase_033284_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033284_2 ".output_types.unsigned_int.components2_uvec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033284, VkglTestCase_033284_1, VkglTestCase_033284_2);

#define VkglTestCase_033285_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033285_2 "e.output_types.unsigned_int.components3_uvec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033285, VkglTestCase_033285_1, VkglTestCase_033285_2);

#define VkglTestCase_033286_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033286_2 ".output_types.unsigned_int.components3_uvec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033286, VkglTestCase_033286_1, VkglTestCase_033286_2);

#define VkglTestCase_033287_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033287_2 "e.output_types.unsigned_int.components4_uvec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033287, VkglTestCase_033287_1, VkglTestCase_033287_2);

#define VkglTestCase_033288_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033288_2 ".output_types.unsigned_int.components4_uvec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033288, VkglTestCase_033288_1, VkglTestCase_033288_2);
