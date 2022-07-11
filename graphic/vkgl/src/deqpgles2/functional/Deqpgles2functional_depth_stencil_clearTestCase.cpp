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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000053_1 "dEQP-GLES2.functional.d"
#define VkglTestCase_000053_2 "epth_stencil_clear.depth"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000053, VkglTestCase_000053_1, VkglTestCase_000053_2);

#define VkglTestCase_000054_1 "dEQP-GLES2.functional.depth_"
#define VkglTestCase_000054_2 "stencil_clear.depth_scissored"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000054, VkglTestCase_000054_1, VkglTestCase_000054_2);

#define VkglTestCase_000055_1 "dEQP-GLES2.functional.depth_sten"
#define VkglTestCase_000055_2 "cil_clear.depth_scissored_masked"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000055, VkglTestCase_000055_1, VkglTestCase_000055_2);

#define VkglTestCase_000056_1 "dEQP-GLES2.functional.de"
#define VkglTestCase_000056_2 "pth_stencil_clear.stencil"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000056, VkglTestCase_000056_1, VkglTestCase_000056_2);

#define VkglTestCase_000057_1 "dEQP-GLES2.functional.depth_"
#define VkglTestCase_000057_2 "stencil_clear.stencil_masked"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000057, VkglTestCase_000057_1, VkglTestCase_000057_2);

#define VkglTestCase_000058_1 "dEQP-GLES2.functional.depth_s"
#define VkglTestCase_000058_2 "tencil_clear.stencil_scissored"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000058, VkglTestCase_000058_1, VkglTestCase_000058_2);

#define VkglTestCase_000059_1 "dEQP-GLES2.functional.depth_stenc"
#define VkglTestCase_000059_2 "il_clear.stencil_scissored_masked"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000059, VkglTestCase_000059_1, VkglTestCase_000059_2);

#define VkglTestCase_000060_1 "dEQP-GLES2.functional.depth"
#define VkglTestCase_000060_2 "_stencil_clear.depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000060, VkglTestCase_000060_1, VkglTestCase_000060_2);

#define VkglTestCase_000061_1 "dEQP-GLES2.functional.depth_ste"
#define VkglTestCase_000061_2 "ncil_clear.depth_stencil_masked"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000061, VkglTestCase_000061_1, VkglTestCase_000061_2);

#define VkglTestCase_000062_1 "dEQP-GLES2.functional.depth_sten"
#define VkglTestCase_000062_2 "cil_clear.depth_stencil_scissored"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000062, VkglTestCase_000062_1, VkglTestCase_000062_2);

#define VkglTestCase_000063_1 "dEQP-GLES2.functional.depth_stencil_"
#define VkglTestCase_000063_2 "clear.depth_stencil_scissored_masked"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000063, VkglTestCase_000063_1, VkglTestCase_000063_2);
