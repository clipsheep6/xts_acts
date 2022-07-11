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

#define VkglTestCase_000059_1 "dEQP-GLES3.functional."
#define VkglTestCase_000059_2 "color_clear.single_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000059, VkglTestCase_000059_1, VkglTestCase_000059_2);

#define VkglTestCase_000060_1 "dEQP-GLES3.functional."
#define VkglTestCase_000060_2 "color_clear.single_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000060, VkglTestCase_000060_1, VkglTestCase_000060_2);

#define VkglTestCase_000061_1 "dEQP-GLES3.functional.c"
#define VkglTestCase_000061_2 "olor_clear.multiple_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000061, VkglTestCase_000061_1, VkglTestCase_000061_2);

#define VkglTestCase_000062_1 "dEQP-GLES3.functional.c"
#define VkglTestCase_000062_2 "olor_clear.multiple_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000062, VkglTestCase_000062_1, VkglTestCase_000062_2);

#define VkglTestCase_000063_1 "dEQP-GLES3.functional"
#define VkglTestCase_000063_2 ".color_clear.long_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000063, VkglTestCase_000063_1, VkglTestCase_000063_2);

#define VkglTestCase_000064_1 "dEQP-GLES3.functional"
#define VkglTestCase_000064_2 ".color_clear.long_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000064, VkglTestCase_000064_1, VkglTestCase_000064_2);

#define VkglTestCase_000065_1 "dEQP-GLES3.functional.c"
#define VkglTestCase_000065_2 "olor_clear.subclears_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000065, VkglTestCase_000065_1, VkglTestCase_000065_2);

#define VkglTestCase_000066_1 "dEQP-GLES3.functional.co"
#define VkglTestCase_000066_2 "lor_clear.subclears_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000066, VkglTestCase_000066_1, VkglTestCase_000066_2);

#define VkglTestCase_000067_1 "dEQP-GLES3.functional.colo"
#define VkglTestCase_000067_2 "r_clear.short_scissored_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000067, VkglTestCase_000067_1, VkglTestCase_000067_2);

#define VkglTestCase_000068_1 "dEQP-GLES3.functional.c"
#define VkglTestCase_000068_2 "olor_clear.scissored_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000068, VkglTestCase_000068_1, VkglTestCase_000068_2);

#define VkglTestCase_000069_1 "dEQP-GLES3.functional.co"
#define VkglTestCase_000069_2 "lor_clear.scissored_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000069, VkglTestCase_000069_1, VkglTestCase_000069_2);

#define VkglTestCase_000070_1 "dEQP-GLES3.functional."
#define VkglTestCase_000070_2 "color_clear.masked_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000070, VkglTestCase_000070_1, VkglTestCase_000070_2);

#define VkglTestCase_000071_1 "dEQP-GLES3.functional."
#define VkglTestCase_000071_2 "color_clear.masked_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000071, VkglTestCase_000071_1, VkglTestCase_000071_2);

#define VkglTestCase_000072_1 "dEQP-GLES3.functional.color"
#define VkglTestCase_000072_2 "_clear.masked_scissored_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000072, VkglTestCase_000072_1, VkglTestCase_000072_2);

#define VkglTestCase_000073_1 "dEQP-GLES3.functional.color"
#define VkglTestCase_000073_2 "_clear.masked_scissored_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000073, VkglTestCase_000073_1, VkglTestCase_000073_2);

#define VkglTestCase_000074_1 "dEQP-GLES3.functional."
#define VkglTestCase_000074_2 "color_clear.complex_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000074, VkglTestCase_000074_1, VkglTestCase_000074_2);

#define VkglTestCase_000075_1 "dEQP-GLES3.functional.c"
#define VkglTestCase_000075_2 "olor_clear.complex_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000075, VkglTestCase_000075_1, VkglTestCase_000075_2);

#define VkglTestCase_000076_1 "dEQP-GLES3.functional.co"
#define VkglTestCase_000076_2 "lor_clear.long_masked_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000076, VkglTestCase_000076_1, VkglTestCase_000076_2);

#define VkglTestCase_000077_1 "dEQP-GLES3.functional.col"
#define VkglTestCase_000077_2 "or_clear.long_masked_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000077, VkglTestCase_000077_1, VkglTestCase_000077_2);
