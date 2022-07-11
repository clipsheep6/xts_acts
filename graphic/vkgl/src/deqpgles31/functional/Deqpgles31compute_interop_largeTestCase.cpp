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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007798_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007798_2 "p.large.drawarrays_separate_grid_100x100_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007798, VkglTestCase_007798_1, VkglTestCase_007798_2);

#define VkglTestCase_007799_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007799_2 "p.large.drawarrays_separate_grid_200x200_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007799, VkglTestCase_007799_1, VkglTestCase_007799_2);

#define VkglTestCase_007800_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007800_2 "p.large.drawarrays_separate_grid_500x500_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007800, VkglTestCase_007800_1, VkglTestCase_007800_2);

#define VkglTestCase_007801_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007801_2 ".large.drawarrays_separate_grid_1000x1000_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007801, VkglTestCase_007801_1, VkglTestCase_007801_2);

#define VkglTestCase_007802_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007802_2 ".large.drawarrays_separate_grid_1200x1200_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007802, VkglTestCase_007802_1, VkglTestCase_007802_2);

#define VkglTestCase_007803_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007803_2 ".large.drawarrays_separate_grid_1500x1500_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007803, VkglTestCase_007803_1, VkglTestCase_007803_2);

#define VkglTestCase_007804_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007804_2 "p.large.drawarrays_separate_grid_100x100_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007804, VkglTestCase_007804_1, VkglTestCase_007804_2);

#define VkglTestCase_007805_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007805_2 "p.large.drawarrays_separate_grid_200x200_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007805, VkglTestCase_007805_1, VkglTestCase_007805_2);

#define VkglTestCase_007806_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007806_2 "p.large.drawarrays_separate_grid_500x500_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007806, VkglTestCase_007806_1, VkglTestCase_007806_2);

#define VkglTestCase_007807_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007807_2 ".large.drawarrays_separate_grid_1000x1000_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007807, VkglTestCase_007807_1, VkglTestCase_007807_2);

#define VkglTestCase_007808_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007808_2 ".large.drawarrays_separate_grid_1200x1200_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007808, VkglTestCase_007808_1, VkglTestCase_007808_2);

#define VkglTestCase_007809_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007809_2 ".large.drawarrays_separate_grid_1500x1500_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007809, VkglTestCase_007809_1, VkglTestCase_007809_2);

#define VkglTestCase_007810_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007810_2 ".large.drawarrays_separate_grid_100x100_drawcount_200"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007810, VkglTestCase_007810_1, VkglTestCase_007810_2);

#define VkglTestCase_007811_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007811_2 ".large.drawarrays_separate_grid_200x200_drawcount_800"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007811, VkglTestCase_007811_1, VkglTestCase_007811_2);

#define VkglTestCase_007812_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007812_2 "large.drawarrays_separate_grid_500x500_drawcount_2500"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007812, VkglTestCase_007812_1, VkglTestCase_007812_2);

#define VkglTestCase_007813_1 "dEQP-GLES31.functional.draw_indirect.compute_interop.l"
#define VkglTestCase_007813_2 "arge.drawarrays_separate_grid_1000x1000_drawcount_5000"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007813, VkglTestCase_007813_1, VkglTestCase_007813_2);

#define VkglTestCase_007814_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007814_2 "p.large.drawarrays_combined_grid_100x100_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007814, VkglTestCase_007814_1, VkglTestCase_007814_2);

#define VkglTestCase_007815_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007815_2 "p.large.drawarrays_combined_grid_200x200_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007815, VkglTestCase_007815_1, VkglTestCase_007815_2);

#define VkglTestCase_007816_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007816_2 "p.large.drawarrays_combined_grid_500x500_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007816, VkglTestCase_007816_1, VkglTestCase_007816_2);

#define VkglTestCase_007817_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007817_2 ".large.drawarrays_combined_grid_1000x1000_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007817, VkglTestCase_007817_1, VkglTestCase_007817_2);

#define VkglTestCase_007818_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007818_2 ".large.drawarrays_combined_grid_1200x1200_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007818, VkglTestCase_007818_1, VkglTestCase_007818_2);

#define VkglTestCase_007819_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007819_2 ".large.drawarrays_combined_grid_1500x1500_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007819, VkglTestCase_007819_1, VkglTestCase_007819_2);

#define VkglTestCase_007820_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007820_2 "p.large.drawarrays_combined_grid_100x100_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007820, VkglTestCase_007820_1, VkglTestCase_007820_2);

#define VkglTestCase_007821_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007821_2 "p.large.drawarrays_combined_grid_200x200_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007821, VkglTestCase_007821_1, VkglTestCase_007821_2);

#define VkglTestCase_007822_1 "dEQP-GLES31.functional.draw_indirect.compute_intero"
#define VkglTestCase_007822_2 "p.large.drawarrays_combined_grid_500x500_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007822, VkglTestCase_007822_1, VkglTestCase_007822_2);

#define VkglTestCase_007823_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007823_2 ".large.drawarrays_combined_grid_1000x1000_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007823, VkglTestCase_007823_1, VkglTestCase_007823_2);

#define VkglTestCase_007824_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007824_2 ".large.drawarrays_combined_grid_1200x1200_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007824, VkglTestCase_007824_1, VkglTestCase_007824_2);

#define VkglTestCase_007825_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007825_2 ".large.drawarrays_combined_grid_1500x1500_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007825, VkglTestCase_007825_1, VkglTestCase_007825_2);

#define VkglTestCase_007826_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007826_2 ".large.drawarrays_combined_grid_100x100_drawcount_200"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007826, VkglTestCase_007826_1, VkglTestCase_007826_2);

#define VkglTestCase_007827_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007827_2 ".large.drawarrays_combined_grid_200x200_drawcount_800"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007827, VkglTestCase_007827_1, VkglTestCase_007827_2);

#define VkglTestCase_007828_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007828_2 "large.drawarrays_combined_grid_500x500_drawcount_2500"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007828, VkglTestCase_007828_1, VkglTestCase_007828_2);

#define VkglTestCase_007829_1 "dEQP-GLES31.functional.draw_indirect.compute_interop.l"
#define VkglTestCase_007829_2 "arge.drawarrays_combined_grid_1000x1000_drawcount_5000"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007829, VkglTestCase_007829_1, VkglTestCase_007829_2);

#define VkglTestCase_007830_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007830_2 ".large.drawelements_separate_grid_100x100_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007830, VkglTestCase_007830_1, VkglTestCase_007830_2);

#define VkglTestCase_007831_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007831_2 ".large.drawelements_separate_grid_200x200_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007831, VkglTestCase_007831_1, VkglTestCase_007831_2);

#define VkglTestCase_007832_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007832_2 ".large.drawelements_separate_grid_500x500_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007832, VkglTestCase_007832_1, VkglTestCase_007832_2);

#define VkglTestCase_007833_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007833_2 "large.drawelements_separate_grid_1000x1000_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007833, VkglTestCase_007833_1, VkglTestCase_007833_2);

#define VkglTestCase_007834_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007834_2 "large.drawelements_separate_grid_1200x1200_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007834, VkglTestCase_007834_1, VkglTestCase_007834_2);

#define VkglTestCase_007835_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007835_2 "large.drawelements_separate_grid_1500x1500_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007835, VkglTestCase_007835_1, VkglTestCase_007835_2);

#define VkglTestCase_007836_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007836_2 ".large.drawelements_separate_grid_100x100_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007836, VkglTestCase_007836_1, VkglTestCase_007836_2);

#define VkglTestCase_007837_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007837_2 ".large.drawelements_separate_grid_200x200_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007837, VkglTestCase_007837_1, VkglTestCase_007837_2);

#define VkglTestCase_007838_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007838_2 ".large.drawelements_separate_grid_500x500_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007838, VkglTestCase_007838_1, VkglTestCase_007838_2);

#define VkglTestCase_007839_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007839_2 "large.drawelements_separate_grid_1000x1000_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007839, VkglTestCase_007839_1, VkglTestCase_007839_2);

#define VkglTestCase_007840_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007840_2 "large.drawelements_separate_grid_1200x1200_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007840, VkglTestCase_007840_1, VkglTestCase_007840_2);

#define VkglTestCase_007841_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007841_2 "large.drawelements_separate_grid_1500x1500_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007841, VkglTestCase_007841_1, VkglTestCase_007841_2);

#define VkglTestCase_007842_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007842_2 "large.drawelements_separate_grid_100x100_drawcount_200"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007842, VkglTestCase_007842_1, VkglTestCase_007842_2);

#define VkglTestCase_007843_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007843_2 "large.drawelements_separate_grid_200x200_drawcount_800"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007843, VkglTestCase_007843_1, VkglTestCase_007843_2);

#define VkglTestCase_007844_1 "dEQP-GLES31.functional.draw_indirect.compute_interop.l"
#define VkglTestCase_007844_2 "arge.drawelements_separate_grid_500x500_drawcount_2500"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007844, VkglTestCase_007844_1, VkglTestCase_007844_2);

#define VkglTestCase_007845_1 "dEQP-GLES31.functional.draw_indirect.compute_interop.la"
#define VkglTestCase_007845_2 "rge.drawelements_separate_grid_1000x1000_drawcount_5000"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007845, VkglTestCase_007845_1, VkglTestCase_007845_2);

#define VkglTestCase_007846_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007846_2 ".large.drawelements_combined_grid_100x100_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007846, VkglTestCase_007846_1, VkglTestCase_007846_2);

#define VkglTestCase_007847_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007847_2 ".large.drawelements_combined_grid_200x200_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007847, VkglTestCase_007847_1, VkglTestCase_007847_2);

#define VkglTestCase_007848_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007848_2 ".large.drawelements_combined_grid_500x500_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007848, VkglTestCase_007848_1, VkglTestCase_007848_2);

#define VkglTestCase_007849_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007849_2 "large.drawelements_combined_grid_1000x1000_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007849, VkglTestCase_007849_1, VkglTestCase_007849_2);

#define VkglTestCase_007850_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007850_2 "large.drawelements_combined_grid_1200x1200_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007850, VkglTestCase_007850_1, VkglTestCase_007850_2);

#define VkglTestCase_007851_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007851_2 "large.drawelements_combined_grid_1500x1500_drawcount_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007851, VkglTestCase_007851_1, VkglTestCase_007851_2);

#define VkglTestCase_007852_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007852_2 ".large.drawelements_combined_grid_100x100_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007852, VkglTestCase_007852_1, VkglTestCase_007852_2);

#define VkglTestCase_007853_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007853_2 ".large.drawelements_combined_grid_200x200_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007853, VkglTestCase_007853_1, VkglTestCase_007853_2);

#define VkglTestCase_007854_1 "dEQP-GLES31.functional.draw_indirect.compute_interop"
#define VkglTestCase_007854_2 ".large.drawelements_combined_grid_500x500_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007854, VkglTestCase_007854_1, VkglTestCase_007854_2);

#define VkglTestCase_007855_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007855_2 "large.drawelements_combined_grid_1000x1000_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007855, VkglTestCase_007855_1, VkglTestCase_007855_2);

#define VkglTestCase_007856_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007856_2 "large.drawelements_combined_grid_1200x1200_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007856, VkglTestCase_007856_1, VkglTestCase_007856_2);

#define VkglTestCase_007857_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007857_2 "large.drawelements_combined_grid_1500x1500_drawcount_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007857, VkglTestCase_007857_1, VkglTestCase_007857_2);

#define VkglTestCase_007858_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007858_2 "large.drawelements_combined_grid_100x100_drawcount_200"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007858, VkglTestCase_007858_1, VkglTestCase_007858_2);

#define VkglTestCase_007859_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007859_2 "large.drawelements_combined_grid_200x200_drawcount_800"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007859, VkglTestCase_007859_1, VkglTestCase_007859_2);

#define VkglTestCase_007860_1 "dEQP-GLES31.functional.draw_indirect.compute_interop.l"
#define VkglTestCase_007860_2 "arge.drawelements_combined_grid_500x500_drawcount_2500"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007860, VkglTestCase_007860_1, VkglTestCase_007860_2);

#define VkglTestCase_007861_1 "dEQP-GLES31.functional.draw_indirect.compute_interop.la"
#define VkglTestCase_007861_2 "rge.drawelements_combined_grid_1000x1000_drawcount_5000"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007861, VkglTestCase_007861_1, VkglTestCase_007861_2);
