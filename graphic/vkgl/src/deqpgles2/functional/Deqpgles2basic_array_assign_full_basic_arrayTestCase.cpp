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

#define VkglTestCase_015050_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015050_2 ".basic_array_assign_full.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015050, VkglTestCase_015050_1, VkglTestCase_015050_2);

#define VkglTestCase_015051_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015051_2 "basic_array_assign_full.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015051, VkglTestCase_015051_1, VkglTestCase_015051_2);

#define VkglTestCase_015052_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015052_2 "d.basic_array_assign_full.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015052, VkglTestCase_015052_1, VkglTestCase_015052_2);

#define VkglTestCase_015053_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015053_2 ".basic_array_assign_full.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015053, VkglTestCase_015053_1, VkglTestCase_015053_2);

#define VkglTestCase_015054_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015054_2 "basic_array_assign_full.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015054, VkglTestCase_015054_1, VkglTestCase_015054_2);

#define VkglTestCase_015055_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015055_2 "d.basic_array_assign_full.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015055, VkglTestCase_015055_1, VkglTestCase_015055_2);

#define VkglTestCase_015056_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015056_2 ".basic_array_assign_full.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015056, VkglTestCase_015056_1, VkglTestCase_015056_2);

#define VkglTestCase_015057_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015057_2 "basic_array_assign_full.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015057, VkglTestCase_015057_1, VkglTestCase_015057_2);

#define VkglTestCase_015058_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015058_2 "d.basic_array_assign_full.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015058, VkglTestCase_015058_1, VkglTestCase_015058_2);

#define VkglTestCase_015059_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015059_2 "d.basic_array_assign_full.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015059, VkglTestCase_015059_1, VkglTestCase_015059_2);

#define VkglTestCase_015060_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015060_2 ".basic_array_assign_full.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015060, VkglTestCase_015060_1, VkglTestCase_015060_2);

#define VkglTestCase_015061_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_015061_2 "ed.basic_array_assign_full.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015061, VkglTestCase_015061_1, VkglTestCase_015061_2);

#define VkglTestCase_015062_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015062_2 ".basic_array_assign_full.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015062, VkglTestCase_015062_1, VkglTestCase_015062_2);

#define VkglTestCase_015063_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015063_2 "basic_array_assign_full.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015063, VkglTestCase_015063_1, VkglTestCase_015063_2);

#define VkglTestCase_015064_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015064_2 "d.basic_array_assign_full.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015064, VkglTestCase_015064_1, VkglTestCase_015064_2);

#define VkglTestCase_015065_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015065_2 ".basic_array_assign_full.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015065, VkglTestCase_015065_1, VkglTestCase_015065_2);

#define VkglTestCase_015066_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015066_2 "basic_array_assign_full.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015066, VkglTestCase_015066_1, VkglTestCase_015066_2);

#define VkglTestCase_015067_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015067_2 "d.basic_array_assign_full.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015067, VkglTestCase_015067_1, VkglTestCase_015067_2);

#define VkglTestCase_015068_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015068_2 ".basic_array_assign_full.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015068, VkglTestCase_015068_1, VkglTestCase_015068_2);

#define VkglTestCase_015069_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015069_2 "basic_array_assign_full.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015069, VkglTestCase_015069_1, VkglTestCase_015069_2);

#define VkglTestCase_015070_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015070_2 "d.basic_array_assign_full.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015070, VkglTestCase_015070_1, VkglTestCase_015070_2);

#define VkglTestCase_015071_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015071_2 "asic_array_assign_full.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015071, VkglTestCase_015071_1, VkglTestCase_015071_2);

#define VkglTestCase_015072_1 "dEQP-GLES2.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_015072_2 "sic_array_assign_full.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015072, VkglTestCase_015072_1, VkglTestCase_015072_2);

#define VkglTestCase_015073_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015073_2 "basic_array_assign_full.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015073, VkglTestCase_015073_1, VkglTestCase_015073_2);
