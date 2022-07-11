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
#include "../ActsDeqpgles20010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009532_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009532_2 "random.trigonometric.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009532, VkglTestCase_009532_1, VkglTestCase_009532_2);

#define VkglTestCase_009533_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009533_2 "random.trigonometric.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009533, VkglTestCase_009533_1, VkglTestCase_009533_2);

#define VkglTestCase_009534_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009534_2 "random.trigonometric.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009534, VkglTestCase_009534_1, VkglTestCase_009534_2);

#define VkglTestCase_009535_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009535_2 "random.trigonometric.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009535, VkglTestCase_009535_1, VkglTestCase_009535_2);

#define VkglTestCase_009536_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009536_2 "random.trigonometric.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009536, VkglTestCase_009536_1, VkglTestCase_009536_2);

#define VkglTestCase_009537_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009537_2 "random.trigonometric.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009537, VkglTestCase_009537_1, VkglTestCase_009537_2);

#define VkglTestCase_009538_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009538_2 "random.trigonometric.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009538, VkglTestCase_009538_1, VkglTestCase_009538_2);

#define VkglTestCase_009539_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009539_2 "random.trigonometric.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009539, VkglTestCase_009539_1, VkglTestCase_009539_2);

#define VkglTestCase_009540_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009540_2 "random.trigonometric.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009540, VkglTestCase_009540_1, VkglTestCase_009540_2);

#define VkglTestCase_009541_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009541_2 "random.trigonometric.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009541, VkglTestCase_009541_1, VkglTestCase_009541_2);

#define VkglTestCase_009542_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009542_2 "andom.trigonometric.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009542, VkglTestCase_009542_1, VkglTestCase_009542_2);

#define VkglTestCase_009543_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009543_2 "andom.trigonometric.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009543, VkglTestCase_009543_1, VkglTestCase_009543_2);

#define VkglTestCase_009544_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009544_2 "andom.trigonometric.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009544, VkglTestCase_009544_1, VkglTestCase_009544_2);

#define VkglTestCase_009545_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009545_2 "andom.trigonometric.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009545, VkglTestCase_009545_1, VkglTestCase_009545_2);

#define VkglTestCase_009546_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009546_2 "andom.trigonometric.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009546, VkglTestCase_009546_1, VkglTestCase_009546_2);

#define VkglTestCase_009547_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009547_2 "andom.trigonometric.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009547, VkglTestCase_009547_1, VkglTestCase_009547_2);

#define VkglTestCase_009548_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009548_2 "andom.trigonometric.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009548, VkglTestCase_009548_1, VkglTestCase_009548_2);

#define VkglTestCase_009549_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009549_2 "andom.trigonometric.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009549, VkglTestCase_009549_1, VkglTestCase_009549_2);

#define VkglTestCase_009550_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009550_2 "andom.trigonometric.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009550, VkglTestCase_009550_1, VkglTestCase_009550_2);

#define VkglTestCase_009551_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009551_2 "andom.trigonometric.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009551, VkglTestCase_009551_1, VkglTestCase_009551_2);

#define VkglTestCase_009552_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009552_2 "andom.trigonometric.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009552, VkglTestCase_009552_1, VkglTestCase_009552_2);

#define VkglTestCase_009553_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009553_2 "andom.trigonometric.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009553, VkglTestCase_009553_1, VkglTestCase_009553_2);

#define VkglTestCase_009554_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009554_2 "andom.trigonometric.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009554, VkglTestCase_009554_1, VkglTestCase_009554_2);

#define VkglTestCase_009555_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009555_2 "andom.trigonometric.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009555, VkglTestCase_009555_1, VkglTestCase_009555_2);

#define VkglTestCase_009556_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009556_2 "andom.trigonometric.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009556, VkglTestCase_009556_1, VkglTestCase_009556_2);

#define VkglTestCase_009557_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009557_2 "andom.trigonometric.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009557, VkglTestCase_009557_1, VkglTestCase_009557_2);

#define VkglTestCase_009558_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009558_2 "andom.trigonometric.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009558, VkglTestCase_009558_1, VkglTestCase_009558_2);

#define VkglTestCase_009559_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009559_2 "andom.trigonometric.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009559, VkglTestCase_009559_1, VkglTestCase_009559_2);

#define VkglTestCase_009560_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009560_2 "andom.trigonometric.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009560, VkglTestCase_009560_1, VkglTestCase_009560_2);

#define VkglTestCase_009561_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009561_2 "andom.trigonometric.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009561, VkglTestCase_009561_1, VkglTestCase_009561_2);

#define VkglTestCase_009562_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009562_2 "andom.trigonometric.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009562, VkglTestCase_009562_1, VkglTestCase_009562_2);

#define VkglTestCase_009563_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009563_2 "andom.trigonometric.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009563, VkglTestCase_009563_1, VkglTestCase_009563_2);

#define VkglTestCase_009564_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009564_2 "andom.trigonometric.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009564, VkglTestCase_009564_1, VkglTestCase_009564_2);

#define VkglTestCase_009565_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009565_2 "andom.trigonometric.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009565, VkglTestCase_009565_1, VkglTestCase_009565_2);

#define VkglTestCase_009566_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009566_2 "andom.trigonometric.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009566, VkglTestCase_009566_1, VkglTestCase_009566_2);

#define VkglTestCase_009567_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009567_2 "andom.trigonometric.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009567, VkglTestCase_009567_1, VkglTestCase_009567_2);

#define VkglTestCase_009568_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009568_2 "andom.trigonometric.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009568, VkglTestCase_009568_1, VkglTestCase_009568_2);

#define VkglTestCase_009569_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009569_2 "andom.trigonometric.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009569, VkglTestCase_009569_1, VkglTestCase_009569_2);

#define VkglTestCase_009570_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009570_2 "andom.trigonometric.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009570, VkglTestCase_009570_1, VkglTestCase_009570_2);

#define VkglTestCase_009571_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009571_2 "andom.trigonometric.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009571, VkglTestCase_009571_1, VkglTestCase_009571_2);

#define VkglTestCase_009572_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009572_2 "andom.trigonometric.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009572, VkglTestCase_009572_1, VkglTestCase_009572_2);

#define VkglTestCase_009573_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009573_2 "andom.trigonometric.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009573, VkglTestCase_009573_1, VkglTestCase_009573_2);

#define VkglTestCase_009574_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009574_2 "andom.trigonometric.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009574, VkglTestCase_009574_1, VkglTestCase_009574_2);

#define VkglTestCase_009575_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009575_2 "andom.trigonometric.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009575, VkglTestCase_009575_1, VkglTestCase_009575_2);

#define VkglTestCase_009576_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009576_2 "andom.trigonometric.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009576, VkglTestCase_009576_1, VkglTestCase_009576_2);

#define VkglTestCase_009577_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009577_2 "andom.trigonometric.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009577, VkglTestCase_009577_1, VkglTestCase_009577_2);

#define VkglTestCase_009578_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009578_2 "andom.trigonometric.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009578, VkglTestCase_009578_1, VkglTestCase_009578_2);

#define VkglTestCase_009579_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009579_2 "andom.trigonometric.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009579, VkglTestCase_009579_1, VkglTestCase_009579_2);

#define VkglTestCase_009580_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009580_2 "andom.trigonometric.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009580, VkglTestCase_009580_1, VkglTestCase_009580_2);

#define VkglTestCase_009581_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009581_2 "andom.trigonometric.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009581, VkglTestCase_009581_1, VkglTestCase_009581_2);

#define VkglTestCase_009582_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009582_2 "andom.trigonometric.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009582, VkglTestCase_009582_1, VkglTestCase_009582_2);

#define VkglTestCase_009583_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009583_2 "andom.trigonometric.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009583, VkglTestCase_009583_1, VkglTestCase_009583_2);

#define VkglTestCase_009584_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009584_2 "andom.trigonometric.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009584, VkglTestCase_009584_1, VkglTestCase_009584_2);

#define VkglTestCase_009585_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009585_2 "andom.trigonometric.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009585, VkglTestCase_009585_1, VkglTestCase_009585_2);

#define VkglTestCase_009586_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009586_2 "andom.trigonometric.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009586, VkglTestCase_009586_1, VkglTestCase_009586_2);

#define VkglTestCase_009587_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009587_2 "andom.trigonometric.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009587, VkglTestCase_009587_1, VkglTestCase_009587_2);

#define VkglTestCase_009588_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009588_2 "andom.trigonometric.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009588, VkglTestCase_009588_1, VkglTestCase_009588_2);

#define VkglTestCase_009589_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009589_2 "andom.trigonometric.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009589, VkglTestCase_009589_1, VkglTestCase_009589_2);

#define VkglTestCase_009590_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009590_2 "andom.trigonometric.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009590, VkglTestCase_009590_1, VkglTestCase_009590_2);

#define VkglTestCase_009591_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009591_2 "andom.trigonometric.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009591, VkglTestCase_009591_1, VkglTestCase_009591_2);

#define VkglTestCase_009592_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009592_2 "andom.trigonometric.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009592, VkglTestCase_009592_1, VkglTestCase_009592_2);

#define VkglTestCase_009593_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009593_2 "andom.trigonometric.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009593, VkglTestCase_009593_1, VkglTestCase_009593_2);

#define VkglTestCase_009594_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009594_2 "andom.trigonometric.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009594, VkglTestCase_009594_1, VkglTestCase_009594_2);

#define VkglTestCase_009595_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009595_2 "andom.trigonometric.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009595, VkglTestCase_009595_1, VkglTestCase_009595_2);

#define VkglTestCase_009596_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009596_2 "andom.trigonometric.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009596, VkglTestCase_009596_1, VkglTestCase_009596_2);

#define VkglTestCase_009597_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009597_2 "andom.trigonometric.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009597, VkglTestCase_009597_1, VkglTestCase_009597_2);

#define VkglTestCase_009598_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009598_2 "andom.trigonometric.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009598, VkglTestCase_009598_1, VkglTestCase_009598_2);

#define VkglTestCase_009599_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009599_2 "andom.trigonometric.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009599, VkglTestCase_009599_1, VkglTestCase_009599_2);

#define VkglTestCase_009600_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009600_2 "andom.trigonometric.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009600, VkglTestCase_009600_1, VkglTestCase_009600_2);

#define VkglTestCase_009601_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009601_2 "andom.trigonometric.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009601, VkglTestCase_009601_1, VkglTestCase_009601_2);

#define VkglTestCase_009602_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009602_2 "andom.trigonometric.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009602, VkglTestCase_009602_1, VkglTestCase_009602_2);

#define VkglTestCase_009603_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009603_2 "andom.trigonometric.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009603, VkglTestCase_009603_1, VkglTestCase_009603_2);

#define VkglTestCase_009604_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009604_2 "andom.trigonometric.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009604, VkglTestCase_009604_1, VkglTestCase_009604_2);

#define VkglTestCase_009605_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009605_2 "andom.trigonometric.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009605, VkglTestCase_009605_1, VkglTestCase_009605_2);

#define VkglTestCase_009606_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009606_2 "andom.trigonometric.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009606, VkglTestCase_009606_1, VkglTestCase_009606_2);

#define VkglTestCase_009607_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009607_2 "andom.trigonometric.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009607, VkglTestCase_009607_1, VkglTestCase_009607_2);

#define VkglTestCase_009608_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009608_2 "andom.trigonometric.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009608, VkglTestCase_009608_1, VkglTestCase_009608_2);

#define VkglTestCase_009609_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009609_2 "andom.trigonometric.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009609, VkglTestCase_009609_1, VkglTestCase_009609_2);

#define VkglTestCase_009610_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009610_2 "andom.trigonometric.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009610, VkglTestCase_009610_1, VkglTestCase_009610_2);

#define VkglTestCase_009611_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009611_2 "andom.trigonometric.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009611, VkglTestCase_009611_1, VkglTestCase_009611_2);

#define VkglTestCase_009612_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009612_2 "andom.trigonometric.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009612, VkglTestCase_009612_1, VkglTestCase_009612_2);

#define VkglTestCase_009613_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009613_2 "andom.trigonometric.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009613, VkglTestCase_009613_1, VkglTestCase_009613_2);

#define VkglTestCase_009614_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009614_2 "andom.trigonometric.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009614, VkglTestCase_009614_1, VkglTestCase_009614_2);

#define VkglTestCase_009615_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009615_2 "andom.trigonometric.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009615, VkglTestCase_009615_1, VkglTestCase_009615_2);

#define VkglTestCase_009616_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009616_2 "andom.trigonometric.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009616, VkglTestCase_009616_1, VkglTestCase_009616_2);

#define VkglTestCase_009617_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009617_2 "andom.trigonometric.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009617, VkglTestCase_009617_1, VkglTestCase_009617_2);

#define VkglTestCase_009618_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009618_2 "andom.trigonometric.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009618, VkglTestCase_009618_1, VkglTestCase_009618_2);

#define VkglTestCase_009619_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009619_2 "andom.trigonometric.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009619, VkglTestCase_009619_1, VkglTestCase_009619_2);

#define VkglTestCase_009620_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009620_2 "andom.trigonometric.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009620, VkglTestCase_009620_1, VkglTestCase_009620_2);

#define VkglTestCase_009621_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009621_2 "andom.trigonometric.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009621, VkglTestCase_009621_1, VkglTestCase_009621_2);

#define VkglTestCase_009622_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009622_2 "andom.trigonometric.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009622, VkglTestCase_009622_1, VkglTestCase_009622_2);

#define VkglTestCase_009623_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009623_2 "andom.trigonometric.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009623, VkglTestCase_009623_1, VkglTestCase_009623_2);

#define VkglTestCase_009624_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009624_2 "andom.trigonometric.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009624, VkglTestCase_009624_1, VkglTestCase_009624_2);

#define VkglTestCase_009625_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009625_2 "andom.trigonometric.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009625, VkglTestCase_009625_1, VkglTestCase_009625_2);

#define VkglTestCase_009626_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009626_2 "andom.trigonometric.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009626, VkglTestCase_009626_1, VkglTestCase_009626_2);

#define VkglTestCase_009627_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009627_2 "andom.trigonometric.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009627, VkglTestCase_009627_1, VkglTestCase_009627_2);

#define VkglTestCase_009628_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009628_2 "andom.trigonometric.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009628, VkglTestCase_009628_1, VkglTestCase_009628_2);

#define VkglTestCase_009629_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009629_2 "andom.trigonometric.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009629, VkglTestCase_009629_1, VkglTestCase_009629_2);

#define VkglTestCase_009630_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009630_2 "andom.trigonometric.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009630, VkglTestCase_009630_1, VkglTestCase_009630_2);

#define VkglTestCase_009631_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_009631_2 "andom.trigonometric.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009631, VkglTestCase_009631_1, VkglTestCase_009631_2);
