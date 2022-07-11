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

#define VkglTestCase_021685_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021685_2 ".random.all_features.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021685, VkglTestCase_021685_1, VkglTestCase_021685_2);

#define VkglTestCase_021686_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021686_2 ".random.all_features.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021686, VkglTestCase_021686_1, VkglTestCase_021686_2);

#define VkglTestCase_021687_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021687_2 ".random.all_features.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021687, VkglTestCase_021687_1, VkglTestCase_021687_2);

#define VkglTestCase_021688_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021688_2 ".random.all_features.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021688, VkglTestCase_021688_1, VkglTestCase_021688_2);

#define VkglTestCase_021689_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021689_2 ".random.all_features.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021689, VkglTestCase_021689_1, VkglTestCase_021689_2);

#define VkglTestCase_021690_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021690_2 ".random.all_features.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021690, VkglTestCase_021690_1, VkglTestCase_021690_2);

#define VkglTestCase_021691_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021691_2 ".random.all_features.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021691, VkglTestCase_021691_1, VkglTestCase_021691_2);

#define VkglTestCase_021692_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021692_2 ".random.all_features.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021692, VkglTestCase_021692_1, VkglTestCase_021692_2);

#define VkglTestCase_021693_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021693_2 ".random.all_features.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021693, VkglTestCase_021693_1, VkglTestCase_021693_2);

#define VkglTestCase_021694_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021694_2 ".random.all_features.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021694, VkglTestCase_021694_1, VkglTestCase_021694_2);

#define VkglTestCase_021695_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021695_2 ".random.all_features.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021695, VkglTestCase_021695_1, VkglTestCase_021695_2);

#define VkglTestCase_021696_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021696_2 ".random.all_features.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021696, VkglTestCase_021696_1, VkglTestCase_021696_2);

#define VkglTestCase_021697_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021697_2 ".random.all_features.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021697, VkglTestCase_021697_1, VkglTestCase_021697_2);

#define VkglTestCase_021698_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021698_2 ".random.all_features.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021698, VkglTestCase_021698_1, VkglTestCase_021698_2);

#define VkglTestCase_021699_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021699_2 ".random.all_features.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021699, VkglTestCase_021699_1, VkglTestCase_021699_2);

#define VkglTestCase_021700_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021700_2 ".random.all_features.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021700, VkglTestCase_021700_1, VkglTestCase_021700_2);

#define VkglTestCase_021701_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021701_2 ".random.all_features.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021701, VkglTestCase_021701_1, VkglTestCase_021701_2);

#define VkglTestCase_021702_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021702_2 ".random.all_features.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021702, VkglTestCase_021702_1, VkglTestCase_021702_2);

#define VkglTestCase_021703_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021703_2 ".random.all_features.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021703, VkglTestCase_021703_1, VkglTestCase_021703_2);

#define VkglTestCase_021704_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021704_2 ".random.all_features.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021704, VkglTestCase_021704_1, VkglTestCase_021704_2);

#define VkglTestCase_021705_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021705_2 ".random.all_features.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021705, VkglTestCase_021705_1, VkglTestCase_021705_2);

#define VkglTestCase_021706_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021706_2 ".random.all_features.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021706, VkglTestCase_021706_1, VkglTestCase_021706_2);

#define VkglTestCase_021707_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021707_2 ".random.all_features.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021707, VkglTestCase_021707_1, VkglTestCase_021707_2);

#define VkglTestCase_021708_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021708_2 ".random.all_features.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021708, VkglTestCase_021708_1, VkglTestCase_021708_2);

#define VkglTestCase_021709_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021709_2 ".random.all_features.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021709, VkglTestCase_021709_1, VkglTestCase_021709_2);

#define VkglTestCase_021710_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021710_2 ".random.all_features.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021710, VkglTestCase_021710_1, VkglTestCase_021710_2);

#define VkglTestCase_021711_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021711_2 ".random.all_features.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021711, VkglTestCase_021711_1, VkglTestCase_021711_2);

#define VkglTestCase_021712_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021712_2 ".random.all_features.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021712, VkglTestCase_021712_1, VkglTestCase_021712_2);

#define VkglTestCase_021713_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021713_2 ".random.all_features.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021713, VkglTestCase_021713_1, VkglTestCase_021713_2);

#define VkglTestCase_021714_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021714_2 ".random.all_features.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021714, VkglTestCase_021714_1, VkglTestCase_021714_2);

#define VkglTestCase_021715_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021715_2 ".random.all_features.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021715, VkglTestCase_021715_1, VkglTestCase_021715_2);

#define VkglTestCase_021716_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021716_2 ".random.all_features.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021716, VkglTestCase_021716_1, VkglTestCase_021716_2);

#define VkglTestCase_021717_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021717_2 ".random.all_features.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021717, VkglTestCase_021717_1, VkglTestCase_021717_2);

#define VkglTestCase_021718_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021718_2 ".random.all_features.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021718, VkglTestCase_021718_1, VkglTestCase_021718_2);

#define VkglTestCase_021719_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021719_2 ".random.all_features.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021719, VkglTestCase_021719_1, VkglTestCase_021719_2);

#define VkglTestCase_021720_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021720_2 ".random.all_features.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021720, VkglTestCase_021720_1, VkglTestCase_021720_2);

#define VkglTestCase_021721_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021721_2 ".random.all_features.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021721, VkglTestCase_021721_1, VkglTestCase_021721_2);

#define VkglTestCase_021722_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021722_2 ".random.all_features.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021722, VkglTestCase_021722_1, VkglTestCase_021722_2);

#define VkglTestCase_021723_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021723_2 ".random.all_features.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021723, VkglTestCase_021723_1, VkglTestCase_021723_2);

#define VkglTestCase_021724_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021724_2 ".random.all_features.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021724, VkglTestCase_021724_1, VkglTestCase_021724_2);

#define VkglTestCase_021725_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021725_2 ".random.all_features.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021725, VkglTestCase_021725_1, VkglTestCase_021725_2);

#define VkglTestCase_021726_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021726_2 ".random.all_features.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021726, VkglTestCase_021726_1, VkglTestCase_021726_2);

#define VkglTestCase_021727_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021727_2 ".random.all_features.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021727, VkglTestCase_021727_1, VkglTestCase_021727_2);

#define VkglTestCase_021728_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021728_2 ".random.all_features.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021728, VkglTestCase_021728_1, VkglTestCase_021728_2);

#define VkglTestCase_021729_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021729_2 ".random.all_features.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021729, VkglTestCase_021729_1, VkglTestCase_021729_2);

#define VkglTestCase_021730_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021730_2 ".random.all_features.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021730, VkglTestCase_021730_1, VkglTestCase_021730_2);

#define VkglTestCase_021731_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021731_2 ".random.all_features.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021731, VkglTestCase_021731_1, VkglTestCase_021731_2);

#define VkglTestCase_021732_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021732_2 ".random.all_features.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021732, VkglTestCase_021732_1, VkglTestCase_021732_2);

#define VkglTestCase_021733_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021733_2 ".random.all_features.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021733, VkglTestCase_021733_1, VkglTestCase_021733_2);

#define VkglTestCase_021734_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021734_2 ".random.all_features.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021734, VkglTestCase_021734_1, VkglTestCase_021734_2);

#define VkglTestCase_021735_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021735_2 ".random.all_features.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021735, VkglTestCase_021735_1, VkglTestCase_021735_2);

#define VkglTestCase_021736_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021736_2 ".random.all_features.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021736, VkglTestCase_021736_1, VkglTestCase_021736_2);

#define VkglTestCase_021737_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021737_2 ".random.all_features.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021737, VkglTestCase_021737_1, VkglTestCase_021737_2);

#define VkglTestCase_021738_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021738_2 ".random.all_features.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021738, VkglTestCase_021738_1, VkglTestCase_021738_2);

#define VkglTestCase_021739_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021739_2 ".random.all_features.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021739, VkglTestCase_021739_1, VkglTestCase_021739_2);

#define VkglTestCase_021740_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021740_2 ".random.all_features.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021740, VkglTestCase_021740_1, VkglTestCase_021740_2);

#define VkglTestCase_021741_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021741_2 ".random.all_features.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021741, VkglTestCase_021741_1, VkglTestCase_021741_2);

#define VkglTestCase_021742_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021742_2 ".random.all_features.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021742, VkglTestCase_021742_1, VkglTestCase_021742_2);

#define VkglTestCase_021743_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021743_2 ".random.all_features.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021743, VkglTestCase_021743_1, VkglTestCase_021743_2);

#define VkglTestCase_021744_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021744_2 ".random.all_features.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021744, VkglTestCase_021744_1, VkglTestCase_021744_2);

#define VkglTestCase_021745_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021745_2 ".random.all_features.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021745, VkglTestCase_021745_1, VkglTestCase_021745_2);

#define VkglTestCase_021746_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021746_2 ".random.all_features.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021746, VkglTestCase_021746_1, VkglTestCase_021746_2);

#define VkglTestCase_021747_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021747_2 ".random.all_features.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021747, VkglTestCase_021747_1, VkglTestCase_021747_2);

#define VkglTestCase_021748_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021748_2 ".random.all_features.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021748, VkglTestCase_021748_1, VkglTestCase_021748_2);

#define VkglTestCase_021749_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021749_2 ".random.all_features.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021749, VkglTestCase_021749_1, VkglTestCase_021749_2);

#define VkglTestCase_021750_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021750_2 ".random.all_features.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021750, VkglTestCase_021750_1, VkglTestCase_021750_2);

#define VkglTestCase_021751_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021751_2 ".random.all_features.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021751, VkglTestCase_021751_1, VkglTestCase_021751_2);

#define VkglTestCase_021752_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021752_2 ".random.all_features.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021752, VkglTestCase_021752_1, VkglTestCase_021752_2);

#define VkglTestCase_021753_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021753_2 ".random.all_features.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021753, VkglTestCase_021753_1, VkglTestCase_021753_2);

#define VkglTestCase_021754_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_021754_2 ".random.all_features.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021754, VkglTestCase_021754_1, VkglTestCase_021754_2);
