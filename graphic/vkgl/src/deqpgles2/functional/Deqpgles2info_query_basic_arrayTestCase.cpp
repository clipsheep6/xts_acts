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
#include "../ActsDeqpgles20015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014043_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014043_2 "info_query.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014043, VkglTestCase_014043_1, VkglTestCase_014043_2);

#define VkglTestCase_014044_1 "dEQP-GLES2.functional.uniform_api.i"
#define VkglTestCase_014044_2 "nfo_query.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014044, VkglTestCase_014044_1, VkglTestCase_014044_2);

#define VkglTestCase_014045_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014045_2 ".info_query.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014045, VkglTestCase_014045_1, VkglTestCase_014045_2);

#define VkglTestCase_014046_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014046_2 "info_query.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014046, VkglTestCase_014046_1, VkglTestCase_014046_2);

#define VkglTestCase_014047_1 "dEQP-GLES2.functional.uniform_api.i"
#define VkglTestCase_014047_2 "nfo_query.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014047, VkglTestCase_014047_1, VkglTestCase_014047_2);

#define VkglTestCase_014048_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014048_2 ".info_query.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014048, VkglTestCase_014048_1, VkglTestCase_014048_2);

#define VkglTestCase_014049_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014049_2 "info_query.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014049, VkglTestCase_014049_1, VkglTestCase_014049_2);

#define VkglTestCase_014050_1 "dEQP-GLES2.functional.uniform_api.i"
#define VkglTestCase_014050_2 "nfo_query.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014050, VkglTestCase_014050_1, VkglTestCase_014050_2);

#define VkglTestCase_014051_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014051_2 ".info_query.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014051, VkglTestCase_014051_1, VkglTestCase_014051_2);

#define VkglTestCase_014052_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014052_2 ".info_query.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014052, VkglTestCase_014052_1, VkglTestCase_014052_2);

#define VkglTestCase_014053_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014053_2 "info_query.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014053, VkglTestCase_014053_1, VkglTestCase_014053_2);

#define VkglTestCase_014054_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014054_2 "i.info_query.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014054, VkglTestCase_014054_1, VkglTestCase_014054_2);

#define VkglTestCase_014055_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014055_2 "info_query.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014055, VkglTestCase_014055_1, VkglTestCase_014055_2);

#define VkglTestCase_014056_1 "dEQP-GLES2.functional.uniform_api.i"
#define VkglTestCase_014056_2 "nfo_query.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014056, VkglTestCase_014056_1, VkglTestCase_014056_2);

#define VkglTestCase_014057_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014057_2 ".info_query.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014057, VkglTestCase_014057_1, VkglTestCase_014057_2);

#define VkglTestCase_014058_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014058_2 "info_query.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014058, VkglTestCase_014058_1, VkglTestCase_014058_2);

#define VkglTestCase_014059_1 "dEQP-GLES2.functional.uniform_api.i"
#define VkglTestCase_014059_2 "nfo_query.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014059, VkglTestCase_014059_1, VkglTestCase_014059_2);

#define VkglTestCase_014060_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014060_2 ".info_query.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014060, VkglTestCase_014060_1, VkglTestCase_014060_2);

#define VkglTestCase_014061_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014061_2 "info_query.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014061, VkglTestCase_014061_1, VkglTestCase_014061_2);

#define VkglTestCase_014062_1 "dEQP-GLES2.functional.uniform_api.i"
#define VkglTestCase_014062_2 "nfo_query.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014062, VkglTestCase_014062_1, VkglTestCase_014062_2);

#define VkglTestCase_014063_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014063_2 ".info_query.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014063, VkglTestCase_014063_1, VkglTestCase_014063_2);

#define VkglTestCase_014064_1 "dEQP-GLES2.functional.uniform_api.in"
#define VkglTestCase_014064_2 "fo_query.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014064, VkglTestCase_014064_1, VkglTestCase_014064_2);

#define VkglTestCase_014065_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014065_2 "o_query.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014065, VkglTestCase_014065_1, VkglTestCase_014065_2);

#define VkglTestCase_014066_1 "dEQP-GLES2.functional.uniform_api.i"
#define VkglTestCase_014066_2 "nfo_query.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014066, VkglTestCase_014066_1, VkglTestCase_014066_2);
