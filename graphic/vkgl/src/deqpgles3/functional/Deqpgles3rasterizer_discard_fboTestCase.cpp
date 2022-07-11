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

#define VkglTestCase_040519_1 "dEQP-GLES3.functional.rasterize"
#define VkglTestCase_040519_2 "r_discard.fbo.write_depth_points"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040519, VkglTestCase_040519_1, VkglTestCase_040519_2);

#define VkglTestCase_040520_1 "dEQP-GLES3.functional.rasterize"
#define VkglTestCase_040520_2 "r_discard.fbo.write_depth_lines"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040520, VkglTestCase_040520_1, VkglTestCase_040520_2);

#define VkglTestCase_040521_1 "dEQP-GLES3.functional.rasterizer_"
#define VkglTestCase_040521_2 "discard.fbo.write_depth_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040521, VkglTestCase_040521_1, VkglTestCase_040521_2);

#define VkglTestCase_040522_1 "dEQP-GLES3.functional.rasterizer_"
#define VkglTestCase_040522_2 "discard.fbo.write_depth_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040522, VkglTestCase_040522_1, VkglTestCase_040522_2);

#define VkglTestCase_040523_1 "dEQP-GLES3.functional.rasterizer_"
#define VkglTestCase_040523_2 "discard.fbo.write_depth_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040523, VkglTestCase_040523_1, VkglTestCase_040523_2);

#define VkglTestCase_040524_1 "dEQP-GLES3.functional.rasterizer_di"
#define VkglTestCase_040524_2 "scard.fbo.write_depth_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040524, VkglTestCase_040524_1, VkglTestCase_040524_2);

#define VkglTestCase_040525_1 "dEQP-GLES3.functional.rasterizer_d"
#define VkglTestCase_040525_2 "iscard.fbo.write_depth_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040525, VkglTestCase_040525_1, VkglTestCase_040525_2);

#define VkglTestCase_040526_1 "dEQP-GLES3.functional.rasterizer"
#define VkglTestCase_040526_2 "_discard.fbo.write_stencil_points"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040526, VkglTestCase_040526_1, VkglTestCase_040526_2);

#define VkglTestCase_040527_1 "dEQP-GLES3.functional.rasterizer"
#define VkglTestCase_040527_2 "_discard.fbo.write_stencil_lines"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040527, VkglTestCase_040527_1, VkglTestCase_040527_2);

#define VkglTestCase_040528_1 "dEQP-GLES3.functional.rasterizer_d"
#define VkglTestCase_040528_2 "iscard.fbo.write_stencil_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040528, VkglTestCase_040528_1, VkglTestCase_040528_2);

#define VkglTestCase_040529_1 "dEQP-GLES3.functional.rasterizer_d"
#define VkglTestCase_040529_2 "iscard.fbo.write_stencil_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040529, VkglTestCase_040529_1, VkglTestCase_040529_2);

#define VkglTestCase_040530_1 "dEQP-GLES3.functional.rasterizer_d"
#define VkglTestCase_040530_2 "iscard.fbo.write_stencil_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040530, VkglTestCase_040530_1, VkglTestCase_040530_2);

#define VkglTestCase_040531_1 "dEQP-GLES3.functional.rasterizer_dis"
#define VkglTestCase_040531_2 "card.fbo.write_stencil_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040531, VkglTestCase_040531_1, VkglTestCase_040531_2);

#define VkglTestCase_040532_1 "dEQP-GLES3.functional.rasterizer_di"
#define VkglTestCase_040532_2 "scard.fbo.write_stencil_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040532, VkglTestCase_040532_1, VkglTestCase_040532_2);

#define VkglTestCase_040533_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_040533_2 "izer_discard.fbo.clear_color"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040533, VkglTestCase_040533_1, VkglTestCase_040533_2);

#define VkglTestCase_040534_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_040534_2 "izer_discard.fbo.clear_depth"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040534, VkglTestCase_040534_1, VkglTestCase_040534_2);

#define VkglTestCase_040535_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_040535_2 "zer_discard.fbo.clear_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040535, VkglTestCase_040535_1, VkglTestCase_040535_2);
