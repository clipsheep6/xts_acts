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
#include "../ActsDeqpgles30023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022405_1 "dEQP-GLES3.functional.te"
#define VkglTestCase_022405_2 "xture.size.cube.15x15_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022405, VkglTestCase_022405_1, VkglTestCase_022405_2);

#define VkglTestCase_022406_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022406_2 "re.size.cube.15x15_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022406, VkglTestCase_022406_1, VkglTestCase_022406_2);

#define VkglTestCase_022407_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022407_2 "ure.size.cube.15x15_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022407, VkglTestCase_022407_1, VkglTestCase_022407_2);

#define VkglTestCase_022408_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022408_2 "re.size.cube.15x15_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022408, VkglTestCase_022408_1, VkglTestCase_022408_2);

#define VkglTestCase_022409_1 "dEQP-GLES3.functional.te"
#define VkglTestCase_022409_2 "xture.size.cube.16x16_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022409, VkglTestCase_022409_1, VkglTestCase_022409_2);

#define VkglTestCase_022410_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022410_2 "re.size.cube.16x16_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022410, VkglTestCase_022410_1, VkglTestCase_022410_2);

#define VkglTestCase_022411_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022411_2 "re.size.cube.16x16_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022411, VkglTestCase_022411_1, VkglTestCase_022411_2);

#define VkglTestCase_022412_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022412_2 "size.cube.16x16_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022412, VkglTestCase_022412_1, VkglTestCase_022412_2);

#define VkglTestCase_022413_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022413_2 "ure.size.cube.16x16_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022413, VkglTestCase_022413_1, VkglTestCase_022413_2);

#define VkglTestCase_022414_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022414_2 ".size.cube.16x16_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022414, VkglTestCase_022414_1, VkglTestCase_022414_2);

#define VkglTestCase_022415_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022415_2 "re.size.cube.16x16_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022415, VkglTestCase_022415_1, VkglTestCase_022415_2);

#define VkglTestCase_022416_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022416_2 "size.cube.16x16_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022416, VkglTestCase_022416_1, VkglTestCase_022416_2);

#define VkglTestCase_022417_1 "dEQP-GLES3.functional.te"
#define VkglTestCase_022417_2 "xture.size.cube.64x64_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022417, VkglTestCase_022417_1, VkglTestCase_022417_2);

#define VkglTestCase_022418_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022418_2 "re.size.cube.64x64_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022418, VkglTestCase_022418_1, VkglTestCase_022418_2);

#define VkglTestCase_022419_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022419_2 "re.size.cube.64x64_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022419, VkglTestCase_022419_1, VkglTestCase_022419_2);

#define VkglTestCase_022420_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022420_2 "size.cube.64x64_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022420, VkglTestCase_022420_1, VkglTestCase_022420_2);

#define VkglTestCase_022421_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022421_2 "ure.size.cube.64x64_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022421, VkglTestCase_022421_1, VkglTestCase_022421_2);

#define VkglTestCase_022422_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022422_2 ".size.cube.64x64_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022422, VkglTestCase_022422_1, VkglTestCase_022422_2);

#define VkglTestCase_022423_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022423_2 "re.size.cube.64x64_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022423, VkglTestCase_022423_1, VkglTestCase_022423_2);

#define VkglTestCase_022424_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022424_2 "size.cube.64x64_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022424, VkglTestCase_022424_1, VkglTestCase_022424_2);

#define VkglTestCase_022425_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022425_2 "ture.size.cube.128x128_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022425, VkglTestCase_022425_1, VkglTestCase_022425_2);

#define VkglTestCase_022426_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022426_2 "e.size.cube.128x128_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022426, VkglTestCase_022426_1, VkglTestCase_022426_2);

#define VkglTestCase_022427_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022427_2 "e.size.cube.128x128_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022427, VkglTestCase_022427_1, VkglTestCase_022427_2);

#define VkglTestCase_022428_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022428_2 "ize.cube.128x128_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022428, VkglTestCase_022428_1, VkglTestCase_022428_2);

#define VkglTestCase_022429_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022429_2 "re.size.cube.128x128_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022429, VkglTestCase_022429_1, VkglTestCase_022429_2);

#define VkglTestCase_022430_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022430_2 "size.cube.128x128_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022430, VkglTestCase_022430_1, VkglTestCase_022430_2);

#define VkglTestCase_022431_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022431_2 "e.size.cube.128x128_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022431, VkglTestCase_022431_1, VkglTestCase_022431_2);

#define VkglTestCase_022432_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022432_2 "ize.cube.128x128_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022432, VkglTestCase_022432_1, VkglTestCase_022432_2);

#define VkglTestCase_022433_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022433_2 "ture.size.cube.256x256_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022433, VkglTestCase_022433_1, VkglTestCase_022433_2);

#define VkglTestCase_022434_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022434_2 "e.size.cube.256x256_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022434, VkglTestCase_022434_1, VkglTestCase_022434_2);

#define VkglTestCase_022435_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022435_2 "ize.cube.256x256_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022435, VkglTestCase_022435_1, VkglTestCase_022435_2);

#define VkglTestCase_022436_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022436_2 "re.size.cube.256x256_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022436, VkglTestCase_022436_1, VkglTestCase_022436_2);

#define VkglTestCase_022437_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022437_2 "size.cube.256x256_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022437, VkglTestCase_022437_1, VkglTestCase_022437_2);

#define VkglTestCase_022438_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022438_2 "e.size.cube.256x256_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022438, VkglTestCase_022438_1, VkglTestCase_022438_2);

#define VkglTestCase_022439_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022439_2 "ize.cube.256x256_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022439, VkglTestCase_022439_1, VkglTestCase_022439_2);

#define VkglTestCase_022440_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022440_2 "ture.size.cube.512x512_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022440, VkglTestCase_022440_1, VkglTestCase_022440_2);

#define VkglTestCase_022441_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022441_2 "e.size.cube.512x512_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022441, VkglTestCase_022441_1, VkglTestCase_022441_2);

#define VkglTestCase_022442_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022442_2 "ize.cube.512x512_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022442, VkglTestCase_022442_1, VkglTestCase_022442_2);

#define VkglTestCase_022443_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022443_2 "re.size.cube.512x512_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022443, VkglTestCase_022443_1, VkglTestCase_022443_2);

#define VkglTestCase_022444_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022444_2 "size.cube.512x512_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022444, VkglTestCase_022444_1, VkglTestCase_022444_2);

#define VkglTestCase_022445_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022445_2 "e.size.cube.512x512_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022445, VkglTestCase_022445_1, VkglTestCase_022445_2);

#define VkglTestCase_022446_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022446_2 "ize.cube.512x512_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022446, VkglTestCase_022446_1, VkglTestCase_022446_2);
