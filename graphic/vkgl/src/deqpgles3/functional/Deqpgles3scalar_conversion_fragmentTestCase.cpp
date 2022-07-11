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

#define VkglTestCase_020394_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020394_2 "ndom.scalar_conversion.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020394, VkglTestCase_020394_1, VkglTestCase_020394_2);

#define VkglTestCase_020395_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020395_2 "ndom.scalar_conversion.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020395, VkglTestCase_020395_1, VkglTestCase_020395_2);

#define VkglTestCase_020396_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020396_2 "ndom.scalar_conversion.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020396, VkglTestCase_020396_1, VkglTestCase_020396_2);

#define VkglTestCase_020397_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020397_2 "ndom.scalar_conversion.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020397, VkglTestCase_020397_1, VkglTestCase_020397_2);

#define VkglTestCase_020398_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020398_2 "ndom.scalar_conversion.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020398, VkglTestCase_020398_1, VkglTestCase_020398_2);

#define VkglTestCase_020399_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020399_2 "ndom.scalar_conversion.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020399, VkglTestCase_020399_1, VkglTestCase_020399_2);

#define VkglTestCase_020400_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020400_2 "ndom.scalar_conversion.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020400, VkglTestCase_020400_1, VkglTestCase_020400_2);

#define VkglTestCase_020401_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020401_2 "ndom.scalar_conversion.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020401, VkglTestCase_020401_1, VkglTestCase_020401_2);

#define VkglTestCase_020402_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020402_2 "ndom.scalar_conversion.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020402, VkglTestCase_020402_1, VkglTestCase_020402_2);

#define VkglTestCase_020403_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020403_2 "ndom.scalar_conversion.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020403, VkglTestCase_020403_1, VkglTestCase_020403_2);

#define VkglTestCase_020404_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020404_2 "dom.scalar_conversion.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020404, VkglTestCase_020404_1, VkglTestCase_020404_2);

#define VkglTestCase_020405_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020405_2 "dom.scalar_conversion.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020405, VkglTestCase_020405_1, VkglTestCase_020405_2);

#define VkglTestCase_020406_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020406_2 "dom.scalar_conversion.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020406, VkglTestCase_020406_1, VkglTestCase_020406_2);

#define VkglTestCase_020407_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020407_2 "dom.scalar_conversion.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020407, VkglTestCase_020407_1, VkglTestCase_020407_2);

#define VkglTestCase_020408_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020408_2 "dom.scalar_conversion.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020408, VkglTestCase_020408_1, VkglTestCase_020408_2);

#define VkglTestCase_020409_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020409_2 "dom.scalar_conversion.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020409, VkglTestCase_020409_1, VkglTestCase_020409_2);

#define VkglTestCase_020410_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020410_2 "dom.scalar_conversion.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020410, VkglTestCase_020410_1, VkglTestCase_020410_2);

#define VkglTestCase_020411_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020411_2 "dom.scalar_conversion.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020411, VkglTestCase_020411_1, VkglTestCase_020411_2);

#define VkglTestCase_020412_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020412_2 "dom.scalar_conversion.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020412, VkglTestCase_020412_1, VkglTestCase_020412_2);

#define VkglTestCase_020413_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020413_2 "dom.scalar_conversion.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020413, VkglTestCase_020413_1, VkglTestCase_020413_2);

#define VkglTestCase_020414_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020414_2 "dom.scalar_conversion.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020414, VkglTestCase_020414_1, VkglTestCase_020414_2);

#define VkglTestCase_020415_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020415_2 "dom.scalar_conversion.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020415, VkglTestCase_020415_1, VkglTestCase_020415_2);

#define VkglTestCase_020416_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020416_2 "dom.scalar_conversion.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020416, VkglTestCase_020416_1, VkglTestCase_020416_2);

#define VkglTestCase_020417_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020417_2 "dom.scalar_conversion.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020417, VkglTestCase_020417_1, VkglTestCase_020417_2);

#define VkglTestCase_020418_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020418_2 "dom.scalar_conversion.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020418, VkglTestCase_020418_1, VkglTestCase_020418_2);

#define VkglTestCase_020419_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020419_2 "dom.scalar_conversion.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020419, VkglTestCase_020419_1, VkglTestCase_020419_2);

#define VkglTestCase_020420_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020420_2 "dom.scalar_conversion.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020420, VkglTestCase_020420_1, VkglTestCase_020420_2);

#define VkglTestCase_020421_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020421_2 "dom.scalar_conversion.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020421, VkglTestCase_020421_1, VkglTestCase_020421_2);

#define VkglTestCase_020422_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020422_2 "dom.scalar_conversion.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020422, VkglTestCase_020422_1, VkglTestCase_020422_2);

#define VkglTestCase_020423_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020423_2 "dom.scalar_conversion.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020423, VkglTestCase_020423_1, VkglTestCase_020423_2);

#define VkglTestCase_020424_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020424_2 "dom.scalar_conversion.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020424, VkglTestCase_020424_1, VkglTestCase_020424_2);

#define VkglTestCase_020425_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020425_2 "dom.scalar_conversion.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020425, VkglTestCase_020425_1, VkglTestCase_020425_2);

#define VkglTestCase_020426_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020426_2 "dom.scalar_conversion.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020426, VkglTestCase_020426_1, VkglTestCase_020426_2);

#define VkglTestCase_020427_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020427_2 "dom.scalar_conversion.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020427, VkglTestCase_020427_1, VkglTestCase_020427_2);

#define VkglTestCase_020428_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020428_2 "dom.scalar_conversion.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020428, VkglTestCase_020428_1, VkglTestCase_020428_2);

#define VkglTestCase_020429_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020429_2 "dom.scalar_conversion.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020429, VkglTestCase_020429_1, VkglTestCase_020429_2);

#define VkglTestCase_020430_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020430_2 "dom.scalar_conversion.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020430, VkglTestCase_020430_1, VkglTestCase_020430_2);

#define VkglTestCase_020431_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020431_2 "dom.scalar_conversion.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020431, VkglTestCase_020431_1, VkglTestCase_020431_2);

#define VkglTestCase_020432_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020432_2 "dom.scalar_conversion.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020432, VkglTestCase_020432_1, VkglTestCase_020432_2);

#define VkglTestCase_020433_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020433_2 "dom.scalar_conversion.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020433, VkglTestCase_020433_1, VkglTestCase_020433_2);

#define VkglTestCase_020434_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020434_2 "dom.scalar_conversion.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020434, VkglTestCase_020434_1, VkglTestCase_020434_2);

#define VkglTestCase_020435_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020435_2 "dom.scalar_conversion.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020435, VkglTestCase_020435_1, VkglTestCase_020435_2);

#define VkglTestCase_020436_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020436_2 "dom.scalar_conversion.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020436, VkglTestCase_020436_1, VkglTestCase_020436_2);

#define VkglTestCase_020437_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020437_2 "dom.scalar_conversion.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020437, VkglTestCase_020437_1, VkglTestCase_020437_2);

#define VkglTestCase_020438_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020438_2 "dom.scalar_conversion.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020438, VkglTestCase_020438_1, VkglTestCase_020438_2);

#define VkglTestCase_020439_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020439_2 "dom.scalar_conversion.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020439, VkglTestCase_020439_1, VkglTestCase_020439_2);

#define VkglTestCase_020440_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020440_2 "dom.scalar_conversion.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020440, VkglTestCase_020440_1, VkglTestCase_020440_2);

#define VkglTestCase_020441_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020441_2 "dom.scalar_conversion.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020441, VkglTestCase_020441_1, VkglTestCase_020441_2);

#define VkglTestCase_020442_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020442_2 "dom.scalar_conversion.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020442, VkglTestCase_020442_1, VkglTestCase_020442_2);

#define VkglTestCase_020443_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020443_2 "dom.scalar_conversion.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020443, VkglTestCase_020443_1, VkglTestCase_020443_2);

#define VkglTestCase_020444_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020444_2 "dom.scalar_conversion.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020444, VkglTestCase_020444_1, VkglTestCase_020444_2);

#define VkglTestCase_020445_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020445_2 "dom.scalar_conversion.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020445, VkglTestCase_020445_1, VkglTestCase_020445_2);

#define VkglTestCase_020446_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020446_2 "dom.scalar_conversion.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020446, VkglTestCase_020446_1, VkglTestCase_020446_2);

#define VkglTestCase_020447_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020447_2 "dom.scalar_conversion.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020447, VkglTestCase_020447_1, VkglTestCase_020447_2);

#define VkglTestCase_020448_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020448_2 "dom.scalar_conversion.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020448, VkglTestCase_020448_1, VkglTestCase_020448_2);

#define VkglTestCase_020449_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020449_2 "dom.scalar_conversion.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020449, VkglTestCase_020449_1, VkglTestCase_020449_2);

#define VkglTestCase_020450_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020450_2 "dom.scalar_conversion.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020450, VkglTestCase_020450_1, VkglTestCase_020450_2);

#define VkglTestCase_020451_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020451_2 "dom.scalar_conversion.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020451, VkglTestCase_020451_1, VkglTestCase_020451_2);

#define VkglTestCase_020452_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020452_2 "dom.scalar_conversion.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020452, VkglTestCase_020452_1, VkglTestCase_020452_2);

#define VkglTestCase_020453_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020453_2 "dom.scalar_conversion.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020453, VkglTestCase_020453_1, VkglTestCase_020453_2);

#define VkglTestCase_020454_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020454_2 "dom.scalar_conversion.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020454, VkglTestCase_020454_1, VkglTestCase_020454_2);

#define VkglTestCase_020455_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020455_2 "dom.scalar_conversion.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020455, VkglTestCase_020455_1, VkglTestCase_020455_2);

#define VkglTestCase_020456_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020456_2 "dom.scalar_conversion.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020456, VkglTestCase_020456_1, VkglTestCase_020456_2);

#define VkglTestCase_020457_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020457_2 "dom.scalar_conversion.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020457, VkglTestCase_020457_1, VkglTestCase_020457_2);

#define VkglTestCase_020458_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020458_2 "dom.scalar_conversion.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020458, VkglTestCase_020458_1, VkglTestCase_020458_2);

#define VkglTestCase_020459_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020459_2 "dom.scalar_conversion.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020459, VkglTestCase_020459_1, VkglTestCase_020459_2);

#define VkglTestCase_020460_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020460_2 "dom.scalar_conversion.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020460, VkglTestCase_020460_1, VkglTestCase_020460_2);

#define VkglTestCase_020461_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020461_2 "dom.scalar_conversion.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020461, VkglTestCase_020461_1, VkglTestCase_020461_2);

#define VkglTestCase_020462_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020462_2 "dom.scalar_conversion.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020462, VkglTestCase_020462_1, VkglTestCase_020462_2);

#define VkglTestCase_020463_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020463_2 "dom.scalar_conversion.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020463, VkglTestCase_020463_1, VkglTestCase_020463_2);

#define VkglTestCase_020464_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020464_2 "dom.scalar_conversion.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020464, VkglTestCase_020464_1, VkglTestCase_020464_2);

#define VkglTestCase_020465_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020465_2 "dom.scalar_conversion.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020465, VkglTestCase_020465_1, VkglTestCase_020465_2);

#define VkglTestCase_020466_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020466_2 "dom.scalar_conversion.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020466, VkglTestCase_020466_1, VkglTestCase_020466_2);

#define VkglTestCase_020467_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020467_2 "dom.scalar_conversion.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020467, VkglTestCase_020467_1, VkglTestCase_020467_2);

#define VkglTestCase_020468_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020468_2 "dom.scalar_conversion.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020468, VkglTestCase_020468_1, VkglTestCase_020468_2);

#define VkglTestCase_020469_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020469_2 "dom.scalar_conversion.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020469, VkglTestCase_020469_1, VkglTestCase_020469_2);

#define VkglTestCase_020470_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020470_2 "dom.scalar_conversion.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020470, VkglTestCase_020470_1, VkglTestCase_020470_2);

#define VkglTestCase_020471_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020471_2 "dom.scalar_conversion.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020471, VkglTestCase_020471_1, VkglTestCase_020471_2);

#define VkglTestCase_020472_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020472_2 "dom.scalar_conversion.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020472, VkglTestCase_020472_1, VkglTestCase_020472_2);

#define VkglTestCase_020473_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020473_2 "dom.scalar_conversion.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020473, VkglTestCase_020473_1, VkglTestCase_020473_2);

#define VkglTestCase_020474_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020474_2 "dom.scalar_conversion.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020474, VkglTestCase_020474_1, VkglTestCase_020474_2);

#define VkglTestCase_020475_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020475_2 "dom.scalar_conversion.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020475, VkglTestCase_020475_1, VkglTestCase_020475_2);

#define VkglTestCase_020476_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020476_2 "dom.scalar_conversion.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020476, VkglTestCase_020476_1, VkglTestCase_020476_2);

#define VkglTestCase_020477_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020477_2 "dom.scalar_conversion.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020477, VkglTestCase_020477_1, VkglTestCase_020477_2);

#define VkglTestCase_020478_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020478_2 "dom.scalar_conversion.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020478, VkglTestCase_020478_1, VkglTestCase_020478_2);

#define VkglTestCase_020479_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020479_2 "dom.scalar_conversion.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020479, VkglTestCase_020479_1, VkglTestCase_020479_2);

#define VkglTestCase_020480_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020480_2 "dom.scalar_conversion.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020480, VkglTestCase_020480_1, VkglTestCase_020480_2);

#define VkglTestCase_020481_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020481_2 "dom.scalar_conversion.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020481, VkglTestCase_020481_1, VkglTestCase_020481_2);

#define VkglTestCase_020482_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020482_2 "dom.scalar_conversion.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020482, VkglTestCase_020482_1, VkglTestCase_020482_2);

#define VkglTestCase_020483_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020483_2 "dom.scalar_conversion.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020483, VkglTestCase_020483_1, VkglTestCase_020483_2);

#define VkglTestCase_020484_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020484_2 "dom.scalar_conversion.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020484, VkglTestCase_020484_1, VkglTestCase_020484_2);

#define VkglTestCase_020485_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020485_2 "dom.scalar_conversion.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020485, VkglTestCase_020485_1, VkglTestCase_020485_2);

#define VkglTestCase_020486_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020486_2 "dom.scalar_conversion.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020486, VkglTestCase_020486_1, VkglTestCase_020486_2);

#define VkglTestCase_020487_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020487_2 "dom.scalar_conversion.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020487, VkglTestCase_020487_1, VkglTestCase_020487_2);

#define VkglTestCase_020488_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020488_2 "dom.scalar_conversion.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020488, VkglTestCase_020488_1, VkglTestCase_020488_2);

#define VkglTestCase_020489_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020489_2 "dom.scalar_conversion.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020489, VkglTestCase_020489_1, VkglTestCase_020489_2);

#define VkglTestCase_020490_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020490_2 "dom.scalar_conversion.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020490, VkglTestCase_020490_1, VkglTestCase_020490_2);

#define VkglTestCase_020491_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020491_2 "dom.scalar_conversion.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020491, VkglTestCase_020491_1, VkglTestCase_020491_2);

#define VkglTestCase_020492_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020492_2 "dom.scalar_conversion.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020492, VkglTestCase_020492_1, VkglTestCase_020492_2);

#define VkglTestCase_020493_1 "dEQP-GLES3.functional.shaders.ran"
#define VkglTestCase_020493_2 "dom.scalar_conversion.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020493, VkglTestCase_020493_1, VkglTestCase_020493_2);
