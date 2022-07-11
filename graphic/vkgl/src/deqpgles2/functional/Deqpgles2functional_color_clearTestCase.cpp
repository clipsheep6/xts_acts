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

#define VkglTestCase_000034_1 "dEQP-GLES2.functional."
#define VkglTestCase_000034_2 "color_clear.single_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000034, VkglTestCase_000034_1, VkglTestCase_000034_2);

#define VkglTestCase_000035_1 "dEQP-GLES2.functional."
#define VkglTestCase_000035_2 "color_clear.single_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000035, VkglTestCase_000035_1, VkglTestCase_000035_2);

#define VkglTestCase_000036_1 "dEQP-GLES2.functional.c"
#define VkglTestCase_000036_2 "olor_clear.multiple_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000036, VkglTestCase_000036_1, VkglTestCase_000036_2);

#define VkglTestCase_000037_1 "dEQP-GLES2.functional.c"
#define VkglTestCase_000037_2 "olor_clear.multiple_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000037, VkglTestCase_000037_1, VkglTestCase_000037_2);

#define VkglTestCase_000038_1 "dEQP-GLES2.functional"
#define VkglTestCase_000038_2 ".color_clear.long_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000038, VkglTestCase_000038_1, VkglTestCase_000038_2);

#define VkglTestCase_000039_1 "dEQP-GLES2.functional"
#define VkglTestCase_000039_2 ".color_clear.long_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000039, VkglTestCase_000039_1, VkglTestCase_000039_2);

#define VkglTestCase_000040_1 "dEQP-GLES2.functional.c"
#define VkglTestCase_000040_2 "olor_clear.subclears_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000040, VkglTestCase_000040_1, VkglTestCase_000040_2);

#define VkglTestCase_000041_1 "dEQP-GLES2.functional.co"
#define VkglTestCase_000041_2 "lor_clear.subclears_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000041, VkglTestCase_000041_1, VkglTestCase_000041_2);

#define VkglTestCase_000042_1 "dEQP-GLES2.functional.colo"
#define VkglTestCase_000042_2 "r_clear.short_scissored_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000042, VkglTestCase_000042_1, VkglTestCase_000042_2);

#define VkglTestCase_000043_1 "dEQP-GLES2.functional.c"
#define VkglTestCase_000043_2 "olor_clear.scissored_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000043, VkglTestCase_000043_1, VkglTestCase_000043_2);

#define VkglTestCase_000044_1 "dEQP-GLES2.functional.co"
#define VkglTestCase_000044_2 "lor_clear.scissored_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000044, VkglTestCase_000044_1, VkglTestCase_000044_2);

#define VkglTestCase_000045_1 "dEQP-GLES2.functional."
#define VkglTestCase_000045_2 "color_clear.masked_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000045, VkglTestCase_000045_1, VkglTestCase_000045_2);

#define VkglTestCase_000046_1 "dEQP-GLES2.functional."
#define VkglTestCase_000046_2 "color_clear.masked_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000046, VkglTestCase_000046_1, VkglTestCase_000046_2);

#define VkglTestCase_000047_1 "dEQP-GLES2.functional.color"
#define VkglTestCase_000047_2 "_clear.masked_scissored_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000047, VkglTestCase_000047_1, VkglTestCase_000047_2);

#define VkglTestCase_000048_1 "dEQP-GLES2.functional.color"
#define VkglTestCase_000048_2 "_clear.masked_scissored_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000048, VkglTestCase_000048_1, VkglTestCase_000048_2);

#define VkglTestCase_000049_1 "dEQP-GLES2.functional."
#define VkglTestCase_000049_2 "color_clear.complex_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000049, VkglTestCase_000049_1, VkglTestCase_000049_2);

#define VkglTestCase_000050_1 "dEQP-GLES2.functional.c"
#define VkglTestCase_000050_2 "olor_clear.complex_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000050, VkglTestCase_000050_1, VkglTestCase_000050_2);

#define VkglTestCase_000051_1 "dEQP-GLES2.functional.co"
#define VkglTestCase_000051_2 "lor_clear.long_masked_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000051, VkglTestCase_000051_1, VkglTestCase_000051_2);

#define VkglTestCase_000052_1 "dEQP-GLES2.functional.col"
#define VkglTestCase_000052_2 "or_clear.long_masked_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000052, VkglTestCase_000052_1, VkglTestCase_000052_2);
