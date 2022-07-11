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

#define VkglTestCase_013917_1 "dEQP-GLES2.functional.rasterizatio"
#define VkglTestCase_013917_2 "n.interpolation.projected.triangles"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013917, VkglTestCase_013917_1, VkglTestCase_013917_2);

#define VkglTestCase_013918_1 "dEQP-GLES2.functional.rasterization.i"
#define VkglTestCase_013918_2 "nterpolation.projected.triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013918, VkglTestCase_013918_1, VkglTestCase_013918_2);

#define VkglTestCase_013919_1 "dEQP-GLES2.functional.rasterization."
#define VkglTestCase_013919_2 "interpolation.projected.triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013919, VkglTestCase_013919_1, VkglTestCase_013919_2);

#define VkglTestCase_013920_1 "dEQP-GLES2.functional.rasterizat"
#define VkglTestCase_013920_2 "ion.interpolation.projected.lines"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013920, VkglTestCase_013920_1, VkglTestCase_013920_2);

#define VkglTestCase_013921_1 "dEQP-GLES2.functional.rasterization"
#define VkglTestCase_013921_2 ".interpolation.projected.line_strip"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013921, VkglTestCase_013921_1, VkglTestCase_013921_2);

#define VkglTestCase_013922_1 "dEQP-GLES2.functional.rasterizatio"
#define VkglTestCase_013922_2 "n.interpolation.projected.line_loop"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013922, VkglTestCase_013922_1, VkglTestCase_013922_2);

#define VkglTestCase_013923_1 "dEQP-GLES2.functional.rasterization"
#define VkglTestCase_013923_2 ".interpolation.projected.lines_wide"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013923, VkglTestCase_013923_1, VkglTestCase_013923_2);

#define VkglTestCase_013924_1 "dEQP-GLES2.functional.rasterization.i"
#define VkglTestCase_013924_2 "nterpolation.projected.line_strip_wide"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013924, VkglTestCase_013924_1, VkglTestCase_013924_2);

#define VkglTestCase_013925_1 "dEQP-GLES2.functional.rasterization.i"
#define VkglTestCase_013925_2 "nterpolation.projected.line_loop_wide"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013925, VkglTestCase_013925_1, VkglTestCase_013925_2);
