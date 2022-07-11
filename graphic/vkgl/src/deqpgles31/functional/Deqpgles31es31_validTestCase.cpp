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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007183_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007183_2 ".es31.valid.repeat_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007183, VkglTestCase_007183_1, VkglTestCase_007183_2);

#define VkglTestCase_007184_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007184_2 "es31.valid.repeat_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007184, VkglTestCase_007184_1, VkglTestCase_007184_2);

#define VkglTestCase_007185_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007185_2 "_block.es31.valid.layout_shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007185, VkglTestCase_007185_1, VkglTestCase_007185_2);

#define VkglTestCase_007186_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007186_2 "block.es31.valid.layout_shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007186, VkglTestCase_007186_1, VkglTestCase_007186_2);

#define VkglTestCase_007187_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007187_2 "_block.es31.valid.layout_packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007187, VkglTestCase_007187_1, VkglTestCase_007187_2);

#define VkglTestCase_007188_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007188_2 "block.es31.valid.layout_packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007188, VkglTestCase_007188_1, VkglTestCase_007188_2);

#define VkglTestCase_007189_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007189_2 "_block.es31.valid.layout_std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007189, VkglTestCase_007189_1, VkglTestCase_007189_2);

#define VkglTestCase_007190_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007190_2 "block.es31.valid.layout_std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007190, VkglTestCase_007190_1, VkglTestCase_007190_2);

#define VkglTestCase_007191_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007191_2 "block.es31.valid.layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007191, VkglTestCase_007191_1, VkglTestCase_007191_2);

#define VkglTestCase_007192_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007192_2 "lock.es31.valid.layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007192, VkglTestCase_007192_1, VkglTestCase_007192_2);

#define VkglTestCase_007193_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007193_2 "ock.es31.valid.layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007193, VkglTestCase_007193_1, VkglTestCase_007193_2);

#define VkglTestCase_007194_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007194_2 "ck.es31.valid.layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007194, VkglTestCase_007194_1, VkglTestCase_007194_2);

#define VkglTestCase_007195_1 "dEQP-GLES31.functional.shaders.unifo"
#define VkglTestCase_007195_2 "rm_block.es31.valid.layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007195, VkglTestCase_007195_1, VkglTestCase_007195_2);

#define VkglTestCase_007196_1 "dEQP-GLES31.functional.shaders.unifor"
#define VkglTestCase_007196_2 "m_block.es31.valid.layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007196, VkglTestCase_007196_1, VkglTestCase_007196_2);

#define VkglTestCase_007197_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007197_2 "lock.es31.valid.layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007197, VkglTestCase_007197_1, VkglTestCase_007197_2);

#define VkglTestCase_007198_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007198_2 "ock.es31.valid.layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007198, VkglTestCase_007198_1, VkglTestCase_007198_2);

#define VkglTestCase_007199_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007199_2 "ock.es31.valid.global_layout_shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007199, VkglTestCase_007199_1, VkglTestCase_007199_2);

#define VkglTestCase_007200_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007200_2 "ck.es31.valid.global_layout_shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007200, VkglTestCase_007200_1, VkglTestCase_007200_2);

#define VkglTestCase_007201_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007201_2 "ock.es31.valid.global_layout_packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007201, VkglTestCase_007201_1, VkglTestCase_007201_2);

#define VkglTestCase_007202_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007202_2 "ck.es31.valid.global_layout_packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007202, VkglTestCase_007202_1, VkglTestCase_007202_2);

#define VkglTestCase_007203_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007203_2 "ock.es31.valid.global_layout_std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007203, VkglTestCase_007203_1, VkglTestCase_007203_2);

#define VkglTestCase_007204_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007204_2 "ck.es31.valid.global_layout_std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007204, VkglTestCase_007204_1, VkglTestCase_007204_2);

#define VkglTestCase_007205_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007205_2 "k.es31.valid.global_layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007205, VkglTestCase_007205_1, VkglTestCase_007205_2);

#define VkglTestCase_007206_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007206_2 ".es31.valid.global_layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007206, VkglTestCase_007206_1, VkglTestCase_007206_2);

#define VkglTestCase_007207_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007207_2 ".es31.valid.global_layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007207, VkglTestCase_007207_1, VkglTestCase_007207_2);

#define VkglTestCase_007208_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007208_2 "es31.valid.global_layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007208, VkglTestCase_007208_1, VkglTestCase_007208_2);

#define VkglTestCase_007209_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007209_2 "lock.es31.valid.global_layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007209, VkglTestCase_007209_1, VkglTestCase_007209_2);

#define VkglTestCase_007210_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007210_2 "ock.es31.valid.global_layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007210, VkglTestCase_007210_1, VkglTestCase_007210_2);

#define VkglTestCase_007211_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007211_2 ".es31.valid.global_layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007211, VkglTestCase_007211_1, VkglTestCase_007211_2);

#define VkglTestCase_007212_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007212_2 "es31.valid.global_layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007212, VkglTestCase_007212_1, VkglTestCase_007212_2);

#define VkglTestCase_007213_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007213_2 "k.es31.valid.member_layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007213, VkglTestCase_007213_1, VkglTestCase_007213_2);

#define VkglTestCase_007214_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007214_2 ".es31.valid.member_layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007214, VkglTestCase_007214_1, VkglTestCase_007214_2);

#define VkglTestCase_007215_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007215_2 ".es31.valid.member_layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007215, VkglTestCase_007215_1, VkglTestCase_007215_2);

#define VkglTestCase_007216_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007216_2 "es31.valid.member_layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007216, VkglTestCase_007216_1, VkglTestCase_007216_2);

#define VkglTestCase_007217_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007217_2 "es31.valid.member_layout_row_major_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007217, VkglTestCase_007217_1, VkglTestCase_007217_2);

#define VkglTestCase_007218_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007218_2 "s31.valid.member_layout_row_major_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007218, VkglTestCase_007218_1, VkglTestCase_007218_2);

#define VkglTestCase_007219_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007219_2 "31.valid.member_layout_column_major_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007219, VkglTestCase_007219_1, VkglTestCase_007219_2);

#define VkglTestCase_007220_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007220_2 "1.valid.member_layout_column_major_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007220, VkglTestCase_007220_1, VkglTestCase_007220_2);

#define VkglTestCase_007221_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007221_2 "lock.es31.valid.member_layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007221, VkglTestCase_007221_1, VkglTestCase_007221_2);

#define VkglTestCase_007222_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007222_2 "ock.es31.valid.member_layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007222, VkglTestCase_007222_1, VkglTestCase_007222_2);

#define VkglTestCase_007223_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007223_2 ".es31.valid.member_layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007223, VkglTestCase_007223_1, VkglTestCase_007223_2);

#define VkglTestCase_007224_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007224_2 "es31.valid.member_layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007224, VkglTestCase_007224_1, VkglTestCase_007224_2);

#define VkglTestCase_007225_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007225_2 "block.es31.valid.no_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007225, VkglTestCase_007225_1, VkglTestCase_007225_2);

#define VkglTestCase_007226_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007226_2 "lock.es31.valid.no_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007226, VkglTestCase_007226_1, VkglTestCase_007226_2);

#define VkglTestCase_007227_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007227_2 "es31.valid.same_variable_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007227, VkglTestCase_007227_1, VkglTestCase_007227_2);

#define VkglTestCase_007228_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007228_2 "s31.valid.same_variable_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007228, VkglTestCase_007228_1, VkglTestCase_007228_2);

#define VkglTestCase_007229_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007229_2 "31.valid.same_variable_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007229, VkglTestCase_007229_1, VkglTestCase_007229_2);

#define VkglTestCase_007230_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007230_2 "1.valid.same_variable_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007230, VkglTestCase_007230_1, VkglTestCase_007230_2);

#define VkglTestCase_007231_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007231_2 "_block.es31.valid.struct_member_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007231, VkglTestCase_007231_1, VkglTestCase_007231_2);

#define VkglTestCase_007232_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007232_2 "block.es31.valid.struct_member_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007232, VkglTestCase_007232_1, VkglTestCase_007232_2);

#define VkglTestCase_007233_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007233_2 "s31.valid.struct_member_layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007233, VkglTestCase_007233_1, VkglTestCase_007233_2);

#define VkglTestCase_007234_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007234_2 "31.valid.struct_member_layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007234, VkglTestCase_007234_1, VkglTestCase_007234_2);

#define VkglTestCase_007235_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007235_2 "1.valid.struct_member_layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007235, VkglTestCase_007235_1, VkglTestCase_007235_2);

#define VkglTestCase_007236_1 "dEQP-GLES31.functional.shaders.uniform_block.es31"
#define VkglTestCase_007236_2 ".valid.struct_member_layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007236, VkglTestCase_007236_1, VkglTestCase_007236_2);

#define VkglTestCase_007237_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007237_2 "k.es31.valid.struct_member_layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007237, VkglTestCase_007237_1, VkglTestCase_007237_2);

#define VkglTestCase_007238_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007238_2 ".es31.valid.struct_member_layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007238, VkglTestCase_007238_1, VkglTestCase_007238_2);

#define VkglTestCase_007239_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007239_2 "31.valid.struct_member_layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007239, VkglTestCase_007239_1, VkglTestCase_007239_2);

#define VkglTestCase_007240_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007240_2 "1.valid.struct_member_layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007240, VkglTestCase_007240_1, VkglTestCase_007240_2);

#define VkglTestCase_007241_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007241_2 "block.es31.valid.long_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007241, VkglTestCase_007241_1, VkglTestCase_007241_2);

#define VkglTestCase_007242_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007242_2 "lock.es31.valid.long_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007242, VkglTestCase_007242_1, VkglTestCase_007242_2);

#define VkglTestCase_007243_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007243_2 "lock.es31.valid.long_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007243, VkglTestCase_007243_1, VkglTestCase_007243_2);

#define VkglTestCase_007244_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007244_2 "ock.es31.valid.long_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007244, VkglTestCase_007244_1, VkglTestCase_007244_2);

#define VkglTestCase_007245_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007245_2 "ck.es31.valid.underscore_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007245, VkglTestCase_007245_1, VkglTestCase_007245_2);

#define VkglTestCase_007246_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007246_2 "k.es31.valid.underscore_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007246, VkglTestCase_007246_1, VkglTestCase_007246_2);

#define VkglTestCase_007247_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007247_2 "k.es31.valid.underscore_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007247, VkglTestCase_007247_1, VkglTestCase_007247_2);

#define VkglTestCase_007248_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007248_2 ".es31.valid.underscore_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007248, VkglTestCase_007248_1, VkglTestCase_007248_2);
