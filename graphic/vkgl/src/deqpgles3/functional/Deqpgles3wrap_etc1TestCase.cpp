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

#define VkglTestCase_022483_1 "dEQP-GLES3.functional.texture.w"
#define VkglTestCase_022483_2 "rap.etc1.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022483, VkglTestCase_022483_1, VkglTestCase_022483_2);

#define VkglTestCase_022484_1 "dEQP-GLES3.functional.texture.w"
#define VkglTestCase_022484_2 "rap.etc1.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022484, VkglTestCase_022484_1, VkglTestCase_022484_2);

#define VkglTestCase_022485_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022485_2 "ap.etc1.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022485, VkglTestCase_022485_1, VkglTestCase_022485_2);

#define VkglTestCase_022486_1 "dEQP-GLES3.functional.texture.w"
#define VkglTestCase_022486_2 "rap.etc1.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022486, VkglTestCase_022486_1, VkglTestCase_022486_2);

#define VkglTestCase_022487_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022487_2 "ap.etc1.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022487, VkglTestCase_022487_1, VkglTestCase_022487_2);

#define VkglTestCase_022488_1 "dEQP-GLES3.functional.texture.w"
#define VkglTestCase_022488_2 "rap.etc1.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022488, VkglTestCase_022488_1, VkglTestCase_022488_2);

#define VkglTestCase_022489_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022489_2 "ap.etc1.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022489, VkglTestCase_022489_1, VkglTestCase_022489_2);

#define VkglTestCase_022490_1 "dEQP-GLES3.functional.texture.w"
#define VkglTestCase_022490_2 "rap.etc1.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022490, VkglTestCase_022490_1, VkglTestCase_022490_2);

#define VkglTestCase_022491_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022491_2 "ap.etc1.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022491, VkglTestCase_022491_1, VkglTestCase_022491_2);

#define VkglTestCase_022492_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022492_2 "ap.etc1.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022492, VkglTestCase_022492_1, VkglTestCase_022492_2);

#define VkglTestCase_022493_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022493_2 "ap.etc1.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022493, VkglTestCase_022493_1, VkglTestCase_022493_2);

#define VkglTestCase_022494_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022494_2 "ap.etc1.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022494, VkglTestCase_022494_1, VkglTestCase_022494_2);

#define VkglTestCase_022495_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022495_2 "ap.etc1.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022495, VkglTestCase_022495_1, VkglTestCase_022495_2);

#define VkglTestCase_022496_1 "dEQP-GLES3.functional.texture.w"
#define VkglTestCase_022496_2 "rap.etc1.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022496, VkglTestCase_022496_1, VkglTestCase_022496_2);

#define VkglTestCase_022497_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022497_2 "ap.etc1.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022497, VkglTestCase_022497_1, VkglTestCase_022497_2);

#define VkglTestCase_022498_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022498_2 "ap.etc1.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022498, VkglTestCase_022498_1, VkglTestCase_022498_2);

#define VkglTestCase_022499_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022499_2 "ap.etc1.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022499, VkglTestCase_022499_1, VkglTestCase_022499_2);

#define VkglTestCase_022500_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022500_2 "ap.etc1.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022500, VkglTestCase_022500_1, VkglTestCase_022500_2);

#define VkglTestCase_022501_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022501_2 "ap.etc1.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022501, VkglTestCase_022501_1, VkglTestCase_022501_2);

#define VkglTestCase_022502_1 "dEQP-GLES3.functional.texture.w"
#define VkglTestCase_022502_2 "rap.etc1.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022502, VkglTestCase_022502_1, VkglTestCase_022502_2);

#define VkglTestCase_022503_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022503_2 "ap.etc1.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022503, VkglTestCase_022503_1, VkglTestCase_022503_2);

#define VkglTestCase_022504_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022504_2 "ap.etc1.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022504, VkglTestCase_022504_1, VkglTestCase_022504_2);

#define VkglTestCase_022505_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022505_2 "ap.etc1.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022505, VkglTestCase_022505_1, VkglTestCase_022505_2);

#define VkglTestCase_022506_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022506_2 "ap.etc1.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022506, VkglTestCase_022506_1, VkglTestCase_022506_2);

#define VkglTestCase_022507_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022507_2 "ap.etc1.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022507, VkglTestCase_022507_1, VkglTestCase_022507_2);

#define VkglTestCase_022508_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022508_2 "ap.etc1.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022508, VkglTestCase_022508_1, VkglTestCase_022508_2);

#define VkglTestCase_022509_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022509_2 "p.etc1.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022509, VkglTestCase_022509_1, VkglTestCase_022509_2);

#define VkglTestCase_022510_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022510_2 "ap.etc1.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022510, VkglTestCase_022510_1, VkglTestCase_022510_2);

#define VkglTestCase_022511_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022511_2 "p.etc1.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022511, VkglTestCase_022511_1, VkglTestCase_022511_2);

#define VkglTestCase_022512_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022512_2 "ap.etc1.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022512, VkglTestCase_022512_1, VkglTestCase_022512_2);

#define VkglTestCase_022513_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022513_2 "ap.etc1.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022513, VkglTestCase_022513_1, VkglTestCase_022513_2);

#define VkglTestCase_022514_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022514_2 "ap.etc1.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022514, VkglTestCase_022514_1, VkglTestCase_022514_2);

#define VkglTestCase_022515_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022515_2 "p.etc1.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022515, VkglTestCase_022515_1, VkglTestCase_022515_2);

#define VkglTestCase_022516_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022516_2 "ap.etc1.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022516, VkglTestCase_022516_1, VkglTestCase_022516_2);

#define VkglTestCase_022517_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022517_2 "p.etc1.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022517, VkglTestCase_022517_1, VkglTestCase_022517_2);

#define VkglTestCase_022518_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022518_2 "ap.etc1.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022518, VkglTestCase_022518_1, VkglTestCase_022518_2);
