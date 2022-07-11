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
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012312_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012312_2 "_ops.interaction.basic_shader.0"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012312, VkglTestCase_012312_1, VkglTestCase_012312_2);

#define VkglTestCase_012313_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012313_2 "_ops.interaction.basic_shader.1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012313, VkglTestCase_012313_1, VkglTestCase_012313_2);

#define VkglTestCase_012314_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012314_2 "_ops.interaction.basic_shader.2"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012314, VkglTestCase_012314_1, VkglTestCase_012314_2);

#define VkglTestCase_012315_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012315_2 "_ops.interaction.basic_shader.3"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012315, VkglTestCase_012315_1, VkglTestCase_012315_2);

#define VkglTestCase_012316_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012316_2 "_ops.interaction.basic_shader.4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012316, VkglTestCase_012316_1, VkglTestCase_012316_2);

#define VkglTestCase_012317_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012317_2 "_ops.interaction.basic_shader.5"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012317, VkglTestCase_012317_1, VkglTestCase_012317_2);

#define VkglTestCase_012318_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012318_2 "_ops.interaction.basic_shader.6"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012318, VkglTestCase_012318_1, VkglTestCase_012318_2);

#define VkglTestCase_012319_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012319_2 "_ops.interaction.basic_shader.7"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012319, VkglTestCase_012319_1, VkglTestCase_012319_2);

#define VkglTestCase_012320_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012320_2 "_ops.interaction.basic_shader.8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012320, VkglTestCase_012320_1, VkglTestCase_012320_2);

#define VkglTestCase_012321_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_012321_2 "_ops.interaction.basic_shader.9"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012321, VkglTestCase_012321_1, VkglTestCase_012321_2);

#define VkglTestCase_012322_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012322_2 "ops.interaction.basic_shader.10"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012322, VkglTestCase_012322_1, VkglTestCase_012322_2);

#define VkglTestCase_012323_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012323_2 "ops.interaction.basic_shader.11"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012323, VkglTestCase_012323_1, VkglTestCase_012323_2);

#define VkglTestCase_012324_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012324_2 "ops.interaction.basic_shader.12"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012324, VkglTestCase_012324_1, VkglTestCase_012324_2);

#define VkglTestCase_012325_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012325_2 "ops.interaction.basic_shader.13"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012325, VkglTestCase_012325_1, VkglTestCase_012325_2);

#define VkglTestCase_012326_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012326_2 "ops.interaction.basic_shader.14"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012326, VkglTestCase_012326_1, VkglTestCase_012326_2);

#define VkglTestCase_012327_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012327_2 "ops.interaction.basic_shader.15"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012327, VkglTestCase_012327_1, VkglTestCase_012327_2);

#define VkglTestCase_012328_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012328_2 "ops.interaction.basic_shader.16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012328, VkglTestCase_012328_1, VkglTestCase_012328_2);

#define VkglTestCase_012329_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012329_2 "ops.interaction.basic_shader.17"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012329, VkglTestCase_012329_1, VkglTestCase_012329_2);

#define VkglTestCase_012330_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012330_2 "ops.interaction.basic_shader.18"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012330, VkglTestCase_012330_1, VkglTestCase_012330_2);

#define VkglTestCase_012331_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012331_2 "ops.interaction.basic_shader.19"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012331, VkglTestCase_012331_1, VkglTestCase_012331_2);

#define VkglTestCase_012332_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012332_2 "ops.interaction.basic_shader.20"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012332, VkglTestCase_012332_1, VkglTestCase_012332_2);

#define VkglTestCase_012333_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012333_2 "ops.interaction.basic_shader.21"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012333, VkglTestCase_012333_1, VkglTestCase_012333_2);

#define VkglTestCase_012334_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012334_2 "ops.interaction.basic_shader.22"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012334, VkglTestCase_012334_1, VkglTestCase_012334_2);

#define VkglTestCase_012335_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012335_2 "ops.interaction.basic_shader.23"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012335, VkglTestCase_012335_1, VkglTestCase_012335_2);

#define VkglTestCase_012336_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012336_2 "ops.interaction.basic_shader.24"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012336, VkglTestCase_012336_1, VkglTestCase_012336_2);

#define VkglTestCase_012337_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012337_2 "ops.interaction.basic_shader.25"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012337, VkglTestCase_012337_1, VkglTestCase_012337_2);

#define VkglTestCase_012338_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012338_2 "ops.interaction.basic_shader.26"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012338, VkglTestCase_012338_1, VkglTestCase_012338_2);

#define VkglTestCase_012339_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012339_2 "ops.interaction.basic_shader.27"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012339, VkglTestCase_012339_1, VkglTestCase_012339_2);

#define VkglTestCase_012340_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012340_2 "ops.interaction.basic_shader.28"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012340, VkglTestCase_012340_1, VkglTestCase_012340_2);

#define VkglTestCase_012341_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012341_2 "ops.interaction.basic_shader.29"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012341, VkglTestCase_012341_1, VkglTestCase_012341_2);

#define VkglTestCase_012342_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012342_2 "ops.interaction.basic_shader.30"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012342, VkglTestCase_012342_1, VkglTestCase_012342_2);

#define VkglTestCase_012343_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012343_2 "ops.interaction.basic_shader.31"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012343, VkglTestCase_012343_1, VkglTestCase_012343_2);

#define VkglTestCase_012344_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012344_2 "ops.interaction.basic_shader.32"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012344, VkglTestCase_012344_1, VkglTestCase_012344_2);

#define VkglTestCase_012345_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012345_2 "ops.interaction.basic_shader.33"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012345, VkglTestCase_012345_1, VkglTestCase_012345_2);

#define VkglTestCase_012346_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012346_2 "ops.interaction.basic_shader.34"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012346, VkglTestCase_012346_1, VkglTestCase_012346_2);

#define VkglTestCase_012347_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012347_2 "ops.interaction.basic_shader.35"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012347, VkglTestCase_012347_1, VkglTestCase_012347_2);

#define VkglTestCase_012348_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012348_2 "ops.interaction.basic_shader.36"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012348, VkglTestCase_012348_1, VkglTestCase_012348_2);

#define VkglTestCase_012349_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012349_2 "ops.interaction.basic_shader.37"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012349, VkglTestCase_012349_1, VkglTestCase_012349_2);

#define VkglTestCase_012350_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012350_2 "ops.interaction.basic_shader.38"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012350, VkglTestCase_012350_1, VkglTestCase_012350_2);

#define VkglTestCase_012351_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012351_2 "ops.interaction.basic_shader.39"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012351, VkglTestCase_012351_1, VkglTestCase_012351_2);

#define VkglTestCase_012352_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012352_2 "ops.interaction.basic_shader.40"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012352, VkglTestCase_012352_1, VkglTestCase_012352_2);

#define VkglTestCase_012353_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012353_2 "ops.interaction.basic_shader.41"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012353, VkglTestCase_012353_1, VkglTestCase_012353_2);

#define VkglTestCase_012354_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012354_2 "ops.interaction.basic_shader.42"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012354, VkglTestCase_012354_1, VkglTestCase_012354_2);

#define VkglTestCase_012355_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012355_2 "ops.interaction.basic_shader.43"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012355, VkglTestCase_012355_1, VkglTestCase_012355_2);

#define VkglTestCase_012356_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012356_2 "ops.interaction.basic_shader.44"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012356, VkglTestCase_012356_1, VkglTestCase_012356_2);

#define VkglTestCase_012357_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012357_2 "ops.interaction.basic_shader.45"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012357, VkglTestCase_012357_1, VkglTestCase_012357_2);

#define VkglTestCase_012358_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012358_2 "ops.interaction.basic_shader.46"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012358, VkglTestCase_012358_1, VkglTestCase_012358_2);

#define VkglTestCase_012359_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012359_2 "ops.interaction.basic_shader.47"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012359, VkglTestCase_012359_1, VkglTestCase_012359_2);

#define VkglTestCase_012360_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012360_2 "ops.interaction.basic_shader.48"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012360, VkglTestCase_012360_1, VkglTestCase_012360_2);

#define VkglTestCase_012361_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012361_2 "ops.interaction.basic_shader.49"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012361, VkglTestCase_012361_1, VkglTestCase_012361_2);

#define VkglTestCase_012362_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012362_2 "ops.interaction.basic_shader.50"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012362, VkglTestCase_012362_1, VkglTestCase_012362_2);

#define VkglTestCase_012363_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012363_2 "ops.interaction.basic_shader.51"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012363, VkglTestCase_012363_1, VkglTestCase_012363_2);

#define VkglTestCase_012364_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012364_2 "ops.interaction.basic_shader.52"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012364, VkglTestCase_012364_1, VkglTestCase_012364_2);

#define VkglTestCase_012365_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012365_2 "ops.interaction.basic_shader.53"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012365, VkglTestCase_012365_1, VkglTestCase_012365_2);

#define VkglTestCase_012366_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012366_2 "ops.interaction.basic_shader.54"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012366, VkglTestCase_012366_1, VkglTestCase_012366_2);

#define VkglTestCase_012367_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012367_2 "ops.interaction.basic_shader.55"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012367, VkglTestCase_012367_1, VkglTestCase_012367_2);

#define VkglTestCase_012368_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012368_2 "ops.interaction.basic_shader.56"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012368, VkglTestCase_012368_1, VkglTestCase_012368_2);

#define VkglTestCase_012369_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012369_2 "ops.interaction.basic_shader.57"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012369, VkglTestCase_012369_1, VkglTestCase_012369_2);

#define VkglTestCase_012370_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012370_2 "ops.interaction.basic_shader.58"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012370, VkglTestCase_012370_1, VkglTestCase_012370_2);

#define VkglTestCase_012371_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012371_2 "ops.interaction.basic_shader.59"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012371, VkglTestCase_012371_1, VkglTestCase_012371_2);

#define VkglTestCase_012372_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012372_2 "ops.interaction.basic_shader.60"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012372, VkglTestCase_012372_1, VkglTestCase_012372_2);

#define VkglTestCase_012373_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012373_2 "ops.interaction.basic_shader.61"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012373, VkglTestCase_012373_1, VkglTestCase_012373_2);

#define VkglTestCase_012374_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012374_2 "ops.interaction.basic_shader.62"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012374, VkglTestCase_012374_1, VkglTestCase_012374_2);

#define VkglTestCase_012375_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012375_2 "ops.interaction.basic_shader.63"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012375, VkglTestCase_012375_1, VkglTestCase_012375_2);

#define VkglTestCase_012376_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012376_2 "ops.interaction.basic_shader.64"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012376, VkglTestCase_012376_1, VkglTestCase_012376_2);

#define VkglTestCase_012377_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012377_2 "ops.interaction.basic_shader.65"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012377, VkglTestCase_012377_1, VkglTestCase_012377_2);

#define VkglTestCase_012378_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012378_2 "ops.interaction.basic_shader.66"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012378, VkglTestCase_012378_1, VkglTestCase_012378_2);

#define VkglTestCase_012379_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012379_2 "ops.interaction.basic_shader.67"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012379, VkglTestCase_012379_1, VkglTestCase_012379_2);

#define VkglTestCase_012380_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012380_2 "ops.interaction.basic_shader.68"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012380, VkglTestCase_012380_1, VkglTestCase_012380_2);

#define VkglTestCase_012381_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012381_2 "ops.interaction.basic_shader.69"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012381, VkglTestCase_012381_1, VkglTestCase_012381_2);

#define VkglTestCase_012382_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012382_2 "ops.interaction.basic_shader.70"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012382, VkglTestCase_012382_1, VkglTestCase_012382_2);

#define VkglTestCase_012383_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012383_2 "ops.interaction.basic_shader.71"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012383, VkglTestCase_012383_1, VkglTestCase_012383_2);

#define VkglTestCase_012384_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012384_2 "ops.interaction.basic_shader.72"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012384, VkglTestCase_012384_1, VkglTestCase_012384_2);

#define VkglTestCase_012385_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012385_2 "ops.interaction.basic_shader.73"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012385, VkglTestCase_012385_1, VkglTestCase_012385_2);

#define VkglTestCase_012386_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012386_2 "ops.interaction.basic_shader.74"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012386, VkglTestCase_012386_1, VkglTestCase_012386_2);

#define VkglTestCase_012387_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012387_2 "ops.interaction.basic_shader.75"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012387, VkglTestCase_012387_1, VkglTestCase_012387_2);

#define VkglTestCase_012388_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012388_2 "ops.interaction.basic_shader.76"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012388, VkglTestCase_012388_1, VkglTestCase_012388_2);

#define VkglTestCase_012389_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012389_2 "ops.interaction.basic_shader.77"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012389, VkglTestCase_012389_1, VkglTestCase_012389_2);

#define VkglTestCase_012390_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012390_2 "ops.interaction.basic_shader.78"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012390, VkglTestCase_012390_1, VkglTestCase_012390_2);

#define VkglTestCase_012391_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012391_2 "ops.interaction.basic_shader.79"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012391, VkglTestCase_012391_1, VkglTestCase_012391_2);

#define VkglTestCase_012392_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012392_2 "ops.interaction.basic_shader.80"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012392, VkglTestCase_012392_1, VkglTestCase_012392_2);

#define VkglTestCase_012393_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012393_2 "ops.interaction.basic_shader.81"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012393, VkglTestCase_012393_1, VkglTestCase_012393_2);

#define VkglTestCase_012394_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012394_2 "ops.interaction.basic_shader.82"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012394, VkglTestCase_012394_1, VkglTestCase_012394_2);

#define VkglTestCase_012395_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012395_2 "ops.interaction.basic_shader.83"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012395, VkglTestCase_012395_1, VkglTestCase_012395_2);

#define VkglTestCase_012396_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012396_2 "ops.interaction.basic_shader.84"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012396, VkglTestCase_012396_1, VkglTestCase_012396_2);

#define VkglTestCase_012397_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012397_2 "ops.interaction.basic_shader.85"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012397, VkglTestCase_012397_1, VkglTestCase_012397_2);

#define VkglTestCase_012398_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012398_2 "ops.interaction.basic_shader.86"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012398, VkglTestCase_012398_1, VkglTestCase_012398_2);

#define VkglTestCase_012399_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012399_2 "ops.interaction.basic_shader.87"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012399, VkglTestCase_012399_1, VkglTestCase_012399_2);

#define VkglTestCase_012400_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012400_2 "ops.interaction.basic_shader.88"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012400, VkglTestCase_012400_1, VkglTestCase_012400_2);

#define VkglTestCase_012401_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012401_2 "ops.interaction.basic_shader.89"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012401, VkglTestCase_012401_1, VkglTestCase_012401_2);

#define VkglTestCase_012402_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012402_2 "ops.interaction.basic_shader.90"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012402, VkglTestCase_012402_1, VkglTestCase_012402_2);

#define VkglTestCase_012403_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012403_2 "ops.interaction.basic_shader.91"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012403, VkglTestCase_012403_1, VkglTestCase_012403_2);

#define VkglTestCase_012404_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012404_2 "ops.interaction.basic_shader.92"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012404, VkglTestCase_012404_1, VkglTestCase_012404_2);

#define VkglTestCase_012405_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012405_2 "ops.interaction.basic_shader.93"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012405, VkglTestCase_012405_1, VkglTestCase_012405_2);

#define VkglTestCase_012406_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012406_2 "ops.interaction.basic_shader.94"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012406, VkglTestCase_012406_1, VkglTestCase_012406_2);

#define VkglTestCase_012407_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012407_2 "ops.interaction.basic_shader.95"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012407, VkglTestCase_012407_1, VkglTestCase_012407_2);

#define VkglTestCase_012408_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012408_2 "ops.interaction.basic_shader.96"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012408, VkglTestCase_012408_1, VkglTestCase_012408_2);

#define VkglTestCase_012409_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012409_2 "ops.interaction.basic_shader.97"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012409, VkglTestCase_012409_1, VkglTestCase_012409_2);

#define VkglTestCase_012410_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012410_2 "ops.interaction.basic_shader.98"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012410, VkglTestCase_012410_1, VkglTestCase_012410_2);

#define VkglTestCase_012411_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_012411_2 "ops.interaction.basic_shader.99"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012411, VkglTestCase_012411_1, VkglTestCase_012411_2);
