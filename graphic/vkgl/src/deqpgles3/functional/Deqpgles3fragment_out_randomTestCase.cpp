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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039560_1 "dEQP-GLES3.functional"
#define VkglTestCase_039560_2 ".fragment_out.random.0"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039560, VkglTestCase_039560_1, VkglTestCase_039560_2);

#define VkglTestCase_039561_1 "dEQP-GLES3.functional"
#define VkglTestCase_039561_2 ".fragment_out.random.1"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039561, VkglTestCase_039561_1, VkglTestCase_039561_2);

#define VkglTestCase_039562_1 "dEQP-GLES3.functional"
#define VkglTestCase_039562_2 ".fragment_out.random.2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039562, VkglTestCase_039562_1, VkglTestCase_039562_2);

#define VkglTestCase_039563_1 "dEQP-GLES3.functional"
#define VkglTestCase_039563_2 ".fragment_out.random.3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039563, VkglTestCase_039563_1, VkglTestCase_039563_2);

#define VkglTestCase_039564_1 "dEQP-GLES3.functional"
#define VkglTestCase_039564_2 ".fragment_out.random.4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039564, VkglTestCase_039564_1, VkglTestCase_039564_2);

#define VkglTestCase_039565_1 "dEQP-GLES3.functional"
#define VkglTestCase_039565_2 ".fragment_out.random.5"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039565, VkglTestCase_039565_1, VkglTestCase_039565_2);

#define VkglTestCase_039566_1 "dEQP-GLES3.functional"
#define VkglTestCase_039566_2 ".fragment_out.random.6"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039566, VkglTestCase_039566_1, VkglTestCase_039566_2);

#define VkglTestCase_039567_1 "dEQP-GLES3.functional"
#define VkglTestCase_039567_2 ".fragment_out.random.7"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039567, VkglTestCase_039567_1, VkglTestCase_039567_2);

#define VkglTestCase_039568_1 "dEQP-GLES3.functional"
#define VkglTestCase_039568_2 ".fragment_out.random.8"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039568, VkglTestCase_039568_1, VkglTestCase_039568_2);

#define VkglTestCase_039569_1 "dEQP-GLES3.functional"
#define VkglTestCase_039569_2 ".fragment_out.random.9"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039569, VkglTestCase_039569_1, VkglTestCase_039569_2);

#define VkglTestCase_039570_1 "dEQP-GLES3.functional."
#define VkglTestCase_039570_2 "fragment_out.random.10"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039570, VkglTestCase_039570_1, VkglTestCase_039570_2);

#define VkglTestCase_039571_1 "dEQP-GLES3.functional."
#define VkglTestCase_039571_2 "fragment_out.random.11"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039571, VkglTestCase_039571_1, VkglTestCase_039571_2);

#define VkglTestCase_039572_1 "dEQP-GLES3.functional."
#define VkglTestCase_039572_2 "fragment_out.random.12"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039572, VkglTestCase_039572_1, VkglTestCase_039572_2);

#define VkglTestCase_039573_1 "dEQP-GLES3.functional."
#define VkglTestCase_039573_2 "fragment_out.random.13"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039573, VkglTestCase_039573_1, VkglTestCase_039573_2);

#define VkglTestCase_039574_1 "dEQP-GLES3.functional."
#define VkglTestCase_039574_2 "fragment_out.random.14"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039574, VkglTestCase_039574_1, VkglTestCase_039574_2);

#define VkglTestCase_039575_1 "dEQP-GLES3.functional."
#define VkglTestCase_039575_2 "fragment_out.random.15"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039575, VkglTestCase_039575_1, VkglTestCase_039575_2);

#define VkglTestCase_039576_1 "dEQP-GLES3.functional."
#define VkglTestCase_039576_2 "fragment_out.random.16"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039576, VkglTestCase_039576_1, VkglTestCase_039576_2);

#define VkglTestCase_039577_1 "dEQP-GLES3.functional."
#define VkglTestCase_039577_2 "fragment_out.random.17"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039577, VkglTestCase_039577_1, VkglTestCase_039577_2);

#define VkglTestCase_039578_1 "dEQP-GLES3.functional."
#define VkglTestCase_039578_2 "fragment_out.random.18"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039578, VkglTestCase_039578_1, VkglTestCase_039578_2);

#define VkglTestCase_039579_1 "dEQP-GLES3.functional."
#define VkglTestCase_039579_2 "fragment_out.random.19"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039579, VkglTestCase_039579_1, VkglTestCase_039579_2);

#define VkglTestCase_039580_1 "dEQP-GLES3.functional."
#define VkglTestCase_039580_2 "fragment_out.random.20"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039580, VkglTestCase_039580_1, VkglTestCase_039580_2);

#define VkglTestCase_039581_1 "dEQP-GLES3.functional."
#define VkglTestCase_039581_2 "fragment_out.random.21"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039581, VkglTestCase_039581_1, VkglTestCase_039581_2);

#define VkglTestCase_039582_1 "dEQP-GLES3.functional."
#define VkglTestCase_039582_2 "fragment_out.random.22"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039582, VkglTestCase_039582_1, VkglTestCase_039582_2);

#define VkglTestCase_039583_1 "dEQP-GLES3.functional."
#define VkglTestCase_039583_2 "fragment_out.random.23"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039583, VkglTestCase_039583_1, VkglTestCase_039583_2);

#define VkglTestCase_039584_1 "dEQP-GLES3.functional."
#define VkglTestCase_039584_2 "fragment_out.random.24"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039584, VkglTestCase_039584_1, VkglTestCase_039584_2);

#define VkglTestCase_039585_1 "dEQP-GLES3.functional."
#define VkglTestCase_039585_2 "fragment_out.random.25"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039585, VkglTestCase_039585_1, VkglTestCase_039585_2);

#define VkglTestCase_039586_1 "dEQP-GLES3.functional."
#define VkglTestCase_039586_2 "fragment_out.random.26"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039586, VkglTestCase_039586_1, VkglTestCase_039586_2);

#define VkglTestCase_039587_1 "dEQP-GLES3.functional."
#define VkglTestCase_039587_2 "fragment_out.random.27"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039587, VkglTestCase_039587_1, VkglTestCase_039587_2);

#define VkglTestCase_039588_1 "dEQP-GLES3.functional."
#define VkglTestCase_039588_2 "fragment_out.random.28"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039588, VkglTestCase_039588_1, VkglTestCase_039588_2);

#define VkglTestCase_039589_1 "dEQP-GLES3.functional."
#define VkglTestCase_039589_2 "fragment_out.random.29"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039589, VkglTestCase_039589_1, VkglTestCase_039589_2);

#define VkglTestCase_039590_1 "dEQP-GLES3.functional."
#define VkglTestCase_039590_2 "fragment_out.random.30"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039590, VkglTestCase_039590_1, VkglTestCase_039590_2);

#define VkglTestCase_039591_1 "dEQP-GLES3.functional."
#define VkglTestCase_039591_2 "fragment_out.random.31"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039591, VkglTestCase_039591_1, VkglTestCase_039591_2);

#define VkglTestCase_039592_1 "dEQP-GLES3.functional."
#define VkglTestCase_039592_2 "fragment_out.random.32"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039592, VkglTestCase_039592_1, VkglTestCase_039592_2);

#define VkglTestCase_039593_1 "dEQP-GLES3.functional."
#define VkglTestCase_039593_2 "fragment_out.random.33"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039593, VkglTestCase_039593_1, VkglTestCase_039593_2);

#define VkglTestCase_039594_1 "dEQP-GLES3.functional."
#define VkglTestCase_039594_2 "fragment_out.random.34"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039594, VkglTestCase_039594_1, VkglTestCase_039594_2);

#define VkglTestCase_039595_1 "dEQP-GLES3.functional."
#define VkglTestCase_039595_2 "fragment_out.random.35"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039595, VkglTestCase_039595_1, VkglTestCase_039595_2);

#define VkglTestCase_039596_1 "dEQP-GLES3.functional."
#define VkglTestCase_039596_2 "fragment_out.random.36"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039596, VkglTestCase_039596_1, VkglTestCase_039596_2);

#define VkglTestCase_039597_1 "dEQP-GLES3.functional."
#define VkglTestCase_039597_2 "fragment_out.random.37"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039597, VkglTestCase_039597_1, VkglTestCase_039597_2);

#define VkglTestCase_039598_1 "dEQP-GLES3.functional."
#define VkglTestCase_039598_2 "fragment_out.random.38"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039598, VkglTestCase_039598_1, VkglTestCase_039598_2);

#define VkglTestCase_039599_1 "dEQP-GLES3.functional."
#define VkglTestCase_039599_2 "fragment_out.random.39"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039599, VkglTestCase_039599_1, VkglTestCase_039599_2);

#define VkglTestCase_039600_1 "dEQP-GLES3.functional."
#define VkglTestCase_039600_2 "fragment_out.random.40"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039600, VkglTestCase_039600_1, VkglTestCase_039600_2);

#define VkglTestCase_039601_1 "dEQP-GLES3.functional."
#define VkglTestCase_039601_2 "fragment_out.random.41"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039601, VkglTestCase_039601_1, VkglTestCase_039601_2);

#define VkglTestCase_039602_1 "dEQP-GLES3.functional."
#define VkglTestCase_039602_2 "fragment_out.random.42"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039602, VkglTestCase_039602_1, VkglTestCase_039602_2);

#define VkglTestCase_039603_1 "dEQP-GLES3.functional."
#define VkglTestCase_039603_2 "fragment_out.random.43"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039603, VkglTestCase_039603_1, VkglTestCase_039603_2);

#define VkglTestCase_039604_1 "dEQP-GLES3.functional."
#define VkglTestCase_039604_2 "fragment_out.random.44"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039604, VkglTestCase_039604_1, VkglTestCase_039604_2);

#define VkglTestCase_039605_1 "dEQP-GLES3.functional."
#define VkglTestCase_039605_2 "fragment_out.random.45"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039605, VkglTestCase_039605_1, VkglTestCase_039605_2);

#define VkglTestCase_039606_1 "dEQP-GLES3.functional."
#define VkglTestCase_039606_2 "fragment_out.random.46"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039606, VkglTestCase_039606_1, VkglTestCase_039606_2);

#define VkglTestCase_039607_1 "dEQP-GLES3.functional."
#define VkglTestCase_039607_2 "fragment_out.random.47"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039607, VkglTestCase_039607_1, VkglTestCase_039607_2);

#define VkglTestCase_039608_1 "dEQP-GLES3.functional."
#define VkglTestCase_039608_2 "fragment_out.random.48"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039608, VkglTestCase_039608_1, VkglTestCase_039608_2);

#define VkglTestCase_039609_1 "dEQP-GLES3.functional."
#define VkglTestCase_039609_2 "fragment_out.random.49"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039609, VkglTestCase_039609_1, VkglTestCase_039609_2);

#define VkglTestCase_039610_1 "dEQP-GLES3.functional."
#define VkglTestCase_039610_2 "fragment_out.random.50"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039610, VkglTestCase_039610_1, VkglTestCase_039610_2);

#define VkglTestCase_039611_1 "dEQP-GLES3.functional."
#define VkglTestCase_039611_2 "fragment_out.random.51"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039611, VkglTestCase_039611_1, VkglTestCase_039611_2);

#define VkglTestCase_039612_1 "dEQP-GLES3.functional."
#define VkglTestCase_039612_2 "fragment_out.random.52"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039612, VkglTestCase_039612_1, VkglTestCase_039612_2);

#define VkglTestCase_039613_1 "dEQP-GLES3.functional."
#define VkglTestCase_039613_2 "fragment_out.random.53"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039613, VkglTestCase_039613_1, VkglTestCase_039613_2);

#define VkglTestCase_039614_1 "dEQP-GLES3.functional."
#define VkglTestCase_039614_2 "fragment_out.random.54"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039614, VkglTestCase_039614_1, VkglTestCase_039614_2);

#define VkglTestCase_039615_1 "dEQP-GLES3.functional."
#define VkglTestCase_039615_2 "fragment_out.random.55"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039615, VkglTestCase_039615_1, VkglTestCase_039615_2);

#define VkglTestCase_039616_1 "dEQP-GLES3.functional."
#define VkglTestCase_039616_2 "fragment_out.random.56"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039616, VkglTestCase_039616_1, VkglTestCase_039616_2);

#define VkglTestCase_039617_1 "dEQP-GLES3.functional."
#define VkglTestCase_039617_2 "fragment_out.random.57"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039617, VkglTestCase_039617_1, VkglTestCase_039617_2);

#define VkglTestCase_039618_1 "dEQP-GLES3.functional."
#define VkglTestCase_039618_2 "fragment_out.random.58"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039618, VkglTestCase_039618_1, VkglTestCase_039618_2);

#define VkglTestCase_039619_1 "dEQP-GLES3.functional."
#define VkglTestCase_039619_2 "fragment_out.random.59"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039619, VkglTestCase_039619_1, VkglTestCase_039619_2);

#define VkglTestCase_039620_1 "dEQP-GLES3.functional."
#define VkglTestCase_039620_2 "fragment_out.random.60"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039620, VkglTestCase_039620_1, VkglTestCase_039620_2);

#define VkglTestCase_039621_1 "dEQP-GLES3.functional."
#define VkglTestCase_039621_2 "fragment_out.random.61"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039621, VkglTestCase_039621_1, VkglTestCase_039621_2);

#define VkglTestCase_039622_1 "dEQP-GLES3.functional."
#define VkglTestCase_039622_2 "fragment_out.random.62"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039622, VkglTestCase_039622_1, VkglTestCase_039622_2);

#define VkglTestCase_039623_1 "dEQP-GLES3.functional."
#define VkglTestCase_039623_2 "fragment_out.random.63"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039623, VkglTestCase_039623_1, VkglTestCase_039623_2);

#define VkglTestCase_039624_1 "dEQP-GLES3.functional."
#define VkglTestCase_039624_2 "fragment_out.random.64"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039624, VkglTestCase_039624_1, VkglTestCase_039624_2);

#define VkglTestCase_039625_1 "dEQP-GLES3.functional."
#define VkglTestCase_039625_2 "fragment_out.random.65"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039625, VkglTestCase_039625_1, VkglTestCase_039625_2);

#define VkglTestCase_039626_1 "dEQP-GLES3.functional."
#define VkglTestCase_039626_2 "fragment_out.random.66"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039626, VkglTestCase_039626_1, VkglTestCase_039626_2);

#define VkglTestCase_039627_1 "dEQP-GLES3.functional."
#define VkglTestCase_039627_2 "fragment_out.random.67"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039627, VkglTestCase_039627_1, VkglTestCase_039627_2);

#define VkglTestCase_039628_1 "dEQP-GLES3.functional."
#define VkglTestCase_039628_2 "fragment_out.random.68"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039628, VkglTestCase_039628_1, VkglTestCase_039628_2);

#define VkglTestCase_039629_1 "dEQP-GLES3.functional."
#define VkglTestCase_039629_2 "fragment_out.random.69"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039629, VkglTestCase_039629_1, VkglTestCase_039629_2);

#define VkglTestCase_039630_1 "dEQP-GLES3.functional."
#define VkglTestCase_039630_2 "fragment_out.random.70"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039630, VkglTestCase_039630_1, VkglTestCase_039630_2);

#define VkglTestCase_039631_1 "dEQP-GLES3.functional."
#define VkglTestCase_039631_2 "fragment_out.random.71"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039631, VkglTestCase_039631_1, VkglTestCase_039631_2);

#define VkglTestCase_039632_1 "dEQP-GLES3.functional."
#define VkglTestCase_039632_2 "fragment_out.random.72"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039632, VkglTestCase_039632_1, VkglTestCase_039632_2);

#define VkglTestCase_039633_1 "dEQP-GLES3.functional."
#define VkglTestCase_039633_2 "fragment_out.random.73"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039633, VkglTestCase_039633_1, VkglTestCase_039633_2);

#define VkglTestCase_039634_1 "dEQP-GLES3.functional."
#define VkglTestCase_039634_2 "fragment_out.random.74"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039634, VkglTestCase_039634_1, VkglTestCase_039634_2);

#define VkglTestCase_039635_1 "dEQP-GLES3.functional."
#define VkglTestCase_039635_2 "fragment_out.random.75"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039635, VkglTestCase_039635_1, VkglTestCase_039635_2);

#define VkglTestCase_039636_1 "dEQP-GLES3.functional."
#define VkglTestCase_039636_2 "fragment_out.random.76"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039636, VkglTestCase_039636_1, VkglTestCase_039636_2);

#define VkglTestCase_039637_1 "dEQP-GLES3.functional."
#define VkglTestCase_039637_2 "fragment_out.random.77"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039637, VkglTestCase_039637_1, VkglTestCase_039637_2);

#define VkglTestCase_039638_1 "dEQP-GLES3.functional."
#define VkglTestCase_039638_2 "fragment_out.random.78"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039638, VkglTestCase_039638_1, VkglTestCase_039638_2);

#define VkglTestCase_039639_1 "dEQP-GLES3.functional."
#define VkglTestCase_039639_2 "fragment_out.random.79"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039639, VkglTestCase_039639_1, VkglTestCase_039639_2);

#define VkglTestCase_039640_1 "dEQP-GLES3.functional."
#define VkglTestCase_039640_2 "fragment_out.random.80"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039640, VkglTestCase_039640_1, VkglTestCase_039640_2);

#define VkglTestCase_039641_1 "dEQP-GLES3.functional."
#define VkglTestCase_039641_2 "fragment_out.random.81"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039641, VkglTestCase_039641_1, VkglTestCase_039641_2);

#define VkglTestCase_039642_1 "dEQP-GLES3.functional."
#define VkglTestCase_039642_2 "fragment_out.random.82"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039642, VkglTestCase_039642_1, VkglTestCase_039642_2);

#define VkglTestCase_039643_1 "dEQP-GLES3.functional."
#define VkglTestCase_039643_2 "fragment_out.random.83"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039643, VkglTestCase_039643_1, VkglTestCase_039643_2);

#define VkglTestCase_039644_1 "dEQP-GLES3.functional."
#define VkglTestCase_039644_2 "fragment_out.random.84"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039644, VkglTestCase_039644_1, VkglTestCase_039644_2);

#define VkglTestCase_039645_1 "dEQP-GLES3.functional."
#define VkglTestCase_039645_2 "fragment_out.random.85"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039645, VkglTestCase_039645_1, VkglTestCase_039645_2);

#define VkglTestCase_039646_1 "dEQP-GLES3.functional."
#define VkglTestCase_039646_2 "fragment_out.random.86"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039646, VkglTestCase_039646_1, VkglTestCase_039646_2);

#define VkglTestCase_039647_1 "dEQP-GLES3.functional."
#define VkglTestCase_039647_2 "fragment_out.random.87"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039647, VkglTestCase_039647_1, VkglTestCase_039647_2);

#define VkglTestCase_039648_1 "dEQP-GLES3.functional."
#define VkglTestCase_039648_2 "fragment_out.random.88"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039648, VkglTestCase_039648_1, VkglTestCase_039648_2);

#define VkglTestCase_039649_1 "dEQP-GLES3.functional."
#define VkglTestCase_039649_2 "fragment_out.random.89"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039649, VkglTestCase_039649_1, VkglTestCase_039649_2);

#define VkglTestCase_039650_1 "dEQP-GLES3.functional."
#define VkglTestCase_039650_2 "fragment_out.random.90"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039650, VkglTestCase_039650_1, VkglTestCase_039650_2);

#define VkglTestCase_039651_1 "dEQP-GLES3.functional."
#define VkglTestCase_039651_2 "fragment_out.random.91"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039651, VkglTestCase_039651_1, VkglTestCase_039651_2);

#define VkglTestCase_039652_1 "dEQP-GLES3.functional."
#define VkglTestCase_039652_2 "fragment_out.random.92"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039652, VkglTestCase_039652_1, VkglTestCase_039652_2);

#define VkglTestCase_039653_1 "dEQP-GLES3.functional."
#define VkglTestCase_039653_2 "fragment_out.random.93"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039653, VkglTestCase_039653_1, VkglTestCase_039653_2);

#define VkglTestCase_039654_1 "dEQP-GLES3.functional."
#define VkglTestCase_039654_2 "fragment_out.random.94"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039654, VkglTestCase_039654_1, VkglTestCase_039654_2);

#define VkglTestCase_039655_1 "dEQP-GLES3.functional."
#define VkglTestCase_039655_2 "fragment_out.random.95"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039655, VkglTestCase_039655_1, VkglTestCase_039655_2);

#define VkglTestCase_039656_1 "dEQP-GLES3.functional."
#define VkglTestCase_039656_2 "fragment_out.random.96"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039656, VkglTestCase_039656_1, VkglTestCase_039656_2);

#define VkglTestCase_039657_1 "dEQP-GLES3.functional."
#define VkglTestCase_039657_2 "fragment_out.random.97"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039657, VkglTestCase_039657_1, VkglTestCase_039657_2);

#define VkglTestCase_039658_1 "dEQP-GLES3.functional."
#define VkglTestCase_039658_2 "fragment_out.random.98"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039658, VkglTestCase_039658_1, VkglTestCase_039658_2);

#define VkglTestCase_039659_1 "dEQP-GLES3.functional."
#define VkglTestCase_039659_2 "fragment_out.random.99"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039659, VkglTestCase_039659_1, VkglTestCase_039659_2);
