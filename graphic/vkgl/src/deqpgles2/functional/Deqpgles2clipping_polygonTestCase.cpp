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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015727_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015727_2 "olygon.poly_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015727, VkglTestCase_015727_1, VkglTestCase_015727_2);

#define VkglTestCase_015728_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015728_2 "olygon.poly_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015728, VkglTestCase_015728_1, VkglTestCase_015728_2);

#define VkglTestCase_015729_1 "dEQP-GLES2.functional.cli"
#define VkglTestCase_015729_2 "pping.polygon.poly_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015729, VkglTestCase_015729_1, VkglTestCase_015729_2);

#define VkglTestCase_015730_1 "dEQP-GLES2.functional.clipping.po"
#define VkglTestCase_015730_2 "lygon.poly_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015730, VkglTestCase_015730_1, VkglTestCase_015730_2);

#define VkglTestCase_015731_1 "dEQP-GLES2.functional.clipping.po"
#define VkglTestCase_015731_2 "lygon.poly_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015731, VkglTestCase_015731_1, VkglTestCase_015731_2);

#define VkglTestCase_015732_1 "dEQP-GLES2.functional.clipping.poly"
#define VkglTestCase_015732_2 "gon.large_poly_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015732, VkglTestCase_015732_1, VkglTestCase_015732_2);

#define VkglTestCase_015733_1 "dEQP-GLES2.functional.clipping.poly"
#define VkglTestCase_015733_2 "gon.large_poly_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015733, VkglTestCase_015733_1, VkglTestCase_015733_2);

#define VkglTestCase_015734_1 "dEQP-GLES2.functional.clippi"
#define VkglTestCase_015734_2 "ng.polygon.large_poly_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015734, VkglTestCase_015734_1, VkglTestCase_015734_2);

#define VkglTestCase_015735_1 "dEQP-GLES2.functional.clipping.polyg"
#define VkglTestCase_015735_2 "on.large_poly_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015735, VkglTestCase_015735_1, VkglTestCase_015735_2);

#define VkglTestCase_015736_1 "dEQP-GLES2.functional.clipping.polyg"
#define VkglTestCase_015736_2 "on.large_poly_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015736, VkglTestCase_015736_1, VkglTestCase_015736_2);

#define VkglTestCase_015737_1 "dEQP-GLES2.functional.clipp"
#define VkglTestCase_015737_2 "ing.polygon.poly_attrib_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015737, VkglTestCase_015737_1, VkglTestCase_015737_2);

#define VkglTestCase_015738_1 "dEQP-GLES2.functional.clipping.poly"
#define VkglTestCase_015738_2 "gon.poly_attrib_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015738, VkglTestCase_015738_1, VkglTestCase_015738_2);

#define VkglTestCase_015739_1 "dEQP-GLES2.functional.clipping.poly"
#define VkglTestCase_015739_2 "gon.poly_attrib_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015739, VkglTestCase_015739_1, VkglTestCase_015739_2);

#define VkglTestCase_015740_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015740_2 "ipping.polygon.multiple_0"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015740, VkglTestCase_015740_1, VkglTestCase_015740_2);

#define VkglTestCase_015741_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015741_2 "olygon.multiple_0_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015741, VkglTestCase_015741_1, VkglTestCase_015741_2);

#define VkglTestCase_015742_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015742_2 "olygon.multiple_0_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015742, VkglTestCase_015742_1, VkglTestCase_015742_2);

#define VkglTestCase_015743_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015743_2 "ipping.polygon.multiple_1"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015743, VkglTestCase_015743_1, VkglTestCase_015743_2);

#define VkglTestCase_015744_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015744_2 "olygon.multiple_1_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015744, VkglTestCase_015744_1, VkglTestCase_015744_2);

#define VkglTestCase_015745_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015745_2 "olygon.multiple_1_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015745, VkglTestCase_015745_1, VkglTestCase_015745_2);

#define VkglTestCase_015746_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015746_2 "ipping.polygon.multiple_2"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015746, VkglTestCase_015746_1, VkglTestCase_015746_2);

#define VkglTestCase_015747_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015747_2 "olygon.multiple_2_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015747, VkglTestCase_015747_1, VkglTestCase_015747_2);

#define VkglTestCase_015748_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015748_2 "olygon.multiple_2_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015748, VkglTestCase_015748_1, VkglTestCase_015748_2);

#define VkglTestCase_015749_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015749_2 "ipping.polygon.multiple_3"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015749, VkglTestCase_015749_1, VkglTestCase_015749_2);

#define VkglTestCase_015750_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015750_2 "olygon.multiple_3_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015750, VkglTestCase_015750_1, VkglTestCase_015750_2);

#define VkglTestCase_015751_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015751_2 "olygon.multiple_3_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015751, VkglTestCase_015751_1, VkglTestCase_015751_2);

#define VkglTestCase_015752_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015752_2 "ipping.polygon.multiple_4"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015752, VkglTestCase_015752_1, VkglTestCase_015752_2);

#define VkglTestCase_015753_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015753_2 "olygon.multiple_4_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015753, VkglTestCase_015753_1, VkglTestCase_015753_2);

#define VkglTestCase_015754_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015754_2 "olygon.multiple_4_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015754, VkglTestCase_015754_1, VkglTestCase_015754_2);

#define VkglTestCase_015755_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015755_2 "ipping.polygon.multiple_5"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015755, VkglTestCase_015755_1, VkglTestCase_015755_2);

#define VkglTestCase_015756_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015756_2 "olygon.multiple_5_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015756, VkglTestCase_015756_1, VkglTestCase_015756_2);

#define VkglTestCase_015757_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015757_2 "olygon.multiple_5_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015757, VkglTestCase_015757_1, VkglTestCase_015757_2);

#define VkglTestCase_015758_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015758_2 "ipping.polygon.multiple_6"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015758, VkglTestCase_015758_1, VkglTestCase_015758_2);

#define VkglTestCase_015759_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015759_2 "olygon.multiple_6_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015759, VkglTestCase_015759_1, VkglTestCase_015759_2);

#define VkglTestCase_015760_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015760_2 "olygon.multiple_6_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015760, VkglTestCase_015760_1, VkglTestCase_015760_2);

#define VkglTestCase_015761_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015761_2 "ipping.polygon.multiple_7"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015761, VkglTestCase_015761_1, VkglTestCase_015761_2);

#define VkglTestCase_015762_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015762_2 "olygon.multiple_7_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015762, VkglTestCase_015762_1, VkglTestCase_015762_2);

#define VkglTestCase_015763_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015763_2 "olygon.multiple_7_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015763, VkglTestCase_015763_1, VkglTestCase_015763_2);

#define VkglTestCase_015764_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015764_2 "ipping.polygon.multiple_8"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015764, VkglTestCase_015764_1, VkglTestCase_015764_2);

#define VkglTestCase_015765_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015765_2 "olygon.multiple_8_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015765, VkglTestCase_015765_1, VkglTestCase_015765_2);

#define VkglTestCase_015766_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015766_2 "olygon.multiple_8_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015766, VkglTestCase_015766_1, VkglTestCase_015766_2);

#define VkglTestCase_015767_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015767_2 "ipping.polygon.multiple_9"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015767, VkglTestCase_015767_1, VkglTestCase_015767_2);

#define VkglTestCase_015768_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015768_2 "olygon.multiple_9_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015768, VkglTestCase_015768_1, VkglTestCase_015768_2);

#define VkglTestCase_015769_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015769_2 "olygon.multiple_9_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015769, VkglTestCase_015769_1, VkglTestCase_015769_2);

#define VkglTestCase_015770_1 "dEQP-GLES2.functional.cli"
#define VkglTestCase_015770_2 "pping.polygon.multiple_10"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015770, VkglTestCase_015770_1, VkglTestCase_015770_2);

#define VkglTestCase_015771_1 "dEQP-GLES2.functional.clipping.po"
#define VkglTestCase_015771_2 "lygon.multiple_10_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015771, VkglTestCase_015771_1, VkglTestCase_015771_2);

#define VkglTestCase_015772_1 "dEQP-GLES2.functional.clipping.po"
#define VkglTestCase_015772_2 "lygon.multiple_10_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015772, VkglTestCase_015772_1, VkglTestCase_015772_2);

#define VkglTestCase_015773_1 "dEQP-GLES2.functional.cli"
#define VkglTestCase_015773_2 "pping.polygon.multiple_11"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015773, VkglTestCase_015773_1, VkglTestCase_015773_2);

#define VkglTestCase_015774_1 "dEQP-GLES2.functional.clipping.po"
#define VkglTestCase_015774_2 "lygon.multiple_11_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015774, VkglTestCase_015774_1, VkglTestCase_015774_2);

#define VkglTestCase_015775_1 "dEQP-GLES2.functional.clipping.po"
#define VkglTestCase_015775_2 "lygon.multiple_11_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015775, VkglTestCase_015775_1, VkglTestCase_015775_2);
