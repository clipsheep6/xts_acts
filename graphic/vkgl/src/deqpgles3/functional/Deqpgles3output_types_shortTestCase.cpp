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

#define VkglTestCase_033091_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033091_2 "ibute.output_types.short.components2_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033091, VkglTestCase_033091_1, VkglTestCase_033091_2);

#define VkglTestCase_033092_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033092_2 "bute.output_types.short.components2_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033092, VkglTestCase_033092_1, VkglTestCase_033092_2);

#define VkglTestCase_033093_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033093_2 "ibute.output_types.short.components3_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033093, VkglTestCase_033093_1, VkglTestCase_033093_2);

#define VkglTestCase_033094_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033094_2 "bute.output_types.short.components3_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033094, VkglTestCase_033094_1, VkglTestCase_033094_2);

#define VkglTestCase_033095_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033095_2 "ibute.output_types.short.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033095, VkglTestCase_033095_1, VkglTestCase_033095_2);

#define VkglTestCase_033096_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033096_2 "bute.output_types.short.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033096, VkglTestCase_033096_1, VkglTestCase_033096_2);

#define VkglTestCase_033097_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033097_2 "ibute.output_types.short.components2_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033097, VkglTestCase_033097_1, VkglTestCase_033097_2);

#define VkglTestCase_033098_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033098_2 "bute.output_types.short.components2_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033098, VkglTestCase_033098_1, VkglTestCase_033098_2);

#define VkglTestCase_033099_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033099_2 "ibute.output_types.short.components3_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033099, VkglTestCase_033099_1, VkglTestCase_033099_2);

#define VkglTestCase_033100_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033100_2 "bute.output_types.short.components3_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033100, VkglTestCase_033100_1, VkglTestCase_033100_2);

#define VkglTestCase_033101_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033101_2 "ibute.output_types.short.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033101, VkglTestCase_033101_1, VkglTestCase_033101_2);

#define VkglTestCase_033102_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033102_2 "bute.output_types.short.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033102, VkglTestCase_033102_1, VkglTestCase_033102_2);

#define VkglTestCase_033103_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033103_2 "ibute.output_types.short.components2_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033103, VkglTestCase_033103_1, VkglTestCase_033103_2);

#define VkglTestCase_033104_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033104_2 "bute.output_types.short.components2_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033104, VkglTestCase_033104_1, VkglTestCase_033104_2);

#define VkglTestCase_033105_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033105_2 "ibute.output_types.short.components3_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033105, VkglTestCase_033105_1, VkglTestCase_033105_2);

#define VkglTestCase_033106_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033106_2 "bute.output_types.short.components3_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033106, VkglTestCase_033106_1, VkglTestCase_033106_2);

#define VkglTestCase_033107_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033107_2 "ibute.output_types.short.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033107, VkglTestCase_033107_1, VkglTestCase_033107_2);

#define VkglTestCase_033108_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033108_2 "bute.output_types.short.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033108, VkglTestCase_033108_1, VkglTestCase_033108_2);

#define VkglTestCase_033109_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033109_2 "bute.output_types.short.components2_ivec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033109, VkglTestCase_033109_1, VkglTestCase_033109_2);

#define VkglTestCase_033110_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033110_2 "ute.output_types.short.components2_ivec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033110, VkglTestCase_033110_1, VkglTestCase_033110_2);

#define VkglTestCase_033111_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033111_2 "bute.output_types.short.components3_ivec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033111, VkglTestCase_033111_1, VkglTestCase_033111_2);

#define VkglTestCase_033112_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033112_2 "ute.output_types.short.components3_ivec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033112, VkglTestCase_033112_1, VkglTestCase_033112_2);

#define VkglTestCase_033113_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033113_2 "bute.output_types.short.components4_ivec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033113, VkglTestCase_033113_1, VkglTestCase_033113_2);

#define VkglTestCase_033114_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033114_2 "ute.output_types.short.components4_ivec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033114, VkglTestCase_033114_1, VkglTestCase_033114_2);

#define VkglTestCase_033115_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033115_2 "bute.output_types.short.components2_ivec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033115, VkglTestCase_033115_1, VkglTestCase_033115_2);

#define VkglTestCase_033116_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033116_2 "ute.output_types.short.components2_ivec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033116, VkglTestCase_033116_1, VkglTestCase_033116_2);

#define VkglTestCase_033117_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033117_2 "bute.output_types.short.components3_ivec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033117, VkglTestCase_033117_1, VkglTestCase_033117_2);

#define VkglTestCase_033118_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033118_2 "ute.output_types.short.components3_ivec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033118, VkglTestCase_033118_1, VkglTestCase_033118_2);

#define VkglTestCase_033119_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033119_2 "bute.output_types.short.components4_ivec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033119, VkglTestCase_033119_1, VkglTestCase_033119_2);

#define VkglTestCase_033120_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033120_2 "ute.output_types.short.components4_ivec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033120, VkglTestCase_033120_1, VkglTestCase_033120_2);

#define VkglTestCase_033121_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033121_2 "bute.output_types.short.components2_ivec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033121, VkglTestCase_033121_1, VkglTestCase_033121_2);

#define VkglTestCase_033122_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033122_2 "ute.output_types.short.components2_ivec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033122, VkglTestCase_033122_1, VkglTestCase_033122_2);

#define VkglTestCase_033123_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033123_2 "bute.output_types.short.components3_ivec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033123, VkglTestCase_033123_1, VkglTestCase_033123_2);

#define VkglTestCase_033124_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033124_2 "ute.output_types.short.components3_ivec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033124, VkglTestCase_033124_1, VkglTestCase_033124_2);

#define VkglTestCase_033125_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033125_2 "bute.output_types.short.components4_ivec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033125, VkglTestCase_033125_1, VkglTestCase_033125_2);

#define VkglTestCase_033126_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033126_2 "ute.output_types.short.components4_ivec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033126, VkglTestCase_033126_1, VkglTestCase_033126_2);
