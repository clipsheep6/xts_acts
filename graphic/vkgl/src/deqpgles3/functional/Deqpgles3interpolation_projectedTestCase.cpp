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

#define VkglTestCase_039798_1 "dEQP-GLES3.functional.rasterizatio"
#define VkglTestCase_039798_2 "n.interpolation.projected.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039798, VkglTestCase_039798_1, VkglTestCase_039798_2);

#define VkglTestCase_039799_1 "dEQP-GLES3.functional.rasterization.i"
#define VkglTestCase_039799_2 "nterpolation.projected.triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039799, VkglTestCase_039799_1, VkglTestCase_039799_2);

#define VkglTestCase_039800_1 "dEQP-GLES3.functional.rasterization."
#define VkglTestCase_039800_2 "interpolation.projected.triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039800, VkglTestCase_039800_1, VkglTestCase_039800_2);

#define VkglTestCase_039801_1 "dEQP-GLES3.functional.rasterizat"
#define VkglTestCase_039801_2 "ion.interpolation.projected.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039801, VkglTestCase_039801_1, VkglTestCase_039801_2);

#define VkglTestCase_039802_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039802_2 ".interpolation.projected.line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039802, VkglTestCase_039802_1, VkglTestCase_039802_2);

#define VkglTestCase_039803_1 "dEQP-GLES3.functional.rasterizatio"
#define VkglTestCase_039803_2 "n.interpolation.projected.line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039803, VkglTestCase_039803_1, VkglTestCase_039803_2);

#define VkglTestCase_039804_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039804_2 ".interpolation.projected.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039804, VkglTestCase_039804_1, VkglTestCase_039804_2);

#define VkglTestCase_039805_1 "dEQP-GLES3.functional.rasterization.i"
#define VkglTestCase_039805_2 "nterpolation.projected.line_strip_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039805, VkglTestCase_039805_1, VkglTestCase_039805_2);

#define VkglTestCase_039806_1 "dEQP-GLES3.functional.rasterization.i"
#define VkglTestCase_039806_2 "nterpolation.projected.line_loop_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039806, VkglTestCase_039806_1, VkglTestCase_039806_2);
