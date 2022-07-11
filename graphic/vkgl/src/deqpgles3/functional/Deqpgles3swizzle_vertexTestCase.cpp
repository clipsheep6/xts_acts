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
#include "../ActsDeqpgles30021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020594_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020594_2 "ers.random.swizzle.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020594, VkglTestCase_020594_1, VkglTestCase_020594_2);

#define VkglTestCase_020595_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020595_2 "ers.random.swizzle.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020595, VkglTestCase_020595_1, VkglTestCase_020595_2);

#define VkglTestCase_020596_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020596_2 "ers.random.swizzle.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020596, VkglTestCase_020596_1, VkglTestCase_020596_2);

#define VkglTestCase_020597_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020597_2 "ers.random.swizzle.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020597, VkglTestCase_020597_1, VkglTestCase_020597_2);

#define VkglTestCase_020598_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020598_2 "ers.random.swizzle.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020598, VkglTestCase_020598_1, VkglTestCase_020598_2);

#define VkglTestCase_020599_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020599_2 "ers.random.swizzle.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020599, VkglTestCase_020599_1, VkglTestCase_020599_2);

#define VkglTestCase_020600_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020600_2 "ers.random.swizzle.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020600, VkglTestCase_020600_1, VkglTestCase_020600_2);

#define VkglTestCase_020601_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020601_2 "ers.random.swizzle.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020601, VkglTestCase_020601_1, VkglTestCase_020601_2);

#define VkglTestCase_020602_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020602_2 "ers.random.swizzle.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020602, VkglTestCase_020602_1, VkglTestCase_020602_2);

#define VkglTestCase_020603_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020603_2 "ers.random.swizzle.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020603, VkglTestCase_020603_1, VkglTestCase_020603_2);

#define VkglTestCase_020604_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020604_2 "rs.random.swizzle.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020604, VkglTestCase_020604_1, VkglTestCase_020604_2);

#define VkglTestCase_020605_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020605_2 "rs.random.swizzle.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020605, VkglTestCase_020605_1, VkglTestCase_020605_2);

#define VkglTestCase_020606_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020606_2 "rs.random.swizzle.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020606, VkglTestCase_020606_1, VkglTestCase_020606_2);

#define VkglTestCase_020607_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020607_2 "rs.random.swizzle.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020607, VkglTestCase_020607_1, VkglTestCase_020607_2);

#define VkglTestCase_020608_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020608_2 "rs.random.swizzle.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020608, VkglTestCase_020608_1, VkglTestCase_020608_2);

#define VkglTestCase_020609_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020609_2 "rs.random.swizzle.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020609, VkglTestCase_020609_1, VkglTestCase_020609_2);

#define VkglTestCase_020610_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020610_2 "rs.random.swizzle.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020610, VkglTestCase_020610_1, VkglTestCase_020610_2);

#define VkglTestCase_020611_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020611_2 "rs.random.swizzle.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020611, VkglTestCase_020611_1, VkglTestCase_020611_2);

#define VkglTestCase_020612_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020612_2 "rs.random.swizzle.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020612, VkglTestCase_020612_1, VkglTestCase_020612_2);

#define VkglTestCase_020613_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020613_2 "rs.random.swizzle.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020613, VkglTestCase_020613_1, VkglTestCase_020613_2);

#define VkglTestCase_020614_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020614_2 "rs.random.swizzle.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020614, VkglTestCase_020614_1, VkglTestCase_020614_2);

#define VkglTestCase_020615_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020615_2 "rs.random.swizzle.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020615, VkglTestCase_020615_1, VkglTestCase_020615_2);

#define VkglTestCase_020616_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020616_2 "rs.random.swizzle.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020616, VkglTestCase_020616_1, VkglTestCase_020616_2);

#define VkglTestCase_020617_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020617_2 "rs.random.swizzle.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020617, VkglTestCase_020617_1, VkglTestCase_020617_2);

#define VkglTestCase_020618_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020618_2 "rs.random.swizzle.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020618, VkglTestCase_020618_1, VkglTestCase_020618_2);

#define VkglTestCase_020619_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020619_2 "rs.random.swizzle.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020619, VkglTestCase_020619_1, VkglTestCase_020619_2);

#define VkglTestCase_020620_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020620_2 "rs.random.swizzle.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020620, VkglTestCase_020620_1, VkglTestCase_020620_2);

#define VkglTestCase_020621_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020621_2 "rs.random.swizzle.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020621, VkglTestCase_020621_1, VkglTestCase_020621_2);

#define VkglTestCase_020622_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020622_2 "rs.random.swizzle.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020622, VkglTestCase_020622_1, VkglTestCase_020622_2);

#define VkglTestCase_020623_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020623_2 "rs.random.swizzle.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020623, VkglTestCase_020623_1, VkglTestCase_020623_2);

#define VkglTestCase_020624_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020624_2 "rs.random.swizzle.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020624, VkglTestCase_020624_1, VkglTestCase_020624_2);

#define VkglTestCase_020625_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020625_2 "rs.random.swizzle.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020625, VkglTestCase_020625_1, VkglTestCase_020625_2);

#define VkglTestCase_020626_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020626_2 "rs.random.swizzle.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020626, VkglTestCase_020626_1, VkglTestCase_020626_2);

#define VkglTestCase_020627_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020627_2 "rs.random.swizzle.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020627, VkglTestCase_020627_1, VkglTestCase_020627_2);

#define VkglTestCase_020628_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020628_2 "rs.random.swizzle.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020628, VkglTestCase_020628_1, VkglTestCase_020628_2);

#define VkglTestCase_020629_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020629_2 "rs.random.swizzle.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020629, VkglTestCase_020629_1, VkglTestCase_020629_2);

#define VkglTestCase_020630_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020630_2 "rs.random.swizzle.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020630, VkglTestCase_020630_1, VkglTestCase_020630_2);

#define VkglTestCase_020631_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020631_2 "rs.random.swizzle.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020631, VkglTestCase_020631_1, VkglTestCase_020631_2);

#define VkglTestCase_020632_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020632_2 "rs.random.swizzle.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020632, VkglTestCase_020632_1, VkglTestCase_020632_2);

#define VkglTestCase_020633_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020633_2 "rs.random.swizzle.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020633, VkglTestCase_020633_1, VkglTestCase_020633_2);

#define VkglTestCase_020634_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020634_2 "rs.random.swizzle.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020634, VkglTestCase_020634_1, VkglTestCase_020634_2);

#define VkglTestCase_020635_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020635_2 "rs.random.swizzle.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020635, VkglTestCase_020635_1, VkglTestCase_020635_2);

#define VkglTestCase_020636_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020636_2 "rs.random.swizzle.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020636, VkglTestCase_020636_1, VkglTestCase_020636_2);

#define VkglTestCase_020637_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020637_2 "rs.random.swizzle.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020637, VkglTestCase_020637_1, VkglTestCase_020637_2);

#define VkglTestCase_020638_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020638_2 "rs.random.swizzle.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020638, VkglTestCase_020638_1, VkglTestCase_020638_2);

#define VkglTestCase_020639_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020639_2 "rs.random.swizzle.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020639, VkglTestCase_020639_1, VkglTestCase_020639_2);

#define VkglTestCase_020640_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020640_2 "rs.random.swizzle.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020640, VkglTestCase_020640_1, VkglTestCase_020640_2);

#define VkglTestCase_020641_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020641_2 "rs.random.swizzle.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020641, VkglTestCase_020641_1, VkglTestCase_020641_2);

#define VkglTestCase_020642_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020642_2 "rs.random.swizzle.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020642, VkglTestCase_020642_1, VkglTestCase_020642_2);

#define VkglTestCase_020643_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020643_2 "rs.random.swizzle.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020643, VkglTestCase_020643_1, VkglTestCase_020643_2);
