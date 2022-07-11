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
#include "../ActsDeqpgles20017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016039_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_016039_2 "ex.clip_three.clip_neg_x_and_pos_x_and_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016039, VkglTestCase_016039_1, VkglTestCase_016039_2);

#define VkglTestCase_016040_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_016040_2 "ex.clip_three.clip_neg_x_and_pos_x_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016040, VkglTestCase_016040_1, VkglTestCase_016040_2);

#define VkglTestCase_016041_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016041_2 "clip_three.clip_neg_x_and_pos_x_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016041, VkglTestCase_016041_1, VkglTestCase_016041_2);

#define VkglTestCase_016042_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016042_2 "clip_three.clip_neg_x_and_pos_x_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016042, VkglTestCase_016042_1, VkglTestCase_016042_2);

#define VkglTestCase_016043_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016043_2 "clip_three.clip_neg_x_and_pos_x_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016043, VkglTestCase_016043_1, VkglTestCase_016043_2);

#define VkglTestCase_016044_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016044_2 "clip_three.clip_neg_x_and_pos_x_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016044, VkglTestCase_016044_1, VkglTestCase_016044_2);

#define VkglTestCase_016045_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016045_2 "clip_three.clip_neg_x_and_pos_x_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016045, VkglTestCase_016045_1, VkglTestCase_016045_2);

#define VkglTestCase_016046_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016046_2 "clip_three.clip_neg_x_and_pos_x_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016046, VkglTestCase_016046_1, VkglTestCase_016046_2);

#define VkglTestCase_016047_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016047_2 "clip_three.clip_neg_x_and_pos_x_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016047, VkglTestCase_016047_1, VkglTestCase_016047_2);

#define VkglTestCase_016048_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016048_2 "clip_three.clip_neg_x_and_pos_x_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016048, VkglTestCase_016048_1, VkglTestCase_016048_2);

#define VkglTestCase_016049_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016049_2 "p_three.clip_neg_x_and_pos_x_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016049, VkglTestCase_016049_1, VkglTestCase_016049_2);

#define VkglTestCase_016050_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016050_2 "p_three.clip_neg_x_and_pos_x_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016050, VkglTestCase_016050_1, VkglTestCase_016050_2);

#define VkglTestCase_016051_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016051_2 "p_three.clip_neg_x_and_pos_x_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016051, VkglTestCase_016051_1, VkglTestCase_016051_2);

#define VkglTestCase_016052_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016052_2 "p_three.clip_neg_x_and_pos_x_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016052, VkglTestCase_016052_1, VkglTestCase_016052_2);

#define VkglTestCase_016053_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016053_2 "p_three.clip_neg_x_and_pos_x_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016053, VkglTestCase_016053_1, VkglTestCase_016053_2);

#define VkglTestCase_016054_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016054_2 "p_three.clip_neg_x_and_pos_x_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016054, VkglTestCase_016054_1, VkglTestCase_016054_2);

#define VkglTestCase_016055_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016055_2 "p_three.clip_neg_x_and_pos_x_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016055, VkglTestCase_016055_1, VkglTestCase_016055_2);

#define VkglTestCase_016056_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016056_2 "p_three.clip_neg_x_and_pos_x_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016056, VkglTestCase_016056_1, VkglTestCase_016056_2);

#define VkglTestCase_016057_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_016057_2 "ex.clip_three.clip_neg_x_and_pos_y_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016057, VkglTestCase_016057_1, VkglTestCase_016057_2);

#define VkglTestCase_016058_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016058_2 "clip_three.clip_neg_x_and_pos_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016058, VkglTestCase_016058_1, VkglTestCase_016058_2);

#define VkglTestCase_016059_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016059_2 "clip_three.clip_neg_x_and_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016059, VkglTestCase_016059_1, VkglTestCase_016059_2);

#define VkglTestCase_016060_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016060_2 "p_three.clip_neg_x_and_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016060, VkglTestCase_016060_1, VkglTestCase_016060_2);

#define VkglTestCase_016061_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016061_2 "p_three.clip_neg_x_and_pos_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016061, VkglTestCase_016061_1, VkglTestCase_016061_2);

#define VkglTestCase_016062_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016062_2 "p_three.clip_neg_x_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016062, VkglTestCase_016062_1, VkglTestCase_016062_2);

#define VkglTestCase_016063_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016063_2 "p_three.clip_neg_x_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016063, VkglTestCase_016063_1, VkglTestCase_016063_2);

#define VkglTestCase_016064_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016064_2 "hree.clip_neg_x_and_neg_y_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016064, VkglTestCase_016064_1, VkglTestCase_016064_2);

#define VkglTestCase_016065_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016065_2 "p_three.clip_neg_x_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016065, VkglTestCase_016065_1, VkglTestCase_016065_2);

#define VkglTestCase_016066_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016066_2 "hree.clip_neg_x_and_pos_y_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016066, VkglTestCase_016066_1, VkglTestCase_016066_2);

#define VkglTestCase_016067_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016067_2 "hree.clip_neg_x_and_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016067, VkglTestCase_016067_1, VkglTestCase_016067_2);

#define VkglTestCase_016068_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016068_2 "hree.clip_neg_x_and_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016068, VkglTestCase_016068_1, VkglTestCase_016068_2);

#define VkglTestCase_016069_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016069_2 "e.clip_neg_x_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016069, VkglTestCase_016069_1, VkglTestCase_016069_2);

#define VkglTestCase_016070_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016070_2 "e.clip_neg_x_and_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016070, VkglTestCase_016070_1, VkglTestCase_016070_2);

#define VkglTestCase_016071_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016071_2 "e.clip_neg_x_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016071, VkglTestCase_016071_1, VkglTestCase_016071_2);

#define VkglTestCase_016072_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016072_2 "e.clip_neg_x_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016072, VkglTestCase_016072_1, VkglTestCase_016072_2);

#define VkglTestCase_016073_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016073_2 "e.clip_neg_x_and_pos_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016073, VkglTestCase_016073_1, VkglTestCase_016073_2);

#define VkglTestCase_016074_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016074_2 "e.clip_neg_x_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016074, VkglTestCase_016074_1, VkglTestCase_016074_2);

#define VkglTestCase_016075_1 "dEQP-GLES2.functional.clipping.triangle_vert"
#define VkglTestCase_016075_2 "ex.clip_three.clip_pos_x_and_pos_y_and_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016075, VkglTestCase_016075_1, VkglTestCase_016075_2);

#define VkglTestCase_016076_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016076_2 "clip_three.clip_pos_x_and_pos_y_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016076, VkglTestCase_016076_1, VkglTestCase_016076_2);

#define VkglTestCase_016077_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016077_2 "clip_three.clip_pos_x_and_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016077, VkglTestCase_016077_1, VkglTestCase_016077_2);

#define VkglTestCase_016078_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016078_2 "p_three.clip_pos_x_and_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016078, VkglTestCase_016078_1, VkglTestCase_016078_2);

#define VkglTestCase_016079_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016079_2 "p_three.clip_pos_x_and_neg_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016079, VkglTestCase_016079_1, VkglTestCase_016079_2);

#define VkglTestCase_016080_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016080_2 "p_three.clip_pos_x_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016080, VkglTestCase_016080_1, VkglTestCase_016080_2);

#define VkglTestCase_016081_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016081_2 "p_three.clip_pos_x_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016081, VkglTestCase_016081_1, VkglTestCase_016081_2);

#define VkglTestCase_016082_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016082_2 "hree.clip_pos_x_and_neg_y_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016082, VkglTestCase_016082_1, VkglTestCase_016082_2);

#define VkglTestCase_016083_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016083_2 "p_three.clip_pos_x_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016083, VkglTestCase_016083_1, VkglTestCase_016083_2);

#define VkglTestCase_016084_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016084_2 "hree.clip_pos_x_and_pos_y_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016084, VkglTestCase_016084_1, VkglTestCase_016084_2);

#define VkglTestCase_016085_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016085_2 "hree.clip_pos_x_and_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016085, VkglTestCase_016085_1, VkglTestCase_016085_2);

#define VkglTestCase_016086_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016086_2 "hree.clip_pos_x_and_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016086, VkglTestCase_016086_1, VkglTestCase_016086_2);

#define VkglTestCase_016087_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016087_2 "e.clip_pos_x_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016087, VkglTestCase_016087_1, VkglTestCase_016087_2);

#define VkglTestCase_016088_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016088_2 "e.clip_pos_x_and_neg_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016088, VkglTestCase_016088_1, VkglTestCase_016088_2);

#define VkglTestCase_016089_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016089_2 "e.clip_pos_x_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016089, VkglTestCase_016089_1, VkglTestCase_016089_2);

#define VkglTestCase_016090_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016090_2 "e.clip_pos_x_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016090, VkglTestCase_016090_1, VkglTestCase_016090_2);

#define VkglTestCase_016091_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016091_2 "e.clip_pos_x_and_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016091, VkglTestCase_016091_1, VkglTestCase_016091_2);

#define VkglTestCase_016092_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016092_2 "e.clip_pos_x_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016092, VkglTestCase_016092_1, VkglTestCase_016092_2);

#define VkglTestCase_016093_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016093_2 "clip_three.clip_pos_y_and_neg_y_and_neg_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016093, VkglTestCase_016093_1, VkglTestCase_016093_2);

#define VkglTestCase_016094_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016094_2 "clip_three.clip_pos_y_and_neg_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016094, VkglTestCase_016094_1, VkglTestCase_016094_2);

#define VkglTestCase_016095_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016095_2 "clip_three.clip_pos_y_and_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016095, VkglTestCase_016095_1, VkglTestCase_016095_2);

#define VkglTestCase_016096_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016096_2 "clip_three.clip_pos_y_and_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016096, VkglTestCase_016096_1, VkglTestCase_016096_2);

#define VkglTestCase_016097_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016097_2 "clip_three.clip_pos_y_and_neg_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016097, VkglTestCase_016097_1, VkglTestCase_016097_2);

#define VkglTestCase_016098_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016098_2 "clip_three.clip_pos_y_and_neg_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016098, VkglTestCase_016098_1, VkglTestCase_016098_2);

#define VkglTestCase_016099_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016099_2 "clip_three.clip_pos_y_and_neg_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016099, VkglTestCase_016099_1, VkglTestCase_016099_2);

#define VkglTestCase_016100_1 "dEQP-GLES2.functional.clipping.triangle_vertex."
#define VkglTestCase_016100_2 "clip_three.clip_pos_y_and_neg_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016100, VkglTestCase_016100_1, VkglTestCase_016100_2);

#define VkglTestCase_016101_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016101_2 "p_three.clip_pos_y_and_neg_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016101, VkglTestCase_016101_1, VkglTestCase_016101_2);

#define VkglTestCase_016102_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016102_2 "p_three.clip_pos_y_and_neg_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016102, VkglTestCase_016102_1, VkglTestCase_016102_2);

#define VkglTestCase_016103_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016103_2 "p_three.clip_pos_y_and_neg_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016103, VkglTestCase_016103_1, VkglTestCase_016103_2);

#define VkglTestCase_016104_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016104_2 "p_three.clip_pos_y_and_neg_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016104, VkglTestCase_016104_1, VkglTestCase_016104_2);

#define VkglTestCase_016105_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016105_2 "p_three.clip_pos_y_and_neg_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016105, VkglTestCase_016105_1, VkglTestCase_016105_2);

#define VkglTestCase_016106_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016106_2 "p_three.clip_pos_y_and_neg_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016106, VkglTestCase_016106_1, VkglTestCase_016106_2);

#define VkglTestCase_016107_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016107_2 "p_three.clip_pos_y_and_neg_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016107, VkglTestCase_016107_1, VkglTestCase_016107_2);

#define VkglTestCase_016108_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016108_2 "p_three.clip_pos_y_and_neg_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016108, VkglTestCase_016108_1, VkglTestCase_016108_2);

#define VkglTestCase_016109_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016109_2 "p_three.clip_pos_y_and_neg_x_neg_y_and_pos_x_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016109, VkglTestCase_016109_1, VkglTestCase_016109_2);

#define VkglTestCase_016110_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016110_2 "p_three.clip_pos_y_and_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016110, VkglTestCase_016110_1, VkglTestCase_016110_2);

#define VkglTestCase_016111_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016111_2 "p_three.clip_pos_y_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016111, VkglTestCase_016111_1, VkglTestCase_016111_2);

#define VkglTestCase_016112_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016112_2 "p_three.clip_pos_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016112, VkglTestCase_016112_1, VkglTestCase_016112_2);

#define VkglTestCase_016113_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016113_2 "hree.clip_pos_y_and_neg_x_neg_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016113, VkglTestCase_016113_1, VkglTestCase_016113_2);

#define VkglTestCase_016114_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016114_2 "p_three.clip_pos_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016114, VkglTestCase_016114_1, VkglTestCase_016114_2);

#define VkglTestCase_016115_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016115_2 "hree.clip_pos_y_and_pos_x_neg_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016115, VkglTestCase_016115_1, VkglTestCase_016115_2);

#define VkglTestCase_016116_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016116_2 "hree.clip_pos_y_and_pos_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016116, VkglTestCase_016116_1, VkglTestCase_016116_2);

#define VkglTestCase_016117_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016117_2 "hree.clip_pos_y_and_neg_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016117, VkglTestCase_016117_1, VkglTestCase_016117_2);

#define VkglTestCase_016118_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016118_2 "e.clip_pos_y_and_neg_x_neg_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016118, VkglTestCase_016118_1, VkglTestCase_016118_2);

#define VkglTestCase_016119_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016119_2 "e.clip_pos_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016119, VkglTestCase_016119_1, VkglTestCase_016119_2);

#define VkglTestCase_016120_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016120_2 "e.clip_pos_y_and_pos_x_neg_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016120, VkglTestCase_016120_1, VkglTestCase_016120_2);

#define VkglTestCase_016121_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016121_2 "e.clip_pos_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016121, VkglTestCase_016121_1, VkglTestCase_016121_2);

#define VkglTestCase_016122_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016122_2 "e.clip_pos_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016122, VkglTestCase_016122_1, VkglTestCase_016122_2);

#define VkglTestCase_016123_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016123_2 "e.clip_pos_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016123, VkglTestCase_016123_1, VkglTestCase_016123_2);

#define VkglTestCase_016124_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016124_2 "p_three.clip_neg_y_and_neg_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016124, VkglTestCase_016124_1, VkglTestCase_016124_2);

#define VkglTestCase_016125_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016125_2 "p_three.clip_neg_y_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016125, VkglTestCase_016125_1, VkglTestCase_016125_2);

#define VkglTestCase_016126_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016126_2 "p_three.clip_neg_y_and_pos_x_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016126, VkglTestCase_016126_1, VkglTestCase_016126_2);

#define VkglTestCase_016127_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016127_2 "p_three.clip_neg_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016127, VkglTestCase_016127_1, VkglTestCase_016127_2);

#define VkglTestCase_016128_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016128_2 "hree.clip_neg_y_and_neg_x_neg_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016128, VkglTestCase_016128_1, VkglTestCase_016128_2);

#define VkglTestCase_016129_1 "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
#define VkglTestCase_016129_2 "p_three.clip_neg_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016129, VkglTestCase_016129_1, VkglTestCase_016129_2);

#define VkglTestCase_016130_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016130_2 "hree.clip_neg_y_and_pos_x_neg_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016130, VkglTestCase_016130_1, VkglTestCase_016130_2);

#define VkglTestCase_016131_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016131_2 "hree.clip_neg_y_and_pos_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016131, VkglTestCase_016131_1, VkglTestCase_016131_2);

#define VkglTestCase_016132_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016132_2 "hree.clip_neg_y_and_neg_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016132, VkglTestCase_016132_1, VkglTestCase_016132_2);

#define VkglTestCase_016133_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016133_2 "e.clip_neg_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016133, VkglTestCase_016133_1, VkglTestCase_016133_2);

#define VkglTestCase_016134_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016134_2 "e.clip_neg_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016134, VkglTestCase_016134_1, VkglTestCase_016134_2);

#define VkglTestCase_016135_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016135_2 "e.clip_neg_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016135, VkglTestCase_016135_1, VkglTestCase_016135_2);

#define VkglTestCase_016136_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016136_2 "e.clip_neg_y_and_pos_x_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016136, VkglTestCase_016136_1, VkglTestCase_016136_2);

#define VkglTestCase_016137_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016137_2 "e.clip_neg_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016137, VkglTestCase_016137_1, VkglTestCase_016137_2);

#define VkglTestCase_016138_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016138_2 "e.clip_neg_y_and_neg_x_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016138, VkglTestCase_016138_1, VkglTestCase_016138_2);

#define VkglTestCase_016139_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016139_2 "hree.clip_neg_x_neg_y_and_pos_x_neg_y_and_pos_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016139, VkglTestCase_016139_1, VkglTestCase_016139_2);

#define VkglTestCase_016140_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016140_2 "hree.clip_neg_x_neg_y_and_pos_x_neg_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016140, VkglTestCase_016140_1, VkglTestCase_016140_2);

#define VkglTestCase_016141_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016141_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016141, VkglTestCase_016141_1, VkglTestCase_016141_2);

#define VkglTestCase_016142_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016142_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016142, VkglTestCase_016142_1, VkglTestCase_016142_2);

#define VkglTestCase_016143_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016143_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016143, VkglTestCase_016143_1, VkglTestCase_016143_2);

#define VkglTestCase_016144_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016144_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016144, VkglTestCase_016144_1, VkglTestCase_016144_2);

#define VkglTestCase_016145_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016145_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016145, VkglTestCase_016145_1, VkglTestCase_016145_2);

#define VkglTestCase_016146_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016146_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016146, VkglTestCase_016146_1, VkglTestCase_016146_2);

#define VkglTestCase_016147_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016147_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016147, VkglTestCase_016147_1, VkglTestCase_016147_2);

#define VkglTestCase_016148_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016148_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016148, VkglTestCase_016148_1, VkglTestCase_016148_2);

#define VkglTestCase_016149_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016149_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016149, VkglTestCase_016149_1, VkglTestCase_016149_2);

#define VkglTestCase_016150_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016150_2 "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016150, VkglTestCase_016150_1, VkglTestCase_016150_2);

#define VkglTestCase_016151_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016151_2 "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016151, VkglTestCase_016151_1, VkglTestCase_016151_2);

#define VkglTestCase_016152_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016152_2 "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016152, VkglTestCase_016152_1, VkglTestCase_016152_2);

#define VkglTestCase_016153_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016153_2 "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016153, VkglTestCase_016153_1, VkglTestCase_016153_2);

#define VkglTestCase_016154_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016154_2 "hree.clip_neg_x_neg_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016154, VkglTestCase_016154_1, VkglTestCase_016154_2);

#define VkglTestCase_016155_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016155_2 "hree.clip_neg_x_neg_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016155, VkglTestCase_016155_1, VkglTestCase_016155_2);

#define VkglTestCase_016156_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016156_2 "hree.clip_neg_x_neg_y_and_pos_x_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016156, VkglTestCase_016156_1, VkglTestCase_016156_2);

#define VkglTestCase_016157_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016157_2 "hree.clip_neg_x_neg_y_and_pos_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016157, VkglTestCase_016157_1, VkglTestCase_016157_2);

#define VkglTestCase_016158_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016158_2 "hree.clip_neg_x_neg_y_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016158, VkglTestCase_016158_1, VkglTestCase_016158_2);

#define VkglTestCase_016159_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016159_2 "hree.clip_neg_x_neg_y_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016159, VkglTestCase_016159_1, VkglTestCase_016159_2);

#define VkglTestCase_016160_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016160_2 "lip_neg_x_neg_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016160, VkglTestCase_016160_1, VkglTestCase_016160_2);

#define VkglTestCase_016161_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016161_2 "lip_neg_x_neg_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016161, VkglTestCase_016161_1, VkglTestCase_016161_2);

#define VkglTestCase_016162_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016162_2 "hree.clip_pos_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016162, VkglTestCase_016162_1, VkglTestCase_016162_2);

#define VkglTestCase_016163_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016163_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016163, VkglTestCase_016163_1, VkglTestCase_016163_2);

#define VkglTestCase_016164_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016164_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016164, VkglTestCase_016164_1, VkglTestCase_016164_2);

#define VkglTestCase_016165_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016165_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016165, VkglTestCase_016165_1, VkglTestCase_016165_2);

#define VkglTestCase_016166_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016166_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016166, VkglTestCase_016166_1, VkglTestCase_016166_2);

#define VkglTestCase_016167_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016167_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016167, VkglTestCase_016167_1, VkglTestCase_016167_2);

#define VkglTestCase_016168_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016168_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016168, VkglTestCase_016168_1, VkglTestCase_016168_2);

#define VkglTestCase_016169_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016169_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016169, VkglTestCase_016169_1, VkglTestCase_016169_2);

#define VkglTestCase_016170_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016170_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016170, VkglTestCase_016170_1, VkglTestCase_016170_2);

#define VkglTestCase_016171_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016171_2 "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016171, VkglTestCase_016171_1, VkglTestCase_016171_2);

#define VkglTestCase_016172_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016172_2 "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016172, VkglTestCase_016172_1, VkglTestCase_016172_2);

#define VkglTestCase_016173_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016173_2 "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016173, VkglTestCase_016173_1, VkglTestCase_016173_2);

#define VkglTestCase_016174_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016174_2 "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016174, VkglTestCase_016174_1, VkglTestCase_016174_2);

#define VkglTestCase_016175_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016175_2 "hree.clip_pos_x_neg_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016175, VkglTestCase_016175_1, VkglTestCase_016175_2);

#define VkglTestCase_016176_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016176_2 "hree.clip_pos_x_neg_y_and_neg_x_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016176, VkglTestCase_016176_1, VkglTestCase_016176_2);

#define VkglTestCase_016177_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016177_2 "hree.clip_pos_x_neg_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016177, VkglTestCase_016177_1, VkglTestCase_016177_2);

#define VkglTestCase_016178_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016178_2 "hree.clip_pos_x_neg_y_and_neg_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016178, VkglTestCase_016178_1, VkglTestCase_016178_2);

#define VkglTestCase_016179_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016179_2 "hree.clip_pos_x_neg_y_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016179, VkglTestCase_016179_1, VkglTestCase_016179_2);

#define VkglTestCase_016180_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016180_2 "hree.clip_pos_x_neg_y_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016180, VkglTestCase_016180_1, VkglTestCase_016180_2);

#define VkglTestCase_016181_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016181_2 "lip_pos_x_neg_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016181, VkglTestCase_016181_1, VkglTestCase_016181_2);

#define VkglTestCase_016182_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016182_2 "lip_pos_x_neg_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016182, VkglTestCase_016182_1, VkglTestCase_016182_2);

#define VkglTestCase_016183_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016183_2 "hree.clip_pos_x_pos_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016183, VkglTestCase_016183_1, VkglTestCase_016183_2);

#define VkglTestCase_016184_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016184_2 "hree.clip_pos_x_pos_y_and_neg_x_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016184, VkglTestCase_016184_1, VkglTestCase_016184_2);

#define VkglTestCase_016185_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016185_2 "hree.clip_pos_x_pos_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016185, VkglTestCase_016185_1, VkglTestCase_016185_2);

#define VkglTestCase_016186_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016186_2 "hree.clip_pos_x_pos_y_and_neg_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016186, VkglTestCase_016186_1, VkglTestCase_016186_2);

#define VkglTestCase_016187_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016187_2 "hree.clip_pos_x_pos_y_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016187, VkglTestCase_016187_1, VkglTestCase_016187_2);

#define VkglTestCase_016188_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016188_2 "hree.clip_pos_x_pos_y_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016188, VkglTestCase_016188_1, VkglTestCase_016188_2);

#define VkglTestCase_016189_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016189_2 "lip_pos_x_pos_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016189, VkglTestCase_016189_1, VkglTestCase_016189_2);

#define VkglTestCase_016190_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016190_2 "lip_pos_x_pos_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016190, VkglTestCase_016190_1, VkglTestCase_016190_2);

#define VkglTestCase_016191_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016191_2 "hree.clip_neg_x_pos_y_and_neg_x_neg_z_and_pos_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016191, VkglTestCase_016191_1, VkglTestCase_016191_2);

#define VkglTestCase_016192_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016192_2 "hree.clip_neg_x_pos_y_and_pos_x_neg_z_and_neg_x_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016192, VkglTestCase_016192_1, VkglTestCase_016192_2);

#define VkglTestCase_016193_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016193_2 "hree.clip_neg_x_pos_y_and_pos_x_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016193, VkglTestCase_016193_1, VkglTestCase_016193_2);

#define VkglTestCase_016194_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016194_2 "hree.clip_neg_x_pos_y_and_pos_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016194, VkglTestCase_016194_1, VkglTestCase_016194_2);

#define VkglTestCase_016195_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016195_2 "hree.clip_neg_x_pos_y_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016195, VkglTestCase_016195_1, VkglTestCase_016195_2);

#define VkglTestCase_016196_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016196_2 "hree.clip_neg_x_pos_y_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016196, VkglTestCase_016196_1, VkglTestCase_016196_2);

#define VkglTestCase_016197_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016197_2 "lip_neg_x_pos_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016197, VkglTestCase_016197_1, VkglTestCase_016197_2);

#define VkglTestCase_016198_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016198_2 "lip_neg_x_pos_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016198, VkglTestCase_016198_1, VkglTestCase_016198_2);

#define VkglTestCase_016199_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016199_2 "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016199, VkglTestCase_016199_1, VkglTestCase_016199_2);

#define VkglTestCase_016200_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016200_2 "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016200, VkglTestCase_016200_1, VkglTestCase_016200_2);

#define VkglTestCase_016201_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016201_2 "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016201, VkglTestCase_016201_1, VkglTestCase_016201_2);

#define VkglTestCase_016202_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016202_2 "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016202, VkglTestCase_016202_1, VkglTestCase_016202_2);

#define VkglTestCase_016203_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016203_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016203, VkglTestCase_016203_1, VkglTestCase_016203_2);

#define VkglTestCase_016204_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016204_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016204, VkglTestCase_016204_1, VkglTestCase_016204_2);

#define VkglTestCase_016205_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016205_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016205, VkglTestCase_016205_1, VkglTestCase_016205_2);

#define VkglTestCase_016206_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016206_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016206, VkglTestCase_016206_1, VkglTestCase_016206_2);

#define VkglTestCase_016207_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016207_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016207, VkglTestCase_016207_1, VkglTestCase_016207_2);

#define VkglTestCase_016208_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016208_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016208, VkglTestCase_016208_1, VkglTestCase_016208_2);

#define VkglTestCase_016209_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016209_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016209, VkglTestCase_016209_1, VkglTestCase_016209_2);

#define VkglTestCase_016210_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016210_2 "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016210, VkglTestCase_016210_1, VkglTestCase_016210_2);

#define VkglTestCase_016211_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016211_2 "hree.clip_neg_x_neg_z_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016211, VkglTestCase_016211_1, VkglTestCase_016211_2);

#define VkglTestCase_016212_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016212_2 "hree.clip_neg_x_neg_z_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016212, VkglTestCase_016212_1, VkglTestCase_016212_2);

#define VkglTestCase_016213_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016213_2 "lip_neg_x_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016213, VkglTestCase_016213_1, VkglTestCase_016213_2);

#define VkglTestCase_016214_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016214_2 "lip_neg_x_neg_z_and_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016214, VkglTestCase_016214_1, VkglTestCase_016214_2);

#define VkglTestCase_016215_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016215_2 "lip_neg_x_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016215, VkglTestCase_016215_1, VkglTestCase_016215_2);

#define VkglTestCase_016216_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016216_2 "lip_neg_x_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016216, VkglTestCase_016216_1, VkglTestCase_016216_2);

#define VkglTestCase_016217_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016217_2 "lip_neg_x_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016217, VkglTestCase_016217_1, VkglTestCase_016217_2);

#define VkglTestCase_016218_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016218_2 "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016218, VkglTestCase_016218_1, VkglTestCase_016218_2);

#define VkglTestCase_016219_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016219_2 "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016219, VkglTestCase_016219_1, VkglTestCase_016219_2);

#define VkglTestCase_016220_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016220_2 "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016220, VkglTestCase_016220_1, VkglTestCase_016220_2);

#define VkglTestCase_016221_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016221_2 "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016221, VkglTestCase_016221_1, VkglTestCase_016221_2);

#define VkglTestCase_016222_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016222_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016222, VkglTestCase_016222_1, VkglTestCase_016222_2);

#define VkglTestCase_016223_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016223_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016223, VkglTestCase_016223_1, VkglTestCase_016223_2);

#define VkglTestCase_016224_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016224_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016224, VkglTestCase_016224_1, VkglTestCase_016224_2);

#define VkglTestCase_016225_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016225_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016225, VkglTestCase_016225_1, VkglTestCase_016225_2);

#define VkglTestCase_016226_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016226_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016226, VkglTestCase_016226_1, VkglTestCase_016226_2);

#define VkglTestCase_016227_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016227_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016227, VkglTestCase_016227_1, VkglTestCase_016227_2);

#define VkglTestCase_016228_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016228_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016228, VkglTestCase_016228_1, VkglTestCase_016228_2);

#define VkglTestCase_016229_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016229_2 "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016229, VkglTestCase_016229_1, VkglTestCase_016229_2);

#define VkglTestCase_016230_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016230_2 "hree.clip_pos_x_neg_z_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016230, VkglTestCase_016230_1, VkglTestCase_016230_2);

#define VkglTestCase_016231_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016231_2 "hree.clip_pos_x_neg_z_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016231, VkglTestCase_016231_1, VkglTestCase_016231_2);

#define VkglTestCase_016232_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016232_2 "lip_pos_x_neg_z_and_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016232, VkglTestCase_016232_1, VkglTestCase_016232_2);

#define VkglTestCase_016233_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016233_2 "lip_pos_x_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016233, VkglTestCase_016233_1, VkglTestCase_016233_2);

#define VkglTestCase_016234_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016234_2 "lip_pos_x_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016234, VkglTestCase_016234_1, VkglTestCase_016234_2);

#define VkglTestCase_016235_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016235_2 "lip_pos_x_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016235, VkglTestCase_016235_1, VkglTestCase_016235_2);

#define VkglTestCase_016236_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016236_2 "lip_pos_x_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016236, VkglTestCase_016236_1, VkglTestCase_016236_2);

#define VkglTestCase_016237_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016237_2 "hree.clip_pos_x_pos_z_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016237, VkglTestCase_016237_1, VkglTestCase_016237_2);

#define VkglTestCase_016238_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016238_2 "hree.clip_pos_x_pos_z_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016238, VkglTestCase_016238_1, VkglTestCase_016238_2);

#define VkglTestCase_016239_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016239_2 "lip_pos_x_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016239, VkglTestCase_016239_1, VkglTestCase_016239_2);

#define VkglTestCase_016240_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016240_2 "lip_pos_x_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016240, VkglTestCase_016240_1, VkglTestCase_016240_2);

#define VkglTestCase_016241_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016241_2 "lip_pos_x_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016241, VkglTestCase_016241_1, VkglTestCase_016241_2);

#define VkglTestCase_016242_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016242_2 "lip_pos_x_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016242, VkglTestCase_016242_1, VkglTestCase_016242_2);

#define VkglTestCase_016243_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016243_2 "lip_pos_x_pos_z_and_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016243, VkglTestCase_016243_1, VkglTestCase_016243_2);

#define VkglTestCase_016244_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016244_2 "hree.clip_neg_x_pos_z_and_neg_y_neg_z_and_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016244, VkglTestCase_016244_1, VkglTestCase_016244_2);

#define VkglTestCase_016245_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
#define VkglTestCase_016245_2 "hree.clip_neg_x_pos_z_and_pos_y_neg_z_and_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016245, VkglTestCase_016245_1, VkglTestCase_016245_2);

#define VkglTestCase_016246_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016246_2 "lip_neg_x_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016246, VkglTestCase_016246_1, VkglTestCase_016246_2);

#define VkglTestCase_016247_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016247_2 "lip_neg_x_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016247, VkglTestCase_016247_1, VkglTestCase_016247_2);

#define VkglTestCase_016248_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016248_2 "lip_neg_x_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016248, VkglTestCase_016248_1, VkglTestCase_016248_2);

#define VkglTestCase_016249_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016249_2 "lip_neg_x_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016249, VkglTestCase_016249_1, VkglTestCase_016249_2);

#define VkglTestCase_016250_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016250_2 "lip_neg_x_pos_z_and_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016250, VkglTestCase_016250_1, VkglTestCase_016250_2);

#define VkglTestCase_016251_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016251_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016251, VkglTestCase_016251_1, VkglTestCase_016251_2);

#define VkglTestCase_016252_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016252_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016252, VkglTestCase_016252_1, VkglTestCase_016252_2);

#define VkglTestCase_016253_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016253_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016253, VkglTestCase_016253_1, VkglTestCase_016253_2);

#define VkglTestCase_016254_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016254_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016254, VkglTestCase_016254_1, VkglTestCase_016254_2);

#define VkglTestCase_016255_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016255_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016255, VkglTestCase_016255_1, VkglTestCase_016255_2);

#define VkglTestCase_016256_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016256_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016256, VkglTestCase_016256_1, VkglTestCase_016256_2);

#define VkglTestCase_016257_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016257_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016257, VkglTestCase_016257_1, VkglTestCase_016257_2);

#define VkglTestCase_016258_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016258_2 "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016258, VkglTestCase_016258_1, VkglTestCase_016258_2);

#define VkglTestCase_016259_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016259_2 "lip_neg_y_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016259, VkglTestCase_016259_1, VkglTestCase_016259_2);

#define VkglTestCase_016260_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016260_2 "lip_neg_y_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016260, VkglTestCase_016260_1, VkglTestCase_016260_2);

#define VkglTestCase_016261_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016261_2 "lip_neg_y_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016261, VkglTestCase_016261_1, VkglTestCase_016261_2);

#define VkglTestCase_016262_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016262_2 "lip_neg_y_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016262, VkglTestCase_016262_1, VkglTestCase_016262_2);

#define VkglTestCase_016263_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016263_2 "lip_neg_y_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016263, VkglTestCase_016263_1, VkglTestCase_016263_2);

#define VkglTestCase_016264_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016264_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016264, VkglTestCase_016264_1, VkglTestCase_016264_2);

#define VkglTestCase_016265_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016265_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016265, VkglTestCase_016265_1, VkglTestCase_016265_2);

#define VkglTestCase_016266_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016266_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016266, VkglTestCase_016266_1, VkglTestCase_016266_2);

#define VkglTestCase_016267_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016267_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_pos_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016267, VkglTestCase_016267_1, VkglTestCase_016267_2);

#define VkglTestCase_016268_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016268_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016268, VkglTestCase_016268_1, VkglTestCase_016268_2);

#define VkglTestCase_016269_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016269_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016269, VkglTestCase_016269_1, VkglTestCase_016269_2);

#define VkglTestCase_016270_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016270_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016270, VkglTestCase_016270_1, VkglTestCase_016270_2);

#define VkglTestCase_016271_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
#define VkglTestCase_016271_2 "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016271, VkglTestCase_016271_1, VkglTestCase_016271_2);

#define VkglTestCase_016272_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016272_2 "lip_pos_y_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016272, VkglTestCase_016272_1, VkglTestCase_016272_2);

#define VkglTestCase_016273_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016273_2 "lip_pos_y_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016273, VkglTestCase_016273_1, VkglTestCase_016273_2);

#define VkglTestCase_016274_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016274_2 "lip_pos_y_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016274, VkglTestCase_016274_1, VkglTestCase_016274_2);

#define VkglTestCase_016275_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016275_2 "lip_pos_y_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016275, VkglTestCase_016275_1, VkglTestCase_016275_2);

#define VkglTestCase_016276_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016276_2 "lip_pos_y_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016276, VkglTestCase_016276_1, VkglTestCase_016276_2);

#define VkglTestCase_016277_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016277_2 "lip_pos_y_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016277, VkglTestCase_016277_1, VkglTestCase_016277_2);

#define VkglTestCase_016278_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016278_2 "lip_pos_y_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016278, VkglTestCase_016278_1, VkglTestCase_016278_2);

#define VkglTestCase_016279_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016279_2 "lip_pos_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016279, VkglTestCase_016279_1, VkglTestCase_016279_2);

#define VkglTestCase_016280_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016280_2 "lip_pos_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016280, VkglTestCase_016280_1, VkglTestCase_016280_2);

#define VkglTestCase_016281_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016281_2 "lip_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016281, VkglTestCase_016281_1, VkglTestCase_016281_2);

#define VkglTestCase_016282_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016282_2 "lip_neg_y_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016282, VkglTestCase_016282_1, VkglTestCase_016282_2);

#define VkglTestCase_016283_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016283_2 "lip_neg_y_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016283, VkglTestCase_016283_1, VkglTestCase_016283_2);

#define VkglTestCase_016284_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016284_2 "lip_neg_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016284, VkglTestCase_016284_1, VkglTestCase_016284_2);

#define VkglTestCase_016285_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016285_2 "lip_neg_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016285, VkglTestCase_016285_1, VkglTestCase_016285_2);

#define VkglTestCase_016286_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
#define VkglTestCase_016286_2 "lip_neg_y_pos_z_and_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016286, VkglTestCase_016286_1, VkglTestCase_016286_2);

#define VkglTestCase_016287_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016287_2 "_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016287, VkglTestCase_016287_1, VkglTestCase_016287_2);

#define VkglTestCase_016288_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016288_2 "_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016288, VkglTestCase_016288_1, VkglTestCase_016288_2);

#define VkglTestCase_016289_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016289_2 "_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016289, VkglTestCase_016289_1, VkglTestCase_016289_2);

#define VkglTestCase_016290_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016290_2 "_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016290, VkglTestCase_016290_1, VkglTestCase_016290_2);

#define VkglTestCase_016291_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016291_2 "_neg_x_neg_y_pos_z_and_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016291, VkglTestCase_016291_1, VkglTestCase_016291_2);

#define VkglTestCase_016292_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016292_2 "_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016292, VkglTestCase_016292_1, VkglTestCase_016292_2);

#define VkglTestCase_016293_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016293_2 "_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016293, VkglTestCase_016293_1, VkglTestCase_016293_2);

#define VkglTestCase_016294_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016294_2 "_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016294, VkglTestCase_016294_1, VkglTestCase_016294_2);

#define VkglTestCase_016295_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016295_2 "_pos_x_neg_y_pos_z_and_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016295, VkglTestCase_016295_1, VkglTestCase_016295_2);

#define VkglTestCase_016296_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016296_2 "_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016296, VkglTestCase_016296_1, VkglTestCase_016296_2);

#define VkglTestCase_016297_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016297_2 "_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016297, VkglTestCase_016297_1, VkglTestCase_016297_2);

#define VkglTestCase_016298_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016298_2 "_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016298, VkglTestCase_016298_1, VkglTestCase_016298_2);

#define VkglTestCase_016299_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016299_2 "_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016299, VkglTestCase_016299_1, VkglTestCase_016299_2);

#define VkglTestCase_016300_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016300_2 "_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016300, VkglTestCase_016300_1, VkglTestCase_016300_2);

#define VkglTestCase_016301_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016301_2 "_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016301, VkglTestCase_016301_1, VkglTestCase_016301_2);

#define VkglTestCase_016302_1 "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
#define VkglTestCase_016302_2 "_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016302, VkglTestCase_016302_1, VkglTestCase_016302_2);
