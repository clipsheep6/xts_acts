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
#include "../ActsDeqpgles30045TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_044094_1 "dEQP-GLES3.functi"
#define VkglTestCase_044094_2 "onal.draw.random.0"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044094, VkglTestCase_044094_1, VkglTestCase_044094_2);

#define VkglTestCase_044095_1 "dEQP-GLES3.functi"
#define VkglTestCase_044095_2 "onal.draw.random.2"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044095, VkglTestCase_044095_1, VkglTestCase_044095_2);

#define VkglTestCase_044096_1 "dEQP-GLES3.functi"
#define VkglTestCase_044096_2 "onal.draw.random.5"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044096, VkglTestCase_044096_1, VkglTestCase_044096_2);

#define VkglTestCase_044097_1 "dEQP-GLES3.functi"
#define VkglTestCase_044097_2 "onal.draw.random.7"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044097, VkglTestCase_044097_1, VkglTestCase_044097_2);

#define VkglTestCase_044098_1 "dEQP-GLES3.functi"
#define VkglTestCase_044098_2 "onal.draw.random.9"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044098, VkglTestCase_044098_1, VkglTestCase_044098_2);

#define VkglTestCase_044099_1 "dEQP-GLES3.functio"
#define VkglTestCase_044099_2 "nal.draw.random.11"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044099, VkglTestCase_044099_1, VkglTestCase_044099_2);

#define VkglTestCase_044100_1 "dEQP-GLES3.functio"
#define VkglTestCase_044100_2 "nal.draw.random.12"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044100, VkglTestCase_044100_1, VkglTestCase_044100_2);

#define VkglTestCase_044101_1 "dEQP-GLES3.functio"
#define VkglTestCase_044101_2 "nal.draw.random.14"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044101, VkglTestCase_044101_1, VkglTestCase_044101_2);

#define VkglTestCase_044102_1 "dEQP-GLES3.functio"
#define VkglTestCase_044102_2 "nal.draw.random.15"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044102, VkglTestCase_044102_1, VkglTestCase_044102_2);

#define VkglTestCase_044103_1 "dEQP-GLES3.functio"
#define VkglTestCase_044103_2 "nal.draw.random.16"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044103, VkglTestCase_044103_1, VkglTestCase_044103_2);

#define VkglTestCase_044104_1 "dEQP-GLES3.functio"
#define VkglTestCase_044104_2 "nal.draw.random.17"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044104, VkglTestCase_044104_1, VkglTestCase_044104_2);

#define VkglTestCase_044105_1 "dEQP-GLES3.functio"
#define VkglTestCase_044105_2 "nal.draw.random.18"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044105, VkglTestCase_044105_1, VkglTestCase_044105_2);

#define VkglTestCase_044106_1 "dEQP-GLES3.functio"
#define VkglTestCase_044106_2 "nal.draw.random.19"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044106, VkglTestCase_044106_1, VkglTestCase_044106_2);

#define VkglTestCase_044107_1 "dEQP-GLES3.functio"
#define VkglTestCase_044107_2 "nal.draw.random.20"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044107, VkglTestCase_044107_1, VkglTestCase_044107_2);

#define VkglTestCase_044108_1 "dEQP-GLES3.functio"
#define VkglTestCase_044108_2 "nal.draw.random.21"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044108, VkglTestCase_044108_1, VkglTestCase_044108_2);

#define VkglTestCase_044109_1 "dEQP-GLES3.functio"
#define VkglTestCase_044109_2 "nal.draw.random.23"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044109, VkglTestCase_044109_1, VkglTestCase_044109_2);

#define VkglTestCase_044110_1 "dEQP-GLES3.functio"
#define VkglTestCase_044110_2 "nal.draw.random.25"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044110, VkglTestCase_044110_1, VkglTestCase_044110_2);

#define VkglTestCase_044111_1 "dEQP-GLES3.functio"
#define VkglTestCase_044111_2 "nal.draw.random.27"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044111, VkglTestCase_044111_1, VkglTestCase_044111_2);

#define VkglTestCase_044112_1 "dEQP-GLES3.functio"
#define VkglTestCase_044112_2 "nal.draw.random.29"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044112, VkglTestCase_044112_1, VkglTestCase_044112_2);

#define VkglTestCase_044113_1 "dEQP-GLES3.functio"
#define VkglTestCase_044113_2 "nal.draw.random.30"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044113, VkglTestCase_044113_1, VkglTestCase_044113_2);

#define VkglTestCase_044114_1 "dEQP-GLES3.functio"
#define VkglTestCase_044114_2 "nal.draw.random.31"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044114, VkglTestCase_044114_1, VkglTestCase_044114_2);

#define VkglTestCase_044115_1 "dEQP-GLES3.functio"
#define VkglTestCase_044115_2 "nal.draw.random.32"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044115, VkglTestCase_044115_1, VkglTestCase_044115_2);

#define VkglTestCase_044116_1 "dEQP-GLES3.functio"
#define VkglTestCase_044116_2 "nal.draw.random.33"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044116, VkglTestCase_044116_1, VkglTestCase_044116_2);

#define VkglTestCase_044117_1 "dEQP-GLES3.functio"
#define VkglTestCase_044117_2 "nal.draw.random.36"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044117, VkglTestCase_044117_1, VkglTestCase_044117_2);

#define VkglTestCase_044118_1 "dEQP-GLES3.functio"
#define VkglTestCase_044118_2 "nal.draw.random.37"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044118, VkglTestCase_044118_1, VkglTestCase_044118_2);

#define VkglTestCase_044119_1 "dEQP-GLES3.functio"
#define VkglTestCase_044119_2 "nal.draw.random.38"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044119, VkglTestCase_044119_1, VkglTestCase_044119_2);

#define VkglTestCase_044120_1 "dEQP-GLES3.functio"
#define VkglTestCase_044120_2 "nal.draw.random.39"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044120, VkglTestCase_044120_1, VkglTestCase_044120_2);

#define VkglTestCase_044121_1 "dEQP-GLES3.functio"
#define VkglTestCase_044121_2 "nal.draw.random.40"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044121, VkglTestCase_044121_1, VkglTestCase_044121_2);

#define VkglTestCase_044122_1 "dEQP-GLES3.functio"
#define VkglTestCase_044122_2 "nal.draw.random.41"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044122, VkglTestCase_044122_1, VkglTestCase_044122_2);

#define VkglTestCase_044123_1 "dEQP-GLES3.functio"
#define VkglTestCase_044123_2 "nal.draw.random.42"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044123, VkglTestCase_044123_1, VkglTestCase_044123_2);

#define VkglTestCase_044124_1 "dEQP-GLES3.functio"
#define VkglTestCase_044124_2 "nal.draw.random.43"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044124, VkglTestCase_044124_1, VkglTestCase_044124_2);

#define VkglTestCase_044125_1 "dEQP-GLES3.functio"
#define VkglTestCase_044125_2 "nal.draw.random.44"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044125, VkglTestCase_044125_1, VkglTestCase_044125_2);

#define VkglTestCase_044126_1 "dEQP-GLES3.functio"
#define VkglTestCase_044126_2 "nal.draw.random.45"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044126, VkglTestCase_044126_1, VkglTestCase_044126_2);

#define VkglTestCase_044127_1 "dEQP-GLES3.functio"
#define VkglTestCase_044127_2 "nal.draw.random.48"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044127, VkglTestCase_044127_1, VkglTestCase_044127_2);

#define VkglTestCase_044128_1 "dEQP-GLES3.functio"
#define VkglTestCase_044128_2 "nal.draw.random.49"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044128, VkglTestCase_044128_1, VkglTestCase_044128_2);

#define VkglTestCase_044129_1 "dEQP-GLES3.functio"
#define VkglTestCase_044129_2 "nal.draw.random.50"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044129, VkglTestCase_044129_1, VkglTestCase_044129_2);

#define VkglTestCase_044130_1 "dEQP-GLES3.functio"
#define VkglTestCase_044130_2 "nal.draw.random.51"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044130, VkglTestCase_044130_1, VkglTestCase_044130_2);

#define VkglTestCase_044131_1 "dEQP-GLES3.functio"
#define VkglTestCase_044131_2 "nal.draw.random.52"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044131, VkglTestCase_044131_1, VkglTestCase_044131_2);

#define VkglTestCase_044132_1 "dEQP-GLES3.functio"
#define VkglTestCase_044132_2 "nal.draw.random.55"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044132, VkglTestCase_044132_1, VkglTestCase_044132_2);

#define VkglTestCase_044133_1 "dEQP-GLES3.functio"
#define VkglTestCase_044133_2 "nal.draw.random.56"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044133, VkglTestCase_044133_1, VkglTestCase_044133_2);

#define VkglTestCase_044134_1 "dEQP-GLES3.functio"
#define VkglTestCase_044134_2 "nal.draw.random.57"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044134, VkglTestCase_044134_1, VkglTestCase_044134_2);

#define VkglTestCase_044135_1 "dEQP-GLES3.functio"
#define VkglTestCase_044135_2 "nal.draw.random.58"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044135, VkglTestCase_044135_1, VkglTestCase_044135_2);

#define VkglTestCase_044136_1 "dEQP-GLES3.functio"
#define VkglTestCase_044136_2 "nal.draw.random.60"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044136, VkglTestCase_044136_1, VkglTestCase_044136_2);

#define VkglTestCase_044137_1 "dEQP-GLES3.functio"
#define VkglTestCase_044137_2 "nal.draw.random.61"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044137, VkglTestCase_044137_1, VkglTestCase_044137_2);

#define VkglTestCase_044138_1 "dEQP-GLES3.functio"
#define VkglTestCase_044138_2 "nal.draw.random.63"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044138, VkglTestCase_044138_1, VkglTestCase_044138_2);

#define VkglTestCase_044139_1 "dEQP-GLES3.functio"
#define VkglTestCase_044139_2 "nal.draw.random.68"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044139, VkglTestCase_044139_1, VkglTestCase_044139_2);

#define VkglTestCase_044140_1 "dEQP-GLES3.functio"
#define VkglTestCase_044140_2 "nal.draw.random.69"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044140, VkglTestCase_044140_1, VkglTestCase_044140_2);

#define VkglTestCase_044141_1 "dEQP-GLES3.functio"
#define VkglTestCase_044141_2 "nal.draw.random.70"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044141, VkglTestCase_044141_1, VkglTestCase_044141_2);

#define VkglTestCase_044142_1 "dEQP-GLES3.functio"
#define VkglTestCase_044142_2 "nal.draw.random.71"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044142, VkglTestCase_044142_1, VkglTestCase_044142_2);

#define VkglTestCase_044143_1 "dEQP-GLES3.functio"
#define VkglTestCase_044143_2 "nal.draw.random.72"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044143, VkglTestCase_044143_1, VkglTestCase_044143_2);

#define VkglTestCase_044144_1 "dEQP-GLES3.functio"
#define VkglTestCase_044144_2 "nal.draw.random.73"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044144, VkglTestCase_044144_1, VkglTestCase_044144_2);

#define VkglTestCase_044145_1 "dEQP-GLES3.functio"
#define VkglTestCase_044145_2 "nal.draw.random.74"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044145, VkglTestCase_044145_1, VkglTestCase_044145_2);

#define VkglTestCase_044146_1 "dEQP-GLES3.functio"
#define VkglTestCase_044146_2 "nal.draw.random.77"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044146, VkglTestCase_044146_1, VkglTestCase_044146_2);

#define VkglTestCase_044147_1 "dEQP-GLES3.functio"
#define VkglTestCase_044147_2 "nal.draw.random.78"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044147, VkglTestCase_044147_1, VkglTestCase_044147_2);

#define VkglTestCase_044148_1 "dEQP-GLES3.functio"
#define VkglTestCase_044148_2 "nal.draw.random.80"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044148, VkglTestCase_044148_1, VkglTestCase_044148_2);

#define VkglTestCase_044149_1 "dEQP-GLES3.functio"
#define VkglTestCase_044149_2 "nal.draw.random.81"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044149, VkglTestCase_044149_1, VkglTestCase_044149_2);

#define VkglTestCase_044150_1 "dEQP-GLES3.functio"
#define VkglTestCase_044150_2 "nal.draw.random.82"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044150, VkglTestCase_044150_1, VkglTestCase_044150_2);

#define VkglTestCase_044151_1 "dEQP-GLES3.functio"
#define VkglTestCase_044151_2 "nal.draw.random.83"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044151, VkglTestCase_044151_1, VkglTestCase_044151_2);

#define VkglTestCase_044152_1 "dEQP-GLES3.functio"
#define VkglTestCase_044152_2 "nal.draw.random.84"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044152, VkglTestCase_044152_1, VkglTestCase_044152_2);

#define VkglTestCase_044153_1 "dEQP-GLES3.functio"
#define VkglTestCase_044153_2 "nal.draw.random.85"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044153, VkglTestCase_044153_1, VkglTestCase_044153_2);

#define VkglTestCase_044154_1 "dEQP-GLES3.functio"
#define VkglTestCase_044154_2 "nal.draw.random.86"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044154, VkglTestCase_044154_1, VkglTestCase_044154_2);

#define VkglTestCase_044155_1 "dEQP-GLES3.functio"
#define VkglTestCase_044155_2 "nal.draw.random.87"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044155, VkglTestCase_044155_1, VkglTestCase_044155_2);

#define VkglTestCase_044156_1 "dEQP-GLES3.functio"
#define VkglTestCase_044156_2 "nal.draw.random.88"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044156, VkglTestCase_044156_1, VkglTestCase_044156_2);

#define VkglTestCase_044157_1 "dEQP-GLES3.functio"
#define VkglTestCase_044157_2 "nal.draw.random.89"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044157, VkglTestCase_044157_1, VkglTestCase_044157_2);

#define VkglTestCase_044158_1 "dEQP-GLES3.functio"
#define VkglTestCase_044158_2 "nal.draw.random.90"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044158, VkglTestCase_044158_1, VkglTestCase_044158_2);

#define VkglTestCase_044159_1 "dEQP-GLES3.functio"
#define VkglTestCase_044159_2 "nal.draw.random.91"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044159, VkglTestCase_044159_1, VkglTestCase_044159_2);

#define VkglTestCase_044160_1 "dEQP-GLES3.functio"
#define VkglTestCase_044160_2 "nal.draw.random.92"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044160, VkglTestCase_044160_1, VkglTestCase_044160_2);

#define VkglTestCase_044161_1 "dEQP-GLES3.functio"
#define VkglTestCase_044161_2 "nal.draw.random.93"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044161, VkglTestCase_044161_1, VkglTestCase_044161_2);

#define VkglTestCase_044162_1 "dEQP-GLES3.functio"
#define VkglTestCase_044162_2 "nal.draw.random.94"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044162, VkglTestCase_044162_1, VkglTestCase_044162_2);

#define VkglTestCase_044163_1 "dEQP-GLES3.functio"
#define VkglTestCase_044163_2 "nal.draw.random.95"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044163, VkglTestCase_044163_1, VkglTestCase_044163_2);

#define VkglTestCase_044164_1 "dEQP-GLES3.functio"
#define VkglTestCase_044164_2 "nal.draw.random.96"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044164, VkglTestCase_044164_1, VkglTestCase_044164_2);

#define VkglTestCase_044165_1 "dEQP-GLES3.functio"
#define VkglTestCase_044165_2 "nal.draw.random.97"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044165, VkglTestCase_044165_1, VkglTestCase_044165_2);

#define VkglTestCase_044166_1 "dEQP-GLES3.functio"
#define VkglTestCase_044166_2 "nal.draw.random.101"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044166, VkglTestCase_044166_1, VkglTestCase_044166_2);

#define VkglTestCase_044167_1 "dEQP-GLES3.functio"
#define VkglTestCase_044167_2 "nal.draw.random.103"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044167, VkglTestCase_044167_1, VkglTestCase_044167_2);

#define VkglTestCase_044168_1 "dEQP-GLES3.functio"
#define VkglTestCase_044168_2 "nal.draw.random.104"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044168, VkglTestCase_044168_1, VkglTestCase_044168_2);

#define VkglTestCase_044169_1 "dEQP-GLES3.functio"
#define VkglTestCase_044169_2 "nal.draw.random.105"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044169, VkglTestCase_044169_1, VkglTestCase_044169_2);

#define VkglTestCase_044170_1 "dEQP-GLES3.functio"
#define VkglTestCase_044170_2 "nal.draw.random.106"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044170, VkglTestCase_044170_1, VkglTestCase_044170_2);

#define VkglTestCase_044171_1 "dEQP-GLES3.functio"
#define VkglTestCase_044171_2 "nal.draw.random.107"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044171, VkglTestCase_044171_1, VkglTestCase_044171_2);

#define VkglTestCase_044172_1 "dEQP-GLES3.functio"
#define VkglTestCase_044172_2 "nal.draw.random.108"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044172, VkglTestCase_044172_1, VkglTestCase_044172_2);

#define VkglTestCase_044173_1 "dEQP-GLES3.functio"
#define VkglTestCase_044173_2 "nal.draw.random.109"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044173, VkglTestCase_044173_1, VkglTestCase_044173_2);

#define VkglTestCase_044174_1 "dEQP-GLES3.functio"
#define VkglTestCase_044174_2 "nal.draw.random.112"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044174, VkglTestCase_044174_1, VkglTestCase_044174_2);

#define VkglTestCase_044175_1 "dEQP-GLES3.functio"
#define VkglTestCase_044175_2 "nal.draw.random.113"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044175, VkglTestCase_044175_1, VkglTestCase_044175_2);

#define VkglTestCase_044176_1 "dEQP-GLES3.functio"
#define VkglTestCase_044176_2 "nal.draw.random.114"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044176, VkglTestCase_044176_1, VkglTestCase_044176_2);

#define VkglTestCase_044177_1 "dEQP-GLES3.functio"
#define VkglTestCase_044177_2 "nal.draw.random.115"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044177, VkglTestCase_044177_1, VkglTestCase_044177_2);

#define VkglTestCase_044178_1 "dEQP-GLES3.functio"
#define VkglTestCase_044178_2 "nal.draw.random.116"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044178, VkglTestCase_044178_1, VkglTestCase_044178_2);

#define VkglTestCase_044179_1 "dEQP-GLES3.functio"
#define VkglTestCase_044179_2 "nal.draw.random.117"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044179, VkglTestCase_044179_1, VkglTestCase_044179_2);

#define VkglTestCase_044180_1 "dEQP-GLES3.functio"
#define VkglTestCase_044180_2 "nal.draw.random.118"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044180, VkglTestCase_044180_1, VkglTestCase_044180_2);

#define VkglTestCase_044181_1 "dEQP-GLES3.functio"
#define VkglTestCase_044181_2 "nal.draw.random.119"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044181, VkglTestCase_044181_1, VkglTestCase_044181_2);

#define VkglTestCase_044182_1 "dEQP-GLES3.functio"
#define VkglTestCase_044182_2 "nal.draw.random.120"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044182, VkglTestCase_044182_1, VkglTestCase_044182_2);

#define VkglTestCase_044183_1 "dEQP-GLES3.functio"
#define VkglTestCase_044183_2 "nal.draw.random.124"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044183, VkglTestCase_044183_1, VkglTestCase_044183_2);

#define VkglTestCase_044184_1 "dEQP-GLES3.functio"
#define VkglTestCase_044184_2 "nal.draw.random.125"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044184, VkglTestCase_044184_1, VkglTestCase_044184_2);

#define VkglTestCase_044185_1 "dEQP-GLES3.functio"
#define VkglTestCase_044185_2 "nal.draw.random.126"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044185, VkglTestCase_044185_1, VkglTestCase_044185_2);

#define VkglTestCase_044186_1 "dEQP-GLES3.functio"
#define VkglTestCase_044186_2 "nal.draw.random.127"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044186, VkglTestCase_044186_1, VkglTestCase_044186_2);

#define VkglTestCase_044187_1 "dEQP-GLES3.functio"
#define VkglTestCase_044187_2 "nal.draw.random.129"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044187, VkglTestCase_044187_1, VkglTestCase_044187_2);

#define VkglTestCase_044188_1 "dEQP-GLES3.functio"
#define VkglTestCase_044188_2 "nal.draw.random.131"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044188, VkglTestCase_044188_1, VkglTestCase_044188_2);

#define VkglTestCase_044189_1 "dEQP-GLES3.functio"
#define VkglTestCase_044189_2 "nal.draw.random.132"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044189, VkglTestCase_044189_1, VkglTestCase_044189_2);

#define VkglTestCase_044190_1 "dEQP-GLES3.functio"
#define VkglTestCase_044190_2 "nal.draw.random.135"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044190, VkglTestCase_044190_1, VkglTestCase_044190_2);

#define VkglTestCase_044191_1 "dEQP-GLES3.functio"
#define VkglTestCase_044191_2 "nal.draw.random.136"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044191, VkglTestCase_044191_1, VkglTestCase_044191_2);

#define VkglTestCase_044192_1 "dEQP-GLES3.functio"
#define VkglTestCase_044192_2 "nal.draw.random.138"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044192, VkglTestCase_044192_1, VkglTestCase_044192_2);

#define VkglTestCase_044193_1 "dEQP-GLES3.functio"
#define VkglTestCase_044193_2 "nal.draw.random.140"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044193, VkglTestCase_044193_1, VkglTestCase_044193_2);

#define VkglTestCase_044194_1 "dEQP-GLES3.functio"
#define VkglTestCase_044194_2 "nal.draw.random.141"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044194, VkglTestCase_044194_1, VkglTestCase_044194_2);

#define VkglTestCase_044195_1 "dEQP-GLES3.functio"
#define VkglTestCase_044195_2 "nal.draw.random.142"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044195, VkglTestCase_044195_1, VkglTestCase_044195_2);

#define VkglTestCase_044196_1 "dEQP-GLES3.functio"
#define VkglTestCase_044196_2 "nal.draw.random.143"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044196, VkglTestCase_044196_1, VkglTestCase_044196_2);

#define VkglTestCase_044197_1 "dEQP-GLES3.functio"
#define VkglTestCase_044197_2 "nal.draw.random.144"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044197, VkglTestCase_044197_1, VkglTestCase_044197_2);

#define VkglTestCase_044198_1 "dEQP-GLES3.functio"
#define VkglTestCase_044198_2 "nal.draw.random.145"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044198, VkglTestCase_044198_1, VkglTestCase_044198_2);

#define VkglTestCase_044199_1 "dEQP-GLES3.functio"
#define VkglTestCase_044199_2 "nal.draw.random.146"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044199, VkglTestCase_044199_1, VkglTestCase_044199_2);

#define VkglTestCase_044200_1 "dEQP-GLES3.functio"
#define VkglTestCase_044200_2 "nal.draw.random.148"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044200, VkglTestCase_044200_1, VkglTestCase_044200_2);

#define VkglTestCase_044201_1 "dEQP-GLES3.functio"
#define VkglTestCase_044201_2 "nal.draw.random.149"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044201, VkglTestCase_044201_1, VkglTestCase_044201_2);

#define VkglTestCase_044202_1 "dEQP-GLES3.functio"
#define VkglTestCase_044202_2 "nal.draw.random.150"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044202, VkglTestCase_044202_1, VkglTestCase_044202_2);

#define VkglTestCase_044203_1 "dEQP-GLES3.functio"
#define VkglTestCase_044203_2 "nal.draw.random.151"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044203, VkglTestCase_044203_1, VkglTestCase_044203_2);

#define VkglTestCase_044204_1 "dEQP-GLES3.functio"
#define VkglTestCase_044204_2 "nal.draw.random.154"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044204, VkglTestCase_044204_1, VkglTestCase_044204_2);

#define VkglTestCase_044205_1 "dEQP-GLES3.functio"
#define VkglTestCase_044205_2 "nal.draw.random.155"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044205, VkglTestCase_044205_1, VkglTestCase_044205_2);

#define VkglTestCase_044206_1 "dEQP-GLES3.functio"
#define VkglTestCase_044206_2 "nal.draw.random.156"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044206, VkglTestCase_044206_1, VkglTestCase_044206_2);

#define VkglTestCase_044207_1 "dEQP-GLES3.functio"
#define VkglTestCase_044207_2 "nal.draw.random.158"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044207, VkglTestCase_044207_1, VkglTestCase_044207_2);

#define VkglTestCase_044208_1 "dEQP-GLES3.functio"
#define VkglTestCase_044208_2 "nal.draw.random.159"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044208, VkglTestCase_044208_1, VkglTestCase_044208_2);

#define VkglTestCase_044209_1 "dEQP-GLES3.functio"
#define VkglTestCase_044209_2 "nal.draw.random.161"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044209, VkglTestCase_044209_1, VkglTestCase_044209_2);

#define VkglTestCase_044210_1 "dEQP-GLES3.functio"
#define VkglTestCase_044210_2 "nal.draw.random.162"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044210, VkglTestCase_044210_1, VkglTestCase_044210_2);

#define VkglTestCase_044211_1 "dEQP-GLES3.functio"
#define VkglTestCase_044211_2 "nal.draw.random.164"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044211, VkglTestCase_044211_1, VkglTestCase_044211_2);

#define VkglTestCase_044212_1 "dEQP-GLES3.functio"
#define VkglTestCase_044212_2 "nal.draw.random.165"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044212, VkglTestCase_044212_1, VkglTestCase_044212_2);

#define VkglTestCase_044213_1 "dEQP-GLES3.functio"
#define VkglTestCase_044213_2 "nal.draw.random.166"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044213, VkglTestCase_044213_1, VkglTestCase_044213_2);

#define VkglTestCase_044214_1 "dEQP-GLES3.functio"
#define VkglTestCase_044214_2 "nal.draw.random.167"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044214, VkglTestCase_044214_1, VkglTestCase_044214_2);

#define VkglTestCase_044215_1 "dEQP-GLES3.functio"
#define VkglTestCase_044215_2 "nal.draw.random.169"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044215, VkglTestCase_044215_1, VkglTestCase_044215_2);

#define VkglTestCase_044216_1 "dEQP-GLES3.functio"
#define VkglTestCase_044216_2 "nal.draw.random.170"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044216, VkglTestCase_044216_1, VkglTestCase_044216_2);

#define VkglTestCase_044217_1 "dEQP-GLES3.functio"
#define VkglTestCase_044217_2 "nal.draw.random.171"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044217, VkglTestCase_044217_1, VkglTestCase_044217_2);

#define VkglTestCase_044218_1 "dEQP-GLES3.functio"
#define VkglTestCase_044218_2 "nal.draw.random.173"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044218, VkglTestCase_044218_1, VkglTestCase_044218_2);

#define VkglTestCase_044219_1 "dEQP-GLES3.functio"
#define VkglTestCase_044219_2 "nal.draw.random.174"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044219, VkglTestCase_044219_1, VkglTestCase_044219_2);

#define VkglTestCase_044220_1 "dEQP-GLES3.functio"
#define VkglTestCase_044220_2 "nal.draw.random.175"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044220, VkglTestCase_044220_1, VkglTestCase_044220_2);

#define VkglTestCase_044221_1 "dEQP-GLES3.functio"
#define VkglTestCase_044221_2 "nal.draw.random.177"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044221, VkglTestCase_044221_1, VkglTestCase_044221_2);

#define VkglTestCase_044222_1 "dEQP-GLES3.functio"
#define VkglTestCase_044222_2 "nal.draw.random.178"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044222, VkglTestCase_044222_1, VkglTestCase_044222_2);

#define VkglTestCase_044223_1 "dEQP-GLES3.functio"
#define VkglTestCase_044223_2 "nal.draw.random.179"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044223, VkglTestCase_044223_1, VkglTestCase_044223_2);

#define VkglTestCase_044224_1 "dEQP-GLES3.functio"
#define VkglTestCase_044224_2 "nal.draw.random.180"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044224, VkglTestCase_044224_1, VkglTestCase_044224_2);

#define VkglTestCase_044225_1 "dEQP-GLES3.functio"
#define VkglTestCase_044225_2 "nal.draw.random.181"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044225, VkglTestCase_044225_1, VkglTestCase_044225_2);

#define VkglTestCase_044226_1 "dEQP-GLES3.functio"
#define VkglTestCase_044226_2 "nal.draw.random.183"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044226, VkglTestCase_044226_1, VkglTestCase_044226_2);

#define VkglTestCase_044227_1 "dEQP-GLES3.functio"
#define VkglTestCase_044227_2 "nal.draw.random.184"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044227, VkglTestCase_044227_1, VkglTestCase_044227_2);

#define VkglTestCase_044228_1 "dEQP-GLES3.functio"
#define VkglTestCase_044228_2 "nal.draw.random.185"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044228, VkglTestCase_044228_1, VkglTestCase_044228_2);

#define VkglTestCase_044229_1 "dEQP-GLES3.functio"
#define VkglTestCase_044229_2 "nal.draw.random.186"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044229, VkglTestCase_044229_1, VkglTestCase_044229_2);

#define VkglTestCase_044230_1 "dEQP-GLES3.functio"
#define VkglTestCase_044230_2 "nal.draw.random.187"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044230, VkglTestCase_044230_1, VkglTestCase_044230_2);

#define VkglTestCase_044231_1 "dEQP-GLES3.functio"
#define VkglTestCase_044231_2 "nal.draw.random.188"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044231, VkglTestCase_044231_1, VkglTestCase_044231_2);

#define VkglTestCase_044232_1 "dEQP-GLES3.functio"
#define VkglTestCase_044232_2 "nal.draw.random.191"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044232, VkglTestCase_044232_1, VkglTestCase_044232_2);

#define VkglTestCase_044233_1 "dEQP-GLES3.functio"
#define VkglTestCase_044233_2 "nal.draw.random.192"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044233, VkglTestCase_044233_1, VkglTestCase_044233_2);

#define VkglTestCase_044234_1 "dEQP-GLES3.functio"
#define VkglTestCase_044234_2 "nal.draw.random.196"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044234, VkglTestCase_044234_1, VkglTestCase_044234_2);

#define VkglTestCase_044235_1 "dEQP-GLES3.functio"
#define VkglTestCase_044235_2 "nal.draw.random.197"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044235, VkglTestCase_044235_1, VkglTestCase_044235_2);

#define VkglTestCase_044236_1 "dEQP-GLES3.functio"
#define VkglTestCase_044236_2 "nal.draw.random.198"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044236, VkglTestCase_044236_1, VkglTestCase_044236_2);

#define VkglTestCase_044237_1 "dEQP-GLES3.functio"
#define VkglTestCase_044237_2 "nal.draw.random.200"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044237, VkglTestCase_044237_1, VkglTestCase_044237_2);

#define VkglTestCase_044238_1 "dEQP-GLES3.functio"
#define VkglTestCase_044238_2 "nal.draw.random.202"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044238, VkglTestCase_044238_1, VkglTestCase_044238_2);

#define VkglTestCase_044239_1 "dEQP-GLES3.functio"
#define VkglTestCase_044239_2 "nal.draw.random.204"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044239, VkglTestCase_044239_1, VkglTestCase_044239_2);

#define VkglTestCase_044240_1 "dEQP-GLES3.functio"
#define VkglTestCase_044240_2 "nal.draw.random.205"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044240, VkglTestCase_044240_1, VkglTestCase_044240_2);

#define VkglTestCase_044241_1 "dEQP-GLES3.functio"
#define VkglTestCase_044241_2 "nal.draw.random.206"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044241, VkglTestCase_044241_1, VkglTestCase_044241_2);

#define VkglTestCase_044242_1 "dEQP-GLES3.functio"
#define VkglTestCase_044242_2 "nal.draw.random.207"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044242, VkglTestCase_044242_1, VkglTestCase_044242_2);

#define VkglTestCase_044243_1 "dEQP-GLES3.functio"
#define VkglTestCase_044243_2 "nal.draw.random.208"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044243, VkglTestCase_044243_1, VkglTestCase_044243_2);

#define VkglTestCase_044244_1 "dEQP-GLES3.functio"
#define VkglTestCase_044244_2 "nal.draw.random.209"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044244, VkglTestCase_044244_1, VkglTestCase_044244_2);

#define VkglTestCase_044245_1 "dEQP-GLES3.functio"
#define VkglTestCase_044245_2 "nal.draw.random.210"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044245, VkglTestCase_044245_1, VkglTestCase_044245_2);
