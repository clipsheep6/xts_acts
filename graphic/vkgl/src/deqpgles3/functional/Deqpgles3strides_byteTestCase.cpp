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

#define VkglTestCase_032939_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032939_2 "te.strides.byte.user_ptr_stride2_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032939, VkglTestCase_032939_1, VkglTestCase_032939_2);

#define VkglTestCase_032940_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032940_2 "e.strides.byte.user_ptr_stride17_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032940, VkglTestCase_032940_1, VkglTestCase_032940_2);

#define VkglTestCase_032941_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032941_2 "e.strides.byte.user_ptr_stride32_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032941, VkglTestCase_032941_1, VkglTestCase_032941_2);

#define VkglTestCase_032942_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032942_2 "e.strides.byte.user_ptr_stride2_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032942, VkglTestCase_032942_1, VkglTestCase_032942_2);

#define VkglTestCase_032943_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032943_2 ".strides.byte.user_ptr_stride17_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032943, VkglTestCase_032943_1, VkglTestCase_032943_2);

#define VkglTestCase_032944_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032944_2 ".strides.byte.user_ptr_stride32_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032944, VkglTestCase_032944_1, VkglTestCase_032944_2);

#define VkglTestCase_032945_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032945_2 "te.strides.byte.user_ptr_stride3_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032945, VkglTestCase_032945_1, VkglTestCase_032945_2);

#define VkglTestCase_032946_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032946_2 "e.strides.byte.user_ptr_stride17_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032946, VkglTestCase_032946_1, VkglTestCase_032946_2);

#define VkglTestCase_032947_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032947_2 "e.strides.byte.user_ptr_stride32_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032947, VkglTestCase_032947_1, VkglTestCase_032947_2);

#define VkglTestCase_032948_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032948_2 "e.strides.byte.user_ptr_stride3_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032948, VkglTestCase_032948_1, VkglTestCase_032948_2);

#define VkglTestCase_032949_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032949_2 ".strides.byte.user_ptr_stride17_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032949, VkglTestCase_032949_1, VkglTestCase_032949_2);

#define VkglTestCase_032950_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032950_2 ".strides.byte.user_ptr_stride32_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032950, VkglTestCase_032950_1, VkglTestCase_032950_2);

#define VkglTestCase_032951_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032951_2 "te.strides.byte.user_ptr_stride4_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032951, VkglTestCase_032951_1, VkglTestCase_032951_2);

#define VkglTestCase_032952_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032952_2 "e.strides.byte.user_ptr_stride17_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032952, VkglTestCase_032952_1, VkglTestCase_032952_2);

#define VkglTestCase_032953_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032953_2 "e.strides.byte.user_ptr_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032953, VkglTestCase_032953_1, VkglTestCase_032953_2);

#define VkglTestCase_032954_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032954_2 "e.strides.byte.user_ptr_stride4_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032954, VkglTestCase_032954_1, VkglTestCase_032954_2);

#define VkglTestCase_032955_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032955_2 ".strides.byte.user_ptr_stride17_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032955, VkglTestCase_032955_1, VkglTestCase_032955_2);

#define VkglTestCase_032956_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032956_2 ".strides.byte.user_ptr_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032956, VkglTestCase_032956_1, VkglTestCase_032956_2);

#define VkglTestCase_032957_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_032957_2 "ute.strides.byte.buffer_stride2_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032957, VkglTestCase_032957_1, VkglTestCase_032957_2);

#define VkglTestCase_032958_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032958_2 "te.strides.byte.buffer_stride17_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032958, VkglTestCase_032958_1, VkglTestCase_032958_2);

#define VkglTestCase_032959_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032959_2 "te.strides.byte.buffer_stride32_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032959, VkglTestCase_032959_1, VkglTestCase_032959_2);

#define VkglTestCase_032960_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032960_2 "te.strides.byte.buffer_stride2_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032960, VkglTestCase_032960_1, VkglTestCase_032960_2);

#define VkglTestCase_032961_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032961_2 "e.strides.byte.buffer_stride17_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032961, VkglTestCase_032961_1, VkglTestCase_032961_2);

#define VkglTestCase_032962_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032962_2 "e.strides.byte.buffer_stride32_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032962, VkglTestCase_032962_1, VkglTestCase_032962_2);

#define VkglTestCase_032963_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_032963_2 "ute.strides.byte.buffer_stride3_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032963, VkglTestCase_032963_1, VkglTestCase_032963_2);

#define VkglTestCase_032964_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032964_2 "te.strides.byte.buffer_stride17_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032964, VkglTestCase_032964_1, VkglTestCase_032964_2);

#define VkglTestCase_032965_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032965_2 "te.strides.byte.buffer_stride32_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032965, VkglTestCase_032965_1, VkglTestCase_032965_2);

#define VkglTestCase_032966_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032966_2 "te.strides.byte.buffer_stride3_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032966, VkglTestCase_032966_1, VkglTestCase_032966_2);

#define VkglTestCase_032967_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032967_2 "e.strides.byte.buffer_stride17_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032967, VkglTestCase_032967_1, VkglTestCase_032967_2);

#define VkglTestCase_032968_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032968_2 "e.strides.byte.buffer_stride32_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032968, VkglTestCase_032968_1, VkglTestCase_032968_2);

#define VkglTestCase_032969_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_032969_2 "ute.strides.byte.buffer_stride4_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032969, VkglTestCase_032969_1, VkglTestCase_032969_2);

#define VkglTestCase_032970_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032970_2 "te.strides.byte.buffer_stride17_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032970, VkglTestCase_032970_1, VkglTestCase_032970_2);

#define VkglTestCase_032971_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032971_2 "te.strides.byte.buffer_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032971, VkglTestCase_032971_1, VkglTestCase_032971_2);

#define VkglTestCase_032972_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032972_2 "te.strides.byte.buffer_stride4_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032972, VkglTestCase_032972_1, VkglTestCase_032972_2);

#define VkglTestCase_032973_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032973_2 "e.strides.byte.buffer_stride17_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032973, VkglTestCase_032973_1, VkglTestCase_032973_2);

#define VkglTestCase_032974_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032974_2 "e.strides.byte.buffer_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032974, VkglTestCase_032974_1, VkglTestCase_032974_2);
