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

#define VkglTestCase_009082_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009082_2 "andom.comparison_ops.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009082, VkglTestCase_009082_1, VkglTestCase_009082_2);

#define VkglTestCase_009083_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009083_2 "andom.comparison_ops.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009083, VkglTestCase_009083_1, VkglTestCase_009083_2);

#define VkglTestCase_009084_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009084_2 "andom.comparison_ops.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009084, VkglTestCase_009084_1, VkglTestCase_009084_2);

#define VkglTestCase_009085_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009085_2 "andom.comparison_ops.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009085, VkglTestCase_009085_1, VkglTestCase_009085_2);

#define VkglTestCase_009086_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009086_2 "andom.comparison_ops.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009086, VkglTestCase_009086_1, VkglTestCase_009086_2);

#define VkglTestCase_009087_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009087_2 "andom.comparison_ops.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009087, VkglTestCase_009087_1, VkglTestCase_009087_2);

#define VkglTestCase_009088_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009088_2 "andom.comparison_ops.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009088, VkglTestCase_009088_1, VkglTestCase_009088_2);

#define VkglTestCase_009089_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009089_2 "andom.comparison_ops.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009089, VkglTestCase_009089_1, VkglTestCase_009089_2);

#define VkglTestCase_009090_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009090_2 "andom.comparison_ops.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009090, VkglTestCase_009090_1, VkglTestCase_009090_2);

#define VkglTestCase_009091_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009091_2 "andom.comparison_ops.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009091, VkglTestCase_009091_1, VkglTestCase_009091_2);

#define VkglTestCase_009092_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009092_2 "andom.comparison_ops.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009092, VkglTestCase_009092_1, VkglTestCase_009092_2);

#define VkglTestCase_009093_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009093_2 "andom.comparison_ops.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009093, VkglTestCase_009093_1, VkglTestCase_009093_2);

#define VkglTestCase_009094_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009094_2 "andom.comparison_ops.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009094, VkglTestCase_009094_1, VkglTestCase_009094_2);

#define VkglTestCase_009095_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009095_2 "andom.comparison_ops.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009095, VkglTestCase_009095_1, VkglTestCase_009095_2);

#define VkglTestCase_009096_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009096_2 "andom.comparison_ops.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009096, VkglTestCase_009096_1, VkglTestCase_009096_2);

#define VkglTestCase_009097_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009097_2 "andom.comparison_ops.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009097, VkglTestCase_009097_1, VkglTestCase_009097_2);

#define VkglTestCase_009098_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009098_2 "andom.comparison_ops.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009098, VkglTestCase_009098_1, VkglTestCase_009098_2);

#define VkglTestCase_009099_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009099_2 "andom.comparison_ops.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009099, VkglTestCase_009099_1, VkglTestCase_009099_2);

#define VkglTestCase_009100_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009100_2 "andom.comparison_ops.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009100, VkglTestCase_009100_1, VkglTestCase_009100_2);

#define VkglTestCase_009101_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009101_2 "andom.comparison_ops.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009101, VkglTestCase_009101_1, VkglTestCase_009101_2);

#define VkglTestCase_009102_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009102_2 "andom.comparison_ops.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009102, VkglTestCase_009102_1, VkglTestCase_009102_2);

#define VkglTestCase_009103_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009103_2 "andom.comparison_ops.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009103, VkglTestCase_009103_1, VkglTestCase_009103_2);

#define VkglTestCase_009104_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009104_2 "andom.comparison_ops.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009104, VkglTestCase_009104_1, VkglTestCase_009104_2);

#define VkglTestCase_009105_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009105_2 "andom.comparison_ops.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009105, VkglTestCase_009105_1, VkglTestCase_009105_2);

#define VkglTestCase_009106_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009106_2 "andom.comparison_ops.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009106, VkglTestCase_009106_1, VkglTestCase_009106_2);

#define VkglTestCase_009107_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009107_2 "andom.comparison_ops.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009107, VkglTestCase_009107_1, VkglTestCase_009107_2);

#define VkglTestCase_009108_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009108_2 "andom.comparison_ops.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009108, VkglTestCase_009108_1, VkglTestCase_009108_2);

#define VkglTestCase_009109_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009109_2 "andom.comparison_ops.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009109, VkglTestCase_009109_1, VkglTestCase_009109_2);

#define VkglTestCase_009110_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009110_2 "andom.comparison_ops.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009110, VkglTestCase_009110_1, VkglTestCase_009110_2);

#define VkglTestCase_009111_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009111_2 "andom.comparison_ops.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009111, VkglTestCase_009111_1, VkglTestCase_009111_2);

#define VkglTestCase_009112_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009112_2 "andom.comparison_ops.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009112, VkglTestCase_009112_1, VkglTestCase_009112_2);

#define VkglTestCase_009113_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009113_2 "andom.comparison_ops.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009113, VkglTestCase_009113_1, VkglTestCase_009113_2);

#define VkglTestCase_009114_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009114_2 "andom.comparison_ops.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009114, VkglTestCase_009114_1, VkglTestCase_009114_2);

#define VkglTestCase_009115_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009115_2 "andom.comparison_ops.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009115, VkglTestCase_009115_1, VkglTestCase_009115_2);

#define VkglTestCase_009116_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009116_2 "andom.comparison_ops.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009116, VkglTestCase_009116_1, VkglTestCase_009116_2);

#define VkglTestCase_009117_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009117_2 "andom.comparison_ops.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009117, VkglTestCase_009117_1, VkglTestCase_009117_2);

#define VkglTestCase_009118_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009118_2 "andom.comparison_ops.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009118, VkglTestCase_009118_1, VkglTestCase_009118_2);

#define VkglTestCase_009119_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009119_2 "andom.comparison_ops.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009119, VkglTestCase_009119_1, VkglTestCase_009119_2);

#define VkglTestCase_009120_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009120_2 "andom.comparison_ops.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009120, VkglTestCase_009120_1, VkglTestCase_009120_2);

#define VkglTestCase_009121_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009121_2 "andom.comparison_ops.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009121, VkglTestCase_009121_1, VkglTestCase_009121_2);

#define VkglTestCase_009122_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009122_2 "andom.comparison_ops.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009122, VkglTestCase_009122_1, VkglTestCase_009122_2);

#define VkglTestCase_009123_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009123_2 "andom.comparison_ops.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009123, VkglTestCase_009123_1, VkglTestCase_009123_2);

#define VkglTestCase_009124_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009124_2 "andom.comparison_ops.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009124, VkglTestCase_009124_1, VkglTestCase_009124_2);

#define VkglTestCase_009125_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009125_2 "andom.comparison_ops.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009125, VkglTestCase_009125_1, VkglTestCase_009125_2);

#define VkglTestCase_009126_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009126_2 "andom.comparison_ops.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009126, VkglTestCase_009126_1, VkglTestCase_009126_2);

#define VkglTestCase_009127_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009127_2 "andom.comparison_ops.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009127, VkglTestCase_009127_1, VkglTestCase_009127_2);

#define VkglTestCase_009128_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009128_2 "andom.comparison_ops.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009128, VkglTestCase_009128_1, VkglTestCase_009128_2);

#define VkglTestCase_009129_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009129_2 "andom.comparison_ops.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009129, VkglTestCase_009129_1, VkglTestCase_009129_2);

#define VkglTestCase_009130_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009130_2 "andom.comparison_ops.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009130, VkglTestCase_009130_1, VkglTestCase_009130_2);

#define VkglTestCase_009131_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009131_2 "andom.comparison_ops.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009131, VkglTestCase_009131_1, VkglTestCase_009131_2);
