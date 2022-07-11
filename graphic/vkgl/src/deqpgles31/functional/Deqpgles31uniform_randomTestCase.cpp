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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021570_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021570_2 "interface_query.uniform.random.0"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021570, VkglTestCase_021570_1, VkglTestCase_021570_2);

#define VkglTestCase_021571_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021571_2 "interface_query.uniform.random.1"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021571, VkglTestCase_021571_1, VkglTestCase_021571_2);

#define VkglTestCase_021572_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021572_2 "interface_query.uniform.random.2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021572, VkglTestCase_021572_1, VkglTestCase_021572_2);

#define VkglTestCase_021573_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021573_2 "interface_query.uniform.random.3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021573, VkglTestCase_021573_1, VkglTestCase_021573_2);

#define VkglTestCase_021574_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021574_2 "interface_query.uniform.random.4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021574, VkglTestCase_021574_1, VkglTestCase_021574_2);

#define VkglTestCase_021575_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021575_2 "interface_query.uniform.random.5"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021575, VkglTestCase_021575_1, VkglTestCase_021575_2);

#define VkglTestCase_021576_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021576_2 "interface_query.uniform.random.6"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021576, VkglTestCase_021576_1, VkglTestCase_021576_2);

#define VkglTestCase_021577_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021577_2 "interface_query.uniform.random.7"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021577, VkglTestCase_021577_1, VkglTestCase_021577_2);

#define VkglTestCase_021578_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021578_2 "interface_query.uniform.random.8"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021578, VkglTestCase_021578_1, VkglTestCase_021578_2);

#define VkglTestCase_021579_1 "dEQP-GLES31.functional.program_"
#define VkglTestCase_021579_2 "interface_query.uniform.random.9"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021579, VkglTestCase_021579_1, VkglTestCase_021579_2);

#define VkglTestCase_021580_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021580_2 "nterface_query.uniform.random.10"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021580, VkglTestCase_021580_1, VkglTestCase_021580_2);

#define VkglTestCase_021581_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021581_2 "nterface_query.uniform.random.11"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021581, VkglTestCase_021581_1, VkglTestCase_021581_2);

#define VkglTestCase_021582_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021582_2 "nterface_query.uniform.random.12"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021582, VkglTestCase_021582_1, VkglTestCase_021582_2);

#define VkglTestCase_021583_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021583_2 "nterface_query.uniform.random.13"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021583, VkglTestCase_021583_1, VkglTestCase_021583_2);

#define VkglTestCase_021584_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021584_2 "nterface_query.uniform.random.14"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021584, VkglTestCase_021584_1, VkglTestCase_021584_2);

#define VkglTestCase_021585_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021585_2 "nterface_query.uniform.random.15"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021585, VkglTestCase_021585_1, VkglTestCase_021585_2);

#define VkglTestCase_021586_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021586_2 "nterface_query.uniform.random.16"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021586, VkglTestCase_021586_1, VkglTestCase_021586_2);

#define VkglTestCase_021587_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021587_2 "nterface_query.uniform.random.17"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021587, VkglTestCase_021587_1, VkglTestCase_021587_2);

#define VkglTestCase_021588_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021588_2 "nterface_query.uniform.random.18"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021588, VkglTestCase_021588_1, VkglTestCase_021588_2);

#define VkglTestCase_021589_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021589_2 "nterface_query.uniform.random.19"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021589, VkglTestCase_021589_1, VkglTestCase_021589_2);

#define VkglTestCase_021590_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021590_2 "nterface_query.uniform.random.20"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021590, VkglTestCase_021590_1, VkglTestCase_021590_2);

#define VkglTestCase_021591_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021591_2 "nterface_query.uniform.random.21"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021591, VkglTestCase_021591_1, VkglTestCase_021591_2);

#define VkglTestCase_021592_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021592_2 "nterface_query.uniform.random.22"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021592, VkglTestCase_021592_1, VkglTestCase_021592_2);

#define VkglTestCase_021593_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021593_2 "nterface_query.uniform.random.23"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021593, VkglTestCase_021593_1, VkglTestCase_021593_2);

#define VkglTestCase_021594_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021594_2 "nterface_query.uniform.random.24"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021594, VkglTestCase_021594_1, VkglTestCase_021594_2);

#define VkglTestCase_021595_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021595_2 "nterface_query.uniform.random.25"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021595, VkglTestCase_021595_1, VkglTestCase_021595_2);

#define VkglTestCase_021596_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021596_2 "nterface_query.uniform.random.26"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021596, VkglTestCase_021596_1, VkglTestCase_021596_2);

#define VkglTestCase_021597_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021597_2 "nterface_query.uniform.random.27"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021597, VkglTestCase_021597_1, VkglTestCase_021597_2);

#define VkglTestCase_021598_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021598_2 "nterface_query.uniform.random.28"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021598, VkglTestCase_021598_1, VkglTestCase_021598_2);

#define VkglTestCase_021599_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021599_2 "nterface_query.uniform.random.29"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021599, VkglTestCase_021599_1, VkglTestCase_021599_2);

#define VkglTestCase_021600_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021600_2 "nterface_query.uniform.random.30"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021600, VkglTestCase_021600_1, VkglTestCase_021600_2);

#define VkglTestCase_021601_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021601_2 "nterface_query.uniform.random.31"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021601, VkglTestCase_021601_1, VkglTestCase_021601_2);

#define VkglTestCase_021602_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021602_2 "nterface_query.uniform.random.32"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021602, VkglTestCase_021602_1, VkglTestCase_021602_2);

#define VkglTestCase_021603_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021603_2 "nterface_query.uniform.random.33"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021603, VkglTestCase_021603_1, VkglTestCase_021603_2);

#define VkglTestCase_021604_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021604_2 "nterface_query.uniform.random.34"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021604, VkglTestCase_021604_1, VkglTestCase_021604_2);

#define VkglTestCase_021605_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021605_2 "nterface_query.uniform.random.35"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021605, VkglTestCase_021605_1, VkglTestCase_021605_2);

#define VkglTestCase_021606_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021606_2 "nterface_query.uniform.random.36"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021606, VkglTestCase_021606_1, VkglTestCase_021606_2);

#define VkglTestCase_021607_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021607_2 "nterface_query.uniform.random.37"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021607, VkglTestCase_021607_1, VkglTestCase_021607_2);

#define VkglTestCase_021608_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021608_2 "nterface_query.uniform.random.38"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021608, VkglTestCase_021608_1, VkglTestCase_021608_2);

#define VkglTestCase_021609_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021609_2 "nterface_query.uniform.random.39"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021609, VkglTestCase_021609_1, VkglTestCase_021609_2);

#define VkglTestCase_021610_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021610_2 "nterface_query.uniform.random.40"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021610, VkglTestCase_021610_1, VkglTestCase_021610_2);

#define VkglTestCase_021611_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021611_2 "nterface_query.uniform.random.41"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021611, VkglTestCase_021611_1, VkglTestCase_021611_2);

#define VkglTestCase_021612_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021612_2 "nterface_query.uniform.random.42"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021612, VkglTestCase_021612_1, VkglTestCase_021612_2);

#define VkglTestCase_021613_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021613_2 "nterface_query.uniform.random.43"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021613, VkglTestCase_021613_1, VkglTestCase_021613_2);

#define VkglTestCase_021614_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021614_2 "nterface_query.uniform.random.44"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021614, VkglTestCase_021614_1, VkglTestCase_021614_2);

#define VkglTestCase_021615_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021615_2 "nterface_query.uniform.random.45"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021615, VkglTestCase_021615_1, VkglTestCase_021615_2);

#define VkglTestCase_021616_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021616_2 "nterface_query.uniform.random.46"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021616, VkglTestCase_021616_1, VkglTestCase_021616_2);

#define VkglTestCase_021617_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021617_2 "nterface_query.uniform.random.47"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021617, VkglTestCase_021617_1, VkglTestCase_021617_2);

#define VkglTestCase_021618_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021618_2 "nterface_query.uniform.random.48"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021618, VkglTestCase_021618_1, VkglTestCase_021618_2);

#define VkglTestCase_021619_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021619_2 "nterface_query.uniform.random.49"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021619, VkglTestCase_021619_1, VkglTestCase_021619_2);

#define VkglTestCase_021620_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021620_2 "nterface_query.uniform.random.50"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021620, VkglTestCase_021620_1, VkglTestCase_021620_2);

#define VkglTestCase_021621_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021621_2 "nterface_query.uniform.random.51"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021621, VkglTestCase_021621_1, VkglTestCase_021621_2);

#define VkglTestCase_021622_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021622_2 "nterface_query.uniform.random.52"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021622, VkglTestCase_021622_1, VkglTestCase_021622_2);

#define VkglTestCase_021623_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021623_2 "nterface_query.uniform.random.53"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021623, VkglTestCase_021623_1, VkglTestCase_021623_2);

#define VkglTestCase_021624_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021624_2 "nterface_query.uniform.random.54"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021624, VkglTestCase_021624_1, VkglTestCase_021624_2);

#define VkglTestCase_021625_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021625_2 "nterface_query.uniform.random.55"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021625, VkglTestCase_021625_1, VkglTestCase_021625_2);

#define VkglTestCase_021626_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021626_2 "nterface_query.uniform.random.56"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021626, VkglTestCase_021626_1, VkglTestCase_021626_2);

#define VkglTestCase_021627_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021627_2 "nterface_query.uniform.random.57"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021627, VkglTestCase_021627_1, VkglTestCase_021627_2);

#define VkglTestCase_021628_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021628_2 "nterface_query.uniform.random.58"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021628, VkglTestCase_021628_1, VkglTestCase_021628_2);

#define VkglTestCase_021629_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021629_2 "nterface_query.uniform.random.59"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021629, VkglTestCase_021629_1, VkglTestCase_021629_2);

#define VkglTestCase_021630_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021630_2 "nterface_query.uniform.random.60"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021630, VkglTestCase_021630_1, VkglTestCase_021630_2);

#define VkglTestCase_021631_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021631_2 "nterface_query.uniform.random.61"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021631, VkglTestCase_021631_1, VkglTestCase_021631_2);

#define VkglTestCase_021632_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021632_2 "nterface_query.uniform.random.62"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021632, VkglTestCase_021632_1, VkglTestCase_021632_2);

#define VkglTestCase_021633_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021633_2 "nterface_query.uniform.random.63"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021633, VkglTestCase_021633_1, VkglTestCase_021633_2);

#define VkglTestCase_021634_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021634_2 "nterface_query.uniform.random.64"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021634, VkglTestCase_021634_1, VkglTestCase_021634_2);

#define VkglTestCase_021635_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021635_2 "nterface_query.uniform.random.65"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021635, VkglTestCase_021635_1, VkglTestCase_021635_2);

#define VkglTestCase_021636_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021636_2 "nterface_query.uniform.random.66"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021636, VkglTestCase_021636_1, VkglTestCase_021636_2);

#define VkglTestCase_021637_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021637_2 "nterface_query.uniform.random.67"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021637, VkglTestCase_021637_1, VkglTestCase_021637_2);

#define VkglTestCase_021638_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021638_2 "nterface_query.uniform.random.68"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021638, VkglTestCase_021638_1, VkglTestCase_021638_2);

#define VkglTestCase_021639_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021639_2 "nterface_query.uniform.random.69"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021639, VkglTestCase_021639_1, VkglTestCase_021639_2);

#define VkglTestCase_021640_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021640_2 "nterface_query.uniform.random.70"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021640, VkglTestCase_021640_1, VkglTestCase_021640_2);

#define VkglTestCase_021641_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021641_2 "nterface_query.uniform.random.71"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021641, VkglTestCase_021641_1, VkglTestCase_021641_2);

#define VkglTestCase_021642_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021642_2 "nterface_query.uniform.random.72"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021642, VkglTestCase_021642_1, VkglTestCase_021642_2);

#define VkglTestCase_021643_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021643_2 "nterface_query.uniform.random.73"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021643, VkglTestCase_021643_1, VkglTestCase_021643_2);

#define VkglTestCase_021644_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021644_2 "nterface_query.uniform.random.74"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021644, VkglTestCase_021644_1, VkglTestCase_021644_2);

#define VkglTestCase_021645_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021645_2 "nterface_query.uniform.random.75"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021645, VkglTestCase_021645_1, VkglTestCase_021645_2);

#define VkglTestCase_021646_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021646_2 "nterface_query.uniform.random.76"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021646, VkglTestCase_021646_1, VkglTestCase_021646_2);

#define VkglTestCase_021647_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021647_2 "nterface_query.uniform.random.77"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021647, VkglTestCase_021647_1, VkglTestCase_021647_2);

#define VkglTestCase_021648_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021648_2 "nterface_query.uniform.random.78"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021648, VkglTestCase_021648_1, VkglTestCase_021648_2);

#define VkglTestCase_021649_1 "dEQP-GLES31.functional.program_i"
#define VkglTestCase_021649_2 "nterface_query.uniform.random.79"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021649, VkglTestCase_021649_1, VkglTestCase_021649_2);
