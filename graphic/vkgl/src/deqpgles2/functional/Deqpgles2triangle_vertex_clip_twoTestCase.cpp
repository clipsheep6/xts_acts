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

#define VkglTestCase_015811_1 "dEQP-GLES2.functional.clipping.triangl"
#define VkglTestCase_015811_2 "e_vertex.clip_two.clip_neg_x_and_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015811, VkglTestCase_015811_1, VkglTestCase_015811_2);

#define VkglTestCase_015812_1 "dEQP-GLES2.functional.clipping.triangl"
#define VkglTestCase_015812_2 "e_vertex.clip_two.clip_neg_x_and_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015812, VkglTestCase_015812_1, VkglTestCase_015812_2);

#define VkglTestCase_015813_1 "dEQP-GLES2.functional.clipping.triangl"
#define VkglTestCase_015813_2 "e_vertex.clip_two.clip_neg_x_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015813, VkglTestCase_015813_1, VkglTestCase_015813_2);

#define VkglTestCase_015814_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015814_2 "ertex.clip_two.clip_neg_x_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015814, VkglTestCase_015814_1, VkglTestCase_015814_2);

#define VkglTestCase_015815_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015815_2 "ertex.clip_two.clip_neg_x_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015815, VkglTestCase_015815_1, VkglTestCase_015815_2);

#define VkglTestCase_015816_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015816_2 "ertex.clip_two.clip_neg_x_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015816, VkglTestCase_015816_1, VkglTestCase_015816_2);

#define VkglTestCase_015817_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015817_2 "ertex.clip_two.clip_neg_x_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015817, VkglTestCase_015817_1, VkglTestCase_015817_2);

#define VkglTestCase_015818_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015818_2 "ertex.clip_two.clip_neg_x_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015818, VkglTestCase_015818_1, VkglTestCase_015818_2);

#define VkglTestCase_015819_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015819_2 "ertex.clip_two.clip_neg_x_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015819, VkglTestCase_015819_1, VkglTestCase_015819_2);

#define VkglTestCase_015820_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015820_2 "ertex.clip_two.clip_neg_x_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015820, VkglTestCase_015820_1, VkglTestCase_015820_2);

#define VkglTestCase_015821_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015821_2 "ertex.clip_two.clip_neg_x_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015821, VkglTestCase_015821_1, VkglTestCase_015821_2);

#define VkglTestCase_015822_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015822_2 "ex.clip_two.clip_neg_x_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015822, VkglTestCase_015822_1, VkglTestCase_015822_2);

#define VkglTestCase_015823_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015823_2 "ex.clip_two.clip_neg_x_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015823, VkglTestCase_015823_1, VkglTestCase_015823_2);

#define VkglTestCase_015824_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015824_2 "ex.clip_two.clip_neg_x_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015824, VkglTestCase_015824_1, VkglTestCase_015824_2);

#define VkglTestCase_015825_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015825_2 "ex.clip_two.clip_neg_x_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015825, VkglTestCase_015825_1, VkglTestCase_015825_2);

#define VkglTestCase_015826_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015826_2 "ex.clip_two.clip_neg_x_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015826, VkglTestCase_015826_1, VkglTestCase_015826_2);

#define VkglTestCase_015827_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015827_2 "ex.clip_two.clip_neg_x_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015827, VkglTestCase_015827_1, VkglTestCase_015827_2);

#define VkglTestCase_015828_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015828_2 "ex.clip_two.clip_neg_x_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015828, VkglTestCase_015828_1, VkglTestCase_015828_2);

#define VkglTestCase_015829_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015829_2 "ex.clip_two.clip_neg_x_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015829, VkglTestCase_015829_1, VkglTestCase_015829_2);

#define VkglTestCase_015830_1 "dEQP-GLES2.functional.clipping.triangl"
#define VkglTestCase_015830_2 "e_vertex.clip_two.clip_pos_x_and_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015830, VkglTestCase_015830_1, VkglTestCase_015830_2);

#define VkglTestCase_015831_1 "dEQP-GLES2.functional.clipping.triangl"
#define VkglTestCase_015831_2 "e_vertex.clip_two.clip_pos_x_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015831, VkglTestCase_015831_1, VkglTestCase_015831_2);

#define VkglTestCase_015832_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015832_2 "ertex.clip_two.clip_pos_x_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015832, VkglTestCase_015832_1, VkglTestCase_015832_2);

#define VkglTestCase_015833_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015833_2 "ertex.clip_two.clip_pos_x_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015833, VkglTestCase_015833_1, VkglTestCase_015833_2);

#define VkglTestCase_015834_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015834_2 "ertex.clip_two.clip_pos_x_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015834, VkglTestCase_015834_1, VkglTestCase_015834_2);

#define VkglTestCase_015835_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015835_2 "ertex.clip_two.clip_pos_x_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015835, VkglTestCase_015835_1, VkglTestCase_015835_2);

#define VkglTestCase_015836_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015836_2 "ertex.clip_two.clip_pos_x_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015836, VkglTestCase_015836_1, VkglTestCase_015836_2);

#define VkglTestCase_015837_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015837_2 "ertex.clip_two.clip_pos_x_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015837, VkglTestCase_015837_1, VkglTestCase_015837_2);

#define VkglTestCase_015838_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015838_2 "ertex.clip_two.clip_pos_x_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015838, VkglTestCase_015838_1, VkglTestCase_015838_2);

#define VkglTestCase_015839_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015839_2 "ertex.clip_two.clip_pos_x_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015839, VkglTestCase_015839_1, VkglTestCase_015839_2);

#define VkglTestCase_015840_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015840_2 "ex.clip_two.clip_pos_x_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015840, VkglTestCase_015840_1, VkglTestCase_015840_2);

#define VkglTestCase_015841_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015841_2 "ex.clip_two.clip_pos_x_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015841, VkglTestCase_015841_1, VkglTestCase_015841_2);

#define VkglTestCase_015842_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015842_2 "ex.clip_two.clip_pos_x_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015842, VkglTestCase_015842_1, VkglTestCase_015842_2);

#define VkglTestCase_015843_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015843_2 "ex.clip_two.clip_pos_x_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015843, VkglTestCase_015843_1, VkglTestCase_015843_2);

#define VkglTestCase_015844_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015844_2 "ex.clip_two.clip_pos_x_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015844, VkglTestCase_015844_1, VkglTestCase_015844_2);

#define VkglTestCase_015845_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015845_2 "ex.clip_two.clip_pos_x_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015845, VkglTestCase_015845_1, VkglTestCase_015845_2);

#define VkglTestCase_015846_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015846_2 "ex.clip_two.clip_pos_x_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015846, VkglTestCase_015846_1, VkglTestCase_015846_2);

#define VkglTestCase_015847_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015847_2 "ex.clip_two.clip_pos_x_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015847, VkglTestCase_015847_1, VkglTestCase_015847_2);

#define VkglTestCase_015848_1 "dEQP-GLES2.functional.clipping.triangl"
#define VkglTestCase_015848_2 "e_vertex.clip_two.clip_pos_y_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015848, VkglTestCase_015848_1, VkglTestCase_015848_2);

#define VkglTestCase_015849_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015849_2 "ertex.clip_two.clip_pos_y_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015849, VkglTestCase_015849_1, VkglTestCase_015849_2);

#define VkglTestCase_015850_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015850_2 "ertex.clip_two.clip_pos_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015850, VkglTestCase_015850_1, VkglTestCase_015850_2);

#define VkglTestCase_015851_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015851_2 "ertex.clip_two.clip_pos_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015851, VkglTestCase_015851_1, VkglTestCase_015851_2);

#define VkglTestCase_015852_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015852_2 "ertex.clip_two.clip_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015852, VkglTestCase_015852_1, VkglTestCase_015852_2);

#define VkglTestCase_015853_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015853_2 "ertex.clip_two.clip_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015853, VkglTestCase_015853_1, VkglTestCase_015853_2);

#define VkglTestCase_015854_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015854_2 "ertex.clip_two.clip_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015854, VkglTestCase_015854_1, VkglTestCase_015854_2);

#define VkglTestCase_015855_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015855_2 "ertex.clip_two.clip_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015855, VkglTestCase_015855_1, VkglTestCase_015855_2);

#define VkglTestCase_015856_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015856_2 "ertex.clip_two.clip_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015856, VkglTestCase_015856_1, VkglTestCase_015856_2);

#define VkglTestCase_015857_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015857_2 "ex.clip_two.clip_pos_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015857, VkglTestCase_015857_1, VkglTestCase_015857_2);

#define VkglTestCase_015858_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015858_2 "ex.clip_two.clip_pos_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015858, VkglTestCase_015858_1, VkglTestCase_015858_2);

#define VkglTestCase_015859_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015859_2 "ex.clip_two.clip_pos_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015859, VkglTestCase_015859_1, VkglTestCase_015859_2);

#define VkglTestCase_015860_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015860_2 "ex.clip_two.clip_pos_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015860, VkglTestCase_015860_1, VkglTestCase_015860_2);

#define VkglTestCase_015861_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015861_2 "ex.clip_two.clip_pos_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015861, VkglTestCase_015861_1, VkglTestCase_015861_2);

#define VkglTestCase_015862_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015862_2 "ex.clip_two.clip_pos_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015862, VkglTestCase_015862_1, VkglTestCase_015862_2);

#define VkglTestCase_015863_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015863_2 "ex.clip_two.clip_pos_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015863, VkglTestCase_015863_1, VkglTestCase_015863_2);

#define VkglTestCase_015864_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015864_2 "ex.clip_two.clip_pos_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015864, VkglTestCase_015864_1, VkglTestCase_015864_2);

#define VkglTestCase_015865_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015865_2 "ertex.clip_two.clip_neg_y_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015865, VkglTestCase_015865_1, VkglTestCase_015865_2);

#define VkglTestCase_015866_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015866_2 "ertex.clip_two.clip_neg_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015866, VkglTestCase_015866_1, VkglTestCase_015866_2);

#define VkglTestCase_015867_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015867_2 "ertex.clip_two.clip_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015867, VkglTestCase_015867_1, VkglTestCase_015867_2);

#define VkglTestCase_015868_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015868_2 "ertex.clip_two.clip_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015868, VkglTestCase_015868_1, VkglTestCase_015868_2);

#define VkglTestCase_015869_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015869_2 "ertex.clip_two.clip_neg_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015869, VkglTestCase_015869_1, VkglTestCase_015869_2);

#define VkglTestCase_015870_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015870_2 "ertex.clip_two.clip_neg_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015870, VkglTestCase_015870_1, VkglTestCase_015870_2);

#define VkglTestCase_015871_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015871_2 "ertex.clip_two.clip_neg_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015871, VkglTestCase_015871_1, VkglTestCase_015871_2);

#define VkglTestCase_015872_1 "dEQP-GLES2.functional.clipping.triangle_v"
#define VkglTestCase_015872_2 "ertex.clip_two.clip_neg_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015872, VkglTestCase_015872_1, VkglTestCase_015872_2);

#define VkglTestCase_015873_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015873_2 "ex.clip_two.clip_neg_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015873, VkglTestCase_015873_1, VkglTestCase_015873_2);

#define VkglTestCase_015874_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015874_2 "ex.clip_two.clip_neg_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015874, VkglTestCase_015874_1, VkglTestCase_015874_2);

#define VkglTestCase_015875_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015875_2 "ex.clip_two.clip_neg_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015875, VkglTestCase_015875_1, VkglTestCase_015875_2);

#define VkglTestCase_015876_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015876_2 "ex.clip_two.clip_neg_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015876, VkglTestCase_015876_1, VkglTestCase_015876_2);

#define VkglTestCase_015877_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015877_2 "ex.clip_two.clip_neg_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015877, VkglTestCase_015877_1, VkglTestCase_015877_2);

#define VkglTestCase_015878_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015878_2 "ex.clip_two.clip_neg_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015878, VkglTestCase_015878_1, VkglTestCase_015878_2);

#define VkglTestCase_015879_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015879_2 "ex.clip_two.clip_neg_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015879, VkglTestCase_015879_1, VkglTestCase_015879_2);

#define VkglTestCase_015880_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015880_2 "ex.clip_two.clip_neg_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015880, VkglTestCase_015880_1, VkglTestCase_015880_2);

#define VkglTestCase_015881_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015881_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015881, VkglTestCase_015881_1, VkglTestCase_015881_2);

#define VkglTestCase_015882_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015882_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015882, VkglTestCase_015882_1, VkglTestCase_015882_2);

#define VkglTestCase_015883_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015883_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015883, VkglTestCase_015883_1, VkglTestCase_015883_2);

#define VkglTestCase_015884_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015884_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015884, VkglTestCase_015884_1, VkglTestCase_015884_2);

#define VkglTestCase_015885_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015885_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015885, VkglTestCase_015885_1, VkglTestCase_015885_2);

#define VkglTestCase_015886_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015886_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015886, VkglTestCase_015886_1, VkglTestCase_015886_2);

#define VkglTestCase_015887_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015887_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015887, VkglTestCase_015887_1, VkglTestCase_015887_2);

#define VkglTestCase_015888_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015888_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015888, VkglTestCase_015888_1, VkglTestCase_015888_2);

#define VkglTestCase_015889_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015889_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015889, VkglTestCase_015889_1, VkglTestCase_015889_2);

#define VkglTestCase_015890_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015890_2 "ex.clip_two.clip_neg_x_neg_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015890, VkglTestCase_015890_1, VkglTestCase_015890_2);

#define VkglTestCase_015891_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015891_2 "ex.clip_two.clip_neg_x_neg_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015891, VkglTestCase_015891_1, VkglTestCase_015891_2);

#define VkglTestCase_015892_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015892_2 "clip_two.clip_neg_x_neg_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015892, VkglTestCase_015892_1, VkglTestCase_015892_2);

#define VkglTestCase_015893_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015893_2 "clip_two.clip_neg_x_neg_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015893, VkglTestCase_015893_1, VkglTestCase_015893_2);

#define VkglTestCase_015894_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015894_2 "clip_two.clip_neg_x_neg_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015894, VkglTestCase_015894_1, VkglTestCase_015894_2);

#define VkglTestCase_015895_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015895_2 "clip_two.clip_neg_x_neg_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015895, VkglTestCase_015895_1, VkglTestCase_015895_2);

#define VkglTestCase_015896_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015896_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015896, VkglTestCase_015896_1, VkglTestCase_015896_2);

#define VkglTestCase_015897_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015897_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015897, VkglTestCase_015897_1, VkglTestCase_015897_2);

#define VkglTestCase_015898_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015898_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015898, VkglTestCase_015898_1, VkglTestCase_015898_2);

#define VkglTestCase_015899_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015899_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015899, VkglTestCase_015899_1, VkglTestCase_015899_2);

#define VkglTestCase_015900_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015900_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015900, VkglTestCase_015900_1, VkglTestCase_015900_2);

#define VkglTestCase_015901_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015901_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015901, VkglTestCase_015901_1, VkglTestCase_015901_2);

#define VkglTestCase_015902_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015902_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015902, VkglTestCase_015902_1, VkglTestCase_015902_2);

#define VkglTestCase_015903_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015903_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015903, VkglTestCase_015903_1, VkglTestCase_015903_2);

#define VkglTestCase_015904_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015904_2 "ex.clip_two.clip_pos_x_neg_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015904, VkglTestCase_015904_1, VkglTestCase_015904_2);

#define VkglTestCase_015905_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015905_2 "ex.clip_two.clip_pos_x_neg_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015905, VkglTestCase_015905_1, VkglTestCase_015905_2);

#define VkglTestCase_015906_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015906_2 "clip_two.clip_pos_x_neg_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015906, VkglTestCase_015906_1, VkglTestCase_015906_2);

#define VkglTestCase_015907_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015907_2 "clip_two.clip_pos_x_neg_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015907, VkglTestCase_015907_1, VkglTestCase_015907_2);

#define VkglTestCase_015908_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015908_2 "clip_two.clip_pos_x_neg_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015908, VkglTestCase_015908_1, VkglTestCase_015908_2);

#define VkglTestCase_015909_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015909_2 "clip_two.clip_pos_x_neg_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015909, VkglTestCase_015909_1, VkglTestCase_015909_2);

#define VkglTestCase_015910_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015910_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015910, VkglTestCase_015910_1, VkglTestCase_015910_2);

#define VkglTestCase_015911_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015911_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015911, VkglTestCase_015911_1, VkglTestCase_015911_2);

#define VkglTestCase_015912_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015912_2 "ex.clip_two.clip_pos_x_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015912, VkglTestCase_015912_1, VkglTestCase_015912_2);

#define VkglTestCase_015913_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015913_2 "ex.clip_two.clip_pos_x_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015913, VkglTestCase_015913_1, VkglTestCase_015913_2);

#define VkglTestCase_015914_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015914_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015914, VkglTestCase_015914_1, VkglTestCase_015914_2);

#define VkglTestCase_015915_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015915_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015915, VkglTestCase_015915_1, VkglTestCase_015915_2);

#define VkglTestCase_015916_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015916_2 "ex.clip_two.clip_pos_x_pos_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015916, VkglTestCase_015916_1, VkglTestCase_015916_2);

#define VkglTestCase_015917_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015917_2 "ex.clip_two.clip_pos_x_pos_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015917, VkglTestCase_015917_1, VkglTestCase_015917_2);

#define VkglTestCase_015918_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015918_2 "ex.clip_two.clip_pos_x_pos_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015918, VkglTestCase_015918_1, VkglTestCase_015918_2);

#define VkglTestCase_015919_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015919_2 "clip_two.clip_pos_x_pos_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015919, VkglTestCase_015919_1, VkglTestCase_015919_2);

#define VkglTestCase_015920_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015920_2 "clip_two.clip_pos_x_pos_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015920, VkglTestCase_015920_1, VkglTestCase_015920_2);

#define VkglTestCase_015921_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015921_2 "clip_two.clip_pos_x_pos_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015921, VkglTestCase_015921_1, VkglTestCase_015921_2);

#define VkglTestCase_015922_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015922_2 "clip_two.clip_pos_x_pos_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015922, VkglTestCase_015922_1, VkglTestCase_015922_2);

#define VkglTestCase_015923_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015923_2 "ex.clip_two.clip_neg_x_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015923, VkglTestCase_015923_1, VkglTestCase_015923_2);

#define VkglTestCase_015924_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015924_2 "ex.clip_two.clip_neg_x_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015924, VkglTestCase_015924_1, VkglTestCase_015924_2);

#define VkglTestCase_015925_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015925_2 "ex.clip_two.clip_neg_x_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015925, VkglTestCase_015925_1, VkglTestCase_015925_2);

#define VkglTestCase_015926_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015926_2 "ex.clip_two.clip_neg_x_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015926, VkglTestCase_015926_1, VkglTestCase_015926_2);

#define VkglTestCase_015927_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015927_2 "ex.clip_two.clip_neg_x_pos_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015927, VkglTestCase_015927_1, VkglTestCase_015927_2);

#define VkglTestCase_015928_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015928_2 "ex.clip_two.clip_neg_x_pos_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015928, VkglTestCase_015928_1, VkglTestCase_015928_2);

#define VkglTestCase_015929_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015929_2 "ex.clip_two.clip_neg_x_pos_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015929, VkglTestCase_015929_1, VkglTestCase_015929_2);

#define VkglTestCase_015930_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015930_2 "ex.clip_two.clip_neg_x_pos_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015930, VkglTestCase_015930_1, VkglTestCase_015930_2);

#define VkglTestCase_015931_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015931_2 "clip_two.clip_neg_x_pos_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015931, VkglTestCase_015931_1, VkglTestCase_015931_2);

#define VkglTestCase_015932_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015932_2 "clip_two.clip_neg_x_pos_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015932, VkglTestCase_015932_1, VkglTestCase_015932_2);

#define VkglTestCase_015933_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015933_2 "clip_two.clip_neg_x_pos_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015933, VkglTestCase_015933_1, VkglTestCase_015933_2);

#define VkglTestCase_015934_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015934_2 "clip_two.clip_neg_x_pos_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015934, VkglTestCase_015934_1, VkglTestCase_015934_2);

#define VkglTestCase_015935_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015935_2 "ex.clip_two.clip_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015935, VkglTestCase_015935_1, VkglTestCase_015935_2);

#define VkglTestCase_015936_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015936_2 "ex.clip_two.clip_neg_x_neg_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015936, VkglTestCase_015936_1, VkglTestCase_015936_2);

#define VkglTestCase_015937_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015937_2 "ex.clip_two.clip_neg_x_neg_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015937, VkglTestCase_015937_1, VkglTestCase_015937_2);

#define VkglTestCase_015938_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015938_2 "ex.clip_two.clip_neg_x_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015938, VkglTestCase_015938_1, VkglTestCase_015938_2);

#define VkglTestCase_015939_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015939_2 "ex.clip_two.clip_neg_x_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015939, VkglTestCase_015939_1, VkglTestCase_015939_2);

#define VkglTestCase_015940_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015940_2 "clip_two.clip_neg_x_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015940, VkglTestCase_015940_1, VkglTestCase_015940_2);

#define VkglTestCase_015941_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015941_2 "clip_two.clip_neg_x_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015941, VkglTestCase_015941_1, VkglTestCase_015941_2);

#define VkglTestCase_015942_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015942_2 "clip_two.clip_neg_x_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015942, VkglTestCase_015942_1, VkglTestCase_015942_2);

#define VkglTestCase_015943_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015943_2 "clip_two.clip_neg_x_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015943, VkglTestCase_015943_1, VkglTestCase_015943_2);

#define VkglTestCase_015944_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015944_2 "clip_two.clip_neg_x_neg_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015944, VkglTestCase_015944_1, VkglTestCase_015944_2);

#define VkglTestCase_015945_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015945_2 "clip_two.clip_neg_x_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015945, VkglTestCase_015945_1, VkglTestCase_015945_2);

#define VkglTestCase_015946_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015946_2 "clip_two.clip_neg_x_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015946, VkglTestCase_015946_1, VkglTestCase_015946_2);

#define VkglTestCase_015947_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015947_2 "clip_two.clip_neg_x_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015947, VkglTestCase_015947_1, VkglTestCase_015947_2);

#define VkglTestCase_015948_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015948_2 "ex.clip_two.clip_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015948, VkglTestCase_015948_1, VkglTestCase_015948_2);

#define VkglTestCase_015949_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015949_2 "ex.clip_two.clip_pos_x_neg_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015949, VkglTestCase_015949_1, VkglTestCase_015949_2);

#define VkglTestCase_015950_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015950_2 "ex.clip_two.clip_pos_x_neg_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015950, VkglTestCase_015950_1, VkglTestCase_015950_2);

#define VkglTestCase_015951_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015951_2 "ex.clip_two.clip_pos_x_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015951, VkglTestCase_015951_1, VkglTestCase_015951_2);

#define VkglTestCase_015952_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015952_2 "ex.clip_two.clip_pos_x_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015952, VkglTestCase_015952_1, VkglTestCase_015952_2);

#define VkglTestCase_015953_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015953_2 "clip_two.clip_pos_x_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015953, VkglTestCase_015953_1, VkglTestCase_015953_2);

#define VkglTestCase_015954_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015954_2 "clip_two.clip_pos_x_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015954, VkglTestCase_015954_1, VkglTestCase_015954_2);

#define VkglTestCase_015955_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015955_2 "clip_two.clip_pos_x_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015955, VkglTestCase_015955_1, VkglTestCase_015955_2);

#define VkglTestCase_015956_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015956_2 "clip_two.clip_pos_x_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015956, VkglTestCase_015956_1, VkglTestCase_015956_2);

#define VkglTestCase_015957_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015957_2 "clip_two.clip_pos_x_neg_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015957, VkglTestCase_015957_1, VkglTestCase_015957_2);

#define VkglTestCase_015958_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015958_2 "clip_two.clip_pos_x_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015958, VkglTestCase_015958_1, VkglTestCase_015958_2);

#define VkglTestCase_015959_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015959_2 "clip_two.clip_pos_x_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015959, VkglTestCase_015959_1, VkglTestCase_015959_2);

#define VkglTestCase_015960_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015960_2 "clip_two.clip_pos_x_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015960, VkglTestCase_015960_1, VkglTestCase_015960_2);

#define VkglTestCase_015961_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015961_2 "ex.clip_two.clip_pos_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015961, VkglTestCase_015961_1, VkglTestCase_015961_2);

#define VkglTestCase_015962_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015962_2 "ex.clip_two.clip_pos_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015962, VkglTestCase_015962_1, VkglTestCase_015962_2);

#define VkglTestCase_015963_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015963_2 "ex.clip_two.clip_pos_x_pos_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015963, VkglTestCase_015963_1, VkglTestCase_015963_2);

#define VkglTestCase_015964_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015964_2 "ex.clip_two.clip_pos_x_pos_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015964, VkglTestCase_015964_1, VkglTestCase_015964_2);

#define VkglTestCase_015965_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015965_2 "clip_two.clip_pos_x_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015965, VkglTestCase_015965_1, VkglTestCase_015965_2);

#define VkglTestCase_015966_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015966_2 "clip_two.clip_pos_x_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015966, VkglTestCase_015966_1, VkglTestCase_015966_2);

#define VkglTestCase_015967_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015967_2 "clip_two.clip_pos_x_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015967, VkglTestCase_015967_1, VkglTestCase_015967_2);

#define VkglTestCase_015968_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015968_2 "clip_two.clip_pos_x_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015968, VkglTestCase_015968_1, VkglTestCase_015968_2);

#define VkglTestCase_015969_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015969_2 "clip_two.clip_pos_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015969, VkglTestCase_015969_1, VkglTestCase_015969_2);

#define VkglTestCase_015970_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015970_2 "clip_two.clip_pos_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015970, VkglTestCase_015970_1, VkglTestCase_015970_2);

#define VkglTestCase_015971_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015971_2 "clip_two.clip_pos_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015971, VkglTestCase_015971_1, VkglTestCase_015971_2);

#define VkglTestCase_015972_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015972_2 "clip_two.clip_pos_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015972, VkglTestCase_015972_1, VkglTestCase_015972_2);

#define VkglTestCase_015973_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015973_2 "ex.clip_two.clip_neg_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015973, VkglTestCase_015973_1, VkglTestCase_015973_2);

#define VkglTestCase_015974_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015974_2 "ex.clip_two.clip_neg_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015974, VkglTestCase_015974_1, VkglTestCase_015974_2);

#define VkglTestCase_015975_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015975_2 "ex.clip_two.clip_neg_x_pos_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015975, VkglTestCase_015975_1, VkglTestCase_015975_2);

#define VkglTestCase_015976_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015976_2 "ex.clip_two.clip_neg_x_pos_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015976, VkglTestCase_015976_1, VkglTestCase_015976_2);

#define VkglTestCase_015977_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015977_2 "clip_two.clip_neg_x_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015977, VkglTestCase_015977_1, VkglTestCase_015977_2);

#define VkglTestCase_015978_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015978_2 "clip_two.clip_neg_x_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015978, VkglTestCase_015978_1, VkglTestCase_015978_2);

#define VkglTestCase_015979_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015979_2 "clip_two.clip_neg_x_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015979, VkglTestCase_015979_1, VkglTestCase_015979_2);

#define VkglTestCase_015980_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015980_2 "clip_two.clip_neg_x_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015980, VkglTestCase_015980_1, VkglTestCase_015980_2);

#define VkglTestCase_015981_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015981_2 "clip_two.clip_neg_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015981, VkglTestCase_015981_1, VkglTestCase_015981_2);

#define VkglTestCase_015982_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015982_2 "clip_two.clip_neg_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015982, VkglTestCase_015982_1, VkglTestCase_015982_2);

#define VkglTestCase_015983_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015983_2 "clip_two.clip_neg_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015983, VkglTestCase_015983_1, VkglTestCase_015983_2);

#define VkglTestCase_015984_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015984_2 "clip_two.clip_neg_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015984, VkglTestCase_015984_1, VkglTestCase_015984_2);

#define VkglTestCase_015985_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015985_2 "ex.clip_two.clip_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015985, VkglTestCase_015985_1, VkglTestCase_015985_2);

#define VkglTestCase_015986_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015986_2 "clip_two.clip_neg_y_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015986, VkglTestCase_015986_1, VkglTestCase_015986_2);

#define VkglTestCase_015987_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015987_2 "clip_two.clip_neg_y_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015987, VkglTestCase_015987_1, VkglTestCase_015987_2);

#define VkglTestCase_015988_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015988_2 "clip_two.clip_neg_y_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015988, VkglTestCase_015988_1, VkglTestCase_015988_2);

#define VkglTestCase_015989_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015989_2 "clip_two.clip_neg_y_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015989, VkglTestCase_015989_1, VkglTestCase_015989_2);

#define VkglTestCase_015990_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015990_2 "clip_two.clip_neg_y_neg_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015990, VkglTestCase_015990_1, VkglTestCase_015990_2);

#define VkglTestCase_015991_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015991_2 "clip_two.clip_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015991, VkglTestCase_015991_1, VkglTestCase_015991_2);

#define VkglTestCase_015992_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015992_2 "clip_two.clip_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015992, VkglTestCase_015992_1, VkglTestCase_015992_2);

#define VkglTestCase_015993_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015993_2 "clip_two.clip_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015993, VkglTestCase_015993_1, VkglTestCase_015993_2);

#define VkglTestCase_015994_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_015994_2 "ex.clip_two.clip_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015994, VkglTestCase_015994_1, VkglTestCase_015994_2);

#define VkglTestCase_015995_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015995_2 "clip_two.clip_pos_y_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015995, VkglTestCase_015995_1, VkglTestCase_015995_2);

#define VkglTestCase_015996_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015996_2 "clip_two.clip_pos_y_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015996, VkglTestCase_015996_1, VkglTestCase_015996_2);

#define VkglTestCase_015997_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015997_2 "clip_two.clip_pos_y_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015997, VkglTestCase_015997_1, VkglTestCase_015997_2);

#define VkglTestCase_015998_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015998_2 "clip_two.clip_pos_y_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015998, VkglTestCase_015998_1, VkglTestCase_015998_2);

#define VkglTestCase_015999_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_015999_2 "clip_two.clip_pos_y_neg_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015999, VkglTestCase_015999_1, VkglTestCase_015999_2);

#define VkglTestCase_016000_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016000_2 "clip_two.clip_pos_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016000, VkglTestCase_016000_1, VkglTestCase_016000_2);

#define VkglTestCase_016001_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016001_2 "clip_two.clip_pos_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016001, VkglTestCase_016001_1, VkglTestCase_016001_2);

#define VkglTestCase_016002_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016002_2 "clip_two.clip_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016002, VkglTestCase_016002_1, VkglTestCase_016002_2);

#define VkglTestCase_016003_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016003_2 "clip_two.clip_pos_y_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016003, VkglTestCase_016003_1, VkglTestCase_016003_2);

#define VkglTestCase_016004_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016004_2 "clip_two.clip_pos_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016004, VkglTestCase_016004_1, VkglTestCase_016004_2);

#define VkglTestCase_016005_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016005_2 "clip_two.clip_pos_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016005, VkglTestCase_016005_1, VkglTestCase_016005_2);

#define VkglTestCase_016006_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016006_2 "clip_two.clip_pos_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016006, VkglTestCase_016006_1, VkglTestCase_016006_2);

#define VkglTestCase_016007_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016007_2 "clip_two.clip_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016007, VkglTestCase_016007_1, VkglTestCase_016007_2);

#define VkglTestCase_016008_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016008_2 "clip_two.clip_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016008, VkglTestCase_016008_1, VkglTestCase_016008_2);

#define VkglTestCase_016009_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016009_2 "clip_two.clip_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016009, VkglTestCase_016009_1, VkglTestCase_016009_2);

#define VkglTestCase_016010_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016010_2 "clip_two.clip_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016010, VkglTestCase_016010_1, VkglTestCase_016010_2);

#define VkglTestCase_016011_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016011_2 "clip_two.clip_neg_y_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016011, VkglTestCase_016011_1, VkglTestCase_016011_2);

#define VkglTestCase_016012_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016012_2 "clip_two.clip_neg_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016012, VkglTestCase_016012_1, VkglTestCase_016012_2);

#define VkglTestCase_016013_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016013_2 "clip_two.clip_neg_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016013, VkglTestCase_016013_1, VkglTestCase_016013_2);

#define VkglTestCase_016014_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016014_2 "clip_two.clip_neg_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016014, VkglTestCase_016014_1, VkglTestCase_016014_2);

#define VkglTestCase_016015_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016015_2 "clip_two.clip_neg_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016015, VkglTestCase_016015_1, VkglTestCase_016015_2);

#define VkglTestCase_016016_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016016_2 "clip_two.clip_neg_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016016, VkglTestCase_016016_1, VkglTestCase_016016_2);

#define VkglTestCase_016017_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016017_2 "clip_two.clip_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016017, VkglTestCase_016017_1, VkglTestCase_016017_2);

#define VkglTestCase_016018_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016018_2 "clip_two.clip_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016018, VkglTestCase_016018_1, VkglTestCase_016018_2);

#define VkglTestCase_016019_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016019_2 "p_two.clip_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016019, VkglTestCase_016019_1, VkglTestCase_016019_2);

#define VkglTestCase_016020_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016020_2 "p_two.clip_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016020, VkglTestCase_016020_1, VkglTestCase_016020_2);

#define VkglTestCase_016021_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016021_2 "p_two.clip_neg_x_neg_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016021, VkglTestCase_016021_1, VkglTestCase_016021_2);

#define VkglTestCase_016022_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016022_2 "p_two.clip_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016022, VkglTestCase_016022_1, VkglTestCase_016022_2);

#define VkglTestCase_016023_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016023_2 "p_two.clip_neg_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016023, VkglTestCase_016023_1, VkglTestCase_016023_2);

#define VkglTestCase_016024_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016024_2 "p_two.clip_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016024, VkglTestCase_016024_1, VkglTestCase_016024_2);

#define VkglTestCase_016025_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016025_2 "p_two.clip_pos_x_neg_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016025, VkglTestCase_016025_1, VkglTestCase_016025_2);

#define VkglTestCase_016026_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016026_2 "p_two.clip_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016026, VkglTestCase_016026_1, VkglTestCase_016026_2);

#define VkglTestCase_016027_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016027_2 "p_two.clip_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016027, VkglTestCase_016027_1, VkglTestCase_016027_2);

#define VkglTestCase_016028_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016028_2 "p_two.clip_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016028, VkglTestCase_016028_1, VkglTestCase_016028_2);

#define VkglTestCase_016029_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016029_2 "p_two.clip_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016029, VkglTestCase_016029_1, VkglTestCase_016029_2);

#define VkglTestCase_016030_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016030_2 "p_two.clip_pos_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016030, VkglTestCase_016030_1, VkglTestCase_016030_2);

#define VkglTestCase_016031_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016031_2 "p_two.clip_pos_x_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016031, VkglTestCase_016031_1, VkglTestCase_016031_2);

#define VkglTestCase_016032_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016032_2 "p_two.clip_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016032, VkglTestCase_016032_1, VkglTestCase_016032_2);

#define VkglTestCase_016033_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016033_2 "p_two.clip_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016033, VkglTestCase_016033_1, VkglTestCase_016033_2);

#define VkglTestCase_016034_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016034_2 "p_two.clip_neg_x_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016034, VkglTestCase_016034_1, VkglTestCase_016034_2);

#define VkglTestCase_016035_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016035_2 "p_two.clip_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016035, VkglTestCase_016035_1, VkglTestCase_016035_2);

#define VkglTestCase_016036_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016036_2 "p_two.clip_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016036, VkglTestCase_016036_1, VkglTestCase_016036_2);

#define VkglTestCase_016037_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016037_2 "p_two.clip_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016037, VkglTestCase_016037_1, VkglTestCase_016037_2);

#define VkglTestCase_016038_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016038_2 "p_two.clip_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_016038, VkglTestCase_016038_1, VkglTestCase_016038_2);
