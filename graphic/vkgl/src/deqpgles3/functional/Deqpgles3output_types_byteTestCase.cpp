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

#define VkglTestCase_033127_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033127_2 "ibute.output_types.byte.components2_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033127, VkglTestCase_033127_1, VkglTestCase_033127_2);

#define VkglTestCase_033128_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033128_2 "bute.output_types.byte.components2_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033128, VkglTestCase_033128_1, VkglTestCase_033128_2);

#define VkglTestCase_033129_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033129_2 "ibute.output_types.byte.components3_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033129, VkglTestCase_033129_1, VkglTestCase_033129_2);

#define VkglTestCase_033130_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033130_2 "bute.output_types.byte.components3_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033130, VkglTestCase_033130_1, VkglTestCase_033130_2);

#define VkglTestCase_033131_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033131_2 "ibute.output_types.byte.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033131, VkglTestCase_033131_1, VkglTestCase_033131_2);

#define VkglTestCase_033132_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033132_2 "bute.output_types.byte.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033132, VkglTestCase_033132_1, VkglTestCase_033132_2);

#define VkglTestCase_033133_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033133_2 "ibute.output_types.byte.components2_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033133, VkglTestCase_033133_1, VkglTestCase_033133_2);

#define VkglTestCase_033134_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033134_2 "bute.output_types.byte.components2_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033134, VkglTestCase_033134_1, VkglTestCase_033134_2);

#define VkglTestCase_033135_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033135_2 "ibute.output_types.byte.components3_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033135, VkglTestCase_033135_1, VkglTestCase_033135_2);

#define VkglTestCase_033136_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033136_2 "bute.output_types.byte.components3_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033136, VkglTestCase_033136_1, VkglTestCase_033136_2);

#define VkglTestCase_033137_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033137_2 "ibute.output_types.byte.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033137, VkglTestCase_033137_1, VkglTestCase_033137_2);

#define VkglTestCase_033138_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033138_2 "bute.output_types.byte.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033138, VkglTestCase_033138_1, VkglTestCase_033138_2);

#define VkglTestCase_033139_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033139_2 "ibute.output_types.byte.components2_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033139, VkglTestCase_033139_1, VkglTestCase_033139_2);

#define VkglTestCase_033140_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033140_2 "bute.output_types.byte.components2_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033140, VkglTestCase_033140_1, VkglTestCase_033140_2);

#define VkglTestCase_033141_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033141_2 "ibute.output_types.byte.components3_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033141, VkglTestCase_033141_1, VkglTestCase_033141_2);

#define VkglTestCase_033142_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033142_2 "bute.output_types.byte.components3_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033142, VkglTestCase_033142_1, VkglTestCase_033142_2);

#define VkglTestCase_033143_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033143_2 "ibute.output_types.byte.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033143, VkglTestCase_033143_1, VkglTestCase_033143_2);

#define VkglTestCase_033144_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033144_2 "bute.output_types.byte.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033144, VkglTestCase_033144_1, VkglTestCase_033144_2);

#define VkglTestCase_033145_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033145_2 "ibute.output_types.byte.components2_ivec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033145, VkglTestCase_033145_1, VkglTestCase_033145_2);

#define VkglTestCase_033146_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033146_2 "bute.output_types.byte.components2_ivec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033146, VkglTestCase_033146_1, VkglTestCase_033146_2);

#define VkglTestCase_033147_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033147_2 "ibute.output_types.byte.components3_ivec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033147, VkglTestCase_033147_1, VkglTestCase_033147_2);

#define VkglTestCase_033148_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033148_2 "bute.output_types.byte.components3_ivec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033148, VkglTestCase_033148_1, VkglTestCase_033148_2);

#define VkglTestCase_033149_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033149_2 "ibute.output_types.byte.components4_ivec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033149, VkglTestCase_033149_1, VkglTestCase_033149_2);

#define VkglTestCase_033150_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033150_2 "bute.output_types.byte.components4_ivec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033150, VkglTestCase_033150_1, VkglTestCase_033150_2);

#define VkglTestCase_033151_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033151_2 "ibute.output_types.byte.components2_ivec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033151, VkglTestCase_033151_1, VkglTestCase_033151_2);

#define VkglTestCase_033152_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033152_2 "bute.output_types.byte.components2_ivec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033152, VkglTestCase_033152_1, VkglTestCase_033152_2);

#define VkglTestCase_033153_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033153_2 "ibute.output_types.byte.components3_ivec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033153, VkglTestCase_033153_1, VkglTestCase_033153_2);

#define VkglTestCase_033154_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033154_2 "bute.output_types.byte.components3_ivec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033154, VkglTestCase_033154_1, VkglTestCase_033154_2);

#define VkglTestCase_033155_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033155_2 "ibute.output_types.byte.components4_ivec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033155, VkglTestCase_033155_1, VkglTestCase_033155_2);

#define VkglTestCase_033156_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033156_2 "bute.output_types.byte.components4_ivec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033156, VkglTestCase_033156_1, VkglTestCase_033156_2);

#define VkglTestCase_033157_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033157_2 "ibute.output_types.byte.components2_ivec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033157, VkglTestCase_033157_1, VkglTestCase_033157_2);

#define VkglTestCase_033158_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033158_2 "bute.output_types.byte.components2_ivec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033158, VkglTestCase_033158_1, VkglTestCase_033158_2);

#define VkglTestCase_033159_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033159_2 "ibute.output_types.byte.components3_ivec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033159, VkglTestCase_033159_1, VkglTestCase_033159_2);

#define VkglTestCase_033160_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033160_2 "bute.output_types.byte.components3_ivec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033160, VkglTestCase_033160_1, VkglTestCase_033160_2);

#define VkglTestCase_033161_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033161_2 "ibute.output_types.byte.components4_ivec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033161, VkglTestCase_033161_1, VkglTestCase_033161_2);

#define VkglTestCase_033162_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033162_2 "bute.output_types.byte.components4_ivec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033162, VkglTestCase_033162_1, VkglTestCase_033162_2);
