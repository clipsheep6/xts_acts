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

#define VkglTestCase_020694_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020694_2 "random.comparison_ops.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020694, VkglTestCase_020694_1, VkglTestCase_020694_2);

#define VkglTestCase_020695_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020695_2 "random.comparison_ops.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020695, VkglTestCase_020695_1, VkglTestCase_020695_2);

#define VkglTestCase_020696_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020696_2 "random.comparison_ops.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020696, VkglTestCase_020696_1, VkglTestCase_020696_2);

#define VkglTestCase_020697_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020697_2 "random.comparison_ops.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020697, VkglTestCase_020697_1, VkglTestCase_020697_2);

#define VkglTestCase_020698_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020698_2 "random.comparison_ops.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020698, VkglTestCase_020698_1, VkglTestCase_020698_2);

#define VkglTestCase_020699_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020699_2 "random.comparison_ops.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020699, VkglTestCase_020699_1, VkglTestCase_020699_2);

#define VkglTestCase_020700_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020700_2 "random.comparison_ops.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020700, VkglTestCase_020700_1, VkglTestCase_020700_2);

#define VkglTestCase_020701_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020701_2 "random.comparison_ops.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020701, VkglTestCase_020701_1, VkglTestCase_020701_2);

#define VkglTestCase_020702_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020702_2 "random.comparison_ops.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020702, VkglTestCase_020702_1, VkglTestCase_020702_2);

#define VkglTestCase_020703_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020703_2 "random.comparison_ops.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020703, VkglTestCase_020703_1, VkglTestCase_020703_2);

#define VkglTestCase_020704_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020704_2 "random.comparison_ops.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020704, VkglTestCase_020704_1, VkglTestCase_020704_2);

#define VkglTestCase_020705_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020705_2 "random.comparison_ops.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020705, VkglTestCase_020705_1, VkglTestCase_020705_2);

#define VkglTestCase_020706_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020706_2 "random.comparison_ops.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020706, VkglTestCase_020706_1, VkglTestCase_020706_2);

#define VkglTestCase_020707_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020707_2 "random.comparison_ops.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020707, VkglTestCase_020707_1, VkglTestCase_020707_2);

#define VkglTestCase_020708_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020708_2 "random.comparison_ops.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020708, VkglTestCase_020708_1, VkglTestCase_020708_2);

#define VkglTestCase_020709_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020709_2 "random.comparison_ops.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020709, VkglTestCase_020709_1, VkglTestCase_020709_2);

#define VkglTestCase_020710_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020710_2 "random.comparison_ops.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020710, VkglTestCase_020710_1, VkglTestCase_020710_2);

#define VkglTestCase_020711_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020711_2 "random.comparison_ops.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020711, VkglTestCase_020711_1, VkglTestCase_020711_2);

#define VkglTestCase_020712_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020712_2 "random.comparison_ops.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020712, VkglTestCase_020712_1, VkglTestCase_020712_2);

#define VkglTestCase_020713_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020713_2 "random.comparison_ops.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020713, VkglTestCase_020713_1, VkglTestCase_020713_2);

#define VkglTestCase_020714_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020714_2 "random.comparison_ops.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020714, VkglTestCase_020714_1, VkglTestCase_020714_2);

#define VkglTestCase_020715_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020715_2 "random.comparison_ops.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020715, VkglTestCase_020715_1, VkglTestCase_020715_2);

#define VkglTestCase_020716_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020716_2 "random.comparison_ops.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020716, VkglTestCase_020716_1, VkglTestCase_020716_2);

#define VkglTestCase_020717_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020717_2 "random.comparison_ops.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020717, VkglTestCase_020717_1, VkglTestCase_020717_2);

#define VkglTestCase_020718_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020718_2 "random.comparison_ops.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020718, VkglTestCase_020718_1, VkglTestCase_020718_2);

#define VkglTestCase_020719_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020719_2 "random.comparison_ops.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020719, VkglTestCase_020719_1, VkglTestCase_020719_2);

#define VkglTestCase_020720_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020720_2 "random.comparison_ops.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020720, VkglTestCase_020720_1, VkglTestCase_020720_2);

#define VkglTestCase_020721_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020721_2 "random.comparison_ops.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020721, VkglTestCase_020721_1, VkglTestCase_020721_2);

#define VkglTestCase_020722_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020722_2 "random.comparison_ops.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020722, VkglTestCase_020722_1, VkglTestCase_020722_2);

#define VkglTestCase_020723_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020723_2 "random.comparison_ops.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020723, VkglTestCase_020723_1, VkglTestCase_020723_2);

#define VkglTestCase_020724_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020724_2 "random.comparison_ops.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020724, VkglTestCase_020724_1, VkglTestCase_020724_2);

#define VkglTestCase_020725_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020725_2 "random.comparison_ops.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020725, VkglTestCase_020725_1, VkglTestCase_020725_2);

#define VkglTestCase_020726_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020726_2 "random.comparison_ops.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020726, VkglTestCase_020726_1, VkglTestCase_020726_2);

#define VkglTestCase_020727_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020727_2 "random.comparison_ops.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020727, VkglTestCase_020727_1, VkglTestCase_020727_2);

#define VkglTestCase_020728_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020728_2 "random.comparison_ops.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020728, VkglTestCase_020728_1, VkglTestCase_020728_2);

#define VkglTestCase_020729_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020729_2 "random.comparison_ops.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020729, VkglTestCase_020729_1, VkglTestCase_020729_2);

#define VkglTestCase_020730_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020730_2 "random.comparison_ops.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020730, VkglTestCase_020730_1, VkglTestCase_020730_2);

#define VkglTestCase_020731_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020731_2 "random.comparison_ops.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020731, VkglTestCase_020731_1, VkglTestCase_020731_2);

#define VkglTestCase_020732_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020732_2 "random.comparison_ops.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020732, VkglTestCase_020732_1, VkglTestCase_020732_2);

#define VkglTestCase_020733_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020733_2 "random.comparison_ops.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020733, VkglTestCase_020733_1, VkglTestCase_020733_2);

#define VkglTestCase_020734_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020734_2 "random.comparison_ops.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020734, VkglTestCase_020734_1, VkglTestCase_020734_2);

#define VkglTestCase_020735_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020735_2 "random.comparison_ops.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020735, VkglTestCase_020735_1, VkglTestCase_020735_2);

#define VkglTestCase_020736_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020736_2 "random.comparison_ops.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020736, VkglTestCase_020736_1, VkglTestCase_020736_2);

#define VkglTestCase_020737_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020737_2 "random.comparison_ops.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020737, VkglTestCase_020737_1, VkglTestCase_020737_2);

#define VkglTestCase_020738_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020738_2 "random.comparison_ops.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020738, VkglTestCase_020738_1, VkglTestCase_020738_2);

#define VkglTestCase_020739_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020739_2 "random.comparison_ops.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020739, VkglTestCase_020739_1, VkglTestCase_020739_2);

#define VkglTestCase_020740_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020740_2 "random.comparison_ops.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020740, VkglTestCase_020740_1, VkglTestCase_020740_2);

#define VkglTestCase_020741_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020741_2 "random.comparison_ops.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020741, VkglTestCase_020741_1, VkglTestCase_020741_2);

#define VkglTestCase_020742_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020742_2 "random.comparison_ops.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020742, VkglTestCase_020742_1, VkglTestCase_020742_2);

#define VkglTestCase_020743_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020743_2 "random.comparison_ops.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020743, VkglTestCase_020743_1, VkglTestCase_020743_2);
