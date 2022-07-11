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

#define VkglTestCase_033005_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.st"
#define VkglTestCase_033005_2 "rides.int2_10_10_10.user_ptr_stride16_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033005, VkglTestCase_033005_1, VkglTestCase_033005_2);

#define VkglTestCase_033006_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.st"
#define VkglTestCase_033006_2 "rides.int2_10_10_10.user_ptr_stride17_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033006, VkglTestCase_033006_1, VkglTestCase_033006_2);

#define VkglTestCase_033007_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.st"
#define VkglTestCase_033007_2 "rides.int2_10_10_10.user_ptr_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033007, VkglTestCase_033007_1, VkglTestCase_033007_2);

#define VkglTestCase_033008_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.str"
#define VkglTestCase_033008_2 "ides.int2_10_10_10.user_ptr_stride16_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033008, VkglTestCase_033008_1, VkglTestCase_033008_2);

#define VkglTestCase_033009_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.str"
#define VkglTestCase_033009_2 "ides.int2_10_10_10.user_ptr_stride17_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033009, VkglTestCase_033009_1, VkglTestCase_033009_2);

#define VkglTestCase_033010_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.str"
#define VkglTestCase_033010_2 "ides.int2_10_10_10.user_ptr_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033010, VkglTestCase_033010_1, VkglTestCase_033010_2);

#define VkglTestCase_033011_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.s"
#define VkglTestCase_033011_2 "trides.int2_10_10_10.buffer_stride16_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033011, VkglTestCase_033011_1, VkglTestCase_033011_2);

#define VkglTestCase_033012_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.s"
#define VkglTestCase_033012_2 "trides.int2_10_10_10.buffer_stride32_components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033012, VkglTestCase_033012_1, VkglTestCase_033012_2);

#define VkglTestCase_033013_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.st"
#define VkglTestCase_033013_2 "rides.int2_10_10_10.buffer_stride16_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033013, VkglTestCase_033013_1, VkglTestCase_033013_2);

#define VkglTestCase_033014_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.st"
#define VkglTestCase_033014_2 "rides.int2_10_10_10.buffer_stride32_components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033014, VkglTestCase_033014_1, VkglTestCase_033014_2);
