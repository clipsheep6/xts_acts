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

#define VkglTestCase_039789_1 "dEQP-GLES3.functional.rasterizat"
#define VkglTestCase_039789_2 "ion.interpolation.basic.triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039789, VkglTestCase_039789_1, VkglTestCase_039789_2);

#define VkglTestCase_039790_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039790_2 ".interpolation.basic.triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039790, VkglTestCase_039790_1, VkglTestCase_039790_2);

#define VkglTestCase_039791_1 "dEQP-GLES3.functional.rasterizatio"
#define VkglTestCase_039791_2 "n.interpolation.basic.triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039791, VkglTestCase_039791_1, VkglTestCase_039791_2);

#define VkglTestCase_039792_1 "dEQP-GLES3.functional.rasteriz"
#define VkglTestCase_039792_2 "ation.interpolation.basic.lines"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039792, VkglTestCase_039792_1, VkglTestCase_039792_2);

#define VkglTestCase_039793_1 "dEQP-GLES3.functional.rasterizati"
#define VkglTestCase_039793_2 "on.interpolation.basic.line_strip"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039793, VkglTestCase_039793_1, VkglTestCase_039793_2);

#define VkglTestCase_039794_1 "dEQP-GLES3.functional.rasterizat"
#define VkglTestCase_039794_2 "ion.interpolation.basic.line_loop"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039794, VkglTestCase_039794_1, VkglTestCase_039794_2);

#define VkglTestCase_039795_1 "dEQP-GLES3.functional.rasterizati"
#define VkglTestCase_039795_2 "on.interpolation.basic.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039795, VkglTestCase_039795_1, VkglTestCase_039795_2);

#define VkglTestCase_039796_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039796_2 ".interpolation.basic.line_strip_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039796, VkglTestCase_039796_1, VkglTestCase_039796_2);

#define VkglTestCase_039797_1 "dEQP-GLES3.functional.rasterization"
#define VkglTestCase_039797_2 ".interpolation.basic.line_loop_wide"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039797, VkglTestCase_039797_1, VkglTestCase_039797_2);
