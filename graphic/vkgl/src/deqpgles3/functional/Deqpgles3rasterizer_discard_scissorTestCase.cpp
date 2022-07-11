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

#define VkglTestCase_040502_1 "dEQP-GLES3.functional.rasterizer_"
#define VkglTestCase_040502_2 "discard.scissor.write_depth_points"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040502, VkglTestCase_040502_1, VkglTestCase_040502_2);

#define VkglTestCase_040503_1 "dEQP-GLES3.functional.rasterizer_"
#define VkglTestCase_040503_2 "discard.scissor.write_depth_lines"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040503, VkglTestCase_040503_1, VkglTestCase_040503_2);

#define VkglTestCase_040504_1 "dEQP-GLES3.functional.rasterizer_di"
#define VkglTestCase_040504_2 "scard.scissor.write_depth_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040504, VkglTestCase_040504_1, VkglTestCase_040504_2);

#define VkglTestCase_040505_1 "dEQP-GLES3.functional.rasterizer_di"
#define VkglTestCase_040505_2 "scard.scissor.write_depth_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040505, VkglTestCase_040505_1, VkglTestCase_040505_2);

#define VkglTestCase_040506_1 "dEQP-GLES3.functional.rasterizer_di"
#define VkglTestCase_040506_2 "scard.scissor.write_depth_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040506, VkglTestCase_040506_1, VkglTestCase_040506_2);

#define VkglTestCase_040507_1 "dEQP-GLES3.functional.rasterizer_disc"
#define VkglTestCase_040507_2 "ard.scissor.write_depth_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040507, VkglTestCase_040507_1, VkglTestCase_040507_2);

#define VkglTestCase_040508_1 "dEQP-GLES3.functional.rasterizer_dis"
#define VkglTestCase_040508_2 "card.scissor.write_depth_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040508, VkglTestCase_040508_1, VkglTestCase_040508_2);

#define VkglTestCase_040509_1 "dEQP-GLES3.functional.rasterizer_d"
#define VkglTestCase_040509_2 "iscard.scissor.write_stencil_points"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040509, VkglTestCase_040509_1, VkglTestCase_040509_2);

#define VkglTestCase_040510_1 "dEQP-GLES3.functional.rasterizer_d"
#define VkglTestCase_040510_2 "iscard.scissor.write_stencil_lines"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040510, VkglTestCase_040510_1, VkglTestCase_040510_2);

#define VkglTestCase_040511_1 "dEQP-GLES3.functional.rasterizer_dis"
#define VkglTestCase_040511_2 "card.scissor.write_stencil_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040511, VkglTestCase_040511_1, VkglTestCase_040511_2);

#define VkglTestCase_040512_1 "dEQP-GLES3.functional.rasterizer_dis"
#define VkglTestCase_040512_2 "card.scissor.write_stencil_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040512, VkglTestCase_040512_1, VkglTestCase_040512_2);

#define VkglTestCase_040513_1 "dEQP-GLES3.functional.rasterizer_dis"
#define VkglTestCase_040513_2 "card.scissor.write_stencil_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040513, VkglTestCase_040513_1, VkglTestCase_040513_2);

#define VkglTestCase_040514_1 "dEQP-GLES3.functional.rasterizer_disca"
#define VkglTestCase_040514_2 "rd.scissor.write_stencil_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040514, VkglTestCase_040514_1, VkglTestCase_040514_2);

#define VkglTestCase_040515_1 "dEQP-GLES3.functional.rasterizer_disc"
#define VkglTestCase_040515_2 "ard.scissor.write_stencil_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040515, VkglTestCase_040515_1, VkglTestCase_040515_2);

#define VkglTestCase_040516_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_040516_2 "er_discard.scissor.clear_color"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040516, VkglTestCase_040516_1, VkglTestCase_040516_2);

#define VkglTestCase_040517_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_040517_2 "er_discard.scissor.clear_depth"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040517, VkglTestCase_040517_1, VkglTestCase_040517_2);

#define VkglTestCase_040518_1 "dEQP-GLES3.functional.rasterize"
#define VkglTestCase_040518_2 "r_discard.scissor.clear_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040518, VkglTestCase_040518_1, VkglTestCase_040518_2);
