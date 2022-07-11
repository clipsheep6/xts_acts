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

#define VkglTestCase_039807_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_039807_2 "ization.flatshading.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039807, VkglTestCase_039807_1, VkglTestCase_039807_2);

#define VkglTestCase_039808_1 "dEQP-GLES3.functional.rasteriza"
#define VkglTestCase_039808_2 "tion.flatshading.triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039808, VkglTestCase_039808_1, VkglTestCase_039808_2);

#define VkglTestCase_039809_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_039809_2 "ation.flatshading.triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039809, VkglTestCase_039809_1, VkglTestCase_039809_2);

#define VkglTestCase_039810_1 "dEQP-GLES3.functional.rast"
#define VkglTestCase_039810_2 "erization.flatshading.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039810, VkglTestCase_039810_1, VkglTestCase_039810_2);

#define VkglTestCase_039811_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_039811_2 "zation.flatshading.line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039811, VkglTestCase_039811_1, VkglTestCase_039811_2);

#define VkglTestCase_039812_1 "dEQP-GLES3.functional.raster"
#define VkglTestCase_039812_2 "ization.flatshading.line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039812, VkglTestCase_039812_1, VkglTestCase_039812_2);

#define VkglTestCase_039813_1 "dEQP-GLES3.functional.rasteri"
#define VkglTestCase_039813_2 "zation.flatshading.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039813, VkglTestCase_039813_1, VkglTestCase_039813_2);

#define VkglTestCase_039814_1 "dEQP-GLES3.functional.rasteriza"
#define VkglTestCase_039814_2 "tion.flatshading.line_strip_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039814, VkglTestCase_039814_1, VkglTestCase_039814_2);

#define VkglTestCase_039815_1 "dEQP-GLES3.functional.rasteriza"
#define VkglTestCase_039815_2 "tion.flatshading.line_loop_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039815, VkglTestCase_039815_1, VkglTestCase_039815_2);
