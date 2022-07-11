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
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005055_1 "dEQP-GLES31.functional.shaders.helpe"
#define VkglTestCase_005055_2 "r_invocation.derivate.triangles_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005055, VkglTestCase_005055_1, VkglTestCase_005055_2);

#define VkglTestCase_005056_1 "dEQP-GLES31.functional.shaders.helpe"
#define VkglTestCase_005056_2 "r_invocation.derivate.triangles_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005056, VkglTestCase_005056_1, VkglTestCase_005056_2);

#define VkglTestCase_005057_1 "dEQP-GLES31.functional.shaders.helper"
#define VkglTestCase_005057_2 "_invocation.derivate.triangles_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005057, VkglTestCase_005057_1, VkglTestCase_005057_2);

#define VkglTestCase_005058_1 "dEQP-GLES31.functional.shaders.hel"
#define VkglTestCase_005058_2 "per_invocation.derivate.lines_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005058, VkglTestCase_005058_1, VkglTestCase_005058_2);

#define VkglTestCase_005059_1 "dEQP-GLES31.functional.shaders.hel"
#define VkglTestCase_005059_2 "per_invocation.derivate.lines_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005059, VkglTestCase_005059_1, VkglTestCase_005059_2);

#define VkglTestCase_005060_1 "dEQP-GLES31.functional.shaders.help"
#define VkglTestCase_005060_2 "er_invocation.derivate.lines_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005060, VkglTestCase_005060_1, VkglTestCase_005060_2);

#define VkglTestCase_005061_1 "dEQP-GLES31.functional.shaders.helpe"
#define VkglTestCase_005061_2 "r_invocation.derivate.wide_lines_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005061, VkglTestCase_005061_1, VkglTestCase_005061_2);

#define VkglTestCase_005062_1 "dEQP-GLES31.functional.shaders.helpe"
#define VkglTestCase_005062_2 "r_invocation.derivate.wide_lines_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005062, VkglTestCase_005062_1, VkglTestCase_005062_2);

#define VkglTestCase_005063_1 "dEQP-GLES31.functional.shaders.helper"
#define VkglTestCase_005063_2 "_invocation.derivate.wide_lines_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005063, VkglTestCase_005063_1, VkglTestCase_005063_2);

#define VkglTestCase_005064_1 "dEQP-GLES31.functional.shaders.hel"
#define VkglTestCase_005064_2 "per_invocation.derivate.points_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005064, VkglTestCase_005064_1, VkglTestCase_005064_2);

#define VkglTestCase_005065_1 "dEQP-GLES31.functional.shaders.hel"
#define VkglTestCase_005065_2 "per_invocation.derivate.points_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005065, VkglTestCase_005065_1, VkglTestCase_005065_2);

#define VkglTestCase_005066_1 "dEQP-GLES31.functional.shaders.help"
#define VkglTestCase_005066_2 "er_invocation.derivate.points_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005066, VkglTestCase_005066_1, VkglTestCase_005066_2);

#define VkglTestCase_005067_1 "dEQP-GLES31.functional.shaders.helper"
#define VkglTestCase_005067_2 "_invocation.derivate.wide_points_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005067, VkglTestCase_005067_1, VkglTestCase_005067_2);

#define VkglTestCase_005068_1 "dEQP-GLES31.functional.shaders.helper"
#define VkglTestCase_005068_2 "_invocation.derivate.wide_points_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005068, VkglTestCase_005068_1, VkglTestCase_005068_2);

#define VkglTestCase_005069_1 "dEQP-GLES31.functional.shaders.helper_"
#define VkglTestCase_005069_2 "invocation.derivate.wide_points_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005069, VkglTestCase_005069_1, VkglTestCase_005069_2);

#define VkglTestCase_005070_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005070_2 "ocation.derivate.triangles_4_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005070, VkglTestCase_005070_1, VkglTestCase_005070_2);

#define VkglTestCase_005071_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005071_2 "ocation.derivate.triangles_4_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005071, VkglTestCase_005071_1, VkglTestCase_005071_2);

#define VkglTestCase_005072_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005072_2 "cation.derivate.triangles_4_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005072, VkglTestCase_005072_1, VkglTestCase_005072_2);

#define VkglTestCase_005073_1 "dEQP-GLES31.functional.shaders.helper_i"
#define VkglTestCase_005073_2 "nvocation.derivate.lines_4_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005073, VkglTestCase_005073_1, VkglTestCase_005073_2);

#define VkglTestCase_005074_1 "dEQP-GLES31.functional.shaders.helper_i"
#define VkglTestCase_005074_2 "nvocation.derivate.lines_4_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005074, VkglTestCase_005074_1, VkglTestCase_005074_2);

#define VkglTestCase_005075_1 "dEQP-GLES31.functional.shaders.helper_in"
#define VkglTestCase_005075_2 "vocation.derivate.lines_4_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005075, VkglTestCase_005075_1, VkglTestCase_005075_2);

#define VkglTestCase_005076_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005076_2 "ocation.derivate.wide_lines_4_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005076, VkglTestCase_005076_1, VkglTestCase_005076_2);

#define VkglTestCase_005077_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005077_2 "ocation.derivate.wide_lines_4_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005077, VkglTestCase_005077_1, VkglTestCase_005077_2);

#define VkglTestCase_005078_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005078_2 "cation.derivate.wide_lines_4_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005078, VkglTestCase_005078_1, VkglTestCase_005078_2);

#define VkglTestCase_005079_1 "dEQP-GLES31.functional.shaders.helper_i"
#define VkglTestCase_005079_2 "nvocation.derivate.points_4_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005079, VkglTestCase_005079_1, VkglTestCase_005079_2);

#define VkglTestCase_005080_1 "dEQP-GLES31.functional.shaders.helper_i"
#define VkglTestCase_005080_2 "nvocation.derivate.points_4_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005080, VkglTestCase_005080_1, VkglTestCase_005080_2);

#define VkglTestCase_005081_1 "dEQP-GLES31.functional.shaders.helper_in"
#define VkglTestCase_005081_2 "vocation.derivate.points_4_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005081, VkglTestCase_005081_1, VkglTestCase_005081_2);

#define VkglTestCase_005082_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005082_2 "cation.derivate.wide_points_4_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005082, VkglTestCase_005082_1, VkglTestCase_005082_2);

#define VkglTestCase_005083_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005083_2 "cation.derivate.wide_points_4_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005083, VkglTestCase_005083_1, VkglTestCase_005083_2);

#define VkglTestCase_005084_1 "dEQP-GLES31.functional.shaders.helper_invoc"
#define VkglTestCase_005084_2 "ation.derivate.wide_points_4_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005084, VkglTestCase_005084_1, VkglTestCase_005084_2);

#define VkglTestCase_005085_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005085_2 "ocation.derivate.triangles_8_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005085, VkglTestCase_005085_1, VkglTestCase_005085_2);

#define VkglTestCase_005086_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005086_2 "ocation.derivate.triangles_8_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005086, VkglTestCase_005086_1, VkglTestCase_005086_2);

#define VkglTestCase_005087_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005087_2 "cation.derivate.triangles_8_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005087, VkglTestCase_005087_1, VkglTestCase_005087_2);

#define VkglTestCase_005088_1 "dEQP-GLES31.functional.shaders.helper_i"
#define VkglTestCase_005088_2 "nvocation.derivate.lines_8_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005088, VkglTestCase_005088_1, VkglTestCase_005088_2);

#define VkglTestCase_005089_1 "dEQP-GLES31.functional.shaders.helper_i"
#define VkglTestCase_005089_2 "nvocation.derivate.lines_8_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005089, VkglTestCase_005089_1, VkglTestCase_005089_2);

#define VkglTestCase_005090_1 "dEQP-GLES31.functional.shaders.helper_in"
#define VkglTestCase_005090_2 "vocation.derivate.lines_8_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005090, VkglTestCase_005090_1, VkglTestCase_005090_2);

#define VkglTestCase_005091_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005091_2 "ocation.derivate.wide_lines_8_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005091, VkglTestCase_005091_1, VkglTestCase_005091_2);

#define VkglTestCase_005092_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005092_2 "ocation.derivate.wide_lines_8_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005092, VkglTestCase_005092_1, VkglTestCase_005092_2);

#define VkglTestCase_005093_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005093_2 "cation.derivate.wide_lines_8_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005093, VkglTestCase_005093_1, VkglTestCase_005093_2);

#define VkglTestCase_005094_1 "dEQP-GLES31.functional.shaders.helper_i"
#define VkglTestCase_005094_2 "nvocation.derivate.points_8_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005094, VkglTestCase_005094_1, VkglTestCase_005094_2);

#define VkglTestCase_005095_1 "dEQP-GLES31.functional.shaders.helper_i"
#define VkglTestCase_005095_2 "nvocation.derivate.points_8_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005095, VkglTestCase_005095_1, VkglTestCase_005095_2);

#define VkglTestCase_005096_1 "dEQP-GLES31.functional.shaders.helper_in"
#define VkglTestCase_005096_2 "vocation.derivate.points_8_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005096, VkglTestCase_005096_1, VkglTestCase_005096_2);

#define VkglTestCase_005097_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005097_2 "cation.derivate.wide_points_8_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005097, VkglTestCase_005097_1, VkglTestCase_005097_2);

#define VkglTestCase_005098_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005098_2 "cation.derivate.wide_points_8_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005098, VkglTestCase_005098_1, VkglTestCase_005098_2);

#define VkglTestCase_005099_1 "dEQP-GLES31.functional.shaders.helper_invoc"
#define VkglTestCase_005099_2 "ation.derivate.wide_points_8_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005099, VkglTestCase_005099_1, VkglTestCase_005099_2);

#define VkglTestCase_005100_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005100_2 "cation.derivate.triangles_max_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005100, VkglTestCase_005100_1, VkglTestCase_005100_2);

#define VkglTestCase_005101_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005101_2 "cation.derivate.triangles_max_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005101, VkglTestCase_005101_1, VkglTestCase_005101_2);

#define VkglTestCase_005102_1 "dEQP-GLES31.functional.shaders.helper_invoc"
#define VkglTestCase_005102_2 "ation.derivate.triangles_max_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005102, VkglTestCase_005102_1, VkglTestCase_005102_2);

#define VkglTestCase_005103_1 "dEQP-GLES31.functional.shaders.helper_in"
#define VkglTestCase_005103_2 "vocation.derivate.lines_max_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005103, VkglTestCase_005103_1, VkglTestCase_005103_2);

#define VkglTestCase_005104_1 "dEQP-GLES31.functional.shaders.helper_in"
#define VkglTestCase_005104_2 "vocation.derivate.lines_max_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005104, VkglTestCase_005104_1, VkglTestCase_005104_2);

#define VkglTestCase_005105_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005105_2 "ocation.derivate.lines_max_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005105, VkglTestCase_005105_1, VkglTestCase_005105_2);

#define VkglTestCase_005106_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005106_2 "cation.derivate.wide_lines_max_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005106, VkglTestCase_005106_1, VkglTestCase_005106_2);

#define VkglTestCase_005107_1 "dEQP-GLES31.functional.shaders.helper_invo"
#define VkglTestCase_005107_2 "cation.derivate.wide_lines_max_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005107, VkglTestCase_005107_1, VkglTestCase_005107_2);

#define VkglTestCase_005108_1 "dEQP-GLES31.functional.shaders.helper_invoc"
#define VkglTestCase_005108_2 "ation.derivate.wide_lines_max_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005108, VkglTestCase_005108_1, VkglTestCase_005108_2);

#define VkglTestCase_005109_1 "dEQP-GLES31.functional.shaders.helper_in"
#define VkglTestCase_005109_2 "vocation.derivate.points_max_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005109, VkglTestCase_005109_1, VkglTestCase_005109_2);

#define VkglTestCase_005110_1 "dEQP-GLES31.functional.shaders.helper_in"
#define VkglTestCase_005110_2 "vocation.derivate.points_max_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005110, VkglTestCase_005110_1, VkglTestCase_005110_2);

#define VkglTestCase_005111_1 "dEQP-GLES31.functional.shaders.helper_inv"
#define VkglTestCase_005111_2 "ocation.derivate.points_max_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005111, VkglTestCase_005111_1, VkglTestCase_005111_2);

#define VkglTestCase_005112_1 "dEQP-GLES31.functional.shaders.helper_invoc"
#define VkglTestCase_005112_2 "ation.derivate.wide_points_max_samples_dfdx"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005112, VkglTestCase_005112_1, VkglTestCase_005112_2);

#define VkglTestCase_005113_1 "dEQP-GLES31.functional.shaders.helper_invoc"
#define VkglTestCase_005113_2 "ation.derivate.wide_points_max_samples_dfdy"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005113, VkglTestCase_005113_1, VkglTestCase_005113_2);

#define VkglTestCase_005114_1 "dEQP-GLES31.functional.shaders.helper_invoca"
#define VkglTestCase_005114_2 "tion.derivate.wide_points_max_samples_fwidth"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005114, VkglTestCase_005114_1, VkglTestCase_005114_2);
