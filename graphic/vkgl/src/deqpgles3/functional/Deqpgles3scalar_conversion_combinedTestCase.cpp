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

#define VkglTestCase_020494_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020494_2 "ndom.scalar_conversion.combined.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020494, VkglTestCase_020494_1, VkglTestCase_020494_2);

#define VkglTestCase_020495_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020495_2 "ndom.scalar_conversion.combined.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020495, VkglTestCase_020495_1, VkglTestCase_020495_2);

#define VkglTestCase_020496_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020496_2 "ndom.scalar_conversion.combined.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020496, VkglTestCase_020496_1, VkglTestCase_020496_2);

#define VkglTestCase_020497_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020497_2 "ndom.scalar_conversion.combined.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020497, VkglTestCase_020497_1, VkglTestCase_020497_2);

#define VkglTestCase_020498_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020498_2 "ndom.scalar_conversion.combined.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020498, VkglTestCase_020498_1, VkglTestCase_020498_2);

#define VkglTestCase_020499_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020499_2 "ndom.scalar_conversion.combined.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020499, VkglTestCase_020499_1, VkglTestCase_020499_2);

#define VkglTestCase_020500_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020500_2 "ndom.scalar_conversion.combined.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020500, VkglTestCase_020500_1, VkglTestCase_020500_2);

#define VkglTestCase_020501_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020501_2 "ndom.scalar_conversion.combined.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020501, VkglTestCase_020501_1, VkglTestCase_020501_2);

#define VkglTestCase_020502_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020502_2 "ndom.scalar_conversion.combined.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020502, VkglTestCase_020502_1, VkglTestCase_020502_2);

#define VkglTestCase_020503_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020503_2 "ndom.scalar_conversion.combined.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020503, VkglTestCase_020503_1, VkglTestCase_020503_2);

#define VkglTestCase_020504_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020504_2 "dom.scalar_conversion.combined.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020504, VkglTestCase_020504_1, VkglTestCase_020504_2);

#define VkglTestCase_020505_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020505_2 "dom.scalar_conversion.combined.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020505, VkglTestCase_020505_1, VkglTestCase_020505_2);

#define VkglTestCase_020506_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020506_2 "dom.scalar_conversion.combined.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020506, VkglTestCase_020506_1, VkglTestCase_020506_2);

#define VkglTestCase_020507_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020507_2 "dom.scalar_conversion.combined.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020507, VkglTestCase_020507_1, VkglTestCase_020507_2);

#define VkglTestCase_020508_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020508_2 "dom.scalar_conversion.combined.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020508, VkglTestCase_020508_1, VkglTestCase_020508_2);

#define VkglTestCase_020509_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020509_2 "dom.scalar_conversion.combined.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020509, VkglTestCase_020509_1, VkglTestCase_020509_2);

#define VkglTestCase_020510_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020510_2 "dom.scalar_conversion.combined.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020510, VkglTestCase_020510_1, VkglTestCase_020510_2);

#define VkglTestCase_020511_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020511_2 "dom.scalar_conversion.combined.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020511, VkglTestCase_020511_1, VkglTestCase_020511_2);

#define VkglTestCase_020512_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020512_2 "dom.scalar_conversion.combined.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020512, VkglTestCase_020512_1, VkglTestCase_020512_2);

#define VkglTestCase_020513_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020513_2 "dom.scalar_conversion.combined.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020513, VkglTestCase_020513_1, VkglTestCase_020513_2);

#define VkglTestCase_020514_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020514_2 "dom.scalar_conversion.combined.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020514, VkglTestCase_020514_1, VkglTestCase_020514_2);

#define VkglTestCase_020515_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020515_2 "dom.scalar_conversion.combined.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020515, VkglTestCase_020515_1, VkglTestCase_020515_2);

#define VkglTestCase_020516_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020516_2 "dom.scalar_conversion.combined.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020516, VkglTestCase_020516_1, VkglTestCase_020516_2);

#define VkglTestCase_020517_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020517_2 "dom.scalar_conversion.combined.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020517, VkglTestCase_020517_1, VkglTestCase_020517_2);

#define VkglTestCase_020518_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020518_2 "dom.scalar_conversion.combined.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020518, VkglTestCase_020518_1, VkglTestCase_020518_2);

#define VkglTestCase_020519_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020519_2 "dom.scalar_conversion.combined.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020519, VkglTestCase_020519_1, VkglTestCase_020519_2);

#define VkglTestCase_020520_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020520_2 "dom.scalar_conversion.combined.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020520, VkglTestCase_020520_1, VkglTestCase_020520_2);

#define VkglTestCase_020521_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020521_2 "dom.scalar_conversion.combined.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020521, VkglTestCase_020521_1, VkglTestCase_020521_2);

#define VkglTestCase_020522_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020522_2 "dom.scalar_conversion.combined.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020522, VkglTestCase_020522_1, VkglTestCase_020522_2);

#define VkglTestCase_020523_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020523_2 "dom.scalar_conversion.combined.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020523, VkglTestCase_020523_1, VkglTestCase_020523_2);

#define VkglTestCase_020524_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020524_2 "dom.scalar_conversion.combined.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020524, VkglTestCase_020524_1, VkglTestCase_020524_2);

#define VkglTestCase_020525_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020525_2 "dom.scalar_conversion.combined.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020525, VkglTestCase_020525_1, VkglTestCase_020525_2);

#define VkglTestCase_020526_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020526_2 "dom.scalar_conversion.combined.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020526, VkglTestCase_020526_1, VkglTestCase_020526_2);

#define VkglTestCase_020527_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020527_2 "dom.scalar_conversion.combined.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020527, VkglTestCase_020527_1, VkglTestCase_020527_2);

#define VkglTestCase_020528_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020528_2 "dom.scalar_conversion.combined.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020528, VkglTestCase_020528_1, VkglTestCase_020528_2);

#define VkglTestCase_020529_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020529_2 "dom.scalar_conversion.combined.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020529, VkglTestCase_020529_1, VkglTestCase_020529_2);

#define VkglTestCase_020530_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020530_2 "dom.scalar_conversion.combined.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020530, VkglTestCase_020530_1, VkglTestCase_020530_2);

#define VkglTestCase_020531_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020531_2 "dom.scalar_conversion.combined.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020531, VkglTestCase_020531_1, VkglTestCase_020531_2);

#define VkglTestCase_020532_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020532_2 "dom.scalar_conversion.combined.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020532, VkglTestCase_020532_1, VkglTestCase_020532_2);

#define VkglTestCase_020533_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020533_2 "dom.scalar_conversion.combined.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020533, VkglTestCase_020533_1, VkglTestCase_020533_2);

#define VkglTestCase_020534_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020534_2 "dom.scalar_conversion.combined.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020534, VkglTestCase_020534_1, VkglTestCase_020534_2);

#define VkglTestCase_020535_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020535_2 "dom.scalar_conversion.combined.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020535, VkglTestCase_020535_1, VkglTestCase_020535_2);

#define VkglTestCase_020536_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020536_2 "dom.scalar_conversion.combined.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020536, VkglTestCase_020536_1, VkglTestCase_020536_2);

#define VkglTestCase_020537_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020537_2 "dom.scalar_conversion.combined.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020537, VkglTestCase_020537_1, VkglTestCase_020537_2);

#define VkglTestCase_020538_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020538_2 "dom.scalar_conversion.combined.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020538, VkglTestCase_020538_1, VkglTestCase_020538_2);

#define VkglTestCase_020539_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020539_2 "dom.scalar_conversion.combined.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020539, VkglTestCase_020539_1, VkglTestCase_020539_2);

#define VkglTestCase_020540_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020540_2 "dom.scalar_conversion.combined.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020540, VkglTestCase_020540_1, VkglTestCase_020540_2);

#define VkglTestCase_020541_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020541_2 "dom.scalar_conversion.combined.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020541, VkglTestCase_020541_1, VkglTestCase_020541_2);

#define VkglTestCase_020542_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020542_2 "dom.scalar_conversion.combined.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020542, VkglTestCase_020542_1, VkglTestCase_020542_2);

#define VkglTestCase_020543_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020543_2 "dom.scalar_conversion.combined.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020543, VkglTestCase_020543_1, VkglTestCase_020543_2);

#define VkglTestCase_020544_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020544_2 "dom.scalar_conversion.combined.50"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020544, VkglTestCase_020544_1, VkglTestCase_020544_2);

#define VkglTestCase_020545_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020545_2 "dom.scalar_conversion.combined.51"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020545, VkglTestCase_020545_1, VkglTestCase_020545_2);

#define VkglTestCase_020546_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020546_2 "dom.scalar_conversion.combined.52"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020546, VkglTestCase_020546_1, VkglTestCase_020546_2);

#define VkglTestCase_020547_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020547_2 "dom.scalar_conversion.combined.53"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020547, VkglTestCase_020547_1, VkglTestCase_020547_2);

#define VkglTestCase_020548_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020548_2 "dom.scalar_conversion.combined.54"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020548, VkglTestCase_020548_1, VkglTestCase_020548_2);

#define VkglTestCase_020549_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020549_2 "dom.scalar_conversion.combined.55"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020549, VkglTestCase_020549_1, VkglTestCase_020549_2);

#define VkglTestCase_020550_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020550_2 "dom.scalar_conversion.combined.56"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020550, VkglTestCase_020550_1, VkglTestCase_020550_2);

#define VkglTestCase_020551_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020551_2 "dom.scalar_conversion.combined.57"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020551, VkglTestCase_020551_1, VkglTestCase_020551_2);

#define VkglTestCase_020552_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020552_2 "dom.scalar_conversion.combined.58"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020552, VkglTestCase_020552_1, VkglTestCase_020552_2);

#define VkglTestCase_020553_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020553_2 "dom.scalar_conversion.combined.59"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020553, VkglTestCase_020553_1, VkglTestCase_020553_2);

#define VkglTestCase_020554_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020554_2 "dom.scalar_conversion.combined.60"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020554, VkglTestCase_020554_1, VkglTestCase_020554_2);

#define VkglTestCase_020555_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020555_2 "dom.scalar_conversion.combined.61"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020555, VkglTestCase_020555_1, VkglTestCase_020555_2);

#define VkglTestCase_020556_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020556_2 "dom.scalar_conversion.combined.62"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020556, VkglTestCase_020556_1, VkglTestCase_020556_2);

#define VkglTestCase_020557_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020557_2 "dom.scalar_conversion.combined.63"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020557, VkglTestCase_020557_1, VkglTestCase_020557_2);

#define VkglTestCase_020558_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020558_2 "dom.scalar_conversion.combined.64"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020558, VkglTestCase_020558_1, VkglTestCase_020558_2);

#define VkglTestCase_020559_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020559_2 "dom.scalar_conversion.combined.65"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020559, VkglTestCase_020559_1, VkglTestCase_020559_2);

#define VkglTestCase_020560_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020560_2 "dom.scalar_conversion.combined.66"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020560, VkglTestCase_020560_1, VkglTestCase_020560_2);

#define VkglTestCase_020561_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020561_2 "dom.scalar_conversion.combined.67"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020561, VkglTestCase_020561_1, VkglTestCase_020561_2);

#define VkglTestCase_020562_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020562_2 "dom.scalar_conversion.combined.68"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020562, VkglTestCase_020562_1, VkglTestCase_020562_2);

#define VkglTestCase_020563_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020563_2 "dom.scalar_conversion.combined.69"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020563, VkglTestCase_020563_1, VkglTestCase_020563_2);

#define VkglTestCase_020564_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020564_2 "dom.scalar_conversion.combined.70"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020564, VkglTestCase_020564_1, VkglTestCase_020564_2);

#define VkglTestCase_020565_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020565_2 "dom.scalar_conversion.combined.71"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020565, VkglTestCase_020565_1, VkglTestCase_020565_2);

#define VkglTestCase_020566_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020566_2 "dom.scalar_conversion.combined.72"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020566, VkglTestCase_020566_1, VkglTestCase_020566_2);

#define VkglTestCase_020567_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020567_2 "dom.scalar_conversion.combined.73"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020567, VkglTestCase_020567_1, VkglTestCase_020567_2);

#define VkglTestCase_020568_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020568_2 "dom.scalar_conversion.combined.74"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020568, VkglTestCase_020568_1, VkglTestCase_020568_2);

#define VkglTestCase_020569_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020569_2 "dom.scalar_conversion.combined.75"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020569, VkglTestCase_020569_1, VkglTestCase_020569_2);

#define VkglTestCase_020570_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020570_2 "dom.scalar_conversion.combined.76"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020570, VkglTestCase_020570_1, VkglTestCase_020570_2);

#define VkglTestCase_020571_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020571_2 "dom.scalar_conversion.combined.77"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020571, VkglTestCase_020571_1, VkglTestCase_020571_2);

#define VkglTestCase_020572_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020572_2 "dom.scalar_conversion.combined.78"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020572, VkglTestCase_020572_1, VkglTestCase_020572_2);

#define VkglTestCase_020573_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020573_2 "dom.scalar_conversion.combined.79"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020573, VkglTestCase_020573_1, VkglTestCase_020573_2);

#define VkglTestCase_020574_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020574_2 "dom.scalar_conversion.combined.80"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020574, VkglTestCase_020574_1, VkglTestCase_020574_2);

#define VkglTestCase_020575_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020575_2 "dom.scalar_conversion.combined.81"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020575, VkglTestCase_020575_1, VkglTestCase_020575_2);

#define VkglTestCase_020576_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020576_2 "dom.scalar_conversion.combined.82"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020576, VkglTestCase_020576_1, VkglTestCase_020576_2);

#define VkglTestCase_020577_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020577_2 "dom.scalar_conversion.combined.83"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020577, VkglTestCase_020577_1, VkglTestCase_020577_2);

#define VkglTestCase_020578_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020578_2 "dom.scalar_conversion.combined.84"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020578, VkglTestCase_020578_1, VkglTestCase_020578_2);

#define VkglTestCase_020579_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020579_2 "dom.scalar_conversion.combined.85"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020579, VkglTestCase_020579_1, VkglTestCase_020579_2);

#define VkglTestCase_020580_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020580_2 "dom.scalar_conversion.combined.86"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020580, VkglTestCase_020580_1, VkglTestCase_020580_2);

#define VkglTestCase_020581_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020581_2 "dom.scalar_conversion.combined.87"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020581, VkglTestCase_020581_1, VkglTestCase_020581_2);

#define VkglTestCase_020582_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020582_2 "dom.scalar_conversion.combined.88"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020582, VkglTestCase_020582_1, VkglTestCase_020582_2);

#define VkglTestCase_020583_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020583_2 "dom.scalar_conversion.combined.89"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020583, VkglTestCase_020583_1, VkglTestCase_020583_2);

#define VkglTestCase_020584_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020584_2 "dom.scalar_conversion.combined.90"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020584, VkglTestCase_020584_1, VkglTestCase_020584_2);

#define VkglTestCase_020585_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020585_2 "dom.scalar_conversion.combined.91"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020585, VkglTestCase_020585_1, VkglTestCase_020585_2);

#define VkglTestCase_020586_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020586_2 "dom.scalar_conversion.combined.92"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020586, VkglTestCase_020586_1, VkglTestCase_020586_2);

#define VkglTestCase_020587_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020587_2 "dom.scalar_conversion.combined.93"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020587, VkglTestCase_020587_1, VkglTestCase_020587_2);

#define VkglTestCase_020588_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020588_2 "dom.scalar_conversion.combined.94"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020588, VkglTestCase_020588_1, VkglTestCase_020588_2);

#define VkglTestCase_020589_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020589_2 "dom.scalar_conversion.combined.95"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020589, VkglTestCase_020589_1, VkglTestCase_020589_2);

#define VkglTestCase_020590_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020590_2 "dom.scalar_conversion.combined.96"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020590, VkglTestCase_020590_1, VkglTestCase_020590_2);

#define VkglTestCase_020591_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020591_2 "dom.scalar_conversion.combined.97"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020591, VkglTestCase_020591_1, VkglTestCase_020591_2);

#define VkglTestCase_020592_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020592_2 "dom.scalar_conversion.combined.98"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020592, VkglTestCase_020592_1, VkglTestCase_020592_2);

#define VkglTestCase_020593_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020593_2 "dom.scalar_conversion.combined.99"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020593, VkglTestCase_020593_1, VkglTestCase_020593_2);
