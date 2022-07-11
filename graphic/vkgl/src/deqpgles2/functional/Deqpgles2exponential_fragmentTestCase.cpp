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

#define VkglTestCase_009732_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009732_2 ".random.exponential.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009732, VkglTestCase_009732_1, VkglTestCase_009732_2);

#define VkglTestCase_009733_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009733_2 ".random.exponential.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009733, VkglTestCase_009733_1, VkglTestCase_009733_2);

#define VkglTestCase_009734_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009734_2 ".random.exponential.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009734, VkglTestCase_009734_1, VkglTestCase_009734_2);

#define VkglTestCase_009735_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009735_2 ".random.exponential.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009735, VkglTestCase_009735_1, VkglTestCase_009735_2);

#define VkglTestCase_009736_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009736_2 ".random.exponential.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009736, VkglTestCase_009736_1, VkglTestCase_009736_2);

#define VkglTestCase_009737_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009737_2 ".random.exponential.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009737, VkglTestCase_009737_1, VkglTestCase_009737_2);

#define VkglTestCase_009738_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009738_2 ".random.exponential.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009738, VkglTestCase_009738_1, VkglTestCase_009738_2);

#define VkglTestCase_009739_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009739_2 ".random.exponential.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009739, VkglTestCase_009739_1, VkglTestCase_009739_2);

#define VkglTestCase_009740_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009740_2 ".random.exponential.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009740, VkglTestCase_009740_1, VkglTestCase_009740_2);

#define VkglTestCase_009741_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009741_2 ".random.exponential.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009741, VkglTestCase_009741_1, VkglTestCase_009741_2);

#define VkglTestCase_009742_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009742_2 "random.exponential.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009742, VkglTestCase_009742_1, VkglTestCase_009742_2);

#define VkglTestCase_009743_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009743_2 "random.exponential.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009743, VkglTestCase_009743_1, VkglTestCase_009743_2);

#define VkglTestCase_009744_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009744_2 "random.exponential.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009744, VkglTestCase_009744_1, VkglTestCase_009744_2);

#define VkglTestCase_009745_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009745_2 "random.exponential.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009745, VkglTestCase_009745_1, VkglTestCase_009745_2);

#define VkglTestCase_009746_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009746_2 "random.exponential.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009746, VkglTestCase_009746_1, VkglTestCase_009746_2);

#define VkglTestCase_009747_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009747_2 "random.exponential.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009747, VkglTestCase_009747_1, VkglTestCase_009747_2);

#define VkglTestCase_009748_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009748_2 "random.exponential.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009748, VkglTestCase_009748_1, VkglTestCase_009748_2);

#define VkglTestCase_009749_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009749_2 "random.exponential.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009749, VkglTestCase_009749_1, VkglTestCase_009749_2);

#define VkglTestCase_009750_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009750_2 "random.exponential.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009750, VkglTestCase_009750_1, VkglTestCase_009750_2);

#define VkglTestCase_009751_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009751_2 "random.exponential.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009751, VkglTestCase_009751_1, VkglTestCase_009751_2);

#define VkglTestCase_009752_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009752_2 "random.exponential.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009752, VkglTestCase_009752_1, VkglTestCase_009752_2);

#define VkglTestCase_009753_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009753_2 "random.exponential.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009753, VkglTestCase_009753_1, VkglTestCase_009753_2);

#define VkglTestCase_009754_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009754_2 "random.exponential.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009754, VkglTestCase_009754_1, VkglTestCase_009754_2);

#define VkglTestCase_009755_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009755_2 "random.exponential.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009755, VkglTestCase_009755_1, VkglTestCase_009755_2);

#define VkglTestCase_009756_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009756_2 "random.exponential.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009756, VkglTestCase_009756_1, VkglTestCase_009756_2);

#define VkglTestCase_009757_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009757_2 "random.exponential.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009757, VkglTestCase_009757_1, VkglTestCase_009757_2);

#define VkglTestCase_009758_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009758_2 "random.exponential.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009758, VkglTestCase_009758_1, VkglTestCase_009758_2);

#define VkglTestCase_009759_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009759_2 "random.exponential.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009759, VkglTestCase_009759_1, VkglTestCase_009759_2);

#define VkglTestCase_009760_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009760_2 "random.exponential.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009760, VkglTestCase_009760_1, VkglTestCase_009760_2);

#define VkglTestCase_009761_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009761_2 "random.exponential.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009761, VkglTestCase_009761_1, VkglTestCase_009761_2);

#define VkglTestCase_009762_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009762_2 "random.exponential.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009762, VkglTestCase_009762_1, VkglTestCase_009762_2);

#define VkglTestCase_009763_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009763_2 "random.exponential.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009763, VkglTestCase_009763_1, VkglTestCase_009763_2);

#define VkglTestCase_009764_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009764_2 "random.exponential.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009764, VkglTestCase_009764_1, VkglTestCase_009764_2);

#define VkglTestCase_009765_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009765_2 "random.exponential.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009765, VkglTestCase_009765_1, VkglTestCase_009765_2);

#define VkglTestCase_009766_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009766_2 "random.exponential.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009766, VkglTestCase_009766_1, VkglTestCase_009766_2);

#define VkglTestCase_009767_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009767_2 "random.exponential.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009767, VkglTestCase_009767_1, VkglTestCase_009767_2);

#define VkglTestCase_009768_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009768_2 "random.exponential.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009768, VkglTestCase_009768_1, VkglTestCase_009768_2);

#define VkglTestCase_009769_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009769_2 "random.exponential.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009769, VkglTestCase_009769_1, VkglTestCase_009769_2);

#define VkglTestCase_009770_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009770_2 "random.exponential.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009770, VkglTestCase_009770_1, VkglTestCase_009770_2);

#define VkglTestCase_009771_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009771_2 "random.exponential.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009771, VkglTestCase_009771_1, VkglTestCase_009771_2);

#define VkglTestCase_009772_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009772_2 "random.exponential.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009772, VkglTestCase_009772_1, VkglTestCase_009772_2);

#define VkglTestCase_009773_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009773_2 "random.exponential.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009773, VkglTestCase_009773_1, VkglTestCase_009773_2);

#define VkglTestCase_009774_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009774_2 "random.exponential.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009774, VkglTestCase_009774_1, VkglTestCase_009774_2);

#define VkglTestCase_009775_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009775_2 "random.exponential.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009775, VkglTestCase_009775_1, VkglTestCase_009775_2);

#define VkglTestCase_009776_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009776_2 "random.exponential.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009776, VkglTestCase_009776_1, VkglTestCase_009776_2);

#define VkglTestCase_009777_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009777_2 "random.exponential.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009777, VkglTestCase_009777_1, VkglTestCase_009777_2);

#define VkglTestCase_009778_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009778_2 "random.exponential.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009778, VkglTestCase_009778_1, VkglTestCase_009778_2);

#define VkglTestCase_009779_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009779_2 "random.exponential.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009779, VkglTestCase_009779_1, VkglTestCase_009779_2);

#define VkglTestCase_009780_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009780_2 "random.exponential.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009780, VkglTestCase_009780_1, VkglTestCase_009780_2);

#define VkglTestCase_009781_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009781_2 "random.exponential.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009781, VkglTestCase_009781_1, VkglTestCase_009781_2);

#define VkglTestCase_009782_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009782_2 "random.exponential.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009782, VkglTestCase_009782_1, VkglTestCase_009782_2);

#define VkglTestCase_009783_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009783_2 "random.exponential.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009783, VkglTestCase_009783_1, VkglTestCase_009783_2);

#define VkglTestCase_009784_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009784_2 "random.exponential.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009784, VkglTestCase_009784_1, VkglTestCase_009784_2);

#define VkglTestCase_009785_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009785_2 "random.exponential.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009785, VkglTestCase_009785_1, VkglTestCase_009785_2);

#define VkglTestCase_009786_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009786_2 "random.exponential.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009786, VkglTestCase_009786_1, VkglTestCase_009786_2);

#define VkglTestCase_009787_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009787_2 "random.exponential.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009787, VkglTestCase_009787_1, VkglTestCase_009787_2);

#define VkglTestCase_009788_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009788_2 "random.exponential.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009788, VkglTestCase_009788_1, VkglTestCase_009788_2);

#define VkglTestCase_009789_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009789_2 "random.exponential.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009789, VkglTestCase_009789_1, VkglTestCase_009789_2);

#define VkglTestCase_009790_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009790_2 "random.exponential.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009790, VkglTestCase_009790_1, VkglTestCase_009790_2);

#define VkglTestCase_009791_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009791_2 "random.exponential.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009791, VkglTestCase_009791_1, VkglTestCase_009791_2);

#define VkglTestCase_009792_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009792_2 "random.exponential.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009792, VkglTestCase_009792_1, VkglTestCase_009792_2);

#define VkglTestCase_009793_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009793_2 "random.exponential.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009793, VkglTestCase_009793_1, VkglTestCase_009793_2);

#define VkglTestCase_009794_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009794_2 "random.exponential.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009794, VkglTestCase_009794_1, VkglTestCase_009794_2);

#define VkglTestCase_009795_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009795_2 "random.exponential.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009795, VkglTestCase_009795_1, VkglTestCase_009795_2);

#define VkglTestCase_009796_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009796_2 "random.exponential.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009796, VkglTestCase_009796_1, VkglTestCase_009796_2);

#define VkglTestCase_009797_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009797_2 "random.exponential.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009797, VkglTestCase_009797_1, VkglTestCase_009797_2);

#define VkglTestCase_009798_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009798_2 "random.exponential.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009798, VkglTestCase_009798_1, VkglTestCase_009798_2);

#define VkglTestCase_009799_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009799_2 "random.exponential.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009799, VkglTestCase_009799_1, VkglTestCase_009799_2);

#define VkglTestCase_009800_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009800_2 "random.exponential.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009800, VkglTestCase_009800_1, VkglTestCase_009800_2);

#define VkglTestCase_009801_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009801_2 "random.exponential.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009801, VkglTestCase_009801_1, VkglTestCase_009801_2);

#define VkglTestCase_009802_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009802_2 "random.exponential.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009802, VkglTestCase_009802_1, VkglTestCase_009802_2);

#define VkglTestCase_009803_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009803_2 "random.exponential.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009803, VkglTestCase_009803_1, VkglTestCase_009803_2);

#define VkglTestCase_009804_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009804_2 "random.exponential.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009804, VkglTestCase_009804_1, VkglTestCase_009804_2);

#define VkglTestCase_009805_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009805_2 "random.exponential.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009805, VkglTestCase_009805_1, VkglTestCase_009805_2);

#define VkglTestCase_009806_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009806_2 "random.exponential.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009806, VkglTestCase_009806_1, VkglTestCase_009806_2);

#define VkglTestCase_009807_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009807_2 "random.exponential.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009807, VkglTestCase_009807_1, VkglTestCase_009807_2);

#define VkglTestCase_009808_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009808_2 "random.exponential.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009808, VkglTestCase_009808_1, VkglTestCase_009808_2);

#define VkglTestCase_009809_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009809_2 "random.exponential.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009809, VkglTestCase_009809_1, VkglTestCase_009809_2);

#define VkglTestCase_009810_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009810_2 "random.exponential.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009810, VkglTestCase_009810_1, VkglTestCase_009810_2);

#define VkglTestCase_009811_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009811_2 "random.exponential.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009811, VkglTestCase_009811_1, VkglTestCase_009811_2);

#define VkglTestCase_009812_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009812_2 "random.exponential.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009812, VkglTestCase_009812_1, VkglTestCase_009812_2);

#define VkglTestCase_009813_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009813_2 "random.exponential.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009813, VkglTestCase_009813_1, VkglTestCase_009813_2);

#define VkglTestCase_009814_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009814_2 "random.exponential.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009814, VkglTestCase_009814_1, VkglTestCase_009814_2);

#define VkglTestCase_009815_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009815_2 "random.exponential.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009815, VkglTestCase_009815_1, VkglTestCase_009815_2);

#define VkglTestCase_009816_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009816_2 "random.exponential.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009816, VkglTestCase_009816_1, VkglTestCase_009816_2);

#define VkglTestCase_009817_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009817_2 "random.exponential.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009817, VkglTestCase_009817_1, VkglTestCase_009817_2);

#define VkglTestCase_009818_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009818_2 "random.exponential.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009818, VkglTestCase_009818_1, VkglTestCase_009818_2);

#define VkglTestCase_009819_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009819_2 "random.exponential.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009819, VkglTestCase_009819_1, VkglTestCase_009819_2);

#define VkglTestCase_009820_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009820_2 "random.exponential.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009820, VkglTestCase_009820_1, VkglTestCase_009820_2);

#define VkglTestCase_009821_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009821_2 "random.exponential.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009821, VkglTestCase_009821_1, VkglTestCase_009821_2);

#define VkglTestCase_009822_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009822_2 "random.exponential.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009822, VkglTestCase_009822_1, VkglTestCase_009822_2);

#define VkglTestCase_009823_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009823_2 "random.exponential.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009823, VkglTestCase_009823_1, VkglTestCase_009823_2);

#define VkglTestCase_009824_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009824_2 "random.exponential.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009824, VkglTestCase_009824_1, VkglTestCase_009824_2);

#define VkglTestCase_009825_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009825_2 "random.exponential.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009825, VkglTestCase_009825_1, VkglTestCase_009825_2);

#define VkglTestCase_009826_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009826_2 "random.exponential.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009826, VkglTestCase_009826_1, VkglTestCase_009826_2);

#define VkglTestCase_009827_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009827_2 "random.exponential.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009827, VkglTestCase_009827_1, VkglTestCase_009827_2);

#define VkglTestCase_009828_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009828_2 "random.exponential.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009828, VkglTestCase_009828_1, VkglTestCase_009828_2);

#define VkglTestCase_009829_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009829_2 "random.exponential.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009829, VkglTestCase_009829_1, VkglTestCase_009829_2);

#define VkglTestCase_009830_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009830_2 "random.exponential.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009830, VkglTestCase_009830_1, VkglTestCase_009830_2);

#define VkglTestCase_009831_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009831_2 "random.exponential.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009831, VkglTestCase_009831_1, VkglTestCase_009831_2);
