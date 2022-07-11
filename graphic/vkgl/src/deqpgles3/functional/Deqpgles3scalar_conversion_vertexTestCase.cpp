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

#define VkglTestCase_020294_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020294_2 "andom.scalar_conversion.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020294, VkglTestCase_020294_1, VkglTestCase_020294_2);

#define VkglTestCase_020295_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020295_2 "andom.scalar_conversion.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020295, VkglTestCase_020295_1, VkglTestCase_020295_2);

#define VkglTestCase_020296_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020296_2 "andom.scalar_conversion.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020296, VkglTestCase_020296_1, VkglTestCase_020296_2);

#define VkglTestCase_020297_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020297_2 "andom.scalar_conversion.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020297, VkglTestCase_020297_1, VkglTestCase_020297_2);

#define VkglTestCase_020298_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020298_2 "andom.scalar_conversion.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020298, VkglTestCase_020298_1, VkglTestCase_020298_2);

#define VkglTestCase_020299_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020299_2 "andom.scalar_conversion.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020299, VkglTestCase_020299_1, VkglTestCase_020299_2);

#define VkglTestCase_020300_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020300_2 "andom.scalar_conversion.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020300, VkglTestCase_020300_1, VkglTestCase_020300_2);

#define VkglTestCase_020301_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020301_2 "andom.scalar_conversion.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020301, VkglTestCase_020301_1, VkglTestCase_020301_2);

#define VkglTestCase_020302_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020302_2 "andom.scalar_conversion.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020302, VkglTestCase_020302_1, VkglTestCase_020302_2);

#define VkglTestCase_020303_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020303_2 "andom.scalar_conversion.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020303, VkglTestCase_020303_1, VkglTestCase_020303_2);

#define VkglTestCase_020304_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020304_2 "ndom.scalar_conversion.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020304, VkglTestCase_020304_1, VkglTestCase_020304_2);

#define VkglTestCase_020305_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020305_2 "ndom.scalar_conversion.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020305, VkglTestCase_020305_1, VkglTestCase_020305_2);

#define VkglTestCase_020306_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020306_2 "ndom.scalar_conversion.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020306, VkglTestCase_020306_1, VkglTestCase_020306_2);

#define VkglTestCase_020307_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020307_2 "ndom.scalar_conversion.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020307, VkglTestCase_020307_1, VkglTestCase_020307_2);

#define VkglTestCase_020308_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020308_2 "ndom.scalar_conversion.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020308, VkglTestCase_020308_1, VkglTestCase_020308_2);

#define VkglTestCase_020309_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020309_2 "ndom.scalar_conversion.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020309, VkglTestCase_020309_1, VkglTestCase_020309_2);

#define VkglTestCase_020310_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020310_2 "ndom.scalar_conversion.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020310, VkglTestCase_020310_1, VkglTestCase_020310_2);

#define VkglTestCase_020311_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020311_2 "ndom.scalar_conversion.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020311, VkglTestCase_020311_1, VkglTestCase_020311_2);

#define VkglTestCase_020312_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020312_2 "ndom.scalar_conversion.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020312, VkglTestCase_020312_1, VkglTestCase_020312_2);

#define VkglTestCase_020313_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020313_2 "ndom.scalar_conversion.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020313, VkglTestCase_020313_1, VkglTestCase_020313_2);

#define VkglTestCase_020314_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020314_2 "ndom.scalar_conversion.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020314, VkglTestCase_020314_1, VkglTestCase_020314_2);

#define VkglTestCase_020315_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020315_2 "ndom.scalar_conversion.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020315, VkglTestCase_020315_1, VkglTestCase_020315_2);

#define VkglTestCase_020316_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020316_2 "ndom.scalar_conversion.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020316, VkglTestCase_020316_1, VkglTestCase_020316_2);

#define VkglTestCase_020317_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020317_2 "ndom.scalar_conversion.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020317, VkglTestCase_020317_1, VkglTestCase_020317_2);

#define VkglTestCase_020318_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020318_2 "ndom.scalar_conversion.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020318, VkglTestCase_020318_1, VkglTestCase_020318_2);

#define VkglTestCase_020319_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020319_2 "ndom.scalar_conversion.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020319, VkglTestCase_020319_1, VkglTestCase_020319_2);

#define VkglTestCase_020320_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020320_2 "ndom.scalar_conversion.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020320, VkglTestCase_020320_1, VkglTestCase_020320_2);

#define VkglTestCase_020321_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020321_2 "ndom.scalar_conversion.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020321, VkglTestCase_020321_1, VkglTestCase_020321_2);

#define VkglTestCase_020322_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020322_2 "ndom.scalar_conversion.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020322, VkglTestCase_020322_1, VkglTestCase_020322_2);

#define VkglTestCase_020323_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020323_2 "ndom.scalar_conversion.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020323, VkglTestCase_020323_1, VkglTestCase_020323_2);

#define VkglTestCase_020324_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020324_2 "ndom.scalar_conversion.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020324, VkglTestCase_020324_1, VkglTestCase_020324_2);

#define VkglTestCase_020325_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020325_2 "ndom.scalar_conversion.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020325, VkglTestCase_020325_1, VkglTestCase_020325_2);

#define VkglTestCase_020326_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020326_2 "ndom.scalar_conversion.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020326, VkglTestCase_020326_1, VkglTestCase_020326_2);

#define VkglTestCase_020327_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020327_2 "ndom.scalar_conversion.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020327, VkglTestCase_020327_1, VkglTestCase_020327_2);

#define VkglTestCase_020328_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020328_2 "ndom.scalar_conversion.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020328, VkglTestCase_020328_1, VkglTestCase_020328_2);

#define VkglTestCase_020329_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020329_2 "ndom.scalar_conversion.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020329, VkglTestCase_020329_1, VkglTestCase_020329_2);

#define VkglTestCase_020330_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020330_2 "ndom.scalar_conversion.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020330, VkglTestCase_020330_1, VkglTestCase_020330_2);

#define VkglTestCase_020331_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020331_2 "ndom.scalar_conversion.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020331, VkglTestCase_020331_1, VkglTestCase_020331_2);

#define VkglTestCase_020332_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020332_2 "ndom.scalar_conversion.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020332, VkglTestCase_020332_1, VkglTestCase_020332_2);

#define VkglTestCase_020333_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020333_2 "ndom.scalar_conversion.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020333, VkglTestCase_020333_1, VkglTestCase_020333_2);

#define VkglTestCase_020334_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020334_2 "ndom.scalar_conversion.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020334, VkglTestCase_020334_1, VkglTestCase_020334_2);

#define VkglTestCase_020335_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020335_2 "ndom.scalar_conversion.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020335, VkglTestCase_020335_1, VkglTestCase_020335_2);

#define VkglTestCase_020336_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020336_2 "ndom.scalar_conversion.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020336, VkglTestCase_020336_1, VkglTestCase_020336_2);

#define VkglTestCase_020337_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020337_2 "ndom.scalar_conversion.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020337, VkglTestCase_020337_1, VkglTestCase_020337_2);

#define VkglTestCase_020338_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020338_2 "ndom.scalar_conversion.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020338, VkglTestCase_020338_1, VkglTestCase_020338_2);

#define VkglTestCase_020339_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020339_2 "ndom.scalar_conversion.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020339, VkglTestCase_020339_1, VkglTestCase_020339_2);

#define VkglTestCase_020340_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020340_2 "ndom.scalar_conversion.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020340, VkglTestCase_020340_1, VkglTestCase_020340_2);

#define VkglTestCase_020341_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020341_2 "ndom.scalar_conversion.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020341, VkglTestCase_020341_1, VkglTestCase_020341_2);

#define VkglTestCase_020342_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020342_2 "ndom.scalar_conversion.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020342, VkglTestCase_020342_1, VkglTestCase_020342_2);

#define VkglTestCase_020343_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020343_2 "ndom.scalar_conversion.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020343, VkglTestCase_020343_1, VkglTestCase_020343_2);

#define VkglTestCase_020344_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020344_2 "ndom.scalar_conversion.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020344, VkglTestCase_020344_1, VkglTestCase_020344_2);

#define VkglTestCase_020345_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020345_2 "ndom.scalar_conversion.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020345, VkglTestCase_020345_1, VkglTestCase_020345_2);

#define VkglTestCase_020346_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020346_2 "ndom.scalar_conversion.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020346, VkglTestCase_020346_1, VkglTestCase_020346_2);

#define VkglTestCase_020347_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020347_2 "ndom.scalar_conversion.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020347, VkglTestCase_020347_1, VkglTestCase_020347_2);

#define VkglTestCase_020348_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020348_2 "ndom.scalar_conversion.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020348, VkglTestCase_020348_1, VkglTestCase_020348_2);

#define VkglTestCase_020349_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020349_2 "ndom.scalar_conversion.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020349, VkglTestCase_020349_1, VkglTestCase_020349_2);

#define VkglTestCase_020350_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020350_2 "ndom.scalar_conversion.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020350, VkglTestCase_020350_1, VkglTestCase_020350_2);

#define VkglTestCase_020351_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020351_2 "ndom.scalar_conversion.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020351, VkglTestCase_020351_1, VkglTestCase_020351_2);

#define VkglTestCase_020352_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020352_2 "ndom.scalar_conversion.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020352, VkglTestCase_020352_1, VkglTestCase_020352_2);

#define VkglTestCase_020353_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020353_2 "ndom.scalar_conversion.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020353, VkglTestCase_020353_1, VkglTestCase_020353_2);

#define VkglTestCase_020354_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020354_2 "ndom.scalar_conversion.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020354, VkglTestCase_020354_1, VkglTestCase_020354_2);

#define VkglTestCase_020355_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020355_2 "ndom.scalar_conversion.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020355, VkglTestCase_020355_1, VkglTestCase_020355_2);

#define VkglTestCase_020356_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020356_2 "ndom.scalar_conversion.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020356, VkglTestCase_020356_1, VkglTestCase_020356_2);

#define VkglTestCase_020357_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020357_2 "ndom.scalar_conversion.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020357, VkglTestCase_020357_1, VkglTestCase_020357_2);

#define VkglTestCase_020358_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020358_2 "ndom.scalar_conversion.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020358, VkglTestCase_020358_1, VkglTestCase_020358_2);

#define VkglTestCase_020359_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020359_2 "ndom.scalar_conversion.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020359, VkglTestCase_020359_1, VkglTestCase_020359_2);

#define VkglTestCase_020360_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020360_2 "ndom.scalar_conversion.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020360, VkglTestCase_020360_1, VkglTestCase_020360_2);

#define VkglTestCase_020361_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020361_2 "ndom.scalar_conversion.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020361, VkglTestCase_020361_1, VkglTestCase_020361_2);

#define VkglTestCase_020362_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020362_2 "ndom.scalar_conversion.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020362, VkglTestCase_020362_1, VkglTestCase_020362_2);

#define VkglTestCase_020363_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020363_2 "ndom.scalar_conversion.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020363, VkglTestCase_020363_1, VkglTestCase_020363_2);

#define VkglTestCase_020364_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020364_2 "ndom.scalar_conversion.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020364, VkglTestCase_020364_1, VkglTestCase_020364_2);

#define VkglTestCase_020365_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020365_2 "ndom.scalar_conversion.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020365, VkglTestCase_020365_1, VkglTestCase_020365_2);

#define VkglTestCase_020366_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020366_2 "ndom.scalar_conversion.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020366, VkglTestCase_020366_1, VkglTestCase_020366_2);

#define VkglTestCase_020367_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020367_2 "ndom.scalar_conversion.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020367, VkglTestCase_020367_1, VkglTestCase_020367_2);

#define VkglTestCase_020368_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020368_2 "ndom.scalar_conversion.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020368, VkglTestCase_020368_1, VkglTestCase_020368_2);

#define VkglTestCase_020369_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020369_2 "ndom.scalar_conversion.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020369, VkglTestCase_020369_1, VkglTestCase_020369_2);

#define VkglTestCase_020370_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020370_2 "ndom.scalar_conversion.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020370, VkglTestCase_020370_1, VkglTestCase_020370_2);

#define VkglTestCase_020371_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020371_2 "ndom.scalar_conversion.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020371, VkglTestCase_020371_1, VkglTestCase_020371_2);

#define VkglTestCase_020372_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020372_2 "ndom.scalar_conversion.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020372, VkglTestCase_020372_1, VkglTestCase_020372_2);

#define VkglTestCase_020373_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020373_2 "ndom.scalar_conversion.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020373, VkglTestCase_020373_1, VkglTestCase_020373_2);

#define VkglTestCase_020374_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020374_2 "ndom.scalar_conversion.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020374, VkglTestCase_020374_1, VkglTestCase_020374_2);

#define VkglTestCase_020375_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020375_2 "ndom.scalar_conversion.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020375, VkglTestCase_020375_1, VkglTestCase_020375_2);

#define VkglTestCase_020376_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020376_2 "ndom.scalar_conversion.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020376, VkglTestCase_020376_1, VkglTestCase_020376_2);

#define VkglTestCase_020377_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020377_2 "ndom.scalar_conversion.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020377, VkglTestCase_020377_1, VkglTestCase_020377_2);

#define VkglTestCase_020378_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020378_2 "ndom.scalar_conversion.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020378, VkglTestCase_020378_1, VkglTestCase_020378_2);

#define VkglTestCase_020379_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020379_2 "ndom.scalar_conversion.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020379, VkglTestCase_020379_1, VkglTestCase_020379_2);

#define VkglTestCase_020380_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020380_2 "ndom.scalar_conversion.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020380, VkglTestCase_020380_1, VkglTestCase_020380_2);

#define VkglTestCase_020381_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020381_2 "ndom.scalar_conversion.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020381, VkglTestCase_020381_1, VkglTestCase_020381_2);

#define VkglTestCase_020382_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020382_2 "ndom.scalar_conversion.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020382, VkglTestCase_020382_1, VkglTestCase_020382_2);

#define VkglTestCase_020383_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020383_2 "ndom.scalar_conversion.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020383, VkglTestCase_020383_1, VkglTestCase_020383_2);

#define VkglTestCase_020384_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020384_2 "ndom.scalar_conversion.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020384, VkglTestCase_020384_1, VkglTestCase_020384_2);

#define VkglTestCase_020385_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020385_2 "ndom.scalar_conversion.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020385, VkglTestCase_020385_1, VkglTestCase_020385_2);

#define VkglTestCase_020386_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020386_2 "ndom.scalar_conversion.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020386, VkglTestCase_020386_1, VkglTestCase_020386_2);

#define VkglTestCase_020387_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020387_2 "ndom.scalar_conversion.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020387, VkglTestCase_020387_1, VkglTestCase_020387_2);

#define VkglTestCase_020388_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020388_2 "ndom.scalar_conversion.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020388, VkglTestCase_020388_1, VkglTestCase_020388_2);

#define VkglTestCase_020389_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020389_2 "ndom.scalar_conversion.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020389, VkglTestCase_020389_1, VkglTestCase_020389_2);

#define VkglTestCase_020390_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020390_2 "ndom.scalar_conversion.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020390, VkglTestCase_020390_1, VkglTestCase_020390_2);

#define VkglTestCase_020391_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020391_2 "ndom.scalar_conversion.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020391, VkglTestCase_020391_1, VkglTestCase_020391_2);

#define VkglTestCase_020392_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020392_2 "ndom.scalar_conversion.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020392, VkglTestCase_020392_1, VkglTestCase_020392_2);

#define VkglTestCase_020393_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020393_2 "ndom.scalar_conversion.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020393, VkglTestCase_020393_1, VkglTestCase_020393_2);
