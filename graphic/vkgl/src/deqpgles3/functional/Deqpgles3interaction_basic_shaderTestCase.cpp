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
#include "../ActsDeqpgles30031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030718_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030718_2 "_ops.interaction.basic_shader.0"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030718, VkglTestCase_030718_1, VkglTestCase_030718_2);

#define VkglTestCase_030719_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030719_2 "_ops.interaction.basic_shader.1"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030719, VkglTestCase_030719_1, VkglTestCase_030719_2);

#define VkglTestCase_030720_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030720_2 "_ops.interaction.basic_shader.2"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030720, VkglTestCase_030720_1, VkglTestCase_030720_2);

#define VkglTestCase_030721_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030721_2 "_ops.interaction.basic_shader.3"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030721, VkglTestCase_030721_1, VkglTestCase_030721_2);

#define VkglTestCase_030722_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030722_2 "_ops.interaction.basic_shader.5"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030722, VkglTestCase_030722_1, VkglTestCase_030722_2);

#define VkglTestCase_030723_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030723_2 "_ops.interaction.basic_shader.6"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030723, VkglTestCase_030723_1, VkglTestCase_030723_2);

#define VkglTestCase_030724_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030724_2 "_ops.interaction.basic_shader.7"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030724, VkglTestCase_030724_1, VkglTestCase_030724_2);

#define VkglTestCase_030725_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030725_2 "_ops.interaction.basic_shader.8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030725, VkglTestCase_030725_1, VkglTestCase_030725_2);

#define VkglTestCase_030726_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030726_2 "_ops.interaction.basic_shader.9"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030726, VkglTestCase_030726_1, VkglTestCase_030726_2);

#define VkglTestCase_030727_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030727_2 "ops.interaction.basic_shader.10"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030727, VkglTestCase_030727_1, VkglTestCase_030727_2);

#define VkglTestCase_030728_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030728_2 "ops.interaction.basic_shader.11"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030728, VkglTestCase_030728_1, VkglTestCase_030728_2);

#define VkglTestCase_030729_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030729_2 "ops.interaction.basic_shader.12"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030729, VkglTestCase_030729_1, VkglTestCase_030729_2);

#define VkglTestCase_030730_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030730_2 "ops.interaction.basic_shader.13"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030730, VkglTestCase_030730_1, VkglTestCase_030730_2);

#define VkglTestCase_030731_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030731_2 "ops.interaction.basic_shader.14"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030731, VkglTestCase_030731_1, VkglTestCase_030731_2);

#define VkglTestCase_030732_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030732_2 "ops.interaction.basic_shader.15"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030732, VkglTestCase_030732_1, VkglTestCase_030732_2);

#define VkglTestCase_030733_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030733_2 "ops.interaction.basic_shader.16"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030733, VkglTestCase_030733_1, VkglTestCase_030733_2);

#define VkglTestCase_030734_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030734_2 "ops.interaction.basic_shader.17"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030734, VkglTestCase_030734_1, VkglTestCase_030734_2);

#define VkglTestCase_030735_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030735_2 "ops.interaction.basic_shader.18"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030735, VkglTestCase_030735_1, VkglTestCase_030735_2);

#define VkglTestCase_030736_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030736_2 "ops.interaction.basic_shader.19"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030736, VkglTestCase_030736_1, VkglTestCase_030736_2);

#define VkglTestCase_030737_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030737_2 "ops.interaction.basic_shader.21"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030737, VkglTestCase_030737_1, VkglTestCase_030737_2);

#define VkglTestCase_030738_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030738_2 "ops.interaction.basic_shader.22"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030738, VkglTestCase_030738_1, VkglTestCase_030738_2);

#define VkglTestCase_030739_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030739_2 "ops.interaction.basic_shader.23"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030739, VkglTestCase_030739_1, VkglTestCase_030739_2);

#define VkglTestCase_030740_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030740_2 "ops.interaction.basic_shader.24"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030740, VkglTestCase_030740_1, VkglTestCase_030740_2);

#define VkglTestCase_030741_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030741_2 "ops.interaction.basic_shader.25"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030741, VkglTestCase_030741_1, VkglTestCase_030741_2);

#define VkglTestCase_030742_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030742_2 "ops.interaction.basic_shader.26"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030742, VkglTestCase_030742_1, VkglTestCase_030742_2);

#define VkglTestCase_030743_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030743_2 "ops.interaction.basic_shader.27"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030743, VkglTestCase_030743_1, VkglTestCase_030743_2);

#define VkglTestCase_030744_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030744_2 "ops.interaction.basic_shader.28"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030744, VkglTestCase_030744_1, VkglTestCase_030744_2);

#define VkglTestCase_030745_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030745_2 "ops.interaction.basic_shader.29"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030745, VkglTestCase_030745_1, VkglTestCase_030745_2);

#define VkglTestCase_030746_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030746_2 "ops.interaction.basic_shader.30"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030746, VkglTestCase_030746_1, VkglTestCase_030746_2);

#define VkglTestCase_030747_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030747_2 "ops.interaction.basic_shader.31"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030747, VkglTestCase_030747_1, VkglTestCase_030747_2);

#define VkglTestCase_030748_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030748_2 "ops.interaction.basic_shader.32"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030748, VkglTestCase_030748_1, VkglTestCase_030748_2);

#define VkglTestCase_030749_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030749_2 "ops.interaction.basic_shader.33"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030749, VkglTestCase_030749_1, VkglTestCase_030749_2);

#define VkglTestCase_030750_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030750_2 "ops.interaction.basic_shader.34"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030750, VkglTestCase_030750_1, VkglTestCase_030750_2);

#define VkglTestCase_030751_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030751_2 "ops.interaction.basic_shader.35"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030751, VkglTestCase_030751_1, VkglTestCase_030751_2);

#define VkglTestCase_030752_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030752_2 "ops.interaction.basic_shader.36"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030752, VkglTestCase_030752_1, VkglTestCase_030752_2);

#define VkglTestCase_030753_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030753_2 "ops.interaction.basic_shader.37"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030753, VkglTestCase_030753_1, VkglTestCase_030753_2);

#define VkglTestCase_030754_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030754_2 "ops.interaction.basic_shader.38"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030754, VkglTestCase_030754_1, VkglTestCase_030754_2);

#define VkglTestCase_030755_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030755_2 "ops.interaction.basic_shader.39"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030755, VkglTestCase_030755_1, VkglTestCase_030755_2);

#define VkglTestCase_030756_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030756_2 "ops.interaction.basic_shader.40"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030756, VkglTestCase_030756_1, VkglTestCase_030756_2);

#define VkglTestCase_030757_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030757_2 "ops.interaction.basic_shader.41"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030757, VkglTestCase_030757_1, VkglTestCase_030757_2);

#define VkglTestCase_030758_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030758_2 "ops.interaction.basic_shader.42"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030758, VkglTestCase_030758_1, VkglTestCase_030758_2);

#define VkglTestCase_030759_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030759_2 "ops.interaction.basic_shader.43"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030759, VkglTestCase_030759_1, VkglTestCase_030759_2);

#define VkglTestCase_030760_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030760_2 "ops.interaction.basic_shader.44"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030760, VkglTestCase_030760_1, VkglTestCase_030760_2);

#define VkglTestCase_030761_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030761_2 "ops.interaction.basic_shader.45"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030761, VkglTestCase_030761_1, VkglTestCase_030761_2);

#define VkglTestCase_030762_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030762_2 "ops.interaction.basic_shader.46"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030762, VkglTestCase_030762_1, VkglTestCase_030762_2);

#define VkglTestCase_030763_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030763_2 "ops.interaction.basic_shader.47"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030763, VkglTestCase_030763_1, VkglTestCase_030763_2);

#define VkglTestCase_030764_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030764_2 "ops.interaction.basic_shader.48"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030764, VkglTestCase_030764_1, VkglTestCase_030764_2);

#define VkglTestCase_030765_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030765_2 "ops.interaction.basic_shader.49"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030765, VkglTestCase_030765_1, VkglTestCase_030765_2);

#define VkglTestCase_030766_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030766_2 "ops.interaction.basic_shader.50"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030766, VkglTestCase_030766_1, VkglTestCase_030766_2);

#define VkglTestCase_030767_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030767_2 "ops.interaction.basic_shader.51"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030767, VkglTestCase_030767_1, VkglTestCase_030767_2);

#define VkglTestCase_030768_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030768_2 "ops.interaction.basic_shader.52"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030768, VkglTestCase_030768_1, VkglTestCase_030768_2);

#define VkglTestCase_030769_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030769_2 "ops.interaction.basic_shader.53"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030769, VkglTestCase_030769_1, VkglTestCase_030769_2);

#define VkglTestCase_030770_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030770_2 "ops.interaction.basic_shader.54"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030770, VkglTestCase_030770_1, VkglTestCase_030770_2);

#define VkglTestCase_030771_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030771_2 "ops.interaction.basic_shader.55"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030771, VkglTestCase_030771_1, VkglTestCase_030771_2);

#define VkglTestCase_030772_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030772_2 "ops.interaction.basic_shader.56"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030772, VkglTestCase_030772_1, VkglTestCase_030772_2);

#define VkglTestCase_030773_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030773_2 "ops.interaction.basic_shader.57"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030773, VkglTestCase_030773_1, VkglTestCase_030773_2);

#define VkglTestCase_030774_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030774_2 "ops.interaction.basic_shader.58"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030774, VkglTestCase_030774_1, VkglTestCase_030774_2);

#define VkglTestCase_030775_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030775_2 "ops.interaction.basic_shader.59"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030775, VkglTestCase_030775_1, VkglTestCase_030775_2);

#define VkglTestCase_030776_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030776_2 "ops.interaction.basic_shader.60"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030776, VkglTestCase_030776_1, VkglTestCase_030776_2);

#define VkglTestCase_030777_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030777_2 "ops.interaction.basic_shader.61"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030777, VkglTestCase_030777_1, VkglTestCase_030777_2);

#define VkglTestCase_030778_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030778_2 "ops.interaction.basic_shader.62"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030778, VkglTestCase_030778_1, VkglTestCase_030778_2);

#define VkglTestCase_030779_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030779_2 "ops.interaction.basic_shader.63"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030779, VkglTestCase_030779_1, VkglTestCase_030779_2);

#define VkglTestCase_030780_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030780_2 "ops.interaction.basic_shader.64"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030780, VkglTestCase_030780_1, VkglTestCase_030780_2);

#define VkglTestCase_030781_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030781_2 "ops.interaction.basic_shader.65"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030781, VkglTestCase_030781_1, VkglTestCase_030781_2);

#define VkglTestCase_030782_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030782_2 "ops.interaction.basic_shader.66"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030782, VkglTestCase_030782_1, VkglTestCase_030782_2);

#define VkglTestCase_030783_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030783_2 "ops.interaction.basic_shader.67"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030783, VkglTestCase_030783_1, VkglTestCase_030783_2);

#define VkglTestCase_030784_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030784_2 "ops.interaction.basic_shader.68"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030784, VkglTestCase_030784_1, VkglTestCase_030784_2);

#define VkglTestCase_030785_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030785_2 "ops.interaction.basic_shader.69"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030785, VkglTestCase_030785_1, VkglTestCase_030785_2);

#define VkglTestCase_030786_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030786_2 "ops.interaction.basic_shader.70"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030786, VkglTestCase_030786_1, VkglTestCase_030786_2);

#define VkglTestCase_030787_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030787_2 "ops.interaction.basic_shader.71"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030787, VkglTestCase_030787_1, VkglTestCase_030787_2);

#define VkglTestCase_030788_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030788_2 "ops.interaction.basic_shader.72"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030788, VkglTestCase_030788_1, VkglTestCase_030788_2);

#define VkglTestCase_030789_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030789_2 "ops.interaction.basic_shader.73"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030789, VkglTestCase_030789_1, VkglTestCase_030789_2);

#define VkglTestCase_030790_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030790_2 "ops.interaction.basic_shader.74"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030790, VkglTestCase_030790_1, VkglTestCase_030790_2);

#define VkglTestCase_030791_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030791_2 "ops.interaction.basic_shader.75"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030791, VkglTestCase_030791_1, VkglTestCase_030791_2);

#define VkglTestCase_030792_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030792_2 "ops.interaction.basic_shader.76"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030792, VkglTestCase_030792_1, VkglTestCase_030792_2);

#define VkglTestCase_030793_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030793_2 "ops.interaction.basic_shader.77"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030793, VkglTestCase_030793_1, VkglTestCase_030793_2);

#define VkglTestCase_030794_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030794_2 "ops.interaction.basic_shader.78"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030794, VkglTestCase_030794_1, VkglTestCase_030794_2);

#define VkglTestCase_030795_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030795_2 "ops.interaction.basic_shader.79"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030795, VkglTestCase_030795_1, VkglTestCase_030795_2);

#define VkglTestCase_030796_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030796_2 "ops.interaction.basic_shader.80"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030796, VkglTestCase_030796_1, VkglTestCase_030796_2);

#define VkglTestCase_030797_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030797_2 "ops.interaction.basic_shader.81"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030797, VkglTestCase_030797_1, VkglTestCase_030797_2);

#define VkglTestCase_030798_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030798_2 "ops.interaction.basic_shader.82"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030798, VkglTestCase_030798_1, VkglTestCase_030798_2);

#define VkglTestCase_030799_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030799_2 "ops.interaction.basic_shader.83"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030799, VkglTestCase_030799_1, VkglTestCase_030799_2);

#define VkglTestCase_030800_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030800_2 "ops.interaction.basic_shader.84"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030800, VkglTestCase_030800_1, VkglTestCase_030800_2);

#define VkglTestCase_030801_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030801_2 "ops.interaction.basic_shader.85"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030801, VkglTestCase_030801_1, VkglTestCase_030801_2);

#define VkglTestCase_030802_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030802_2 "ops.interaction.basic_shader.86"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030802, VkglTestCase_030802_1, VkglTestCase_030802_2);

#define VkglTestCase_030803_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030803_2 "ops.interaction.basic_shader.87"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030803, VkglTestCase_030803_1, VkglTestCase_030803_2);

#define VkglTestCase_030804_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030804_2 "ops.interaction.basic_shader.88"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030804, VkglTestCase_030804_1, VkglTestCase_030804_2);

#define VkglTestCase_030805_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030805_2 "ops.interaction.basic_shader.89"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030805, VkglTestCase_030805_1, VkglTestCase_030805_2);

#define VkglTestCase_030806_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030806_2 "ops.interaction.basic_shader.90"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030806, VkglTestCase_030806_1, VkglTestCase_030806_2);

#define VkglTestCase_030807_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030807_2 "ops.interaction.basic_shader.91"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030807, VkglTestCase_030807_1, VkglTestCase_030807_2);

#define VkglTestCase_030808_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030808_2 "ops.interaction.basic_shader.92"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030808, VkglTestCase_030808_1, VkglTestCase_030808_2);

#define VkglTestCase_030809_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030809_2 "ops.interaction.basic_shader.93"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030809, VkglTestCase_030809_1, VkglTestCase_030809_2);

#define VkglTestCase_030810_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030810_2 "ops.interaction.basic_shader.94"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030810, VkglTestCase_030810_1, VkglTestCase_030810_2);

#define VkglTestCase_030811_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030811_2 "ops.interaction.basic_shader.95"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030811, VkglTestCase_030811_1, VkglTestCase_030811_2);

#define VkglTestCase_030812_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030812_2 "ops.interaction.basic_shader.96"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030812, VkglTestCase_030812_1, VkglTestCase_030812_2);

#define VkglTestCase_030813_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030813_2 "ops.interaction.basic_shader.97"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030813, VkglTestCase_030813_1, VkglTestCase_030813_2);

#define VkglTestCase_030814_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030814_2 "ops.interaction.basic_shader.98"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030814, VkglTestCase_030814_1, VkglTestCase_030814_2);

#define VkglTestCase_030815_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030815_2 "ops.interaction.basic_shader.99"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030815, VkglTestCase_030815_1, VkglTestCase_030815_2);
