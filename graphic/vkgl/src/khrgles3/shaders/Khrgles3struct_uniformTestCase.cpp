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
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001446_1 "KHR-GLES3.shaders.stru"
#define VkglTestCase_001446_2 "ct.uniform.basic_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001446, VkglTestCase_001446_1, VkglTestCase_001446_2);

#define VkglTestCase_001447_1 "KHR-GLES3.shaders.struc"
#define VkglTestCase_001447_2 "t.uniform.basic_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001447, VkglTestCase_001447_1, VkglTestCase_001447_2);

#define VkglTestCase_001448_1 "KHR-GLES3.shaders.struc"
#define VkglTestCase_001448_2 "t.uniform.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001448, VkglTestCase_001448_1, VkglTestCase_001448_2);

#define VkglTestCase_001449_1 "KHR-GLES3.shaders.struct"
#define VkglTestCase_001449_2 ".uniform.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001449, VkglTestCase_001449_1, VkglTestCase_001449_2);

#define VkglTestCase_001450_1 "KHR-GLES3.shaders.struct.u"
#define VkglTestCase_001450_2 "niform.array_member_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001450, VkglTestCase_001450_1, VkglTestCase_001450_2);

#define VkglTestCase_001451_1 "KHR-GLES3.shaders.struct.un"
#define VkglTestCase_001451_2 "iform.array_member_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001451, VkglTestCase_001451_1, VkglTestCase_001451_2);

#define VkglTestCase_001452_1 "KHR-GLES3.shaders.struct.uniform."
#define VkglTestCase_001452_2 "array_member_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001452, VkglTestCase_001452_1, VkglTestCase_001452_2);

#define VkglTestCase_001453_1 "KHR-GLES3.shaders.struct.uniform.a"
#define VkglTestCase_001453_2 "rray_member_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001453, VkglTestCase_001453_1, VkglTestCase_001453_2);

#define VkglTestCase_001454_1 "KHR-GLES3.shaders.struct.u"
#define VkglTestCase_001454_2 "niform.struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001454, VkglTestCase_001454_1, VkglTestCase_001454_2);

#define VkglTestCase_001455_1 "KHR-GLES3.shaders.struct.un"
#define VkglTestCase_001455_2 "iform.struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001455, VkglTestCase_001455_1, VkglTestCase_001455_2);

#define VkglTestCase_001456_1 "KHR-GLES3.shaders.struct.uniform."
#define VkglTestCase_001456_2 "struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001456, VkglTestCase_001456_1, VkglTestCase_001456_2);

#define VkglTestCase_001457_1 "KHR-GLES3.shaders.struct.uniform.s"
#define VkglTestCase_001457_2 "truct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001457, VkglTestCase_001457_1, VkglTestCase_001457_2);

#define VkglTestCase_001458_1 "KHR-GLES3.shaders.struct.unif"
#define VkglTestCase_001458_2 "orm.nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001458, VkglTestCase_001458_1, VkglTestCase_001458_2);

#define VkglTestCase_001459_1 "KHR-GLES3.shaders.struct.unifo"
#define VkglTestCase_001459_2 "rm.nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001459, VkglTestCase_001459_1, VkglTestCase_001459_2);

#define VkglTestCase_001460_1 "KHR-GLES3.shaders.struct.uniform.nes"
#define VkglTestCase_001460_2 "ted_struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001460, VkglTestCase_001460_1, VkglTestCase_001460_2);

#define VkglTestCase_001461_1 "KHR-GLES3.shaders.struct.uniform.nest"
#define VkglTestCase_001461_2 "ed_struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001461, VkglTestCase_001461_1, VkglTestCase_001461_2);

#define VkglTestCase_001462_1 "KHR-GLES3.shaders.struct.uni"
#define VkglTestCase_001462_2 "form.loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001462, VkglTestCase_001462_1, VkglTestCase_001462_2);

#define VkglTestCase_001463_1 "KHR-GLES3.shaders.struct.unif"
#define VkglTestCase_001463_2 "orm.loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001463, VkglTestCase_001463_1, VkglTestCase_001463_2);

#define VkglTestCase_001464_1 "KHR-GLES3.shaders.struct.uniform"
#define VkglTestCase_001464_2 ".loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001464, VkglTestCase_001464_1, VkglTestCase_001464_2);

#define VkglTestCase_001465_1 "KHR-GLES3.shaders.struct.uniform."
#define VkglTestCase_001465_2 "loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001465, VkglTestCase_001465_1, VkglTestCase_001465_2);

#define VkglTestCase_001466_1 "KHR-GLES3.shaders.struct.uniform"
#define VkglTestCase_001466_2 ".dynamic_loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001466, VkglTestCase_001466_1, VkglTestCase_001466_2);

#define VkglTestCase_001467_1 "KHR-GLES3.shaders.struct.uniform."
#define VkglTestCase_001467_2 "dynamic_loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001467, VkglTestCase_001467_1, VkglTestCase_001467_2);

#define VkglTestCase_001468_1 "KHR-GLES3.shaders.struct.uniform.dyn"
#define VkglTestCase_001468_2 "amic_loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001468, VkglTestCase_001468_1, VkglTestCase_001468_2);

#define VkglTestCase_001469_1 "KHR-GLES3.shaders.struct.uniform.dyna"
#define VkglTestCase_001469_2 "mic_loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001469, VkglTestCase_001469_1, VkglTestCase_001469_2);

#define VkglTestCase_001470_1 "KHR-GLES3.shaders.struc"
#define VkglTestCase_001470_2 "t.uniform.sampler_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001470, VkglTestCase_001470_1, VkglTestCase_001470_2);

#define VkglTestCase_001471_1 "KHR-GLES3.shaders.struct"
#define VkglTestCase_001471_2 ".uniform.sampler_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001471, VkglTestCase_001471_1, VkglTestCase_001471_2);

#define VkglTestCase_001472_1 "KHR-GLES3.shaders.struct.un"
#define VkglTestCase_001472_2 "iform.sampler_nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001472, VkglTestCase_001472_1, VkglTestCase_001472_2);

#define VkglTestCase_001473_1 "KHR-GLES3.shaders.struct.uni"
#define VkglTestCase_001473_2 "form.sampler_nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001473, VkglTestCase_001473_1, VkglTestCase_001473_2);

#define VkglTestCase_001474_1 "KHR-GLES3.shaders.struct.u"
#define VkglTestCase_001474_2 "niform.sampler_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001474, VkglTestCase_001474_1, VkglTestCase_001474_2);

#define VkglTestCase_001475_1 "KHR-GLES3.shaders.struct.un"
#define VkglTestCase_001475_2 "iform.sampler_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001475, VkglTestCase_001475_1, VkglTestCase_001475_2);
