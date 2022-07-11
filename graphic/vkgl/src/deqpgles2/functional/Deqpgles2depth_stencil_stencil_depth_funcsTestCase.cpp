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
#include "../ActsDeqpgles20012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011026_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011026_2 "l.stencil_depth_funcs.stencil_never_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011026, VkglTestCase_011026_1, VkglTestCase_011026_2);

#define VkglTestCase_011027_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011027_2 "l.stencil_depth_funcs.stencil_never_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011027, VkglTestCase_011027_1, VkglTestCase_011027_2);

#define VkglTestCase_011028_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011028_2 "il.stencil_depth_funcs.stencil_never_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011028, VkglTestCase_011028_1, VkglTestCase_011028_2);

#define VkglTestCase_011029_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011029_2 "l.stencil_depth_funcs.stencil_never_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011029, VkglTestCase_011029_1, VkglTestCase_011029_2);

#define VkglTestCase_011030_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011030_2 "l.stencil_depth_funcs.stencil_never_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011030, VkglTestCase_011030_1, VkglTestCase_011030_2);

#define VkglTestCase_011031_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011031_2 "l.stencil_depth_funcs.stencil_never_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011031, VkglTestCase_011031_1, VkglTestCase_011031_2);

#define VkglTestCase_011032_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011032_2 ".stencil_depth_funcs.stencil_never_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011032, VkglTestCase_011032_1, VkglTestCase_011032_2);

#define VkglTestCase_011033_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011033_2 ".stencil_depth_funcs.stencil_never_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011033, VkglTestCase_011033_1, VkglTestCase_011033_2);

#define VkglTestCase_011034_1 "dEQP-GLES2.functional.fragment_ops.depth_sten"
#define VkglTestCase_011034_2 "cil.stencil_depth_funcs.stencil_never_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011034, VkglTestCase_011034_1, VkglTestCase_011034_2);

#define VkglTestCase_011035_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011035_2 "l.stencil_depth_funcs.stencil_always_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011035, VkglTestCase_011035_1, VkglTestCase_011035_2);

#define VkglTestCase_011036_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011036_2 ".stencil_depth_funcs.stencil_always_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011036, VkglTestCase_011036_1, VkglTestCase_011036_2);

#define VkglTestCase_011037_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011037_2 "l.stencil_depth_funcs.stencil_always_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011037, VkglTestCase_011037_1, VkglTestCase_011037_2);

#define VkglTestCase_011038_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011038_2 ".stencil_depth_funcs.stencil_always_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011038, VkglTestCase_011038_1, VkglTestCase_011038_2);

#define VkglTestCase_011039_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011039_2 "l.stencil_depth_funcs.stencil_always_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011039, VkglTestCase_011039_1, VkglTestCase_011039_2);

#define VkglTestCase_011040_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011040_2 ".stencil_depth_funcs.stencil_always_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011040, VkglTestCase_011040_1, VkglTestCase_011040_2);

#define VkglTestCase_011041_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011041_2 ".stencil_depth_funcs.stencil_always_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011041, VkglTestCase_011041_1, VkglTestCase_011041_2);

#define VkglTestCase_011042_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil."
#define VkglTestCase_011042_2 "stencil_depth_funcs.stencil_always_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011042, VkglTestCase_011042_1, VkglTestCase_011042_2);

#define VkglTestCase_011043_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011043_2 "il.stencil_depth_funcs.stencil_always_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011043, VkglTestCase_011043_1, VkglTestCase_011043_2);

#define VkglTestCase_011044_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011044_2 "il.stencil_depth_funcs.stencil_less_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011044, VkglTestCase_011044_1, VkglTestCase_011044_2);

#define VkglTestCase_011045_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011045_2 "l.stencil_depth_funcs.stencil_less_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011045, VkglTestCase_011045_1, VkglTestCase_011045_2);

#define VkglTestCase_011046_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011046_2 "il.stencil_depth_funcs.stencil_less_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011046, VkglTestCase_011046_1, VkglTestCase_011046_2);

#define VkglTestCase_011047_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011047_2 "l.stencil_depth_funcs.stencil_less_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011047, VkglTestCase_011047_1, VkglTestCase_011047_2);

#define VkglTestCase_011048_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011048_2 "il.stencil_depth_funcs.stencil_less_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011048, VkglTestCase_011048_1, VkglTestCase_011048_2);

#define VkglTestCase_011049_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011049_2 "l.stencil_depth_funcs.stencil_less_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011049, VkglTestCase_011049_1, VkglTestCase_011049_2);

#define VkglTestCase_011050_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011050_2 "l.stencil_depth_funcs.stencil_less_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011050, VkglTestCase_011050_1, VkglTestCase_011050_2);

#define VkglTestCase_011051_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011051_2 ".stencil_depth_funcs.stencil_less_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011051, VkglTestCase_011051_1, VkglTestCase_011051_2);

#define VkglTestCase_011052_1 "dEQP-GLES2.functional.fragment_ops.depth_sten"
#define VkglTestCase_011052_2 "cil.stencil_depth_funcs.stencil_less_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011052, VkglTestCase_011052_1, VkglTestCase_011052_2);

#define VkglTestCase_011053_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011053_2 "l.stencil_depth_funcs.stencil_lequal_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011053, VkglTestCase_011053_1, VkglTestCase_011053_2);

#define VkglTestCase_011054_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011054_2 ".stencil_depth_funcs.stencil_lequal_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011054, VkglTestCase_011054_1, VkglTestCase_011054_2);

#define VkglTestCase_011055_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011055_2 "l.stencil_depth_funcs.stencil_lequal_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011055, VkglTestCase_011055_1, VkglTestCase_011055_2);

#define VkglTestCase_011056_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011056_2 ".stencil_depth_funcs.stencil_lequal_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011056, VkglTestCase_011056_1, VkglTestCase_011056_2);

#define VkglTestCase_011057_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011057_2 "l.stencil_depth_funcs.stencil_lequal_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011057, VkglTestCase_011057_1, VkglTestCase_011057_2);

#define VkglTestCase_011058_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011058_2 ".stencil_depth_funcs.stencil_lequal_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011058, VkglTestCase_011058_1, VkglTestCase_011058_2);

#define VkglTestCase_011059_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011059_2 ".stencil_depth_funcs.stencil_lequal_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011059, VkglTestCase_011059_1, VkglTestCase_011059_2);

#define VkglTestCase_011060_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil."
#define VkglTestCase_011060_2 "stencil_depth_funcs.stencil_lequal_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011060, VkglTestCase_011060_1, VkglTestCase_011060_2);

#define VkglTestCase_011061_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011061_2 "il.stencil_depth_funcs.stencil_lequal_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011061, VkglTestCase_011061_1, VkglTestCase_011061_2);

#define VkglTestCase_011062_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011062_2 "l.stencil_depth_funcs.stencil_equal_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011062, VkglTestCase_011062_1, VkglTestCase_011062_2);

#define VkglTestCase_011063_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011063_2 "l.stencil_depth_funcs.stencil_equal_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011063, VkglTestCase_011063_1, VkglTestCase_011063_2);

#define VkglTestCase_011064_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011064_2 "il.stencil_depth_funcs.stencil_equal_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011064, VkglTestCase_011064_1, VkglTestCase_011064_2);

#define VkglTestCase_011065_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011065_2 "l.stencil_depth_funcs.stencil_equal_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011065, VkglTestCase_011065_1, VkglTestCase_011065_2);

#define VkglTestCase_011066_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011066_2 "l.stencil_depth_funcs.stencil_equal_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011066, VkglTestCase_011066_1, VkglTestCase_011066_2);

#define VkglTestCase_011067_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011067_2 "l.stencil_depth_funcs.stencil_equal_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011067, VkglTestCase_011067_1, VkglTestCase_011067_2);

#define VkglTestCase_011068_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011068_2 ".stencil_depth_funcs.stencil_equal_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011068, VkglTestCase_011068_1, VkglTestCase_011068_2);

#define VkglTestCase_011069_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011069_2 ".stencil_depth_funcs.stencil_equal_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011069, VkglTestCase_011069_1, VkglTestCase_011069_2);

#define VkglTestCase_011070_1 "dEQP-GLES2.functional.fragment_ops.depth_sten"
#define VkglTestCase_011070_2 "cil.stencil_depth_funcs.stencil_equal_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011070, VkglTestCase_011070_1, VkglTestCase_011070_2);

#define VkglTestCase_011071_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011071_2 "l.stencil_depth_funcs.stencil_gequal_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011071, VkglTestCase_011071_1, VkglTestCase_011071_2);

#define VkglTestCase_011072_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011072_2 ".stencil_depth_funcs.stencil_gequal_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011072, VkglTestCase_011072_1, VkglTestCase_011072_2);

#define VkglTestCase_011073_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011073_2 "l.stencil_depth_funcs.stencil_gequal_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011073, VkglTestCase_011073_1, VkglTestCase_011073_2);

#define VkglTestCase_011074_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011074_2 ".stencil_depth_funcs.stencil_gequal_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011074, VkglTestCase_011074_1, VkglTestCase_011074_2);

#define VkglTestCase_011075_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011075_2 "l.stencil_depth_funcs.stencil_gequal_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011075, VkglTestCase_011075_1, VkglTestCase_011075_2);

#define VkglTestCase_011076_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011076_2 ".stencil_depth_funcs.stencil_gequal_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011076, VkglTestCase_011076_1, VkglTestCase_011076_2);

#define VkglTestCase_011077_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011077_2 ".stencil_depth_funcs.stencil_gequal_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011077, VkglTestCase_011077_1, VkglTestCase_011077_2);

#define VkglTestCase_011078_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil."
#define VkglTestCase_011078_2 "stencil_depth_funcs.stencil_gequal_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011078, VkglTestCase_011078_1, VkglTestCase_011078_2);

#define VkglTestCase_011079_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011079_2 "il.stencil_depth_funcs.stencil_gequal_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011079, VkglTestCase_011079_1, VkglTestCase_011079_2);

#define VkglTestCase_011080_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011080_2 ".stencil_depth_funcs.stencil_greater_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011080, VkglTestCase_011080_1, VkglTestCase_011080_2);

#define VkglTestCase_011081_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011081_2 ".stencil_depth_funcs.stencil_greater_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011081, VkglTestCase_011081_1, VkglTestCase_011081_2);

#define VkglTestCase_011082_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011082_2 "l.stencil_depth_funcs.stencil_greater_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011082, VkglTestCase_011082_1, VkglTestCase_011082_2);

#define VkglTestCase_011083_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011083_2 ".stencil_depth_funcs.stencil_greater_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011083, VkglTestCase_011083_1, VkglTestCase_011083_2);

#define VkglTestCase_011084_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011084_2 ".stencil_depth_funcs.stencil_greater_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011084, VkglTestCase_011084_1, VkglTestCase_011084_2);

#define VkglTestCase_011085_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011085_2 ".stencil_depth_funcs.stencil_greater_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011085, VkglTestCase_011085_1, VkglTestCase_011085_2);

#define VkglTestCase_011086_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil."
#define VkglTestCase_011086_2 "stencil_depth_funcs.stencil_greater_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011086, VkglTestCase_011086_1, VkglTestCase_011086_2);

#define VkglTestCase_011087_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil."
#define VkglTestCase_011087_2 "stencil_depth_funcs.stencil_greater_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011087, VkglTestCase_011087_1, VkglTestCase_011087_2);

#define VkglTestCase_011088_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011088_2 "il.stencil_depth_funcs.stencil_greater_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011088, VkglTestCase_011088_1, VkglTestCase_011088_2);

#define VkglTestCase_011089_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011089_2 ".stencil_depth_funcs.stencil_notequal_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011089, VkglTestCase_011089_1, VkglTestCase_011089_2);

#define VkglTestCase_011090_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil."
#define VkglTestCase_011090_2 "stencil_depth_funcs.stencil_notequal_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011090, VkglTestCase_011090_1, VkglTestCase_011090_2);

#define VkglTestCase_011091_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011091_2 ".stencil_depth_funcs.stencil_notequal_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011091, VkglTestCase_011091_1, VkglTestCase_011091_2);

#define VkglTestCase_011092_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil."
#define VkglTestCase_011092_2 "stencil_depth_funcs.stencil_notequal_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011092, VkglTestCase_011092_1, VkglTestCase_011092_2);

#define VkglTestCase_011093_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil"
#define VkglTestCase_011093_2 ".stencil_depth_funcs.stencil_notequal_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011093, VkglTestCase_011093_1, VkglTestCase_011093_2);

#define VkglTestCase_011094_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil."
#define VkglTestCase_011094_2 "stencil_depth_funcs.stencil_notequal_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011094, VkglTestCase_011094_1, VkglTestCase_011094_2);

#define VkglTestCase_011095_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil."
#define VkglTestCase_011095_2 "stencil_depth_funcs.stencil_notequal_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011095, VkglTestCase_011095_1, VkglTestCase_011095_2);

#define VkglTestCase_011096_1 "dEQP-GLES2.functional.fragment_ops.depth_stencil.s"
#define VkglTestCase_011096_2 "tencil_depth_funcs.stencil_notequal_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011096, VkglTestCase_011096_1, VkglTestCase_011096_2);

#define VkglTestCase_011097_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011097_2 "l.stencil_depth_funcs.stencil_notequal_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011097, VkglTestCase_011097_1, VkglTestCase_011097_2);

#define VkglTestCase_011098_1 "dEQP-GLES2.functional.fragment_ops.depth_sten"
#define VkglTestCase_011098_2 "cil.stencil_depth_funcs.no_stencil_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011098, VkglTestCase_011098_1, VkglTestCase_011098_2);

#define VkglTestCase_011099_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011099_2 "il.stencil_depth_funcs.no_stencil_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011099, VkglTestCase_011099_1, VkglTestCase_011099_2);

#define VkglTestCase_011100_1 "dEQP-GLES2.functional.fragment_ops.depth_sten"
#define VkglTestCase_011100_2 "cil.stencil_depth_funcs.no_stencil_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011100, VkglTestCase_011100_1, VkglTestCase_011100_2);

#define VkglTestCase_011101_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011101_2 "il.stencil_depth_funcs.no_stencil_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011101, VkglTestCase_011101_1, VkglTestCase_011101_2);

#define VkglTestCase_011102_1 "dEQP-GLES2.functional.fragment_ops.depth_sten"
#define VkglTestCase_011102_2 "cil.stencil_depth_funcs.no_stencil_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011102, VkglTestCase_011102_1, VkglTestCase_011102_2);

#define VkglTestCase_011103_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011103_2 "il.stencil_depth_funcs.no_stencil_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011103, VkglTestCase_011103_1, VkglTestCase_011103_2);

#define VkglTestCase_011104_1 "dEQP-GLES2.functional.fragment_ops.depth_stenc"
#define VkglTestCase_011104_2 "il.stencil_depth_funcs.no_stencil_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011104, VkglTestCase_011104_1, VkglTestCase_011104_2);

#define VkglTestCase_011105_1 "dEQP-GLES2.functional.fragment_ops.depth_stenci"
#define VkglTestCase_011105_2 "l.stencil_depth_funcs.no_stencil_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011105, VkglTestCase_011105_1, VkglTestCase_011105_2);

#define VkglTestCase_011106_1 "dEQP-GLES2.functional.fragment_ops.depth_ste"
#define VkglTestCase_011106_2 "ncil.stencil_depth_funcs.no_stencil_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011106, VkglTestCase_011106_1, VkglTestCase_011106_2);
