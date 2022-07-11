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

#define VkglTestCase_032909_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032909_2 "e.strides.short.user_ptr_stride4_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032909, VkglTestCase_032909_1, VkglTestCase_032909_2);

#define VkglTestCase_032910_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032910_2 "e.strides.short.user_ptr_stride17_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032910, VkglTestCase_032910_1, VkglTestCase_032910_2);

#define VkglTestCase_032911_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032911_2 "e.strides.short.user_ptr_stride32_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032911, VkglTestCase_032911_1, VkglTestCase_032911_2);

#define VkglTestCase_032912_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032912_2 ".strides.short.user_ptr_stride4_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032912, VkglTestCase_032912_1, VkglTestCase_032912_2);

#define VkglTestCase_032913_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032913_2 ".strides.short.user_ptr_stride17_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032913, VkglTestCase_032913_1, VkglTestCase_032913_2);

#define VkglTestCase_032914_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032914_2 ".strides.short.user_ptr_stride32_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032914, VkglTestCase_032914_1, VkglTestCase_032914_2);

#define VkglTestCase_032915_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032915_2 "e.strides.short.user_ptr_stride6_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032915, VkglTestCase_032915_1, VkglTestCase_032915_2);

#define VkglTestCase_032916_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032916_2 "e.strides.short.user_ptr_stride17_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032916, VkglTestCase_032916_1, VkglTestCase_032916_2);

#define VkglTestCase_032917_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032917_2 "e.strides.short.user_ptr_stride32_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032917, VkglTestCase_032917_1, VkglTestCase_032917_2);

#define VkglTestCase_032918_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032918_2 ".strides.short.user_ptr_stride6_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032918, VkglTestCase_032918_1, VkglTestCase_032918_2);

#define VkglTestCase_032919_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032919_2 ".strides.short.user_ptr_stride17_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032919, VkglTestCase_032919_1, VkglTestCase_032919_2);

#define VkglTestCase_032920_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032920_2 ".strides.short.user_ptr_stride32_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032920, VkglTestCase_032920_1, VkglTestCase_032920_2);

#define VkglTestCase_032921_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032921_2 "e.strides.short.user_ptr_stride8_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032921, VkglTestCase_032921_1, VkglTestCase_032921_2);

#define VkglTestCase_032922_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032922_2 "e.strides.short.user_ptr_stride17_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032922, VkglTestCase_032922_1, VkglTestCase_032922_2);

#define VkglTestCase_032923_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032923_2 "e.strides.short.user_ptr_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032923, VkglTestCase_032923_1, VkglTestCase_032923_2);

#define VkglTestCase_032924_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032924_2 ".strides.short.user_ptr_stride8_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032924, VkglTestCase_032924_1, VkglTestCase_032924_2);

#define VkglTestCase_032925_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032925_2 ".strides.short.user_ptr_stride17_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032925, VkglTestCase_032925_1, VkglTestCase_032925_2);

#define VkglTestCase_032926_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032926_2 ".strides.short.user_ptr_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032926, VkglTestCase_032926_1, VkglTestCase_032926_2);

#define VkglTestCase_032927_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032927_2 "te.strides.short.buffer_stride4_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032927, VkglTestCase_032927_1, VkglTestCase_032927_2);

#define VkglTestCase_032928_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032928_2 "te.strides.short.buffer_stride32_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032928, VkglTestCase_032928_1, VkglTestCase_032928_2);

#define VkglTestCase_032929_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032929_2 "e.strides.short.buffer_stride4_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032929, VkglTestCase_032929_1, VkglTestCase_032929_2);

#define VkglTestCase_032930_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032930_2 "e.strides.short.buffer_stride32_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032930, VkglTestCase_032930_1, VkglTestCase_032930_2);

#define VkglTestCase_032931_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032931_2 "te.strides.short.buffer_stride6_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032931, VkglTestCase_032931_1, VkglTestCase_032931_2);

#define VkglTestCase_032932_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032932_2 "te.strides.short.buffer_stride32_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032932, VkglTestCase_032932_1, VkglTestCase_032932_2);

#define VkglTestCase_032933_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032933_2 "e.strides.short.buffer_stride6_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032933, VkglTestCase_032933_1, VkglTestCase_032933_2);

#define VkglTestCase_032934_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032934_2 "e.strides.short.buffer_stride32_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032934, VkglTestCase_032934_1, VkglTestCase_032934_2);

#define VkglTestCase_032935_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032935_2 "te.strides.short.buffer_stride8_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032935, VkglTestCase_032935_1, VkglTestCase_032935_2);

#define VkglTestCase_032936_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032936_2 "te.strides.short.buffer_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032936, VkglTestCase_032936_1, VkglTestCase_032936_2);

#define VkglTestCase_032937_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032937_2 "e.strides.short.buffer_stride8_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032937, VkglTestCase_032937_1, VkglTestCase_032937_2);

#define VkglTestCase_032938_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032938_2 "e.strides.short.buffer_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032938, VkglTestCase_032938_1, VkglTestCase_032938_2);
