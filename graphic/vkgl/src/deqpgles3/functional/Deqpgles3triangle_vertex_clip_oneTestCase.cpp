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

#define VkglTestCase_043385_1 "dEQP-GLES3.functional.clipping.tr"
#define VkglTestCase_043385_2 "iangle_vertex.clip_one.clip_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043385, VkglTestCase_043385_1, VkglTestCase_043385_2);

#define VkglTestCase_043386_1 "dEQP-GLES3.functional.clipping.tr"
#define VkglTestCase_043386_2 "iangle_vertex.clip_one.clip_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043386, VkglTestCase_043386_1, VkglTestCase_043386_2);

#define VkglTestCase_043387_1 "dEQP-GLES3.functional.clipping.tr"
#define VkglTestCase_043387_2 "iangle_vertex.clip_one.clip_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043387, VkglTestCase_043387_1, VkglTestCase_043387_2);

#define VkglTestCase_043388_1 "dEQP-GLES3.functional.clipping.tr"
#define VkglTestCase_043388_2 "iangle_vertex.clip_one.clip_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043388, VkglTestCase_043388_1, VkglTestCase_043388_2);

#define VkglTestCase_043389_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043389_2 "gle_vertex.clip_one.clip_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043389, VkglTestCase_043389_1, VkglTestCase_043389_2);

#define VkglTestCase_043390_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043390_2 "gle_vertex.clip_one.clip_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043390, VkglTestCase_043390_1, VkglTestCase_043390_2);

#define VkglTestCase_043391_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043391_2 "gle_vertex.clip_one.clip_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043391, VkglTestCase_043391_1, VkglTestCase_043391_2);

#define VkglTestCase_043392_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043392_2 "gle_vertex.clip_one.clip_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043392, VkglTestCase_043392_1, VkglTestCase_043392_2);

#define VkglTestCase_043393_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043393_2 "gle_vertex.clip_one.clip_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043393, VkglTestCase_043393_1, VkglTestCase_043393_2);

#define VkglTestCase_043394_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043394_2 "gle_vertex.clip_one.clip_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043394, VkglTestCase_043394_1, VkglTestCase_043394_2);

#define VkglTestCase_043395_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043395_2 "gle_vertex.clip_one.clip_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043395, VkglTestCase_043395_1, VkglTestCase_043395_2);

#define VkglTestCase_043396_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043396_2 "gle_vertex.clip_one.clip_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043396, VkglTestCase_043396_1, VkglTestCase_043396_2);

#define VkglTestCase_043397_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043397_2 "gle_vertex.clip_one.clip_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043397, VkglTestCase_043397_1, VkglTestCase_043397_2);

#define VkglTestCase_043398_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043398_2 "gle_vertex.clip_one.clip_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043398, VkglTestCase_043398_1, VkglTestCase_043398_2);

#define VkglTestCase_043399_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043399_2 "gle_vertex.clip_one.clip_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043399, VkglTestCase_043399_1, VkglTestCase_043399_2);

#define VkglTestCase_043400_1 "dEQP-GLES3.functional.clipping.trian"
#define VkglTestCase_043400_2 "gle_vertex.clip_one.clip_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043400, VkglTestCase_043400_1, VkglTestCase_043400_2);

#define VkglTestCase_043401_1 "dEQP-GLES3.functional.clipping.triangle"
#define VkglTestCase_043401_2 "_vertex.clip_one.clip_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043401, VkglTestCase_043401_1, VkglTestCase_043401_2);

#define VkglTestCase_043402_1 "dEQP-GLES3.functional.clipping.triangle"
#define VkglTestCase_043402_2 "_vertex.clip_one.clip_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043402, VkglTestCase_043402_1, VkglTestCase_043402_2);

#define VkglTestCase_043403_1 "dEQP-GLES3.functional.clipping.triangle"
#define VkglTestCase_043403_2 "_vertex.clip_one.clip_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043403, VkglTestCase_043403_1, VkglTestCase_043403_2);

#define VkglTestCase_043404_1 "dEQP-GLES3.functional.clipping.triangle"
#define VkglTestCase_043404_2 "_vertex.clip_one.clip_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043404, VkglTestCase_043404_1, VkglTestCase_043404_2);

#define VkglTestCase_043405_1 "dEQP-GLES3.functional.clipping.triangle"
#define VkglTestCase_043405_2 "_vertex.clip_one.clip_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043405, VkglTestCase_043405_1, VkglTestCase_043405_2);

#define VkglTestCase_043406_1 "dEQP-GLES3.functional.clipping.triangle"
#define VkglTestCase_043406_2 "_vertex.clip_one.clip_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043406, VkglTestCase_043406_1, VkglTestCase_043406_2);

#define VkglTestCase_043407_1 "dEQP-GLES3.functional.clipping.triangle"
#define VkglTestCase_043407_2 "_vertex.clip_one.clip_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043407, VkglTestCase_043407_1, VkglTestCase_043407_2);

#define VkglTestCase_043408_1 "dEQP-GLES3.functional.clipping.triangle"
#define VkglTestCase_043408_2 "_vertex.clip_one.clip_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043408, VkglTestCase_043408_1, VkglTestCase_043408_2);

#define VkglTestCase_043409_1 "dEQP-GLES3.functional.clipping.tr"
#define VkglTestCase_043409_2 "iangle_vertex.clip_one.clip_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043409, VkglTestCase_043409_1, VkglTestCase_043409_2);

#define VkglTestCase_043410_1 "dEQP-GLES3.functional.clipping.tr"
#define VkglTestCase_043410_2 "iangle_vertex.clip_one.clip_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043410, VkglTestCase_043410_1, VkglTestCase_043410_2);
