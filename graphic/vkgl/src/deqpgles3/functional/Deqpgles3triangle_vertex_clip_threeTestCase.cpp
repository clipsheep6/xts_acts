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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043639_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043639_2 "ex.clip_three.clip_neg_x_and_pos_x_and_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043639, VkglTestCase_043639_1, VkglTestCase_043639_2);

#define VkglTestCase_043640_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043640_2 "ex.clip_three.clip_neg_x_and_pos_x_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043640, VkglTestCase_043640_1, VkglTestCase_043640_2);

#define VkglTestCase_043641_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043641_2 "clip_three.clip_neg_x_and_pos_x_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043641, VkglTestCase_043641_1, VkglTestCase_043641_2);

#define VkglTestCase_043642_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043642_2 "clip_three.clip_neg_x_and_pos_x_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043642, VkglTestCase_043642_1, VkglTestCase_043642_2);

#define VkglTestCase_043643_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043643_2 "clip_three.clip_neg_x_and_pos_x_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043643, VkglTestCase_043643_1, VkglTestCase_043643_2);

#define VkglTestCase_043644_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043644_2 "clip_three.clip_neg_x_and_pos_x_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043644, VkglTestCase_043644_1, VkglTestCase_043644_2);

#define VkglTestCase_043645_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043645_2 "clip_three.clip_neg_x_and_pos_x_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043645, VkglTestCase_043645_1, VkglTestCase_043645_2);

#define VkglTestCase_043646_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043646_2 "clip_three.clip_neg_x_and_pos_x_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043646, VkglTestCase_043646_1, VkglTestCase_043646_2);

#define VkglTestCase_043647_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043647_2 "clip_three.clip_neg_x_and_pos_x_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043647, VkglTestCase_043647_1, VkglTestCase_043647_2);

#define VkglTestCase_043648_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043648_2 "clip_three.clip_neg_x_and_pos_x_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043648, VkglTestCase_043648_1, VkglTestCase_043648_2);

#define VkglTestCase_043649_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043649_2 "p_three.clip_neg_x_and_pos_x_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043649, VkglTestCase_043649_1, VkglTestCase_043649_2);

#define VkglTestCase_043650_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043650_2 "p_three.clip_neg_x_and_pos_x_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043650, VkglTestCase_043650_1, VkglTestCase_043650_2);

#define VkglTestCase_043651_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043651_2 "p_three.clip_neg_x_and_pos_x_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043651, VkglTestCase_043651_1, VkglTestCase_043651_2);

#define VkglTestCase_043652_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043652_2 "p_three.clip_neg_x_and_pos_x_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043652, VkglTestCase_043652_1, VkglTestCase_043652_2);

#define VkglTestCase_043653_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043653_2 "p_three.clip_neg_x_and_pos_x_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043653, VkglTestCase_043653_1, VkglTestCase_043653_2);

#define VkglTestCase_043654_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043654_2 "p_three.clip_neg_x_and_pos_x_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043654, VkglTestCase_043654_1, VkglTestCase_043654_2);

#define VkglTestCase_043655_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043655_2 "p_three.clip_neg_x_and_pos_x_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043655, VkglTestCase_043655_1, VkglTestCase_043655_2);

#define VkglTestCase_043656_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043656_2 "p_three.clip_neg_x_and_pos_x_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043656, VkglTestCase_043656_1, VkglTestCase_043656_2);

#define VkglTestCase_043657_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043657_2 "ex.clip_three.clip_neg_x_and_pos_y_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043657, VkglTestCase_043657_1, VkglTestCase_043657_2);

#define VkglTestCase_043658_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043658_2 "clip_three.clip_neg_x_and_pos_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043658, VkglTestCase_043658_1, VkglTestCase_043658_2);

#define VkglTestCase_043659_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043659_2 "clip_three.clip_neg_x_and_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043659, VkglTestCase_043659_1, VkglTestCase_043659_2);

#define VkglTestCase_043660_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043660_2 "p_three.clip_neg_x_and_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043660, VkglTestCase_043660_1, VkglTestCase_043660_2);

#define VkglTestCase_043661_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043661_2 "p_three.clip_neg_x_and_pos_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043661, VkglTestCase_043661_1, VkglTestCase_043661_2);

#define VkglTestCase_043662_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043662_2 "p_three.clip_neg_x_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043662, VkglTestCase_043662_1, VkglTestCase_043662_2);

#define VkglTestCase_043663_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043663_2 "p_three.clip_neg_x_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043663, VkglTestCase_043663_1, VkglTestCase_043663_2);

#define VkglTestCase_043664_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043664_2 "hree.clip_neg_x_and_neg_y_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043664, VkglTestCase_043664_1, VkglTestCase_043664_2);

#define VkglTestCase_043665_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043665_2 "p_three.clip_neg_x_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043665, VkglTestCase_043665_1, VkglTestCase_043665_2);

#define VkglTestCase_043666_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043666_2 "hree.clip_neg_x_and_pos_y_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043666, VkglTestCase_043666_1, VkglTestCase_043666_2);

#define VkglTestCase_043667_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043667_2 "hree.clip_neg_x_and_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043667, VkglTestCase_043667_1, VkglTestCase_043667_2);

#define VkglTestCase_043668_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043668_2 "hree.clip_neg_x_and_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043668, VkglTestCase_043668_1, VkglTestCase_043668_2);

#define VkglTestCase_043669_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043669_2 "e.clip_neg_x_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043669, VkglTestCase_043669_1, VkglTestCase_043669_2);

#define VkglTestCase_043670_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043670_2 "e.clip_neg_x_and_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043670, VkglTestCase_043670_1, VkglTestCase_043670_2);

#define VkglTestCase_043671_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043671_2 "e.clip_neg_x_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043671, VkglTestCase_043671_1, VkglTestCase_043671_2);

#define VkglTestCase_043672_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043672_2 "e.clip_neg_x_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043672, VkglTestCase_043672_1, VkglTestCase_043672_2);

#define VkglTestCase_043673_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043673_2 "e.clip_neg_x_and_pos_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043673, VkglTestCase_043673_1, VkglTestCase_043673_2);

#define VkglTestCase_043674_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043674_2 "e.clip_neg_x_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043674, VkglTestCase_043674_1, VkglTestCase_043674_2);

#define VkglTestCase_043675_1 "dEQP-GLES3.functional.clipping.triangle_vert"
#define VkglTestCase_043675_2 "ex.clip_three.clip_pos_x_and_pos_y_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043675, VkglTestCase_043675_1, VkglTestCase_043675_2);

#define VkglTestCase_043676_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043676_2 "clip_three.clip_pos_x_and_pos_y_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043676, VkglTestCase_043676_1, VkglTestCase_043676_2);

#define VkglTestCase_043677_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043677_2 "clip_three.clip_pos_x_and_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043677, VkglTestCase_043677_1, VkglTestCase_043677_2);

#define VkglTestCase_043678_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043678_2 "p_three.clip_pos_x_and_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043678, VkglTestCase_043678_1, VkglTestCase_043678_2);

#define VkglTestCase_043679_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043679_2 "p_three.clip_pos_x_and_neg_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043679, VkglTestCase_043679_1, VkglTestCase_043679_2);

#define VkglTestCase_043680_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043680_2 "p_three.clip_pos_x_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043680, VkglTestCase_043680_1, VkglTestCase_043680_2);

#define VkglTestCase_043681_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043681_2 "p_three.clip_pos_x_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043681, VkglTestCase_043681_1, VkglTestCase_043681_2);

#define VkglTestCase_043682_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043682_2 "hree.clip_pos_x_and_neg_y_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043682, VkglTestCase_043682_1, VkglTestCase_043682_2);

#define VkglTestCase_043683_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043683_2 "p_three.clip_pos_x_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043683, VkglTestCase_043683_1, VkglTestCase_043683_2);

#define VkglTestCase_043684_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043684_2 "hree.clip_pos_x_and_pos_y_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043684, VkglTestCase_043684_1, VkglTestCase_043684_2);

#define VkglTestCase_043685_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043685_2 "hree.clip_pos_x_and_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043685, VkglTestCase_043685_1, VkglTestCase_043685_2);

#define VkglTestCase_043686_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043686_2 "hree.clip_pos_x_and_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043686, VkglTestCase_043686_1, VkglTestCase_043686_2);

#define VkglTestCase_043687_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043687_2 "e.clip_pos_x_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043687, VkglTestCase_043687_1, VkglTestCase_043687_2);

#define VkglTestCase_043688_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043688_2 "e.clip_pos_x_and_neg_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043688, VkglTestCase_043688_1, VkglTestCase_043688_2);

#define VkglTestCase_043689_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043689_2 "e.clip_pos_x_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043689, VkglTestCase_043689_1, VkglTestCase_043689_2);

#define VkglTestCase_043690_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043690_2 "e.clip_pos_x_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043690, VkglTestCase_043690_1, VkglTestCase_043690_2);

#define VkglTestCase_043691_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043691_2 "e.clip_pos_x_and_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043691, VkglTestCase_043691_1, VkglTestCase_043691_2);

#define VkglTestCase_043692_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043692_2 "e.clip_pos_x_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043692, VkglTestCase_043692_1, VkglTestCase_043692_2);

#define VkglTestCase_043693_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043693_2 "clip_three.clip_pos_y_and_neg_y_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043693, VkglTestCase_043693_1, VkglTestCase_043693_2);

#define VkglTestCase_043694_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043694_2 "clip_three.clip_pos_y_and_neg_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043694, VkglTestCase_043694_1, VkglTestCase_043694_2);

#define VkglTestCase_043695_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043695_2 "clip_three.clip_pos_y_and_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043695, VkglTestCase_043695_1, VkglTestCase_043695_2);

#define VkglTestCase_043696_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043696_2 "clip_three.clip_pos_y_and_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043696, VkglTestCase_043696_1, VkglTestCase_043696_2);

#define VkglTestCase_043697_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043697_2 "clip_three.clip_pos_y_and_neg_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043697, VkglTestCase_043697_1, VkglTestCase_043697_2);

#define VkglTestCase_043698_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043698_2 "clip_three.clip_pos_y_and_neg_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043698, VkglTestCase_043698_1, VkglTestCase_043698_2);

#define VkglTestCase_043699_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043699_2 "clip_three.clip_pos_y_and_neg_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043699, VkglTestCase_043699_1, VkglTestCase_043699_2);

#define VkglTestCase_043700_1 "dEQP-GLES3.functional.clipping.triangle_vertex."
#define VkglTestCase_043700_2 "clip_three.clip_pos_y_and_neg_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043700, VkglTestCase_043700_1, VkglTestCase_043700_2);

#define VkglTestCase_043701_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043701_2 "p_three.clip_pos_y_and_neg_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043701, VkglTestCase_043701_1, VkglTestCase_043701_2);

#define VkglTestCase_043702_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043702_2 "p_three.clip_pos_y_and_neg_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043702, VkglTestCase_043702_1, VkglTestCase_043702_2);

#define VkglTestCase_043703_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043703_2 "p_three.clip_pos_y_and_neg_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043703, VkglTestCase_043703_1, VkglTestCase_043703_2);

#define VkglTestCase_043704_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043704_2 "p_three.clip_pos_y_and_neg_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043704, VkglTestCase_043704_1, VkglTestCase_043704_2);

#define VkglTestCase_043705_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043705_2 "p_three.clip_pos_y_and_neg_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043705, VkglTestCase_043705_1, VkglTestCase_043705_2);

#define VkglTestCase_043706_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043706_2 "p_three.clip_pos_y_and_neg_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043706, VkglTestCase_043706_1, VkglTestCase_043706_2);

#define VkglTestCase_043707_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043707_2 "p_three.clip_pos_y_and_neg_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043707, VkglTestCase_043707_1, VkglTestCase_043707_2);

#define VkglTestCase_043708_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043708_2 "p_three.clip_pos_y_and_neg_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043708, VkglTestCase_043708_1, VkglTestCase_043708_2);

#define VkglTestCase_043709_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043709_2 "p_three.clip_pos_y_and_neg_x_neg_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043709, VkglTestCase_043709_1, VkglTestCase_043709_2);

#define VkglTestCase_043710_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043710_2 "p_three.clip_pos_y_and_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043710, VkglTestCase_043710_1, VkglTestCase_043710_2);

#define VkglTestCase_043711_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043711_2 "p_three.clip_pos_y_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043711, VkglTestCase_043711_1, VkglTestCase_043711_2);

#define VkglTestCase_043712_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043712_2 "p_three.clip_pos_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043712, VkglTestCase_043712_1, VkglTestCase_043712_2);

#define VkglTestCase_043713_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043713_2 "hree.clip_pos_y_and_neg_x_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043713, VkglTestCase_043713_1, VkglTestCase_043713_2);

#define VkglTestCase_043714_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043714_2 "p_three.clip_pos_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043714, VkglTestCase_043714_1, VkglTestCase_043714_2);

#define VkglTestCase_043715_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043715_2 "hree.clip_pos_y_and_pos_x_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043715, VkglTestCase_043715_1, VkglTestCase_043715_2);

#define VkglTestCase_043716_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043716_2 "hree.clip_pos_y_and_pos_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043716, VkglTestCase_043716_1, VkglTestCase_043716_2);

#define VkglTestCase_043717_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043717_2 "hree.clip_pos_y_and_neg_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043717, VkglTestCase_043717_1, VkglTestCase_043717_2);

#define VkglTestCase_043718_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043718_2 "e.clip_pos_y_and_neg_x_neg_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043718, VkglTestCase_043718_1, VkglTestCase_043718_2);

#define VkglTestCase_043719_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043719_2 "e.clip_pos_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043719, VkglTestCase_043719_1, VkglTestCase_043719_2);

#define VkglTestCase_043720_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043720_2 "e.clip_pos_y_and_pos_x_neg_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043720, VkglTestCase_043720_1, VkglTestCase_043720_2);

#define VkglTestCase_043721_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043721_2 "e.clip_pos_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043721, VkglTestCase_043721_1, VkglTestCase_043721_2);

#define VkglTestCase_043722_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043722_2 "e.clip_pos_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043722, VkglTestCase_043722_1, VkglTestCase_043722_2);

#define VkglTestCase_043723_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043723_2 "e.clip_pos_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043723, VkglTestCase_043723_1, VkglTestCase_043723_2);

#define VkglTestCase_043724_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043724_2 "p_three.clip_neg_y_and_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043724, VkglTestCase_043724_1, VkglTestCase_043724_2);

#define VkglTestCase_043725_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043725_2 "p_three.clip_neg_y_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043725, VkglTestCase_043725_1, VkglTestCase_043725_2);

#define VkglTestCase_043726_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043726_2 "p_three.clip_neg_y_and_pos_x_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043726, VkglTestCase_043726_1, VkglTestCase_043726_2);

#define VkglTestCase_043727_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043727_2 "p_three.clip_neg_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043727, VkglTestCase_043727_1, VkglTestCase_043727_2);

#define VkglTestCase_043728_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043728_2 "hree.clip_neg_y_and_neg_x_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043728, VkglTestCase_043728_1, VkglTestCase_043728_2);

#define VkglTestCase_043729_1 "dEQP-GLES3.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_043729_2 "p_three.clip_neg_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043729, VkglTestCase_043729_1, VkglTestCase_043729_2);

#define VkglTestCase_043730_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043730_2 "hree.clip_neg_y_and_pos_x_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043730, VkglTestCase_043730_1, VkglTestCase_043730_2);

#define VkglTestCase_043731_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043731_2 "hree.clip_neg_y_and_pos_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043731, VkglTestCase_043731_1, VkglTestCase_043731_2);

#define VkglTestCase_043732_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043732_2 "hree.clip_neg_y_and_neg_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043732, VkglTestCase_043732_1, VkglTestCase_043732_2);

#define VkglTestCase_043733_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043733_2 "e.clip_neg_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043733, VkglTestCase_043733_1, VkglTestCase_043733_2);

#define VkglTestCase_043734_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043734_2 "e.clip_neg_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043734, VkglTestCase_043734_1, VkglTestCase_043734_2);

#define VkglTestCase_043735_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043735_2 "e.clip_neg_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043735, VkglTestCase_043735_1, VkglTestCase_043735_2);

#define VkglTestCase_043736_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043736_2 "e.clip_neg_y_and_pos_x_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043736, VkglTestCase_043736_1, VkglTestCase_043736_2);

#define VkglTestCase_043737_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043737_2 "e.clip_neg_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043737, VkglTestCase_043737_1, VkglTestCase_043737_2);

#define VkglTestCase_043738_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043738_2 "e.clip_neg_y_and_neg_x_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043738, VkglTestCase_043738_1, VkglTestCase_043738_2);

#define VkglTestCase_043739_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043739_2 "hree.clip_neg_x_neg_y_and_pos_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043739, VkglTestCase_043739_1, VkglTestCase_043739_2);

#define VkglTestCase_043740_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043740_2 "hree.clip_neg_x_neg_y_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043740, VkglTestCase_043740_1, VkglTestCase_043740_2);

#define VkglTestCase_043741_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043741_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043741, VkglTestCase_043741_1, VkglTestCase_043741_2);

#define VkglTestCase_043742_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043742_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043742, VkglTestCase_043742_1, VkglTestCase_043742_2);

#define VkglTestCase_043743_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043743_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043743, VkglTestCase_043743_1, VkglTestCase_043743_2);

#define VkglTestCase_043744_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043744_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043744, VkglTestCase_043744_1, VkglTestCase_043744_2);

#define VkglTestCase_043745_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043745_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043745, VkglTestCase_043745_1, VkglTestCase_043745_2);

#define VkglTestCase_043746_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043746_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043746, VkglTestCase_043746_1, VkglTestCase_043746_2);

#define VkglTestCase_043747_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043747_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043747, VkglTestCase_043747_1, VkglTestCase_043747_2);

#define VkglTestCase_043748_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043748_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043748, VkglTestCase_043748_1, VkglTestCase_043748_2);

#define VkglTestCase_043749_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043749_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043749, VkglTestCase_043749_1, VkglTestCase_043749_2);

#define VkglTestCase_043750_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043750_2 "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043750, VkglTestCase_043750_1, VkglTestCase_043750_2);

#define VkglTestCase_043751_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043751_2 "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043751, VkglTestCase_043751_1, VkglTestCase_043751_2);

#define VkglTestCase_043752_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043752_2 "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043752, VkglTestCase_043752_1, VkglTestCase_043752_2);

#define VkglTestCase_043753_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043753_2 "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043753, VkglTestCase_043753_1, VkglTestCase_043753_2);

#define VkglTestCase_043754_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043754_2 "hree.clip_neg_x_neg_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043754, VkglTestCase_043754_1, VkglTestCase_043754_2);

#define VkglTestCase_043755_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043755_2 "hree.clip_neg_x_neg_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043755, VkglTestCase_043755_1, VkglTestCase_043755_2);

#define VkglTestCase_043756_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043756_2 "hree.clip_neg_x_neg_y_and_pos_x_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043756, VkglTestCase_043756_1, VkglTestCase_043756_2);

#define VkglTestCase_043757_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043757_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043757, VkglTestCase_043757_1, VkglTestCase_043757_2);

#define VkglTestCase_043758_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043758_2 "hree.clip_neg_x_neg_y_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043758, VkglTestCase_043758_1, VkglTestCase_043758_2);

#define VkglTestCase_043759_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043759_2 "hree.clip_neg_x_neg_y_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043759, VkglTestCase_043759_1, VkglTestCase_043759_2);

#define VkglTestCase_043760_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043760_2 "lip_neg_x_neg_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043760, VkglTestCase_043760_1, VkglTestCase_043760_2);

#define VkglTestCase_043761_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043761_2 "lip_neg_x_neg_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043761, VkglTestCase_043761_1, VkglTestCase_043761_2);

#define VkglTestCase_043762_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043762_2 "hree.clip_pos_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043762, VkglTestCase_043762_1, VkglTestCase_043762_2);

#define VkglTestCase_043763_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043763_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043763, VkglTestCase_043763_1, VkglTestCase_043763_2);

#define VkglTestCase_043764_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043764_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043764, VkglTestCase_043764_1, VkglTestCase_043764_2);

#define VkglTestCase_043765_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043765_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043765, VkglTestCase_043765_1, VkglTestCase_043765_2);

#define VkglTestCase_043766_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043766_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043766, VkglTestCase_043766_1, VkglTestCase_043766_2);

#define VkglTestCase_043767_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043767_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043767, VkglTestCase_043767_1, VkglTestCase_043767_2);

#define VkglTestCase_043768_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043768_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043768, VkglTestCase_043768_1, VkglTestCase_043768_2);

#define VkglTestCase_043769_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043769_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043769, VkglTestCase_043769_1, VkglTestCase_043769_2);

#define VkglTestCase_043770_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043770_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043770, VkglTestCase_043770_1, VkglTestCase_043770_2);

#define VkglTestCase_043771_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043771_2 "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043771, VkglTestCase_043771_1, VkglTestCase_043771_2);

#define VkglTestCase_043772_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043772_2 "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043772, VkglTestCase_043772_1, VkglTestCase_043772_2);

#define VkglTestCase_043773_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043773_2 "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043773, VkglTestCase_043773_1, VkglTestCase_043773_2);

#define VkglTestCase_043774_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043774_2 "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043774, VkglTestCase_043774_1, VkglTestCase_043774_2);

#define VkglTestCase_043775_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043775_2 "hree.clip_pos_x_neg_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043775, VkglTestCase_043775_1, VkglTestCase_043775_2);

#define VkglTestCase_043776_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043776_2 "hree.clip_pos_x_neg_y_and_neg_x_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043776, VkglTestCase_043776_1, VkglTestCase_043776_2);

#define VkglTestCase_043777_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043777_2 "hree.clip_pos_x_neg_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043777, VkglTestCase_043777_1, VkglTestCase_043777_2);

#define VkglTestCase_043778_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043778_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043778, VkglTestCase_043778_1, VkglTestCase_043778_2);

#define VkglTestCase_043779_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043779_2 "hree.clip_pos_x_neg_y_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043779, VkglTestCase_043779_1, VkglTestCase_043779_2);

#define VkglTestCase_043780_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043780_2 "hree.clip_pos_x_neg_y_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043780, VkglTestCase_043780_1, VkglTestCase_043780_2);

#define VkglTestCase_043781_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043781_2 "lip_pos_x_neg_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043781, VkglTestCase_043781_1, VkglTestCase_043781_2);

#define VkglTestCase_043782_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043782_2 "lip_pos_x_neg_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043782, VkglTestCase_043782_1, VkglTestCase_043782_2);

#define VkglTestCase_043783_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043783_2 "hree.clip_pos_x_pos_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043783, VkglTestCase_043783_1, VkglTestCase_043783_2);

#define VkglTestCase_043784_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043784_2 "hree.clip_pos_x_pos_y_and_neg_x_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043784, VkglTestCase_043784_1, VkglTestCase_043784_2);

#define VkglTestCase_043785_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043785_2 "hree.clip_pos_x_pos_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043785, VkglTestCase_043785_1, VkglTestCase_043785_2);

#define VkglTestCase_043786_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043786_2 "hree.clip_pos_x_pos_y_and_neg_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043786, VkglTestCase_043786_1, VkglTestCase_043786_2);

#define VkglTestCase_043787_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043787_2 "hree.clip_pos_x_pos_y_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043787, VkglTestCase_043787_1, VkglTestCase_043787_2);

#define VkglTestCase_043788_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043788_2 "hree.clip_pos_x_pos_y_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043788, VkglTestCase_043788_1, VkglTestCase_043788_2);

#define VkglTestCase_043789_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043789_2 "lip_pos_x_pos_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043789, VkglTestCase_043789_1, VkglTestCase_043789_2);

#define VkglTestCase_043790_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043790_2 "lip_pos_x_pos_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043790, VkglTestCase_043790_1, VkglTestCase_043790_2);

#define VkglTestCase_043791_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043791_2 "hree.clip_neg_x_pos_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043791, VkglTestCase_043791_1, VkglTestCase_043791_2);

#define VkglTestCase_043792_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043792_2 "hree.clip_neg_x_pos_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043792, VkglTestCase_043792_1, VkglTestCase_043792_2);

#define VkglTestCase_043793_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043793_2 "hree.clip_neg_x_pos_y_and_pos_x_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043793, VkglTestCase_043793_1, VkglTestCase_043793_2);

#define VkglTestCase_043794_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043794_2 "hree.clip_neg_x_pos_y_and_pos_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043794, VkglTestCase_043794_1, VkglTestCase_043794_2);

#define VkglTestCase_043795_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043795_2 "hree.clip_neg_x_pos_y_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043795, VkglTestCase_043795_1, VkglTestCase_043795_2);

#define VkglTestCase_043796_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043796_2 "hree.clip_neg_x_pos_y_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043796, VkglTestCase_043796_1, VkglTestCase_043796_2);

#define VkglTestCase_043797_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043797_2 "lip_neg_x_pos_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043797, VkglTestCase_043797_1, VkglTestCase_043797_2);

#define VkglTestCase_043798_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043798_2 "lip_neg_x_pos_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043798, VkglTestCase_043798_1, VkglTestCase_043798_2);

#define VkglTestCase_043799_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043799_2 "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043799, VkglTestCase_043799_1, VkglTestCase_043799_2);

#define VkglTestCase_043800_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043800_2 "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043800, VkglTestCase_043800_1, VkglTestCase_043800_2);

#define VkglTestCase_043801_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043801_2 "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043801, VkglTestCase_043801_1, VkglTestCase_043801_2);

#define VkglTestCase_043802_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043802_2 "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043802, VkglTestCase_043802_1, VkglTestCase_043802_2);

#define VkglTestCase_043803_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043803_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043803, VkglTestCase_043803_1, VkglTestCase_043803_2);

#define VkglTestCase_043804_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043804_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043804, VkglTestCase_043804_1, VkglTestCase_043804_2);

#define VkglTestCase_043805_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043805_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043805, VkglTestCase_043805_1, VkglTestCase_043805_2);

#define VkglTestCase_043806_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043806_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043806, VkglTestCase_043806_1, VkglTestCase_043806_2);

#define VkglTestCase_043807_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043807_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043807, VkglTestCase_043807_1, VkglTestCase_043807_2);

#define VkglTestCase_043808_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043808_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043808, VkglTestCase_043808_1, VkglTestCase_043808_2);

#define VkglTestCase_043809_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043809_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043809, VkglTestCase_043809_1, VkglTestCase_043809_2);

#define VkglTestCase_043810_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043810_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043810, VkglTestCase_043810_1, VkglTestCase_043810_2);

#define VkglTestCase_043811_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043811_2 "hree.clip_neg_x_neg_z_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043811, VkglTestCase_043811_1, VkglTestCase_043811_2);

#define VkglTestCase_043812_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043812_2 "hree.clip_neg_x_neg_z_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043812, VkglTestCase_043812_1, VkglTestCase_043812_2);

#define VkglTestCase_043813_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043813_2 "lip_neg_x_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043813, VkglTestCase_043813_1, VkglTestCase_043813_2);

#define VkglTestCase_043814_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043814_2 "lip_neg_x_neg_z_and_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043814, VkglTestCase_043814_1, VkglTestCase_043814_2);

#define VkglTestCase_043815_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043815_2 "lip_neg_x_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043815, VkglTestCase_043815_1, VkglTestCase_043815_2);

#define VkglTestCase_043816_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043816_2 "lip_neg_x_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043816, VkglTestCase_043816_1, VkglTestCase_043816_2);

#define VkglTestCase_043817_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043817_2 "lip_neg_x_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043817, VkglTestCase_043817_1, VkglTestCase_043817_2);

#define VkglTestCase_043818_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043818_2 "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043818, VkglTestCase_043818_1, VkglTestCase_043818_2);

#define VkglTestCase_043819_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043819_2 "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043819, VkglTestCase_043819_1, VkglTestCase_043819_2);

#define VkglTestCase_043820_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043820_2 "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043820, VkglTestCase_043820_1, VkglTestCase_043820_2);

#define VkglTestCase_043821_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043821_2 "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043821, VkglTestCase_043821_1, VkglTestCase_043821_2);

#define VkglTestCase_043822_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043822_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043822, VkglTestCase_043822_1, VkglTestCase_043822_2);

#define VkglTestCase_043823_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043823_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043823, VkglTestCase_043823_1, VkglTestCase_043823_2);

#define VkglTestCase_043824_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043824_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043824, VkglTestCase_043824_1, VkglTestCase_043824_2);

#define VkglTestCase_043825_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043825_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043825, VkglTestCase_043825_1, VkglTestCase_043825_2);

#define VkglTestCase_043826_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043826_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043826, VkglTestCase_043826_1, VkglTestCase_043826_2);

#define VkglTestCase_043827_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043827_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043827, VkglTestCase_043827_1, VkglTestCase_043827_2);

#define VkglTestCase_043828_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043828_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043828, VkglTestCase_043828_1, VkglTestCase_043828_2);

#define VkglTestCase_043829_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043829_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043829, VkglTestCase_043829_1, VkglTestCase_043829_2);

#define VkglTestCase_043830_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043830_2 "hree.clip_pos_x_neg_z_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043830, VkglTestCase_043830_1, VkglTestCase_043830_2);

#define VkglTestCase_043831_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043831_2 "hree.clip_pos_x_neg_z_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043831, VkglTestCase_043831_1, VkglTestCase_043831_2);

#define VkglTestCase_043832_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043832_2 "lip_pos_x_neg_z_and_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043832, VkglTestCase_043832_1, VkglTestCase_043832_2);

#define VkglTestCase_043833_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043833_2 "lip_pos_x_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043833, VkglTestCase_043833_1, VkglTestCase_043833_2);

#define VkglTestCase_043834_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043834_2 "lip_pos_x_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043834, VkglTestCase_043834_1, VkglTestCase_043834_2);

#define VkglTestCase_043835_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043835_2 "lip_pos_x_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043835, VkglTestCase_043835_1, VkglTestCase_043835_2);

#define VkglTestCase_043836_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043836_2 "lip_pos_x_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043836, VkglTestCase_043836_1, VkglTestCase_043836_2);

#define VkglTestCase_043837_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043837_2 "hree.clip_pos_x_pos_z_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043837, VkglTestCase_043837_1, VkglTestCase_043837_2);

#define VkglTestCase_043838_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043838_2 "hree.clip_pos_x_pos_z_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043838, VkglTestCase_043838_1, VkglTestCase_043838_2);

#define VkglTestCase_043839_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043839_2 "lip_pos_x_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043839, VkglTestCase_043839_1, VkglTestCase_043839_2);

#define VkglTestCase_043840_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043840_2 "lip_pos_x_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043840, VkglTestCase_043840_1, VkglTestCase_043840_2);

#define VkglTestCase_043841_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043841_2 "lip_pos_x_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043841, VkglTestCase_043841_1, VkglTestCase_043841_2);

#define VkglTestCase_043842_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043842_2 "lip_pos_x_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043842, VkglTestCase_043842_1, VkglTestCase_043842_2);

#define VkglTestCase_043843_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043843_2 "lip_pos_x_pos_z_and_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043843, VkglTestCase_043843_1, VkglTestCase_043843_2);

#define VkglTestCase_043844_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043844_2 "hree.clip_neg_x_pos_z_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043844, VkglTestCase_043844_1, VkglTestCase_043844_2);

#define VkglTestCase_043845_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_043845_2 "hree.clip_neg_x_pos_z_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043845, VkglTestCase_043845_1, VkglTestCase_043845_2);

#define VkglTestCase_043846_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043846_2 "lip_neg_x_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043846, VkglTestCase_043846_1, VkglTestCase_043846_2);

#define VkglTestCase_043847_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043847_2 "lip_neg_x_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043847, VkglTestCase_043847_1, VkglTestCase_043847_2);

#define VkglTestCase_043848_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043848_2 "lip_neg_x_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043848, VkglTestCase_043848_1, VkglTestCase_043848_2);

#define VkglTestCase_043849_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043849_2 "lip_neg_x_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043849, VkglTestCase_043849_1, VkglTestCase_043849_2);

#define VkglTestCase_043850_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043850_2 "lip_neg_x_pos_z_and_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043850, VkglTestCase_043850_1, VkglTestCase_043850_2);

#define VkglTestCase_043851_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043851_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043851, VkglTestCase_043851_1, VkglTestCase_043851_2);

#define VkglTestCase_043852_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043852_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043852, VkglTestCase_043852_1, VkglTestCase_043852_2);

#define VkglTestCase_043853_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043853_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043853, VkglTestCase_043853_1, VkglTestCase_043853_2);

#define VkglTestCase_043854_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043854_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043854, VkglTestCase_043854_1, VkglTestCase_043854_2);

#define VkglTestCase_043855_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043855_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043855, VkglTestCase_043855_1, VkglTestCase_043855_2);

#define VkglTestCase_043856_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043856_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043856, VkglTestCase_043856_1, VkglTestCase_043856_2);

#define VkglTestCase_043857_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043857_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043857, VkglTestCase_043857_1, VkglTestCase_043857_2);

#define VkglTestCase_043858_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043858_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043858, VkglTestCase_043858_1, VkglTestCase_043858_2);

#define VkglTestCase_043859_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043859_2 "lip_neg_y_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043859, VkglTestCase_043859_1, VkglTestCase_043859_2);

#define VkglTestCase_043860_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043860_2 "lip_neg_y_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043860, VkglTestCase_043860_1, VkglTestCase_043860_2);

#define VkglTestCase_043861_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043861_2 "lip_neg_y_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043861, VkglTestCase_043861_1, VkglTestCase_043861_2);

#define VkglTestCase_043862_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043862_2 "lip_neg_y_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043862, VkglTestCase_043862_1, VkglTestCase_043862_2);

#define VkglTestCase_043863_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043863_2 "lip_neg_y_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043863, VkglTestCase_043863_1, VkglTestCase_043863_2);

#define VkglTestCase_043864_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043864_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043864, VkglTestCase_043864_1, VkglTestCase_043864_2);

#define VkglTestCase_043865_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043865_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043865, VkglTestCase_043865_1, VkglTestCase_043865_2);

#define VkglTestCase_043866_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043866_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043866, VkglTestCase_043866_1, VkglTestCase_043866_2);

#define VkglTestCase_043867_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043867_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043867, VkglTestCase_043867_1, VkglTestCase_043867_2);

#define VkglTestCase_043868_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043868_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043868, VkglTestCase_043868_1, VkglTestCase_043868_2);

#define VkglTestCase_043869_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043869_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043869, VkglTestCase_043869_1, VkglTestCase_043869_2);

#define VkglTestCase_043870_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043870_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043870, VkglTestCase_043870_1, VkglTestCase_043870_2);

#define VkglTestCase_043871_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_043871_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043871, VkglTestCase_043871_1, VkglTestCase_043871_2);

#define VkglTestCase_043872_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043872_2 "lip_pos_y_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043872, VkglTestCase_043872_1, VkglTestCase_043872_2);

#define VkglTestCase_043873_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043873_2 "lip_pos_y_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043873, VkglTestCase_043873_1, VkglTestCase_043873_2);

#define VkglTestCase_043874_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043874_2 "lip_pos_y_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043874, VkglTestCase_043874_1, VkglTestCase_043874_2);

#define VkglTestCase_043875_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043875_2 "lip_pos_y_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043875, VkglTestCase_043875_1, VkglTestCase_043875_2);

#define VkglTestCase_043876_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043876_2 "lip_pos_y_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043876, VkglTestCase_043876_1, VkglTestCase_043876_2);

#define VkglTestCase_043877_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043877_2 "lip_pos_y_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043877, VkglTestCase_043877_1, VkglTestCase_043877_2);

#define VkglTestCase_043878_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043878_2 "lip_pos_y_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043878, VkglTestCase_043878_1, VkglTestCase_043878_2);

#define VkglTestCase_043879_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043879_2 "lip_pos_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043879, VkglTestCase_043879_1, VkglTestCase_043879_2);

#define VkglTestCase_043880_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043880_2 "lip_pos_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043880, VkglTestCase_043880_1, VkglTestCase_043880_2);

#define VkglTestCase_043881_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043881_2 "lip_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043881, VkglTestCase_043881_1, VkglTestCase_043881_2);

#define VkglTestCase_043882_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043882_2 "lip_neg_y_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043882, VkglTestCase_043882_1, VkglTestCase_043882_2);

#define VkglTestCase_043883_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043883_2 "lip_neg_y_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043883, VkglTestCase_043883_1, VkglTestCase_043883_2);

#define VkglTestCase_043884_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043884_2 "lip_neg_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043884, VkglTestCase_043884_1, VkglTestCase_043884_2);

#define VkglTestCase_043885_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043885_2 "lip_neg_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043885, VkglTestCase_043885_1, VkglTestCase_043885_2);

#define VkglTestCase_043886_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_043886_2 "lip_neg_y_pos_z_and_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043886, VkglTestCase_043886_1, VkglTestCase_043886_2);

#define VkglTestCase_043887_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043887_2 "_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043887, VkglTestCase_043887_1, VkglTestCase_043887_2);

#define VkglTestCase_043888_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043888_2 "_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043888, VkglTestCase_043888_1, VkglTestCase_043888_2);

#define VkglTestCase_043889_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043889_2 "_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043889, VkglTestCase_043889_1, VkglTestCase_043889_2);

#define VkglTestCase_043890_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043890_2 "_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043890, VkglTestCase_043890_1, VkglTestCase_043890_2);

#define VkglTestCase_043891_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043891_2 "_neg_x_neg_y_pos_z_and_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043891, VkglTestCase_043891_1, VkglTestCase_043891_2);

#define VkglTestCase_043892_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043892_2 "_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043892, VkglTestCase_043892_1, VkglTestCase_043892_2);

#define VkglTestCase_043893_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043893_2 "_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043893, VkglTestCase_043893_1, VkglTestCase_043893_2);

#define VkglTestCase_043894_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043894_2 "_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043894, VkglTestCase_043894_1, VkglTestCase_043894_2);

#define VkglTestCase_043895_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043895_2 "_pos_x_neg_y_pos_z_and_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043895, VkglTestCase_043895_1, VkglTestCase_043895_2);

#define VkglTestCase_043896_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043896_2 "_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043896, VkglTestCase_043896_1, VkglTestCase_043896_2);

#define VkglTestCase_043897_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043897_2 "_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043897, VkglTestCase_043897_1, VkglTestCase_043897_2);

#define VkglTestCase_043898_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043898_2 "_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043898, VkglTestCase_043898_1, VkglTestCase_043898_2);

#define VkglTestCase_043899_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043899_2 "_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043899, VkglTestCase_043899_1, VkglTestCase_043899_2);

#define VkglTestCase_043900_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043900_2 "_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043900, VkglTestCase_043900_1, VkglTestCase_043900_2);

#define VkglTestCase_043901_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043901_2 "_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043901, VkglTestCase_043901_1, VkglTestCase_043901_2);

#define VkglTestCase_043902_1 "dEQP-GLES3.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_043902_2 "_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043902, VkglTestCase_043902_1, VkglTestCase_043902_2);
