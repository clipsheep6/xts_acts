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
#include "../ActsDeqpgles20009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008332_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008332_2 "andom.basic_expression.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008332, VkglTestCase_008332_1, VkglTestCase_008332_2);

#define VkglTestCase_008333_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008333_2 "andom.basic_expression.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008333, VkglTestCase_008333_1, VkglTestCase_008333_2);

#define VkglTestCase_008334_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008334_2 "andom.basic_expression.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008334, VkglTestCase_008334_1, VkglTestCase_008334_2);

#define VkglTestCase_008335_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008335_2 "andom.basic_expression.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008335, VkglTestCase_008335_1, VkglTestCase_008335_2);

#define VkglTestCase_008336_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008336_2 "andom.basic_expression.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008336, VkglTestCase_008336_1, VkglTestCase_008336_2);

#define VkglTestCase_008337_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008337_2 "andom.basic_expression.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008337, VkglTestCase_008337_1, VkglTestCase_008337_2);

#define VkglTestCase_008338_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008338_2 "andom.basic_expression.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008338, VkglTestCase_008338_1, VkglTestCase_008338_2);

#define VkglTestCase_008339_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008339_2 "andom.basic_expression.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008339, VkglTestCase_008339_1, VkglTestCase_008339_2);

#define VkglTestCase_008340_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008340_2 "andom.basic_expression.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008340, VkglTestCase_008340_1, VkglTestCase_008340_2);

#define VkglTestCase_008341_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008341_2 "andom.basic_expression.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008341, VkglTestCase_008341_1, VkglTestCase_008341_2);

#define VkglTestCase_008342_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008342_2 "andom.basic_expression.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008342, VkglTestCase_008342_1, VkglTestCase_008342_2);

#define VkglTestCase_008343_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008343_2 "andom.basic_expression.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008343, VkglTestCase_008343_1, VkglTestCase_008343_2);

#define VkglTestCase_008344_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008344_2 "andom.basic_expression.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008344, VkglTestCase_008344_1, VkglTestCase_008344_2);

#define VkglTestCase_008345_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008345_2 "andom.basic_expression.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008345, VkglTestCase_008345_1, VkglTestCase_008345_2);

#define VkglTestCase_008346_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008346_2 "andom.basic_expression.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008346, VkglTestCase_008346_1, VkglTestCase_008346_2);

#define VkglTestCase_008347_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008347_2 "andom.basic_expression.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008347, VkglTestCase_008347_1, VkglTestCase_008347_2);

#define VkglTestCase_008348_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008348_2 "andom.basic_expression.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008348, VkglTestCase_008348_1, VkglTestCase_008348_2);

#define VkglTestCase_008349_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008349_2 "andom.basic_expression.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008349, VkglTestCase_008349_1, VkglTestCase_008349_2);

#define VkglTestCase_008350_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008350_2 "andom.basic_expression.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008350, VkglTestCase_008350_1, VkglTestCase_008350_2);

#define VkglTestCase_008351_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008351_2 "andom.basic_expression.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008351, VkglTestCase_008351_1, VkglTestCase_008351_2);

#define VkglTestCase_008352_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008352_2 "andom.basic_expression.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008352, VkglTestCase_008352_1, VkglTestCase_008352_2);

#define VkglTestCase_008353_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008353_2 "andom.basic_expression.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008353, VkglTestCase_008353_1, VkglTestCase_008353_2);

#define VkglTestCase_008354_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008354_2 "andom.basic_expression.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008354, VkglTestCase_008354_1, VkglTestCase_008354_2);

#define VkglTestCase_008355_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008355_2 "andom.basic_expression.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008355, VkglTestCase_008355_1, VkglTestCase_008355_2);

#define VkglTestCase_008356_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008356_2 "andom.basic_expression.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008356, VkglTestCase_008356_1, VkglTestCase_008356_2);

#define VkglTestCase_008357_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008357_2 "andom.basic_expression.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008357, VkglTestCase_008357_1, VkglTestCase_008357_2);

#define VkglTestCase_008358_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008358_2 "andom.basic_expression.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008358, VkglTestCase_008358_1, VkglTestCase_008358_2);

#define VkglTestCase_008359_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008359_2 "andom.basic_expression.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008359, VkglTestCase_008359_1, VkglTestCase_008359_2);

#define VkglTestCase_008360_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008360_2 "andom.basic_expression.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008360, VkglTestCase_008360_1, VkglTestCase_008360_2);

#define VkglTestCase_008361_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008361_2 "andom.basic_expression.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008361, VkglTestCase_008361_1, VkglTestCase_008361_2);

#define VkglTestCase_008362_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008362_2 "andom.basic_expression.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008362, VkglTestCase_008362_1, VkglTestCase_008362_2);

#define VkglTestCase_008363_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008363_2 "andom.basic_expression.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008363, VkglTestCase_008363_1, VkglTestCase_008363_2);

#define VkglTestCase_008364_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008364_2 "andom.basic_expression.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008364, VkglTestCase_008364_1, VkglTestCase_008364_2);

#define VkglTestCase_008365_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008365_2 "andom.basic_expression.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008365, VkglTestCase_008365_1, VkglTestCase_008365_2);

#define VkglTestCase_008366_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008366_2 "andom.basic_expression.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008366, VkglTestCase_008366_1, VkglTestCase_008366_2);

#define VkglTestCase_008367_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008367_2 "andom.basic_expression.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008367, VkglTestCase_008367_1, VkglTestCase_008367_2);

#define VkglTestCase_008368_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008368_2 "andom.basic_expression.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008368, VkglTestCase_008368_1, VkglTestCase_008368_2);

#define VkglTestCase_008369_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008369_2 "andom.basic_expression.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008369, VkglTestCase_008369_1, VkglTestCase_008369_2);

#define VkglTestCase_008370_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008370_2 "andom.basic_expression.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008370, VkglTestCase_008370_1, VkglTestCase_008370_2);

#define VkglTestCase_008371_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008371_2 "andom.basic_expression.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008371, VkglTestCase_008371_1, VkglTestCase_008371_2);

#define VkglTestCase_008372_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008372_2 "andom.basic_expression.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008372, VkglTestCase_008372_1, VkglTestCase_008372_2);

#define VkglTestCase_008373_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008373_2 "andom.basic_expression.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008373, VkglTestCase_008373_1, VkglTestCase_008373_2);

#define VkglTestCase_008374_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008374_2 "andom.basic_expression.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008374, VkglTestCase_008374_1, VkglTestCase_008374_2);

#define VkglTestCase_008375_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008375_2 "andom.basic_expression.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008375, VkglTestCase_008375_1, VkglTestCase_008375_2);

#define VkglTestCase_008376_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008376_2 "andom.basic_expression.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008376, VkglTestCase_008376_1, VkglTestCase_008376_2);

#define VkglTestCase_008377_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008377_2 "andom.basic_expression.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008377, VkglTestCase_008377_1, VkglTestCase_008377_2);

#define VkglTestCase_008378_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008378_2 "andom.basic_expression.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008378, VkglTestCase_008378_1, VkglTestCase_008378_2);

#define VkglTestCase_008379_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008379_2 "andom.basic_expression.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008379, VkglTestCase_008379_1, VkglTestCase_008379_2);

#define VkglTestCase_008380_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008380_2 "andom.basic_expression.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008380, VkglTestCase_008380_1, VkglTestCase_008380_2);

#define VkglTestCase_008381_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008381_2 "andom.basic_expression.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008381, VkglTestCase_008381_1, VkglTestCase_008381_2);

#define VkglTestCase_008382_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008382_2 "andom.basic_expression.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008382, VkglTestCase_008382_1, VkglTestCase_008382_2);

#define VkglTestCase_008383_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008383_2 "andom.basic_expression.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008383, VkglTestCase_008383_1, VkglTestCase_008383_2);

#define VkglTestCase_008384_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008384_2 "andom.basic_expression.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008384, VkglTestCase_008384_1, VkglTestCase_008384_2);

#define VkglTestCase_008385_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008385_2 "andom.basic_expression.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008385, VkglTestCase_008385_1, VkglTestCase_008385_2);

#define VkglTestCase_008386_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008386_2 "andom.basic_expression.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008386, VkglTestCase_008386_1, VkglTestCase_008386_2);

#define VkglTestCase_008387_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008387_2 "andom.basic_expression.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008387, VkglTestCase_008387_1, VkglTestCase_008387_2);

#define VkglTestCase_008388_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008388_2 "andom.basic_expression.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008388, VkglTestCase_008388_1, VkglTestCase_008388_2);

#define VkglTestCase_008389_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008389_2 "andom.basic_expression.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008389, VkglTestCase_008389_1, VkglTestCase_008389_2);

#define VkglTestCase_008390_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008390_2 "andom.basic_expression.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008390, VkglTestCase_008390_1, VkglTestCase_008390_2);

#define VkglTestCase_008391_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008391_2 "andom.basic_expression.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008391, VkglTestCase_008391_1, VkglTestCase_008391_2);

#define VkglTestCase_008392_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008392_2 "andom.basic_expression.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008392, VkglTestCase_008392_1, VkglTestCase_008392_2);

#define VkglTestCase_008393_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008393_2 "andom.basic_expression.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008393, VkglTestCase_008393_1, VkglTestCase_008393_2);

#define VkglTestCase_008394_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008394_2 "andom.basic_expression.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008394, VkglTestCase_008394_1, VkglTestCase_008394_2);

#define VkglTestCase_008395_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008395_2 "andom.basic_expression.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008395, VkglTestCase_008395_1, VkglTestCase_008395_2);

#define VkglTestCase_008396_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008396_2 "andom.basic_expression.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008396, VkglTestCase_008396_1, VkglTestCase_008396_2);

#define VkglTestCase_008397_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008397_2 "andom.basic_expression.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008397, VkglTestCase_008397_1, VkglTestCase_008397_2);

#define VkglTestCase_008398_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008398_2 "andom.basic_expression.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008398, VkglTestCase_008398_1, VkglTestCase_008398_2);

#define VkglTestCase_008399_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008399_2 "andom.basic_expression.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008399, VkglTestCase_008399_1, VkglTestCase_008399_2);

#define VkglTestCase_008400_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008400_2 "andom.basic_expression.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008400, VkglTestCase_008400_1, VkglTestCase_008400_2);

#define VkglTestCase_008401_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008401_2 "andom.basic_expression.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008401, VkglTestCase_008401_1, VkglTestCase_008401_2);

#define VkglTestCase_008402_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008402_2 "andom.basic_expression.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008402, VkglTestCase_008402_1, VkglTestCase_008402_2);

#define VkglTestCase_008403_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008403_2 "andom.basic_expression.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008403, VkglTestCase_008403_1, VkglTestCase_008403_2);

#define VkglTestCase_008404_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008404_2 "andom.basic_expression.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008404, VkglTestCase_008404_1, VkglTestCase_008404_2);

#define VkglTestCase_008405_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008405_2 "andom.basic_expression.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008405, VkglTestCase_008405_1, VkglTestCase_008405_2);

#define VkglTestCase_008406_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008406_2 "andom.basic_expression.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008406, VkglTestCase_008406_1, VkglTestCase_008406_2);

#define VkglTestCase_008407_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008407_2 "andom.basic_expression.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008407, VkglTestCase_008407_1, VkglTestCase_008407_2);

#define VkglTestCase_008408_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008408_2 "andom.basic_expression.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008408, VkglTestCase_008408_1, VkglTestCase_008408_2);

#define VkglTestCase_008409_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008409_2 "andom.basic_expression.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008409, VkglTestCase_008409_1, VkglTestCase_008409_2);

#define VkglTestCase_008410_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008410_2 "andom.basic_expression.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008410, VkglTestCase_008410_1, VkglTestCase_008410_2);

#define VkglTestCase_008411_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008411_2 "andom.basic_expression.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008411, VkglTestCase_008411_1, VkglTestCase_008411_2);

#define VkglTestCase_008412_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008412_2 "andom.basic_expression.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008412, VkglTestCase_008412_1, VkglTestCase_008412_2);

#define VkglTestCase_008413_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008413_2 "andom.basic_expression.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008413, VkglTestCase_008413_1, VkglTestCase_008413_2);

#define VkglTestCase_008414_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008414_2 "andom.basic_expression.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008414, VkglTestCase_008414_1, VkglTestCase_008414_2);

#define VkglTestCase_008415_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008415_2 "andom.basic_expression.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008415, VkglTestCase_008415_1, VkglTestCase_008415_2);

#define VkglTestCase_008416_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008416_2 "andom.basic_expression.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008416, VkglTestCase_008416_1, VkglTestCase_008416_2);

#define VkglTestCase_008417_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008417_2 "andom.basic_expression.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008417, VkglTestCase_008417_1, VkglTestCase_008417_2);

#define VkglTestCase_008418_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008418_2 "andom.basic_expression.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008418, VkglTestCase_008418_1, VkglTestCase_008418_2);

#define VkglTestCase_008419_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008419_2 "andom.basic_expression.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008419, VkglTestCase_008419_1, VkglTestCase_008419_2);

#define VkglTestCase_008420_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008420_2 "andom.basic_expression.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008420, VkglTestCase_008420_1, VkglTestCase_008420_2);

#define VkglTestCase_008421_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008421_2 "andom.basic_expression.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008421, VkglTestCase_008421_1, VkglTestCase_008421_2);

#define VkglTestCase_008422_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008422_2 "andom.basic_expression.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008422, VkglTestCase_008422_1, VkglTestCase_008422_2);

#define VkglTestCase_008423_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008423_2 "andom.basic_expression.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008423, VkglTestCase_008423_1, VkglTestCase_008423_2);

#define VkglTestCase_008424_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008424_2 "andom.basic_expression.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008424, VkglTestCase_008424_1, VkglTestCase_008424_2);

#define VkglTestCase_008425_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008425_2 "andom.basic_expression.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008425, VkglTestCase_008425_1, VkglTestCase_008425_2);

#define VkglTestCase_008426_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008426_2 "andom.basic_expression.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008426, VkglTestCase_008426_1, VkglTestCase_008426_2);

#define VkglTestCase_008427_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008427_2 "andom.basic_expression.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008427, VkglTestCase_008427_1, VkglTestCase_008427_2);

#define VkglTestCase_008428_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008428_2 "andom.basic_expression.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008428, VkglTestCase_008428_1, VkglTestCase_008428_2);

#define VkglTestCase_008429_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008429_2 "andom.basic_expression.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008429, VkglTestCase_008429_1, VkglTestCase_008429_2);

#define VkglTestCase_008430_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008430_2 "andom.basic_expression.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008430, VkglTestCase_008430_1, VkglTestCase_008430_2);

#define VkglTestCase_008431_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008431_2 "andom.basic_expression.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008431, VkglTestCase_008431_1, VkglTestCase_008431_2);
