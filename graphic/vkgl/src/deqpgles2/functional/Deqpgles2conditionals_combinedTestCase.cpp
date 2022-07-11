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

#define VkglTestCase_009332_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009332_2 "random.conditionals.combined.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009332, VkglTestCase_009332_1, VkglTestCase_009332_2);

#define VkglTestCase_009333_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009333_2 "random.conditionals.combined.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009333, VkglTestCase_009333_1, VkglTestCase_009333_2);

#define VkglTestCase_009334_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009334_2 "random.conditionals.combined.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009334, VkglTestCase_009334_1, VkglTestCase_009334_2);

#define VkglTestCase_009335_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009335_2 "random.conditionals.combined.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009335, VkglTestCase_009335_1, VkglTestCase_009335_2);

#define VkglTestCase_009336_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009336_2 "random.conditionals.combined.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009336, VkglTestCase_009336_1, VkglTestCase_009336_2);

#define VkglTestCase_009337_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009337_2 "random.conditionals.combined.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009337, VkglTestCase_009337_1, VkglTestCase_009337_2);

#define VkglTestCase_009338_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009338_2 "random.conditionals.combined.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009338, VkglTestCase_009338_1, VkglTestCase_009338_2);

#define VkglTestCase_009339_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009339_2 "random.conditionals.combined.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009339, VkglTestCase_009339_1, VkglTestCase_009339_2);

#define VkglTestCase_009340_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009340_2 "random.conditionals.combined.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009340, VkglTestCase_009340_1, VkglTestCase_009340_2);

#define VkglTestCase_009341_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009341_2 "random.conditionals.combined.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009341, VkglTestCase_009341_1, VkglTestCase_009341_2);

#define VkglTestCase_009342_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009342_2 "random.conditionals.combined.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009342, VkglTestCase_009342_1, VkglTestCase_009342_2);

#define VkglTestCase_009343_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009343_2 "random.conditionals.combined.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009343, VkglTestCase_009343_1, VkglTestCase_009343_2);

#define VkglTestCase_009344_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009344_2 "random.conditionals.combined.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009344, VkglTestCase_009344_1, VkglTestCase_009344_2);

#define VkglTestCase_009345_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009345_2 "random.conditionals.combined.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009345, VkglTestCase_009345_1, VkglTestCase_009345_2);

#define VkglTestCase_009346_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009346_2 "random.conditionals.combined.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009346, VkglTestCase_009346_1, VkglTestCase_009346_2);

#define VkglTestCase_009347_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009347_2 "random.conditionals.combined.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009347, VkglTestCase_009347_1, VkglTestCase_009347_2);

#define VkglTestCase_009348_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009348_2 "random.conditionals.combined.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009348, VkglTestCase_009348_1, VkglTestCase_009348_2);

#define VkglTestCase_009349_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009349_2 "random.conditionals.combined.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009349, VkglTestCase_009349_1, VkglTestCase_009349_2);

#define VkglTestCase_009350_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009350_2 "random.conditionals.combined.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009350, VkglTestCase_009350_1, VkglTestCase_009350_2);

#define VkglTestCase_009351_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009351_2 "random.conditionals.combined.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009351, VkglTestCase_009351_1, VkglTestCase_009351_2);

#define VkglTestCase_009352_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009352_2 "random.conditionals.combined.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009352, VkglTestCase_009352_1, VkglTestCase_009352_2);

#define VkglTestCase_009353_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009353_2 "random.conditionals.combined.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009353, VkglTestCase_009353_1, VkglTestCase_009353_2);

#define VkglTestCase_009354_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009354_2 "random.conditionals.combined.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009354, VkglTestCase_009354_1, VkglTestCase_009354_2);

#define VkglTestCase_009355_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009355_2 "random.conditionals.combined.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009355, VkglTestCase_009355_1, VkglTestCase_009355_2);

#define VkglTestCase_009356_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009356_2 "random.conditionals.combined.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009356, VkglTestCase_009356_1, VkglTestCase_009356_2);

#define VkglTestCase_009357_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009357_2 "random.conditionals.combined.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009357, VkglTestCase_009357_1, VkglTestCase_009357_2);

#define VkglTestCase_009358_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009358_2 "random.conditionals.combined.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009358, VkglTestCase_009358_1, VkglTestCase_009358_2);

#define VkglTestCase_009359_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009359_2 "random.conditionals.combined.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009359, VkglTestCase_009359_1, VkglTestCase_009359_2);

#define VkglTestCase_009360_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009360_2 "random.conditionals.combined.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009360, VkglTestCase_009360_1, VkglTestCase_009360_2);

#define VkglTestCase_009361_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009361_2 "random.conditionals.combined.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009361, VkglTestCase_009361_1, VkglTestCase_009361_2);

#define VkglTestCase_009362_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009362_2 "random.conditionals.combined.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009362, VkglTestCase_009362_1, VkglTestCase_009362_2);

#define VkglTestCase_009363_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009363_2 "random.conditionals.combined.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009363, VkglTestCase_009363_1, VkglTestCase_009363_2);

#define VkglTestCase_009364_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009364_2 "random.conditionals.combined.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009364, VkglTestCase_009364_1, VkglTestCase_009364_2);

#define VkglTestCase_009365_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009365_2 "random.conditionals.combined.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009365, VkglTestCase_009365_1, VkglTestCase_009365_2);

#define VkglTestCase_009366_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009366_2 "random.conditionals.combined.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009366, VkglTestCase_009366_1, VkglTestCase_009366_2);

#define VkglTestCase_009367_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009367_2 "random.conditionals.combined.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009367, VkglTestCase_009367_1, VkglTestCase_009367_2);

#define VkglTestCase_009368_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009368_2 "random.conditionals.combined.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009368, VkglTestCase_009368_1, VkglTestCase_009368_2);

#define VkglTestCase_009369_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009369_2 "random.conditionals.combined.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009369, VkglTestCase_009369_1, VkglTestCase_009369_2);

#define VkglTestCase_009370_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009370_2 "random.conditionals.combined.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009370, VkglTestCase_009370_1, VkglTestCase_009370_2);

#define VkglTestCase_009371_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009371_2 "random.conditionals.combined.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009371, VkglTestCase_009371_1, VkglTestCase_009371_2);

#define VkglTestCase_009372_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009372_2 "random.conditionals.combined.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009372, VkglTestCase_009372_1, VkglTestCase_009372_2);

#define VkglTestCase_009373_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009373_2 "random.conditionals.combined.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009373, VkglTestCase_009373_1, VkglTestCase_009373_2);

#define VkglTestCase_009374_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009374_2 "random.conditionals.combined.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009374, VkglTestCase_009374_1, VkglTestCase_009374_2);

#define VkglTestCase_009375_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009375_2 "random.conditionals.combined.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009375, VkglTestCase_009375_1, VkglTestCase_009375_2);

#define VkglTestCase_009376_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009376_2 "random.conditionals.combined.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009376, VkglTestCase_009376_1, VkglTestCase_009376_2);

#define VkglTestCase_009377_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009377_2 "random.conditionals.combined.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009377, VkglTestCase_009377_1, VkglTestCase_009377_2);

#define VkglTestCase_009378_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009378_2 "random.conditionals.combined.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009378, VkglTestCase_009378_1, VkglTestCase_009378_2);

#define VkglTestCase_009379_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009379_2 "random.conditionals.combined.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009379, VkglTestCase_009379_1, VkglTestCase_009379_2);

#define VkglTestCase_009380_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009380_2 "random.conditionals.combined.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009380, VkglTestCase_009380_1, VkglTestCase_009380_2);

#define VkglTestCase_009381_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009381_2 "random.conditionals.combined.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009381, VkglTestCase_009381_1, VkglTestCase_009381_2);

#define VkglTestCase_009382_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009382_2 "random.conditionals.combined.50"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009382, VkglTestCase_009382_1, VkglTestCase_009382_2);

#define VkglTestCase_009383_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009383_2 "random.conditionals.combined.51"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009383, VkglTestCase_009383_1, VkglTestCase_009383_2);

#define VkglTestCase_009384_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009384_2 "random.conditionals.combined.52"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009384, VkglTestCase_009384_1, VkglTestCase_009384_2);

#define VkglTestCase_009385_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009385_2 "random.conditionals.combined.53"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009385, VkglTestCase_009385_1, VkglTestCase_009385_2);

#define VkglTestCase_009386_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009386_2 "random.conditionals.combined.54"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009386, VkglTestCase_009386_1, VkglTestCase_009386_2);

#define VkglTestCase_009387_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009387_2 "random.conditionals.combined.55"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009387, VkglTestCase_009387_1, VkglTestCase_009387_2);

#define VkglTestCase_009388_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009388_2 "random.conditionals.combined.56"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009388, VkglTestCase_009388_1, VkglTestCase_009388_2);

#define VkglTestCase_009389_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009389_2 "random.conditionals.combined.57"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009389, VkglTestCase_009389_1, VkglTestCase_009389_2);

#define VkglTestCase_009390_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009390_2 "random.conditionals.combined.58"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009390, VkglTestCase_009390_1, VkglTestCase_009390_2);

#define VkglTestCase_009391_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009391_2 "random.conditionals.combined.59"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009391, VkglTestCase_009391_1, VkglTestCase_009391_2);

#define VkglTestCase_009392_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009392_2 "random.conditionals.combined.60"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009392, VkglTestCase_009392_1, VkglTestCase_009392_2);

#define VkglTestCase_009393_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009393_2 "random.conditionals.combined.61"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009393, VkglTestCase_009393_1, VkglTestCase_009393_2);

#define VkglTestCase_009394_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009394_2 "random.conditionals.combined.62"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009394, VkglTestCase_009394_1, VkglTestCase_009394_2);

#define VkglTestCase_009395_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009395_2 "random.conditionals.combined.63"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009395, VkglTestCase_009395_1, VkglTestCase_009395_2);

#define VkglTestCase_009396_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009396_2 "random.conditionals.combined.64"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009396, VkglTestCase_009396_1, VkglTestCase_009396_2);

#define VkglTestCase_009397_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009397_2 "random.conditionals.combined.65"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009397, VkglTestCase_009397_1, VkglTestCase_009397_2);

#define VkglTestCase_009398_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009398_2 "random.conditionals.combined.66"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009398, VkglTestCase_009398_1, VkglTestCase_009398_2);

#define VkglTestCase_009399_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009399_2 "random.conditionals.combined.67"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009399, VkglTestCase_009399_1, VkglTestCase_009399_2);

#define VkglTestCase_009400_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009400_2 "random.conditionals.combined.68"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009400, VkglTestCase_009400_1, VkglTestCase_009400_2);

#define VkglTestCase_009401_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009401_2 "random.conditionals.combined.69"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009401, VkglTestCase_009401_1, VkglTestCase_009401_2);

#define VkglTestCase_009402_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009402_2 "random.conditionals.combined.70"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009402, VkglTestCase_009402_1, VkglTestCase_009402_2);

#define VkglTestCase_009403_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009403_2 "random.conditionals.combined.71"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009403, VkglTestCase_009403_1, VkglTestCase_009403_2);

#define VkglTestCase_009404_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009404_2 "random.conditionals.combined.72"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009404, VkglTestCase_009404_1, VkglTestCase_009404_2);

#define VkglTestCase_009405_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009405_2 "random.conditionals.combined.73"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009405, VkglTestCase_009405_1, VkglTestCase_009405_2);

#define VkglTestCase_009406_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009406_2 "random.conditionals.combined.74"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009406, VkglTestCase_009406_1, VkglTestCase_009406_2);

#define VkglTestCase_009407_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009407_2 "random.conditionals.combined.75"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009407, VkglTestCase_009407_1, VkglTestCase_009407_2);

#define VkglTestCase_009408_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009408_2 "random.conditionals.combined.76"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009408, VkglTestCase_009408_1, VkglTestCase_009408_2);

#define VkglTestCase_009409_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009409_2 "random.conditionals.combined.77"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009409, VkglTestCase_009409_1, VkglTestCase_009409_2);

#define VkglTestCase_009410_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009410_2 "random.conditionals.combined.78"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009410, VkglTestCase_009410_1, VkglTestCase_009410_2);

#define VkglTestCase_009411_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009411_2 "random.conditionals.combined.79"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009411, VkglTestCase_009411_1, VkglTestCase_009411_2);

#define VkglTestCase_009412_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009412_2 "random.conditionals.combined.80"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009412, VkglTestCase_009412_1, VkglTestCase_009412_2);

#define VkglTestCase_009413_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009413_2 "random.conditionals.combined.81"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009413, VkglTestCase_009413_1, VkglTestCase_009413_2);

#define VkglTestCase_009414_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009414_2 "random.conditionals.combined.82"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009414, VkglTestCase_009414_1, VkglTestCase_009414_2);

#define VkglTestCase_009415_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009415_2 "random.conditionals.combined.83"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009415, VkglTestCase_009415_1, VkglTestCase_009415_2);

#define VkglTestCase_009416_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009416_2 "random.conditionals.combined.84"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009416, VkglTestCase_009416_1, VkglTestCase_009416_2);

#define VkglTestCase_009417_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009417_2 "random.conditionals.combined.85"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009417, VkglTestCase_009417_1, VkglTestCase_009417_2);

#define VkglTestCase_009418_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009418_2 "random.conditionals.combined.86"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009418, VkglTestCase_009418_1, VkglTestCase_009418_2);

#define VkglTestCase_009419_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009419_2 "random.conditionals.combined.87"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009419, VkglTestCase_009419_1, VkglTestCase_009419_2);

#define VkglTestCase_009420_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009420_2 "random.conditionals.combined.88"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009420, VkglTestCase_009420_1, VkglTestCase_009420_2);

#define VkglTestCase_009421_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009421_2 "random.conditionals.combined.89"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009421, VkglTestCase_009421_1, VkglTestCase_009421_2);

#define VkglTestCase_009422_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009422_2 "random.conditionals.combined.90"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009422, VkglTestCase_009422_1, VkglTestCase_009422_2);

#define VkglTestCase_009423_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009423_2 "random.conditionals.combined.91"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009423, VkglTestCase_009423_1, VkglTestCase_009423_2);

#define VkglTestCase_009424_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009424_2 "random.conditionals.combined.92"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009424, VkglTestCase_009424_1, VkglTestCase_009424_2);

#define VkglTestCase_009425_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009425_2 "random.conditionals.combined.93"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009425, VkglTestCase_009425_1, VkglTestCase_009425_2);

#define VkglTestCase_009426_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009426_2 "random.conditionals.combined.94"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009426, VkglTestCase_009426_1, VkglTestCase_009426_2);

#define VkglTestCase_009427_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009427_2 "random.conditionals.combined.95"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009427, VkglTestCase_009427_1, VkglTestCase_009427_2);

#define VkglTestCase_009428_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009428_2 "random.conditionals.combined.96"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009428, VkglTestCase_009428_1, VkglTestCase_009428_2);

#define VkglTestCase_009429_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009429_2 "random.conditionals.combined.97"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009429, VkglTestCase_009429_1, VkglTestCase_009429_2);

#define VkglTestCase_009430_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009430_2 "random.conditionals.combined.98"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009430, VkglTestCase_009430_1, VkglTestCase_009430_2);

#define VkglTestCase_009431_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009431_2 "random.conditionals.combined.99"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009431, VkglTestCase_009431_1, VkglTestCase_009431_2);
