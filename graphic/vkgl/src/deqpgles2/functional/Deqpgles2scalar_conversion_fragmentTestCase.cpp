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

#define VkglTestCase_008732_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008732_2 "ndom.scalar_conversion.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008732, VkglTestCase_008732_1, VkglTestCase_008732_2);

#define VkglTestCase_008733_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008733_2 "ndom.scalar_conversion.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008733, VkglTestCase_008733_1, VkglTestCase_008733_2);

#define VkglTestCase_008734_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008734_2 "ndom.scalar_conversion.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008734, VkglTestCase_008734_1, VkglTestCase_008734_2);

#define VkglTestCase_008735_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008735_2 "ndom.scalar_conversion.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008735, VkglTestCase_008735_1, VkglTestCase_008735_2);

#define VkglTestCase_008736_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008736_2 "ndom.scalar_conversion.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008736, VkglTestCase_008736_1, VkglTestCase_008736_2);

#define VkglTestCase_008737_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008737_2 "ndom.scalar_conversion.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008737, VkglTestCase_008737_1, VkglTestCase_008737_2);

#define VkglTestCase_008738_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008738_2 "ndom.scalar_conversion.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008738, VkglTestCase_008738_1, VkglTestCase_008738_2);

#define VkglTestCase_008739_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008739_2 "ndom.scalar_conversion.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008739, VkglTestCase_008739_1, VkglTestCase_008739_2);

#define VkglTestCase_008740_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008740_2 "ndom.scalar_conversion.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008740, VkglTestCase_008740_1, VkglTestCase_008740_2);

#define VkglTestCase_008741_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008741_2 "ndom.scalar_conversion.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008741, VkglTestCase_008741_1, VkglTestCase_008741_2);

#define VkglTestCase_008742_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008742_2 "dom.scalar_conversion.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008742, VkglTestCase_008742_1, VkglTestCase_008742_2);

#define VkglTestCase_008743_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008743_2 "dom.scalar_conversion.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008743, VkglTestCase_008743_1, VkglTestCase_008743_2);

#define VkglTestCase_008744_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008744_2 "dom.scalar_conversion.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008744, VkglTestCase_008744_1, VkglTestCase_008744_2);

#define VkglTestCase_008745_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008745_2 "dom.scalar_conversion.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008745, VkglTestCase_008745_1, VkglTestCase_008745_2);

#define VkglTestCase_008746_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008746_2 "dom.scalar_conversion.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008746, VkglTestCase_008746_1, VkglTestCase_008746_2);

#define VkglTestCase_008747_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008747_2 "dom.scalar_conversion.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008747, VkglTestCase_008747_1, VkglTestCase_008747_2);

#define VkglTestCase_008748_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008748_2 "dom.scalar_conversion.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008748, VkglTestCase_008748_1, VkglTestCase_008748_2);

#define VkglTestCase_008749_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008749_2 "dom.scalar_conversion.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008749, VkglTestCase_008749_1, VkglTestCase_008749_2);

#define VkglTestCase_008750_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008750_2 "dom.scalar_conversion.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008750, VkglTestCase_008750_1, VkglTestCase_008750_2);

#define VkglTestCase_008751_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008751_2 "dom.scalar_conversion.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008751, VkglTestCase_008751_1, VkglTestCase_008751_2);

#define VkglTestCase_008752_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008752_2 "dom.scalar_conversion.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008752, VkglTestCase_008752_1, VkglTestCase_008752_2);

#define VkglTestCase_008753_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008753_2 "dom.scalar_conversion.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008753, VkglTestCase_008753_1, VkglTestCase_008753_2);

#define VkglTestCase_008754_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008754_2 "dom.scalar_conversion.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008754, VkglTestCase_008754_1, VkglTestCase_008754_2);

#define VkglTestCase_008755_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008755_2 "dom.scalar_conversion.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008755, VkglTestCase_008755_1, VkglTestCase_008755_2);

#define VkglTestCase_008756_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008756_2 "dom.scalar_conversion.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008756, VkglTestCase_008756_1, VkglTestCase_008756_2);

#define VkglTestCase_008757_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008757_2 "dom.scalar_conversion.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008757, VkglTestCase_008757_1, VkglTestCase_008757_2);

#define VkglTestCase_008758_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008758_2 "dom.scalar_conversion.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008758, VkglTestCase_008758_1, VkglTestCase_008758_2);

#define VkglTestCase_008759_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008759_2 "dom.scalar_conversion.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008759, VkglTestCase_008759_1, VkglTestCase_008759_2);

#define VkglTestCase_008760_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008760_2 "dom.scalar_conversion.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008760, VkglTestCase_008760_1, VkglTestCase_008760_2);

#define VkglTestCase_008761_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008761_2 "dom.scalar_conversion.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008761, VkglTestCase_008761_1, VkglTestCase_008761_2);

#define VkglTestCase_008762_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008762_2 "dom.scalar_conversion.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008762, VkglTestCase_008762_1, VkglTestCase_008762_2);

#define VkglTestCase_008763_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008763_2 "dom.scalar_conversion.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008763, VkglTestCase_008763_1, VkglTestCase_008763_2);

#define VkglTestCase_008764_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008764_2 "dom.scalar_conversion.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008764, VkglTestCase_008764_1, VkglTestCase_008764_2);

#define VkglTestCase_008765_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008765_2 "dom.scalar_conversion.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008765, VkglTestCase_008765_1, VkglTestCase_008765_2);

#define VkglTestCase_008766_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008766_2 "dom.scalar_conversion.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008766, VkglTestCase_008766_1, VkglTestCase_008766_2);

#define VkglTestCase_008767_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008767_2 "dom.scalar_conversion.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008767, VkglTestCase_008767_1, VkglTestCase_008767_2);

#define VkglTestCase_008768_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008768_2 "dom.scalar_conversion.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008768, VkglTestCase_008768_1, VkglTestCase_008768_2);

#define VkglTestCase_008769_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008769_2 "dom.scalar_conversion.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008769, VkglTestCase_008769_1, VkglTestCase_008769_2);

#define VkglTestCase_008770_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008770_2 "dom.scalar_conversion.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008770, VkglTestCase_008770_1, VkglTestCase_008770_2);

#define VkglTestCase_008771_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008771_2 "dom.scalar_conversion.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008771, VkglTestCase_008771_1, VkglTestCase_008771_2);

#define VkglTestCase_008772_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008772_2 "dom.scalar_conversion.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008772, VkglTestCase_008772_1, VkglTestCase_008772_2);

#define VkglTestCase_008773_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008773_2 "dom.scalar_conversion.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008773, VkglTestCase_008773_1, VkglTestCase_008773_2);

#define VkglTestCase_008774_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008774_2 "dom.scalar_conversion.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008774, VkglTestCase_008774_1, VkglTestCase_008774_2);

#define VkglTestCase_008775_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008775_2 "dom.scalar_conversion.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008775, VkglTestCase_008775_1, VkglTestCase_008775_2);

#define VkglTestCase_008776_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008776_2 "dom.scalar_conversion.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008776, VkglTestCase_008776_1, VkglTestCase_008776_2);

#define VkglTestCase_008777_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008777_2 "dom.scalar_conversion.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008777, VkglTestCase_008777_1, VkglTestCase_008777_2);

#define VkglTestCase_008778_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008778_2 "dom.scalar_conversion.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008778, VkglTestCase_008778_1, VkglTestCase_008778_2);

#define VkglTestCase_008779_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008779_2 "dom.scalar_conversion.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008779, VkglTestCase_008779_1, VkglTestCase_008779_2);

#define VkglTestCase_008780_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008780_2 "dom.scalar_conversion.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008780, VkglTestCase_008780_1, VkglTestCase_008780_2);

#define VkglTestCase_008781_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008781_2 "dom.scalar_conversion.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008781, VkglTestCase_008781_1, VkglTestCase_008781_2);

#define VkglTestCase_008782_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008782_2 "dom.scalar_conversion.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008782, VkglTestCase_008782_1, VkglTestCase_008782_2);

#define VkglTestCase_008783_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008783_2 "dom.scalar_conversion.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008783, VkglTestCase_008783_1, VkglTestCase_008783_2);

#define VkglTestCase_008784_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008784_2 "dom.scalar_conversion.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008784, VkglTestCase_008784_1, VkglTestCase_008784_2);

#define VkglTestCase_008785_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008785_2 "dom.scalar_conversion.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008785, VkglTestCase_008785_1, VkglTestCase_008785_2);

#define VkglTestCase_008786_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008786_2 "dom.scalar_conversion.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008786, VkglTestCase_008786_1, VkglTestCase_008786_2);

#define VkglTestCase_008787_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008787_2 "dom.scalar_conversion.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008787, VkglTestCase_008787_1, VkglTestCase_008787_2);

#define VkglTestCase_008788_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008788_2 "dom.scalar_conversion.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008788, VkglTestCase_008788_1, VkglTestCase_008788_2);

#define VkglTestCase_008789_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008789_2 "dom.scalar_conversion.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008789, VkglTestCase_008789_1, VkglTestCase_008789_2);

#define VkglTestCase_008790_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008790_2 "dom.scalar_conversion.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008790, VkglTestCase_008790_1, VkglTestCase_008790_2);

#define VkglTestCase_008791_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008791_2 "dom.scalar_conversion.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008791, VkglTestCase_008791_1, VkglTestCase_008791_2);

#define VkglTestCase_008792_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008792_2 "dom.scalar_conversion.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008792, VkglTestCase_008792_1, VkglTestCase_008792_2);

#define VkglTestCase_008793_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008793_2 "dom.scalar_conversion.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008793, VkglTestCase_008793_1, VkglTestCase_008793_2);

#define VkglTestCase_008794_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008794_2 "dom.scalar_conversion.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008794, VkglTestCase_008794_1, VkglTestCase_008794_2);

#define VkglTestCase_008795_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008795_2 "dom.scalar_conversion.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008795, VkglTestCase_008795_1, VkglTestCase_008795_2);

#define VkglTestCase_008796_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008796_2 "dom.scalar_conversion.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008796, VkglTestCase_008796_1, VkglTestCase_008796_2);

#define VkglTestCase_008797_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008797_2 "dom.scalar_conversion.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008797, VkglTestCase_008797_1, VkglTestCase_008797_2);

#define VkglTestCase_008798_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008798_2 "dom.scalar_conversion.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008798, VkglTestCase_008798_1, VkglTestCase_008798_2);

#define VkglTestCase_008799_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008799_2 "dom.scalar_conversion.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008799, VkglTestCase_008799_1, VkglTestCase_008799_2);

#define VkglTestCase_008800_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008800_2 "dom.scalar_conversion.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008800, VkglTestCase_008800_1, VkglTestCase_008800_2);

#define VkglTestCase_008801_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008801_2 "dom.scalar_conversion.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008801, VkglTestCase_008801_1, VkglTestCase_008801_2);

#define VkglTestCase_008802_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008802_2 "dom.scalar_conversion.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008802, VkglTestCase_008802_1, VkglTestCase_008802_2);

#define VkglTestCase_008803_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008803_2 "dom.scalar_conversion.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008803, VkglTestCase_008803_1, VkglTestCase_008803_2);

#define VkglTestCase_008804_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008804_2 "dom.scalar_conversion.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008804, VkglTestCase_008804_1, VkglTestCase_008804_2);

#define VkglTestCase_008805_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008805_2 "dom.scalar_conversion.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008805, VkglTestCase_008805_1, VkglTestCase_008805_2);

#define VkglTestCase_008806_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008806_2 "dom.scalar_conversion.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008806, VkglTestCase_008806_1, VkglTestCase_008806_2);

#define VkglTestCase_008807_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008807_2 "dom.scalar_conversion.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008807, VkglTestCase_008807_1, VkglTestCase_008807_2);

#define VkglTestCase_008808_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008808_2 "dom.scalar_conversion.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008808, VkglTestCase_008808_1, VkglTestCase_008808_2);

#define VkglTestCase_008809_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008809_2 "dom.scalar_conversion.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008809, VkglTestCase_008809_1, VkglTestCase_008809_2);

#define VkglTestCase_008810_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008810_2 "dom.scalar_conversion.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008810, VkglTestCase_008810_1, VkglTestCase_008810_2);

#define VkglTestCase_008811_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008811_2 "dom.scalar_conversion.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008811, VkglTestCase_008811_1, VkglTestCase_008811_2);

#define VkglTestCase_008812_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008812_2 "dom.scalar_conversion.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008812, VkglTestCase_008812_1, VkglTestCase_008812_2);

#define VkglTestCase_008813_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008813_2 "dom.scalar_conversion.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008813, VkglTestCase_008813_1, VkglTestCase_008813_2);

#define VkglTestCase_008814_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008814_2 "dom.scalar_conversion.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008814, VkglTestCase_008814_1, VkglTestCase_008814_2);

#define VkglTestCase_008815_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008815_2 "dom.scalar_conversion.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008815, VkglTestCase_008815_1, VkglTestCase_008815_2);

#define VkglTestCase_008816_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008816_2 "dom.scalar_conversion.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008816, VkglTestCase_008816_1, VkglTestCase_008816_2);

#define VkglTestCase_008817_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008817_2 "dom.scalar_conversion.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008817, VkglTestCase_008817_1, VkglTestCase_008817_2);

#define VkglTestCase_008818_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008818_2 "dom.scalar_conversion.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008818, VkglTestCase_008818_1, VkglTestCase_008818_2);

#define VkglTestCase_008819_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008819_2 "dom.scalar_conversion.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008819, VkglTestCase_008819_1, VkglTestCase_008819_2);

#define VkglTestCase_008820_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008820_2 "dom.scalar_conversion.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008820, VkglTestCase_008820_1, VkglTestCase_008820_2);

#define VkglTestCase_008821_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008821_2 "dom.scalar_conversion.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008821, VkglTestCase_008821_1, VkglTestCase_008821_2);

#define VkglTestCase_008822_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008822_2 "dom.scalar_conversion.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008822, VkglTestCase_008822_1, VkglTestCase_008822_2);

#define VkglTestCase_008823_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008823_2 "dom.scalar_conversion.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008823, VkglTestCase_008823_1, VkglTestCase_008823_2);

#define VkglTestCase_008824_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008824_2 "dom.scalar_conversion.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008824, VkglTestCase_008824_1, VkglTestCase_008824_2);

#define VkglTestCase_008825_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008825_2 "dom.scalar_conversion.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008825, VkglTestCase_008825_1, VkglTestCase_008825_2);

#define VkglTestCase_008826_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008826_2 "dom.scalar_conversion.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008826, VkglTestCase_008826_1, VkglTestCase_008826_2);

#define VkglTestCase_008827_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008827_2 "dom.scalar_conversion.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008827, VkglTestCase_008827_1, VkglTestCase_008827_2);

#define VkglTestCase_008828_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008828_2 "dom.scalar_conversion.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008828, VkglTestCase_008828_1, VkglTestCase_008828_2);

#define VkglTestCase_008829_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008829_2 "dom.scalar_conversion.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008829, VkglTestCase_008829_1, VkglTestCase_008829_2);

#define VkglTestCase_008830_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008830_2 "dom.scalar_conversion.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008830, VkglTestCase_008830_1, VkglTestCase_008830_2);

#define VkglTestCase_008831_1 "dEQP-GLES2.functional.shaders.ran"
#define VkglTestCase_008831_2 "dom.scalar_conversion.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008831, VkglTestCase_008831_1, VkglTestCase_008831_2);
