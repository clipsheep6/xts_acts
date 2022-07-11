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

#define VkglTestCase_021385_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021385_2 ".random.exponential.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021385, VkglTestCase_021385_1, VkglTestCase_021385_2);

#define VkglTestCase_021386_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021386_2 ".random.exponential.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021386, VkglTestCase_021386_1, VkglTestCase_021386_2);

#define VkglTestCase_021387_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021387_2 ".random.exponential.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021387, VkglTestCase_021387_1, VkglTestCase_021387_2);

#define VkglTestCase_021388_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021388_2 ".random.exponential.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021388, VkglTestCase_021388_1, VkglTestCase_021388_2);

#define VkglTestCase_021389_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021389_2 ".random.exponential.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021389, VkglTestCase_021389_1, VkglTestCase_021389_2);

#define VkglTestCase_021390_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021390_2 ".random.exponential.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021390, VkglTestCase_021390_1, VkglTestCase_021390_2);

#define VkglTestCase_021391_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021391_2 ".random.exponential.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021391, VkglTestCase_021391_1, VkglTestCase_021391_2);

#define VkglTestCase_021392_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021392_2 ".random.exponential.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021392, VkglTestCase_021392_1, VkglTestCase_021392_2);

#define VkglTestCase_021393_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021393_2 ".random.exponential.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021393, VkglTestCase_021393_1, VkglTestCase_021393_2);

#define VkglTestCase_021394_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021394_2 ".random.exponential.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021394, VkglTestCase_021394_1, VkglTestCase_021394_2);

#define VkglTestCase_021395_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021395_2 "random.exponential.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021395, VkglTestCase_021395_1, VkglTestCase_021395_2);

#define VkglTestCase_021396_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021396_2 "random.exponential.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021396, VkglTestCase_021396_1, VkglTestCase_021396_2);

#define VkglTestCase_021397_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021397_2 "random.exponential.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021397, VkglTestCase_021397_1, VkglTestCase_021397_2);

#define VkglTestCase_021398_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021398_2 "random.exponential.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021398, VkglTestCase_021398_1, VkglTestCase_021398_2);

#define VkglTestCase_021399_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021399_2 "random.exponential.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021399, VkglTestCase_021399_1, VkglTestCase_021399_2);

#define VkglTestCase_021400_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021400_2 "random.exponential.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021400, VkglTestCase_021400_1, VkglTestCase_021400_2);

#define VkglTestCase_021401_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021401_2 "random.exponential.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021401, VkglTestCase_021401_1, VkglTestCase_021401_2);

#define VkglTestCase_021402_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021402_2 "random.exponential.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021402, VkglTestCase_021402_1, VkglTestCase_021402_2);

#define VkglTestCase_021403_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021403_2 "random.exponential.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021403, VkglTestCase_021403_1, VkglTestCase_021403_2);

#define VkglTestCase_021404_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021404_2 "random.exponential.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021404, VkglTestCase_021404_1, VkglTestCase_021404_2);

#define VkglTestCase_021405_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021405_2 "random.exponential.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021405, VkglTestCase_021405_1, VkglTestCase_021405_2);

#define VkglTestCase_021406_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021406_2 "random.exponential.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021406, VkglTestCase_021406_1, VkglTestCase_021406_2);

#define VkglTestCase_021407_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021407_2 "random.exponential.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021407, VkglTestCase_021407_1, VkglTestCase_021407_2);

#define VkglTestCase_021408_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021408_2 "random.exponential.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021408, VkglTestCase_021408_1, VkglTestCase_021408_2);

#define VkglTestCase_021409_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021409_2 "random.exponential.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021409, VkglTestCase_021409_1, VkglTestCase_021409_2);

#define VkglTestCase_021410_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021410_2 "random.exponential.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021410, VkglTestCase_021410_1, VkglTestCase_021410_2);

#define VkglTestCase_021411_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021411_2 "random.exponential.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021411, VkglTestCase_021411_1, VkglTestCase_021411_2);

#define VkglTestCase_021412_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021412_2 "random.exponential.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021412, VkglTestCase_021412_1, VkglTestCase_021412_2);

#define VkglTestCase_021413_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021413_2 "random.exponential.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021413, VkglTestCase_021413_1, VkglTestCase_021413_2);

#define VkglTestCase_021414_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021414_2 "random.exponential.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021414, VkglTestCase_021414_1, VkglTestCase_021414_2);

#define VkglTestCase_021415_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021415_2 "random.exponential.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021415, VkglTestCase_021415_1, VkglTestCase_021415_2);

#define VkglTestCase_021416_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021416_2 "random.exponential.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021416, VkglTestCase_021416_1, VkglTestCase_021416_2);

#define VkglTestCase_021417_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021417_2 "random.exponential.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021417, VkglTestCase_021417_1, VkglTestCase_021417_2);

#define VkglTestCase_021418_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021418_2 "random.exponential.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021418, VkglTestCase_021418_1, VkglTestCase_021418_2);

#define VkglTestCase_021419_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021419_2 "random.exponential.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021419, VkglTestCase_021419_1, VkglTestCase_021419_2);

#define VkglTestCase_021420_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021420_2 "random.exponential.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021420, VkglTestCase_021420_1, VkglTestCase_021420_2);

#define VkglTestCase_021421_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021421_2 "random.exponential.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021421, VkglTestCase_021421_1, VkglTestCase_021421_2);

#define VkglTestCase_021422_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021422_2 "random.exponential.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021422, VkglTestCase_021422_1, VkglTestCase_021422_2);

#define VkglTestCase_021423_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021423_2 "random.exponential.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021423, VkglTestCase_021423_1, VkglTestCase_021423_2);

#define VkglTestCase_021424_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021424_2 "random.exponential.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021424, VkglTestCase_021424_1, VkglTestCase_021424_2);

#define VkglTestCase_021425_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021425_2 "random.exponential.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021425, VkglTestCase_021425_1, VkglTestCase_021425_2);

#define VkglTestCase_021426_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021426_2 "random.exponential.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021426, VkglTestCase_021426_1, VkglTestCase_021426_2);

#define VkglTestCase_021427_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021427_2 "random.exponential.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021427, VkglTestCase_021427_1, VkglTestCase_021427_2);

#define VkglTestCase_021428_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021428_2 "random.exponential.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021428, VkglTestCase_021428_1, VkglTestCase_021428_2);

#define VkglTestCase_021429_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021429_2 "random.exponential.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021429, VkglTestCase_021429_1, VkglTestCase_021429_2);

#define VkglTestCase_021430_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021430_2 "random.exponential.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021430, VkglTestCase_021430_1, VkglTestCase_021430_2);

#define VkglTestCase_021431_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021431_2 "random.exponential.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021431, VkglTestCase_021431_1, VkglTestCase_021431_2);

#define VkglTestCase_021432_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021432_2 "random.exponential.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021432, VkglTestCase_021432_1, VkglTestCase_021432_2);

#define VkglTestCase_021433_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021433_2 "random.exponential.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021433, VkglTestCase_021433_1, VkglTestCase_021433_2);

#define VkglTestCase_021434_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021434_2 "random.exponential.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021434, VkglTestCase_021434_1, VkglTestCase_021434_2);

#define VkglTestCase_021435_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021435_2 "random.exponential.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021435, VkglTestCase_021435_1, VkglTestCase_021435_2);

#define VkglTestCase_021436_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021436_2 "random.exponential.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021436, VkglTestCase_021436_1, VkglTestCase_021436_2);

#define VkglTestCase_021437_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021437_2 "random.exponential.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021437, VkglTestCase_021437_1, VkglTestCase_021437_2);

#define VkglTestCase_021438_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021438_2 "random.exponential.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021438, VkglTestCase_021438_1, VkglTestCase_021438_2);

#define VkglTestCase_021439_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021439_2 "random.exponential.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021439, VkglTestCase_021439_1, VkglTestCase_021439_2);

#define VkglTestCase_021440_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021440_2 "random.exponential.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021440, VkglTestCase_021440_1, VkglTestCase_021440_2);

#define VkglTestCase_021441_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021441_2 "random.exponential.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021441, VkglTestCase_021441_1, VkglTestCase_021441_2);

#define VkglTestCase_021442_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021442_2 "random.exponential.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021442, VkglTestCase_021442_1, VkglTestCase_021442_2);

#define VkglTestCase_021443_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021443_2 "random.exponential.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021443, VkglTestCase_021443_1, VkglTestCase_021443_2);

#define VkglTestCase_021444_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021444_2 "random.exponential.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021444, VkglTestCase_021444_1, VkglTestCase_021444_2);

#define VkglTestCase_021445_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021445_2 "random.exponential.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021445, VkglTestCase_021445_1, VkglTestCase_021445_2);

#define VkglTestCase_021446_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021446_2 "random.exponential.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021446, VkglTestCase_021446_1, VkglTestCase_021446_2);

#define VkglTestCase_021447_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021447_2 "random.exponential.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021447, VkglTestCase_021447_1, VkglTestCase_021447_2);

#define VkglTestCase_021448_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021448_2 "random.exponential.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021448, VkglTestCase_021448_1, VkglTestCase_021448_2);

#define VkglTestCase_021449_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021449_2 "random.exponential.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021449, VkglTestCase_021449_1, VkglTestCase_021449_2);

#define VkglTestCase_021450_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021450_2 "random.exponential.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021450, VkglTestCase_021450_1, VkglTestCase_021450_2);

#define VkglTestCase_021451_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021451_2 "random.exponential.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021451, VkglTestCase_021451_1, VkglTestCase_021451_2);

#define VkglTestCase_021452_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021452_2 "random.exponential.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021452, VkglTestCase_021452_1, VkglTestCase_021452_2);

#define VkglTestCase_021453_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021453_2 "random.exponential.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021453, VkglTestCase_021453_1, VkglTestCase_021453_2);

#define VkglTestCase_021454_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021454_2 "random.exponential.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021454, VkglTestCase_021454_1, VkglTestCase_021454_2);

#define VkglTestCase_021455_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021455_2 "random.exponential.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021455, VkglTestCase_021455_1, VkglTestCase_021455_2);

#define VkglTestCase_021456_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021456_2 "random.exponential.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021456, VkglTestCase_021456_1, VkglTestCase_021456_2);

#define VkglTestCase_021457_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021457_2 "random.exponential.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021457, VkglTestCase_021457_1, VkglTestCase_021457_2);

#define VkglTestCase_021458_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021458_2 "random.exponential.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021458, VkglTestCase_021458_1, VkglTestCase_021458_2);

#define VkglTestCase_021459_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021459_2 "random.exponential.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021459, VkglTestCase_021459_1, VkglTestCase_021459_2);

#define VkglTestCase_021460_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021460_2 "random.exponential.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021460, VkglTestCase_021460_1, VkglTestCase_021460_2);

#define VkglTestCase_021461_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021461_2 "random.exponential.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021461, VkglTestCase_021461_1, VkglTestCase_021461_2);

#define VkglTestCase_021462_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021462_2 "random.exponential.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021462, VkglTestCase_021462_1, VkglTestCase_021462_2);

#define VkglTestCase_021463_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021463_2 "random.exponential.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021463, VkglTestCase_021463_1, VkglTestCase_021463_2);

#define VkglTestCase_021464_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021464_2 "random.exponential.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021464, VkglTestCase_021464_1, VkglTestCase_021464_2);

#define VkglTestCase_021465_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021465_2 "random.exponential.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021465, VkglTestCase_021465_1, VkglTestCase_021465_2);

#define VkglTestCase_021466_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021466_2 "random.exponential.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021466, VkglTestCase_021466_1, VkglTestCase_021466_2);

#define VkglTestCase_021467_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021467_2 "random.exponential.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021467, VkglTestCase_021467_1, VkglTestCase_021467_2);

#define VkglTestCase_021468_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021468_2 "random.exponential.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021468, VkglTestCase_021468_1, VkglTestCase_021468_2);

#define VkglTestCase_021469_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021469_2 "random.exponential.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021469, VkglTestCase_021469_1, VkglTestCase_021469_2);

#define VkglTestCase_021470_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021470_2 "random.exponential.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021470, VkglTestCase_021470_1, VkglTestCase_021470_2);

#define VkglTestCase_021471_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021471_2 "random.exponential.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021471, VkglTestCase_021471_1, VkglTestCase_021471_2);

#define VkglTestCase_021472_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021472_2 "random.exponential.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021472, VkglTestCase_021472_1, VkglTestCase_021472_2);

#define VkglTestCase_021473_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021473_2 "random.exponential.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021473, VkglTestCase_021473_1, VkglTestCase_021473_2);

#define VkglTestCase_021474_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021474_2 "random.exponential.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021474, VkglTestCase_021474_1, VkglTestCase_021474_2);

#define VkglTestCase_021475_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021475_2 "random.exponential.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021475, VkglTestCase_021475_1, VkglTestCase_021475_2);

#define VkglTestCase_021476_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021476_2 "random.exponential.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021476, VkglTestCase_021476_1, VkglTestCase_021476_2);

#define VkglTestCase_021477_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021477_2 "random.exponential.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021477, VkglTestCase_021477_1, VkglTestCase_021477_2);

#define VkglTestCase_021478_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021478_2 "random.exponential.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021478, VkglTestCase_021478_1, VkglTestCase_021478_2);

#define VkglTestCase_021479_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021479_2 "random.exponential.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021479, VkglTestCase_021479_1, VkglTestCase_021479_2);

#define VkglTestCase_021480_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021480_2 "random.exponential.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021480, VkglTestCase_021480_1, VkglTestCase_021480_2);

#define VkglTestCase_021481_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021481_2 "random.exponential.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021481, VkglTestCase_021481_1, VkglTestCase_021481_2);

#define VkglTestCase_021482_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021482_2 "random.exponential.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021482, VkglTestCase_021482_1, VkglTestCase_021482_2);

#define VkglTestCase_021483_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021483_2 "random.exponential.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021483, VkglTestCase_021483_1, VkglTestCase_021483_2);

#define VkglTestCase_021484_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021484_2 "random.exponential.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021484, VkglTestCase_021484_1, VkglTestCase_021484_2);
