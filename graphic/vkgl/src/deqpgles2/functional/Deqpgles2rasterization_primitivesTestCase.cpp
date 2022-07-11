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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013874_1 "dEQP-GLES2.functional.raster"
#define VkglTestCase_013874_2 "ization.primitives.triangles"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013874, VkglTestCase_013874_1, VkglTestCase_013874_2);

#define VkglTestCase_013875_1 "dEQP-GLES2.functional.rasteriz"
#define VkglTestCase_013875_2 "ation.primitives.triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013875, VkglTestCase_013875_1, VkglTestCase_013875_2);

#define VkglTestCase_013876_1 "dEQP-GLES2.functional.rasteri"
#define VkglTestCase_013876_2 "zation.primitives.triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013876, VkglTestCase_013876_1, VkglTestCase_013876_2);

#define VkglTestCase_013877_1 "dEQP-GLES2.functional.rast"
#define VkglTestCase_013877_2 "erization.primitives.lines"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013877, VkglTestCase_013877_1, VkglTestCase_013877_2);

#define VkglTestCase_013878_1 "dEQP-GLES2.functional.raster"
#define VkglTestCase_013878_2 "ization.primitives.line_strip"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013878, VkglTestCase_013878_1, VkglTestCase_013878_2);

#define VkglTestCase_013879_1 "dEQP-GLES2.functional.raster"
#define VkglTestCase_013879_2 "ization.primitives.line_loop"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013879, VkglTestCase_013879_1, VkglTestCase_013879_2);

#define VkglTestCase_013880_1 "dEQP-GLES2.functional.raster"
#define VkglTestCase_013880_2 "ization.primitives.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013880, VkglTestCase_013880_1, VkglTestCase_013880_2);

#define VkglTestCase_013881_1 "dEQP-GLES2.functional.rasteriza"
#define VkglTestCase_013881_2 "tion.primitives.line_strip_wide"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013881, VkglTestCase_013881_1, VkglTestCase_013881_2);

#define VkglTestCase_013882_1 "dEQP-GLES2.functional.rasteriz"
#define VkglTestCase_013882_2 "ation.primitives.line_loop_wide"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013882, VkglTestCase_013882_1, VkglTestCase_013882_2);

#define VkglTestCase_013883_1 "dEQP-GLES2.functional.rast"
#define VkglTestCase_013883_2 "erization.primitives.points"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013883, VkglTestCase_013883_1, VkglTestCase_013883_2);
