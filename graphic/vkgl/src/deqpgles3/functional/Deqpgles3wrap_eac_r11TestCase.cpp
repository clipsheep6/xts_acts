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

#define VkglTestCase_022519_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022519_2 "p.eac_r11.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022519, VkglTestCase_022519_1, VkglTestCase_022519_2);

#define VkglTestCase_022520_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022520_2 "ap.eac_r11.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022520, VkglTestCase_022520_1, VkglTestCase_022520_2);

#define VkglTestCase_022521_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022521_2 "p.eac_r11.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022521, VkglTestCase_022521_1, VkglTestCase_022521_2);

#define VkglTestCase_022522_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022522_2 "p.eac_r11.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022522, VkglTestCase_022522_1, VkglTestCase_022522_2);

#define VkglTestCase_022523_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022523_2 "p.eac_r11.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022523, VkglTestCase_022523_1, VkglTestCase_022523_2);

#define VkglTestCase_022524_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022524_2 "p.eac_r11.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022524, VkglTestCase_022524_1, VkglTestCase_022524_2);

#define VkglTestCase_022525_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022525_2 "p.eac_r11.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022525, VkglTestCase_022525_1, VkglTestCase_022525_2);

#define VkglTestCase_022526_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022526_2 "p.eac_r11.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022526, VkglTestCase_022526_1, VkglTestCase_022526_2);

#define VkglTestCase_022527_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022527_2 ".eac_r11.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022527, VkglTestCase_022527_1, VkglTestCase_022527_2);

#define VkglTestCase_022528_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022528_2 "p.eac_r11.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022528, VkglTestCase_022528_1, VkglTestCase_022528_2);

#define VkglTestCase_022529_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022529_2 ".eac_r11.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022529, VkglTestCase_022529_1, VkglTestCase_022529_2);

#define VkglTestCase_022530_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022530_2 "p.eac_r11.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022530, VkglTestCase_022530_1, VkglTestCase_022530_2);

#define VkglTestCase_022531_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022531_2 "p.eac_r11.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022531, VkglTestCase_022531_1, VkglTestCase_022531_2);

#define VkglTestCase_022532_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022532_2 "p.eac_r11.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022532, VkglTestCase_022532_1, VkglTestCase_022532_2);

#define VkglTestCase_022533_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022533_2 ".eac_r11.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022533, VkglTestCase_022533_1, VkglTestCase_022533_2);

#define VkglTestCase_022534_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022534_2 "p.eac_r11.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022534, VkglTestCase_022534_1, VkglTestCase_022534_2);

#define VkglTestCase_022535_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022535_2 ".eac_r11.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022535, VkglTestCase_022535_1, VkglTestCase_022535_2);

#define VkglTestCase_022536_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022536_2 "p.eac_r11.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022536, VkglTestCase_022536_1, VkglTestCase_022536_2);

#define VkglTestCase_022537_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022537_2 "p.eac_r11.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022537, VkglTestCase_022537_1, VkglTestCase_022537_2);

#define VkglTestCase_022538_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022538_2 "p.eac_r11.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022538, VkglTestCase_022538_1, VkglTestCase_022538_2);

#define VkglTestCase_022539_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022539_2 ".eac_r11.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022539, VkglTestCase_022539_1, VkglTestCase_022539_2);

#define VkglTestCase_022540_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022540_2 "p.eac_r11.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022540, VkglTestCase_022540_1, VkglTestCase_022540_2);

#define VkglTestCase_022541_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022541_2 ".eac_r11.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022541, VkglTestCase_022541_1, VkglTestCase_022541_2);

#define VkglTestCase_022542_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022542_2 "p.eac_r11.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022542, VkglTestCase_022542_1, VkglTestCase_022542_2);

#define VkglTestCase_022543_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022543_2 ".eac_r11.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022543, VkglTestCase_022543_1, VkglTestCase_022543_2);

#define VkglTestCase_022544_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022544_2 "p.eac_r11.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022544, VkglTestCase_022544_1, VkglTestCase_022544_2);

#define VkglTestCase_022545_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022545_2 ".eac_r11.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022545, VkglTestCase_022545_1, VkglTestCase_022545_2);

#define VkglTestCase_022546_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022546_2 ".eac_r11.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022546, VkglTestCase_022546_1, VkglTestCase_022546_2);

#define VkglTestCase_022547_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022547_2 ".eac_r11.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022547, VkglTestCase_022547_1, VkglTestCase_022547_2);

#define VkglTestCase_022548_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022548_2 ".eac_r11.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022548, VkglTestCase_022548_1, VkglTestCase_022548_2);

#define VkglTestCase_022549_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022549_2 ".eac_r11.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022549, VkglTestCase_022549_1, VkglTestCase_022549_2);

#define VkglTestCase_022550_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022550_2 "p.eac_r11.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022550, VkglTestCase_022550_1, VkglTestCase_022550_2);

#define VkglTestCase_022551_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022551_2 ".eac_r11.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022551, VkglTestCase_022551_1, VkglTestCase_022551_2);

#define VkglTestCase_022552_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022552_2 ".eac_r11.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022552, VkglTestCase_022552_1, VkglTestCase_022552_2);

#define VkglTestCase_022553_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022553_2 ".eac_r11.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022553, VkglTestCase_022553_1, VkglTestCase_022553_2);

#define VkglTestCase_022554_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022554_2 ".eac_r11.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022554, VkglTestCase_022554_1, VkglTestCase_022554_2);
