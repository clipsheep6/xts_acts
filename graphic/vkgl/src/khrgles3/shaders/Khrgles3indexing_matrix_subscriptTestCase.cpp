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

#define VkglTestCase_000218_1 "KHR-GLES3.shaders.indexing.matrix_subscr"
#define VkglTestCase_000218_2 "ipt.mat2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000218, VkglTestCase_000218_1, VkglTestCase_000218_2);

#define VkglTestCase_000219_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000219_2 "pt.mat2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000219, VkglTestCase_000219_1, VkglTestCase_000219_2);

#define VkglTestCase_000220_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000220_2 "t.mat2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000220, VkglTestCase_000220_1, VkglTestCase_000220_2);

#define VkglTestCase_000221_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000221_2 ".mat2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000221, VkglTestCase_000221_1, VkglTestCase_000221_2);

#define VkglTestCase_000222_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000222_2 ".mat2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000222, VkglTestCase_000222_1, VkglTestCase_000222_2);

#define VkglTestCase_000223_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000223_2 "mat2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000223, VkglTestCase_000223_1, VkglTestCase_000223_2);

#define VkglTestCase_000224_1 "KHR-GLES3.shaders.indexing.matrix_subscr"
#define VkglTestCase_000224_2 "ipt.mat2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000224, VkglTestCase_000224_1, VkglTestCase_000224_2);

#define VkglTestCase_000225_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000225_2 "pt.mat2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000225, VkglTestCase_000225_1, VkglTestCase_000225_2);

#define VkglTestCase_000226_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000226_2 "t.mat2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000226, VkglTestCase_000226_1, VkglTestCase_000226_2);

#define VkglTestCase_000227_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000227_2 ".mat2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000227, VkglTestCase_000227_1, VkglTestCase_000227_2);

#define VkglTestCase_000228_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000228_2 ".mat2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000228, VkglTestCase_000228_1, VkglTestCase_000228_2);

#define VkglTestCase_000229_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000229_2 "mat2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000229, VkglTestCase_000229_1, VkglTestCase_000229_2);

#define VkglTestCase_000230_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000230_2 "pt.mat2x3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000230, VkglTestCase_000230_1, VkglTestCase_000230_2);

#define VkglTestCase_000231_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000231_2 "t.mat2x3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000231, VkglTestCase_000231_1, VkglTestCase_000231_2);

#define VkglTestCase_000232_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000232_2 ".mat2x3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000232, VkglTestCase_000232_1, VkglTestCase_000232_2);

#define VkglTestCase_000233_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000233_2 "mat2x3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000233, VkglTestCase_000233_1, VkglTestCase_000233_2);

#define VkglTestCase_000234_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000234_2 "mat2x3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000234, VkglTestCase_000234_1, VkglTestCase_000234_2);

#define VkglTestCase_000235_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000235_2 "at2x3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000235, VkglTestCase_000235_1, VkglTestCase_000235_2);

#define VkglTestCase_000236_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000236_2 "pt.mat2x3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000236, VkglTestCase_000236_1, VkglTestCase_000236_2);

#define VkglTestCase_000237_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000237_2 "t.mat2x3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000237, VkglTestCase_000237_1, VkglTestCase_000237_2);

#define VkglTestCase_000238_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000238_2 ".mat2x3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000238, VkglTestCase_000238_1, VkglTestCase_000238_2);

#define VkglTestCase_000239_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000239_2 "mat2x3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000239, VkglTestCase_000239_1, VkglTestCase_000239_2);

#define VkglTestCase_000240_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000240_2 "mat2x3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000240, VkglTestCase_000240_1, VkglTestCase_000240_2);

#define VkglTestCase_000241_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000241_2 "at2x3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000241, VkglTestCase_000241_1, VkglTestCase_000241_2);

#define VkglTestCase_000242_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000242_2 "pt.mat2x4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000242, VkglTestCase_000242_1, VkglTestCase_000242_2);

#define VkglTestCase_000243_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000243_2 "t.mat2x4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000243, VkglTestCase_000243_1, VkglTestCase_000243_2);

#define VkglTestCase_000244_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000244_2 ".mat2x4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000244, VkglTestCase_000244_1, VkglTestCase_000244_2);

#define VkglTestCase_000245_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000245_2 "mat2x4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000245, VkglTestCase_000245_1, VkglTestCase_000245_2);

#define VkglTestCase_000246_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000246_2 "mat2x4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000246, VkglTestCase_000246_1, VkglTestCase_000246_2);

#define VkglTestCase_000247_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000247_2 "at2x4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000247, VkglTestCase_000247_1, VkglTestCase_000247_2);

#define VkglTestCase_000248_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000248_2 "pt.mat2x4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000248, VkglTestCase_000248_1, VkglTestCase_000248_2);

#define VkglTestCase_000249_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000249_2 "t.mat2x4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000249, VkglTestCase_000249_1, VkglTestCase_000249_2);

#define VkglTestCase_000250_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000250_2 ".mat2x4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000250, VkglTestCase_000250_1, VkglTestCase_000250_2);

#define VkglTestCase_000251_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000251_2 "mat2x4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000251, VkglTestCase_000251_1, VkglTestCase_000251_2);

#define VkglTestCase_000252_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000252_2 "mat2x4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000252, VkglTestCase_000252_1, VkglTestCase_000252_2);

#define VkglTestCase_000253_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000253_2 "at2x4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000253, VkglTestCase_000253_1, VkglTestCase_000253_2);

#define VkglTestCase_000254_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000254_2 "pt.mat3x2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000254, VkglTestCase_000254_1, VkglTestCase_000254_2);

#define VkglTestCase_000255_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000255_2 "t.mat3x2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000255, VkglTestCase_000255_1, VkglTestCase_000255_2);

#define VkglTestCase_000256_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000256_2 ".mat3x2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000256, VkglTestCase_000256_1, VkglTestCase_000256_2);

#define VkglTestCase_000257_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000257_2 "mat3x2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000257, VkglTestCase_000257_1, VkglTestCase_000257_2);

#define VkglTestCase_000258_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000258_2 "mat3x2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000258, VkglTestCase_000258_1, VkglTestCase_000258_2);

#define VkglTestCase_000259_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000259_2 "at3x2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000259, VkglTestCase_000259_1, VkglTestCase_000259_2);

#define VkglTestCase_000260_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000260_2 "pt.mat3x2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000260, VkglTestCase_000260_1, VkglTestCase_000260_2);

#define VkglTestCase_000261_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000261_2 "t.mat3x2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000261, VkglTestCase_000261_1, VkglTestCase_000261_2);

#define VkglTestCase_000262_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000262_2 ".mat3x2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000262, VkglTestCase_000262_1, VkglTestCase_000262_2);

#define VkglTestCase_000263_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000263_2 "mat3x2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000263, VkglTestCase_000263_1, VkglTestCase_000263_2);

#define VkglTestCase_000264_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000264_2 "mat3x2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000264, VkglTestCase_000264_1, VkglTestCase_000264_2);

#define VkglTestCase_000265_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000265_2 "at3x2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000265, VkglTestCase_000265_1, VkglTestCase_000265_2);

#define VkglTestCase_000266_1 "KHR-GLES3.shaders.indexing.matrix_subscr"
#define VkglTestCase_000266_2 "ipt.mat3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000266, VkglTestCase_000266_1, VkglTestCase_000266_2);

#define VkglTestCase_000267_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000267_2 "pt.mat3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000267, VkglTestCase_000267_1, VkglTestCase_000267_2);

#define VkglTestCase_000268_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000268_2 "t.mat3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000268, VkglTestCase_000268_1, VkglTestCase_000268_2);

#define VkglTestCase_000269_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000269_2 ".mat3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000269, VkglTestCase_000269_1, VkglTestCase_000269_2);

#define VkglTestCase_000270_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000270_2 ".mat3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000270, VkglTestCase_000270_1, VkglTestCase_000270_2);

#define VkglTestCase_000271_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000271_2 "mat3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000271, VkglTestCase_000271_1, VkglTestCase_000271_2);

#define VkglTestCase_000272_1 "KHR-GLES3.shaders.indexing.matrix_subscr"
#define VkglTestCase_000272_2 "ipt.mat3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000272, VkglTestCase_000272_1, VkglTestCase_000272_2);

#define VkglTestCase_000273_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000273_2 "pt.mat3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000273, VkglTestCase_000273_1, VkglTestCase_000273_2);

#define VkglTestCase_000274_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000274_2 "t.mat3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000274, VkglTestCase_000274_1, VkglTestCase_000274_2);

#define VkglTestCase_000275_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000275_2 ".mat3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000275, VkglTestCase_000275_1, VkglTestCase_000275_2);

#define VkglTestCase_000276_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000276_2 ".mat3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000276, VkglTestCase_000276_1, VkglTestCase_000276_2);

#define VkglTestCase_000277_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000277_2 "mat3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000277, VkglTestCase_000277_1, VkglTestCase_000277_2);

#define VkglTestCase_000278_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000278_2 "pt.mat3x4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000278, VkglTestCase_000278_1, VkglTestCase_000278_2);

#define VkglTestCase_000279_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000279_2 "t.mat3x4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000279, VkglTestCase_000279_1, VkglTestCase_000279_2);

#define VkglTestCase_000280_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000280_2 ".mat3x4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000280, VkglTestCase_000280_1, VkglTestCase_000280_2);

#define VkglTestCase_000281_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000281_2 "mat3x4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000281, VkglTestCase_000281_1, VkglTestCase_000281_2);

#define VkglTestCase_000282_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000282_2 "mat3x4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000282, VkglTestCase_000282_1, VkglTestCase_000282_2);

#define VkglTestCase_000283_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000283_2 "at3x4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000283, VkglTestCase_000283_1, VkglTestCase_000283_2);

#define VkglTestCase_000284_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000284_2 "pt.mat3x4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000284, VkglTestCase_000284_1, VkglTestCase_000284_2);

#define VkglTestCase_000285_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000285_2 "t.mat3x4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000285, VkglTestCase_000285_1, VkglTestCase_000285_2);

#define VkglTestCase_000286_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000286_2 ".mat3x4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000286, VkglTestCase_000286_1, VkglTestCase_000286_2);

#define VkglTestCase_000287_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000287_2 "mat3x4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000287, VkglTestCase_000287_1, VkglTestCase_000287_2);

#define VkglTestCase_000288_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000288_2 "mat3x4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000288, VkglTestCase_000288_1, VkglTestCase_000288_2);

#define VkglTestCase_000289_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000289_2 "at3x4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000289, VkglTestCase_000289_1, VkglTestCase_000289_2);

#define VkglTestCase_000290_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000290_2 "pt.mat4x2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000290, VkglTestCase_000290_1, VkglTestCase_000290_2);

#define VkglTestCase_000291_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000291_2 "t.mat4x2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000291, VkglTestCase_000291_1, VkglTestCase_000291_2);

#define VkglTestCase_000292_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000292_2 ".mat4x2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000292, VkglTestCase_000292_1, VkglTestCase_000292_2);

#define VkglTestCase_000293_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000293_2 "mat4x2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000293, VkglTestCase_000293_1, VkglTestCase_000293_2);

#define VkglTestCase_000294_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000294_2 "mat4x2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000294, VkglTestCase_000294_1, VkglTestCase_000294_2);

#define VkglTestCase_000295_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000295_2 "at4x2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000295, VkglTestCase_000295_1, VkglTestCase_000295_2);

#define VkglTestCase_000296_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000296_2 "pt.mat4x2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000296, VkglTestCase_000296_1, VkglTestCase_000296_2);

#define VkglTestCase_000297_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000297_2 "t.mat4x2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000297, VkglTestCase_000297_1, VkglTestCase_000297_2);

#define VkglTestCase_000298_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000298_2 ".mat4x2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000298, VkglTestCase_000298_1, VkglTestCase_000298_2);

#define VkglTestCase_000299_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000299_2 "mat4x2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000299, VkglTestCase_000299_1, VkglTestCase_000299_2);

#define VkglTestCase_000300_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000300_2 "mat4x2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000300, VkglTestCase_000300_1, VkglTestCase_000300_2);

#define VkglTestCase_000301_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000301_2 "at4x2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000301, VkglTestCase_000301_1, VkglTestCase_000301_2);

#define VkglTestCase_000302_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000302_2 "pt.mat4x3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000302, VkglTestCase_000302_1, VkglTestCase_000302_2);

#define VkglTestCase_000303_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000303_2 "t.mat4x3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000303, VkglTestCase_000303_1, VkglTestCase_000303_2);

#define VkglTestCase_000304_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000304_2 ".mat4x3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000304, VkglTestCase_000304_1, VkglTestCase_000304_2);

#define VkglTestCase_000305_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000305_2 "mat4x3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000305, VkglTestCase_000305_1, VkglTestCase_000305_2);

#define VkglTestCase_000306_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000306_2 "mat4x3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000306, VkglTestCase_000306_1, VkglTestCase_000306_2);

#define VkglTestCase_000307_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000307_2 "at4x3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000307, VkglTestCase_000307_1, VkglTestCase_000307_2);

#define VkglTestCase_000308_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000308_2 "pt.mat4x3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000308, VkglTestCase_000308_1, VkglTestCase_000308_2);

#define VkglTestCase_000309_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000309_2 "t.mat4x3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000309, VkglTestCase_000309_1, VkglTestCase_000309_2);

#define VkglTestCase_000310_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000310_2 ".mat4x3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000310, VkglTestCase_000310_1, VkglTestCase_000310_2);

#define VkglTestCase_000311_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000311_2 "mat4x3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000311, VkglTestCase_000311_1, VkglTestCase_000311_2);

#define VkglTestCase_000312_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000312_2 "mat4x3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000312, VkglTestCase_000312_1, VkglTestCase_000312_2);

#define VkglTestCase_000313_1 "KHR-GLES3.shaders.indexing.matrix_subscript.m"
#define VkglTestCase_000313_2 "at4x3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000313, VkglTestCase_000313_1, VkglTestCase_000313_2);

#define VkglTestCase_000314_1 "KHR-GLES3.shaders.indexing.matrix_subscr"
#define VkglTestCase_000314_2 "ipt.mat4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000314, VkglTestCase_000314_1, VkglTestCase_000314_2);

#define VkglTestCase_000315_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000315_2 "pt.mat4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000315, VkglTestCase_000315_1, VkglTestCase_000315_2);

#define VkglTestCase_000316_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000316_2 "t.mat4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000316, VkglTestCase_000316_1, VkglTestCase_000316_2);

#define VkglTestCase_000317_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000317_2 ".mat4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000317, VkglTestCase_000317_1, VkglTestCase_000317_2);

#define VkglTestCase_000318_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000318_2 ".mat4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000318, VkglTestCase_000318_1, VkglTestCase_000318_2);

#define VkglTestCase_000319_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000319_2 "mat4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000319, VkglTestCase_000319_1, VkglTestCase_000319_2);

#define VkglTestCase_000320_1 "KHR-GLES3.shaders.indexing.matrix_subscr"
#define VkglTestCase_000320_2 "ipt.mat4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000320, VkglTestCase_000320_1, VkglTestCase_000320_2);

#define VkglTestCase_000321_1 "KHR-GLES3.shaders.indexing.matrix_subscri"
#define VkglTestCase_000321_2 "pt.mat4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000321, VkglTestCase_000321_1, VkglTestCase_000321_2);

#define VkglTestCase_000322_1 "KHR-GLES3.shaders.indexing.matrix_subscrip"
#define VkglTestCase_000322_2 "t.mat4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000322, VkglTestCase_000322_1, VkglTestCase_000322_2);

#define VkglTestCase_000323_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000323_2 ".mat4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000323, VkglTestCase_000323_1, VkglTestCase_000323_2);

#define VkglTestCase_000324_1 "KHR-GLES3.shaders.indexing.matrix_subscript"
#define VkglTestCase_000324_2 ".mat4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000324, VkglTestCase_000324_1, VkglTestCase_000324_2);

#define VkglTestCase_000325_1 "KHR-GLES3.shaders.indexing.matrix_subscript."
#define VkglTestCase_000325_2 "mat4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000325, VkglTestCase_000325_1, VkglTestCase_000325_2);
