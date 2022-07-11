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

#define VkglTestCase_021535_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021535_2 "rs.random.texture.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021535, VkglTestCase_021535_1, VkglTestCase_021535_2);

#define VkglTestCase_021536_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021536_2 "rs.random.texture.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021536, VkglTestCase_021536_1, VkglTestCase_021536_2);

#define VkglTestCase_021537_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021537_2 "rs.random.texture.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021537, VkglTestCase_021537_1, VkglTestCase_021537_2);

#define VkglTestCase_021538_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021538_2 "rs.random.texture.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021538, VkglTestCase_021538_1, VkglTestCase_021538_2);

#define VkglTestCase_021539_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021539_2 "rs.random.texture.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021539, VkglTestCase_021539_1, VkglTestCase_021539_2);

#define VkglTestCase_021540_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021540_2 "rs.random.texture.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021540, VkglTestCase_021540_1, VkglTestCase_021540_2);

#define VkglTestCase_021541_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021541_2 "rs.random.texture.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021541, VkglTestCase_021541_1, VkglTestCase_021541_2);

#define VkglTestCase_021542_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021542_2 "rs.random.texture.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021542, VkglTestCase_021542_1, VkglTestCase_021542_2);

#define VkglTestCase_021543_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021543_2 "rs.random.texture.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021543, VkglTestCase_021543_1, VkglTestCase_021543_2);

#define VkglTestCase_021544_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021544_2 "rs.random.texture.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021544, VkglTestCase_021544_1, VkglTestCase_021544_2);

#define VkglTestCase_021545_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021545_2 "s.random.texture.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021545, VkglTestCase_021545_1, VkglTestCase_021545_2);

#define VkglTestCase_021546_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021546_2 "s.random.texture.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021546, VkglTestCase_021546_1, VkglTestCase_021546_2);

#define VkglTestCase_021547_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021547_2 "s.random.texture.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021547, VkglTestCase_021547_1, VkglTestCase_021547_2);

#define VkglTestCase_021548_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021548_2 "s.random.texture.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021548, VkglTestCase_021548_1, VkglTestCase_021548_2);

#define VkglTestCase_021549_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021549_2 "s.random.texture.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021549, VkglTestCase_021549_1, VkglTestCase_021549_2);

#define VkglTestCase_021550_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021550_2 "s.random.texture.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021550, VkglTestCase_021550_1, VkglTestCase_021550_2);

#define VkglTestCase_021551_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021551_2 "s.random.texture.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021551, VkglTestCase_021551_1, VkglTestCase_021551_2);

#define VkglTestCase_021552_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021552_2 "s.random.texture.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021552, VkglTestCase_021552_1, VkglTestCase_021552_2);

#define VkglTestCase_021553_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021553_2 "s.random.texture.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021553, VkglTestCase_021553_1, VkglTestCase_021553_2);

#define VkglTestCase_021554_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021554_2 "s.random.texture.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021554, VkglTestCase_021554_1, VkglTestCase_021554_2);

#define VkglTestCase_021555_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021555_2 "s.random.texture.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021555, VkglTestCase_021555_1, VkglTestCase_021555_2);

#define VkglTestCase_021556_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021556_2 "s.random.texture.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021556, VkglTestCase_021556_1, VkglTestCase_021556_2);

#define VkglTestCase_021557_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021557_2 "s.random.texture.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021557, VkglTestCase_021557_1, VkglTestCase_021557_2);

#define VkglTestCase_021558_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021558_2 "s.random.texture.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021558, VkglTestCase_021558_1, VkglTestCase_021558_2);

#define VkglTestCase_021559_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021559_2 "s.random.texture.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021559, VkglTestCase_021559_1, VkglTestCase_021559_2);

#define VkglTestCase_021560_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021560_2 "s.random.texture.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021560, VkglTestCase_021560_1, VkglTestCase_021560_2);

#define VkglTestCase_021561_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021561_2 "s.random.texture.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021561, VkglTestCase_021561_1, VkglTestCase_021561_2);

#define VkglTestCase_021562_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021562_2 "s.random.texture.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021562, VkglTestCase_021562_1, VkglTestCase_021562_2);

#define VkglTestCase_021563_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021563_2 "s.random.texture.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021563, VkglTestCase_021563_1, VkglTestCase_021563_2);

#define VkglTestCase_021564_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021564_2 "s.random.texture.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021564, VkglTestCase_021564_1, VkglTestCase_021564_2);

#define VkglTestCase_021565_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021565_2 "s.random.texture.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021565, VkglTestCase_021565_1, VkglTestCase_021565_2);

#define VkglTestCase_021566_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021566_2 "s.random.texture.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021566, VkglTestCase_021566_1, VkglTestCase_021566_2);

#define VkglTestCase_021567_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021567_2 "s.random.texture.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021567, VkglTestCase_021567_1, VkglTestCase_021567_2);

#define VkglTestCase_021568_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021568_2 "s.random.texture.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021568, VkglTestCase_021568_1, VkglTestCase_021568_2);

#define VkglTestCase_021569_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021569_2 "s.random.texture.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021569, VkglTestCase_021569_1, VkglTestCase_021569_2);

#define VkglTestCase_021570_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021570_2 "s.random.texture.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021570, VkglTestCase_021570_1, VkglTestCase_021570_2);

#define VkglTestCase_021571_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021571_2 "s.random.texture.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021571, VkglTestCase_021571_1, VkglTestCase_021571_2);

#define VkglTestCase_021572_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021572_2 "s.random.texture.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021572, VkglTestCase_021572_1, VkglTestCase_021572_2);

#define VkglTestCase_021573_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021573_2 "s.random.texture.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021573, VkglTestCase_021573_1, VkglTestCase_021573_2);

#define VkglTestCase_021574_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021574_2 "s.random.texture.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021574, VkglTestCase_021574_1, VkglTestCase_021574_2);

#define VkglTestCase_021575_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021575_2 "s.random.texture.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021575, VkglTestCase_021575_1, VkglTestCase_021575_2);

#define VkglTestCase_021576_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021576_2 "s.random.texture.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021576, VkglTestCase_021576_1, VkglTestCase_021576_2);

#define VkglTestCase_021577_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021577_2 "s.random.texture.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021577, VkglTestCase_021577_1, VkglTestCase_021577_2);

#define VkglTestCase_021578_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021578_2 "s.random.texture.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021578, VkglTestCase_021578_1, VkglTestCase_021578_2);

#define VkglTestCase_021579_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021579_2 "s.random.texture.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021579, VkglTestCase_021579_1, VkglTestCase_021579_2);

#define VkglTestCase_021580_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021580_2 "s.random.texture.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021580, VkglTestCase_021580_1, VkglTestCase_021580_2);

#define VkglTestCase_021581_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021581_2 "s.random.texture.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021581, VkglTestCase_021581_1, VkglTestCase_021581_2);

#define VkglTestCase_021582_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021582_2 "s.random.texture.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021582, VkglTestCase_021582_1, VkglTestCase_021582_2);

#define VkglTestCase_021583_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021583_2 "s.random.texture.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021583, VkglTestCase_021583_1, VkglTestCase_021583_2);

#define VkglTestCase_021584_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021584_2 "s.random.texture.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021584, VkglTestCase_021584_1, VkglTestCase_021584_2);

#define VkglTestCase_021585_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021585_2 "s.random.texture.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021585, VkglTestCase_021585_1, VkglTestCase_021585_2);

#define VkglTestCase_021586_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021586_2 "s.random.texture.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021586, VkglTestCase_021586_1, VkglTestCase_021586_2);

#define VkglTestCase_021587_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021587_2 "s.random.texture.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021587, VkglTestCase_021587_1, VkglTestCase_021587_2);

#define VkglTestCase_021588_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021588_2 "s.random.texture.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021588, VkglTestCase_021588_1, VkglTestCase_021588_2);

#define VkglTestCase_021589_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021589_2 "s.random.texture.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021589, VkglTestCase_021589_1, VkglTestCase_021589_2);

#define VkglTestCase_021590_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021590_2 "s.random.texture.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021590, VkglTestCase_021590_1, VkglTestCase_021590_2);

#define VkglTestCase_021591_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021591_2 "s.random.texture.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021591, VkglTestCase_021591_1, VkglTestCase_021591_2);

#define VkglTestCase_021592_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021592_2 "s.random.texture.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021592, VkglTestCase_021592_1, VkglTestCase_021592_2);

#define VkglTestCase_021593_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021593_2 "s.random.texture.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021593, VkglTestCase_021593_1, VkglTestCase_021593_2);

#define VkglTestCase_021594_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021594_2 "s.random.texture.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021594, VkglTestCase_021594_1, VkglTestCase_021594_2);

#define VkglTestCase_021595_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021595_2 "s.random.texture.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021595, VkglTestCase_021595_1, VkglTestCase_021595_2);

#define VkglTestCase_021596_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021596_2 "s.random.texture.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021596, VkglTestCase_021596_1, VkglTestCase_021596_2);

#define VkglTestCase_021597_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021597_2 "s.random.texture.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021597, VkglTestCase_021597_1, VkglTestCase_021597_2);

#define VkglTestCase_021598_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021598_2 "s.random.texture.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021598, VkglTestCase_021598_1, VkglTestCase_021598_2);

#define VkglTestCase_021599_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021599_2 "s.random.texture.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021599, VkglTestCase_021599_1, VkglTestCase_021599_2);

#define VkglTestCase_021600_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021600_2 "s.random.texture.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021600, VkglTestCase_021600_1, VkglTestCase_021600_2);

#define VkglTestCase_021601_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021601_2 "s.random.texture.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021601, VkglTestCase_021601_1, VkglTestCase_021601_2);

#define VkglTestCase_021602_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021602_2 "s.random.texture.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021602, VkglTestCase_021602_1, VkglTestCase_021602_2);

#define VkglTestCase_021603_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021603_2 "s.random.texture.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021603, VkglTestCase_021603_1, VkglTestCase_021603_2);

#define VkglTestCase_021604_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021604_2 "s.random.texture.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021604, VkglTestCase_021604_1, VkglTestCase_021604_2);

#define VkglTestCase_021605_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021605_2 "s.random.texture.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021605, VkglTestCase_021605_1, VkglTestCase_021605_2);

#define VkglTestCase_021606_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021606_2 "s.random.texture.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021606, VkglTestCase_021606_1, VkglTestCase_021606_2);

#define VkglTestCase_021607_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021607_2 "s.random.texture.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021607, VkglTestCase_021607_1, VkglTestCase_021607_2);

#define VkglTestCase_021608_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021608_2 "s.random.texture.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021608, VkglTestCase_021608_1, VkglTestCase_021608_2);

#define VkglTestCase_021609_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021609_2 "s.random.texture.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021609, VkglTestCase_021609_1, VkglTestCase_021609_2);

#define VkglTestCase_021610_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021610_2 "s.random.texture.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021610, VkglTestCase_021610_1, VkglTestCase_021610_2);

#define VkglTestCase_021611_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021611_2 "s.random.texture.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021611, VkglTestCase_021611_1, VkglTestCase_021611_2);

#define VkglTestCase_021612_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021612_2 "s.random.texture.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021612, VkglTestCase_021612_1, VkglTestCase_021612_2);

#define VkglTestCase_021613_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021613_2 "s.random.texture.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021613, VkglTestCase_021613_1, VkglTestCase_021613_2);

#define VkglTestCase_021614_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021614_2 "s.random.texture.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021614, VkglTestCase_021614_1, VkglTestCase_021614_2);

#define VkglTestCase_021615_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021615_2 "s.random.texture.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021615, VkglTestCase_021615_1, VkglTestCase_021615_2);

#define VkglTestCase_021616_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021616_2 "s.random.texture.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021616, VkglTestCase_021616_1, VkglTestCase_021616_2);

#define VkglTestCase_021617_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021617_2 "s.random.texture.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021617, VkglTestCase_021617_1, VkglTestCase_021617_2);

#define VkglTestCase_021618_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021618_2 "s.random.texture.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021618, VkglTestCase_021618_1, VkglTestCase_021618_2);

#define VkglTestCase_021619_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021619_2 "s.random.texture.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021619, VkglTestCase_021619_1, VkglTestCase_021619_2);

#define VkglTestCase_021620_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021620_2 "s.random.texture.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021620, VkglTestCase_021620_1, VkglTestCase_021620_2);

#define VkglTestCase_021621_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021621_2 "s.random.texture.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021621, VkglTestCase_021621_1, VkglTestCase_021621_2);

#define VkglTestCase_021622_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021622_2 "s.random.texture.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021622, VkglTestCase_021622_1, VkglTestCase_021622_2);

#define VkglTestCase_021623_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021623_2 "s.random.texture.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021623, VkglTestCase_021623_1, VkglTestCase_021623_2);

#define VkglTestCase_021624_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021624_2 "s.random.texture.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021624, VkglTestCase_021624_1, VkglTestCase_021624_2);

#define VkglTestCase_021625_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021625_2 "s.random.texture.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021625, VkglTestCase_021625_1, VkglTestCase_021625_2);

#define VkglTestCase_021626_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021626_2 "s.random.texture.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021626, VkglTestCase_021626_1, VkglTestCase_021626_2);

#define VkglTestCase_021627_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021627_2 "s.random.texture.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021627, VkglTestCase_021627_1, VkglTestCase_021627_2);

#define VkglTestCase_021628_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021628_2 "s.random.texture.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021628, VkglTestCase_021628_1, VkglTestCase_021628_2);

#define VkglTestCase_021629_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021629_2 "s.random.texture.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021629, VkglTestCase_021629_1, VkglTestCase_021629_2);

#define VkglTestCase_021630_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021630_2 "s.random.texture.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021630, VkglTestCase_021630_1, VkglTestCase_021630_2);

#define VkglTestCase_021631_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021631_2 "s.random.texture.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021631, VkglTestCase_021631_1, VkglTestCase_021631_2);

#define VkglTestCase_021632_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021632_2 "s.random.texture.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021632, VkglTestCase_021632_1, VkglTestCase_021632_2);

#define VkglTestCase_021633_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021633_2 "s.random.texture.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021633, VkglTestCase_021633_1, VkglTestCase_021633_2);

#define VkglTestCase_021634_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021634_2 "s.random.texture.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021634, VkglTestCase_021634_1, VkglTestCase_021634_2);

#define VkglTestCase_021635_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021635_2 "s.random.texture.fragment.100"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021635, VkglTestCase_021635_1, VkglTestCase_021635_2);

#define VkglTestCase_021636_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021636_2 "s.random.texture.fragment.101"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021636, VkglTestCase_021636_1, VkglTestCase_021636_2);

#define VkglTestCase_021637_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021637_2 "s.random.texture.fragment.102"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021637, VkglTestCase_021637_1, VkglTestCase_021637_2);

#define VkglTestCase_021638_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021638_2 "s.random.texture.fragment.103"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021638, VkglTestCase_021638_1, VkglTestCase_021638_2);

#define VkglTestCase_021639_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021639_2 "s.random.texture.fragment.104"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021639, VkglTestCase_021639_1, VkglTestCase_021639_2);

#define VkglTestCase_021640_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021640_2 "s.random.texture.fragment.105"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021640, VkglTestCase_021640_1, VkglTestCase_021640_2);

#define VkglTestCase_021641_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021641_2 "s.random.texture.fragment.106"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021641, VkglTestCase_021641_1, VkglTestCase_021641_2);

#define VkglTestCase_021642_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021642_2 "s.random.texture.fragment.107"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021642, VkglTestCase_021642_1, VkglTestCase_021642_2);

#define VkglTestCase_021643_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021643_2 "s.random.texture.fragment.108"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021643, VkglTestCase_021643_1, VkglTestCase_021643_2);

#define VkglTestCase_021644_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021644_2 "s.random.texture.fragment.109"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021644, VkglTestCase_021644_1, VkglTestCase_021644_2);

#define VkglTestCase_021645_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021645_2 "s.random.texture.fragment.110"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021645, VkglTestCase_021645_1, VkglTestCase_021645_2);

#define VkglTestCase_021646_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021646_2 "s.random.texture.fragment.111"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021646, VkglTestCase_021646_1, VkglTestCase_021646_2);

#define VkglTestCase_021647_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021647_2 "s.random.texture.fragment.112"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021647, VkglTestCase_021647_1, VkglTestCase_021647_2);

#define VkglTestCase_021648_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021648_2 "s.random.texture.fragment.113"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021648, VkglTestCase_021648_1, VkglTestCase_021648_2);

#define VkglTestCase_021649_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021649_2 "s.random.texture.fragment.114"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021649, VkglTestCase_021649_1, VkglTestCase_021649_2);

#define VkglTestCase_021650_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021650_2 "s.random.texture.fragment.115"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021650, VkglTestCase_021650_1, VkglTestCase_021650_2);

#define VkglTestCase_021651_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021651_2 "s.random.texture.fragment.116"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021651, VkglTestCase_021651_1, VkglTestCase_021651_2);

#define VkglTestCase_021652_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021652_2 "s.random.texture.fragment.117"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021652, VkglTestCase_021652_1, VkglTestCase_021652_2);

#define VkglTestCase_021653_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021653_2 "s.random.texture.fragment.118"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021653, VkglTestCase_021653_1, VkglTestCase_021653_2);

#define VkglTestCase_021654_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021654_2 "s.random.texture.fragment.119"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021654, VkglTestCase_021654_1, VkglTestCase_021654_2);

#define VkglTestCase_021655_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021655_2 "s.random.texture.fragment.120"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021655, VkglTestCase_021655_1, VkglTestCase_021655_2);

#define VkglTestCase_021656_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021656_2 "s.random.texture.fragment.121"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021656, VkglTestCase_021656_1, VkglTestCase_021656_2);

#define VkglTestCase_021657_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021657_2 "s.random.texture.fragment.122"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021657, VkglTestCase_021657_1, VkglTestCase_021657_2);

#define VkglTestCase_021658_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021658_2 "s.random.texture.fragment.123"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021658, VkglTestCase_021658_1, VkglTestCase_021658_2);

#define VkglTestCase_021659_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021659_2 "s.random.texture.fragment.124"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021659, VkglTestCase_021659_1, VkglTestCase_021659_2);

#define VkglTestCase_021660_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021660_2 "s.random.texture.fragment.125"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021660, VkglTestCase_021660_1, VkglTestCase_021660_2);

#define VkglTestCase_021661_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021661_2 "s.random.texture.fragment.126"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021661, VkglTestCase_021661_1, VkglTestCase_021661_2);

#define VkglTestCase_021662_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021662_2 "s.random.texture.fragment.127"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021662, VkglTestCase_021662_1, VkglTestCase_021662_2);

#define VkglTestCase_021663_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021663_2 "s.random.texture.fragment.128"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021663, VkglTestCase_021663_1, VkglTestCase_021663_2);

#define VkglTestCase_021664_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021664_2 "s.random.texture.fragment.129"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021664, VkglTestCase_021664_1, VkglTestCase_021664_2);

#define VkglTestCase_021665_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021665_2 "s.random.texture.fragment.130"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021665, VkglTestCase_021665_1, VkglTestCase_021665_2);

#define VkglTestCase_021666_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021666_2 "s.random.texture.fragment.131"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021666, VkglTestCase_021666_1, VkglTestCase_021666_2);

#define VkglTestCase_021667_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021667_2 "s.random.texture.fragment.132"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021667, VkglTestCase_021667_1, VkglTestCase_021667_2);

#define VkglTestCase_021668_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021668_2 "s.random.texture.fragment.133"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021668, VkglTestCase_021668_1, VkglTestCase_021668_2);

#define VkglTestCase_021669_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021669_2 "s.random.texture.fragment.134"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021669, VkglTestCase_021669_1, VkglTestCase_021669_2);

#define VkglTestCase_021670_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021670_2 "s.random.texture.fragment.135"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021670, VkglTestCase_021670_1, VkglTestCase_021670_2);

#define VkglTestCase_021671_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021671_2 "s.random.texture.fragment.136"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021671, VkglTestCase_021671_1, VkglTestCase_021671_2);

#define VkglTestCase_021672_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021672_2 "s.random.texture.fragment.137"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021672, VkglTestCase_021672_1, VkglTestCase_021672_2);

#define VkglTestCase_021673_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021673_2 "s.random.texture.fragment.138"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021673, VkglTestCase_021673_1, VkglTestCase_021673_2);

#define VkglTestCase_021674_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021674_2 "s.random.texture.fragment.139"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021674, VkglTestCase_021674_1, VkglTestCase_021674_2);

#define VkglTestCase_021675_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021675_2 "s.random.texture.fragment.140"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021675, VkglTestCase_021675_1, VkglTestCase_021675_2);

#define VkglTestCase_021676_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021676_2 "s.random.texture.fragment.141"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021676, VkglTestCase_021676_1, VkglTestCase_021676_2);

#define VkglTestCase_021677_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021677_2 "s.random.texture.fragment.142"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021677, VkglTestCase_021677_1, VkglTestCase_021677_2);

#define VkglTestCase_021678_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021678_2 "s.random.texture.fragment.143"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021678, VkglTestCase_021678_1, VkglTestCase_021678_2);

#define VkglTestCase_021679_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021679_2 "s.random.texture.fragment.144"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021679, VkglTestCase_021679_1, VkglTestCase_021679_2);

#define VkglTestCase_021680_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021680_2 "s.random.texture.fragment.145"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021680, VkglTestCase_021680_1, VkglTestCase_021680_2);

#define VkglTestCase_021681_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021681_2 "s.random.texture.fragment.146"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021681, VkglTestCase_021681_1, VkglTestCase_021681_2);

#define VkglTestCase_021682_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021682_2 "s.random.texture.fragment.147"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021682, VkglTestCase_021682_1, VkglTestCase_021682_2);

#define VkglTestCase_021683_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021683_2 "s.random.texture.fragment.148"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021683, VkglTestCase_021683_1, VkglTestCase_021683_2);

#define VkglTestCase_021684_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_021684_2 "s.random.texture.fragment.149"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021684, VkglTestCase_021684_1, VkglTestCase_021684_2);
