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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000078_1 "dEQP-GLES3.functional.d"
#define VkglTestCase_000078_2 "epth_stencil_clear.depth"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000078, VkglTestCase_000078_1, VkglTestCase_000078_2);

#define VkglTestCase_000079_1 "dEQP-GLES3.functional.depth_"
#define VkglTestCase_000079_2 "stencil_clear.depth_scissored"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000079, VkglTestCase_000079_1, VkglTestCase_000079_2);

#define VkglTestCase_000080_1 "dEQP-GLES3.functional.depth_sten"
#define VkglTestCase_000080_2 "cil_clear.depth_scissored_masked"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000080, VkglTestCase_000080_1, VkglTestCase_000080_2);

#define VkglTestCase_000081_1 "dEQP-GLES3.functional.de"
#define VkglTestCase_000081_2 "pth_stencil_clear.stencil"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000081, VkglTestCase_000081_1, VkglTestCase_000081_2);

#define VkglTestCase_000082_1 "dEQP-GLES3.functional.depth_"
#define VkglTestCase_000082_2 "stencil_clear.stencil_masked"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000082, VkglTestCase_000082_1, VkglTestCase_000082_2);

#define VkglTestCase_000083_1 "dEQP-GLES3.functional.depth_s"
#define VkglTestCase_000083_2 "tencil_clear.stencil_scissored"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000083, VkglTestCase_000083_1, VkglTestCase_000083_2);

#define VkglTestCase_000084_1 "dEQP-GLES3.functional.depth_stenc"
#define VkglTestCase_000084_2 "il_clear.stencil_scissored_masked"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000084, VkglTestCase_000084_1, VkglTestCase_000084_2);

#define VkglTestCase_000085_1 "dEQP-GLES3.functional.depth"
#define VkglTestCase_000085_2 "_stencil_clear.depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000085, VkglTestCase_000085_1, VkglTestCase_000085_2);

#define VkglTestCase_000086_1 "dEQP-GLES3.functional.depth_ste"
#define VkglTestCase_000086_2 "ncil_clear.depth_stencil_masked"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000086, VkglTestCase_000086_1, VkglTestCase_000086_2);

#define VkglTestCase_000087_1 "dEQP-GLES3.functional.depth_sten"
#define VkglTestCase_000087_2 "cil_clear.depth_stencil_scissored"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000087, VkglTestCase_000087_1, VkglTestCase_000087_2);

#define VkglTestCase_000088_1 "dEQP-GLES3.functional.depth_stencil_"
#define VkglTestCase_000088_2 "clear.depth_stencil_scissored_masked"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000088, VkglTestCase_000088_1, VkglTestCase_000088_2);
