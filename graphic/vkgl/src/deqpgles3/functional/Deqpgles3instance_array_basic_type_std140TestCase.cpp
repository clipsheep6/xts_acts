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
#include "../ActsDeqpgles30036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035699_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035699_2 "array_basic_type.std140.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035699, VkglTestCase_035699_1, VkglTestCase_035699_2);

#define VkglTestCase_035700_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035700_2 "rray_basic_type.std140.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035700, VkglTestCase_035700_1, VkglTestCase_035700_2);

#define VkglTestCase_035701_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035701_2 "_array_basic_type.std140.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035701, VkglTestCase_035701_1, VkglTestCase_035701_2);

#define VkglTestCase_035702_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035702_2 "array_basic_type.std140.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035702, VkglTestCase_035702_1, VkglTestCase_035702_2);

#define VkglTestCase_035703_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035703_2 "rray_basic_type.std140.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035703, VkglTestCase_035703_1, VkglTestCase_035703_2);

#define VkglTestCase_035704_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035704_2 "_array_basic_type.std140.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035704, VkglTestCase_035704_1, VkglTestCase_035704_2);

#define VkglTestCase_035705_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035705_2 "array_basic_type.std140.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035705, VkglTestCase_035705_1, VkglTestCase_035705_2);

#define VkglTestCase_035706_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035706_2 "rray_basic_type.std140.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035706, VkglTestCase_035706_1, VkglTestCase_035706_2);

#define VkglTestCase_035707_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035707_2 "_array_basic_type.std140.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035707, VkglTestCase_035707_1, VkglTestCase_035707_2);

#define VkglTestCase_035708_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035708_2 "array_basic_type.std140.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035708, VkglTestCase_035708_1, VkglTestCase_035708_2);

#define VkglTestCase_035709_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035709_2 "rray_basic_type.std140.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035709, VkglTestCase_035709_1, VkglTestCase_035709_2);

#define VkglTestCase_035710_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035710_2 "_array_basic_type.std140.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035710, VkglTestCase_035710_1, VkglTestCase_035710_2);

#define VkglTestCase_035711_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035711_2 "_array_basic_type.std140.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035711, VkglTestCase_035711_1, VkglTestCase_035711_2);

#define VkglTestCase_035712_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035712_2 "array_basic_type.std140.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035712, VkglTestCase_035712_1, VkglTestCase_035712_2);

#define VkglTestCase_035713_1 "dEQP-GLES3.functional.ubo.instanc"
#define VkglTestCase_035713_2 "e_array_basic_type.std140.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035713, VkglTestCase_035713_1, VkglTestCase_035713_2);

#define VkglTestCase_035714_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035714_2 "array_basic_type.std140.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035714, VkglTestCase_035714_1, VkglTestCase_035714_2);

#define VkglTestCase_035715_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035715_2 "rray_basic_type.std140.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035715, VkglTestCase_035715_1, VkglTestCase_035715_2);

#define VkglTestCase_035716_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035716_2 "_array_basic_type.std140.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035716, VkglTestCase_035716_1, VkglTestCase_035716_2);

#define VkglTestCase_035717_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035717_2 "array_basic_type.std140.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035717, VkglTestCase_035717_1, VkglTestCase_035717_2);

#define VkglTestCase_035718_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035718_2 "rray_basic_type.std140.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035718, VkglTestCase_035718_1, VkglTestCase_035718_2);

#define VkglTestCase_035719_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035719_2 "_array_basic_type.std140.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035719, VkglTestCase_035719_1, VkglTestCase_035719_2);

#define VkglTestCase_035720_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035720_2 "array_basic_type.std140.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035720, VkglTestCase_035720_1, VkglTestCase_035720_2);

#define VkglTestCase_035721_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035721_2 "rray_basic_type.std140.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035721, VkglTestCase_035721_1, VkglTestCase_035721_2);

#define VkglTestCase_035722_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035722_2 "_array_basic_type.std140.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035722, VkglTestCase_035722_1, VkglTestCase_035722_2);

#define VkglTestCase_035723_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035723_2 "array_basic_type.std140.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035723, VkglTestCase_035723_1, VkglTestCase_035723_2);

#define VkglTestCase_035724_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035724_2 "rray_basic_type.std140.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035724, VkglTestCase_035724_1, VkglTestCase_035724_2);

#define VkglTestCase_035725_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035725_2 "_array_basic_type.std140.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035725, VkglTestCase_035725_1, VkglTestCase_035725_2);

#define VkglTestCase_035726_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035726_2 "array_basic_type.std140.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035726, VkglTestCase_035726_1, VkglTestCase_035726_2);

#define VkglTestCase_035727_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035727_2 "rray_basic_type.std140.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035727, VkglTestCase_035727_1, VkglTestCase_035727_2);

#define VkglTestCase_035728_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035728_2 "_array_basic_type.std140.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035728, VkglTestCase_035728_1, VkglTestCase_035728_2);

#define VkglTestCase_035729_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035729_2 "array_basic_type.std140.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035729, VkglTestCase_035729_1, VkglTestCase_035729_2);

#define VkglTestCase_035730_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035730_2 "rray_basic_type.std140.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035730, VkglTestCase_035730_1, VkglTestCase_035730_2);

#define VkglTestCase_035731_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035731_2 "_array_basic_type.std140.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035731, VkglTestCase_035731_1, VkglTestCase_035731_2);

#define VkglTestCase_035732_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035732_2 "array_basic_type.std140.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035732, VkglTestCase_035732_1, VkglTestCase_035732_2);

#define VkglTestCase_035733_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035733_2 "rray_basic_type.std140.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035733, VkglTestCase_035733_1, VkglTestCase_035733_2);

#define VkglTestCase_035734_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035734_2 "_array_basic_type.std140.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035734, VkglTestCase_035734_1, VkglTestCase_035734_2);

#define VkglTestCase_035735_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035735_2 "array_basic_type.std140.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035735, VkglTestCase_035735_1, VkglTestCase_035735_2);

#define VkglTestCase_035736_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035736_2 "rray_basic_type.std140.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035736, VkglTestCase_035736_1, VkglTestCase_035736_2);

#define VkglTestCase_035737_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035737_2 "_array_basic_type.std140.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035737, VkglTestCase_035737_1, VkglTestCase_035737_2);

#define VkglTestCase_035738_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035738_2 "array_basic_type.std140.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035738, VkglTestCase_035738_1, VkglTestCase_035738_2);

#define VkglTestCase_035739_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035739_2 "rray_basic_type.std140.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035739, VkglTestCase_035739_1, VkglTestCase_035739_2);

#define VkglTestCase_035740_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035740_2 "_array_basic_type.std140.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035740, VkglTestCase_035740_1, VkglTestCase_035740_2);

#define VkglTestCase_035741_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035741_2 "array_basic_type.std140.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035741, VkglTestCase_035741_1, VkglTestCase_035741_2);

#define VkglTestCase_035742_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035742_2 "rray_basic_type.std140.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035742, VkglTestCase_035742_1, VkglTestCase_035742_2);

#define VkglTestCase_035743_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035743_2 "_array_basic_type.std140.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035743, VkglTestCase_035743_1, VkglTestCase_035743_2);

#define VkglTestCase_035744_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035744_2 "array_basic_type.std140.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035744, VkglTestCase_035744_1, VkglTestCase_035744_2);

#define VkglTestCase_035745_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035745_2 "rray_basic_type.std140.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035745, VkglTestCase_035745_1, VkglTestCase_035745_2);

#define VkglTestCase_035746_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035746_2 "_array_basic_type.std140.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035746, VkglTestCase_035746_1, VkglTestCase_035746_2);

#define VkglTestCase_035747_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035747_2 "array_basic_type.std140.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035747, VkglTestCase_035747_1, VkglTestCase_035747_2);

#define VkglTestCase_035748_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035748_2 "rray_basic_type.std140.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035748, VkglTestCase_035748_1, VkglTestCase_035748_2);

#define VkglTestCase_035749_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035749_2 "_array_basic_type.std140.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035749, VkglTestCase_035749_1, VkglTestCase_035749_2);

#define VkglTestCase_035750_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035750_2 "_basic_type.std140.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035750, VkglTestCase_035750_1, VkglTestCase_035750_2);

#define VkglTestCase_035751_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035751_2 "basic_type.std140.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035751, VkglTestCase_035751_1, VkglTestCase_035751_2);

#define VkglTestCase_035752_1 "dEQP-GLES3.functional.ubo.instance_arra"
#define VkglTestCase_035752_2 "y_basic_type.std140.row_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035752, VkglTestCase_035752_1, VkglTestCase_035752_2);

#define VkglTestCase_035753_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035753_2 "basic_type.std140.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035753, VkglTestCase_035753_1, VkglTestCase_035753_2);

#define VkglTestCase_035754_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035754_2 "asic_type.std140.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035754, VkglTestCase_035754_1, VkglTestCase_035754_2);

#define VkglTestCase_035755_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035755_2 "_basic_type.std140.column_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035755, VkglTestCase_035755_1, VkglTestCase_035755_2);

#define VkglTestCase_035756_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035756_2 "array_basic_type.std140.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035756, VkglTestCase_035756_1, VkglTestCase_035756_2);

#define VkglTestCase_035757_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035757_2 "rray_basic_type.std140.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035757, VkglTestCase_035757_1, VkglTestCase_035757_2);

#define VkglTestCase_035758_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035758_2 "_array_basic_type.std140.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035758, VkglTestCase_035758_1, VkglTestCase_035758_2);

#define VkglTestCase_035759_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035759_2 "_basic_type.std140.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035759, VkglTestCase_035759_1, VkglTestCase_035759_2);

#define VkglTestCase_035760_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035760_2 "basic_type.std140.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035760, VkglTestCase_035760_1, VkglTestCase_035760_2);

#define VkglTestCase_035761_1 "dEQP-GLES3.functional.ubo.instance_arra"
#define VkglTestCase_035761_2 "y_basic_type.std140.row_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035761, VkglTestCase_035761_1, VkglTestCase_035761_2);

#define VkglTestCase_035762_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035762_2 "basic_type.std140.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035762, VkglTestCase_035762_1, VkglTestCase_035762_2);

#define VkglTestCase_035763_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035763_2 "asic_type.std140.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035763, VkglTestCase_035763_1, VkglTestCase_035763_2);

#define VkglTestCase_035764_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035764_2 "_basic_type.std140.column_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035764, VkglTestCase_035764_1, VkglTestCase_035764_2);

#define VkglTestCase_035765_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035765_2 "array_basic_type.std140.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035765, VkglTestCase_035765_1, VkglTestCase_035765_2);

#define VkglTestCase_035766_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035766_2 "rray_basic_type.std140.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035766, VkglTestCase_035766_1, VkglTestCase_035766_2);

#define VkglTestCase_035767_1 "dEQP-GLES3.functional.ubo.instance"
#define VkglTestCase_035767_2 "_array_basic_type.std140.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035767, VkglTestCase_035767_1, VkglTestCase_035767_2);

#define VkglTestCase_035768_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035768_2 "_basic_type.std140.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035768, VkglTestCase_035768_1, VkglTestCase_035768_2);

#define VkglTestCase_035769_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035769_2 "basic_type.std140.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035769, VkglTestCase_035769_1, VkglTestCase_035769_2);

#define VkglTestCase_035770_1 "dEQP-GLES3.functional.ubo.instance_arra"
#define VkglTestCase_035770_2 "y_basic_type.std140.row_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035770, VkglTestCase_035770_1, VkglTestCase_035770_2);

#define VkglTestCase_035771_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035771_2 "basic_type.std140.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035771, VkglTestCase_035771_1, VkglTestCase_035771_2);

#define VkglTestCase_035772_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035772_2 "asic_type.std140.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035772, VkglTestCase_035772_1, VkglTestCase_035772_2);

#define VkglTestCase_035773_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035773_2 "_basic_type.std140.column_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035773, VkglTestCase_035773_1, VkglTestCase_035773_2);

#define VkglTestCase_035774_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035774_2 "rray_basic_type.std140.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035774, VkglTestCase_035774_1, VkglTestCase_035774_2);

#define VkglTestCase_035775_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035775_2 "ray_basic_type.std140.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035775, VkglTestCase_035775_1, VkglTestCase_035775_2);

#define VkglTestCase_035776_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035776_2 "array_basic_type.std140.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035776, VkglTestCase_035776_1, VkglTestCase_035776_2);

#define VkglTestCase_035777_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035777_2 "basic_type.std140.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035777, VkglTestCase_035777_1, VkglTestCase_035777_2);

#define VkglTestCase_035778_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035778_2 "asic_type.std140.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035778, VkglTestCase_035778_1, VkglTestCase_035778_2);

#define VkglTestCase_035779_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035779_2 "_basic_type.std140.row_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035779, VkglTestCase_035779_1, VkglTestCase_035779_2);

#define VkglTestCase_035780_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035780_2 "asic_type.std140.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035780, VkglTestCase_035780_1, VkglTestCase_035780_2);

#define VkglTestCase_035781_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035781_2 "sic_type.std140.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035781, VkglTestCase_035781_1, VkglTestCase_035781_2);

#define VkglTestCase_035782_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035782_2 "basic_type.std140.column_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035782, VkglTestCase_035782_1, VkglTestCase_035782_2);

#define VkglTestCase_035783_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035783_2 "rray_basic_type.std140.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035783, VkglTestCase_035783_1, VkglTestCase_035783_2);

#define VkglTestCase_035784_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035784_2 "ray_basic_type.std140.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035784, VkglTestCase_035784_1, VkglTestCase_035784_2);

#define VkglTestCase_035785_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035785_2 "array_basic_type.std140.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035785, VkglTestCase_035785_1, VkglTestCase_035785_2);

#define VkglTestCase_035786_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035786_2 "basic_type.std140.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035786, VkglTestCase_035786_1, VkglTestCase_035786_2);

#define VkglTestCase_035787_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035787_2 "asic_type.std140.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035787, VkglTestCase_035787_1, VkglTestCase_035787_2);

#define VkglTestCase_035788_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035788_2 "_basic_type.std140.row_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035788, VkglTestCase_035788_1, VkglTestCase_035788_2);

#define VkglTestCase_035789_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035789_2 "asic_type.std140.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035789, VkglTestCase_035789_1, VkglTestCase_035789_2);

#define VkglTestCase_035790_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035790_2 "sic_type.std140.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035790, VkglTestCase_035790_1, VkglTestCase_035790_2);

#define VkglTestCase_035791_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035791_2 "basic_type.std140.column_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035791, VkglTestCase_035791_1, VkglTestCase_035791_2);

#define VkglTestCase_035792_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035792_2 "rray_basic_type.std140.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035792, VkglTestCase_035792_1, VkglTestCase_035792_2);

#define VkglTestCase_035793_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035793_2 "ray_basic_type.std140.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035793, VkglTestCase_035793_1, VkglTestCase_035793_2);

#define VkglTestCase_035794_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035794_2 "array_basic_type.std140.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035794, VkglTestCase_035794_1, VkglTestCase_035794_2);

#define VkglTestCase_035795_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035795_2 "basic_type.std140.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035795, VkglTestCase_035795_1, VkglTestCase_035795_2);

#define VkglTestCase_035796_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035796_2 "asic_type.std140.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035796, VkglTestCase_035796_1, VkglTestCase_035796_2);

#define VkglTestCase_035797_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035797_2 "_basic_type.std140.row_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035797, VkglTestCase_035797_1, VkglTestCase_035797_2);

#define VkglTestCase_035798_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035798_2 "asic_type.std140.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035798, VkglTestCase_035798_1, VkglTestCase_035798_2);

#define VkglTestCase_035799_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035799_2 "sic_type.std140.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035799, VkglTestCase_035799_1, VkglTestCase_035799_2);

#define VkglTestCase_035800_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035800_2 "basic_type.std140.column_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035800, VkglTestCase_035800_1, VkglTestCase_035800_2);

#define VkglTestCase_035801_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035801_2 "rray_basic_type.std140.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035801, VkglTestCase_035801_1, VkglTestCase_035801_2);

#define VkglTestCase_035802_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035802_2 "ray_basic_type.std140.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035802, VkglTestCase_035802_1, VkglTestCase_035802_2);

#define VkglTestCase_035803_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035803_2 "array_basic_type.std140.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035803, VkglTestCase_035803_1, VkglTestCase_035803_2);

#define VkglTestCase_035804_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035804_2 "basic_type.std140.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035804, VkglTestCase_035804_1, VkglTestCase_035804_2);

#define VkglTestCase_035805_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035805_2 "asic_type.std140.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035805, VkglTestCase_035805_1, VkglTestCase_035805_2);

#define VkglTestCase_035806_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035806_2 "_basic_type.std140.row_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035806, VkglTestCase_035806_1, VkglTestCase_035806_2);

#define VkglTestCase_035807_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035807_2 "asic_type.std140.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035807, VkglTestCase_035807_1, VkglTestCase_035807_2);

#define VkglTestCase_035808_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035808_2 "sic_type.std140.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035808, VkglTestCase_035808_1, VkglTestCase_035808_2);

#define VkglTestCase_035809_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035809_2 "basic_type.std140.column_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035809, VkglTestCase_035809_1, VkglTestCase_035809_2);

#define VkglTestCase_035810_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035810_2 "rray_basic_type.std140.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035810, VkglTestCase_035810_1, VkglTestCase_035810_2);

#define VkglTestCase_035811_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035811_2 "ray_basic_type.std140.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035811, VkglTestCase_035811_1, VkglTestCase_035811_2);

#define VkglTestCase_035812_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035812_2 "array_basic_type.std140.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035812, VkglTestCase_035812_1, VkglTestCase_035812_2);

#define VkglTestCase_035813_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035813_2 "basic_type.std140.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035813, VkglTestCase_035813_1, VkglTestCase_035813_2);

#define VkglTestCase_035814_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035814_2 "asic_type.std140.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035814, VkglTestCase_035814_1, VkglTestCase_035814_2);

#define VkglTestCase_035815_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035815_2 "_basic_type.std140.row_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035815, VkglTestCase_035815_1, VkglTestCase_035815_2);

#define VkglTestCase_035816_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035816_2 "asic_type.std140.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035816, VkglTestCase_035816_1, VkglTestCase_035816_2);

#define VkglTestCase_035817_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035817_2 "sic_type.std140.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035817, VkglTestCase_035817_1, VkglTestCase_035817_2);

#define VkglTestCase_035818_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035818_2 "basic_type.std140.column_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035818, VkglTestCase_035818_1, VkglTestCase_035818_2);

#define VkglTestCase_035819_1 "dEQP-GLES3.functional.ubo.instance_a"
#define VkglTestCase_035819_2 "rray_basic_type.std140.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035819, VkglTestCase_035819_1, VkglTestCase_035819_2);

#define VkglTestCase_035820_1 "dEQP-GLES3.functional.ubo.instance_ar"
#define VkglTestCase_035820_2 "ray_basic_type.std140.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035820, VkglTestCase_035820_1, VkglTestCase_035820_2);

#define VkglTestCase_035821_1 "dEQP-GLES3.functional.ubo.instance_"
#define VkglTestCase_035821_2 "array_basic_type.std140.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035821, VkglTestCase_035821_1, VkglTestCase_035821_2);

#define VkglTestCase_035822_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035822_2 "basic_type.std140.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035822, VkglTestCase_035822_1, VkglTestCase_035822_2);

#define VkglTestCase_035823_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035823_2 "asic_type.std140.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035823, VkglTestCase_035823_1, VkglTestCase_035823_2);

#define VkglTestCase_035824_1 "dEQP-GLES3.functional.ubo.instance_array"
#define VkglTestCase_035824_2 "_basic_type.std140.row_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035824, VkglTestCase_035824_1, VkglTestCase_035824_2);

#define VkglTestCase_035825_1 "dEQP-GLES3.functional.ubo.instance_array_b"
#define VkglTestCase_035825_2 "asic_type.std140.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035825, VkglTestCase_035825_1, VkglTestCase_035825_2);

#define VkglTestCase_035826_1 "dEQP-GLES3.functional.ubo.instance_array_ba"
#define VkglTestCase_035826_2 "sic_type.std140.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035826, VkglTestCase_035826_1, VkglTestCase_035826_2);

#define VkglTestCase_035827_1 "dEQP-GLES3.functional.ubo.instance_array_"
#define VkglTestCase_035827_2 "basic_type.std140.column_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035827, VkglTestCase_035827_1, VkglTestCase_035827_2);
