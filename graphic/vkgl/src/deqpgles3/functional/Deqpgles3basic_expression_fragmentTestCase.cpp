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
#include "../ActsDeqpgles30021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020094_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020094_2 "ndom.basic_expression.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020094, VkglTestCase_020094_1, VkglTestCase_020094_2);

#define VkglTestCase_020095_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020095_2 "ndom.basic_expression.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020095, VkglTestCase_020095_1, VkglTestCase_020095_2);

#define VkglTestCase_020096_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020096_2 "ndom.basic_expression.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020096, VkglTestCase_020096_1, VkglTestCase_020096_2);

#define VkglTestCase_020097_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020097_2 "ndom.basic_expression.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020097, VkglTestCase_020097_1, VkglTestCase_020097_2);

#define VkglTestCase_020098_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020098_2 "ndom.basic_expression.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020098, VkglTestCase_020098_1, VkglTestCase_020098_2);

#define VkglTestCase_020099_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020099_2 "ndom.basic_expression.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020099, VkglTestCase_020099_1, VkglTestCase_020099_2);

#define VkglTestCase_020100_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020100_2 "ndom.basic_expression.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020100, VkglTestCase_020100_1, VkglTestCase_020100_2);

#define VkglTestCase_020101_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020101_2 "ndom.basic_expression.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020101, VkglTestCase_020101_1, VkglTestCase_020101_2);

#define VkglTestCase_020102_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020102_2 "ndom.basic_expression.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020102, VkglTestCase_020102_1, VkglTestCase_020102_2);

#define VkglTestCase_020103_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020103_2 "ndom.basic_expression.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020103, VkglTestCase_020103_1, VkglTestCase_020103_2);

#define VkglTestCase_020104_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020104_2 "ndom.basic_expression.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020104, VkglTestCase_020104_1, VkglTestCase_020104_2);

#define VkglTestCase_020105_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020105_2 "ndom.basic_expression.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020105, VkglTestCase_020105_1, VkglTestCase_020105_2);

#define VkglTestCase_020106_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020106_2 "ndom.basic_expression.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020106, VkglTestCase_020106_1, VkglTestCase_020106_2);

#define VkglTestCase_020107_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020107_2 "ndom.basic_expression.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020107, VkglTestCase_020107_1, VkglTestCase_020107_2);

#define VkglTestCase_020108_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020108_2 "ndom.basic_expression.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020108, VkglTestCase_020108_1, VkglTestCase_020108_2);

#define VkglTestCase_020109_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020109_2 "ndom.basic_expression.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020109, VkglTestCase_020109_1, VkglTestCase_020109_2);

#define VkglTestCase_020110_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020110_2 "ndom.basic_expression.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020110, VkglTestCase_020110_1, VkglTestCase_020110_2);

#define VkglTestCase_020111_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020111_2 "ndom.basic_expression.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020111, VkglTestCase_020111_1, VkglTestCase_020111_2);

#define VkglTestCase_020112_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020112_2 "ndom.basic_expression.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020112, VkglTestCase_020112_1, VkglTestCase_020112_2);

#define VkglTestCase_020113_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020113_2 "ndom.basic_expression.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020113, VkglTestCase_020113_1, VkglTestCase_020113_2);

#define VkglTestCase_020114_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020114_2 "ndom.basic_expression.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020114, VkglTestCase_020114_1, VkglTestCase_020114_2);

#define VkglTestCase_020115_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020115_2 "ndom.basic_expression.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020115, VkglTestCase_020115_1, VkglTestCase_020115_2);

#define VkglTestCase_020116_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020116_2 "ndom.basic_expression.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020116, VkglTestCase_020116_1, VkglTestCase_020116_2);

#define VkglTestCase_020117_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020117_2 "ndom.basic_expression.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020117, VkglTestCase_020117_1, VkglTestCase_020117_2);

#define VkglTestCase_020118_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020118_2 "ndom.basic_expression.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020118, VkglTestCase_020118_1, VkglTestCase_020118_2);

#define VkglTestCase_020119_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020119_2 "ndom.basic_expression.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020119, VkglTestCase_020119_1, VkglTestCase_020119_2);

#define VkglTestCase_020120_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020120_2 "ndom.basic_expression.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020120, VkglTestCase_020120_1, VkglTestCase_020120_2);

#define VkglTestCase_020121_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020121_2 "ndom.basic_expression.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020121, VkglTestCase_020121_1, VkglTestCase_020121_2);

#define VkglTestCase_020122_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020122_2 "ndom.basic_expression.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020122, VkglTestCase_020122_1, VkglTestCase_020122_2);

#define VkglTestCase_020123_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020123_2 "ndom.basic_expression.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020123, VkglTestCase_020123_1, VkglTestCase_020123_2);

#define VkglTestCase_020124_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020124_2 "ndom.basic_expression.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020124, VkglTestCase_020124_1, VkglTestCase_020124_2);

#define VkglTestCase_020125_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020125_2 "ndom.basic_expression.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020125, VkglTestCase_020125_1, VkglTestCase_020125_2);

#define VkglTestCase_020126_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020126_2 "ndom.basic_expression.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020126, VkglTestCase_020126_1, VkglTestCase_020126_2);

#define VkglTestCase_020127_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020127_2 "ndom.basic_expression.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020127, VkglTestCase_020127_1, VkglTestCase_020127_2);

#define VkglTestCase_020128_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020128_2 "ndom.basic_expression.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020128, VkglTestCase_020128_1, VkglTestCase_020128_2);

#define VkglTestCase_020129_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020129_2 "ndom.basic_expression.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020129, VkglTestCase_020129_1, VkglTestCase_020129_2);

#define VkglTestCase_020130_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020130_2 "ndom.basic_expression.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020130, VkglTestCase_020130_1, VkglTestCase_020130_2);

#define VkglTestCase_020131_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020131_2 "ndom.basic_expression.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020131, VkglTestCase_020131_1, VkglTestCase_020131_2);

#define VkglTestCase_020132_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020132_2 "ndom.basic_expression.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020132, VkglTestCase_020132_1, VkglTestCase_020132_2);

#define VkglTestCase_020133_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020133_2 "ndom.basic_expression.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020133, VkglTestCase_020133_1, VkglTestCase_020133_2);

#define VkglTestCase_020134_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020134_2 "ndom.basic_expression.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020134, VkglTestCase_020134_1, VkglTestCase_020134_2);

#define VkglTestCase_020135_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020135_2 "ndom.basic_expression.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020135, VkglTestCase_020135_1, VkglTestCase_020135_2);

#define VkglTestCase_020136_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020136_2 "ndom.basic_expression.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020136, VkglTestCase_020136_1, VkglTestCase_020136_2);

#define VkglTestCase_020137_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020137_2 "ndom.basic_expression.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020137, VkglTestCase_020137_1, VkglTestCase_020137_2);

#define VkglTestCase_020138_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020138_2 "ndom.basic_expression.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020138, VkglTestCase_020138_1, VkglTestCase_020138_2);

#define VkglTestCase_020139_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020139_2 "ndom.basic_expression.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020139, VkglTestCase_020139_1, VkglTestCase_020139_2);

#define VkglTestCase_020140_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020140_2 "ndom.basic_expression.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020140, VkglTestCase_020140_1, VkglTestCase_020140_2);

#define VkglTestCase_020141_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020141_2 "ndom.basic_expression.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020141, VkglTestCase_020141_1, VkglTestCase_020141_2);

#define VkglTestCase_020142_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020142_2 "ndom.basic_expression.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020142, VkglTestCase_020142_1, VkglTestCase_020142_2);

#define VkglTestCase_020143_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020143_2 "ndom.basic_expression.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020143, VkglTestCase_020143_1, VkglTestCase_020143_2);

#define VkglTestCase_020144_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020144_2 "ndom.basic_expression.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020144, VkglTestCase_020144_1, VkglTestCase_020144_2);

#define VkglTestCase_020145_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020145_2 "ndom.basic_expression.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020145, VkglTestCase_020145_1, VkglTestCase_020145_2);

#define VkglTestCase_020146_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020146_2 "ndom.basic_expression.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020146, VkglTestCase_020146_1, VkglTestCase_020146_2);

#define VkglTestCase_020147_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020147_2 "ndom.basic_expression.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020147, VkglTestCase_020147_1, VkglTestCase_020147_2);

#define VkglTestCase_020148_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020148_2 "ndom.basic_expression.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020148, VkglTestCase_020148_1, VkglTestCase_020148_2);

#define VkglTestCase_020149_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020149_2 "ndom.basic_expression.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020149, VkglTestCase_020149_1, VkglTestCase_020149_2);

#define VkglTestCase_020150_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020150_2 "ndom.basic_expression.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020150, VkglTestCase_020150_1, VkglTestCase_020150_2);

#define VkglTestCase_020151_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020151_2 "ndom.basic_expression.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020151, VkglTestCase_020151_1, VkglTestCase_020151_2);

#define VkglTestCase_020152_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020152_2 "ndom.basic_expression.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020152, VkglTestCase_020152_1, VkglTestCase_020152_2);

#define VkglTestCase_020153_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020153_2 "ndom.basic_expression.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020153, VkglTestCase_020153_1, VkglTestCase_020153_2);

#define VkglTestCase_020154_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020154_2 "ndom.basic_expression.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020154, VkglTestCase_020154_1, VkglTestCase_020154_2);

#define VkglTestCase_020155_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020155_2 "ndom.basic_expression.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020155, VkglTestCase_020155_1, VkglTestCase_020155_2);

#define VkglTestCase_020156_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020156_2 "ndom.basic_expression.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020156, VkglTestCase_020156_1, VkglTestCase_020156_2);

#define VkglTestCase_020157_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020157_2 "ndom.basic_expression.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020157, VkglTestCase_020157_1, VkglTestCase_020157_2);

#define VkglTestCase_020158_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020158_2 "ndom.basic_expression.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020158, VkglTestCase_020158_1, VkglTestCase_020158_2);

#define VkglTestCase_020159_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020159_2 "ndom.basic_expression.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020159, VkglTestCase_020159_1, VkglTestCase_020159_2);

#define VkglTestCase_020160_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020160_2 "ndom.basic_expression.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020160, VkglTestCase_020160_1, VkglTestCase_020160_2);

#define VkglTestCase_020161_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020161_2 "ndom.basic_expression.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020161, VkglTestCase_020161_1, VkglTestCase_020161_2);

#define VkglTestCase_020162_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020162_2 "ndom.basic_expression.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020162, VkglTestCase_020162_1, VkglTestCase_020162_2);

#define VkglTestCase_020163_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020163_2 "ndom.basic_expression.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020163, VkglTestCase_020163_1, VkglTestCase_020163_2);

#define VkglTestCase_020164_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020164_2 "ndom.basic_expression.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020164, VkglTestCase_020164_1, VkglTestCase_020164_2);

#define VkglTestCase_020165_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020165_2 "ndom.basic_expression.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020165, VkglTestCase_020165_1, VkglTestCase_020165_2);

#define VkglTestCase_020166_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020166_2 "ndom.basic_expression.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020166, VkglTestCase_020166_1, VkglTestCase_020166_2);

#define VkglTestCase_020167_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020167_2 "ndom.basic_expression.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020167, VkglTestCase_020167_1, VkglTestCase_020167_2);

#define VkglTestCase_020168_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020168_2 "ndom.basic_expression.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020168, VkglTestCase_020168_1, VkglTestCase_020168_2);

#define VkglTestCase_020169_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020169_2 "ndom.basic_expression.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020169, VkglTestCase_020169_1, VkglTestCase_020169_2);

#define VkglTestCase_020170_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020170_2 "ndom.basic_expression.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020170, VkglTestCase_020170_1, VkglTestCase_020170_2);

#define VkglTestCase_020171_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020171_2 "ndom.basic_expression.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020171, VkglTestCase_020171_1, VkglTestCase_020171_2);

#define VkglTestCase_020172_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020172_2 "ndom.basic_expression.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020172, VkglTestCase_020172_1, VkglTestCase_020172_2);

#define VkglTestCase_020173_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020173_2 "ndom.basic_expression.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020173, VkglTestCase_020173_1, VkglTestCase_020173_2);

#define VkglTestCase_020174_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020174_2 "ndom.basic_expression.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020174, VkglTestCase_020174_1, VkglTestCase_020174_2);

#define VkglTestCase_020175_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020175_2 "ndom.basic_expression.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020175, VkglTestCase_020175_1, VkglTestCase_020175_2);

#define VkglTestCase_020176_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020176_2 "ndom.basic_expression.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020176, VkglTestCase_020176_1, VkglTestCase_020176_2);

#define VkglTestCase_020177_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020177_2 "ndom.basic_expression.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020177, VkglTestCase_020177_1, VkglTestCase_020177_2);

#define VkglTestCase_020178_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020178_2 "ndom.basic_expression.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020178, VkglTestCase_020178_1, VkglTestCase_020178_2);

#define VkglTestCase_020179_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020179_2 "ndom.basic_expression.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020179, VkglTestCase_020179_1, VkglTestCase_020179_2);

#define VkglTestCase_020180_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020180_2 "ndom.basic_expression.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020180, VkglTestCase_020180_1, VkglTestCase_020180_2);

#define VkglTestCase_020181_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020181_2 "ndom.basic_expression.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020181, VkglTestCase_020181_1, VkglTestCase_020181_2);

#define VkglTestCase_020182_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020182_2 "ndom.basic_expression.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020182, VkglTestCase_020182_1, VkglTestCase_020182_2);

#define VkglTestCase_020183_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020183_2 "ndom.basic_expression.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020183, VkglTestCase_020183_1, VkglTestCase_020183_2);

#define VkglTestCase_020184_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020184_2 "ndom.basic_expression.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020184, VkglTestCase_020184_1, VkglTestCase_020184_2);

#define VkglTestCase_020185_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020185_2 "ndom.basic_expression.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020185, VkglTestCase_020185_1, VkglTestCase_020185_2);

#define VkglTestCase_020186_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020186_2 "ndom.basic_expression.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020186, VkglTestCase_020186_1, VkglTestCase_020186_2);

#define VkglTestCase_020187_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020187_2 "ndom.basic_expression.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020187, VkglTestCase_020187_1, VkglTestCase_020187_2);

#define VkglTestCase_020188_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020188_2 "ndom.basic_expression.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020188, VkglTestCase_020188_1, VkglTestCase_020188_2);

#define VkglTestCase_020189_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020189_2 "ndom.basic_expression.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020189, VkglTestCase_020189_1, VkglTestCase_020189_2);

#define VkglTestCase_020190_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020190_2 "ndom.basic_expression.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020190, VkglTestCase_020190_1, VkglTestCase_020190_2);

#define VkglTestCase_020191_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020191_2 "ndom.basic_expression.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020191, VkglTestCase_020191_1, VkglTestCase_020191_2);

#define VkglTestCase_020192_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020192_2 "ndom.basic_expression.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020192, VkglTestCase_020192_1, VkglTestCase_020192_2);

#define VkglTestCase_020193_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020193_2 "ndom.basic_expression.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020193, VkglTestCase_020193_1, VkglTestCase_020193_2);
