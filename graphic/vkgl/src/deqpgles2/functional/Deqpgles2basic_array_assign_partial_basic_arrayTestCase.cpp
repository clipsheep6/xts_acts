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

#define VkglTestCase_015092_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015092_2 "asic_array_assign_partial.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015092, VkglTestCase_015092_1, VkglTestCase_015092_2);

#define VkglTestCase_015093_1 "dEQP-GLES2.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_015093_2 "sic_array_assign_partial.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015093, VkglTestCase_015093_1, VkglTestCase_015093_2);

#define VkglTestCase_015094_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015094_2 "basic_array_assign_partial.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015094, VkglTestCase_015094_1, VkglTestCase_015094_2);

#define VkglTestCase_015095_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015095_2 "basic_array_assign_partial.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015095, VkglTestCase_015095_1, VkglTestCase_015095_2);

#define VkglTestCase_015096_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015096_2 "asic_array_assign_partial.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015096, VkglTestCase_015096_1, VkglTestCase_015096_2);

#define VkglTestCase_015097_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015097_2 ".basic_array_assign_partial.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015097, VkglTestCase_015097_1, VkglTestCase_015097_2);

#define VkglTestCase_015098_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015098_2 "basic_array_assign_partial.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015098, VkglTestCase_015098_1, VkglTestCase_015098_2);

#define VkglTestCase_015099_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015099_2 "asic_array_assign_partial.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015099, VkglTestCase_015099_1, VkglTestCase_015099_2);

#define VkglTestCase_015100_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015100_2 ".basic_array_assign_partial.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015100, VkglTestCase_015100_1, VkglTestCase_015100_2);

#define VkglTestCase_015101_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015101_2 "basic_array_assign_partial.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015101, VkglTestCase_015101_1, VkglTestCase_015101_2);

#define VkglTestCase_015102_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015102_2 "asic_array_assign_partial.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015102, VkglTestCase_015102_1, VkglTestCase_015102_2);

#define VkglTestCase_015103_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015103_2 ".basic_array_assign_partial.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015103, VkglTestCase_015103_1, VkglTestCase_015103_2);

#define VkglTestCase_015104_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015104_2 "asic_array_assign_partial.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015104, VkglTestCase_015104_1, VkglTestCase_015104_2);

#define VkglTestCase_015105_1 "dEQP-GLES2.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_015105_2 "sic_array_assign_partial.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015105, VkglTestCase_015105_1, VkglTestCase_015105_2);

#define VkglTestCase_015106_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015106_2 "basic_array_assign_partial.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015106, VkglTestCase_015106_1, VkglTestCase_015106_2);

#define VkglTestCase_015107_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015107_2 "basic_array_assign_partial.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015107, VkglTestCase_015107_1, VkglTestCase_015107_2);

#define VkglTestCase_015108_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015108_2 "asic_array_assign_partial.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015108, VkglTestCase_015108_1, VkglTestCase_015108_2);

#define VkglTestCase_015109_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015109_2 ".basic_array_assign_partial.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015109, VkglTestCase_015109_1, VkglTestCase_015109_2);

#define VkglTestCase_015110_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015110_2 "asic_array_assign_partial.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015110, VkglTestCase_015110_1, VkglTestCase_015110_2);

#define VkglTestCase_015111_1 "dEQP-GLES2.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_015111_2 "sic_array_assign_partial.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015111, VkglTestCase_015111_1, VkglTestCase_015111_2);

#define VkglTestCase_015112_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015112_2 "basic_array_assign_partial.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015112, VkglTestCase_015112_1, VkglTestCase_015112_2);

#define VkglTestCase_015113_1 "dEQP-GLES2.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_015113_2 "ic_array_assign_partial.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015113, VkglTestCase_015113_1, VkglTestCase_015113_2);

#define VkglTestCase_015114_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_015114_2 "c_array_assign_partial.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015114, VkglTestCase_015114_1, VkglTestCase_015114_2);

#define VkglTestCase_015115_1 "dEQP-GLES2.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_015115_2 "sic_array_assign_partial.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015115, VkglTestCase_015115_1, VkglTestCase_015115_2);
