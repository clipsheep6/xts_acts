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

#define VkglTestCase_010491_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010491_2 ".cube.nearest_nearest_clamp_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010491, VkglTestCase_010491_1, VkglTestCase_010491_2);

#define VkglTestCase_010492_1 "dEQP-GLES2.functional.texture.filtering."
#define VkglTestCase_010492_2 "cube.nearest_nearest_clamp_rgba8888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010492, VkglTestCase_010492_1, VkglTestCase_010492_2);

#define VkglTestCase_010493_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010493_2 "g.cube.nearest_nearest_clamp_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010493, VkglTestCase_010493_1, VkglTestCase_010493_2);

#define VkglTestCase_010494_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010494_2 ".cube.nearest_nearest_clamp_rgb888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010494, VkglTestCase_010494_1, VkglTestCase_010494_2);

#define VkglTestCase_010495_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010495_2 ".cube.nearest_nearest_clamp_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010495, VkglTestCase_010495_1, VkglTestCase_010495_2);

#define VkglTestCase_010496_1 "dEQP-GLES2.functional.texture.filtering."
#define VkglTestCase_010496_2 "cube.nearest_nearest_clamp_rgba4444_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010496, VkglTestCase_010496_1, VkglTestCase_010496_2);

#define VkglTestCase_010497_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010497_2 "ing.cube.nearest_nearest_clamp_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010497, VkglTestCase_010497_1, VkglTestCase_010497_2);

#define VkglTestCase_010498_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010498_2 "ng.cube.nearest_nearest_clamp_l8_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010498, VkglTestCase_010498_1, VkglTestCase_010498_2);

#define VkglTestCase_010499_1 "dEQP-GLES2.functional.texture.filtering."
#define VkglTestCase_010499_2 "cube.nearest_nearest_repeat_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010499, VkglTestCase_010499_1, VkglTestCase_010499_2);

#define VkglTestCase_010500_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010500_2 ".cube.nearest_nearest_repeat_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010500, VkglTestCase_010500_1, VkglTestCase_010500_2);

#define VkglTestCase_010501_1 "dEQP-GLES2.functional.texture.filtering."
#define VkglTestCase_010501_2 "cube.nearest_nearest_repeat_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010501, VkglTestCase_010501_1, VkglTestCase_010501_2);

#define VkglTestCase_010502_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010502_2 "ng.cube.nearest_nearest_repeat_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010502, VkglTestCase_010502_1, VkglTestCase_010502_2);

#define VkglTestCase_010503_1 "dEQP-GLES2.functional.texture.filtering."
#define VkglTestCase_010503_2 "cube.nearest_nearest_mirror_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010503, VkglTestCase_010503_1, VkglTestCase_010503_2);

#define VkglTestCase_010504_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010504_2 ".cube.nearest_nearest_mirror_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010504, VkglTestCase_010504_1, VkglTestCase_010504_2);

#define VkglTestCase_010505_1 "dEQP-GLES2.functional.texture.filtering."
#define VkglTestCase_010505_2 "cube.nearest_nearest_mirror_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010505, VkglTestCase_010505_1, VkglTestCase_010505_2);

#define VkglTestCase_010506_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010506_2 "ng.cube.nearest_nearest_mirror_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010506, VkglTestCase_010506_1, VkglTestCase_010506_2);

#define VkglTestCase_010507_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010507_2 ".cube.nearest_linear_clamp_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010507, VkglTestCase_010507_1, VkglTestCase_010507_2);

#define VkglTestCase_010508_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010508_2 ".cube.nearest_linear_clamp_rgba8888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010508, VkglTestCase_010508_1, VkglTestCase_010508_2);

#define VkglTestCase_010509_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010509_2 "g.cube.nearest_linear_clamp_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010509, VkglTestCase_010509_1, VkglTestCase_010509_2);

#define VkglTestCase_010510_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010510_2 "g.cube.nearest_linear_clamp_rgb888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010510, VkglTestCase_010510_1, VkglTestCase_010510_2);

#define VkglTestCase_010511_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010511_2 ".cube.nearest_linear_clamp_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010511, VkglTestCase_010511_1, VkglTestCase_010511_2);

#define VkglTestCase_010512_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010512_2 ".cube.nearest_linear_clamp_rgba4444_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010512, VkglTestCase_010512_1, VkglTestCase_010512_2);

#define VkglTestCase_010513_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010513_2 "ing.cube.nearest_linear_clamp_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010513, VkglTestCase_010513_1, VkglTestCase_010513_2);

#define VkglTestCase_010514_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010514_2 "ing.cube.nearest_linear_clamp_l8_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010514, VkglTestCase_010514_1, VkglTestCase_010514_2);

#define VkglTestCase_010515_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010515_2 ".cube.nearest_linear_repeat_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010515, VkglTestCase_010515_1, VkglTestCase_010515_2);

#define VkglTestCase_010516_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010516_2 "g.cube.nearest_linear_repeat_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010516, VkglTestCase_010516_1, VkglTestCase_010516_2);

#define VkglTestCase_010517_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010517_2 ".cube.nearest_linear_repeat_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010517, VkglTestCase_010517_1, VkglTestCase_010517_2);

#define VkglTestCase_010518_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010518_2 "ing.cube.nearest_linear_repeat_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010518, VkglTestCase_010518_1, VkglTestCase_010518_2);

#define VkglTestCase_010519_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010519_2 ".cube.nearest_linear_mirror_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010519, VkglTestCase_010519_1, VkglTestCase_010519_2);

#define VkglTestCase_010520_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010520_2 "g.cube.nearest_linear_mirror_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010520, VkglTestCase_010520_1, VkglTestCase_010520_2);

#define VkglTestCase_010521_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010521_2 ".cube.nearest_linear_mirror_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010521, VkglTestCase_010521_1, VkglTestCase_010521_2);

#define VkglTestCase_010522_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010522_2 "ing.cube.nearest_linear_mirror_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010522, VkglTestCase_010522_1, VkglTestCase_010522_2);

#define VkglTestCase_010523_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010523_2 ".cube.linear_nearest_clamp_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010523, VkglTestCase_010523_1, VkglTestCase_010523_2);

#define VkglTestCase_010524_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010524_2 ".cube.linear_nearest_clamp_rgba8888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010524, VkglTestCase_010524_1, VkglTestCase_010524_2);

#define VkglTestCase_010525_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010525_2 "g.cube.linear_nearest_clamp_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010525, VkglTestCase_010525_1, VkglTestCase_010525_2);

#define VkglTestCase_010526_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010526_2 "g.cube.linear_nearest_clamp_rgb888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010526, VkglTestCase_010526_1, VkglTestCase_010526_2);

#define VkglTestCase_010527_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010527_2 ".cube.linear_nearest_clamp_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010527, VkglTestCase_010527_1, VkglTestCase_010527_2);

#define VkglTestCase_010528_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010528_2 ".cube.linear_nearest_clamp_rgba4444_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010528, VkglTestCase_010528_1, VkglTestCase_010528_2);

#define VkglTestCase_010529_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010529_2 "ing.cube.linear_nearest_clamp_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010529, VkglTestCase_010529_1, VkglTestCase_010529_2);

#define VkglTestCase_010530_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010530_2 "ing.cube.linear_nearest_clamp_l8_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010530, VkglTestCase_010530_1, VkglTestCase_010530_2);

#define VkglTestCase_010531_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010531_2 ".cube.linear_nearest_repeat_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010531, VkglTestCase_010531_1, VkglTestCase_010531_2);

#define VkglTestCase_010532_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010532_2 "g.cube.linear_nearest_repeat_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010532, VkglTestCase_010532_1, VkglTestCase_010532_2);

#define VkglTestCase_010533_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010533_2 ".cube.linear_nearest_repeat_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010533, VkglTestCase_010533_1, VkglTestCase_010533_2);

#define VkglTestCase_010534_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010534_2 "ing.cube.linear_nearest_repeat_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010534, VkglTestCase_010534_1, VkglTestCase_010534_2);

#define VkglTestCase_010535_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010535_2 ".cube.linear_nearest_mirror_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010535, VkglTestCase_010535_1, VkglTestCase_010535_2);

#define VkglTestCase_010536_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010536_2 "g.cube.linear_nearest_mirror_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010536, VkglTestCase_010536_1, VkglTestCase_010536_2);

#define VkglTestCase_010537_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010537_2 ".cube.linear_nearest_mirror_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010537, VkglTestCase_010537_1, VkglTestCase_010537_2);

#define VkglTestCase_010538_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010538_2 "ing.cube.linear_nearest_mirror_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010538, VkglTestCase_010538_1, VkglTestCase_010538_2);

#define VkglTestCase_010539_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010539_2 "g.cube.linear_linear_clamp_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010539, VkglTestCase_010539_1, VkglTestCase_010539_2);

#define VkglTestCase_010540_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010540_2 ".cube.linear_linear_clamp_rgba8888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010540, VkglTestCase_010540_1, VkglTestCase_010540_2);

#define VkglTestCase_010541_1 "dEQP-GLES2.functional.texture.filteri"
#define VkglTestCase_010541_2 "ng.cube.linear_linear_clamp_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010541, VkglTestCase_010541_1, VkglTestCase_010541_2);

#define VkglTestCase_010542_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010542_2 "g.cube.linear_linear_clamp_rgb888_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010542, VkglTestCase_010542_1, VkglTestCase_010542_2);

#define VkglTestCase_010543_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010543_2 "g.cube.linear_linear_clamp_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010543, VkglTestCase_010543_1, VkglTestCase_010543_2);

#define VkglTestCase_010544_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010544_2 ".cube.linear_linear_clamp_rgba4444_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010544, VkglTestCase_010544_1, VkglTestCase_010544_2);

#define VkglTestCase_010545_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010545_2 "ring.cube.linear_linear_clamp_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010545, VkglTestCase_010545_1, VkglTestCase_010545_2);

#define VkglTestCase_010546_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010546_2 "ing.cube.linear_linear_clamp_l8_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010546, VkglTestCase_010546_1, VkglTestCase_010546_2);

#define VkglTestCase_010547_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010547_2 ".cube.linear_linear_repeat_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010547, VkglTestCase_010547_1, VkglTestCase_010547_2);

#define VkglTestCase_010548_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010548_2 "g.cube.linear_linear_repeat_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010548, VkglTestCase_010548_1, VkglTestCase_010548_2);

#define VkglTestCase_010549_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010549_2 ".cube.linear_linear_repeat_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010549, VkglTestCase_010549_1, VkglTestCase_010549_2);

#define VkglTestCase_010550_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010550_2 "ing.cube.linear_linear_repeat_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010550, VkglTestCase_010550_1, VkglTestCase_010550_2);

#define VkglTestCase_010551_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010551_2 ".cube.linear_linear_mirror_rgba8888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010551, VkglTestCase_010551_1, VkglTestCase_010551_2);

#define VkglTestCase_010552_1 "dEQP-GLES2.functional.texture.filterin"
#define VkglTestCase_010552_2 "g.cube.linear_linear_mirror_rgb888_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010552, VkglTestCase_010552_1, VkglTestCase_010552_2);

#define VkglTestCase_010553_1 "dEQP-GLES2.functional.texture.filtering"
#define VkglTestCase_010553_2 ".cube.linear_linear_mirror_rgba4444_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010553, VkglTestCase_010553_1, VkglTestCase_010553_2);

#define VkglTestCase_010554_1 "dEQP-GLES2.functional.texture.filter"
#define VkglTestCase_010554_2 "ing.cube.linear_linear_mirror_l8_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010554, VkglTestCase_010554_1, VkglTestCase_010554_2);

#define VkglTestCase_010555_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010555_2 "nearest_mipmap_nearest_nearest_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010555, VkglTestCase_010555_1, VkglTestCase_010555_2);

#define VkglTestCase_010556_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010556_2 "nearest_mipmap_nearest_nearest_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010556, VkglTestCase_010556_1, VkglTestCase_010556_2);

#define VkglTestCase_010557_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010557_2 ".nearest_mipmap_nearest_nearest_repeat_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010557, VkglTestCase_010557_1, VkglTestCase_010557_2);

#define VkglTestCase_010558_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010558_2 "nearest_mipmap_nearest_nearest_repeat_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010558, VkglTestCase_010558_1, VkglTestCase_010558_2);

#define VkglTestCase_010559_1 "dEQP-GLES2.functional.texture.filtering.cu"
#define VkglTestCase_010559_2 "be.nearest_mipmap_nearest_nearest_repeat_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010559, VkglTestCase_010559_1, VkglTestCase_010559_2);

#define VkglTestCase_010560_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010560_2 "nearest_mipmap_nearest_nearest_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010560, VkglTestCase_010560_1, VkglTestCase_010560_2);

#define VkglTestCase_010561_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010561_2 ".nearest_mipmap_nearest_linear_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010561, VkglTestCase_010561_1, VkglTestCase_010561_2);

#define VkglTestCase_010562_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010562_2 "nearest_mipmap_nearest_linear_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010562, VkglTestCase_010562_1, VkglTestCase_010562_2);

#define VkglTestCase_010563_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010563_2 "nearest_mipmap_nearest_linear_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010563, VkglTestCase_010563_1, VkglTestCase_010563_2);

#define VkglTestCase_010564_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010564_2 ".linear_mipmap_nearest_nearest_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010564, VkglTestCase_010564_1, VkglTestCase_010564_2);

#define VkglTestCase_010565_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010565_2 "linear_mipmap_nearest_nearest_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010565, VkglTestCase_010565_1, VkglTestCase_010565_2);

#define VkglTestCase_010566_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010566_2 ".linear_mipmap_nearest_nearest_repeat_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010566, VkglTestCase_010566_1, VkglTestCase_010566_2);

#define VkglTestCase_010567_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010567_2 "linear_mipmap_nearest_nearest_repeat_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010567, VkglTestCase_010567_1, VkglTestCase_010567_2);

#define VkglTestCase_010568_1 "dEQP-GLES2.functional.texture.filtering.cu"
#define VkglTestCase_010568_2 "be.linear_mipmap_nearest_nearest_repeat_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010568, VkglTestCase_010568_1, VkglTestCase_010568_2);

#define VkglTestCase_010569_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010569_2 "linear_mipmap_nearest_nearest_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010569, VkglTestCase_010569_1, VkglTestCase_010569_2);

#define VkglTestCase_010570_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010570_2 ".linear_mipmap_nearest_linear_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010570, VkglTestCase_010570_1, VkglTestCase_010570_2);

#define VkglTestCase_010571_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010571_2 ".linear_mipmap_nearest_linear_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010571, VkglTestCase_010571_1, VkglTestCase_010571_2);

#define VkglTestCase_010572_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010572_2 ".linear_mipmap_nearest_linear_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010572, VkglTestCase_010572_1, VkglTestCase_010572_2);

#define VkglTestCase_010573_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010573_2 ".nearest_mipmap_linear_nearest_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010573, VkglTestCase_010573_1, VkglTestCase_010573_2);

#define VkglTestCase_010574_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010574_2 "nearest_mipmap_linear_nearest_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010574, VkglTestCase_010574_1, VkglTestCase_010574_2);

#define VkglTestCase_010575_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010575_2 ".nearest_mipmap_linear_nearest_repeat_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010575, VkglTestCase_010575_1, VkglTestCase_010575_2);

#define VkglTestCase_010576_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010576_2 "nearest_mipmap_linear_nearest_repeat_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010576, VkglTestCase_010576_1, VkglTestCase_010576_2);

#define VkglTestCase_010577_1 "dEQP-GLES2.functional.texture.filtering.cu"
#define VkglTestCase_010577_2 "be.nearest_mipmap_linear_nearest_repeat_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010577, VkglTestCase_010577_1, VkglTestCase_010577_2);

#define VkglTestCase_010578_1 "dEQP-GLES2.functional.texture.filtering.cube."
#define VkglTestCase_010578_2 "nearest_mipmap_linear_nearest_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010578, VkglTestCase_010578_1, VkglTestCase_010578_2);

#define VkglTestCase_010579_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010579_2 ".nearest_mipmap_linear_linear_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010579, VkglTestCase_010579_1, VkglTestCase_010579_2);

#define VkglTestCase_010580_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010580_2 ".nearest_mipmap_linear_linear_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010580, VkglTestCase_010580_1, VkglTestCase_010580_2);

#define VkglTestCase_010581_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010581_2 ".nearest_mipmap_linear_linear_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010581, VkglTestCase_010581_1, VkglTestCase_010581_2);

#define VkglTestCase_010582_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010582_2 ".linear_mipmap_linear_nearest_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010582, VkglTestCase_010582_1, VkglTestCase_010582_2);

#define VkglTestCase_010583_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010583_2 ".linear_mipmap_linear_nearest_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010583, VkglTestCase_010583_1, VkglTestCase_010583_2);

#define VkglTestCase_010584_1 "dEQP-GLES2.functional.texture.filtering.cub"
#define VkglTestCase_010584_2 "e.linear_mipmap_linear_nearest_repeat_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010584, VkglTestCase_010584_1, VkglTestCase_010584_2);

#define VkglTestCase_010585_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010585_2 ".linear_mipmap_linear_nearest_repeat_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010585, VkglTestCase_010585_1, VkglTestCase_010585_2);

#define VkglTestCase_010586_1 "dEQP-GLES2.functional.texture.filtering.c"
#define VkglTestCase_010586_2 "ube.linear_mipmap_linear_nearest_repeat_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010586, VkglTestCase_010586_1, VkglTestCase_010586_2);

#define VkglTestCase_010587_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010587_2 ".linear_mipmap_linear_nearest_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010587, VkglTestCase_010587_1, VkglTestCase_010587_2);

#define VkglTestCase_010588_1 "dEQP-GLES2.functional.texture.filtering.cub"
#define VkglTestCase_010588_2 "e.linear_mipmap_linear_linear_clamp_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010588, VkglTestCase_010588_1, VkglTestCase_010588_2);

#define VkglTestCase_010589_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010589_2 ".linear_mipmap_linear_linear_repeat_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010589, VkglTestCase_010589_1, VkglTestCase_010589_2);

#define VkglTestCase_010590_1 "dEQP-GLES2.functional.texture.filtering.cube"
#define VkglTestCase_010590_2 ".linear_mipmap_linear_linear_mirror_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010590, VkglTestCase_010590_1, VkglTestCase_010590_2);

#define VkglTestCase_010591_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010591_2 "ring.cube.nearest_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010591, VkglTestCase_010591_1, VkglTestCase_010591_2);

#define VkglTestCase_010592_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010592_2 "ring.cube.nearest_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010592, VkglTestCase_010592_1, VkglTestCase_010592_2);

#define VkglTestCase_010593_1 "dEQP-GLES2.functional.texture.filte"
#define VkglTestCase_010593_2 "ring.cube.linear_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010593, VkglTestCase_010593_1, VkglTestCase_010593_2);

#define VkglTestCase_010594_1 "dEQP-GLES2.functional.texture.filt"
#define VkglTestCase_010594_2 "ering.cube.linear_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010594, VkglTestCase_010594_1, VkglTestCase_010594_2);

#define VkglTestCase_010595_1 "dEQP-GLES2.functional.texture.filtering.cub"
#define VkglTestCase_010595_2 "e.nearest_mipmap_nearest_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010595, VkglTestCase_010595_1, VkglTestCase_010595_2);

#define VkglTestCase_010596_1 "dEQP-GLES2.functional.texture.filtering.cu"
#define VkglTestCase_010596_2 "be.nearest_mipmap_nearest_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010596, VkglTestCase_010596_1, VkglTestCase_010596_2);

#define VkglTestCase_010597_1 "dEQP-GLES2.functional.texture.filtering.cu"
#define VkglTestCase_010597_2 "be.linear_mipmap_nearest_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010597, VkglTestCase_010597_1, VkglTestCase_010597_2);

#define VkglTestCase_010598_1 "dEQP-GLES2.functional.texture.filtering.cu"
#define VkglTestCase_010598_2 "be.linear_mipmap_nearest_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010598, VkglTestCase_010598_1, VkglTestCase_010598_2);

#define VkglTestCase_010599_1 "dEQP-GLES2.functional.texture.filtering.cu"
#define VkglTestCase_010599_2 "be.nearest_mipmap_linear_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010599, VkglTestCase_010599_1, VkglTestCase_010599_2);

#define VkglTestCase_010600_1 "dEQP-GLES2.functional.texture.filtering.cu"
#define VkglTestCase_010600_2 "be.nearest_mipmap_linear_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010600, VkglTestCase_010600_1, VkglTestCase_010600_2);

#define VkglTestCase_010601_1 "dEQP-GLES2.functional.texture.filtering.cu"
#define VkglTestCase_010601_2 "be.linear_mipmap_linear_nearest_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010601, VkglTestCase_010601_1, VkglTestCase_010601_2);

#define VkglTestCase_010602_1 "dEQP-GLES2.functional.texture.filtering.c"
#define VkglTestCase_010602_2 "ube.linear_mipmap_linear_linear_clamp_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010602, VkglTestCase_010602_1, VkglTestCase_010602_2);
