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

#define VkglTestCase_000089_1 "KHR-GLES3.shaders.indexing.unifo"
#define VkglTestCase_000089_2 "rm_array.float_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000089, VkglTestCase_000089_1, VkglTestCase_000089_2);

#define VkglTestCase_000090_1 "KHR-GLES3.shaders.indexing.unifor"
#define VkglTestCase_000090_2 "m_array.float_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000090, VkglTestCase_000090_1, VkglTestCase_000090_2);

#define VkglTestCase_000091_1 "KHR-GLES3.shaders.indexing.unifor"
#define VkglTestCase_000091_2 "m_array.float_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000091, VkglTestCase_000091_1, VkglTestCase_000091_2);

#define VkglTestCase_000092_1 "KHR-GLES3.shaders.indexing.uniform"
#define VkglTestCase_000092_2 "_array.float_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000092, VkglTestCase_000092_1, VkglTestCase_000092_2);

#define VkglTestCase_000093_1 "KHR-GLES3.shaders.indexing.uniform_"
#define VkglTestCase_000093_2 "array.float_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000093, VkglTestCase_000093_1, VkglTestCase_000093_2);

#define VkglTestCase_000094_1 "KHR-GLES3.shaders.indexing.uniform_a"
#define VkglTestCase_000094_2 "rray.float_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000094, VkglTestCase_000094_1, VkglTestCase_000094_2);

#define VkglTestCase_000095_1 "KHR-GLES3.shaders.indexing.uniform_"
#define VkglTestCase_000095_2 "array.float_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000095, VkglTestCase_000095_1, VkglTestCase_000095_2);

#define VkglTestCase_000096_1 "KHR-GLES3.shaders.indexing.uniform_a"
#define VkglTestCase_000096_2 "rray.float_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000096, VkglTestCase_000096_1, VkglTestCase_000096_2);

#define VkglTestCase_000097_1 "KHR-GLES3.shaders.indexing.unifo"
#define VkglTestCase_000097_2 "rm_array.vec2_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000097, VkglTestCase_000097_1, VkglTestCase_000097_2);

#define VkglTestCase_000098_1 "KHR-GLES3.shaders.indexing.unifor"
#define VkglTestCase_000098_2 "m_array.vec2_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000098, VkglTestCase_000098_1, VkglTestCase_000098_2);

#define VkglTestCase_000099_1 "KHR-GLES3.shaders.indexing.unifo"
#define VkglTestCase_000099_2 "rm_array.vec2_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000099, VkglTestCase_000099_1, VkglTestCase_000099_2);

#define VkglTestCase_000100_1 "KHR-GLES3.shaders.indexing.unifor"
#define VkglTestCase_000100_2 "m_array.vec2_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000100, VkglTestCase_000100_1, VkglTestCase_000100_2);

#define VkglTestCase_000101_1 "KHR-GLES3.shaders.indexing.uniform"
#define VkglTestCase_000101_2 "_array.vec2_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000101, VkglTestCase_000101_1, VkglTestCase_000101_2);

#define VkglTestCase_000102_1 "KHR-GLES3.shaders.indexing.uniform_"
#define VkglTestCase_000102_2 "array.vec2_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000102, VkglTestCase_000102_1, VkglTestCase_000102_2);

#define VkglTestCase_000103_1 "KHR-GLES3.shaders.indexing.uniform_"
#define VkglTestCase_000103_2 "array.vec2_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000103, VkglTestCase_000103_1, VkglTestCase_000103_2);

#define VkglTestCase_000104_1 "KHR-GLES3.shaders.indexing.uniform_a"
#define VkglTestCase_000104_2 "rray.vec2_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000104, VkglTestCase_000104_1, VkglTestCase_000104_2);

#define VkglTestCase_000105_1 "KHR-GLES3.shaders.indexing.unifo"
#define VkglTestCase_000105_2 "rm_array.vec3_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000105, VkglTestCase_000105_1, VkglTestCase_000105_2);

#define VkglTestCase_000106_1 "KHR-GLES3.shaders.indexing.unifor"
#define VkglTestCase_000106_2 "m_array.vec3_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000106, VkglTestCase_000106_1, VkglTestCase_000106_2);

#define VkglTestCase_000107_1 "KHR-GLES3.shaders.indexing.unifo"
#define VkglTestCase_000107_2 "rm_array.vec3_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000107, VkglTestCase_000107_1, VkglTestCase_000107_2);

#define VkglTestCase_000108_1 "KHR-GLES3.shaders.indexing.unifor"
#define VkglTestCase_000108_2 "m_array.vec3_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000108, VkglTestCase_000108_1, VkglTestCase_000108_2);

#define VkglTestCase_000109_1 "KHR-GLES3.shaders.indexing.uniform"
#define VkglTestCase_000109_2 "_array.vec3_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000109, VkglTestCase_000109_1, VkglTestCase_000109_2);

#define VkglTestCase_000110_1 "KHR-GLES3.shaders.indexing.uniform_"
#define VkglTestCase_000110_2 "array.vec3_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000110, VkglTestCase_000110_1, VkglTestCase_000110_2);

#define VkglTestCase_000111_1 "KHR-GLES3.shaders.indexing.uniform_"
#define VkglTestCase_000111_2 "array.vec3_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000111, VkglTestCase_000111_1, VkglTestCase_000111_2);

#define VkglTestCase_000112_1 "KHR-GLES3.shaders.indexing.uniform_a"
#define VkglTestCase_000112_2 "rray.vec3_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000112, VkglTestCase_000112_1, VkglTestCase_000112_2);

#define VkglTestCase_000113_1 "KHR-GLES3.shaders.indexing.unifo"
#define VkglTestCase_000113_2 "rm_array.vec4_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000113, VkglTestCase_000113_1, VkglTestCase_000113_2);

#define VkglTestCase_000114_1 "KHR-GLES3.shaders.indexing.unifor"
#define VkglTestCase_000114_2 "m_array.vec4_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000114, VkglTestCase_000114_1, VkglTestCase_000114_2);

#define VkglTestCase_000115_1 "KHR-GLES3.shaders.indexing.unifo"
#define VkglTestCase_000115_2 "rm_array.vec4_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000115, VkglTestCase_000115_1, VkglTestCase_000115_2);

#define VkglTestCase_000116_1 "KHR-GLES3.shaders.indexing.unifor"
#define VkglTestCase_000116_2 "m_array.vec4_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000116, VkglTestCase_000116_1, VkglTestCase_000116_2);

#define VkglTestCase_000117_1 "KHR-GLES3.shaders.indexing.uniform"
#define VkglTestCase_000117_2 "_array.vec4_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000117, VkglTestCase_000117_1, VkglTestCase_000117_2);

#define VkglTestCase_000118_1 "KHR-GLES3.shaders.indexing.uniform_"
#define VkglTestCase_000118_2 "array.vec4_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000118, VkglTestCase_000118_1, VkglTestCase_000118_2);

#define VkglTestCase_000119_1 "KHR-GLES3.shaders.indexing.uniform_"
#define VkglTestCase_000119_2 "array.vec4_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000119, VkglTestCase_000119_1, VkglTestCase_000119_2);

#define VkglTestCase_000120_1 "KHR-GLES3.shaders.indexing.uniform_a"
#define VkglTestCase_000120_2 "rray.vec4_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000120, VkglTestCase_000120_1, VkglTestCase_000120_2);
