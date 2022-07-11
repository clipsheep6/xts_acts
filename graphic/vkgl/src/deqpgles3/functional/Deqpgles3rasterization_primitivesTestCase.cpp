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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039756_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_039756_2 "ization.primitives.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039756, VkglTestCase_039756_1, VkglTestCase_039756_2);

#define VkglTestCase_039757_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_039757_2 "ation.primitives.triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039757, VkglTestCase_039757_1, VkglTestCase_039757_2);

#define VkglTestCase_039758_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_039758_2 "zation.primitives.triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039758, VkglTestCase_039758_1, VkglTestCase_039758_2);

#define VkglTestCase_039759_1 "dEQP-GLES3.functional.rast"
#define VkglTestCase_039759_2 "erization.primitives.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039759, VkglTestCase_039759_1, VkglTestCase_039759_2);

#define VkglTestCase_039760_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_039760_2 "ization.primitives.line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039760, VkglTestCase_039760_1, VkglTestCase_039760_2);

#define VkglTestCase_039761_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_039761_2 "ization.primitives.line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039761, VkglTestCase_039761_1, VkglTestCase_039761_2);

#define VkglTestCase_039762_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_039762_2 "ization.primitives.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039762, VkglTestCase_039762_1, VkglTestCase_039762_2);

#define VkglTestCase_039763_1 "dEQP-GLES3.functional.rasteriza"
#define VkglTestCase_039763_2 "tion.primitives.line_strip_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039763, VkglTestCase_039763_1, VkglTestCase_039763_2);

#define VkglTestCase_039764_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_039764_2 "ation.primitives.line_loop_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039764, VkglTestCase_039764_1, VkglTestCase_039764_2);

#define VkglTestCase_039765_1 "dEQP-GLES3.functional.rast"
#define VkglTestCase_039765_2 "erization.primitives.points"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039765, VkglTestCase_039765_1, VkglTestCase_039765_2);
