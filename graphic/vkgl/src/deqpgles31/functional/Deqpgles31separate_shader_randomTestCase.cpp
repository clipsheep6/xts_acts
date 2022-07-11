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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017710_1 "dEQP-GLES31.functional."
#define VkglTestCase_017710_2 "separate_shader.random.0"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017710, VkglTestCase_017710_1, VkglTestCase_017710_2);

#define VkglTestCase_017711_1 "dEQP-GLES31.functional."
#define VkglTestCase_017711_2 "separate_shader.random.1"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017711, VkglTestCase_017711_1, VkglTestCase_017711_2);

#define VkglTestCase_017712_1 "dEQP-GLES31.functional."
#define VkglTestCase_017712_2 "separate_shader.random.2"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017712, VkglTestCase_017712_1, VkglTestCase_017712_2);

#define VkglTestCase_017713_1 "dEQP-GLES31.functional."
#define VkglTestCase_017713_2 "separate_shader.random.3"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017713, VkglTestCase_017713_1, VkglTestCase_017713_2);

#define VkglTestCase_017714_1 "dEQP-GLES31.functional."
#define VkglTestCase_017714_2 "separate_shader.random.4"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017714, VkglTestCase_017714_1, VkglTestCase_017714_2);

#define VkglTestCase_017715_1 "dEQP-GLES31.functional."
#define VkglTestCase_017715_2 "separate_shader.random.5"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017715, VkglTestCase_017715_1, VkglTestCase_017715_2);

#define VkglTestCase_017716_1 "dEQP-GLES31.functional."
#define VkglTestCase_017716_2 "separate_shader.random.6"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017716, VkglTestCase_017716_1, VkglTestCase_017716_2);

#define VkglTestCase_017717_1 "dEQP-GLES31.functional."
#define VkglTestCase_017717_2 "separate_shader.random.7"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017717, VkglTestCase_017717_1, VkglTestCase_017717_2);

#define VkglTestCase_017718_1 "dEQP-GLES31.functional."
#define VkglTestCase_017718_2 "separate_shader.random.8"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017718, VkglTestCase_017718_1, VkglTestCase_017718_2);

#define VkglTestCase_017719_1 "dEQP-GLES31.functional."
#define VkglTestCase_017719_2 "separate_shader.random.9"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017719, VkglTestCase_017719_1, VkglTestCase_017719_2);

#define VkglTestCase_017720_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017720_2 "eparate_shader.random.10"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017720, VkglTestCase_017720_1, VkglTestCase_017720_2);

#define VkglTestCase_017721_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017721_2 "eparate_shader.random.11"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017721, VkglTestCase_017721_1, VkglTestCase_017721_2);

#define VkglTestCase_017722_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017722_2 "eparate_shader.random.12"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017722, VkglTestCase_017722_1, VkglTestCase_017722_2);

#define VkglTestCase_017723_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017723_2 "eparate_shader.random.13"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017723, VkglTestCase_017723_1, VkglTestCase_017723_2);

#define VkglTestCase_017724_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017724_2 "eparate_shader.random.14"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017724, VkglTestCase_017724_1, VkglTestCase_017724_2);

#define VkglTestCase_017725_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017725_2 "eparate_shader.random.15"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017725, VkglTestCase_017725_1, VkglTestCase_017725_2);

#define VkglTestCase_017726_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017726_2 "eparate_shader.random.16"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017726, VkglTestCase_017726_1, VkglTestCase_017726_2);

#define VkglTestCase_017727_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017727_2 "eparate_shader.random.17"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017727, VkglTestCase_017727_1, VkglTestCase_017727_2);

#define VkglTestCase_017728_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017728_2 "eparate_shader.random.18"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017728, VkglTestCase_017728_1, VkglTestCase_017728_2);

#define VkglTestCase_017729_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017729_2 "eparate_shader.random.19"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017729, VkglTestCase_017729_1, VkglTestCase_017729_2);

#define VkglTestCase_017730_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017730_2 "eparate_shader.random.20"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017730, VkglTestCase_017730_1, VkglTestCase_017730_2);

#define VkglTestCase_017731_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017731_2 "eparate_shader.random.21"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017731, VkglTestCase_017731_1, VkglTestCase_017731_2);

#define VkglTestCase_017732_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017732_2 "eparate_shader.random.22"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017732, VkglTestCase_017732_1, VkglTestCase_017732_2);

#define VkglTestCase_017733_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017733_2 "eparate_shader.random.23"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017733, VkglTestCase_017733_1, VkglTestCase_017733_2);

#define VkglTestCase_017734_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017734_2 "eparate_shader.random.24"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017734, VkglTestCase_017734_1, VkglTestCase_017734_2);

#define VkglTestCase_017735_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017735_2 "eparate_shader.random.25"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017735, VkglTestCase_017735_1, VkglTestCase_017735_2);

#define VkglTestCase_017736_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017736_2 "eparate_shader.random.26"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017736, VkglTestCase_017736_1, VkglTestCase_017736_2);

#define VkglTestCase_017737_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017737_2 "eparate_shader.random.27"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017737, VkglTestCase_017737_1, VkglTestCase_017737_2);

#define VkglTestCase_017738_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017738_2 "eparate_shader.random.28"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017738, VkglTestCase_017738_1, VkglTestCase_017738_2);

#define VkglTestCase_017739_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017739_2 "eparate_shader.random.29"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017739, VkglTestCase_017739_1, VkglTestCase_017739_2);

#define VkglTestCase_017740_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017740_2 "eparate_shader.random.30"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017740, VkglTestCase_017740_1, VkglTestCase_017740_2);

#define VkglTestCase_017741_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017741_2 "eparate_shader.random.31"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017741, VkglTestCase_017741_1, VkglTestCase_017741_2);

#define VkglTestCase_017742_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017742_2 "eparate_shader.random.32"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017742, VkglTestCase_017742_1, VkglTestCase_017742_2);

#define VkglTestCase_017743_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017743_2 "eparate_shader.random.33"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017743, VkglTestCase_017743_1, VkglTestCase_017743_2);

#define VkglTestCase_017744_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017744_2 "eparate_shader.random.34"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017744, VkglTestCase_017744_1, VkglTestCase_017744_2);

#define VkglTestCase_017745_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017745_2 "eparate_shader.random.35"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017745, VkglTestCase_017745_1, VkglTestCase_017745_2);

#define VkglTestCase_017746_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017746_2 "eparate_shader.random.36"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017746, VkglTestCase_017746_1, VkglTestCase_017746_2);

#define VkglTestCase_017747_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017747_2 "eparate_shader.random.37"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017747, VkglTestCase_017747_1, VkglTestCase_017747_2);

#define VkglTestCase_017748_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017748_2 "eparate_shader.random.38"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017748, VkglTestCase_017748_1, VkglTestCase_017748_2);

#define VkglTestCase_017749_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017749_2 "eparate_shader.random.39"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017749, VkglTestCase_017749_1, VkglTestCase_017749_2);

#define VkglTestCase_017750_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017750_2 "eparate_shader.random.40"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017750, VkglTestCase_017750_1, VkglTestCase_017750_2);

#define VkglTestCase_017751_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017751_2 "eparate_shader.random.41"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017751, VkglTestCase_017751_1, VkglTestCase_017751_2);

#define VkglTestCase_017752_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017752_2 "eparate_shader.random.42"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017752, VkglTestCase_017752_1, VkglTestCase_017752_2);

#define VkglTestCase_017753_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017753_2 "eparate_shader.random.43"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017753, VkglTestCase_017753_1, VkglTestCase_017753_2);

#define VkglTestCase_017754_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017754_2 "eparate_shader.random.44"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017754, VkglTestCase_017754_1, VkglTestCase_017754_2);

#define VkglTestCase_017755_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017755_2 "eparate_shader.random.45"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017755, VkglTestCase_017755_1, VkglTestCase_017755_2);

#define VkglTestCase_017756_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017756_2 "eparate_shader.random.46"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017756, VkglTestCase_017756_1, VkglTestCase_017756_2);

#define VkglTestCase_017757_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017757_2 "eparate_shader.random.47"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017757, VkglTestCase_017757_1, VkglTestCase_017757_2);

#define VkglTestCase_017758_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017758_2 "eparate_shader.random.48"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017758, VkglTestCase_017758_1, VkglTestCase_017758_2);

#define VkglTestCase_017759_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017759_2 "eparate_shader.random.49"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017759, VkglTestCase_017759_1, VkglTestCase_017759_2);

#define VkglTestCase_017760_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017760_2 "eparate_shader.random.50"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017760, VkglTestCase_017760_1, VkglTestCase_017760_2);

#define VkglTestCase_017761_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017761_2 "eparate_shader.random.51"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017761, VkglTestCase_017761_1, VkglTestCase_017761_2);

#define VkglTestCase_017762_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017762_2 "eparate_shader.random.52"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017762, VkglTestCase_017762_1, VkglTestCase_017762_2);

#define VkglTestCase_017763_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017763_2 "eparate_shader.random.53"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017763, VkglTestCase_017763_1, VkglTestCase_017763_2);

#define VkglTestCase_017764_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017764_2 "eparate_shader.random.54"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017764, VkglTestCase_017764_1, VkglTestCase_017764_2);

#define VkglTestCase_017765_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017765_2 "eparate_shader.random.55"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017765, VkglTestCase_017765_1, VkglTestCase_017765_2);

#define VkglTestCase_017766_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017766_2 "eparate_shader.random.56"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017766, VkglTestCase_017766_1, VkglTestCase_017766_2);

#define VkglTestCase_017767_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017767_2 "eparate_shader.random.57"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017767, VkglTestCase_017767_1, VkglTestCase_017767_2);

#define VkglTestCase_017768_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017768_2 "eparate_shader.random.58"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017768, VkglTestCase_017768_1, VkglTestCase_017768_2);

#define VkglTestCase_017769_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017769_2 "eparate_shader.random.59"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017769, VkglTestCase_017769_1, VkglTestCase_017769_2);

#define VkglTestCase_017770_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017770_2 "eparate_shader.random.60"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017770, VkglTestCase_017770_1, VkglTestCase_017770_2);

#define VkglTestCase_017771_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017771_2 "eparate_shader.random.61"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017771, VkglTestCase_017771_1, VkglTestCase_017771_2);

#define VkglTestCase_017772_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017772_2 "eparate_shader.random.62"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017772, VkglTestCase_017772_1, VkglTestCase_017772_2);

#define VkglTestCase_017773_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017773_2 "eparate_shader.random.63"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017773, VkglTestCase_017773_1, VkglTestCase_017773_2);

#define VkglTestCase_017774_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017774_2 "eparate_shader.random.64"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017774, VkglTestCase_017774_1, VkglTestCase_017774_2);

#define VkglTestCase_017775_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017775_2 "eparate_shader.random.65"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017775, VkglTestCase_017775_1, VkglTestCase_017775_2);

#define VkglTestCase_017776_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017776_2 "eparate_shader.random.66"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017776, VkglTestCase_017776_1, VkglTestCase_017776_2);

#define VkglTestCase_017777_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017777_2 "eparate_shader.random.67"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017777, VkglTestCase_017777_1, VkglTestCase_017777_2);

#define VkglTestCase_017778_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017778_2 "eparate_shader.random.68"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017778, VkglTestCase_017778_1, VkglTestCase_017778_2);

#define VkglTestCase_017779_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017779_2 "eparate_shader.random.69"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017779, VkglTestCase_017779_1, VkglTestCase_017779_2);

#define VkglTestCase_017780_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017780_2 "eparate_shader.random.70"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017780, VkglTestCase_017780_1, VkglTestCase_017780_2);

#define VkglTestCase_017781_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017781_2 "eparate_shader.random.71"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017781, VkglTestCase_017781_1, VkglTestCase_017781_2);

#define VkglTestCase_017782_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017782_2 "eparate_shader.random.72"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017782, VkglTestCase_017782_1, VkglTestCase_017782_2);

#define VkglTestCase_017783_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017783_2 "eparate_shader.random.73"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017783, VkglTestCase_017783_1, VkglTestCase_017783_2);

#define VkglTestCase_017784_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017784_2 "eparate_shader.random.74"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017784, VkglTestCase_017784_1, VkglTestCase_017784_2);

#define VkglTestCase_017785_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017785_2 "eparate_shader.random.75"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017785, VkglTestCase_017785_1, VkglTestCase_017785_2);

#define VkglTestCase_017786_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017786_2 "eparate_shader.random.76"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017786, VkglTestCase_017786_1, VkglTestCase_017786_2);

#define VkglTestCase_017787_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017787_2 "eparate_shader.random.77"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017787, VkglTestCase_017787_1, VkglTestCase_017787_2);

#define VkglTestCase_017788_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017788_2 "eparate_shader.random.78"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017788, VkglTestCase_017788_1, VkglTestCase_017788_2);

#define VkglTestCase_017789_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017789_2 "eparate_shader.random.79"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017789, VkglTestCase_017789_1, VkglTestCase_017789_2);

#define VkglTestCase_017790_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017790_2 "eparate_shader.random.80"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017790, VkglTestCase_017790_1, VkglTestCase_017790_2);

#define VkglTestCase_017791_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017791_2 "eparate_shader.random.81"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017791, VkglTestCase_017791_1, VkglTestCase_017791_2);

#define VkglTestCase_017792_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017792_2 "eparate_shader.random.82"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017792, VkglTestCase_017792_1, VkglTestCase_017792_2);

#define VkglTestCase_017793_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017793_2 "eparate_shader.random.83"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017793, VkglTestCase_017793_1, VkglTestCase_017793_2);

#define VkglTestCase_017794_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017794_2 "eparate_shader.random.84"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017794, VkglTestCase_017794_1, VkglTestCase_017794_2);

#define VkglTestCase_017795_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017795_2 "eparate_shader.random.85"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017795, VkglTestCase_017795_1, VkglTestCase_017795_2);

#define VkglTestCase_017796_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017796_2 "eparate_shader.random.86"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017796, VkglTestCase_017796_1, VkglTestCase_017796_2);

#define VkglTestCase_017797_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017797_2 "eparate_shader.random.87"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017797, VkglTestCase_017797_1, VkglTestCase_017797_2);

#define VkglTestCase_017798_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017798_2 "eparate_shader.random.88"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017798, VkglTestCase_017798_1, VkglTestCase_017798_2);

#define VkglTestCase_017799_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017799_2 "eparate_shader.random.89"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017799, VkglTestCase_017799_1, VkglTestCase_017799_2);

#define VkglTestCase_017800_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017800_2 "eparate_shader.random.90"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017800, VkglTestCase_017800_1, VkglTestCase_017800_2);

#define VkglTestCase_017801_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017801_2 "eparate_shader.random.91"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017801, VkglTestCase_017801_1, VkglTestCase_017801_2);

#define VkglTestCase_017802_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017802_2 "eparate_shader.random.92"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017802, VkglTestCase_017802_1, VkglTestCase_017802_2);

#define VkglTestCase_017803_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017803_2 "eparate_shader.random.93"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017803, VkglTestCase_017803_1, VkglTestCase_017803_2);

#define VkglTestCase_017804_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017804_2 "eparate_shader.random.94"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017804, VkglTestCase_017804_1, VkglTestCase_017804_2);

#define VkglTestCase_017805_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017805_2 "eparate_shader.random.95"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017805, VkglTestCase_017805_1, VkglTestCase_017805_2);

#define VkglTestCase_017806_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017806_2 "eparate_shader.random.96"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017806, VkglTestCase_017806_1, VkglTestCase_017806_2);

#define VkglTestCase_017807_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017807_2 "eparate_shader.random.97"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017807, VkglTestCase_017807_1, VkglTestCase_017807_2);

#define VkglTestCase_017808_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017808_2 "eparate_shader.random.98"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017808, VkglTestCase_017808_1, VkglTestCase_017808_2);

#define VkglTestCase_017809_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017809_2 "eparate_shader.random.99"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017809, VkglTestCase_017809_1, VkglTestCase_017809_2);

#define VkglTestCase_017810_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017810_2 "eparate_shader.random.100"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017810, VkglTestCase_017810_1, VkglTestCase_017810_2);

#define VkglTestCase_017811_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017811_2 "eparate_shader.random.101"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017811, VkglTestCase_017811_1, VkglTestCase_017811_2);

#define VkglTestCase_017812_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017812_2 "eparate_shader.random.102"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017812, VkglTestCase_017812_1, VkglTestCase_017812_2);

#define VkglTestCase_017813_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017813_2 "eparate_shader.random.103"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017813, VkglTestCase_017813_1, VkglTestCase_017813_2);

#define VkglTestCase_017814_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017814_2 "eparate_shader.random.104"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017814, VkglTestCase_017814_1, VkglTestCase_017814_2);

#define VkglTestCase_017815_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017815_2 "eparate_shader.random.105"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017815, VkglTestCase_017815_1, VkglTestCase_017815_2);

#define VkglTestCase_017816_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017816_2 "eparate_shader.random.106"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017816, VkglTestCase_017816_1, VkglTestCase_017816_2);

#define VkglTestCase_017817_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017817_2 "eparate_shader.random.107"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017817, VkglTestCase_017817_1, VkglTestCase_017817_2);

#define VkglTestCase_017818_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017818_2 "eparate_shader.random.108"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017818, VkglTestCase_017818_1, VkglTestCase_017818_2);

#define VkglTestCase_017819_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017819_2 "eparate_shader.random.109"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017819, VkglTestCase_017819_1, VkglTestCase_017819_2);

#define VkglTestCase_017820_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017820_2 "eparate_shader.random.110"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017820, VkglTestCase_017820_1, VkglTestCase_017820_2);

#define VkglTestCase_017821_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017821_2 "eparate_shader.random.111"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017821, VkglTestCase_017821_1, VkglTestCase_017821_2);

#define VkglTestCase_017822_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017822_2 "eparate_shader.random.112"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017822, VkglTestCase_017822_1, VkglTestCase_017822_2);

#define VkglTestCase_017823_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017823_2 "eparate_shader.random.113"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017823, VkglTestCase_017823_1, VkglTestCase_017823_2);

#define VkglTestCase_017824_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017824_2 "eparate_shader.random.114"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017824, VkglTestCase_017824_1, VkglTestCase_017824_2);

#define VkglTestCase_017825_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017825_2 "eparate_shader.random.115"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017825, VkglTestCase_017825_1, VkglTestCase_017825_2);

#define VkglTestCase_017826_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017826_2 "eparate_shader.random.116"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017826, VkglTestCase_017826_1, VkglTestCase_017826_2);

#define VkglTestCase_017827_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017827_2 "eparate_shader.random.117"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017827, VkglTestCase_017827_1, VkglTestCase_017827_2);

#define VkglTestCase_017828_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017828_2 "eparate_shader.random.118"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017828, VkglTestCase_017828_1, VkglTestCase_017828_2);

#define VkglTestCase_017829_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017829_2 "eparate_shader.random.119"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017829, VkglTestCase_017829_1, VkglTestCase_017829_2);

#define VkglTestCase_017830_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017830_2 "eparate_shader.random.120"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017830, VkglTestCase_017830_1, VkglTestCase_017830_2);

#define VkglTestCase_017831_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017831_2 "eparate_shader.random.121"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017831, VkglTestCase_017831_1, VkglTestCase_017831_2);

#define VkglTestCase_017832_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017832_2 "eparate_shader.random.122"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017832, VkglTestCase_017832_1, VkglTestCase_017832_2);

#define VkglTestCase_017833_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017833_2 "eparate_shader.random.123"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017833, VkglTestCase_017833_1, VkglTestCase_017833_2);

#define VkglTestCase_017834_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017834_2 "eparate_shader.random.124"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017834, VkglTestCase_017834_1, VkglTestCase_017834_2);

#define VkglTestCase_017835_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017835_2 "eparate_shader.random.125"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017835, VkglTestCase_017835_1, VkglTestCase_017835_2);

#define VkglTestCase_017836_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017836_2 "eparate_shader.random.126"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017836, VkglTestCase_017836_1, VkglTestCase_017836_2);

#define VkglTestCase_017837_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_017837_2 "eparate_shader.random.127"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017837, VkglTestCase_017837_1, VkglTestCase_017837_2);
