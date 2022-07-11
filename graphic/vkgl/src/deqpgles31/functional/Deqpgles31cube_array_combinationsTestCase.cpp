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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012381_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012381_2 "array.combinations.nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012381, VkglTestCase_012381_1, VkglTestCase_012381_2);

#define VkglTestCase_012382_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012382_2 "array.combinations.nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012382, VkglTestCase_012382_1, VkglTestCase_012382_2);

#define VkglTestCase_012383_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012383_2 "array.combinations.nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012383, VkglTestCase_012383_1, VkglTestCase_012383_2);

#define VkglTestCase_012384_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012384_2 "array.combinations.nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012384, VkglTestCase_012384_1, VkglTestCase_012384_2);

#define VkglTestCase_012385_1 "dEQP-GLES31.functional.texture.filtering.cube_a"
#define VkglTestCase_012385_2 "rray.combinations.nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012385, VkglTestCase_012385_1, VkglTestCase_012385_2);

#define VkglTestCase_012386_1 "dEQP-GLES31.functional.texture.filtering.cube_a"
#define VkglTestCase_012386_2 "rray.combinations.nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012386, VkglTestCase_012386_1, VkglTestCase_012386_2);

#define VkglTestCase_012387_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012387_2 "array.combinations.nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012387, VkglTestCase_012387_1, VkglTestCase_012387_2);

#define VkglTestCase_012388_1 "dEQP-GLES31.functional.texture.filtering.cube_a"
#define VkglTestCase_012388_2 "rray.combinations.nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012388, VkglTestCase_012388_1, VkglTestCase_012388_2);

#define VkglTestCase_012389_1 "dEQP-GLES31.functional.texture.filtering.cube_a"
#define VkglTestCase_012389_2 "rray.combinations.nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012389, VkglTestCase_012389_1, VkglTestCase_012389_2);

#define VkglTestCase_012390_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012390_2 "_array.combinations.nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012390, VkglTestCase_012390_1, VkglTestCase_012390_2);

#define VkglTestCase_012391_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012391_2 "array.combinations.nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012391, VkglTestCase_012391_1, VkglTestCase_012391_2);

#define VkglTestCase_012392_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012392_2 "array.combinations.nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012392, VkglTestCase_012392_1, VkglTestCase_012392_2);

#define VkglTestCase_012393_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012393_2 "array.combinations.nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012393, VkglTestCase_012393_1, VkglTestCase_012393_2);

#define VkglTestCase_012394_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012394_2 "array.combinations.nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012394, VkglTestCase_012394_1, VkglTestCase_012394_2);

#define VkglTestCase_012395_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012395_2 "array.combinations.nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012395, VkglTestCase_012395_1, VkglTestCase_012395_2);

#define VkglTestCase_012396_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012396_2 "array.combinations.nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012396, VkglTestCase_012396_1, VkglTestCase_012396_2);

#define VkglTestCase_012397_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012397_2 "array.combinations.nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012397, VkglTestCase_012397_1, VkglTestCase_012397_2);

#define VkglTestCase_012398_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012398_2 "array.combinations.nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012398, VkglTestCase_012398_1, VkglTestCase_012398_2);

#define VkglTestCase_012399_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012399_2 "_array.combinations.linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012399, VkglTestCase_012399_1, VkglTestCase_012399_2);

#define VkglTestCase_012400_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012400_2 "array.combinations.linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012400, VkglTestCase_012400_1, VkglTestCase_012400_2);

#define VkglTestCase_012401_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012401_2 "array.combinations.linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012401, VkglTestCase_012401_1, VkglTestCase_012401_2);

#define VkglTestCase_012402_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012402_2 "array.combinations.linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012402, VkglTestCase_012402_1, VkglTestCase_012402_2);

#define VkglTestCase_012403_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012403_2 "array.combinations.linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012403, VkglTestCase_012403_1, VkglTestCase_012403_2);

#define VkglTestCase_012404_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012404_2 "array.combinations.linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012404, VkglTestCase_012404_1, VkglTestCase_012404_2);

#define VkglTestCase_012405_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012405_2 "array.combinations.linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012405, VkglTestCase_012405_1, VkglTestCase_012405_2);

#define VkglTestCase_012406_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012406_2 "array.combinations.linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012406, VkglTestCase_012406_1, VkglTestCase_012406_2);

#define VkglTestCase_012407_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012407_2 "array.combinations.linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012407, VkglTestCase_012407_1, VkglTestCase_012407_2);

#define VkglTestCase_012408_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012408_2 "_array.combinations.linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012408, VkglTestCase_012408_1, VkglTestCase_012408_2);

#define VkglTestCase_012409_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012409_2 "_array.combinations.linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012409, VkglTestCase_012409_1, VkglTestCase_012409_2);

#define VkglTestCase_012410_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012410_2 "_array.combinations.linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012410, VkglTestCase_012410_1, VkglTestCase_012410_2);

#define VkglTestCase_012411_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012411_2 "_array.combinations.linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012411, VkglTestCase_012411_1, VkglTestCase_012411_2);

#define VkglTestCase_012412_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012412_2 "array.combinations.linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012412, VkglTestCase_012412_1, VkglTestCase_012412_2);

#define VkglTestCase_012413_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012413_2 "array.combinations.linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012413, VkglTestCase_012413_1, VkglTestCase_012413_2);

#define VkglTestCase_012414_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012414_2 "_array.combinations.linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012414, VkglTestCase_012414_1, VkglTestCase_012414_2);

#define VkglTestCase_012415_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012415_2 "array.combinations.linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012415, VkglTestCase_012415_1, VkglTestCase_012415_2);

#define VkglTestCase_012416_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012416_2 "array.combinations.linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012416, VkglTestCase_012416_1, VkglTestCase_012416_2);

#define VkglTestCase_012417_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012417_2 "ombinations.nearest_mipmap_nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012417, VkglTestCase_012417_1, VkglTestCase_012417_2);

#define VkglTestCase_012418_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012418_2 "mbinations.nearest_mipmap_nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012418, VkglTestCase_012418_1, VkglTestCase_012418_2);

#define VkglTestCase_012419_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012419_2 "mbinations.nearest_mipmap_nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012419, VkglTestCase_012419_1, VkglTestCase_012419_2);

#define VkglTestCase_012420_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012420_2 "mbinations.nearest_mipmap_nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012420, VkglTestCase_012420_1, VkglTestCase_012420_2);

#define VkglTestCase_012421_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012421_2 "mbinations.nearest_mipmap_nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012421, VkglTestCase_012421_1, VkglTestCase_012421_2);

#define VkglTestCase_012422_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012422_2 "mbinations.nearest_mipmap_nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012422, VkglTestCase_012422_1, VkglTestCase_012422_2);

#define VkglTestCase_012423_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012423_2 "mbinations.nearest_mipmap_nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012423, VkglTestCase_012423_1, VkglTestCase_012423_2);

#define VkglTestCase_012424_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012424_2 "mbinations.nearest_mipmap_nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012424, VkglTestCase_012424_1, VkglTestCase_012424_2);

#define VkglTestCase_012425_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012425_2 "mbinations.nearest_mipmap_nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012425, VkglTestCase_012425_1, VkglTestCase_012425_2);

#define VkglTestCase_012426_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012426_2 "ombinations.nearest_mipmap_nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012426, VkglTestCase_012426_1, VkglTestCase_012426_2);

#define VkglTestCase_012427_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012427_2 "ombinations.nearest_mipmap_nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012427, VkglTestCase_012427_1, VkglTestCase_012427_2);

#define VkglTestCase_012428_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012428_2 "ombinations.nearest_mipmap_nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012428, VkglTestCase_012428_1, VkglTestCase_012428_2);

#define VkglTestCase_012429_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012429_2 "ombinations.nearest_mipmap_nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012429, VkglTestCase_012429_1, VkglTestCase_012429_2);

#define VkglTestCase_012430_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012430_2 "mbinations.nearest_mipmap_nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012430, VkglTestCase_012430_1, VkglTestCase_012430_2);

#define VkglTestCase_012431_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012431_2 "mbinations.nearest_mipmap_nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012431, VkglTestCase_012431_1, VkglTestCase_012431_2);

#define VkglTestCase_012432_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012432_2 "ombinations.nearest_mipmap_nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012432, VkglTestCase_012432_1, VkglTestCase_012432_2);

#define VkglTestCase_012433_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012433_2 "mbinations.nearest_mipmap_nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012433, VkglTestCase_012433_1, VkglTestCase_012433_2);

#define VkglTestCase_012434_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012434_2 "mbinations.nearest_mipmap_nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012434, VkglTestCase_012434_1, VkglTestCase_012434_2);

#define VkglTestCase_012435_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012435_2 "ombinations.linear_mipmap_nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012435, VkglTestCase_012435_1, VkglTestCase_012435_2);

#define VkglTestCase_012436_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012436_2 "ombinations.linear_mipmap_nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012436, VkglTestCase_012436_1, VkglTestCase_012436_2);

#define VkglTestCase_012437_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012437_2 "ombinations.linear_mipmap_nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012437, VkglTestCase_012437_1, VkglTestCase_012437_2);

#define VkglTestCase_012438_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012438_2 "ombinations.linear_mipmap_nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012438, VkglTestCase_012438_1, VkglTestCase_012438_2);

#define VkglTestCase_012439_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012439_2 "mbinations.linear_mipmap_nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012439, VkglTestCase_012439_1, VkglTestCase_012439_2);

#define VkglTestCase_012440_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012440_2 "mbinations.linear_mipmap_nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012440, VkglTestCase_012440_1, VkglTestCase_012440_2);

#define VkglTestCase_012441_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012441_2 "ombinations.linear_mipmap_nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012441, VkglTestCase_012441_1, VkglTestCase_012441_2);

#define VkglTestCase_012442_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012442_2 "mbinations.linear_mipmap_nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012442, VkglTestCase_012442_1, VkglTestCase_012442_2);

#define VkglTestCase_012443_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012443_2 "mbinations.linear_mipmap_nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012443, VkglTestCase_012443_1, VkglTestCase_012443_2);

#define VkglTestCase_012444_1 "dEQP-GLES31.functional.texture.filtering.cube_array."
#define VkglTestCase_012444_2 "combinations.linear_mipmap_nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012444, VkglTestCase_012444_1, VkglTestCase_012444_2);

#define VkglTestCase_012445_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012445_2 "ombinations.linear_mipmap_nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012445, VkglTestCase_012445_1, VkglTestCase_012445_2);

#define VkglTestCase_012446_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012446_2 "ombinations.linear_mipmap_nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012446, VkglTestCase_012446_1, VkglTestCase_012446_2);

#define VkglTestCase_012447_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012447_2 "ombinations.linear_mipmap_nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012447, VkglTestCase_012447_1, VkglTestCase_012447_2);

#define VkglTestCase_012448_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012448_2 "ombinations.linear_mipmap_nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012448, VkglTestCase_012448_1, VkglTestCase_012448_2);

#define VkglTestCase_012449_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012449_2 "ombinations.linear_mipmap_nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012449, VkglTestCase_012449_1, VkglTestCase_012449_2);

#define VkglTestCase_012450_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012450_2 "ombinations.linear_mipmap_nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012450, VkglTestCase_012450_1, VkglTestCase_012450_2);

#define VkglTestCase_012451_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012451_2 "ombinations.linear_mipmap_nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012451, VkglTestCase_012451_1, VkglTestCase_012451_2);

#define VkglTestCase_012452_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012452_2 "ombinations.linear_mipmap_nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012452, VkglTestCase_012452_1, VkglTestCase_012452_2);

#define VkglTestCase_012453_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012453_2 "ombinations.nearest_mipmap_linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012453, VkglTestCase_012453_1, VkglTestCase_012453_2);

#define VkglTestCase_012454_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012454_2 "ombinations.nearest_mipmap_linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012454, VkglTestCase_012454_1, VkglTestCase_012454_2);

#define VkglTestCase_012455_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012455_2 "ombinations.nearest_mipmap_linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012455, VkglTestCase_012455_1, VkglTestCase_012455_2);

#define VkglTestCase_012456_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012456_2 "ombinations.nearest_mipmap_linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012456, VkglTestCase_012456_1, VkglTestCase_012456_2);

#define VkglTestCase_012457_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012457_2 "mbinations.nearest_mipmap_linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012457, VkglTestCase_012457_1, VkglTestCase_012457_2);

#define VkglTestCase_012458_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012458_2 "mbinations.nearest_mipmap_linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012458, VkglTestCase_012458_1, VkglTestCase_012458_2);

#define VkglTestCase_012459_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012459_2 "ombinations.nearest_mipmap_linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012459, VkglTestCase_012459_1, VkglTestCase_012459_2);

#define VkglTestCase_012460_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012460_2 "mbinations.nearest_mipmap_linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012460, VkglTestCase_012460_1, VkglTestCase_012460_2);

#define VkglTestCase_012461_1 "dEQP-GLES31.functional.texture.filtering.cube_array.co"
#define VkglTestCase_012461_2 "mbinations.nearest_mipmap_linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012461, VkglTestCase_012461_1, VkglTestCase_012461_2);

#define VkglTestCase_012462_1 "dEQP-GLES31.functional.texture.filtering.cube_array."
#define VkglTestCase_012462_2 "combinations.nearest_mipmap_linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012462, VkglTestCase_012462_1, VkglTestCase_012462_2);

#define VkglTestCase_012463_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012463_2 "ombinations.nearest_mipmap_linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012463, VkglTestCase_012463_1, VkglTestCase_012463_2);

#define VkglTestCase_012464_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012464_2 "ombinations.nearest_mipmap_linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012464, VkglTestCase_012464_1, VkglTestCase_012464_2);

#define VkglTestCase_012465_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012465_2 "ombinations.nearest_mipmap_linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012465, VkglTestCase_012465_1, VkglTestCase_012465_2);

#define VkglTestCase_012466_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012466_2 "ombinations.nearest_mipmap_linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012466, VkglTestCase_012466_1, VkglTestCase_012466_2);

#define VkglTestCase_012467_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012467_2 "ombinations.nearest_mipmap_linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012467, VkglTestCase_012467_1, VkglTestCase_012467_2);

#define VkglTestCase_012468_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012468_2 "ombinations.nearest_mipmap_linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012468, VkglTestCase_012468_1, VkglTestCase_012468_2);

#define VkglTestCase_012469_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012469_2 "ombinations.nearest_mipmap_linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012469, VkglTestCase_012469_1, VkglTestCase_012469_2);

#define VkglTestCase_012470_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012470_2 "ombinations.nearest_mipmap_linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012470, VkglTestCase_012470_1, VkglTestCase_012470_2);

#define VkglTestCase_012471_1 "dEQP-GLES31.functional.texture.filtering.cube_array."
#define VkglTestCase_012471_2 "combinations.linear_mipmap_linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012471, VkglTestCase_012471_1, VkglTestCase_012471_2);

#define VkglTestCase_012472_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012472_2 "ombinations.linear_mipmap_linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012472, VkglTestCase_012472_1, VkglTestCase_012472_2);

#define VkglTestCase_012473_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012473_2 "ombinations.linear_mipmap_linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012473, VkglTestCase_012473_1, VkglTestCase_012473_2);

#define VkglTestCase_012474_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012474_2 "ombinations.linear_mipmap_linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012474, VkglTestCase_012474_1, VkglTestCase_012474_2);

#define VkglTestCase_012475_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012475_2 "ombinations.linear_mipmap_linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012475, VkglTestCase_012475_1, VkglTestCase_012475_2);

#define VkglTestCase_012476_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012476_2 "ombinations.linear_mipmap_linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012476, VkglTestCase_012476_1, VkglTestCase_012476_2);

#define VkglTestCase_012477_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012477_2 "ombinations.linear_mipmap_linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012477, VkglTestCase_012477_1, VkglTestCase_012477_2);

#define VkglTestCase_012478_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012478_2 "ombinations.linear_mipmap_linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012478, VkglTestCase_012478_1, VkglTestCase_012478_2);

#define VkglTestCase_012479_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012479_2 "ombinations.linear_mipmap_linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012479, VkglTestCase_012479_1, VkglTestCase_012479_2);

#define VkglTestCase_012480_1 "dEQP-GLES31.functional.texture.filtering.cube_array."
#define VkglTestCase_012480_2 "combinations.linear_mipmap_linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012480, VkglTestCase_012480_1, VkglTestCase_012480_2);

#define VkglTestCase_012481_1 "dEQP-GLES31.functional.texture.filtering.cube_array."
#define VkglTestCase_012481_2 "combinations.linear_mipmap_linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012481, VkglTestCase_012481_1, VkglTestCase_012481_2);

#define VkglTestCase_012482_1 "dEQP-GLES31.functional.texture.filtering.cube_array."
#define VkglTestCase_012482_2 "combinations.linear_mipmap_linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012482, VkglTestCase_012482_1, VkglTestCase_012482_2);

#define VkglTestCase_012483_1 "dEQP-GLES31.functional.texture.filtering.cube_array."
#define VkglTestCase_012483_2 "combinations.linear_mipmap_linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012483, VkglTestCase_012483_1, VkglTestCase_012483_2);

#define VkglTestCase_012484_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012484_2 "ombinations.linear_mipmap_linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012484, VkglTestCase_012484_1, VkglTestCase_012484_2);

#define VkglTestCase_012485_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012485_2 "ombinations.linear_mipmap_linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012485, VkglTestCase_012485_1, VkglTestCase_012485_2);

#define VkglTestCase_012486_1 "dEQP-GLES31.functional.texture.filtering.cube_array."
#define VkglTestCase_012486_2 "combinations.linear_mipmap_linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012486, VkglTestCase_012486_1, VkglTestCase_012486_2);

#define VkglTestCase_012487_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012487_2 "ombinations.linear_mipmap_linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012487, VkglTestCase_012487_1, VkglTestCase_012487_2);

#define VkglTestCase_012488_1 "dEQP-GLES31.functional.texture.filtering.cube_array.c"
#define VkglTestCase_012488_2 "ombinations.linear_mipmap_linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012488, VkglTestCase_012488_1, VkglTestCase_012488_2);
