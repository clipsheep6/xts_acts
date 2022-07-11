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
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038323_1 "dEQP-GLES3.functional"
#define VkglTestCase_038323_2 ".uniform_api.random.0"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038323, VkglTestCase_038323_1, VkglTestCase_038323_2);

#define VkglTestCase_038324_1 "dEQP-GLES3.functional"
#define VkglTestCase_038324_2 ".uniform_api.random.1"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038324, VkglTestCase_038324_1, VkglTestCase_038324_2);

#define VkglTestCase_038325_1 "dEQP-GLES3.functional"
#define VkglTestCase_038325_2 ".uniform_api.random.2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038325, VkglTestCase_038325_1, VkglTestCase_038325_2);

#define VkglTestCase_038326_1 "dEQP-GLES3.functional"
#define VkglTestCase_038326_2 ".uniform_api.random.3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038326, VkglTestCase_038326_1, VkglTestCase_038326_2);

#define VkglTestCase_038327_1 "dEQP-GLES3.functional"
#define VkglTestCase_038327_2 ".uniform_api.random.4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038327, VkglTestCase_038327_1, VkglTestCase_038327_2);

#define VkglTestCase_038328_1 "dEQP-GLES3.functional"
#define VkglTestCase_038328_2 ".uniform_api.random.5"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038328, VkglTestCase_038328_1, VkglTestCase_038328_2);

#define VkglTestCase_038329_1 "dEQP-GLES3.functional"
#define VkglTestCase_038329_2 ".uniform_api.random.6"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038329, VkglTestCase_038329_1, VkglTestCase_038329_2);

#define VkglTestCase_038330_1 "dEQP-GLES3.functional"
#define VkglTestCase_038330_2 ".uniform_api.random.7"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038330, VkglTestCase_038330_1, VkglTestCase_038330_2);

#define VkglTestCase_038331_1 "dEQP-GLES3.functional"
#define VkglTestCase_038331_2 ".uniform_api.random.8"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038331, VkglTestCase_038331_1, VkglTestCase_038331_2);

#define VkglTestCase_038332_1 "dEQP-GLES3.functional"
#define VkglTestCase_038332_2 ".uniform_api.random.9"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038332, VkglTestCase_038332_1, VkglTestCase_038332_2);

#define VkglTestCase_038333_1 "dEQP-GLES3.functional"
#define VkglTestCase_038333_2 ".uniform_api.random.10"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038333, VkglTestCase_038333_1, VkglTestCase_038333_2);

#define VkglTestCase_038334_1 "dEQP-GLES3.functional"
#define VkglTestCase_038334_2 ".uniform_api.random.11"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038334, VkglTestCase_038334_1, VkglTestCase_038334_2);

#define VkglTestCase_038335_1 "dEQP-GLES3.functional"
#define VkglTestCase_038335_2 ".uniform_api.random.12"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038335, VkglTestCase_038335_1, VkglTestCase_038335_2);

#define VkglTestCase_038336_1 "dEQP-GLES3.functional"
#define VkglTestCase_038336_2 ".uniform_api.random.13"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038336, VkglTestCase_038336_1, VkglTestCase_038336_2);

#define VkglTestCase_038337_1 "dEQP-GLES3.functional"
#define VkglTestCase_038337_2 ".uniform_api.random.14"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038337, VkglTestCase_038337_1, VkglTestCase_038337_2);

#define VkglTestCase_038338_1 "dEQP-GLES3.functional"
#define VkglTestCase_038338_2 ".uniform_api.random.15"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038338, VkglTestCase_038338_1, VkglTestCase_038338_2);

#define VkglTestCase_038339_1 "dEQP-GLES3.functional"
#define VkglTestCase_038339_2 ".uniform_api.random.16"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038339, VkglTestCase_038339_1, VkglTestCase_038339_2);

#define VkglTestCase_038340_1 "dEQP-GLES3.functional"
#define VkglTestCase_038340_2 ".uniform_api.random.17"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038340, VkglTestCase_038340_1, VkglTestCase_038340_2);

#define VkglTestCase_038341_1 "dEQP-GLES3.functional"
#define VkglTestCase_038341_2 ".uniform_api.random.18"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038341, VkglTestCase_038341_1, VkglTestCase_038341_2);

#define VkglTestCase_038342_1 "dEQP-GLES3.functional"
#define VkglTestCase_038342_2 ".uniform_api.random.19"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038342, VkglTestCase_038342_1, VkglTestCase_038342_2);

#define VkglTestCase_038343_1 "dEQP-GLES3.functional"
#define VkglTestCase_038343_2 ".uniform_api.random.20"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038343, VkglTestCase_038343_1, VkglTestCase_038343_2);

#define VkglTestCase_038344_1 "dEQP-GLES3.functional"
#define VkglTestCase_038344_2 ".uniform_api.random.21"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038344, VkglTestCase_038344_1, VkglTestCase_038344_2);

#define VkglTestCase_038345_1 "dEQP-GLES3.functional"
#define VkglTestCase_038345_2 ".uniform_api.random.22"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038345, VkglTestCase_038345_1, VkglTestCase_038345_2);

#define VkglTestCase_038346_1 "dEQP-GLES3.functional"
#define VkglTestCase_038346_2 ".uniform_api.random.24"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038346, VkglTestCase_038346_1, VkglTestCase_038346_2);

#define VkglTestCase_038347_1 "dEQP-GLES3.functional"
#define VkglTestCase_038347_2 ".uniform_api.random.25"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038347, VkglTestCase_038347_1, VkglTestCase_038347_2);

#define VkglTestCase_038348_1 "dEQP-GLES3.functional"
#define VkglTestCase_038348_2 ".uniform_api.random.26"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038348, VkglTestCase_038348_1, VkglTestCase_038348_2);

#define VkglTestCase_038349_1 "dEQP-GLES3.functional"
#define VkglTestCase_038349_2 ".uniform_api.random.27"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038349, VkglTestCase_038349_1, VkglTestCase_038349_2);

#define VkglTestCase_038350_1 "dEQP-GLES3.functional"
#define VkglTestCase_038350_2 ".uniform_api.random.28"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038350, VkglTestCase_038350_1, VkglTestCase_038350_2);

#define VkglTestCase_038351_1 "dEQP-GLES3.functional"
#define VkglTestCase_038351_2 ".uniform_api.random.29"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038351, VkglTestCase_038351_1, VkglTestCase_038351_2);

#define VkglTestCase_038352_1 "dEQP-GLES3.functional"
#define VkglTestCase_038352_2 ".uniform_api.random.30"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038352, VkglTestCase_038352_1, VkglTestCase_038352_2);

#define VkglTestCase_038353_1 "dEQP-GLES3.functional"
#define VkglTestCase_038353_2 ".uniform_api.random.31"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038353, VkglTestCase_038353_1, VkglTestCase_038353_2);

#define VkglTestCase_038354_1 "dEQP-GLES3.functional"
#define VkglTestCase_038354_2 ".uniform_api.random.32"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038354, VkglTestCase_038354_1, VkglTestCase_038354_2);

#define VkglTestCase_038355_1 "dEQP-GLES3.functional"
#define VkglTestCase_038355_2 ".uniform_api.random.33"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038355, VkglTestCase_038355_1, VkglTestCase_038355_2);

#define VkglTestCase_038356_1 "dEQP-GLES3.functional"
#define VkglTestCase_038356_2 ".uniform_api.random.34"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038356, VkglTestCase_038356_1, VkglTestCase_038356_2);

#define VkglTestCase_038357_1 "dEQP-GLES3.functional"
#define VkglTestCase_038357_2 ".uniform_api.random.35"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038357, VkglTestCase_038357_1, VkglTestCase_038357_2);

#define VkglTestCase_038358_1 "dEQP-GLES3.functional"
#define VkglTestCase_038358_2 ".uniform_api.random.36"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038358, VkglTestCase_038358_1, VkglTestCase_038358_2);

#define VkglTestCase_038359_1 "dEQP-GLES3.functional"
#define VkglTestCase_038359_2 ".uniform_api.random.37"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038359, VkglTestCase_038359_1, VkglTestCase_038359_2);

#define VkglTestCase_038360_1 "dEQP-GLES3.functional"
#define VkglTestCase_038360_2 ".uniform_api.random.38"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038360, VkglTestCase_038360_1, VkglTestCase_038360_2);

#define VkglTestCase_038361_1 "dEQP-GLES3.functional"
#define VkglTestCase_038361_2 ".uniform_api.random.39"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038361, VkglTestCase_038361_1, VkglTestCase_038361_2);

#define VkglTestCase_038362_1 "dEQP-GLES3.functional"
#define VkglTestCase_038362_2 ".uniform_api.random.40"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038362, VkglTestCase_038362_1, VkglTestCase_038362_2);

#define VkglTestCase_038363_1 "dEQP-GLES3.functional"
#define VkglTestCase_038363_2 ".uniform_api.random.41"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038363, VkglTestCase_038363_1, VkglTestCase_038363_2);

#define VkglTestCase_038364_1 "dEQP-GLES3.functional"
#define VkglTestCase_038364_2 ".uniform_api.random.42"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038364, VkglTestCase_038364_1, VkglTestCase_038364_2);

#define VkglTestCase_038365_1 "dEQP-GLES3.functional"
#define VkglTestCase_038365_2 ".uniform_api.random.43"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038365, VkglTestCase_038365_1, VkglTestCase_038365_2);

#define VkglTestCase_038366_1 "dEQP-GLES3.functional"
#define VkglTestCase_038366_2 ".uniform_api.random.44"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038366, VkglTestCase_038366_1, VkglTestCase_038366_2);

#define VkglTestCase_038367_1 "dEQP-GLES3.functional"
#define VkglTestCase_038367_2 ".uniform_api.random.45"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038367, VkglTestCase_038367_1, VkglTestCase_038367_2);

#define VkglTestCase_038368_1 "dEQP-GLES3.functional"
#define VkglTestCase_038368_2 ".uniform_api.random.46"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038368, VkglTestCase_038368_1, VkglTestCase_038368_2);

#define VkglTestCase_038369_1 "dEQP-GLES3.functional"
#define VkglTestCase_038369_2 ".uniform_api.random.47"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038369, VkglTestCase_038369_1, VkglTestCase_038369_2);

#define VkglTestCase_038370_1 "dEQP-GLES3.functional"
#define VkglTestCase_038370_2 ".uniform_api.random.48"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038370, VkglTestCase_038370_1, VkglTestCase_038370_2);

#define VkglTestCase_038371_1 "dEQP-GLES3.functional"
#define VkglTestCase_038371_2 ".uniform_api.random.49"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038371, VkglTestCase_038371_1, VkglTestCase_038371_2);

#define VkglTestCase_038372_1 "dEQP-GLES3.functional"
#define VkglTestCase_038372_2 ".uniform_api.random.50"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038372, VkglTestCase_038372_1, VkglTestCase_038372_2);

#define VkglTestCase_038373_1 "dEQP-GLES3.functional"
#define VkglTestCase_038373_2 ".uniform_api.random.51"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038373, VkglTestCase_038373_1, VkglTestCase_038373_2);

#define VkglTestCase_038374_1 "dEQP-GLES3.functional"
#define VkglTestCase_038374_2 ".uniform_api.random.52"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038374, VkglTestCase_038374_1, VkglTestCase_038374_2);

#define VkglTestCase_038375_1 "dEQP-GLES3.functional"
#define VkglTestCase_038375_2 ".uniform_api.random.53"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038375, VkglTestCase_038375_1, VkglTestCase_038375_2);

#define VkglTestCase_038376_1 "dEQP-GLES3.functional"
#define VkglTestCase_038376_2 ".uniform_api.random.54"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038376, VkglTestCase_038376_1, VkglTestCase_038376_2);

#define VkglTestCase_038377_1 "dEQP-GLES3.functional"
#define VkglTestCase_038377_2 ".uniform_api.random.55"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038377, VkglTestCase_038377_1, VkglTestCase_038377_2);

#define VkglTestCase_038378_1 "dEQP-GLES3.functional"
#define VkglTestCase_038378_2 ".uniform_api.random.56"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038378, VkglTestCase_038378_1, VkglTestCase_038378_2);

#define VkglTestCase_038379_1 "dEQP-GLES3.functional"
#define VkglTestCase_038379_2 ".uniform_api.random.57"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038379, VkglTestCase_038379_1, VkglTestCase_038379_2);

#define VkglTestCase_038380_1 "dEQP-GLES3.functional"
#define VkglTestCase_038380_2 ".uniform_api.random.58"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038380, VkglTestCase_038380_1, VkglTestCase_038380_2);

#define VkglTestCase_038381_1 "dEQP-GLES3.functional"
#define VkglTestCase_038381_2 ".uniform_api.random.59"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038381, VkglTestCase_038381_1, VkglTestCase_038381_2);

#define VkglTestCase_038382_1 "dEQP-GLES3.functional"
#define VkglTestCase_038382_2 ".uniform_api.random.60"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038382, VkglTestCase_038382_1, VkglTestCase_038382_2);

#define VkglTestCase_038383_1 "dEQP-GLES3.functional"
#define VkglTestCase_038383_2 ".uniform_api.random.61"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038383, VkglTestCase_038383_1, VkglTestCase_038383_2);

#define VkglTestCase_038384_1 "dEQP-GLES3.functional"
#define VkglTestCase_038384_2 ".uniform_api.random.62"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038384, VkglTestCase_038384_1, VkglTestCase_038384_2);

#define VkglTestCase_038385_1 "dEQP-GLES3.functional"
#define VkglTestCase_038385_2 ".uniform_api.random.63"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038385, VkglTestCase_038385_1, VkglTestCase_038385_2);

#define VkglTestCase_038386_1 "dEQP-GLES3.functional"
#define VkglTestCase_038386_2 ".uniform_api.random.64"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038386, VkglTestCase_038386_1, VkglTestCase_038386_2);

#define VkglTestCase_038387_1 "dEQP-GLES3.functional"
#define VkglTestCase_038387_2 ".uniform_api.random.65"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038387, VkglTestCase_038387_1, VkglTestCase_038387_2);

#define VkglTestCase_038388_1 "dEQP-GLES3.functional"
#define VkglTestCase_038388_2 ".uniform_api.random.66"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038388, VkglTestCase_038388_1, VkglTestCase_038388_2);

#define VkglTestCase_038389_1 "dEQP-GLES3.functional"
#define VkglTestCase_038389_2 ".uniform_api.random.67"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038389, VkglTestCase_038389_1, VkglTestCase_038389_2);

#define VkglTestCase_038390_1 "dEQP-GLES3.functional"
#define VkglTestCase_038390_2 ".uniform_api.random.68"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038390, VkglTestCase_038390_1, VkglTestCase_038390_2);

#define VkglTestCase_038391_1 "dEQP-GLES3.functional"
#define VkglTestCase_038391_2 ".uniform_api.random.69"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038391, VkglTestCase_038391_1, VkglTestCase_038391_2);

#define VkglTestCase_038392_1 "dEQP-GLES3.functional"
#define VkglTestCase_038392_2 ".uniform_api.random.70"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038392, VkglTestCase_038392_1, VkglTestCase_038392_2);

#define VkglTestCase_038393_1 "dEQP-GLES3.functional"
#define VkglTestCase_038393_2 ".uniform_api.random.71"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038393, VkglTestCase_038393_1, VkglTestCase_038393_2);

#define VkglTestCase_038394_1 "dEQP-GLES3.functional"
#define VkglTestCase_038394_2 ".uniform_api.random.72"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038394, VkglTestCase_038394_1, VkglTestCase_038394_2);

#define VkglTestCase_038395_1 "dEQP-GLES3.functional"
#define VkglTestCase_038395_2 ".uniform_api.random.73"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038395, VkglTestCase_038395_1, VkglTestCase_038395_2);

#define VkglTestCase_038396_1 "dEQP-GLES3.functional"
#define VkglTestCase_038396_2 ".uniform_api.random.74"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038396, VkglTestCase_038396_1, VkglTestCase_038396_2);

#define VkglTestCase_038397_1 "dEQP-GLES3.functional"
#define VkglTestCase_038397_2 ".uniform_api.random.75"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038397, VkglTestCase_038397_1, VkglTestCase_038397_2);

#define VkglTestCase_038398_1 "dEQP-GLES3.functional"
#define VkglTestCase_038398_2 ".uniform_api.random.76"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038398, VkglTestCase_038398_1, VkglTestCase_038398_2);

#define VkglTestCase_038399_1 "dEQP-GLES3.functional"
#define VkglTestCase_038399_2 ".uniform_api.random.77"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038399, VkglTestCase_038399_1, VkglTestCase_038399_2);

#define VkglTestCase_038400_1 "dEQP-GLES3.functional"
#define VkglTestCase_038400_2 ".uniform_api.random.78"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038400, VkglTestCase_038400_1, VkglTestCase_038400_2);

#define VkglTestCase_038401_1 "dEQP-GLES3.functional"
#define VkglTestCase_038401_2 ".uniform_api.random.79"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038401, VkglTestCase_038401_1, VkglTestCase_038401_2);

#define VkglTestCase_038402_1 "dEQP-GLES3.functional"
#define VkglTestCase_038402_2 ".uniform_api.random.80"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038402, VkglTestCase_038402_1, VkglTestCase_038402_2);

#define VkglTestCase_038403_1 "dEQP-GLES3.functional"
#define VkglTestCase_038403_2 ".uniform_api.random.81"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038403, VkglTestCase_038403_1, VkglTestCase_038403_2);

#define VkglTestCase_038404_1 "dEQP-GLES3.functional"
#define VkglTestCase_038404_2 ".uniform_api.random.82"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038404, VkglTestCase_038404_1, VkglTestCase_038404_2);

#define VkglTestCase_038405_1 "dEQP-GLES3.functional"
#define VkglTestCase_038405_2 ".uniform_api.random.83"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038405, VkglTestCase_038405_1, VkglTestCase_038405_2);

#define VkglTestCase_038406_1 "dEQP-GLES3.functional"
#define VkglTestCase_038406_2 ".uniform_api.random.84"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038406, VkglTestCase_038406_1, VkglTestCase_038406_2);

#define VkglTestCase_038407_1 "dEQP-GLES3.functional"
#define VkglTestCase_038407_2 ".uniform_api.random.85"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038407, VkglTestCase_038407_1, VkglTestCase_038407_2);

#define VkglTestCase_038408_1 "dEQP-GLES3.functional"
#define VkglTestCase_038408_2 ".uniform_api.random.86"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038408, VkglTestCase_038408_1, VkglTestCase_038408_2);

#define VkglTestCase_038409_1 "dEQP-GLES3.functional"
#define VkglTestCase_038409_2 ".uniform_api.random.87"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038409, VkglTestCase_038409_1, VkglTestCase_038409_2);

#define VkglTestCase_038410_1 "dEQP-GLES3.functional"
#define VkglTestCase_038410_2 ".uniform_api.random.88"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038410, VkglTestCase_038410_1, VkglTestCase_038410_2);

#define VkglTestCase_038411_1 "dEQP-GLES3.functional"
#define VkglTestCase_038411_2 ".uniform_api.random.89"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038411, VkglTestCase_038411_1, VkglTestCase_038411_2);

#define VkglTestCase_038412_1 "dEQP-GLES3.functional"
#define VkglTestCase_038412_2 ".uniform_api.random.90"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038412, VkglTestCase_038412_1, VkglTestCase_038412_2);

#define VkglTestCase_038413_1 "dEQP-GLES3.functional"
#define VkglTestCase_038413_2 ".uniform_api.random.91"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038413, VkglTestCase_038413_1, VkglTestCase_038413_2);

#define VkglTestCase_038414_1 "dEQP-GLES3.functional"
#define VkglTestCase_038414_2 ".uniform_api.random.92"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038414, VkglTestCase_038414_1, VkglTestCase_038414_2);

#define VkglTestCase_038415_1 "dEQP-GLES3.functional"
#define VkglTestCase_038415_2 ".uniform_api.random.93"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038415, VkglTestCase_038415_1, VkglTestCase_038415_2);

#define VkglTestCase_038416_1 "dEQP-GLES3.functional"
#define VkglTestCase_038416_2 ".uniform_api.random.94"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038416, VkglTestCase_038416_1, VkglTestCase_038416_2);

#define VkglTestCase_038417_1 "dEQP-GLES3.functional"
#define VkglTestCase_038417_2 ".uniform_api.random.95"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038417, VkglTestCase_038417_1, VkglTestCase_038417_2);

#define VkglTestCase_038418_1 "dEQP-GLES3.functional"
#define VkglTestCase_038418_2 ".uniform_api.random.96"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038418, VkglTestCase_038418_1, VkglTestCase_038418_2);

#define VkglTestCase_038419_1 "dEQP-GLES3.functional"
#define VkglTestCase_038419_2 ".uniform_api.random.97"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038419, VkglTestCase_038419_1, VkglTestCase_038419_2);

#define VkglTestCase_038420_1 "dEQP-GLES3.functional"
#define VkglTestCase_038420_2 ".uniform_api.random.98"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038420, VkglTestCase_038420_1, VkglTestCase_038420_2);

#define VkglTestCase_038421_1 "dEQP-GLES3.functional"
#define VkglTestCase_038421_2 ".uniform_api.random.99"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038421, VkglTestCase_038421_1, VkglTestCase_038421_2);
