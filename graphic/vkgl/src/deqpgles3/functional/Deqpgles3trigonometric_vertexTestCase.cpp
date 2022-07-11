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
#include "../ActsDeqpgles30022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021094_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021094_2 ".random.trigonometric.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021094, VkglTestCase_021094_1, VkglTestCase_021094_2);

#define VkglTestCase_021095_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021095_2 ".random.trigonometric.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021095, VkglTestCase_021095_1, VkglTestCase_021095_2);

#define VkglTestCase_021096_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021096_2 ".random.trigonometric.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021096, VkglTestCase_021096_1, VkglTestCase_021096_2);

#define VkglTestCase_021097_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021097_2 ".random.trigonometric.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021097, VkglTestCase_021097_1, VkglTestCase_021097_2);

#define VkglTestCase_021098_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021098_2 ".random.trigonometric.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021098, VkglTestCase_021098_1, VkglTestCase_021098_2);

#define VkglTestCase_021099_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021099_2 ".random.trigonometric.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021099, VkglTestCase_021099_1, VkglTestCase_021099_2);

#define VkglTestCase_021100_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021100_2 ".random.trigonometric.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021100, VkglTestCase_021100_1, VkglTestCase_021100_2);

#define VkglTestCase_021101_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021101_2 ".random.trigonometric.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021101, VkglTestCase_021101_1, VkglTestCase_021101_2);

#define VkglTestCase_021102_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021102_2 ".random.trigonometric.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021102, VkglTestCase_021102_1, VkglTestCase_021102_2);

#define VkglTestCase_021103_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021103_2 ".random.trigonometric.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021103, VkglTestCase_021103_1, VkglTestCase_021103_2);

#define VkglTestCase_021104_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021104_2 "random.trigonometric.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021104, VkglTestCase_021104_1, VkglTestCase_021104_2);

#define VkglTestCase_021105_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021105_2 "random.trigonometric.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021105, VkglTestCase_021105_1, VkglTestCase_021105_2);

#define VkglTestCase_021106_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021106_2 "random.trigonometric.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021106, VkglTestCase_021106_1, VkglTestCase_021106_2);

#define VkglTestCase_021107_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021107_2 "random.trigonometric.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021107, VkglTestCase_021107_1, VkglTestCase_021107_2);

#define VkglTestCase_021108_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021108_2 "random.trigonometric.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021108, VkglTestCase_021108_1, VkglTestCase_021108_2);

#define VkglTestCase_021109_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021109_2 "random.trigonometric.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021109, VkglTestCase_021109_1, VkglTestCase_021109_2);

#define VkglTestCase_021110_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021110_2 "random.trigonometric.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021110, VkglTestCase_021110_1, VkglTestCase_021110_2);

#define VkglTestCase_021111_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021111_2 "random.trigonometric.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021111, VkglTestCase_021111_1, VkglTestCase_021111_2);

#define VkglTestCase_021112_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021112_2 "random.trigonometric.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021112, VkglTestCase_021112_1, VkglTestCase_021112_2);

#define VkglTestCase_021113_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021113_2 "random.trigonometric.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021113, VkglTestCase_021113_1, VkglTestCase_021113_2);

#define VkglTestCase_021114_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021114_2 "random.trigonometric.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021114, VkglTestCase_021114_1, VkglTestCase_021114_2);

#define VkglTestCase_021115_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021115_2 "random.trigonometric.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021115, VkglTestCase_021115_1, VkglTestCase_021115_2);

#define VkglTestCase_021116_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021116_2 "random.trigonometric.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021116, VkglTestCase_021116_1, VkglTestCase_021116_2);

#define VkglTestCase_021117_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021117_2 "random.trigonometric.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021117, VkglTestCase_021117_1, VkglTestCase_021117_2);

#define VkglTestCase_021118_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021118_2 "random.trigonometric.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021118, VkglTestCase_021118_1, VkglTestCase_021118_2);

#define VkglTestCase_021119_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021119_2 "random.trigonometric.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021119, VkglTestCase_021119_1, VkglTestCase_021119_2);

#define VkglTestCase_021120_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021120_2 "random.trigonometric.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021120, VkglTestCase_021120_1, VkglTestCase_021120_2);

#define VkglTestCase_021121_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021121_2 "random.trigonometric.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021121, VkglTestCase_021121_1, VkglTestCase_021121_2);

#define VkglTestCase_021122_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021122_2 "random.trigonometric.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021122, VkglTestCase_021122_1, VkglTestCase_021122_2);

#define VkglTestCase_021123_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021123_2 "random.trigonometric.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021123, VkglTestCase_021123_1, VkglTestCase_021123_2);

#define VkglTestCase_021124_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021124_2 "random.trigonometric.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021124, VkglTestCase_021124_1, VkglTestCase_021124_2);

#define VkglTestCase_021125_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021125_2 "random.trigonometric.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021125, VkglTestCase_021125_1, VkglTestCase_021125_2);

#define VkglTestCase_021126_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021126_2 "random.trigonometric.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021126, VkglTestCase_021126_1, VkglTestCase_021126_2);

#define VkglTestCase_021127_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021127_2 "random.trigonometric.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021127, VkglTestCase_021127_1, VkglTestCase_021127_2);

#define VkglTestCase_021128_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021128_2 "random.trigonometric.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021128, VkglTestCase_021128_1, VkglTestCase_021128_2);

#define VkglTestCase_021129_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021129_2 "random.trigonometric.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021129, VkglTestCase_021129_1, VkglTestCase_021129_2);

#define VkglTestCase_021130_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021130_2 "random.trigonometric.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021130, VkglTestCase_021130_1, VkglTestCase_021130_2);

#define VkglTestCase_021131_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021131_2 "random.trigonometric.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021131, VkglTestCase_021131_1, VkglTestCase_021131_2);

#define VkglTestCase_021132_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021132_2 "random.trigonometric.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021132, VkglTestCase_021132_1, VkglTestCase_021132_2);

#define VkglTestCase_021133_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021133_2 "random.trigonometric.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021133, VkglTestCase_021133_1, VkglTestCase_021133_2);

#define VkglTestCase_021134_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021134_2 "random.trigonometric.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021134, VkglTestCase_021134_1, VkglTestCase_021134_2);

#define VkglTestCase_021135_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021135_2 "random.trigonometric.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021135, VkglTestCase_021135_1, VkglTestCase_021135_2);

#define VkglTestCase_021136_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021136_2 "random.trigonometric.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021136, VkglTestCase_021136_1, VkglTestCase_021136_2);

#define VkglTestCase_021137_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021137_2 "random.trigonometric.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021137, VkglTestCase_021137_1, VkglTestCase_021137_2);

#define VkglTestCase_021138_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021138_2 "random.trigonometric.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021138, VkglTestCase_021138_1, VkglTestCase_021138_2);

#define VkglTestCase_021139_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021139_2 "random.trigonometric.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021139, VkglTestCase_021139_1, VkglTestCase_021139_2);

#define VkglTestCase_021140_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021140_2 "random.trigonometric.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021140, VkglTestCase_021140_1, VkglTestCase_021140_2);

#define VkglTestCase_021141_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021141_2 "random.trigonometric.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021141, VkglTestCase_021141_1, VkglTestCase_021141_2);

#define VkglTestCase_021142_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021142_2 "random.trigonometric.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021142, VkglTestCase_021142_1, VkglTestCase_021142_2);

#define VkglTestCase_021143_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021143_2 "random.trigonometric.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021143, VkglTestCase_021143_1, VkglTestCase_021143_2);

#define VkglTestCase_021144_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021144_2 "random.trigonometric.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021144, VkglTestCase_021144_1, VkglTestCase_021144_2);

#define VkglTestCase_021145_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021145_2 "random.trigonometric.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021145, VkglTestCase_021145_1, VkglTestCase_021145_2);

#define VkglTestCase_021146_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021146_2 "random.trigonometric.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021146, VkglTestCase_021146_1, VkglTestCase_021146_2);

#define VkglTestCase_021147_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021147_2 "random.trigonometric.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021147, VkglTestCase_021147_1, VkglTestCase_021147_2);

#define VkglTestCase_021148_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021148_2 "random.trigonometric.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021148, VkglTestCase_021148_1, VkglTestCase_021148_2);

#define VkglTestCase_021149_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021149_2 "random.trigonometric.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021149, VkglTestCase_021149_1, VkglTestCase_021149_2);

#define VkglTestCase_021150_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021150_2 "random.trigonometric.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021150, VkglTestCase_021150_1, VkglTestCase_021150_2);

#define VkglTestCase_021151_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021151_2 "random.trigonometric.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021151, VkglTestCase_021151_1, VkglTestCase_021151_2);

#define VkglTestCase_021152_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021152_2 "random.trigonometric.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021152, VkglTestCase_021152_1, VkglTestCase_021152_2);

#define VkglTestCase_021153_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021153_2 "random.trigonometric.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021153, VkglTestCase_021153_1, VkglTestCase_021153_2);

#define VkglTestCase_021154_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021154_2 "random.trigonometric.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021154, VkglTestCase_021154_1, VkglTestCase_021154_2);

#define VkglTestCase_021155_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021155_2 "random.trigonometric.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021155, VkglTestCase_021155_1, VkglTestCase_021155_2);

#define VkglTestCase_021156_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021156_2 "random.trigonometric.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021156, VkglTestCase_021156_1, VkglTestCase_021156_2);

#define VkglTestCase_021157_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021157_2 "random.trigonometric.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021157, VkglTestCase_021157_1, VkglTestCase_021157_2);

#define VkglTestCase_021158_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021158_2 "random.trigonometric.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021158, VkglTestCase_021158_1, VkglTestCase_021158_2);

#define VkglTestCase_021159_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021159_2 "random.trigonometric.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021159, VkglTestCase_021159_1, VkglTestCase_021159_2);

#define VkglTestCase_021160_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021160_2 "random.trigonometric.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021160, VkglTestCase_021160_1, VkglTestCase_021160_2);

#define VkglTestCase_021161_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021161_2 "random.trigonometric.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021161, VkglTestCase_021161_1, VkglTestCase_021161_2);

#define VkglTestCase_021162_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021162_2 "random.trigonometric.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021162, VkglTestCase_021162_1, VkglTestCase_021162_2);

#define VkglTestCase_021163_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021163_2 "random.trigonometric.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021163, VkglTestCase_021163_1, VkglTestCase_021163_2);

#define VkglTestCase_021164_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021164_2 "random.trigonometric.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021164, VkglTestCase_021164_1, VkglTestCase_021164_2);

#define VkglTestCase_021165_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021165_2 "random.trigonometric.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021165, VkglTestCase_021165_1, VkglTestCase_021165_2);

#define VkglTestCase_021166_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021166_2 "random.trigonometric.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021166, VkglTestCase_021166_1, VkglTestCase_021166_2);

#define VkglTestCase_021167_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021167_2 "random.trigonometric.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021167, VkglTestCase_021167_1, VkglTestCase_021167_2);

#define VkglTestCase_021168_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021168_2 "random.trigonometric.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021168, VkglTestCase_021168_1, VkglTestCase_021168_2);

#define VkglTestCase_021169_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021169_2 "random.trigonometric.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021169, VkglTestCase_021169_1, VkglTestCase_021169_2);

#define VkglTestCase_021170_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021170_2 "random.trigonometric.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021170, VkglTestCase_021170_1, VkglTestCase_021170_2);

#define VkglTestCase_021171_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021171_2 "random.trigonometric.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021171, VkglTestCase_021171_1, VkglTestCase_021171_2);

#define VkglTestCase_021172_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021172_2 "random.trigonometric.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021172, VkglTestCase_021172_1, VkglTestCase_021172_2);

#define VkglTestCase_021173_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021173_2 "random.trigonometric.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021173, VkglTestCase_021173_1, VkglTestCase_021173_2);

#define VkglTestCase_021174_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021174_2 "random.trigonometric.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021174, VkglTestCase_021174_1, VkglTestCase_021174_2);

#define VkglTestCase_021175_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021175_2 "random.trigonometric.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021175, VkglTestCase_021175_1, VkglTestCase_021175_2);

#define VkglTestCase_021176_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021176_2 "random.trigonometric.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021176, VkglTestCase_021176_1, VkglTestCase_021176_2);

#define VkglTestCase_021177_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021177_2 "random.trigonometric.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021177, VkglTestCase_021177_1, VkglTestCase_021177_2);

#define VkglTestCase_021178_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021178_2 "random.trigonometric.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021178, VkglTestCase_021178_1, VkglTestCase_021178_2);

#define VkglTestCase_021179_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021179_2 "random.trigonometric.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021179, VkglTestCase_021179_1, VkglTestCase_021179_2);

#define VkglTestCase_021180_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021180_2 "random.trigonometric.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021180, VkglTestCase_021180_1, VkglTestCase_021180_2);

#define VkglTestCase_021181_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021181_2 "random.trigonometric.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021181, VkglTestCase_021181_1, VkglTestCase_021181_2);

#define VkglTestCase_021182_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021182_2 "random.trigonometric.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021182, VkglTestCase_021182_1, VkglTestCase_021182_2);

#define VkglTestCase_021183_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021183_2 "random.trigonometric.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021183, VkglTestCase_021183_1, VkglTestCase_021183_2);

#define VkglTestCase_021184_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021184_2 "random.trigonometric.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021184, VkglTestCase_021184_1, VkglTestCase_021184_2);

#define VkglTestCase_021185_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021185_2 "random.trigonometric.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021185, VkglTestCase_021185_1, VkglTestCase_021185_2);

#define VkglTestCase_021186_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021186_2 "random.trigonometric.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021186, VkglTestCase_021186_1, VkglTestCase_021186_2);

#define VkglTestCase_021187_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021187_2 "random.trigonometric.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021187, VkglTestCase_021187_1, VkglTestCase_021187_2);

#define VkglTestCase_021188_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021188_2 "random.trigonometric.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021188, VkglTestCase_021188_1, VkglTestCase_021188_2);
