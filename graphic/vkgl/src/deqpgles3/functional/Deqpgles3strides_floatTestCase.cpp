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
#include "../ActsDeqpgles30033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032879_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032879_2 "e.strides.float.user_ptr_stride8_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032879, VkglTestCase_032879_1, VkglTestCase_032879_2);

#define VkglTestCase_032880_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032880_2 "e.strides.float.user_ptr_stride17_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032880, VkglTestCase_032880_1, VkglTestCase_032880_2);

#define VkglTestCase_032881_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032881_2 "e.strides.float.user_ptr_stride32_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032881, VkglTestCase_032881_1, VkglTestCase_032881_2);

#define VkglTestCase_032882_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032882_2 ".strides.float.user_ptr_stride8_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032882, VkglTestCase_032882_1, VkglTestCase_032882_2);

#define VkglTestCase_032883_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032883_2 ".strides.float.user_ptr_stride17_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032883, VkglTestCase_032883_1, VkglTestCase_032883_2);

#define VkglTestCase_032884_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032884_2 ".strides.float.user_ptr_stride32_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032884, VkglTestCase_032884_1, VkglTestCase_032884_2);

#define VkglTestCase_032885_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032885_2 "e.strides.float.user_ptr_stride12_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032885, VkglTestCase_032885_1, VkglTestCase_032885_2);

#define VkglTestCase_032886_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032886_2 "e.strides.float.user_ptr_stride17_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032886, VkglTestCase_032886_1, VkglTestCase_032886_2);

#define VkglTestCase_032887_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032887_2 "e.strides.float.user_ptr_stride32_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032887, VkglTestCase_032887_1, VkglTestCase_032887_2);

#define VkglTestCase_032888_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032888_2 ".strides.float.user_ptr_stride12_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032888, VkglTestCase_032888_1, VkglTestCase_032888_2);

#define VkglTestCase_032889_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032889_2 ".strides.float.user_ptr_stride17_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032889, VkglTestCase_032889_1, VkglTestCase_032889_2);

#define VkglTestCase_032890_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032890_2 ".strides.float.user_ptr_stride32_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032890, VkglTestCase_032890_1, VkglTestCase_032890_2);

#define VkglTestCase_032891_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032891_2 "e.strides.float.user_ptr_stride16_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032891, VkglTestCase_032891_1, VkglTestCase_032891_2);

#define VkglTestCase_032892_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032892_2 "e.strides.float.user_ptr_stride17_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032892, VkglTestCase_032892_1, VkglTestCase_032892_2);

#define VkglTestCase_032893_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032893_2 "e.strides.float.user_ptr_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032893, VkglTestCase_032893_1, VkglTestCase_032893_2);

#define VkglTestCase_032894_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032894_2 ".strides.float.user_ptr_stride16_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032894, VkglTestCase_032894_1, VkglTestCase_032894_2);

#define VkglTestCase_032895_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032895_2 ".strides.float.user_ptr_stride17_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032895, VkglTestCase_032895_1, VkglTestCase_032895_2);

#define VkglTestCase_032896_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032896_2 ".strides.float.user_ptr_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032896, VkglTestCase_032896_1, VkglTestCase_032896_2);

#define VkglTestCase_032897_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032897_2 "te.strides.float.buffer_stride8_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032897, VkglTestCase_032897_1, VkglTestCase_032897_2);

#define VkglTestCase_032898_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032898_2 "te.strides.float.buffer_stride32_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032898, VkglTestCase_032898_1, VkglTestCase_032898_2);

#define VkglTestCase_032899_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032899_2 "e.strides.float.buffer_stride8_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032899, VkglTestCase_032899_1, VkglTestCase_032899_2);

#define VkglTestCase_032900_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032900_2 "e.strides.float.buffer_stride32_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032900, VkglTestCase_032900_1, VkglTestCase_032900_2);

#define VkglTestCase_032901_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032901_2 "te.strides.float.buffer_stride12_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032901, VkglTestCase_032901_1, VkglTestCase_032901_2);

#define VkglTestCase_032902_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032902_2 "te.strides.float.buffer_stride32_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032902, VkglTestCase_032902_1, VkglTestCase_032902_2);

#define VkglTestCase_032903_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032903_2 "e.strides.float.buffer_stride12_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032903, VkglTestCase_032903_1, VkglTestCase_032903_2);

#define VkglTestCase_032904_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032904_2 "e.strides.float.buffer_stride32_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032904, VkglTestCase_032904_1, VkglTestCase_032904_2);

#define VkglTestCase_032905_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032905_2 "te.strides.float.buffer_stride16_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032905, VkglTestCase_032905_1, VkglTestCase_032905_2);

#define VkglTestCase_032906_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032906_2 "te.strides.float.buffer_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032906, VkglTestCase_032906_1, VkglTestCase_032906_2);

#define VkglTestCase_032907_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032907_2 "e.strides.float.buffer_stride16_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032907, VkglTestCase_032907_1, VkglTestCase_032907_2);

#define VkglTestCase_032908_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032908_2 "e.strides.float.buffer_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032908, VkglTestCase_032908_1, VkglTestCase_032908_2);
