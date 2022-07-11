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

#define VkglTestCase_015785_1 "dEQP-GLES2.functional.clipping.tr"
#define VkglTestCase_015785_2 "iangle_vertex.clip_one.clip_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015785, VkglTestCase_015785_1, VkglTestCase_015785_2);

#define VkglTestCase_015786_1 "dEQP-GLES2.functional.clipping.tr"
#define VkglTestCase_015786_2 "iangle_vertex.clip_one.clip_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015786, VkglTestCase_015786_1, VkglTestCase_015786_2);

#define VkglTestCase_015787_1 "dEQP-GLES2.functional.clipping.tr"
#define VkglTestCase_015787_2 "iangle_vertex.clip_one.clip_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015787, VkglTestCase_015787_1, VkglTestCase_015787_2);

#define VkglTestCase_015788_1 "dEQP-GLES2.functional.clipping.tr"
#define VkglTestCase_015788_2 "iangle_vertex.clip_one.clip_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015788, VkglTestCase_015788_1, VkglTestCase_015788_2);

#define VkglTestCase_015789_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015789_2 "gle_vertex.clip_one.clip_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015789, VkglTestCase_015789_1, VkglTestCase_015789_2);

#define VkglTestCase_015790_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015790_2 "gle_vertex.clip_one.clip_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015790, VkglTestCase_015790_1, VkglTestCase_015790_2);

#define VkglTestCase_015791_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015791_2 "gle_vertex.clip_one.clip_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015791, VkglTestCase_015791_1, VkglTestCase_015791_2);

#define VkglTestCase_015792_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015792_2 "gle_vertex.clip_one.clip_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015792, VkglTestCase_015792_1, VkglTestCase_015792_2);

#define VkglTestCase_015793_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015793_2 "gle_vertex.clip_one.clip_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015793, VkglTestCase_015793_1, VkglTestCase_015793_2);

#define VkglTestCase_015794_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015794_2 "gle_vertex.clip_one.clip_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015794, VkglTestCase_015794_1, VkglTestCase_015794_2);

#define VkglTestCase_015795_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015795_2 "gle_vertex.clip_one.clip_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015795, VkglTestCase_015795_1, VkglTestCase_015795_2);

#define VkglTestCase_015796_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015796_2 "gle_vertex.clip_one.clip_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015796, VkglTestCase_015796_1, VkglTestCase_015796_2);

#define VkglTestCase_015797_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015797_2 "gle_vertex.clip_one.clip_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015797, VkglTestCase_015797_1, VkglTestCase_015797_2);

#define VkglTestCase_015798_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015798_2 "gle_vertex.clip_one.clip_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015798, VkglTestCase_015798_1, VkglTestCase_015798_2);

#define VkglTestCase_015799_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015799_2 "gle_vertex.clip_one.clip_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015799, VkglTestCase_015799_1, VkglTestCase_015799_2);

#define VkglTestCase_015800_1 "dEQP-GLES2.functional.clipping.trian"
#define VkglTestCase_015800_2 "gle_vertex.clip_one.clip_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015800, VkglTestCase_015800_1, VkglTestCase_015800_2);

#define VkglTestCase_015801_1 "dEQP-GLES2.functional.clipping.triangle"
#define VkglTestCase_015801_2 "_vertex.clip_one.clip_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015801, VkglTestCase_015801_1, VkglTestCase_015801_2);

#define VkglTestCase_015802_1 "dEQP-GLES2.functional.clipping.triangle"
#define VkglTestCase_015802_2 "_vertex.clip_one.clip_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015802, VkglTestCase_015802_1, VkglTestCase_015802_2);

#define VkglTestCase_015803_1 "dEQP-GLES2.functional.clipping.triangle"
#define VkglTestCase_015803_2 "_vertex.clip_one.clip_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015803, VkglTestCase_015803_1, VkglTestCase_015803_2);

#define VkglTestCase_015804_1 "dEQP-GLES2.functional.clipping.triangle"
#define VkglTestCase_015804_2 "_vertex.clip_one.clip_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015804, VkglTestCase_015804_1, VkglTestCase_015804_2);

#define VkglTestCase_015805_1 "dEQP-GLES2.functional.clipping.triangle"
#define VkglTestCase_015805_2 "_vertex.clip_one.clip_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015805, VkglTestCase_015805_1, VkglTestCase_015805_2);

#define VkglTestCase_015806_1 "dEQP-GLES2.functional.clipping.triangle"
#define VkglTestCase_015806_2 "_vertex.clip_one.clip_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015806, VkglTestCase_015806_1, VkglTestCase_015806_2);

#define VkglTestCase_015807_1 "dEQP-GLES2.functional.clipping.triangle"
#define VkglTestCase_015807_2 "_vertex.clip_one.clip_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015807, VkglTestCase_015807_1, VkglTestCase_015807_2);

#define VkglTestCase_015808_1 "dEQP-GLES2.functional.clipping.triangle"
#define VkglTestCase_015808_2 "_vertex.clip_one.clip_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015808, VkglTestCase_015808_1, VkglTestCase_015808_2);

#define VkglTestCase_015809_1 "dEQP-GLES2.functional.clipping.tr"
#define VkglTestCase_015809_2 "iangle_vertex.clip_one.clip_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015809, VkglTestCase_015809_1, VkglTestCase_015809_2);

#define VkglTestCase_015810_1 "dEQP-GLES2.functional.clipping.tr"
#define VkglTestCase_015810_2 "iangle_vertex.clip_one.clip_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015810, VkglTestCase_015810_1, VkglTestCase_015810_2);
