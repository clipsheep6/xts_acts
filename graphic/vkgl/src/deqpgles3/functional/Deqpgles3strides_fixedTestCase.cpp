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

#define VkglTestCase_032975_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032975_2 "e.strides.fixed.user_ptr_stride8_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032975, VkglTestCase_032975_1, VkglTestCase_032975_2);

#define VkglTestCase_032976_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032976_2 "e.strides.fixed.user_ptr_stride17_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032976, VkglTestCase_032976_1, VkglTestCase_032976_2);

#define VkglTestCase_032977_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032977_2 "e.strides.fixed.user_ptr_stride32_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032977, VkglTestCase_032977_1, VkglTestCase_032977_2);

#define VkglTestCase_032978_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032978_2 ".strides.fixed.user_ptr_stride8_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032978, VkglTestCase_032978_1, VkglTestCase_032978_2);

#define VkglTestCase_032979_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032979_2 ".strides.fixed.user_ptr_stride17_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032979, VkglTestCase_032979_1, VkglTestCase_032979_2);

#define VkglTestCase_032980_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032980_2 ".strides.fixed.user_ptr_stride32_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032980, VkglTestCase_032980_1, VkglTestCase_032980_2);

#define VkglTestCase_032981_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032981_2 "e.strides.fixed.user_ptr_stride12_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032981, VkglTestCase_032981_1, VkglTestCase_032981_2);

#define VkglTestCase_032982_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032982_2 "e.strides.fixed.user_ptr_stride17_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032982, VkglTestCase_032982_1, VkglTestCase_032982_2);

#define VkglTestCase_032983_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032983_2 "e.strides.fixed.user_ptr_stride32_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032983, VkglTestCase_032983_1, VkglTestCase_032983_2);

#define VkglTestCase_032984_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032984_2 ".strides.fixed.user_ptr_stride12_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032984, VkglTestCase_032984_1, VkglTestCase_032984_2);

#define VkglTestCase_032985_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032985_2 ".strides.fixed.user_ptr_stride17_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032985, VkglTestCase_032985_1, VkglTestCase_032985_2);

#define VkglTestCase_032986_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032986_2 ".strides.fixed.user_ptr_stride32_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032986, VkglTestCase_032986_1, VkglTestCase_032986_2);

#define VkglTestCase_032987_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032987_2 "e.strides.fixed.user_ptr_stride16_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032987, VkglTestCase_032987_1, VkglTestCase_032987_2);

#define VkglTestCase_032988_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032988_2 "e.strides.fixed.user_ptr_stride17_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032988, VkglTestCase_032988_1, VkglTestCase_032988_2);

#define VkglTestCase_032989_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032989_2 "e.strides.fixed.user_ptr_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032989, VkglTestCase_032989_1, VkglTestCase_032989_2);

#define VkglTestCase_032990_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032990_2 ".strides.fixed.user_ptr_stride16_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032990, VkglTestCase_032990_1, VkglTestCase_032990_2);

#define VkglTestCase_032991_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032991_2 ".strides.fixed.user_ptr_stride17_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032991, VkglTestCase_032991_1, VkglTestCase_032991_2);

#define VkglTestCase_032992_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_032992_2 ".strides.fixed.user_ptr_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032992, VkglTestCase_032992_1, VkglTestCase_032992_2);

#define VkglTestCase_032993_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032993_2 "te.strides.fixed.buffer_stride8_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032993, VkglTestCase_032993_1, VkglTestCase_032993_2);

#define VkglTestCase_032994_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032994_2 "te.strides.fixed.buffer_stride32_components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032994, VkglTestCase_032994_1, VkglTestCase_032994_2);

#define VkglTestCase_032995_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032995_2 "e.strides.fixed.buffer_stride8_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032995, VkglTestCase_032995_1, VkglTestCase_032995_2);

#define VkglTestCase_032996_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032996_2 "e.strides.fixed.buffer_stride32_components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032996, VkglTestCase_032996_1, VkglTestCase_032996_2);

#define VkglTestCase_032997_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032997_2 "te.strides.fixed.buffer_stride12_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032997, VkglTestCase_032997_1, VkglTestCase_032997_2);

#define VkglTestCase_032998_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_032998_2 "te.strides.fixed.buffer_stride32_components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032998, VkglTestCase_032998_1, VkglTestCase_032998_2);

#define VkglTestCase_032999_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_032999_2 "e.strides.fixed.buffer_stride12_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032999, VkglTestCase_032999_1, VkglTestCase_032999_2);

#define VkglTestCase_033000_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033000_2 "e.strides.fixed.buffer_stride32_components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033000, VkglTestCase_033000_1, VkglTestCase_033000_2);

#define VkglTestCase_033001_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_033001_2 "te.strides.fixed.buffer_stride16_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033001, VkglTestCase_033001_1, VkglTestCase_033001_2);

#define VkglTestCase_033002_1 "dEQP-GLES3.functional.vertex_arrays.single_attribu"
#define VkglTestCase_033002_2 "te.strides.fixed.buffer_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033002, VkglTestCase_033002_1, VkglTestCase_033002_2);

#define VkglTestCase_033003_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033003_2 "e.strides.fixed.buffer_stride16_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033003, VkglTestCase_033003_1, VkglTestCase_033003_2);

#define VkglTestCase_033004_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033004_2 "e.strides.fixed.buffer_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033004, VkglTestCase_033004_1, VkglTestCase_033004_2);
