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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010811_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010811_2 "ication.texsubimage2d_align.2d_l8_1_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010811, VkglTestCase_010811_1, VkglTestCase_010811_2);

#define VkglTestCase_010812_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010812_2 "ication.texsubimage2d_align.2d_l8_1_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010812, VkglTestCase_010812_1, VkglTestCase_010812_2);

#define VkglTestCase_010813_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010813_2 "ication.texsubimage2d_align.2d_l8_1_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010813, VkglTestCase_010813_1, VkglTestCase_010813_2);

#define VkglTestCase_010814_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010814_2 "ication.texsubimage2d_align.2d_l8_1_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010814, VkglTestCase_010814_1, VkglTestCase_010814_2);

#define VkglTestCase_010815_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010815_2 "cation.texsubimage2d_align.2d_l8_63_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010815, VkglTestCase_010815_1, VkglTestCase_010815_2);

#define VkglTestCase_010816_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010816_2 "cation.texsubimage2d_align.2d_l8_63_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010816, VkglTestCase_010816_1, VkglTestCase_010816_2);

#define VkglTestCase_010817_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010817_2 "cation.texsubimage2d_align.2d_l8_63_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010817, VkglTestCase_010817_1, VkglTestCase_010817_2);

#define VkglTestCase_010818_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010818_2 "cation.texsubimage2d_align.2d_l8_63_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010818, VkglTestCase_010818_1, VkglTestCase_010818_2);

#define VkglTestCase_010819_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010819_2 "ion.texsubimage2d_align.2d_rgba4444_51_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010819, VkglTestCase_010819_1, VkglTestCase_010819_2);

#define VkglTestCase_010820_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010820_2 "ion.texsubimage2d_align.2d_rgba4444_51_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010820, VkglTestCase_010820_1, VkglTestCase_010820_2);

#define VkglTestCase_010821_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010821_2 "ion.texsubimage2d_align.2d_rgba4444_51_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010821, VkglTestCase_010821_1, VkglTestCase_010821_2);

#define VkglTestCase_010822_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010822_2 "ion.texsubimage2d_align.2d_rgba4444_51_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010822, VkglTestCase_010822_1, VkglTestCase_010822_2);

#define VkglTestCase_010823_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010823_2 "tion.texsubimage2d_align.2d_rgb888_39_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010823, VkglTestCase_010823_1, VkglTestCase_010823_2);

#define VkglTestCase_010824_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010824_2 "tion.texsubimage2d_align.2d_rgb888_39_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010824, VkglTestCase_010824_1, VkglTestCase_010824_2);

#define VkglTestCase_010825_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010825_2 "tion.texsubimage2d_align.2d_rgb888_39_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010825, VkglTestCase_010825_1, VkglTestCase_010825_2);

#define VkglTestCase_010826_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010826_2 "tion.texsubimage2d_align.2d_rgb888_39_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010826, VkglTestCase_010826_1, VkglTestCase_010826_2);

#define VkglTestCase_010827_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010827_2 "ion.texsubimage2d_align.2d_rgba8888_47_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010827, VkglTestCase_010827_1, VkglTestCase_010827_2);

#define VkglTestCase_010828_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010828_2 "ion.texsubimage2d_align.2d_rgba8888_47_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010828, VkglTestCase_010828_1, VkglTestCase_010828_2);

#define VkglTestCase_010829_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010829_2 "ion.texsubimage2d_align.2d_rgba8888_47_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010829, VkglTestCase_010829_1, VkglTestCase_010829_2);

#define VkglTestCase_010830_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010830_2 "ion.texsubimage2d_align.2d_rgba8888_47_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010830, VkglTestCase_010830_1, VkglTestCase_010830_2);

#define VkglTestCase_010831_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010831_2 "cation.texsubimage2d_align.cube_l8_1_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010831, VkglTestCase_010831_1, VkglTestCase_010831_2);

#define VkglTestCase_010832_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010832_2 "cation.texsubimage2d_align.cube_l8_1_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010832, VkglTestCase_010832_1, VkglTestCase_010832_2);

#define VkglTestCase_010833_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010833_2 "cation.texsubimage2d_align.cube_l8_1_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010833, VkglTestCase_010833_1, VkglTestCase_010833_2);

#define VkglTestCase_010834_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010834_2 "cation.texsubimage2d_align.cube_l8_1_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010834, VkglTestCase_010834_1, VkglTestCase_010834_2);

#define VkglTestCase_010835_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010835_2 "ation.texsubimage2d_align.cube_l8_63_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010835, VkglTestCase_010835_1, VkglTestCase_010835_2);

#define VkglTestCase_010836_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010836_2 "ation.texsubimage2d_align.cube_l8_63_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010836, VkglTestCase_010836_1, VkglTestCase_010836_2);

#define VkglTestCase_010837_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010837_2 "ation.texsubimage2d_align.cube_l8_63_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010837, VkglTestCase_010837_1, VkglTestCase_010837_2);

#define VkglTestCase_010838_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010838_2 "ation.texsubimage2d_align.cube_l8_63_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010838, VkglTestCase_010838_1, VkglTestCase_010838_2);

#define VkglTestCase_010839_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010839_2 "on.texsubimage2d_align.cube_rgba4444_51_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010839, VkglTestCase_010839_1, VkglTestCase_010839_2);

#define VkglTestCase_010840_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010840_2 "on.texsubimage2d_align.cube_rgba4444_51_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010840, VkglTestCase_010840_1, VkglTestCase_010840_2);

#define VkglTestCase_010841_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010841_2 "on.texsubimage2d_align.cube_rgba4444_51_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010841, VkglTestCase_010841_1, VkglTestCase_010841_2);

#define VkglTestCase_010842_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010842_2 "on.texsubimage2d_align.cube_rgba4444_51_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010842, VkglTestCase_010842_1, VkglTestCase_010842_2);

#define VkglTestCase_010843_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010843_2 "ion.texsubimage2d_align.cube_rgb888_39_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010843, VkglTestCase_010843_1, VkglTestCase_010843_2);

#define VkglTestCase_010844_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010844_2 "ion.texsubimage2d_align.cube_rgb888_39_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010844, VkglTestCase_010844_1, VkglTestCase_010844_2);

#define VkglTestCase_010845_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010845_2 "ion.texsubimage2d_align.cube_rgb888_39_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010845, VkglTestCase_010845_1, VkglTestCase_010845_2);

#define VkglTestCase_010846_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010846_2 "ion.texsubimage2d_align.cube_rgb888_39_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010846, VkglTestCase_010846_1, VkglTestCase_010846_2);

#define VkglTestCase_010847_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010847_2 "on.texsubimage2d_align.cube_rgba8888_47_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010847, VkglTestCase_010847_1, VkglTestCase_010847_2);

#define VkglTestCase_010848_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010848_2 "on.texsubimage2d_align.cube_rgba8888_47_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010848, VkglTestCase_010848_1, VkglTestCase_010848_2);

#define VkglTestCase_010849_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010849_2 "on.texsubimage2d_align.cube_rgba8888_47_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010849, VkglTestCase_010849_1, VkglTestCase_010849_2);

#define VkglTestCase_010850_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010850_2 "on.texsubimage2d_align.cube_rgba8888_47_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010850, VkglTestCase_010850_1, VkglTestCase_010850_2);
