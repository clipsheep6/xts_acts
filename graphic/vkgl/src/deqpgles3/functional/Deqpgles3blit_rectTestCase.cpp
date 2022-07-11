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
#include "../ActsDeqpgles30033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032060_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032060_2 "o.blit.rect.basic_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032060, VkglTestCase_032060_1, VkglTestCase_032060_2);

#define VkglTestCase_032061_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032061_2 "o.blit.rect.basic_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032061, VkglTestCase_032061_1, VkglTestCase_032061_2);

#define VkglTestCase_032062_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032062_2 "rect.basic_reverse_src_x_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032062, VkglTestCase_032062_1, VkglTestCase_032062_2);

#define VkglTestCase_032063_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032063_2 "rect.basic_reverse_src_x_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032063, VkglTestCase_032063_1, VkglTestCase_032063_2);

#define VkglTestCase_032064_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032064_2 "rect.basic_reverse_src_y_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032064, VkglTestCase_032064_1, VkglTestCase_032064_2);

#define VkglTestCase_032065_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032065_2 "rect.basic_reverse_src_y_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032065, VkglTestCase_032065_1, VkglTestCase_032065_2);

#define VkglTestCase_032066_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032066_2 "rect.basic_reverse_dst_x_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032066, VkglTestCase_032066_1, VkglTestCase_032066_2);

#define VkglTestCase_032067_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032067_2 "rect.basic_reverse_dst_x_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032067, VkglTestCase_032067_1, VkglTestCase_032067_2);

#define VkglTestCase_032068_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032068_2 "rect.basic_reverse_dst_y_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032068, VkglTestCase_032068_1, VkglTestCase_032068_2);

#define VkglTestCase_032069_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032069_2 "rect.basic_reverse_dst_y_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032069, VkglTestCase_032069_1, VkglTestCase_032069_2);

#define VkglTestCase_032070_1 "dEQP-GLES3.functional.fbo.blit.re"
#define VkglTestCase_032070_2 "ct.basic_reverse_src_dst_x_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032070, VkglTestCase_032070_1, VkglTestCase_032070_2);

#define VkglTestCase_032071_1 "dEQP-GLES3.functional.fbo.blit.re"
#define VkglTestCase_032071_2 "ct.basic_reverse_src_dst_x_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032071, VkglTestCase_032071_1, VkglTestCase_032071_2);

#define VkglTestCase_032072_1 "dEQP-GLES3.functional.fbo.blit.re"
#define VkglTestCase_032072_2 "ct.basic_reverse_src_dst_y_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032072, VkglTestCase_032072_1, VkglTestCase_032072_2);

#define VkglTestCase_032073_1 "dEQP-GLES3.functional.fbo.blit.re"
#define VkglTestCase_032073_2 "ct.basic_reverse_src_dst_y_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032073, VkglTestCase_032073_1, VkglTestCase_032073_2);

#define VkglTestCase_032074_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032074_2 "o.blit.rect.scale_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032074, VkglTestCase_032074_1, VkglTestCase_032074_2);

#define VkglTestCase_032075_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032075_2 "o.blit.rect.scale_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032075, VkglTestCase_032075_1, VkglTestCase_032075_2);

#define VkglTestCase_032076_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032076_2 "rect.scale_reverse_src_x_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032076, VkglTestCase_032076_1, VkglTestCase_032076_2);

#define VkglTestCase_032077_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032077_2 "rect.scale_reverse_src_x_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032077, VkglTestCase_032077_1, VkglTestCase_032077_2);

#define VkglTestCase_032078_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032078_2 "rect.scale_reverse_src_y_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032078, VkglTestCase_032078_1, VkglTestCase_032078_2);

#define VkglTestCase_032079_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032079_2 "rect.scale_reverse_src_y_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032079, VkglTestCase_032079_1, VkglTestCase_032079_2);

#define VkglTestCase_032080_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032080_2 "rect.scale_reverse_dst_x_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032080, VkglTestCase_032080_1, VkglTestCase_032080_2);

#define VkglTestCase_032081_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032081_2 "rect.scale_reverse_dst_x_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032081, VkglTestCase_032081_1, VkglTestCase_032081_2);

#define VkglTestCase_032082_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032082_2 "rect.scale_reverse_dst_y_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032082, VkglTestCase_032082_1, VkglTestCase_032082_2);

#define VkglTestCase_032083_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032083_2 "rect.scale_reverse_dst_y_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032083, VkglTestCase_032083_1, VkglTestCase_032083_2);

#define VkglTestCase_032084_1 "dEQP-GLES3.functional.fbo.blit.re"
#define VkglTestCase_032084_2 "ct.scale_reverse_src_dst_x_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032084, VkglTestCase_032084_1, VkglTestCase_032084_2);

#define VkglTestCase_032085_1 "dEQP-GLES3.functional.fbo.blit.re"
#define VkglTestCase_032085_2 "ct.scale_reverse_src_dst_x_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032085, VkglTestCase_032085_1, VkglTestCase_032085_2);

#define VkglTestCase_032086_1 "dEQP-GLES3.functional.fbo.blit.re"
#define VkglTestCase_032086_2 "ct.scale_reverse_src_dst_y_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032086, VkglTestCase_032086_1, VkglTestCase_032086_2);

#define VkglTestCase_032087_1 "dEQP-GLES3.functional.fbo.blit.re"
#define VkglTestCase_032087_2 "ct.scale_reverse_src_dst_y_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032087, VkglTestCase_032087_1, VkglTestCase_032087_2);

#define VkglTestCase_032088_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032088_2 "it.rect.out_of_bounds_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032088, VkglTestCase_032088_1, VkglTestCase_032088_2);

#define VkglTestCase_032089_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032089_2 "it.rect.out_of_bounds_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032089, VkglTestCase_032089_1, VkglTestCase_032089_2);

#define VkglTestCase_032090_1 "dEQP-GLES3.functional.fbo.blit.rect"
#define VkglTestCase_032090_2 ".out_of_bounds_reverse_src_x_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032090, VkglTestCase_032090_1, VkglTestCase_032090_2);

#define VkglTestCase_032091_1 "dEQP-GLES3.functional.fbo.blit.rect"
#define VkglTestCase_032091_2 ".out_of_bounds_reverse_src_x_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032091, VkglTestCase_032091_1, VkglTestCase_032091_2);

#define VkglTestCase_032092_1 "dEQP-GLES3.functional.fbo.blit.rect"
#define VkglTestCase_032092_2 ".out_of_bounds_reverse_src_y_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032092, VkglTestCase_032092_1, VkglTestCase_032092_2);

#define VkglTestCase_032093_1 "dEQP-GLES3.functional.fbo.blit.rect"
#define VkglTestCase_032093_2 ".out_of_bounds_reverse_src_y_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032093, VkglTestCase_032093_1, VkglTestCase_032093_2);

#define VkglTestCase_032094_1 "dEQP-GLES3.functional.fbo.blit.rect"
#define VkglTestCase_032094_2 ".out_of_bounds_reverse_dst_x_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032094, VkglTestCase_032094_1, VkglTestCase_032094_2);

#define VkglTestCase_032095_1 "dEQP-GLES3.functional.fbo.blit.rect"
#define VkglTestCase_032095_2 ".out_of_bounds_reverse_dst_x_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032095, VkglTestCase_032095_1, VkglTestCase_032095_2);

#define VkglTestCase_032096_1 "dEQP-GLES3.functional.fbo.blit.rect"
#define VkglTestCase_032096_2 ".out_of_bounds_reverse_dst_y_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032096, VkglTestCase_032096_1, VkglTestCase_032096_2);

#define VkglTestCase_032097_1 "dEQP-GLES3.functional.fbo.blit.rect"
#define VkglTestCase_032097_2 ".out_of_bounds_reverse_dst_y_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032097, VkglTestCase_032097_1, VkglTestCase_032097_2);

#define VkglTestCase_032098_1 "dEQP-GLES3.functional.fbo.blit.rect.o"
#define VkglTestCase_032098_2 "ut_of_bounds_reverse_src_dst_x_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032098, VkglTestCase_032098_1, VkglTestCase_032098_2);

#define VkglTestCase_032099_1 "dEQP-GLES3.functional.fbo.blit.rect.o"
#define VkglTestCase_032099_2 "ut_of_bounds_reverse_src_dst_x_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032099, VkglTestCase_032099_1, VkglTestCase_032099_2);

#define VkglTestCase_032100_1 "dEQP-GLES3.functional.fbo.blit.rect.o"
#define VkglTestCase_032100_2 "ut_of_bounds_reverse_src_dst_y_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032100, VkglTestCase_032100_1, VkglTestCase_032100_2);

#define VkglTestCase_032101_1 "dEQP-GLES3.functional.fbo.blit.rect.o"
#define VkglTestCase_032101_2 "ut_of_bounds_reverse_src_dst_y_linear"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032101, VkglTestCase_032101_1, VkglTestCase_032101_2);

#define VkglTestCase_032102_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032102_2 "t.rect.nearest_consistency_mag"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032102, VkglTestCase_032102_1, VkglTestCase_032102_2);

#define VkglTestCase_032103_1 "dEQP-GLES3.functional.fbo.blit.rect."
#define VkglTestCase_032103_2 "nearest_consistency_mag_reverse_src_x"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032103, VkglTestCase_032103_1, VkglTestCase_032103_2);

#define VkglTestCase_032104_1 "dEQP-GLES3.functional.fbo.blit.rect."
#define VkglTestCase_032104_2 "nearest_consistency_mag_reverse_src_y"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032104, VkglTestCase_032104_1, VkglTestCase_032104_2);

#define VkglTestCase_032105_1 "dEQP-GLES3.functional.fbo.blit.rect."
#define VkglTestCase_032105_2 "nearest_consistency_mag_reverse_dst_x"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032105, VkglTestCase_032105_1, VkglTestCase_032105_2);

#define VkglTestCase_032106_1 "dEQP-GLES3.functional.fbo.blit.rect."
#define VkglTestCase_032106_2 "nearest_consistency_mag_reverse_dst_y"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032106, VkglTestCase_032106_1, VkglTestCase_032106_2);

#define VkglTestCase_032107_1 "dEQP-GLES3.functional.fbo.blit.rect.ne"
#define VkglTestCase_032107_2 "arest_consistency_mag_reverse_src_dst_x"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032107, VkglTestCase_032107_1, VkglTestCase_032107_2);

#define VkglTestCase_032108_1 "dEQP-GLES3.functional.fbo.blit.rect.ne"
#define VkglTestCase_032108_2 "arest_consistency_mag_reverse_src_dst_y"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032108, VkglTestCase_032108_1, VkglTestCase_032108_2);

#define VkglTestCase_032109_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032109_2 "t.rect.nearest_consistency_min"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032109, VkglTestCase_032109_1, VkglTestCase_032109_2);

#define VkglTestCase_032110_1 "dEQP-GLES3.functional.fbo.blit.rect."
#define VkglTestCase_032110_2 "nearest_consistency_min_reverse_src_x"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032110, VkglTestCase_032110_1, VkglTestCase_032110_2);

#define VkglTestCase_032111_1 "dEQP-GLES3.functional.fbo.blit.rect."
#define VkglTestCase_032111_2 "nearest_consistency_min_reverse_src_y"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032111, VkglTestCase_032111_1, VkglTestCase_032111_2);

#define VkglTestCase_032112_1 "dEQP-GLES3.functional.fbo.blit.rect."
#define VkglTestCase_032112_2 "nearest_consistency_min_reverse_dst_x"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032112, VkglTestCase_032112_1, VkglTestCase_032112_2);

#define VkglTestCase_032113_1 "dEQP-GLES3.functional.fbo.blit.rect."
#define VkglTestCase_032113_2 "nearest_consistency_min_reverse_dst_y"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032113, VkglTestCase_032113_1, VkglTestCase_032113_2);

#define VkglTestCase_032114_1 "dEQP-GLES3.functional.fbo.blit.rect.ne"
#define VkglTestCase_032114_2 "arest_consistency_min_reverse_src_dst_x"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032114, VkglTestCase_032114_1, VkglTestCase_032114_2);

#define VkglTestCase_032115_1 "dEQP-GLES3.functional.fbo.blit.rect.ne"
#define VkglTestCase_032115_2 "arest_consistency_min_reverse_src_dst_y"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032115, VkglTestCase_032115_1, VkglTestCase_032115_2);
