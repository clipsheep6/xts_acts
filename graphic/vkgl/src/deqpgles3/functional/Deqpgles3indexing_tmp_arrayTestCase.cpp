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
#include "../ActsDeqpgles30007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006047_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006047_2 "array.float_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006047, VkglTestCase_006047_1, VkglTestCase_006047_2);

#define VkglTestCase_006048_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006048_2 "rray.float_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006048, VkglTestCase_006048_1, VkglTestCase_006048_2);

#define VkglTestCase_006049_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006049_2 "array.float_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006049, VkglTestCase_006049_1, VkglTestCase_006049_2);

#define VkglTestCase_006050_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006050_2 "rray.float_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006050, VkglTestCase_006050_1, VkglTestCase_006050_2);

#define VkglTestCase_006051_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006051_2 "ray.float_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006051, VkglTestCase_006051_1, VkglTestCase_006051_2);

#define VkglTestCase_006052_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006052_2 "ay.float_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006052, VkglTestCase_006052_1, VkglTestCase_006052_2);

#define VkglTestCase_006053_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006053_2 "ay.float_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006053, VkglTestCase_006053_1, VkglTestCase_006053_2);

#define VkglTestCase_006054_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006054_2 "y.float_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006054, VkglTestCase_006054_1, VkglTestCase_006054_2);

#define VkglTestCase_006055_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006055_2 "array.float_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006055, VkglTestCase_006055_1, VkglTestCase_006055_2);

#define VkglTestCase_006056_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006056_2 "rray.float_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006056, VkglTestCase_006056_1, VkglTestCase_006056_2);

#define VkglTestCase_006057_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006057_2 "rray.float_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006057, VkglTestCase_006057_1, VkglTestCase_006057_2);

#define VkglTestCase_006058_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006058_2 "ray.float_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006058, VkglTestCase_006058_1, VkglTestCase_006058_2);

#define VkglTestCase_006059_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006059_2 "ay.float_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006059, VkglTestCase_006059_1, VkglTestCase_006059_2);

#define VkglTestCase_006060_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006060_2 "y.float_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006060, VkglTestCase_006060_1, VkglTestCase_006060_2);

#define VkglTestCase_006061_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006061_2 "ay.float_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006061, VkglTestCase_006061_1, VkglTestCase_006061_2);

#define VkglTestCase_006062_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006062_2 "y.float_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006062, VkglTestCase_006062_1, VkglTestCase_006062_2);

#define VkglTestCase_006063_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006063_2 "ray.float_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006063, VkglTestCase_006063_1, VkglTestCase_006063_2);

#define VkglTestCase_006064_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006064_2 "ay.float_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006064, VkglTestCase_006064_1, VkglTestCase_006064_2);

#define VkglTestCase_006065_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006065_2 "ay.float_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006065, VkglTestCase_006065_1, VkglTestCase_006065_2);

#define VkglTestCase_006066_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006066_2 "y.float_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006066, VkglTestCase_006066_1, VkglTestCase_006066_2);

#define VkglTestCase_006067_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006067_2 ".float_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006067, VkglTestCase_006067_1, VkglTestCase_006067_2);

#define VkglTestCase_006068_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006068_2 "float_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006068, VkglTestCase_006068_1, VkglTestCase_006068_2);

#define VkglTestCase_006069_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006069_2 ".float_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006069, VkglTestCase_006069_1, VkglTestCase_006069_2);

#define VkglTestCase_006070_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006070_2 "float_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006070, VkglTestCase_006070_1, VkglTestCase_006070_2);

#define VkglTestCase_006071_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006071_2 "ay.float_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006071, VkglTestCase_006071_1, VkglTestCase_006071_2);

#define VkglTestCase_006072_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006072_2 "y.float_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006072, VkglTestCase_006072_1, VkglTestCase_006072_2);

#define VkglTestCase_006073_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006073_2 "ay.float_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006073, VkglTestCase_006073_1, VkglTestCase_006073_2);

#define VkglTestCase_006074_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006074_2 "y.float_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006074, VkglTestCase_006074_1, VkglTestCase_006074_2);

#define VkglTestCase_006075_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006075_2 ".float_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006075, VkglTestCase_006075_1, VkglTestCase_006075_2);

#define VkglTestCase_006076_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006076_2 "float_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006076, VkglTestCase_006076_1, VkglTestCase_006076_2);

#define VkglTestCase_006077_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006077_2 "float_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006077, VkglTestCase_006077_1, VkglTestCase_006077_2);

#define VkglTestCase_006078_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array.f"
#define VkglTestCase_006078_2 "loat_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006078, VkglTestCase_006078_1, VkglTestCase_006078_2);

#define VkglTestCase_006079_1 "dEQP-GLES3.functional.shaders.indexing.tmp"
#define VkglTestCase_006079_2 "_array.vec2_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006079, VkglTestCase_006079_1, VkglTestCase_006079_2);

#define VkglTestCase_006080_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006080_2 "array.vec2_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006080, VkglTestCase_006080_1, VkglTestCase_006080_2);

#define VkglTestCase_006081_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006081_2 "array.vec2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006081, VkglTestCase_006081_1, VkglTestCase_006081_2);

#define VkglTestCase_006082_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006082_2 "rray.vec2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006082, VkglTestCase_006082_1, VkglTestCase_006082_2);

#define VkglTestCase_006083_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006083_2 "ray.vec2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006083, VkglTestCase_006083_1, VkglTestCase_006083_2);

#define VkglTestCase_006084_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006084_2 "ay.vec2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006084, VkglTestCase_006084_1, VkglTestCase_006084_2);

#define VkglTestCase_006085_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006085_2 "ray.vec2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006085, VkglTestCase_006085_1, VkglTestCase_006085_2);

#define VkglTestCase_006086_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006086_2 "ay.vec2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006086, VkglTestCase_006086_1, VkglTestCase_006086_2);

#define VkglTestCase_006087_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006087_2 "array.vec2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006087, VkglTestCase_006087_1, VkglTestCase_006087_2);

#define VkglTestCase_006088_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006088_2 "rray.vec2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006088, VkglTestCase_006088_1, VkglTestCase_006088_2);

#define VkglTestCase_006089_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006089_2 "array.vec2_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006089, VkglTestCase_006089_1, VkglTestCase_006089_2);

#define VkglTestCase_006090_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006090_2 "rray.vec2_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006090, VkglTestCase_006090_1, VkglTestCase_006090_2);

#define VkglTestCase_006091_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006091_2 "ray.vec2_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006091, VkglTestCase_006091_1, VkglTestCase_006091_2);

#define VkglTestCase_006092_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006092_2 "ay.vec2_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006092, VkglTestCase_006092_1, VkglTestCase_006092_2);

#define VkglTestCase_006093_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006093_2 "ay.vec2_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006093, VkglTestCase_006093_1, VkglTestCase_006093_2);

#define VkglTestCase_006094_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006094_2 "y.vec2_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006094, VkglTestCase_006094_1, VkglTestCase_006094_2);

#define VkglTestCase_006095_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006095_2 "ray.vec2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006095, VkglTestCase_006095_1, VkglTestCase_006095_2);

#define VkglTestCase_006096_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006096_2 "ay.vec2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006096, VkglTestCase_006096_1, VkglTestCase_006096_2);

#define VkglTestCase_006097_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006097_2 "ray.vec2_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006097, VkglTestCase_006097_1, VkglTestCase_006097_2);

#define VkglTestCase_006098_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006098_2 "ay.vec2_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006098, VkglTestCase_006098_1, VkglTestCase_006098_2);

#define VkglTestCase_006099_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006099_2 "y.vec2_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006099, VkglTestCase_006099_1, VkglTestCase_006099_2);

#define VkglTestCase_006100_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006100_2 ".vec2_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006100, VkglTestCase_006100_1, VkglTestCase_006100_2);

#define VkglTestCase_006101_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006101_2 ".vec2_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006101, VkglTestCase_006101_1, VkglTestCase_006101_2);

#define VkglTestCase_006102_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006102_2 "vec2_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006102, VkglTestCase_006102_1, VkglTestCase_006102_2);

#define VkglTestCase_006103_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006103_2 "ray.vec2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006103, VkglTestCase_006103_1, VkglTestCase_006103_2);

#define VkglTestCase_006104_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006104_2 "ay.vec2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006104, VkglTestCase_006104_1, VkglTestCase_006104_2);

#define VkglTestCase_006105_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006105_2 "ay.vec2_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006105, VkglTestCase_006105_1, VkglTestCase_006105_2);

#define VkglTestCase_006106_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006106_2 "y.vec2_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006106, VkglTestCase_006106_1, VkglTestCase_006106_2);

#define VkglTestCase_006107_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006107_2 ".vec2_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006107, VkglTestCase_006107_1, VkglTestCase_006107_2);

#define VkglTestCase_006108_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006108_2 "vec2_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006108, VkglTestCase_006108_1, VkglTestCase_006108_2);

#define VkglTestCase_006109_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006109_2 ".vec2_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006109, VkglTestCase_006109_1, VkglTestCase_006109_2);

#define VkglTestCase_006110_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006110_2 "vec2_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006110, VkglTestCase_006110_1, VkglTestCase_006110_2);

#define VkglTestCase_006111_1 "dEQP-GLES3.functional.shaders.indexing.tmp"
#define VkglTestCase_006111_2 "_array.vec3_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006111, VkglTestCase_006111_1, VkglTestCase_006111_2);

#define VkglTestCase_006112_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006112_2 "array.vec3_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006112, VkglTestCase_006112_1, VkglTestCase_006112_2);

#define VkglTestCase_006113_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006113_2 "array.vec3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006113, VkglTestCase_006113_1, VkglTestCase_006113_2);

#define VkglTestCase_006114_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006114_2 "rray.vec3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006114, VkglTestCase_006114_1, VkglTestCase_006114_2);

#define VkglTestCase_006115_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006115_2 "ray.vec3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006115, VkglTestCase_006115_1, VkglTestCase_006115_2);

#define VkglTestCase_006116_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006116_2 "ay.vec3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006116, VkglTestCase_006116_1, VkglTestCase_006116_2);

#define VkglTestCase_006117_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006117_2 "ray.vec3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006117, VkglTestCase_006117_1, VkglTestCase_006117_2);

#define VkglTestCase_006118_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006118_2 "ay.vec3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006118, VkglTestCase_006118_1, VkglTestCase_006118_2);

#define VkglTestCase_006119_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006119_2 "array.vec3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006119, VkglTestCase_006119_1, VkglTestCase_006119_2);

#define VkglTestCase_006120_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006120_2 "rray.vec3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006120, VkglTestCase_006120_1, VkglTestCase_006120_2);

#define VkglTestCase_006121_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006121_2 "array.vec3_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006121, VkglTestCase_006121_1, VkglTestCase_006121_2);

#define VkglTestCase_006122_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006122_2 "rray.vec3_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006122, VkglTestCase_006122_1, VkglTestCase_006122_2);

#define VkglTestCase_006123_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006123_2 "ray.vec3_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006123, VkglTestCase_006123_1, VkglTestCase_006123_2);

#define VkglTestCase_006124_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006124_2 "ay.vec3_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006124, VkglTestCase_006124_1, VkglTestCase_006124_2);

#define VkglTestCase_006125_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006125_2 "ay.vec3_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006125, VkglTestCase_006125_1, VkglTestCase_006125_2);

#define VkglTestCase_006126_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006126_2 "y.vec3_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006126, VkglTestCase_006126_1, VkglTestCase_006126_2);

#define VkglTestCase_006127_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006127_2 "ray.vec3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006127, VkglTestCase_006127_1, VkglTestCase_006127_2);

#define VkglTestCase_006128_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006128_2 "ay.vec3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006128, VkglTestCase_006128_1, VkglTestCase_006128_2);

#define VkglTestCase_006129_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006129_2 "ray.vec3_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006129, VkglTestCase_006129_1, VkglTestCase_006129_2);

#define VkglTestCase_006130_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006130_2 "ay.vec3_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006130, VkglTestCase_006130_1, VkglTestCase_006130_2);

#define VkglTestCase_006131_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006131_2 "y.vec3_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006131, VkglTestCase_006131_1, VkglTestCase_006131_2);

#define VkglTestCase_006132_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006132_2 ".vec3_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006132, VkglTestCase_006132_1, VkglTestCase_006132_2);

#define VkglTestCase_006133_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006133_2 ".vec3_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006133, VkglTestCase_006133_1, VkglTestCase_006133_2);

#define VkglTestCase_006134_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006134_2 "vec3_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006134, VkglTestCase_006134_1, VkglTestCase_006134_2);

#define VkglTestCase_006135_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006135_2 "ray.vec3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006135, VkglTestCase_006135_1, VkglTestCase_006135_2);

#define VkglTestCase_006136_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006136_2 "ay.vec3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006136, VkglTestCase_006136_1, VkglTestCase_006136_2);

#define VkglTestCase_006137_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006137_2 "ay.vec3_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006137, VkglTestCase_006137_1, VkglTestCase_006137_2);

#define VkglTestCase_006138_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006138_2 "y.vec3_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006138, VkglTestCase_006138_1, VkglTestCase_006138_2);

#define VkglTestCase_006139_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006139_2 ".vec3_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006139, VkglTestCase_006139_1, VkglTestCase_006139_2);

#define VkglTestCase_006140_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006140_2 "vec3_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006140, VkglTestCase_006140_1, VkglTestCase_006140_2);

#define VkglTestCase_006141_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006141_2 ".vec3_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006141, VkglTestCase_006141_1, VkglTestCase_006141_2);

#define VkglTestCase_006142_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006142_2 "vec3_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006142, VkglTestCase_006142_1, VkglTestCase_006142_2);

#define VkglTestCase_006143_1 "dEQP-GLES3.functional.shaders.indexing.tmp"
#define VkglTestCase_006143_2 "_array.vec4_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006143, VkglTestCase_006143_1, VkglTestCase_006143_2);

#define VkglTestCase_006144_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006144_2 "array.vec4_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006144, VkglTestCase_006144_1, VkglTestCase_006144_2);

#define VkglTestCase_006145_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006145_2 "array.vec4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006145, VkglTestCase_006145_1, VkglTestCase_006145_2);

#define VkglTestCase_006146_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006146_2 "rray.vec4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006146, VkglTestCase_006146_1, VkglTestCase_006146_2);

#define VkglTestCase_006147_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006147_2 "ray.vec4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006147, VkglTestCase_006147_1, VkglTestCase_006147_2);

#define VkglTestCase_006148_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006148_2 "ay.vec4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006148, VkglTestCase_006148_1, VkglTestCase_006148_2);

#define VkglTestCase_006149_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006149_2 "ray.vec4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006149, VkglTestCase_006149_1, VkglTestCase_006149_2);

#define VkglTestCase_006150_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006150_2 "ay.vec4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006150, VkglTestCase_006150_1, VkglTestCase_006150_2);

#define VkglTestCase_006151_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006151_2 "array.vec4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006151, VkglTestCase_006151_1, VkglTestCase_006151_2);

#define VkglTestCase_006152_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006152_2 "rray.vec4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006152, VkglTestCase_006152_1, VkglTestCase_006152_2);

#define VkglTestCase_006153_1 "dEQP-GLES3.functional.shaders.indexing.tmp_"
#define VkglTestCase_006153_2 "array.vec4_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006153, VkglTestCase_006153_1, VkglTestCase_006153_2);

#define VkglTestCase_006154_1 "dEQP-GLES3.functional.shaders.indexing.tmp_a"
#define VkglTestCase_006154_2 "rray.vec4_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006154, VkglTestCase_006154_1, VkglTestCase_006154_2);

#define VkglTestCase_006155_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006155_2 "ray.vec4_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006155, VkglTestCase_006155_1, VkglTestCase_006155_2);

#define VkglTestCase_006156_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006156_2 "ay.vec4_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006156, VkglTestCase_006156_1, VkglTestCase_006156_2);

#define VkglTestCase_006157_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006157_2 "ay.vec4_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006157, VkglTestCase_006157_1, VkglTestCase_006157_2);

#define VkglTestCase_006158_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006158_2 "y.vec4_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006158, VkglTestCase_006158_1, VkglTestCase_006158_2);

#define VkglTestCase_006159_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006159_2 "ray.vec4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006159, VkglTestCase_006159_1, VkglTestCase_006159_2);

#define VkglTestCase_006160_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006160_2 "ay.vec4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006160, VkglTestCase_006160_1, VkglTestCase_006160_2);

#define VkglTestCase_006161_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006161_2 "ray.vec4_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006161, VkglTestCase_006161_1, VkglTestCase_006161_2);

#define VkglTestCase_006162_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006162_2 "ay.vec4_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006162, VkglTestCase_006162_1, VkglTestCase_006162_2);

#define VkglTestCase_006163_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006163_2 "y.vec4_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006163, VkglTestCase_006163_1, VkglTestCase_006163_2);

#define VkglTestCase_006164_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006164_2 ".vec4_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006164, VkglTestCase_006164_1, VkglTestCase_006164_2);

#define VkglTestCase_006165_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006165_2 ".vec4_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006165, VkglTestCase_006165_1, VkglTestCase_006165_2);

#define VkglTestCase_006166_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006166_2 "vec4_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006166, VkglTestCase_006166_1, VkglTestCase_006166_2);

#define VkglTestCase_006167_1 "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_006167_2 "ray.vec4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006167, VkglTestCase_006167_1, VkglTestCase_006167_2);

#define VkglTestCase_006168_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006168_2 "ay.vec4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006168, VkglTestCase_006168_1, VkglTestCase_006168_2);

#define VkglTestCase_006169_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_006169_2 "ay.vec4_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006169, VkglTestCase_006169_1, VkglTestCase_006169_2);

#define VkglTestCase_006170_1 "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_006170_2 "y.vec4_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006170, VkglTestCase_006170_1, VkglTestCase_006170_2);

#define VkglTestCase_006171_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006171_2 ".vec4_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006171, VkglTestCase_006171_1, VkglTestCase_006171_2);

#define VkglTestCase_006172_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006172_2 "vec4_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006172, VkglTestCase_006172_1, VkglTestCase_006172_2);

#define VkglTestCase_006173_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array"
#define VkglTestCase_006173_2 ".vec4_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006173, VkglTestCase_006173_1, VkglTestCase_006173_2);

#define VkglTestCase_006174_1 "dEQP-GLES3.functional.shaders.indexing.tmp_array."
#define VkglTestCase_006174_2 "vec4_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006174, VkglTestCase_006174_1, VkglTestCase_006174_2);
