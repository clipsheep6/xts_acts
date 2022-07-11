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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036041_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036041_2 "o.random.nested_structs.0"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036041, VkglTestCase_036041_1, VkglTestCase_036041_2);

#define VkglTestCase_036042_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036042_2 "o.random.nested_structs.1"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036042, VkglTestCase_036042_1, VkglTestCase_036042_2);

#define VkglTestCase_036043_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036043_2 "o.random.nested_structs.2"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036043, VkglTestCase_036043_1, VkglTestCase_036043_2);

#define VkglTestCase_036044_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036044_2 "o.random.nested_structs.3"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036044, VkglTestCase_036044_1, VkglTestCase_036044_2);

#define VkglTestCase_036045_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036045_2 "o.random.nested_structs.4"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036045, VkglTestCase_036045_1, VkglTestCase_036045_2);

#define VkglTestCase_036046_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036046_2 "o.random.nested_structs.5"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036046, VkglTestCase_036046_1, VkglTestCase_036046_2);

#define VkglTestCase_036047_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036047_2 "o.random.nested_structs.6"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036047, VkglTestCase_036047_1, VkglTestCase_036047_2);

#define VkglTestCase_036048_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036048_2 "o.random.nested_structs.7"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036048, VkglTestCase_036048_1, VkglTestCase_036048_2);

#define VkglTestCase_036049_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036049_2 "o.random.nested_structs.8"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036049, VkglTestCase_036049_1, VkglTestCase_036049_2);

#define VkglTestCase_036050_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036050_2 "o.random.nested_structs.9"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036050, VkglTestCase_036050_1, VkglTestCase_036050_2);

#define VkglTestCase_036051_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036051_2 ".random.nested_structs.10"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036051, VkglTestCase_036051_1, VkglTestCase_036051_2);

#define VkglTestCase_036052_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036052_2 ".random.nested_structs.11"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036052, VkglTestCase_036052_1, VkglTestCase_036052_2);

#define VkglTestCase_036053_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036053_2 ".random.nested_structs.12"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036053, VkglTestCase_036053_1, VkglTestCase_036053_2);

#define VkglTestCase_036054_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036054_2 ".random.nested_structs.13"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036054, VkglTestCase_036054_1, VkglTestCase_036054_2);

#define VkglTestCase_036055_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036055_2 ".random.nested_structs.14"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036055, VkglTestCase_036055_1, VkglTestCase_036055_2);

#define VkglTestCase_036056_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036056_2 ".random.nested_structs.15"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036056, VkglTestCase_036056_1, VkglTestCase_036056_2);

#define VkglTestCase_036057_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036057_2 ".random.nested_structs.16"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036057, VkglTestCase_036057_1, VkglTestCase_036057_2);

#define VkglTestCase_036058_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036058_2 ".random.nested_structs.17"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036058, VkglTestCase_036058_1, VkglTestCase_036058_2);

#define VkglTestCase_036059_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036059_2 ".random.nested_structs.18"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036059, VkglTestCase_036059_1, VkglTestCase_036059_2);

#define VkglTestCase_036060_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036060_2 ".random.nested_structs.19"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036060, VkglTestCase_036060_1, VkglTestCase_036060_2);

#define VkglTestCase_036061_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036061_2 ".random.nested_structs.20"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036061, VkglTestCase_036061_1, VkglTestCase_036061_2);

#define VkglTestCase_036062_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036062_2 ".random.nested_structs.21"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036062, VkglTestCase_036062_1, VkglTestCase_036062_2);

#define VkglTestCase_036063_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036063_2 ".random.nested_structs.22"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036063, VkglTestCase_036063_1, VkglTestCase_036063_2);

#define VkglTestCase_036064_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036064_2 ".random.nested_structs.23"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036064, VkglTestCase_036064_1, VkglTestCase_036064_2);

#define VkglTestCase_036065_1 "dEQP-GLES3.functional.ubo"
#define VkglTestCase_036065_2 ".random.nested_structs.24"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036065, VkglTestCase_036065_1, VkglTestCase_036065_2);
