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

#define VkglTestCase_013908_1 "dEQP-GLES2.functional.rasterizat"
#define VkglTestCase_013908_2 "ion.interpolation.basic.triangles"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013908, VkglTestCase_013908_1, VkglTestCase_013908_2);

#define VkglTestCase_013909_1 "dEQP-GLES2.functional.rasterization"
#define VkglTestCase_013909_2 ".interpolation.basic.triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013909, VkglTestCase_013909_1, VkglTestCase_013909_2);

#define VkglTestCase_013910_1 "dEQP-GLES2.functional.rasterizatio"
#define VkglTestCase_013910_2 "n.interpolation.basic.triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013910, VkglTestCase_013910_1, VkglTestCase_013910_2);

#define VkglTestCase_013911_1 "dEQP-GLES2.functional.rasteriz"
#define VkglTestCase_013911_2 "ation.interpolation.basic.lines"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013911, VkglTestCase_013911_1, VkglTestCase_013911_2);

#define VkglTestCase_013912_1 "dEQP-GLES2.functional.rasterizati"
#define VkglTestCase_013912_2 "on.interpolation.basic.line_strip"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013912, VkglTestCase_013912_1, VkglTestCase_013912_2);

#define VkglTestCase_013913_1 "dEQP-GLES2.functional.rasterizat"
#define VkglTestCase_013913_2 "ion.interpolation.basic.line_loop"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013913, VkglTestCase_013913_1, VkglTestCase_013913_2);

#define VkglTestCase_013914_1 "dEQP-GLES2.functional.rasterizati"
#define VkglTestCase_013914_2 "on.interpolation.basic.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013914, VkglTestCase_013914_1, VkglTestCase_013914_2);

#define VkglTestCase_013915_1 "dEQP-GLES2.functional.rasterization"
#define VkglTestCase_013915_2 ".interpolation.basic.line_strip_wide"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013915, VkglTestCase_013915_1, VkglTestCase_013915_2);

#define VkglTestCase_013916_1 "dEQP-GLES2.functional.rasterization"
#define VkglTestCase_013916_2 ".interpolation.basic.line_loop_wide"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013916, VkglTestCase_013916_1, VkglTestCase_013916_2);
