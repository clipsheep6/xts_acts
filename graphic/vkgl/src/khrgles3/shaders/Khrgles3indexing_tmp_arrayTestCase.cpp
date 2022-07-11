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

#define VkglTestCase_000121_1 "KHR-GLES3.shaders.indexing.tmp_array."
#define VkglTestCase_000121_2 "float_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000121, VkglTestCase_000121_1, VkglTestCase_000121_2);

#define VkglTestCase_000122_1 "KHR-GLES3.shaders.indexing.tmp_array.f"
#define VkglTestCase_000122_2 "loat_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000122, VkglTestCase_000122_1, VkglTestCase_000122_2);

#define VkglTestCase_000123_1 "KHR-GLES3.shaders.indexing.tmp_array.fl"
#define VkglTestCase_000123_2 "oat_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000123, VkglTestCase_000123_1, VkglTestCase_000123_2);

#define VkglTestCase_000124_1 "KHR-GLES3.shaders.indexing.tmp_array.flo"
#define VkglTestCase_000124_2 "at_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000124, VkglTestCase_000124_1, VkglTestCase_000124_2);

#define VkglTestCase_000125_1 "KHR-GLES3.shaders.indexing.tmp_array.flo"
#define VkglTestCase_000125_2 "at_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000125, VkglTestCase_000125_1, VkglTestCase_000125_2);

#define VkglTestCase_000126_1 "KHR-GLES3.shaders.indexing.tmp_array.floa"
#define VkglTestCase_000126_2 "t_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000126, VkglTestCase_000126_1, VkglTestCase_000126_2);

#define VkglTestCase_000127_1 "KHR-GLES3.shaders.indexing.tmp_array."
#define VkglTestCase_000127_2 "float_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000127, VkglTestCase_000127_1, VkglTestCase_000127_2);

#define VkglTestCase_000128_1 "KHR-GLES3.shaders.indexing.tmp_array.f"
#define VkglTestCase_000128_2 "loat_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000128, VkglTestCase_000128_1, VkglTestCase_000128_2);

#define VkglTestCase_000129_1 "KHR-GLES3.shaders.indexing.tmp_array.fl"
#define VkglTestCase_000129_2 "oat_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000129, VkglTestCase_000129_1, VkglTestCase_000129_2);

#define VkglTestCase_000130_1 "KHR-GLES3.shaders.indexing.tmp_array.flo"
#define VkglTestCase_000130_2 "at_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000130, VkglTestCase_000130_1, VkglTestCase_000130_2);

#define VkglTestCase_000131_1 "KHR-GLES3.shaders.indexing.tmp_array.flo"
#define VkglTestCase_000131_2 "at_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000131, VkglTestCase_000131_1, VkglTestCase_000131_2);

#define VkglTestCase_000132_1 "KHR-GLES3.shaders.indexing.tmp_array.floa"
#define VkglTestCase_000132_2 "t_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000132, VkglTestCase_000132_1, VkglTestCase_000132_2);

#define VkglTestCase_000133_1 "KHR-GLES3.shaders.indexing.tmp_array."
#define VkglTestCase_000133_2 "vec2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000133, VkglTestCase_000133_1, VkglTestCase_000133_2);

#define VkglTestCase_000134_1 "KHR-GLES3.shaders.indexing.tmp_array.v"
#define VkglTestCase_000134_2 "ec2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000134, VkglTestCase_000134_1, VkglTestCase_000134_2);

#define VkglTestCase_000135_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000135_2 "c2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000135, VkglTestCase_000135_1, VkglTestCase_000135_2);

#define VkglTestCase_000136_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000136_2 "2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000136, VkglTestCase_000136_1, VkglTestCase_000136_2);

#define VkglTestCase_000137_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000137_2 "c2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000137, VkglTestCase_000137_1, VkglTestCase_000137_2);

#define VkglTestCase_000138_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000138_2 "2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000138, VkglTestCase_000138_1, VkglTestCase_000138_2);

#define VkglTestCase_000139_1 "KHR-GLES3.shaders.indexing.tmp_array."
#define VkglTestCase_000139_2 "vec2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000139, VkglTestCase_000139_1, VkglTestCase_000139_2);

#define VkglTestCase_000140_1 "KHR-GLES3.shaders.indexing.tmp_array.v"
#define VkglTestCase_000140_2 "ec2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000140, VkglTestCase_000140_1, VkglTestCase_000140_2);

#define VkglTestCase_000141_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000141_2 "c2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000141, VkglTestCase_000141_1, VkglTestCase_000141_2);

#define VkglTestCase_000142_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000142_2 "2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000142, VkglTestCase_000142_1, VkglTestCase_000142_2);

#define VkglTestCase_000143_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000143_2 "c2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000143, VkglTestCase_000143_1, VkglTestCase_000143_2);

#define VkglTestCase_000144_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000144_2 "2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000144, VkglTestCase_000144_1, VkglTestCase_000144_2);

#define VkglTestCase_000145_1 "KHR-GLES3.shaders.indexing.tmp_array."
#define VkglTestCase_000145_2 "vec3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000145, VkglTestCase_000145_1, VkglTestCase_000145_2);

#define VkglTestCase_000146_1 "KHR-GLES3.shaders.indexing.tmp_array.v"
#define VkglTestCase_000146_2 "ec3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000146, VkglTestCase_000146_1, VkglTestCase_000146_2);

#define VkglTestCase_000147_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000147_2 "c3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000147, VkglTestCase_000147_1, VkglTestCase_000147_2);

#define VkglTestCase_000148_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000148_2 "3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000148, VkglTestCase_000148_1, VkglTestCase_000148_2);

#define VkglTestCase_000149_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000149_2 "c3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000149, VkglTestCase_000149_1, VkglTestCase_000149_2);

#define VkglTestCase_000150_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000150_2 "3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000150, VkglTestCase_000150_1, VkglTestCase_000150_2);

#define VkglTestCase_000151_1 "KHR-GLES3.shaders.indexing.tmp_array."
#define VkglTestCase_000151_2 "vec3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000151, VkglTestCase_000151_1, VkglTestCase_000151_2);

#define VkglTestCase_000152_1 "KHR-GLES3.shaders.indexing.tmp_array.v"
#define VkglTestCase_000152_2 "ec3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000152, VkglTestCase_000152_1, VkglTestCase_000152_2);

#define VkglTestCase_000153_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000153_2 "c3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000153, VkglTestCase_000153_1, VkglTestCase_000153_2);

#define VkglTestCase_000154_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000154_2 "3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000154, VkglTestCase_000154_1, VkglTestCase_000154_2);

#define VkglTestCase_000155_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000155_2 "c3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000155, VkglTestCase_000155_1, VkglTestCase_000155_2);

#define VkglTestCase_000156_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000156_2 "3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000156, VkglTestCase_000156_1, VkglTestCase_000156_2);

#define VkglTestCase_000157_1 "KHR-GLES3.shaders.indexing.tmp_array."
#define VkglTestCase_000157_2 "vec4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000157, VkglTestCase_000157_1, VkglTestCase_000157_2);

#define VkglTestCase_000158_1 "KHR-GLES3.shaders.indexing.tmp_array.v"
#define VkglTestCase_000158_2 "ec4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000158, VkglTestCase_000158_1, VkglTestCase_000158_2);

#define VkglTestCase_000159_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000159_2 "c4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000159, VkglTestCase_000159_1, VkglTestCase_000159_2);

#define VkglTestCase_000160_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000160_2 "4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000160, VkglTestCase_000160_1, VkglTestCase_000160_2);

#define VkglTestCase_000161_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000161_2 "c4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000161, VkglTestCase_000161_1, VkglTestCase_000161_2);

#define VkglTestCase_000162_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000162_2 "4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000162, VkglTestCase_000162_1, VkglTestCase_000162_2);

#define VkglTestCase_000163_1 "KHR-GLES3.shaders.indexing.tmp_array."
#define VkglTestCase_000163_2 "vec4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000163, VkglTestCase_000163_1, VkglTestCase_000163_2);

#define VkglTestCase_000164_1 "KHR-GLES3.shaders.indexing.tmp_array.v"
#define VkglTestCase_000164_2 "ec4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000164, VkglTestCase_000164_1, VkglTestCase_000164_2);

#define VkglTestCase_000165_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000165_2 "c4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000165, VkglTestCase_000165_1, VkglTestCase_000165_2);

#define VkglTestCase_000166_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000166_2 "4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000166, VkglTestCase_000166_1, VkglTestCase_000166_2);

#define VkglTestCase_000167_1 "KHR-GLES3.shaders.indexing.tmp_array.ve"
#define VkglTestCase_000167_2 "c4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000167, VkglTestCase_000167_1, VkglTestCase_000167_2);

#define VkglTestCase_000168_1 "KHR-GLES3.shaders.indexing.tmp_array.vec"
#define VkglTestCase_000168_2 "4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000168, VkglTestCase_000168_1, VkglTestCase_000168_2);

#define VkglTestCase_000169_1 "KHR-GLES3.shaders.inde"
#define VkglTestCase_000169_2 "xing.tmp_array.vertexid"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000169, VkglTestCase_000169_1, VkglTestCase_000169_2);
