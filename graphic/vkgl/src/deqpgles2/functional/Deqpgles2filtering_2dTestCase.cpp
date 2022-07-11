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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010355_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010355_2 "g.2d.nearest_nearest_clamp_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010355, VkglTestCase_010355_1, VkglTestCase_010355_2);

#define VkglTestCase_010356_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010356_2 ".2d.nearest_nearest_clamp_rgba8888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010356, VkglTestCase_010356_1, VkglTestCase_010356_2);

#define VkglTestCase_010357_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010357_2 "ng.2d.nearest_nearest_clamp_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010357, VkglTestCase_010357_1, VkglTestCase_010357_2);

#define VkglTestCase_010358_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010358_2 "g.2d.nearest_nearest_clamp_rgb888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010358, VkglTestCase_010358_1, VkglTestCase_010358_2);

#define VkglTestCase_010359_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010359_2 "g.2d.nearest_nearest_clamp_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010359, VkglTestCase_010359_1, VkglTestCase_010359_2);

#define VkglTestCase_010360_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010360_2 ".2d.nearest_nearest_clamp_rgba4444_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010360, VkglTestCase_010360_1, VkglTestCase_010360_2);

#define VkglTestCase_010361_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010361_2 "ring.2d.nearest_nearest_clamp_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010361, VkglTestCase_010361_1, VkglTestCase_010361_2);

#define VkglTestCase_010362_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010362_2 "ing.2d.nearest_nearest_clamp_l8_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010362, VkglTestCase_010362_1, VkglTestCase_010362_2);

#define VkglTestCase_010363_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010363_2 ".2d.nearest_nearest_repeat_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010363, VkglTestCase_010363_1, VkglTestCase_010363_2);

#define VkglTestCase_010364_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010364_2 "g.2d.nearest_nearest_repeat_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010364, VkglTestCase_010364_1, VkglTestCase_010364_2);

#define VkglTestCase_010365_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010365_2 ".2d.nearest_nearest_repeat_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010365, VkglTestCase_010365_1, VkglTestCase_010365_2);

#define VkglTestCase_010366_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010366_2 "ing.2d.nearest_nearest_repeat_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010366, VkglTestCase_010366_1, VkglTestCase_010366_2);

#define VkglTestCase_010367_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010367_2 ".2d.nearest_nearest_mirror_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010367, VkglTestCase_010367_1, VkglTestCase_010367_2);

#define VkglTestCase_010368_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010368_2 "g.2d.nearest_nearest_mirror_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010368, VkglTestCase_010368_1, VkglTestCase_010368_2);

#define VkglTestCase_010369_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010369_2 ".2d.nearest_nearest_mirror_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010369, VkglTestCase_010369_1, VkglTestCase_010369_2);

#define VkglTestCase_010370_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010370_2 "ing.2d.nearest_nearest_mirror_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010370, VkglTestCase_010370_1, VkglTestCase_010370_2);

#define VkglTestCase_010371_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010371_2 "g.2d.nearest_linear_clamp_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010371, VkglTestCase_010371_1, VkglTestCase_010371_2);

#define VkglTestCase_010372_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010372_2 "g.2d.nearest_linear_clamp_rgba8888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010372, VkglTestCase_010372_1, VkglTestCase_010372_2);

#define VkglTestCase_010373_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010373_2 "ng.2d.nearest_linear_clamp_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010373, VkglTestCase_010373_1, VkglTestCase_010373_2);

#define VkglTestCase_010374_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010374_2 "ng.2d.nearest_linear_clamp_rgb888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010374, VkglTestCase_010374_1, VkglTestCase_010374_2);

#define VkglTestCase_010375_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010375_2 "g.2d.nearest_linear_clamp_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010375, VkglTestCase_010375_1, VkglTestCase_010375_2);

#define VkglTestCase_010376_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010376_2 "g.2d.nearest_linear_clamp_rgba4444_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010376, VkglTestCase_010376_1, VkglTestCase_010376_2);

#define VkglTestCase_010377_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010377_2 "ring.2d.nearest_linear_clamp_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010377, VkglTestCase_010377_1, VkglTestCase_010377_2);

#define VkglTestCase_010378_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010378_2 "ring.2d.nearest_linear_clamp_l8_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010378, VkglTestCase_010378_1, VkglTestCase_010378_2);

#define VkglTestCase_010379_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010379_2 "g.2d.nearest_linear_repeat_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010379, VkglTestCase_010379_1, VkglTestCase_010379_2);

#define VkglTestCase_010380_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010380_2 "ng.2d.nearest_linear_repeat_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010380, VkglTestCase_010380_1, VkglTestCase_010380_2);

#define VkglTestCase_010381_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010381_2 "g.2d.nearest_linear_repeat_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010381, VkglTestCase_010381_1, VkglTestCase_010381_2);

#define VkglTestCase_010382_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010382_2 "ring.2d.nearest_linear_repeat_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010382, VkglTestCase_010382_1, VkglTestCase_010382_2);

#define VkglTestCase_010383_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010383_2 "g.2d.nearest_linear_mirror_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010383, VkglTestCase_010383_1, VkglTestCase_010383_2);

#define VkglTestCase_010384_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010384_2 "ng.2d.nearest_linear_mirror_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010384, VkglTestCase_010384_1, VkglTestCase_010384_2);

#define VkglTestCase_010385_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010385_2 "g.2d.nearest_linear_mirror_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010385, VkglTestCase_010385_1, VkglTestCase_010385_2);

#define VkglTestCase_010386_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010386_2 "ring.2d.nearest_linear_mirror_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010386, VkglTestCase_010386_1, VkglTestCase_010386_2);

#define VkglTestCase_010387_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010387_2 "g.2d.linear_nearest_clamp_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010387, VkglTestCase_010387_1, VkglTestCase_010387_2);

#define VkglTestCase_010388_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010388_2 "g.2d.linear_nearest_clamp_rgba8888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010388, VkglTestCase_010388_1, VkglTestCase_010388_2);

#define VkglTestCase_010389_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010389_2 "ng.2d.linear_nearest_clamp_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010389, VkglTestCase_010389_1, VkglTestCase_010389_2);

#define VkglTestCase_010390_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010390_2 "ng.2d.linear_nearest_clamp_rgb888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010390, VkglTestCase_010390_1, VkglTestCase_010390_2);

#define VkglTestCase_010391_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010391_2 "g.2d.linear_nearest_clamp_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010391, VkglTestCase_010391_1, VkglTestCase_010391_2);

#define VkglTestCase_010392_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010392_2 "g.2d.linear_nearest_clamp_rgba4444_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010392, VkglTestCase_010392_1, VkglTestCase_010392_2);

#define VkglTestCase_010393_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010393_2 "ring.2d.linear_nearest_clamp_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010393, VkglTestCase_010393_1, VkglTestCase_010393_2);

#define VkglTestCase_010394_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010394_2 "ring.2d.linear_nearest_clamp_l8_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010394, VkglTestCase_010394_1, VkglTestCase_010394_2);

#define VkglTestCase_010395_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010395_2 "g.2d.linear_nearest_repeat_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010395, VkglTestCase_010395_1, VkglTestCase_010395_2);

#define VkglTestCase_010396_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010396_2 "ng.2d.linear_nearest_repeat_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010396, VkglTestCase_010396_1, VkglTestCase_010396_2);

#define VkglTestCase_010397_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010397_2 "g.2d.linear_nearest_repeat_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010397, VkglTestCase_010397_1, VkglTestCase_010397_2);

#define VkglTestCase_010398_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010398_2 "ring.2d.linear_nearest_repeat_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010398, VkglTestCase_010398_1, VkglTestCase_010398_2);

#define VkglTestCase_010399_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010399_2 "g.2d.linear_nearest_mirror_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010399, VkglTestCase_010399_1, VkglTestCase_010399_2);

#define VkglTestCase_010400_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010400_2 "ng.2d.linear_nearest_mirror_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010400, VkglTestCase_010400_1, VkglTestCase_010400_2);

#define VkglTestCase_010401_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010401_2 "g.2d.linear_nearest_mirror_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010401, VkglTestCase_010401_1, VkglTestCase_010401_2);

#define VkglTestCase_010402_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010402_2 "ring.2d.linear_nearest_mirror_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010402, VkglTestCase_010402_1, VkglTestCase_010402_2);

#define VkglTestCase_010403_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010403_2 "ng.2d.linear_linear_clamp_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010403, VkglTestCase_010403_1, VkglTestCase_010403_2);

#define VkglTestCase_010404_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010404_2 "g.2d.linear_linear_clamp_rgba8888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010404, VkglTestCase_010404_1, VkglTestCase_010404_2);

#define VkglTestCase_010405_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010405_2 "ing.2d.linear_linear_clamp_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010405, VkglTestCase_010405_1, VkglTestCase_010405_2);

#define VkglTestCase_010406_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010406_2 "ng.2d.linear_linear_clamp_rgb888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010406, VkglTestCase_010406_1, VkglTestCase_010406_2);

#define VkglTestCase_010407_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010407_2 "ng.2d.linear_linear_clamp_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010407, VkglTestCase_010407_1, VkglTestCase_010407_2);

#define VkglTestCase_010408_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010408_2 "g.2d.linear_linear_clamp_rgba4444_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010408, VkglTestCase_010408_1, VkglTestCase_010408_2);

#define VkglTestCase_010409_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010409_2 "ering.2d.linear_linear_clamp_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010409, VkglTestCase_010409_1, VkglTestCase_010409_2);

#define VkglTestCase_010410_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010410_2 "ring.2d.linear_linear_clamp_l8_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010410, VkglTestCase_010410_1, VkglTestCase_010410_2);

#define VkglTestCase_010411_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010411_2 "g.2d.linear_linear_repeat_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010411, VkglTestCase_010411_1, VkglTestCase_010411_2);

#define VkglTestCase_010412_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010412_2 "ng.2d.linear_linear_repeat_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010412, VkglTestCase_010412_1, VkglTestCase_010412_2);

#define VkglTestCase_010413_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010413_2 "g.2d.linear_linear_repeat_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010413, VkglTestCase_010413_1, VkglTestCase_010413_2);

#define VkglTestCase_010414_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010414_2 "ring.2d.linear_linear_repeat_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010414, VkglTestCase_010414_1, VkglTestCase_010414_2);

#define VkglTestCase_010415_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010415_2 "g.2d.linear_linear_mirror_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010415, VkglTestCase_010415_1, VkglTestCase_010415_2);

#define VkglTestCase_010416_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010416_2 "ng.2d.linear_linear_mirror_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010416, VkglTestCase_010416_1, VkglTestCase_010416_2);

#define VkglTestCase_010417_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010417_2 "g.2d.linear_linear_mirror_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010417, VkglTestCase_010417_1, VkglTestCase_010417_2);

#define VkglTestCase_010418_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010418_2 "ring.2d.linear_linear_mirror_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010418, VkglTestCase_010418_1, VkglTestCase_010418_2);

#define VkglTestCase_010419_1 "dEQP-GLES2.functional.texture.filtering.2d.n"
#define VkglTestCase_010419_2 "earest_mipmap_nearest_nearest_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010419, VkglTestCase_010419_1, VkglTestCase_010419_2);

#define VkglTestCase_010420_1 "dEQP-GLES2.functional.texture.filtering.2d.n"
#define VkglTestCase_010420_2 "earest_mipmap_nearest_nearest_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010420, VkglTestCase_010420_1, VkglTestCase_010420_2);

#define VkglTestCase_010421_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010421_2 "nearest_mipmap_nearest_nearest_repeat_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010421, VkglTestCase_010421_1, VkglTestCase_010421_2);

#define VkglTestCase_010422_1 "dEQP-GLES2.functional.texture.filtering.2d.n"
#define VkglTestCase_010422_2 "earest_mipmap_nearest_nearest_repeat_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010422, VkglTestCase_010422_1, VkglTestCase_010422_2);

#define VkglTestCase_010423_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010423_2 "d.nearest_mipmap_nearest_nearest_repeat_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010423, VkglTestCase_010423_1, VkglTestCase_010423_2);

#define VkglTestCase_010424_1 "dEQP-GLES2.functional.texture.filtering.2d.n"
#define VkglTestCase_010424_2 "earest_mipmap_nearest_nearest_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010424, VkglTestCase_010424_1, VkglTestCase_010424_2);

#define VkglTestCase_010425_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010425_2 "nearest_mipmap_nearest_linear_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010425, VkglTestCase_010425_1, VkglTestCase_010425_2);

#define VkglTestCase_010426_1 "dEQP-GLES2.functional.texture.filtering.2d.n"
#define VkglTestCase_010426_2 "earest_mipmap_nearest_linear_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010426, VkglTestCase_010426_1, VkglTestCase_010426_2);

#define VkglTestCase_010427_1 "dEQP-GLES2.functional.texture.filtering.2d.n"
#define VkglTestCase_010427_2 "earest_mipmap_nearest_linear_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010427, VkglTestCase_010427_1, VkglTestCase_010427_2);

#define VkglTestCase_010428_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010428_2 "linear_mipmap_nearest_nearest_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010428, VkglTestCase_010428_1, VkglTestCase_010428_2);

#define VkglTestCase_010429_1 "dEQP-GLES2.functional.texture.filtering.2d.l"
#define VkglTestCase_010429_2 "inear_mipmap_nearest_nearest_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010429, VkglTestCase_010429_1, VkglTestCase_010429_2);

#define VkglTestCase_010430_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010430_2 "linear_mipmap_nearest_nearest_repeat_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010430, VkglTestCase_010430_1, VkglTestCase_010430_2);

#define VkglTestCase_010431_1 "dEQP-GLES2.functional.texture.filtering.2d.l"
#define VkglTestCase_010431_2 "inear_mipmap_nearest_nearest_repeat_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010431, VkglTestCase_010431_1, VkglTestCase_010431_2);

#define VkglTestCase_010432_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010432_2 "d.linear_mipmap_nearest_nearest_repeat_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010432, VkglTestCase_010432_1, VkglTestCase_010432_2);

#define VkglTestCase_010433_1 "dEQP-GLES2.functional.texture.filtering.2d.l"
#define VkglTestCase_010433_2 "inear_mipmap_nearest_nearest_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010433, VkglTestCase_010433_1, VkglTestCase_010433_2);

#define VkglTestCase_010434_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010434_2 "linear_mipmap_nearest_linear_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010434, VkglTestCase_010434_1, VkglTestCase_010434_2);

#define VkglTestCase_010435_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010435_2 "linear_mipmap_nearest_linear_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010435, VkglTestCase_010435_1, VkglTestCase_010435_2);

#define VkglTestCase_010436_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010436_2 "linear_mipmap_nearest_linear_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010436, VkglTestCase_010436_1, VkglTestCase_010436_2);

#define VkglTestCase_010437_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010437_2 "nearest_mipmap_linear_nearest_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010437, VkglTestCase_010437_1, VkglTestCase_010437_2);

#define VkglTestCase_010438_1 "dEQP-GLES2.functional.texture.filtering.2d.n"
#define VkglTestCase_010438_2 "earest_mipmap_linear_nearest_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010438, VkglTestCase_010438_1, VkglTestCase_010438_2);

#define VkglTestCase_010439_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010439_2 "nearest_mipmap_linear_nearest_repeat_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010439, VkglTestCase_010439_1, VkglTestCase_010439_2);

#define VkglTestCase_010440_1 "dEQP-GLES2.functional.texture.filtering.2d.n"
#define VkglTestCase_010440_2 "earest_mipmap_linear_nearest_repeat_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010440, VkglTestCase_010440_1, VkglTestCase_010440_2);

#define VkglTestCase_010441_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010441_2 "d.nearest_mipmap_linear_nearest_repeat_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010441, VkglTestCase_010441_1, VkglTestCase_010441_2);

#define VkglTestCase_010442_1 "dEQP-GLES2.functional.texture.filtering.2d.n"
#define VkglTestCase_010442_2 "earest_mipmap_linear_nearest_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010442, VkglTestCase_010442_1, VkglTestCase_010442_2);

#define VkglTestCase_010443_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010443_2 "nearest_mipmap_linear_linear_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010443, VkglTestCase_010443_1, VkglTestCase_010443_2);

#define VkglTestCase_010444_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010444_2 "nearest_mipmap_linear_linear_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010444, VkglTestCase_010444_1, VkglTestCase_010444_2);

#define VkglTestCase_010445_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010445_2 "nearest_mipmap_linear_linear_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010445, VkglTestCase_010445_1, VkglTestCase_010445_2);

#define VkglTestCase_010446_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010446_2 "linear_mipmap_linear_nearest_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010446, VkglTestCase_010446_1, VkglTestCase_010446_2);

#define VkglTestCase_010447_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010447_2 "linear_mipmap_linear_nearest_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010447, VkglTestCase_010447_1, VkglTestCase_010447_2);

#define VkglTestCase_010448_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010448_2 ".linear_mipmap_linear_nearest_repeat_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010448, VkglTestCase_010448_1, VkglTestCase_010448_2);

#define VkglTestCase_010449_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010449_2 "linear_mipmap_linear_nearest_repeat_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010449, VkglTestCase_010449_1, VkglTestCase_010449_2);

#define VkglTestCase_010450_1 "dEQP-GLES2.functional.texture.filtering."
#define VkglTestCase_010450_2 "2d.linear_mipmap_linear_nearest_repeat_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010450, VkglTestCase_010450_1, VkglTestCase_010450_2);

#define VkglTestCase_010451_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010451_2 "linear_mipmap_linear_nearest_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010451, VkglTestCase_010451_1, VkglTestCase_010451_2);

#define VkglTestCase_010452_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010452_2 ".linear_mipmap_linear_linear_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010452, VkglTestCase_010452_1, VkglTestCase_010452_2);

#define VkglTestCase_010453_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010453_2 "linear_mipmap_linear_linear_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010453, VkglTestCase_010453_1, VkglTestCase_010453_2);

#define VkglTestCase_010454_1 "dEQP-GLES2.functional.texture.filtering.2d."
#define VkglTestCase_010454_2 "linear_mipmap_linear_linear_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010454, VkglTestCase_010454_1, VkglTestCase_010454_2);

#define VkglTestCase_010455_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010455_2 "ering.2d.nearest_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010455, VkglTestCase_010455_1, VkglTestCase_010455_2);

#define VkglTestCase_010456_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010456_2 "ring.2d.nearest_nearest_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010456, VkglTestCase_010456_1, VkglTestCase_010456_2);

#define VkglTestCase_010457_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010457_2 "ring.2d.nearest_nearest_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010457, VkglTestCase_010457_1, VkglTestCase_010457_2);

#define VkglTestCase_010458_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010458_2 "ering.2d.nearest_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010458, VkglTestCase_010458_1, VkglTestCase_010458_2);

#define VkglTestCase_010459_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010459_2 "ering.2d.nearest_linear_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010459, VkglTestCase_010459_1, VkglTestCase_010459_2);

#define VkglTestCase_010460_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010460_2 "ering.2d.nearest_linear_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010460, VkglTestCase_010460_1, VkglTestCase_010460_2);

#define VkglTestCase_010461_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010461_2 "ering.2d.linear_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010461, VkglTestCase_010461_1, VkglTestCase_010461_2);

#define VkglTestCase_010462_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010462_2 "ering.2d.linear_nearest_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010462, VkglTestCase_010462_1, VkglTestCase_010462_2);

#define VkglTestCase_010463_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010463_2 "ering.2d.linear_nearest_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010463, VkglTestCase_010463_1, VkglTestCase_010463_2);

#define VkglTestCase_010464_1 "dEQP-GLES2.functional.texture.fil"
#define VkglTestCase_010464_2 "tering.2d.linear_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010464, VkglTestCase_010464_1, VkglTestCase_010464_2);

#define VkglTestCase_010465_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010465_2 "ering.2d.linear_linear_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010465, VkglTestCase_010465_1, VkglTestCase_010465_2);

#define VkglTestCase_010466_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010466_2 "ering.2d.linear_linear_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010466, VkglTestCase_010466_1, VkglTestCase_010466_2);

#define VkglTestCase_010467_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010467_2 ".nearest_mipmap_nearest_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010467, VkglTestCase_010467_1, VkglTestCase_010467_2);

#define VkglTestCase_010468_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010468_2 ".nearest_mipmap_nearest_nearest_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010468, VkglTestCase_010468_1, VkglTestCase_010468_2);

#define VkglTestCase_010469_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010469_2 ".nearest_mipmap_nearest_nearest_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010469, VkglTestCase_010469_1, VkglTestCase_010469_2);

#define VkglTestCase_010470_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010470_2 "d.nearest_mipmap_nearest_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010470, VkglTestCase_010470_1, VkglTestCase_010470_2);

#define VkglTestCase_010471_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010471_2 ".nearest_mipmap_nearest_linear_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010471, VkglTestCase_010471_1, VkglTestCase_010471_2);

#define VkglTestCase_010472_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010472_2 ".nearest_mipmap_nearest_linear_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010472, VkglTestCase_010472_1, VkglTestCase_010472_2);

#define VkglTestCase_010473_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010473_2 "d.linear_mipmap_nearest_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010473, VkglTestCase_010473_1, VkglTestCase_010473_2);

#define VkglTestCase_010474_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010474_2 ".linear_mipmap_nearest_nearest_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010474, VkglTestCase_010474_1, VkglTestCase_010474_2);

#define VkglTestCase_010475_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010475_2 ".linear_mipmap_nearest_nearest_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010475, VkglTestCase_010475_1, VkglTestCase_010475_2);

#define VkglTestCase_010476_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010476_2 "d.linear_mipmap_nearest_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010476, VkglTestCase_010476_1, VkglTestCase_010476_2);

#define VkglTestCase_010477_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010477_2 "d.linear_mipmap_nearest_linear_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010477, VkglTestCase_010477_1, VkglTestCase_010477_2);

#define VkglTestCase_010478_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010478_2 "d.linear_mipmap_nearest_linear_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010478, VkglTestCase_010478_1, VkglTestCase_010478_2);

#define VkglTestCase_010479_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010479_2 "d.nearest_mipmap_linear_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010479, VkglTestCase_010479_1, VkglTestCase_010479_2);

#define VkglTestCase_010480_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010480_2 ".nearest_mipmap_linear_nearest_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010480, VkglTestCase_010480_1, VkglTestCase_010480_2);

#define VkglTestCase_010481_1 "dEQP-GLES2.functional.texture.filtering.2d"
#define VkglTestCase_010481_2 ".nearest_mipmap_linear_nearest_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010481, VkglTestCase_010481_1, VkglTestCase_010481_2);

#define VkglTestCase_010482_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010482_2 "d.nearest_mipmap_linear_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010482, VkglTestCase_010482_1, VkglTestCase_010482_2);

#define VkglTestCase_010483_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010483_2 "d.nearest_mipmap_linear_linear_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010483, VkglTestCase_010483_1, VkglTestCase_010483_2);

#define VkglTestCase_010484_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010484_2 "d.nearest_mipmap_linear_linear_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010484, VkglTestCase_010484_1, VkglTestCase_010484_2);

#define VkglTestCase_010485_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010485_2 "d.linear_mipmap_linear_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010485, VkglTestCase_010485_1, VkglTestCase_010485_2);

#define VkglTestCase_010486_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010486_2 "d.linear_mipmap_linear_nearest_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010486, VkglTestCase_010486_1, VkglTestCase_010486_2);

#define VkglTestCase_010487_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010487_2 "d.linear_mipmap_linear_nearest_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010487, VkglTestCase_010487_1, VkglTestCase_010487_2);

#define VkglTestCase_010488_1 "dEQP-GLES2.functional.texture.filtering."
#define VkglTestCase_010488_2 "2d.linear_mipmap_linear_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010488, VkglTestCase_010488_1, VkglTestCase_010488_2);

#define VkglTestCase_010489_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010489_2 "d.linear_mipmap_linear_linear_repeat_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010489, VkglTestCase_010489_1, VkglTestCase_010489_2);

#define VkglTestCase_010490_1 "dEQP-GLES2.functional.texture.filtering.2"
#define VkglTestCase_010490_2 "d.linear_mipmap_linear_linear_mirror_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010490, VkglTestCase_010490_1, VkglTestCase_010490_2);
