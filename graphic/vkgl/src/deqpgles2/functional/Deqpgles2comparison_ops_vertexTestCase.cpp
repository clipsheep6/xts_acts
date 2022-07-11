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
#include "../ActsDeqpgles20010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009032_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009032_2 "random.comparison_ops.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009032, VkglTestCase_009032_1, VkglTestCase_009032_2);

#define VkglTestCase_009033_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009033_2 "random.comparison_ops.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009033, VkglTestCase_009033_1, VkglTestCase_009033_2);

#define VkglTestCase_009034_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009034_2 "random.comparison_ops.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009034, VkglTestCase_009034_1, VkglTestCase_009034_2);

#define VkglTestCase_009035_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009035_2 "random.comparison_ops.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009035, VkglTestCase_009035_1, VkglTestCase_009035_2);

#define VkglTestCase_009036_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009036_2 "random.comparison_ops.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009036, VkglTestCase_009036_1, VkglTestCase_009036_2);

#define VkglTestCase_009037_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009037_2 "random.comparison_ops.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009037, VkglTestCase_009037_1, VkglTestCase_009037_2);

#define VkglTestCase_009038_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009038_2 "random.comparison_ops.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009038, VkglTestCase_009038_1, VkglTestCase_009038_2);

#define VkglTestCase_009039_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009039_2 "random.comparison_ops.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009039, VkglTestCase_009039_1, VkglTestCase_009039_2);

#define VkglTestCase_009040_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009040_2 "random.comparison_ops.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009040, VkglTestCase_009040_1, VkglTestCase_009040_2);

#define VkglTestCase_009041_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009041_2 "random.comparison_ops.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009041, VkglTestCase_009041_1, VkglTestCase_009041_2);

#define VkglTestCase_009042_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009042_2 "random.comparison_ops.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009042, VkglTestCase_009042_1, VkglTestCase_009042_2);

#define VkglTestCase_009043_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009043_2 "random.comparison_ops.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009043, VkglTestCase_009043_1, VkglTestCase_009043_2);

#define VkglTestCase_009044_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009044_2 "random.comparison_ops.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009044, VkglTestCase_009044_1, VkglTestCase_009044_2);

#define VkglTestCase_009045_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009045_2 "random.comparison_ops.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009045, VkglTestCase_009045_1, VkglTestCase_009045_2);

#define VkglTestCase_009046_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009046_2 "random.comparison_ops.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009046, VkglTestCase_009046_1, VkglTestCase_009046_2);

#define VkglTestCase_009047_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009047_2 "random.comparison_ops.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009047, VkglTestCase_009047_1, VkglTestCase_009047_2);

#define VkglTestCase_009048_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009048_2 "random.comparison_ops.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009048, VkglTestCase_009048_1, VkglTestCase_009048_2);

#define VkglTestCase_009049_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009049_2 "random.comparison_ops.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009049, VkglTestCase_009049_1, VkglTestCase_009049_2);

#define VkglTestCase_009050_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009050_2 "random.comparison_ops.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009050, VkglTestCase_009050_1, VkglTestCase_009050_2);

#define VkglTestCase_009051_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009051_2 "random.comparison_ops.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009051, VkglTestCase_009051_1, VkglTestCase_009051_2);

#define VkglTestCase_009052_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009052_2 "random.comparison_ops.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009052, VkglTestCase_009052_1, VkglTestCase_009052_2);

#define VkglTestCase_009053_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009053_2 "random.comparison_ops.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009053, VkglTestCase_009053_1, VkglTestCase_009053_2);

#define VkglTestCase_009054_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009054_2 "random.comparison_ops.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009054, VkglTestCase_009054_1, VkglTestCase_009054_2);

#define VkglTestCase_009055_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009055_2 "random.comparison_ops.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009055, VkglTestCase_009055_1, VkglTestCase_009055_2);

#define VkglTestCase_009056_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009056_2 "random.comparison_ops.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009056, VkglTestCase_009056_1, VkglTestCase_009056_2);

#define VkglTestCase_009057_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009057_2 "random.comparison_ops.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009057, VkglTestCase_009057_1, VkglTestCase_009057_2);

#define VkglTestCase_009058_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009058_2 "random.comparison_ops.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009058, VkglTestCase_009058_1, VkglTestCase_009058_2);

#define VkglTestCase_009059_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009059_2 "random.comparison_ops.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009059, VkglTestCase_009059_1, VkglTestCase_009059_2);

#define VkglTestCase_009060_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009060_2 "random.comparison_ops.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009060, VkglTestCase_009060_1, VkglTestCase_009060_2);

#define VkglTestCase_009061_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009061_2 "random.comparison_ops.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009061, VkglTestCase_009061_1, VkglTestCase_009061_2);

#define VkglTestCase_009062_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009062_2 "random.comparison_ops.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009062, VkglTestCase_009062_1, VkglTestCase_009062_2);

#define VkglTestCase_009063_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009063_2 "random.comparison_ops.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009063, VkglTestCase_009063_1, VkglTestCase_009063_2);

#define VkglTestCase_009064_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009064_2 "random.comparison_ops.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009064, VkglTestCase_009064_1, VkglTestCase_009064_2);

#define VkglTestCase_009065_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009065_2 "random.comparison_ops.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009065, VkglTestCase_009065_1, VkglTestCase_009065_2);

#define VkglTestCase_009066_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009066_2 "random.comparison_ops.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009066, VkglTestCase_009066_1, VkglTestCase_009066_2);

#define VkglTestCase_009067_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009067_2 "random.comparison_ops.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009067, VkglTestCase_009067_1, VkglTestCase_009067_2);

#define VkglTestCase_009068_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009068_2 "random.comparison_ops.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009068, VkglTestCase_009068_1, VkglTestCase_009068_2);

#define VkglTestCase_009069_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009069_2 "random.comparison_ops.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009069, VkglTestCase_009069_1, VkglTestCase_009069_2);

#define VkglTestCase_009070_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009070_2 "random.comparison_ops.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009070, VkglTestCase_009070_1, VkglTestCase_009070_2);

#define VkglTestCase_009071_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009071_2 "random.comparison_ops.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009071, VkglTestCase_009071_1, VkglTestCase_009071_2);

#define VkglTestCase_009072_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009072_2 "random.comparison_ops.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009072, VkglTestCase_009072_1, VkglTestCase_009072_2);

#define VkglTestCase_009073_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009073_2 "random.comparison_ops.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009073, VkglTestCase_009073_1, VkglTestCase_009073_2);

#define VkglTestCase_009074_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009074_2 "random.comparison_ops.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009074, VkglTestCase_009074_1, VkglTestCase_009074_2);

#define VkglTestCase_009075_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009075_2 "random.comparison_ops.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009075, VkglTestCase_009075_1, VkglTestCase_009075_2);

#define VkglTestCase_009076_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009076_2 "random.comparison_ops.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009076, VkglTestCase_009076_1, VkglTestCase_009076_2);

#define VkglTestCase_009077_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009077_2 "random.comparison_ops.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009077, VkglTestCase_009077_1, VkglTestCase_009077_2);

#define VkglTestCase_009078_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009078_2 "random.comparison_ops.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009078, VkglTestCase_009078_1, VkglTestCase_009078_2);

#define VkglTestCase_009079_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009079_2 "random.comparison_ops.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009079, VkglTestCase_009079_1, VkglTestCase_009079_2);

#define VkglTestCase_009080_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009080_2 "random.comparison_ops.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009080, VkglTestCase_009080_1, VkglTestCase_009080_2);

#define VkglTestCase_009081_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009081_2 "random.comparison_ops.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009081, VkglTestCase_009081_1, VkglTestCase_009081_2);
