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

#define VkglTestCase_008532_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008532_2 "ndom.basic_expression.combined.0"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008532, VkglTestCase_008532_1, VkglTestCase_008532_2);

#define VkglTestCase_008533_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008533_2 "ndom.basic_expression.combined.1"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008533, VkglTestCase_008533_1, VkglTestCase_008533_2);

#define VkglTestCase_008534_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008534_2 "ndom.basic_expression.combined.2"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008534, VkglTestCase_008534_1, VkglTestCase_008534_2);

#define VkglTestCase_008535_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008535_2 "ndom.basic_expression.combined.3"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008535, VkglTestCase_008535_1, VkglTestCase_008535_2);

#define VkglTestCase_008536_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008536_2 "ndom.basic_expression.combined.4"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008536, VkglTestCase_008536_1, VkglTestCase_008536_2);

#define VkglTestCase_008537_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008537_2 "ndom.basic_expression.combined.5"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008537, VkglTestCase_008537_1, VkglTestCase_008537_2);

#define VkglTestCase_008538_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008538_2 "ndom.basic_expression.combined.6"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008538, VkglTestCase_008538_1, VkglTestCase_008538_2);

#define VkglTestCase_008539_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008539_2 "ndom.basic_expression.combined.7"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008539, VkglTestCase_008539_1, VkglTestCase_008539_2);

#define VkglTestCase_008540_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008540_2 "ndom.basic_expression.combined.8"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008540, VkglTestCase_008540_1, VkglTestCase_008540_2);

#define VkglTestCase_008541_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008541_2 "ndom.basic_expression.combined.9"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008541, VkglTestCase_008541_1, VkglTestCase_008541_2);

#define VkglTestCase_008542_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008542_2 "ndom.basic_expression.combined.10"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008542, VkglTestCase_008542_1, VkglTestCase_008542_2);

#define VkglTestCase_008543_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008543_2 "ndom.basic_expression.combined.11"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008543, VkglTestCase_008543_1, VkglTestCase_008543_2);

#define VkglTestCase_008544_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008544_2 "ndom.basic_expression.combined.12"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008544, VkglTestCase_008544_1, VkglTestCase_008544_2);

#define VkglTestCase_008545_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008545_2 "ndom.basic_expression.combined.13"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008545, VkglTestCase_008545_1, VkglTestCase_008545_2);

#define VkglTestCase_008546_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008546_2 "ndom.basic_expression.combined.14"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008546, VkglTestCase_008546_1, VkglTestCase_008546_2);

#define VkglTestCase_008547_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008547_2 "ndom.basic_expression.combined.15"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008547, VkglTestCase_008547_1, VkglTestCase_008547_2);

#define VkglTestCase_008548_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008548_2 "ndom.basic_expression.combined.16"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008548, VkglTestCase_008548_1, VkglTestCase_008548_2);

#define VkglTestCase_008549_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008549_2 "ndom.basic_expression.combined.17"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008549, VkglTestCase_008549_1, VkglTestCase_008549_2);

#define VkglTestCase_008550_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008550_2 "ndom.basic_expression.combined.18"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008550, VkglTestCase_008550_1, VkglTestCase_008550_2);

#define VkglTestCase_008551_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008551_2 "ndom.basic_expression.combined.19"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008551, VkglTestCase_008551_1, VkglTestCase_008551_2);

#define VkglTestCase_008552_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008552_2 "ndom.basic_expression.combined.20"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008552, VkglTestCase_008552_1, VkglTestCase_008552_2);

#define VkglTestCase_008553_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008553_2 "ndom.basic_expression.combined.21"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008553, VkglTestCase_008553_1, VkglTestCase_008553_2);

#define VkglTestCase_008554_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008554_2 "ndom.basic_expression.combined.22"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008554, VkglTestCase_008554_1, VkglTestCase_008554_2);

#define VkglTestCase_008555_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008555_2 "ndom.basic_expression.combined.23"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008555, VkglTestCase_008555_1, VkglTestCase_008555_2);

#define VkglTestCase_008556_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008556_2 "ndom.basic_expression.combined.24"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008556, VkglTestCase_008556_1, VkglTestCase_008556_2);

#define VkglTestCase_008557_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008557_2 "ndom.basic_expression.combined.25"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008557, VkglTestCase_008557_1, VkglTestCase_008557_2);

#define VkglTestCase_008558_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008558_2 "ndom.basic_expression.combined.26"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008558, VkglTestCase_008558_1, VkglTestCase_008558_2);

#define VkglTestCase_008559_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008559_2 "ndom.basic_expression.combined.27"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008559, VkglTestCase_008559_1, VkglTestCase_008559_2);

#define VkglTestCase_008560_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008560_2 "ndom.basic_expression.combined.28"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008560, VkglTestCase_008560_1, VkglTestCase_008560_2);

#define VkglTestCase_008561_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008561_2 "ndom.basic_expression.combined.29"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008561, VkglTestCase_008561_1, VkglTestCase_008561_2);

#define VkglTestCase_008562_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008562_2 "ndom.basic_expression.combined.30"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008562, VkglTestCase_008562_1, VkglTestCase_008562_2);

#define VkglTestCase_008563_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008563_2 "ndom.basic_expression.combined.31"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008563, VkglTestCase_008563_1, VkglTestCase_008563_2);

#define VkglTestCase_008564_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008564_2 "ndom.basic_expression.combined.32"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008564, VkglTestCase_008564_1, VkglTestCase_008564_2);

#define VkglTestCase_008565_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008565_2 "ndom.basic_expression.combined.33"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008565, VkglTestCase_008565_1, VkglTestCase_008565_2);

#define VkglTestCase_008566_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008566_2 "ndom.basic_expression.combined.34"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008566, VkglTestCase_008566_1, VkglTestCase_008566_2);

#define VkglTestCase_008567_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008567_2 "ndom.basic_expression.combined.35"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008567, VkglTestCase_008567_1, VkglTestCase_008567_2);

#define VkglTestCase_008568_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008568_2 "ndom.basic_expression.combined.36"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008568, VkglTestCase_008568_1, VkglTestCase_008568_2);

#define VkglTestCase_008569_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008569_2 "ndom.basic_expression.combined.37"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008569, VkglTestCase_008569_1, VkglTestCase_008569_2);

#define VkglTestCase_008570_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008570_2 "ndom.basic_expression.combined.38"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008570, VkglTestCase_008570_1, VkglTestCase_008570_2);

#define VkglTestCase_008571_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008571_2 "ndom.basic_expression.combined.39"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008571, VkglTestCase_008571_1, VkglTestCase_008571_2);

#define VkglTestCase_008572_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008572_2 "ndom.basic_expression.combined.40"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008572, VkglTestCase_008572_1, VkglTestCase_008572_2);

#define VkglTestCase_008573_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008573_2 "ndom.basic_expression.combined.41"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008573, VkglTestCase_008573_1, VkglTestCase_008573_2);

#define VkglTestCase_008574_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008574_2 "ndom.basic_expression.combined.42"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008574, VkglTestCase_008574_1, VkglTestCase_008574_2);

#define VkglTestCase_008575_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008575_2 "ndom.basic_expression.combined.43"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008575, VkglTestCase_008575_1, VkglTestCase_008575_2);

#define VkglTestCase_008576_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008576_2 "ndom.basic_expression.combined.44"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008576, VkglTestCase_008576_1, VkglTestCase_008576_2);

#define VkglTestCase_008577_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008577_2 "ndom.basic_expression.combined.45"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008577, VkglTestCase_008577_1, VkglTestCase_008577_2);

#define VkglTestCase_008578_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008578_2 "ndom.basic_expression.combined.46"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008578, VkglTestCase_008578_1, VkglTestCase_008578_2);

#define VkglTestCase_008579_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008579_2 "ndom.basic_expression.combined.47"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008579, VkglTestCase_008579_1, VkglTestCase_008579_2);

#define VkglTestCase_008580_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008580_2 "ndom.basic_expression.combined.48"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008580, VkglTestCase_008580_1, VkglTestCase_008580_2);

#define VkglTestCase_008581_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008581_2 "ndom.basic_expression.combined.49"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008581, VkglTestCase_008581_1, VkglTestCase_008581_2);

#define VkglTestCase_008582_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008582_2 "ndom.basic_expression.combined.50"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008582, VkglTestCase_008582_1, VkglTestCase_008582_2);

#define VkglTestCase_008583_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008583_2 "ndom.basic_expression.combined.51"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008583, VkglTestCase_008583_1, VkglTestCase_008583_2);

#define VkglTestCase_008584_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008584_2 "ndom.basic_expression.combined.52"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008584, VkglTestCase_008584_1, VkglTestCase_008584_2);

#define VkglTestCase_008585_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008585_2 "ndom.basic_expression.combined.53"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008585, VkglTestCase_008585_1, VkglTestCase_008585_2);

#define VkglTestCase_008586_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008586_2 "ndom.basic_expression.combined.54"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008586, VkglTestCase_008586_1, VkglTestCase_008586_2);

#define VkglTestCase_008587_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008587_2 "ndom.basic_expression.combined.55"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008587, VkglTestCase_008587_1, VkglTestCase_008587_2);

#define VkglTestCase_008588_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008588_2 "ndom.basic_expression.combined.56"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008588, VkglTestCase_008588_1, VkglTestCase_008588_2);

#define VkglTestCase_008589_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008589_2 "ndom.basic_expression.combined.57"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008589, VkglTestCase_008589_1, VkglTestCase_008589_2);

#define VkglTestCase_008590_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008590_2 "ndom.basic_expression.combined.58"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008590, VkglTestCase_008590_1, VkglTestCase_008590_2);

#define VkglTestCase_008591_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008591_2 "ndom.basic_expression.combined.59"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008591, VkglTestCase_008591_1, VkglTestCase_008591_2);

#define VkglTestCase_008592_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008592_2 "ndom.basic_expression.combined.60"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008592, VkglTestCase_008592_1, VkglTestCase_008592_2);

#define VkglTestCase_008593_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008593_2 "ndom.basic_expression.combined.61"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008593, VkglTestCase_008593_1, VkglTestCase_008593_2);

#define VkglTestCase_008594_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008594_2 "ndom.basic_expression.combined.62"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008594, VkglTestCase_008594_1, VkglTestCase_008594_2);

#define VkglTestCase_008595_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008595_2 "ndom.basic_expression.combined.63"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008595, VkglTestCase_008595_1, VkglTestCase_008595_2);

#define VkglTestCase_008596_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008596_2 "ndom.basic_expression.combined.64"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008596, VkglTestCase_008596_1, VkglTestCase_008596_2);

#define VkglTestCase_008597_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008597_2 "ndom.basic_expression.combined.65"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008597, VkglTestCase_008597_1, VkglTestCase_008597_2);

#define VkglTestCase_008598_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008598_2 "ndom.basic_expression.combined.66"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008598, VkglTestCase_008598_1, VkglTestCase_008598_2);

#define VkglTestCase_008599_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008599_2 "ndom.basic_expression.combined.67"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008599, VkglTestCase_008599_1, VkglTestCase_008599_2);

#define VkglTestCase_008600_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008600_2 "ndom.basic_expression.combined.68"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008600, VkglTestCase_008600_1, VkglTestCase_008600_2);

#define VkglTestCase_008601_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008601_2 "ndom.basic_expression.combined.69"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008601, VkglTestCase_008601_1, VkglTestCase_008601_2);

#define VkglTestCase_008602_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008602_2 "ndom.basic_expression.combined.70"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008602, VkglTestCase_008602_1, VkglTestCase_008602_2);

#define VkglTestCase_008603_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008603_2 "ndom.basic_expression.combined.71"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008603, VkglTestCase_008603_1, VkglTestCase_008603_2);

#define VkglTestCase_008604_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008604_2 "ndom.basic_expression.combined.72"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008604, VkglTestCase_008604_1, VkglTestCase_008604_2);

#define VkglTestCase_008605_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008605_2 "ndom.basic_expression.combined.73"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008605, VkglTestCase_008605_1, VkglTestCase_008605_2);

#define VkglTestCase_008606_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008606_2 "ndom.basic_expression.combined.74"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008606, VkglTestCase_008606_1, VkglTestCase_008606_2);

#define VkglTestCase_008607_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008607_2 "ndom.basic_expression.combined.75"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008607, VkglTestCase_008607_1, VkglTestCase_008607_2);

#define VkglTestCase_008608_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008608_2 "ndom.basic_expression.combined.76"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008608, VkglTestCase_008608_1, VkglTestCase_008608_2);

#define VkglTestCase_008609_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008609_2 "ndom.basic_expression.combined.77"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008609, VkglTestCase_008609_1, VkglTestCase_008609_2);

#define VkglTestCase_008610_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008610_2 "ndom.basic_expression.combined.78"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008610, VkglTestCase_008610_1, VkglTestCase_008610_2);

#define VkglTestCase_008611_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008611_2 "ndom.basic_expression.combined.79"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008611, VkglTestCase_008611_1, VkglTestCase_008611_2);

#define VkglTestCase_008612_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008612_2 "ndom.basic_expression.combined.80"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008612, VkglTestCase_008612_1, VkglTestCase_008612_2);

#define VkglTestCase_008613_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008613_2 "ndom.basic_expression.combined.81"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008613, VkglTestCase_008613_1, VkglTestCase_008613_2);

#define VkglTestCase_008614_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008614_2 "ndom.basic_expression.combined.82"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008614, VkglTestCase_008614_1, VkglTestCase_008614_2);

#define VkglTestCase_008615_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008615_2 "ndom.basic_expression.combined.83"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008615, VkglTestCase_008615_1, VkglTestCase_008615_2);

#define VkglTestCase_008616_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008616_2 "ndom.basic_expression.combined.84"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008616, VkglTestCase_008616_1, VkglTestCase_008616_2);

#define VkglTestCase_008617_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008617_2 "ndom.basic_expression.combined.85"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008617, VkglTestCase_008617_1, VkglTestCase_008617_2);

#define VkglTestCase_008618_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008618_2 "ndom.basic_expression.combined.86"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008618, VkglTestCase_008618_1, VkglTestCase_008618_2);

#define VkglTestCase_008619_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008619_2 "ndom.basic_expression.combined.87"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008619, VkglTestCase_008619_1, VkglTestCase_008619_2);

#define VkglTestCase_008620_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008620_2 "ndom.basic_expression.combined.88"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008620, VkglTestCase_008620_1, VkglTestCase_008620_2);

#define VkglTestCase_008621_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008621_2 "ndom.basic_expression.combined.89"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008621, VkglTestCase_008621_1, VkglTestCase_008621_2);

#define VkglTestCase_008622_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008622_2 "ndom.basic_expression.combined.90"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008622, VkglTestCase_008622_1, VkglTestCase_008622_2);

#define VkglTestCase_008623_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008623_2 "ndom.basic_expression.combined.91"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008623, VkglTestCase_008623_1, VkglTestCase_008623_2);

#define VkglTestCase_008624_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008624_2 "ndom.basic_expression.combined.92"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008624, VkglTestCase_008624_1, VkglTestCase_008624_2);

#define VkglTestCase_008625_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008625_2 "ndom.basic_expression.combined.93"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008625, VkglTestCase_008625_1, VkglTestCase_008625_2);

#define VkglTestCase_008626_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008626_2 "ndom.basic_expression.combined.94"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008626, VkglTestCase_008626_1, VkglTestCase_008626_2);

#define VkglTestCase_008627_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008627_2 "ndom.basic_expression.combined.95"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008627, VkglTestCase_008627_1, VkglTestCase_008627_2);

#define VkglTestCase_008628_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008628_2 "ndom.basic_expression.combined.96"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008628, VkglTestCase_008628_1, VkglTestCase_008628_2);

#define VkglTestCase_008629_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008629_2 "ndom.basic_expression.combined.97"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008629, VkglTestCase_008629_1, VkglTestCase_008629_2);

#define VkglTestCase_008630_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008630_2 "ndom.basic_expression.combined.98"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008630, VkglTestCase_008630_1, VkglTestCase_008630_2);

#define VkglTestCase_008631_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008631_2 "ndom.basic_expression.combined.99"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008631, VkglTestCase_008631_1, VkglTestCase_008631_2);
