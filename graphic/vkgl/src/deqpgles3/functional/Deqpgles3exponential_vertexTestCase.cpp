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

#define VkglTestCase_021285_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021285_2 "s.random.exponential.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021285, VkglTestCase_021285_1, VkglTestCase_021285_2);

#define VkglTestCase_021286_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021286_2 "s.random.exponential.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021286, VkglTestCase_021286_1, VkglTestCase_021286_2);

#define VkglTestCase_021287_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021287_2 "s.random.exponential.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021287, VkglTestCase_021287_1, VkglTestCase_021287_2);

#define VkglTestCase_021288_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021288_2 "s.random.exponential.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021288, VkglTestCase_021288_1, VkglTestCase_021288_2);

#define VkglTestCase_021289_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021289_2 "s.random.exponential.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021289, VkglTestCase_021289_1, VkglTestCase_021289_2);

#define VkglTestCase_021290_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021290_2 "s.random.exponential.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021290, VkglTestCase_021290_1, VkglTestCase_021290_2);

#define VkglTestCase_021291_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021291_2 "s.random.exponential.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021291, VkglTestCase_021291_1, VkglTestCase_021291_2);

#define VkglTestCase_021292_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021292_2 "s.random.exponential.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021292, VkglTestCase_021292_1, VkglTestCase_021292_2);

#define VkglTestCase_021293_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021293_2 "s.random.exponential.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021293, VkglTestCase_021293_1, VkglTestCase_021293_2);

#define VkglTestCase_021294_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021294_2 "s.random.exponential.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021294, VkglTestCase_021294_1, VkglTestCase_021294_2);

#define VkglTestCase_021295_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021295_2 ".random.exponential.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021295, VkglTestCase_021295_1, VkglTestCase_021295_2);

#define VkglTestCase_021296_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021296_2 ".random.exponential.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021296, VkglTestCase_021296_1, VkglTestCase_021296_2);

#define VkglTestCase_021297_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021297_2 ".random.exponential.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021297, VkglTestCase_021297_1, VkglTestCase_021297_2);

#define VkglTestCase_021298_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021298_2 ".random.exponential.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021298, VkglTestCase_021298_1, VkglTestCase_021298_2);

#define VkglTestCase_021299_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021299_2 ".random.exponential.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021299, VkglTestCase_021299_1, VkglTestCase_021299_2);

#define VkglTestCase_021300_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021300_2 ".random.exponential.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021300, VkglTestCase_021300_1, VkglTestCase_021300_2);

#define VkglTestCase_021301_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021301_2 ".random.exponential.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021301, VkglTestCase_021301_1, VkglTestCase_021301_2);

#define VkglTestCase_021302_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021302_2 ".random.exponential.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021302, VkglTestCase_021302_1, VkglTestCase_021302_2);

#define VkglTestCase_021303_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021303_2 ".random.exponential.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021303, VkglTestCase_021303_1, VkglTestCase_021303_2);

#define VkglTestCase_021304_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021304_2 ".random.exponential.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021304, VkglTestCase_021304_1, VkglTestCase_021304_2);

#define VkglTestCase_021305_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021305_2 ".random.exponential.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021305, VkglTestCase_021305_1, VkglTestCase_021305_2);

#define VkglTestCase_021306_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021306_2 ".random.exponential.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021306, VkglTestCase_021306_1, VkglTestCase_021306_2);

#define VkglTestCase_021307_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021307_2 ".random.exponential.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021307, VkglTestCase_021307_1, VkglTestCase_021307_2);

#define VkglTestCase_021308_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021308_2 ".random.exponential.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021308, VkglTestCase_021308_1, VkglTestCase_021308_2);

#define VkglTestCase_021309_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021309_2 ".random.exponential.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021309, VkglTestCase_021309_1, VkglTestCase_021309_2);

#define VkglTestCase_021310_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021310_2 ".random.exponential.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021310, VkglTestCase_021310_1, VkglTestCase_021310_2);

#define VkglTestCase_021311_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021311_2 ".random.exponential.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021311, VkglTestCase_021311_1, VkglTestCase_021311_2);

#define VkglTestCase_021312_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021312_2 ".random.exponential.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021312, VkglTestCase_021312_1, VkglTestCase_021312_2);

#define VkglTestCase_021313_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021313_2 ".random.exponential.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021313, VkglTestCase_021313_1, VkglTestCase_021313_2);

#define VkglTestCase_021314_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021314_2 ".random.exponential.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021314, VkglTestCase_021314_1, VkglTestCase_021314_2);

#define VkglTestCase_021315_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021315_2 ".random.exponential.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021315, VkglTestCase_021315_1, VkglTestCase_021315_2);

#define VkglTestCase_021316_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021316_2 ".random.exponential.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021316, VkglTestCase_021316_1, VkglTestCase_021316_2);

#define VkglTestCase_021317_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021317_2 ".random.exponential.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021317, VkglTestCase_021317_1, VkglTestCase_021317_2);

#define VkglTestCase_021318_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021318_2 ".random.exponential.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021318, VkglTestCase_021318_1, VkglTestCase_021318_2);

#define VkglTestCase_021319_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021319_2 ".random.exponential.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021319, VkglTestCase_021319_1, VkglTestCase_021319_2);

#define VkglTestCase_021320_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021320_2 ".random.exponential.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021320, VkglTestCase_021320_1, VkglTestCase_021320_2);

#define VkglTestCase_021321_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021321_2 ".random.exponential.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021321, VkglTestCase_021321_1, VkglTestCase_021321_2);

#define VkglTestCase_021322_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021322_2 ".random.exponential.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021322, VkglTestCase_021322_1, VkglTestCase_021322_2);

#define VkglTestCase_021323_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021323_2 ".random.exponential.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021323, VkglTestCase_021323_1, VkglTestCase_021323_2);

#define VkglTestCase_021324_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021324_2 ".random.exponential.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021324, VkglTestCase_021324_1, VkglTestCase_021324_2);

#define VkglTestCase_021325_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021325_2 ".random.exponential.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021325, VkglTestCase_021325_1, VkglTestCase_021325_2);

#define VkglTestCase_021326_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021326_2 ".random.exponential.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021326, VkglTestCase_021326_1, VkglTestCase_021326_2);

#define VkglTestCase_021327_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021327_2 ".random.exponential.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021327, VkglTestCase_021327_1, VkglTestCase_021327_2);

#define VkglTestCase_021328_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021328_2 ".random.exponential.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021328, VkglTestCase_021328_1, VkglTestCase_021328_2);

#define VkglTestCase_021329_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021329_2 ".random.exponential.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021329, VkglTestCase_021329_1, VkglTestCase_021329_2);

#define VkglTestCase_021330_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021330_2 ".random.exponential.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021330, VkglTestCase_021330_1, VkglTestCase_021330_2);

#define VkglTestCase_021331_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021331_2 ".random.exponential.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021331, VkglTestCase_021331_1, VkglTestCase_021331_2);

#define VkglTestCase_021332_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021332_2 ".random.exponential.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021332, VkglTestCase_021332_1, VkglTestCase_021332_2);

#define VkglTestCase_021333_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021333_2 ".random.exponential.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021333, VkglTestCase_021333_1, VkglTestCase_021333_2);

#define VkglTestCase_021334_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021334_2 ".random.exponential.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021334, VkglTestCase_021334_1, VkglTestCase_021334_2);

#define VkglTestCase_021335_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021335_2 ".random.exponential.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021335, VkglTestCase_021335_1, VkglTestCase_021335_2);

#define VkglTestCase_021336_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021336_2 ".random.exponential.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021336, VkglTestCase_021336_1, VkglTestCase_021336_2);

#define VkglTestCase_021337_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021337_2 ".random.exponential.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021337, VkglTestCase_021337_1, VkglTestCase_021337_2);

#define VkglTestCase_021338_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021338_2 ".random.exponential.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021338, VkglTestCase_021338_1, VkglTestCase_021338_2);

#define VkglTestCase_021339_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021339_2 ".random.exponential.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021339, VkglTestCase_021339_1, VkglTestCase_021339_2);

#define VkglTestCase_021340_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021340_2 ".random.exponential.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021340, VkglTestCase_021340_1, VkglTestCase_021340_2);

#define VkglTestCase_021341_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021341_2 ".random.exponential.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021341, VkglTestCase_021341_1, VkglTestCase_021341_2);

#define VkglTestCase_021342_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021342_2 ".random.exponential.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021342, VkglTestCase_021342_1, VkglTestCase_021342_2);

#define VkglTestCase_021343_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021343_2 ".random.exponential.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021343, VkglTestCase_021343_1, VkglTestCase_021343_2);

#define VkglTestCase_021344_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021344_2 ".random.exponential.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021344, VkglTestCase_021344_1, VkglTestCase_021344_2);

#define VkglTestCase_021345_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021345_2 ".random.exponential.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021345, VkglTestCase_021345_1, VkglTestCase_021345_2);

#define VkglTestCase_021346_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021346_2 ".random.exponential.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021346, VkglTestCase_021346_1, VkglTestCase_021346_2);

#define VkglTestCase_021347_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021347_2 ".random.exponential.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021347, VkglTestCase_021347_1, VkglTestCase_021347_2);

#define VkglTestCase_021348_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021348_2 ".random.exponential.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021348, VkglTestCase_021348_1, VkglTestCase_021348_2);

#define VkglTestCase_021349_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021349_2 ".random.exponential.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021349, VkglTestCase_021349_1, VkglTestCase_021349_2);

#define VkglTestCase_021350_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021350_2 ".random.exponential.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021350, VkglTestCase_021350_1, VkglTestCase_021350_2);

#define VkglTestCase_021351_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021351_2 ".random.exponential.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021351, VkglTestCase_021351_1, VkglTestCase_021351_2);

#define VkglTestCase_021352_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021352_2 ".random.exponential.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021352, VkglTestCase_021352_1, VkglTestCase_021352_2);

#define VkglTestCase_021353_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021353_2 ".random.exponential.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021353, VkglTestCase_021353_1, VkglTestCase_021353_2);

#define VkglTestCase_021354_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021354_2 ".random.exponential.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021354, VkglTestCase_021354_1, VkglTestCase_021354_2);

#define VkglTestCase_021355_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021355_2 ".random.exponential.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021355, VkglTestCase_021355_1, VkglTestCase_021355_2);

#define VkglTestCase_021356_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021356_2 ".random.exponential.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021356, VkglTestCase_021356_1, VkglTestCase_021356_2);

#define VkglTestCase_021357_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021357_2 ".random.exponential.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021357, VkglTestCase_021357_1, VkglTestCase_021357_2);

#define VkglTestCase_021358_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021358_2 ".random.exponential.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021358, VkglTestCase_021358_1, VkglTestCase_021358_2);

#define VkglTestCase_021359_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021359_2 ".random.exponential.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021359, VkglTestCase_021359_1, VkglTestCase_021359_2);

#define VkglTestCase_021360_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021360_2 ".random.exponential.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021360, VkglTestCase_021360_1, VkglTestCase_021360_2);

#define VkglTestCase_021361_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021361_2 ".random.exponential.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021361, VkglTestCase_021361_1, VkglTestCase_021361_2);

#define VkglTestCase_021362_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021362_2 ".random.exponential.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021362, VkglTestCase_021362_1, VkglTestCase_021362_2);

#define VkglTestCase_021363_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021363_2 ".random.exponential.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021363, VkglTestCase_021363_1, VkglTestCase_021363_2);

#define VkglTestCase_021364_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021364_2 ".random.exponential.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021364, VkglTestCase_021364_1, VkglTestCase_021364_2);

#define VkglTestCase_021365_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021365_2 ".random.exponential.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021365, VkglTestCase_021365_1, VkglTestCase_021365_2);

#define VkglTestCase_021366_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021366_2 ".random.exponential.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021366, VkglTestCase_021366_1, VkglTestCase_021366_2);

#define VkglTestCase_021367_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021367_2 ".random.exponential.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021367, VkglTestCase_021367_1, VkglTestCase_021367_2);

#define VkglTestCase_021368_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021368_2 ".random.exponential.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021368, VkglTestCase_021368_1, VkglTestCase_021368_2);

#define VkglTestCase_021369_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021369_2 ".random.exponential.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021369, VkglTestCase_021369_1, VkglTestCase_021369_2);

#define VkglTestCase_021370_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021370_2 ".random.exponential.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021370, VkglTestCase_021370_1, VkglTestCase_021370_2);

#define VkglTestCase_021371_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021371_2 ".random.exponential.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021371, VkglTestCase_021371_1, VkglTestCase_021371_2);

#define VkglTestCase_021372_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021372_2 ".random.exponential.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021372, VkglTestCase_021372_1, VkglTestCase_021372_2);

#define VkglTestCase_021373_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021373_2 ".random.exponential.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021373, VkglTestCase_021373_1, VkglTestCase_021373_2);

#define VkglTestCase_021374_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021374_2 ".random.exponential.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021374, VkglTestCase_021374_1, VkglTestCase_021374_2);

#define VkglTestCase_021375_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021375_2 ".random.exponential.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021375, VkglTestCase_021375_1, VkglTestCase_021375_2);

#define VkglTestCase_021376_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021376_2 ".random.exponential.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021376, VkglTestCase_021376_1, VkglTestCase_021376_2);

#define VkglTestCase_021377_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021377_2 ".random.exponential.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021377, VkglTestCase_021377_1, VkglTestCase_021377_2);

#define VkglTestCase_021378_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021378_2 ".random.exponential.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021378, VkglTestCase_021378_1, VkglTestCase_021378_2);

#define VkglTestCase_021379_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021379_2 ".random.exponential.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021379, VkglTestCase_021379_1, VkglTestCase_021379_2);

#define VkglTestCase_021380_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021380_2 ".random.exponential.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021380, VkglTestCase_021380_1, VkglTestCase_021380_2);

#define VkglTestCase_021381_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021381_2 ".random.exponential.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021381, VkglTestCase_021381_1, VkglTestCase_021381_2);

#define VkglTestCase_021382_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021382_2 ".random.exponential.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021382, VkglTestCase_021382_1, VkglTestCase_021382_2);

#define VkglTestCase_021383_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021383_2 ".random.exponential.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021383, VkglTestCase_021383_1, VkglTestCase_021383_2);

#define VkglTestCase_021384_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021384_2 ".random.exponential.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021384, VkglTestCase_021384_1, VkglTestCase_021384_2);
