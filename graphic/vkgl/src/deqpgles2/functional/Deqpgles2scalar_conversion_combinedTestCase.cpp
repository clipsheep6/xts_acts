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

#define VkglTestCase_008832_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008832_2 "ndom.scalar_conversion.combined.0"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008832, VkglTestCase_008832_1, VkglTestCase_008832_2);

#define VkglTestCase_008833_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008833_2 "ndom.scalar_conversion.combined.1"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008833, VkglTestCase_008833_1, VkglTestCase_008833_2);

#define VkglTestCase_008834_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008834_2 "ndom.scalar_conversion.combined.2"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008834, VkglTestCase_008834_1, VkglTestCase_008834_2);

#define VkglTestCase_008835_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008835_2 "ndom.scalar_conversion.combined.3"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008835, VkglTestCase_008835_1, VkglTestCase_008835_2);

#define VkglTestCase_008836_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008836_2 "ndom.scalar_conversion.combined.4"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008836, VkglTestCase_008836_1, VkglTestCase_008836_2);

#define VkglTestCase_008837_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008837_2 "ndom.scalar_conversion.combined.5"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008837, VkglTestCase_008837_1, VkglTestCase_008837_2);

#define VkglTestCase_008838_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008838_2 "ndom.scalar_conversion.combined.6"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008838, VkglTestCase_008838_1, VkglTestCase_008838_2);

#define VkglTestCase_008839_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008839_2 "ndom.scalar_conversion.combined.7"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008839, VkglTestCase_008839_1, VkglTestCase_008839_2);

#define VkglTestCase_008840_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008840_2 "ndom.scalar_conversion.combined.8"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008840, VkglTestCase_008840_1, VkglTestCase_008840_2);

#define VkglTestCase_008841_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008841_2 "ndom.scalar_conversion.combined.9"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008841, VkglTestCase_008841_1, VkglTestCase_008841_2);

#define VkglTestCase_008842_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008842_2 "dom.scalar_conversion.combined.10"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008842, VkglTestCase_008842_1, VkglTestCase_008842_2);

#define VkglTestCase_008843_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008843_2 "dom.scalar_conversion.combined.11"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008843, VkglTestCase_008843_1, VkglTestCase_008843_2);

#define VkglTestCase_008844_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008844_2 "dom.scalar_conversion.combined.12"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008844, VkglTestCase_008844_1, VkglTestCase_008844_2);

#define VkglTestCase_008845_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008845_2 "dom.scalar_conversion.combined.13"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008845, VkglTestCase_008845_1, VkglTestCase_008845_2);

#define VkglTestCase_008846_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008846_2 "dom.scalar_conversion.combined.14"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008846, VkglTestCase_008846_1, VkglTestCase_008846_2);

#define VkglTestCase_008847_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008847_2 "dom.scalar_conversion.combined.15"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008847, VkglTestCase_008847_1, VkglTestCase_008847_2);

#define VkglTestCase_008848_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008848_2 "dom.scalar_conversion.combined.16"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008848, VkglTestCase_008848_1, VkglTestCase_008848_2);

#define VkglTestCase_008849_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008849_2 "dom.scalar_conversion.combined.17"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008849, VkglTestCase_008849_1, VkglTestCase_008849_2);

#define VkglTestCase_008850_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008850_2 "dom.scalar_conversion.combined.18"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008850, VkglTestCase_008850_1, VkglTestCase_008850_2);

#define VkglTestCase_008851_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008851_2 "dom.scalar_conversion.combined.19"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008851, VkglTestCase_008851_1, VkglTestCase_008851_2);

#define VkglTestCase_008852_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008852_2 "dom.scalar_conversion.combined.20"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008852, VkglTestCase_008852_1, VkglTestCase_008852_2);

#define VkglTestCase_008853_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008853_2 "dom.scalar_conversion.combined.21"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008853, VkglTestCase_008853_1, VkglTestCase_008853_2);

#define VkglTestCase_008854_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008854_2 "dom.scalar_conversion.combined.22"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008854, VkglTestCase_008854_1, VkglTestCase_008854_2);

#define VkglTestCase_008855_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008855_2 "dom.scalar_conversion.combined.23"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008855, VkglTestCase_008855_1, VkglTestCase_008855_2);

#define VkglTestCase_008856_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008856_2 "dom.scalar_conversion.combined.24"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008856, VkglTestCase_008856_1, VkglTestCase_008856_2);

#define VkglTestCase_008857_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008857_2 "dom.scalar_conversion.combined.25"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008857, VkglTestCase_008857_1, VkglTestCase_008857_2);

#define VkglTestCase_008858_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008858_2 "dom.scalar_conversion.combined.26"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008858, VkglTestCase_008858_1, VkglTestCase_008858_2);

#define VkglTestCase_008859_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008859_2 "dom.scalar_conversion.combined.27"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008859, VkglTestCase_008859_1, VkglTestCase_008859_2);

#define VkglTestCase_008860_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008860_2 "dom.scalar_conversion.combined.28"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008860, VkglTestCase_008860_1, VkglTestCase_008860_2);

#define VkglTestCase_008861_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008861_2 "dom.scalar_conversion.combined.29"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008861, VkglTestCase_008861_1, VkglTestCase_008861_2);

#define VkglTestCase_008862_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008862_2 "dom.scalar_conversion.combined.30"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008862, VkglTestCase_008862_1, VkglTestCase_008862_2);

#define VkglTestCase_008863_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008863_2 "dom.scalar_conversion.combined.31"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008863, VkglTestCase_008863_1, VkglTestCase_008863_2);

#define VkglTestCase_008864_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008864_2 "dom.scalar_conversion.combined.32"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008864, VkglTestCase_008864_1, VkglTestCase_008864_2);

#define VkglTestCase_008865_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008865_2 "dom.scalar_conversion.combined.33"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008865, VkglTestCase_008865_1, VkglTestCase_008865_2);

#define VkglTestCase_008866_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008866_2 "dom.scalar_conversion.combined.34"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008866, VkglTestCase_008866_1, VkglTestCase_008866_2);

#define VkglTestCase_008867_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008867_2 "dom.scalar_conversion.combined.35"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008867, VkglTestCase_008867_1, VkglTestCase_008867_2);

#define VkglTestCase_008868_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008868_2 "dom.scalar_conversion.combined.36"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008868, VkglTestCase_008868_1, VkglTestCase_008868_2);

#define VkglTestCase_008869_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008869_2 "dom.scalar_conversion.combined.37"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008869, VkglTestCase_008869_1, VkglTestCase_008869_2);

#define VkglTestCase_008870_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008870_2 "dom.scalar_conversion.combined.38"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008870, VkglTestCase_008870_1, VkglTestCase_008870_2);

#define VkglTestCase_008871_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008871_2 "dom.scalar_conversion.combined.39"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008871, VkglTestCase_008871_1, VkglTestCase_008871_2);

#define VkglTestCase_008872_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008872_2 "dom.scalar_conversion.combined.40"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008872, VkglTestCase_008872_1, VkglTestCase_008872_2);

#define VkglTestCase_008873_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008873_2 "dom.scalar_conversion.combined.41"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008873, VkglTestCase_008873_1, VkglTestCase_008873_2);

#define VkglTestCase_008874_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008874_2 "dom.scalar_conversion.combined.42"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008874, VkglTestCase_008874_1, VkglTestCase_008874_2);

#define VkglTestCase_008875_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008875_2 "dom.scalar_conversion.combined.43"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008875, VkglTestCase_008875_1, VkglTestCase_008875_2);

#define VkglTestCase_008876_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008876_2 "dom.scalar_conversion.combined.44"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008876, VkglTestCase_008876_1, VkglTestCase_008876_2);

#define VkglTestCase_008877_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008877_2 "dom.scalar_conversion.combined.45"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008877, VkglTestCase_008877_1, VkglTestCase_008877_2);

#define VkglTestCase_008878_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008878_2 "dom.scalar_conversion.combined.46"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008878, VkglTestCase_008878_1, VkglTestCase_008878_2);

#define VkglTestCase_008879_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008879_2 "dom.scalar_conversion.combined.47"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008879, VkglTestCase_008879_1, VkglTestCase_008879_2);

#define VkglTestCase_008880_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008880_2 "dom.scalar_conversion.combined.48"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008880, VkglTestCase_008880_1, VkglTestCase_008880_2);

#define VkglTestCase_008881_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008881_2 "dom.scalar_conversion.combined.49"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008881, VkglTestCase_008881_1, VkglTestCase_008881_2);

#define VkglTestCase_008882_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008882_2 "dom.scalar_conversion.combined.50"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008882, VkglTestCase_008882_1, VkglTestCase_008882_2);

#define VkglTestCase_008883_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008883_2 "dom.scalar_conversion.combined.51"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008883, VkglTestCase_008883_1, VkglTestCase_008883_2);

#define VkglTestCase_008884_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008884_2 "dom.scalar_conversion.combined.52"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008884, VkglTestCase_008884_1, VkglTestCase_008884_2);

#define VkglTestCase_008885_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008885_2 "dom.scalar_conversion.combined.53"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008885, VkglTestCase_008885_1, VkglTestCase_008885_2);

#define VkglTestCase_008886_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008886_2 "dom.scalar_conversion.combined.54"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008886, VkglTestCase_008886_1, VkglTestCase_008886_2);

#define VkglTestCase_008887_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008887_2 "dom.scalar_conversion.combined.55"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008887, VkglTestCase_008887_1, VkglTestCase_008887_2);

#define VkglTestCase_008888_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008888_2 "dom.scalar_conversion.combined.56"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008888, VkglTestCase_008888_1, VkglTestCase_008888_2);

#define VkglTestCase_008889_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008889_2 "dom.scalar_conversion.combined.57"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008889, VkglTestCase_008889_1, VkglTestCase_008889_2);

#define VkglTestCase_008890_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008890_2 "dom.scalar_conversion.combined.58"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008890, VkglTestCase_008890_1, VkglTestCase_008890_2);

#define VkglTestCase_008891_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008891_2 "dom.scalar_conversion.combined.59"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008891, VkglTestCase_008891_1, VkglTestCase_008891_2);

#define VkglTestCase_008892_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008892_2 "dom.scalar_conversion.combined.60"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008892, VkglTestCase_008892_1, VkglTestCase_008892_2);

#define VkglTestCase_008893_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008893_2 "dom.scalar_conversion.combined.61"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008893, VkglTestCase_008893_1, VkglTestCase_008893_2);

#define VkglTestCase_008894_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008894_2 "dom.scalar_conversion.combined.62"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008894, VkglTestCase_008894_1, VkglTestCase_008894_2);

#define VkglTestCase_008895_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008895_2 "dom.scalar_conversion.combined.63"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008895, VkglTestCase_008895_1, VkglTestCase_008895_2);

#define VkglTestCase_008896_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008896_2 "dom.scalar_conversion.combined.64"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008896, VkglTestCase_008896_1, VkglTestCase_008896_2);

#define VkglTestCase_008897_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008897_2 "dom.scalar_conversion.combined.65"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008897, VkglTestCase_008897_1, VkglTestCase_008897_2);

#define VkglTestCase_008898_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008898_2 "dom.scalar_conversion.combined.66"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008898, VkglTestCase_008898_1, VkglTestCase_008898_2);

#define VkglTestCase_008899_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008899_2 "dom.scalar_conversion.combined.67"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008899, VkglTestCase_008899_1, VkglTestCase_008899_2);

#define VkglTestCase_008900_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008900_2 "dom.scalar_conversion.combined.68"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008900, VkglTestCase_008900_1, VkglTestCase_008900_2);

#define VkglTestCase_008901_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008901_2 "dom.scalar_conversion.combined.69"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008901, VkglTestCase_008901_1, VkglTestCase_008901_2);

#define VkglTestCase_008902_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008902_2 "dom.scalar_conversion.combined.70"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008902, VkglTestCase_008902_1, VkglTestCase_008902_2);

#define VkglTestCase_008903_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008903_2 "dom.scalar_conversion.combined.71"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008903, VkglTestCase_008903_1, VkglTestCase_008903_2);

#define VkglTestCase_008904_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008904_2 "dom.scalar_conversion.combined.72"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008904, VkglTestCase_008904_1, VkglTestCase_008904_2);

#define VkglTestCase_008905_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008905_2 "dom.scalar_conversion.combined.73"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008905, VkglTestCase_008905_1, VkglTestCase_008905_2);

#define VkglTestCase_008906_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008906_2 "dom.scalar_conversion.combined.74"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008906, VkglTestCase_008906_1, VkglTestCase_008906_2);

#define VkglTestCase_008907_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008907_2 "dom.scalar_conversion.combined.75"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008907, VkglTestCase_008907_1, VkglTestCase_008907_2);

#define VkglTestCase_008908_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008908_2 "dom.scalar_conversion.combined.76"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008908, VkglTestCase_008908_1, VkglTestCase_008908_2);

#define VkglTestCase_008909_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008909_2 "dom.scalar_conversion.combined.77"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008909, VkglTestCase_008909_1, VkglTestCase_008909_2);

#define VkglTestCase_008910_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008910_2 "dom.scalar_conversion.combined.78"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008910, VkglTestCase_008910_1, VkglTestCase_008910_2);

#define VkglTestCase_008911_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008911_2 "dom.scalar_conversion.combined.79"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008911, VkglTestCase_008911_1, VkglTestCase_008911_2);

#define VkglTestCase_008912_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008912_2 "dom.scalar_conversion.combined.80"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008912, VkglTestCase_008912_1, VkglTestCase_008912_2);

#define VkglTestCase_008913_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008913_2 "dom.scalar_conversion.combined.81"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008913, VkglTestCase_008913_1, VkglTestCase_008913_2);

#define VkglTestCase_008914_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008914_2 "dom.scalar_conversion.combined.82"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008914, VkglTestCase_008914_1, VkglTestCase_008914_2);

#define VkglTestCase_008915_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008915_2 "dom.scalar_conversion.combined.83"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008915, VkglTestCase_008915_1, VkglTestCase_008915_2);

#define VkglTestCase_008916_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008916_2 "dom.scalar_conversion.combined.84"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008916, VkglTestCase_008916_1, VkglTestCase_008916_2);

#define VkglTestCase_008917_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008917_2 "dom.scalar_conversion.combined.85"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008917, VkglTestCase_008917_1, VkglTestCase_008917_2);

#define VkglTestCase_008918_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008918_2 "dom.scalar_conversion.combined.86"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008918, VkglTestCase_008918_1, VkglTestCase_008918_2);

#define VkglTestCase_008919_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008919_2 "dom.scalar_conversion.combined.87"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008919, VkglTestCase_008919_1, VkglTestCase_008919_2);

#define VkglTestCase_008920_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008920_2 "dom.scalar_conversion.combined.88"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008920, VkglTestCase_008920_1, VkglTestCase_008920_2);

#define VkglTestCase_008921_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008921_2 "dom.scalar_conversion.combined.89"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008921, VkglTestCase_008921_1, VkglTestCase_008921_2);

#define VkglTestCase_008922_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008922_2 "dom.scalar_conversion.combined.90"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008922, VkglTestCase_008922_1, VkglTestCase_008922_2);

#define VkglTestCase_008923_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008923_2 "dom.scalar_conversion.combined.91"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008923, VkglTestCase_008923_1, VkglTestCase_008923_2);

#define VkglTestCase_008924_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008924_2 "dom.scalar_conversion.combined.92"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008924, VkglTestCase_008924_1, VkglTestCase_008924_2);

#define VkglTestCase_008925_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008925_2 "dom.scalar_conversion.combined.93"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008925, VkglTestCase_008925_1, VkglTestCase_008925_2);

#define VkglTestCase_008926_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008926_2 "dom.scalar_conversion.combined.94"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008926, VkglTestCase_008926_1, VkglTestCase_008926_2);

#define VkglTestCase_008927_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008927_2 "dom.scalar_conversion.combined.95"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008927, VkglTestCase_008927_1, VkglTestCase_008927_2);

#define VkglTestCase_008928_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008928_2 "dom.scalar_conversion.combined.96"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008928, VkglTestCase_008928_1, VkglTestCase_008928_2);

#define VkglTestCase_008929_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008929_2 "dom.scalar_conversion.combined.97"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008929, VkglTestCase_008929_1, VkglTestCase_008929_2);

#define VkglTestCase_008930_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008930_2 "dom.scalar_conversion.combined.98"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008930, VkglTestCase_008930_1, VkglTestCase_008930_2);

#define VkglTestCase_008931_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008931_2 "dom.scalar_conversion.combined.99"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008931, VkglTestCase_008931_1, VkglTestCase_008931_2);
