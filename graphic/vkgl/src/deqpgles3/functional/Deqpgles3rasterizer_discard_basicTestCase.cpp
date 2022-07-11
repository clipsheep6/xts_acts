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
#include "../ActsDeqpgles30041TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_040485_1 "dEQP-GLES3.functional.rasterizer"
#define VkglTestCase_040485_2 "_discard.basic.write_depth_points"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040485, VkglTestCase_040485_1, VkglTestCase_040485_2);

#define VkglTestCase_040486_1 "dEQP-GLES3.functional.rasterizer"
#define VkglTestCase_040486_2 "_discard.basic.write_depth_lines"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040486, VkglTestCase_040486_1, VkglTestCase_040486_2);

#define VkglTestCase_040487_1 "dEQP-GLES3.functional.rasterizer_d"
#define VkglTestCase_040487_2 "iscard.basic.write_depth_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040487, VkglTestCase_040487_1, VkglTestCase_040487_2);

#define VkglTestCase_040488_1 "dEQP-GLES3.functional.rasterizer_d"
#define VkglTestCase_040488_2 "iscard.basic.write_depth_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040488, VkglTestCase_040488_1, VkglTestCase_040488_2);

#define VkglTestCase_040489_1 "dEQP-GLES3.functional.rasterizer_d"
#define VkglTestCase_040489_2 "iscard.basic.write_depth_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040489, VkglTestCase_040489_1, VkglTestCase_040489_2);

#define VkglTestCase_040490_1 "dEQP-GLES3.functional.rasterizer_dis"
#define VkglTestCase_040490_2 "card.basic.write_depth_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040490, VkglTestCase_040490_1, VkglTestCase_040490_2);

#define VkglTestCase_040491_1 "dEQP-GLES3.functional.rasterizer_di"
#define VkglTestCase_040491_2 "scard.basic.write_depth_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040491, VkglTestCase_040491_1, VkglTestCase_040491_2);

#define VkglTestCase_040492_1 "dEQP-GLES3.functional.rasterizer_"
#define VkglTestCase_040492_2 "discard.basic.write_stencil_points"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040492, VkglTestCase_040492_1, VkglTestCase_040492_2);

#define VkglTestCase_040493_1 "dEQP-GLES3.functional.rasterizer_"
#define VkglTestCase_040493_2 "discard.basic.write_stencil_lines"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040493, VkglTestCase_040493_1, VkglTestCase_040493_2);

#define VkglTestCase_040494_1 "dEQP-GLES3.functional.rasterizer_di"
#define VkglTestCase_040494_2 "scard.basic.write_stencil_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040494, VkglTestCase_040494_1, VkglTestCase_040494_2);

#define VkglTestCase_040495_1 "dEQP-GLES3.functional.rasterizer_di"
#define VkglTestCase_040495_2 "scard.basic.write_stencil_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040495, VkglTestCase_040495_1, VkglTestCase_040495_2);

#define VkglTestCase_040496_1 "dEQP-GLES3.functional.rasterizer_di"
#define VkglTestCase_040496_2 "scard.basic.write_stencil_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040496, VkglTestCase_040496_1, VkglTestCase_040496_2);

#define VkglTestCase_040497_1 "dEQP-GLES3.functional.rasterizer_disc"
#define VkglTestCase_040497_2 "ard.basic.write_stencil_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040497, VkglTestCase_040497_1, VkglTestCase_040497_2);

#define VkglTestCase_040498_1 "dEQP-GLES3.functional.rasterizer_dis"
#define VkglTestCase_040498_2 "card.basic.write_stencil_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040498, VkglTestCase_040498_1, VkglTestCase_040498_2);

#define VkglTestCase_040499_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_040499_2 "zer_discard.basic.clear_color"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040499, VkglTestCase_040499_1, VkglTestCase_040499_2);

#define VkglTestCase_040500_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_040500_2 "zer_discard.basic.clear_depth"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040500, VkglTestCase_040500_1, VkglTestCase_040500_2);

#define VkglTestCase_040501_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_040501_2 "er_discard.basic.clear_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040501, VkglTestCase_040501_1, VkglTestCase_040501_2);
