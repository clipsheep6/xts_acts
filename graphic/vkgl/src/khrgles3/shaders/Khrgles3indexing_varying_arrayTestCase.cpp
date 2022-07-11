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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000029_1 "KHR-GLES3.shaders.indexing.varying_a"
#define VkglTestCase_000029_2 "rray.float_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000029, VkglTestCase_000029_1, VkglTestCase_000029_2);

#define VkglTestCase_000030_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000030_2 "ay.float_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000030, VkglTestCase_000030_1, VkglTestCase_000030_2);

#define VkglTestCase_000031_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000031_2 "ay.float_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000031, VkglTestCase_000031_1, VkglTestCase_000031_2);

#define VkglTestCase_000032_1 "KHR-GLES3.shaders.indexing.varying_a"
#define VkglTestCase_000032_2 "rray.float_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000032, VkglTestCase_000032_1, VkglTestCase_000032_2);

#define VkglTestCase_000033_1 "KHR-GLES3.shaders.indexing.varying_a"
#define VkglTestCase_000033_2 "rray.float_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000033, VkglTestCase_000033_1, VkglTestCase_000033_2);

#define VkglTestCase_000034_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000034_2 "ay.float_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000034, VkglTestCase_000034_1, VkglTestCase_000034_2);

#define VkglTestCase_000035_1 "KHR-GLES3.shaders.indexing.varying_arra"
#define VkglTestCase_000035_2 "y.float_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000035, VkglTestCase_000035_1, VkglTestCase_000035_2);

#define VkglTestCase_000036_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000036_2 "ay.float_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000036, VkglTestCase_000036_1, VkglTestCase_000036_2);

#define VkglTestCase_000037_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000037_2 "ay.float_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000037, VkglTestCase_000037_1, VkglTestCase_000037_2);

#define VkglTestCase_000038_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000038_2 ".float_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000038, VkglTestCase_000038_1, VkglTestCase_000038_2);

#define VkglTestCase_000039_1 "KHR-GLES3.shaders.indexing.varying_array."
#define VkglTestCase_000039_2 "float_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000039, VkglTestCase_000039_1, VkglTestCase_000039_2);

#define VkglTestCase_000040_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000040_2 "ay.float_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000040, VkglTestCase_000040_1, VkglTestCase_000040_2);

#define VkglTestCase_000041_1 "KHR-GLES3.shaders.indexing.varying_arra"
#define VkglTestCase_000041_2 "y.float_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000041, VkglTestCase_000041_1, VkglTestCase_000041_2);

#define VkglTestCase_000042_1 "KHR-GLES3.shaders.indexing.varying_array."
#define VkglTestCase_000042_2 "float_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000042, VkglTestCase_000042_1, VkglTestCase_000042_2);

#define VkglTestCase_000043_1 "KHR-GLES3.shaders.indexing.varying_array."
#define VkglTestCase_000043_2 "float_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000043, VkglTestCase_000043_1, VkglTestCase_000043_2);

#define VkglTestCase_000044_1 "KHR-GLES3.shaders.indexing.varying_"
#define VkglTestCase_000044_2 "array.vec2_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000044, VkglTestCase_000044_1, VkglTestCase_000044_2);

#define VkglTestCase_000045_1 "KHR-GLES3.shaders.indexing.varying_ar"
#define VkglTestCase_000045_2 "ray.vec2_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000045, VkglTestCase_000045_1, VkglTestCase_000045_2);

#define VkglTestCase_000046_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000046_2 "ay.vec2_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000046, VkglTestCase_000046_1, VkglTestCase_000046_2);

#define VkglTestCase_000047_1 "KHR-GLES3.shaders.indexing.varying_"
#define VkglTestCase_000047_2 "array.vec2_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000047, VkglTestCase_000047_1, VkglTestCase_000047_2);

#define VkglTestCase_000048_1 "KHR-GLES3.shaders.indexing.varying_a"
#define VkglTestCase_000048_2 "rray.vec2_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000048, VkglTestCase_000048_1, VkglTestCase_000048_2);

#define VkglTestCase_000049_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000049_2 "ay.vec2_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000049, VkglTestCase_000049_1, VkglTestCase_000049_2);

#define VkglTestCase_000050_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000050_2 "ay.vec2_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000050, VkglTestCase_000050_1, VkglTestCase_000050_2);

#define VkglTestCase_000051_1 "KHR-GLES3.shaders.indexing.varying_ar"
#define VkglTestCase_000051_2 "ray.vec2_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000051, VkglTestCase_000051_1, VkglTestCase_000051_2);

#define VkglTestCase_000052_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000052_2 "ay.vec2_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000052, VkglTestCase_000052_1, VkglTestCase_000052_2);

#define VkglTestCase_000053_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000053_2 ".vec2_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000053, VkglTestCase_000053_1, VkglTestCase_000053_2);

#define VkglTestCase_000054_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000054_2 ".vec2_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000054, VkglTestCase_000054_1, VkglTestCase_000054_2);

#define VkglTestCase_000055_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000055_2 "ay.vec2_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000055, VkglTestCase_000055_1, VkglTestCase_000055_2);

#define VkglTestCase_000056_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000056_2 "ay.vec2_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000056, VkglTestCase_000056_1, VkglTestCase_000056_2);

#define VkglTestCase_000057_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000057_2 ".vec2_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000057, VkglTestCase_000057_1, VkglTestCase_000057_2);

#define VkglTestCase_000058_1 "KHR-GLES3.shaders.indexing.varying_array."
#define VkglTestCase_000058_2 "vec2_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000058, VkglTestCase_000058_1, VkglTestCase_000058_2);

#define VkglTestCase_000059_1 "KHR-GLES3.shaders.indexing.varying_"
#define VkglTestCase_000059_2 "array.vec3_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000059, VkglTestCase_000059_1, VkglTestCase_000059_2);

#define VkglTestCase_000060_1 "KHR-GLES3.shaders.indexing.varying_ar"
#define VkglTestCase_000060_2 "ray.vec3_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000060, VkglTestCase_000060_1, VkglTestCase_000060_2);

#define VkglTestCase_000061_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000061_2 "ay.vec3_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000061, VkglTestCase_000061_1, VkglTestCase_000061_2);

#define VkglTestCase_000062_1 "KHR-GLES3.shaders.indexing.varying_"
#define VkglTestCase_000062_2 "array.vec3_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000062, VkglTestCase_000062_1, VkglTestCase_000062_2);

#define VkglTestCase_000063_1 "KHR-GLES3.shaders.indexing.varying_a"
#define VkglTestCase_000063_2 "rray.vec3_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000063, VkglTestCase_000063_1, VkglTestCase_000063_2);

#define VkglTestCase_000064_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000064_2 "ay.vec3_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000064, VkglTestCase_000064_1, VkglTestCase_000064_2);

#define VkglTestCase_000065_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000065_2 "ay.vec3_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000065, VkglTestCase_000065_1, VkglTestCase_000065_2);

#define VkglTestCase_000066_1 "KHR-GLES3.shaders.indexing.varying_ar"
#define VkglTestCase_000066_2 "ray.vec3_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000066, VkglTestCase_000066_1, VkglTestCase_000066_2);

#define VkglTestCase_000067_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000067_2 "ay.vec3_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000067, VkglTestCase_000067_1, VkglTestCase_000067_2);

#define VkglTestCase_000068_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000068_2 ".vec3_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000068, VkglTestCase_000068_1, VkglTestCase_000068_2);

#define VkglTestCase_000069_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000069_2 ".vec3_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000069, VkglTestCase_000069_1, VkglTestCase_000069_2);

#define VkglTestCase_000070_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000070_2 "ay.vec3_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000070, VkglTestCase_000070_1, VkglTestCase_000070_2);

#define VkglTestCase_000071_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000071_2 "ay.vec3_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000071, VkglTestCase_000071_1, VkglTestCase_000071_2);

#define VkglTestCase_000072_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000072_2 ".vec3_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000072, VkglTestCase_000072_1, VkglTestCase_000072_2);

#define VkglTestCase_000073_1 "KHR-GLES3.shaders.indexing.varying_array."
#define VkglTestCase_000073_2 "vec3_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000073, VkglTestCase_000073_1, VkglTestCase_000073_2);

#define VkglTestCase_000074_1 "KHR-GLES3.shaders.indexing.varying_"
#define VkglTestCase_000074_2 "array.vec4_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000074, VkglTestCase_000074_1, VkglTestCase_000074_2);

#define VkglTestCase_000075_1 "KHR-GLES3.shaders.indexing.varying_ar"
#define VkglTestCase_000075_2 "ray.vec4_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000075, VkglTestCase_000075_1, VkglTestCase_000075_2);

#define VkglTestCase_000076_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000076_2 "ay.vec4_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000076, VkglTestCase_000076_1, VkglTestCase_000076_2);

#define VkglTestCase_000077_1 "KHR-GLES3.shaders.indexing.varying_"
#define VkglTestCase_000077_2 "array.vec4_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000077, VkglTestCase_000077_1, VkglTestCase_000077_2);

#define VkglTestCase_000078_1 "KHR-GLES3.shaders.indexing.varying_a"
#define VkglTestCase_000078_2 "rray.vec4_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000078, VkglTestCase_000078_1, VkglTestCase_000078_2);

#define VkglTestCase_000079_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000079_2 "ay.vec4_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000079, VkglTestCase_000079_1, VkglTestCase_000079_2);

#define VkglTestCase_000080_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000080_2 "ay.vec4_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000080, VkglTestCase_000080_1, VkglTestCase_000080_2);

#define VkglTestCase_000081_1 "KHR-GLES3.shaders.indexing.varying_ar"
#define VkglTestCase_000081_2 "ray.vec4_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000081, VkglTestCase_000081_1, VkglTestCase_000081_2);

#define VkglTestCase_000082_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000082_2 "ay.vec4_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000082, VkglTestCase_000082_1, VkglTestCase_000082_2);

#define VkglTestCase_000083_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000083_2 ".vec4_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000083, VkglTestCase_000083_1, VkglTestCase_000083_2);

#define VkglTestCase_000084_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000084_2 ".vec4_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000084, VkglTestCase_000084_1, VkglTestCase_000084_2);

#define VkglTestCase_000085_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000085_2 "ay.vec4_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000085, VkglTestCase_000085_1, VkglTestCase_000085_2);

#define VkglTestCase_000086_1 "KHR-GLES3.shaders.indexing.varying_arr"
#define VkglTestCase_000086_2 "ay.vec4_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000086, VkglTestCase_000086_1, VkglTestCase_000086_2);

#define VkglTestCase_000087_1 "KHR-GLES3.shaders.indexing.varying_array"
#define VkglTestCase_000087_2 ".vec4_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000087, VkglTestCase_000087_1, VkglTestCase_000087_2);

#define VkglTestCase_000088_1 "KHR-GLES3.shaders.indexing.varying_array."
#define VkglTestCase_000088_2 "vec4_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000088, VkglTestCase_000088_1, VkglTestCase_000088_2);
