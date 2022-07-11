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

#define VkglTestCase_000170_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000170_2 "ec2_direct_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000170, VkglTestCase_000170_1, VkglTestCase_000170_2);

#define VkglTestCase_000171_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000171_2 "c2_direct_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000171, VkglTestCase_000171_1, VkglTestCase_000171_2);

#define VkglTestCase_000172_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000172_2 "ec2_direct_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000172, VkglTestCase_000172_1, VkglTestCase_000172_2);

#define VkglTestCase_000173_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000173_2 "c2_direct_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000173, VkglTestCase_000173_1, VkglTestCase_000173_2);

#define VkglTestCase_000174_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_000174_2 "2_direct_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000174, VkglTestCase_000174_1, VkglTestCase_000174_2);

#define VkglTestCase_000175_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_000175_2 "_direct_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000175, VkglTestCase_000175_1, VkglTestCase_000175_2);

#define VkglTestCase_000176_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_000176_2 "_direct_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000176, VkglTestCase_000176_1, VkglTestCase_000176_2);

#define VkglTestCase_000177_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec2_"
#define VkglTestCase_000177_2 "direct_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000177, VkglTestCase_000177_1, VkglTestCase_000177_2);

#define VkglTestCase_000178_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000178_2 "ec2_static_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000178, VkglTestCase_000178_1, VkglTestCase_000178_2);

#define VkglTestCase_000179_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000179_2 "c2_static_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000179, VkglTestCase_000179_1, VkglTestCase_000179_2);

#define VkglTestCase_000180_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000180_2 "ec2_dynamic_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000180, VkglTestCase_000180_1, VkglTestCase_000180_2);

#define VkglTestCase_000181_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000181_2 "c2_dynamic_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000181, VkglTestCase_000181_1, VkglTestCase_000181_2);

#define VkglTestCase_000182_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_000182_2 "2_static_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000182, VkglTestCase_000182_1, VkglTestCase_000182_2);

#define VkglTestCase_000183_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_000183_2 "_static_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000183, VkglTestCase_000183_1, VkglTestCase_000183_2);

#define VkglTestCase_000184_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_000184_2 "_dynamic_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000184, VkglTestCase_000184_1, VkglTestCase_000184_2);

#define VkglTestCase_000185_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec2_"
#define VkglTestCase_000185_2 "dynamic_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000185, VkglTestCase_000185_1, VkglTestCase_000185_2);

#define VkglTestCase_000186_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000186_2 "ec3_direct_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000186, VkglTestCase_000186_1, VkglTestCase_000186_2);

#define VkglTestCase_000187_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000187_2 "c3_direct_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000187, VkglTestCase_000187_1, VkglTestCase_000187_2);

#define VkglTestCase_000188_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000188_2 "ec3_direct_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000188, VkglTestCase_000188_1, VkglTestCase_000188_2);

#define VkglTestCase_000189_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000189_2 "c3_direct_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000189, VkglTestCase_000189_1, VkglTestCase_000189_2);

#define VkglTestCase_000190_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_000190_2 "3_direct_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000190, VkglTestCase_000190_1, VkglTestCase_000190_2);

#define VkglTestCase_000191_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_000191_2 "_direct_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000191, VkglTestCase_000191_1, VkglTestCase_000191_2);

#define VkglTestCase_000192_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_000192_2 "_direct_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000192, VkglTestCase_000192_1, VkglTestCase_000192_2);

#define VkglTestCase_000193_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec3_"
#define VkglTestCase_000193_2 "direct_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000193, VkglTestCase_000193_1, VkglTestCase_000193_2);

#define VkglTestCase_000194_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000194_2 "ec3_static_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000194, VkglTestCase_000194_1, VkglTestCase_000194_2);

#define VkglTestCase_000195_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000195_2 "c3_static_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000195, VkglTestCase_000195_1, VkglTestCase_000195_2);

#define VkglTestCase_000196_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000196_2 "ec3_dynamic_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000196, VkglTestCase_000196_1, VkglTestCase_000196_2);

#define VkglTestCase_000197_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000197_2 "c3_dynamic_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000197, VkglTestCase_000197_1, VkglTestCase_000197_2);

#define VkglTestCase_000198_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_000198_2 "3_static_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000198, VkglTestCase_000198_1, VkglTestCase_000198_2);

#define VkglTestCase_000199_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_000199_2 "_static_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000199, VkglTestCase_000199_1, VkglTestCase_000199_2);

#define VkglTestCase_000200_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_000200_2 "_dynamic_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000200, VkglTestCase_000200_1, VkglTestCase_000200_2);

#define VkglTestCase_000201_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec3_"
#define VkglTestCase_000201_2 "dynamic_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000201, VkglTestCase_000201_1, VkglTestCase_000201_2);

#define VkglTestCase_000202_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000202_2 "ec4_direct_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000202, VkglTestCase_000202_1, VkglTestCase_000202_2);

#define VkglTestCase_000203_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000203_2 "c4_direct_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000203, VkglTestCase_000203_1, VkglTestCase_000203_2);

#define VkglTestCase_000204_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000204_2 "ec4_direct_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000204, VkglTestCase_000204_1, VkglTestCase_000204_2);

#define VkglTestCase_000205_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000205_2 "c4_direct_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000205, VkglTestCase_000205_1, VkglTestCase_000205_2);

#define VkglTestCase_000206_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_000206_2 "4_direct_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000206, VkglTestCase_000206_1, VkglTestCase_000206_2);

#define VkglTestCase_000207_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_000207_2 "_direct_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000207, VkglTestCase_000207_1, VkglTestCase_000207_2);

#define VkglTestCase_000208_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_000208_2 "_direct_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000208, VkglTestCase_000208_1, VkglTestCase_000208_2);

#define VkglTestCase_000209_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec4_"
#define VkglTestCase_000209_2 "direct_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000209, VkglTestCase_000209_1, VkglTestCase_000209_2);

#define VkglTestCase_000210_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000210_2 "ec4_static_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000210, VkglTestCase_000210_1, VkglTestCase_000210_2);

#define VkglTestCase_000211_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000211_2 "c4_static_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000211, VkglTestCase_000211_1, VkglTestCase_000211_2);

#define VkglTestCase_000212_1 "KHR-GLES3.shaders.indexing.vector_subscript.v"
#define VkglTestCase_000212_2 "ec4_dynamic_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000212, VkglTestCase_000212_1, VkglTestCase_000212_2);

#define VkglTestCase_000213_1 "KHR-GLES3.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_000213_2 "c4_dynamic_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000213, VkglTestCase_000213_1, VkglTestCase_000213_2);

#define VkglTestCase_000214_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_000214_2 "4_static_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000214, VkglTestCase_000214_1, VkglTestCase_000214_2);

#define VkglTestCase_000215_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_000215_2 "_static_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000215, VkglTestCase_000215_1, VkglTestCase_000215_2);

#define VkglTestCase_000216_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_000216_2 "_dynamic_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000216, VkglTestCase_000216_1, VkglTestCase_000216_2);

#define VkglTestCase_000217_1 "KHR-GLES3.shaders.indexing.vector_subscript.vec4_"
#define VkglTestCase_000217_2 "dynamic_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000217, VkglTestCase_000217_1, VkglTestCase_000217_2);
