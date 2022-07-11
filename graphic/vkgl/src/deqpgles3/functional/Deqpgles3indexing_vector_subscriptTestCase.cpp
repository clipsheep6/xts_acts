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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006175_1 "dEQP-GLES3.functional.shaders.indexing.vector_"
#define VkglTestCase_006175_2 "subscript.vec2_direct_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006175, VkglTestCase_006175_1, VkglTestCase_006175_2);

#define VkglTestCase_006176_1 "dEQP-GLES3.functional.shaders.indexing.vector_s"
#define VkglTestCase_006176_2 "ubscript.vec2_direct_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006176, VkglTestCase_006176_1, VkglTestCase_006176_2);

#define VkglTestCase_006177_1 "dEQP-GLES3.functional.shaders.indexing.vector_s"
#define VkglTestCase_006177_2 "ubscript.vec2_direct_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006177, VkglTestCase_006177_1, VkglTestCase_006177_2);

#define VkglTestCase_006178_1 "dEQP-GLES3.functional.shaders.indexing.vector_su"
#define VkglTestCase_006178_2 "bscript.vec2_direct_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006178, VkglTestCase_006178_1, VkglTestCase_006178_2);

#define VkglTestCase_006179_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006179_2 "ript.vec2_direct_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006179, VkglTestCase_006179_1, VkglTestCase_006179_2);

#define VkglTestCase_006180_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006180_2 "ipt.vec2_direct_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006180, VkglTestCase_006180_1, VkglTestCase_006180_2);

#define VkglTestCase_006181_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006181_2 "ript.vec2_direct_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006181, VkglTestCase_006181_1, VkglTestCase_006181_2);

#define VkglTestCase_006182_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006182_2 "ipt.vec2_direct_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006182, VkglTestCase_006182_1, VkglTestCase_006182_2);

#define VkglTestCase_006183_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006183_2 "pt.vec2_direct_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006183, VkglTestCase_006183_1, VkglTestCase_006183_2);

#define VkglTestCase_006184_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006184_2 "t.vec2_direct_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006184, VkglTestCase_006184_1, VkglTestCase_006184_2);

#define VkglTestCase_006185_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006185_2 "t.vec2_direct_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006185, VkglTestCase_006185_1, VkglTestCase_006185_2);

#define VkglTestCase_006186_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006186_2 ".vec2_direct_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006186, VkglTestCase_006186_1, VkglTestCase_006186_2);

#define VkglTestCase_006187_1 "dEQP-GLES3.functional.shaders.indexing.vector_s"
#define VkglTestCase_006187_2 "ubscript.vec2_component_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006187, VkglTestCase_006187_1, VkglTestCase_006187_2);

#define VkglTestCase_006188_1 "dEQP-GLES3.functional.shaders.indexing.vector_su"
#define VkglTestCase_006188_2 "bscript.vec2_component_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006188, VkglTestCase_006188_1, VkglTestCase_006188_2);

#define VkglTestCase_006189_1 "dEQP-GLES3.functional.shaders.indexing.vector_sub"
#define VkglTestCase_006189_2 "script.vec2_component_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006189, VkglTestCase_006189_1, VkglTestCase_006189_2);

#define VkglTestCase_006190_1 "dEQP-GLES3.functional.shaders.indexing.vector_subs"
#define VkglTestCase_006190_2 "cript.vec2_component_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006190, VkglTestCase_006190_1, VkglTestCase_006190_2);

#define VkglTestCase_006191_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006191_2 "ipt.vec2_component_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006191, VkglTestCase_006191_1, VkglTestCase_006191_2);

#define VkglTestCase_006192_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006192_2 "pt.vec2_component_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006192, VkglTestCase_006192_1, VkglTestCase_006192_2);

#define VkglTestCase_006193_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006193_2 "pt.vec2_component_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006193, VkglTestCase_006193_1, VkglTestCase_006193_2);

#define VkglTestCase_006194_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006194_2 "t.vec2_component_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006194, VkglTestCase_006194_1, VkglTestCase_006194_2);

#define VkglTestCase_006195_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006195_2 ".vec2_component_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006195, VkglTestCase_006195_1, VkglTestCase_006195_2);

#define VkglTestCase_006196_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006196_2 "vec2_component_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006196, VkglTestCase_006196_1, VkglTestCase_006196_2);

#define VkglTestCase_006197_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006197_2 ".vec2_component_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006197, VkglTestCase_006197_1, VkglTestCase_006197_2);

#define VkglTestCase_006198_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006198_2 "vec2_component_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006198, VkglTestCase_006198_1, VkglTestCase_006198_2);

#define VkglTestCase_006199_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006199_2 "ript.vec2_static_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006199, VkglTestCase_006199_1, VkglTestCase_006199_2);

#define VkglTestCase_006200_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006200_2 "ipt.vec2_static_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006200, VkglTestCase_006200_1, VkglTestCase_006200_2);

#define VkglTestCase_006201_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006201_2 "ipt.vec2_static_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006201, VkglTestCase_006201_1, VkglTestCase_006201_2);

#define VkglTestCase_006202_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006202_2 "pt.vec2_static_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006202, VkglTestCase_006202_1, VkglTestCase_006202_2);

#define VkglTestCase_006203_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006203_2 "vec2_static_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006203, VkglTestCase_006203_1, VkglTestCase_006203_2);

#define VkglTestCase_006204_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006204_2 "ec2_static_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006204, VkglTestCase_006204_1, VkglTestCase_006204_2);

#define VkglTestCase_006205_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006205_2 "vec2_static_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006205, VkglTestCase_006205_1, VkglTestCase_006205_2);

#define VkglTestCase_006206_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006206_2 "ec2_static_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006206, VkglTestCase_006206_1, VkglTestCase_006206_2);

#define VkglTestCase_006207_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_006207_2 "c2_static_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006207, VkglTestCase_006207_1, VkglTestCase_006207_2);

#define VkglTestCase_006208_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006208_2 "2_static_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006208, VkglTestCase_006208_1, VkglTestCase_006208_2);

#define VkglTestCase_006209_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006209_2 "2_static_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006209, VkglTestCase_006209_1, VkglTestCase_006209_2);

#define VkglTestCase_006210_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_006210_2 "_static_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006210, VkglTestCase_006210_1, VkglTestCase_006210_2);

#define VkglTestCase_006211_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006211_2 "ript.vec2_dynamic_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006211, VkglTestCase_006211_1, VkglTestCase_006211_2);

#define VkglTestCase_006212_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006212_2 "ipt.vec2_dynamic_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006212, VkglTestCase_006212_1, VkglTestCase_006212_2);

#define VkglTestCase_006213_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006213_2 "pt.vec2_dynamic_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006213, VkglTestCase_006213_1, VkglTestCase_006213_2);

#define VkglTestCase_006214_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006214_2 "t.vec2_dynamic_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006214, VkglTestCase_006214_1, VkglTestCase_006214_2);

#define VkglTestCase_006215_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006215_2 "vec2_dynamic_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006215, VkglTestCase_006215_1, VkglTestCase_006215_2);

#define VkglTestCase_006216_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006216_2 "ec2_dynamic_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006216, VkglTestCase_006216_1, VkglTestCase_006216_2);

#define VkglTestCase_006217_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006217_2 "ec2_dynamic_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006217, VkglTestCase_006217_1, VkglTestCase_006217_2);

#define VkglTestCase_006218_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_006218_2 "c2_dynamic_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006218, VkglTestCase_006218_1, VkglTestCase_006218_2);

#define VkglTestCase_006219_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006219_2 "2_dynamic_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006219, VkglTestCase_006219_1, VkglTestCase_006219_2);

#define VkglTestCase_006220_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_006220_2 "_dynamic_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006220, VkglTestCase_006220_1, VkglTestCase_006220_2);

#define VkglTestCase_006221_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006221_2 "2_dynamic_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006221, VkglTestCase_006221_1, VkglTestCase_006221_2);

#define VkglTestCase_006222_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_006222_2 "_dynamic_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006222, VkglTestCase_006222_1, VkglTestCase_006222_2);

#define VkglTestCase_006223_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006223_2 "pt.vec2_static_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006223, VkglTestCase_006223_1, VkglTestCase_006223_2);

#define VkglTestCase_006224_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006224_2 "t.vec2_static_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006224, VkglTestCase_006224_1, VkglTestCase_006224_2);

#define VkglTestCase_006225_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006225_2 ".vec2_static_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006225, VkglTestCase_006225_1, VkglTestCase_006225_2);

#define VkglTestCase_006226_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006226_2 "vec2_static_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006226, VkglTestCase_006226_1, VkglTestCase_006226_2);

#define VkglTestCase_006227_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_006227_2 "c2_static_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006227, VkglTestCase_006227_1, VkglTestCase_006227_2);

#define VkglTestCase_006228_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006228_2 "2_static_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006228, VkglTestCase_006228_1, VkglTestCase_006228_2);

#define VkglTestCase_006229_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006229_2 "2_static_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006229, VkglTestCase_006229_1, VkglTestCase_006229_2);

#define VkglTestCase_006230_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_006230_2 "_static_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006230, VkglTestCase_006230_1, VkglTestCase_006230_2);

#define VkglTestCase_006231_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_"
#define VkglTestCase_006231_2 "static_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006231, VkglTestCase_006231_1, VkglTestCase_006231_2);

#define VkglTestCase_006232_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_s"
#define VkglTestCase_006232_2 "tatic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006232, VkglTestCase_006232_1, VkglTestCase_006232_2);

#define VkglTestCase_006233_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_"
#define VkglTestCase_006233_2 "static_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006233, VkglTestCase_006233_1, VkglTestCase_006233_2);

#define VkglTestCase_006234_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_s"
#define VkglTestCase_006234_2 "tatic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006234, VkglTestCase_006234_1, VkglTestCase_006234_2);

#define VkglTestCase_006235_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006235_2 "t.vec2_dynamic_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006235, VkglTestCase_006235_1, VkglTestCase_006235_2);

#define VkglTestCase_006236_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006236_2 ".vec2_dynamic_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006236, VkglTestCase_006236_1, VkglTestCase_006236_2);

#define VkglTestCase_006237_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006237_2 ".vec2_dynamic_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006237, VkglTestCase_006237_1, VkglTestCase_006237_2);

#define VkglTestCase_006238_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006238_2 "vec2_dynamic_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006238, VkglTestCase_006238_1, VkglTestCase_006238_2);

#define VkglTestCase_006239_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006239_2 "2_dynamic_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006239, VkglTestCase_006239_1, VkglTestCase_006239_2);

#define VkglTestCase_006240_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_006240_2 "_dynamic_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006240, VkglTestCase_006240_1, VkglTestCase_006240_2);

#define VkglTestCase_006241_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006241_2 "2_dynamic_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006241, VkglTestCase_006241_1, VkglTestCase_006241_2);

#define VkglTestCase_006242_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_006242_2 "_dynamic_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006242, VkglTestCase_006242_1, VkglTestCase_006242_2);

#define VkglTestCase_006243_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_"
#define VkglTestCase_006243_2 "dynamic_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006243, VkglTestCase_006243_1, VkglTestCase_006243_2);

#define VkglTestCase_006244_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_d"
#define VkglTestCase_006244_2 "ynamic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006244, VkglTestCase_006244_1, VkglTestCase_006244_2);

#define VkglTestCase_006245_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_d"
#define VkglTestCase_006245_2 "ynamic_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006245, VkglTestCase_006245_1, VkglTestCase_006245_2);

#define VkglTestCase_006246_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_dy"
#define VkglTestCase_006246_2 "namic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006246, VkglTestCase_006246_1, VkglTestCase_006246_2);

#define VkglTestCase_006247_1 "dEQP-GLES3.functional.shaders.indexing.vector_"
#define VkglTestCase_006247_2 "subscript.vec3_direct_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006247, VkglTestCase_006247_1, VkglTestCase_006247_2);

#define VkglTestCase_006248_1 "dEQP-GLES3.functional.shaders.indexing.vector_s"
#define VkglTestCase_006248_2 "ubscript.vec3_direct_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006248, VkglTestCase_006248_1, VkglTestCase_006248_2);

#define VkglTestCase_006249_1 "dEQP-GLES3.functional.shaders.indexing.vector_s"
#define VkglTestCase_006249_2 "ubscript.vec3_direct_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006249, VkglTestCase_006249_1, VkglTestCase_006249_2);

#define VkglTestCase_006250_1 "dEQP-GLES3.functional.shaders.indexing.vector_su"
#define VkglTestCase_006250_2 "bscript.vec3_direct_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006250, VkglTestCase_006250_1, VkglTestCase_006250_2);

#define VkglTestCase_006251_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006251_2 "ript.vec3_direct_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006251, VkglTestCase_006251_1, VkglTestCase_006251_2);

#define VkglTestCase_006252_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006252_2 "ipt.vec3_direct_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006252, VkglTestCase_006252_1, VkglTestCase_006252_2);

#define VkglTestCase_006253_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006253_2 "ript.vec3_direct_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006253, VkglTestCase_006253_1, VkglTestCase_006253_2);

#define VkglTestCase_006254_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006254_2 "ipt.vec3_direct_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006254, VkglTestCase_006254_1, VkglTestCase_006254_2);

#define VkglTestCase_006255_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006255_2 "pt.vec3_direct_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006255, VkglTestCase_006255_1, VkglTestCase_006255_2);

#define VkglTestCase_006256_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006256_2 "t.vec3_direct_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006256, VkglTestCase_006256_1, VkglTestCase_006256_2);

#define VkglTestCase_006257_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006257_2 "t.vec3_direct_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006257, VkglTestCase_006257_1, VkglTestCase_006257_2);

#define VkglTestCase_006258_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006258_2 ".vec3_direct_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006258, VkglTestCase_006258_1, VkglTestCase_006258_2);

#define VkglTestCase_006259_1 "dEQP-GLES3.functional.shaders.indexing.vector_s"
#define VkglTestCase_006259_2 "ubscript.vec3_component_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006259, VkglTestCase_006259_1, VkglTestCase_006259_2);

#define VkglTestCase_006260_1 "dEQP-GLES3.functional.shaders.indexing.vector_su"
#define VkglTestCase_006260_2 "bscript.vec3_component_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006260, VkglTestCase_006260_1, VkglTestCase_006260_2);

#define VkglTestCase_006261_1 "dEQP-GLES3.functional.shaders.indexing.vector_sub"
#define VkglTestCase_006261_2 "script.vec3_component_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006261, VkglTestCase_006261_1, VkglTestCase_006261_2);

#define VkglTestCase_006262_1 "dEQP-GLES3.functional.shaders.indexing.vector_subs"
#define VkglTestCase_006262_2 "cript.vec3_component_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006262, VkglTestCase_006262_1, VkglTestCase_006262_2);

#define VkglTestCase_006263_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006263_2 "ipt.vec3_component_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006263, VkglTestCase_006263_1, VkglTestCase_006263_2);

#define VkglTestCase_006264_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006264_2 "pt.vec3_component_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006264, VkglTestCase_006264_1, VkglTestCase_006264_2);

#define VkglTestCase_006265_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006265_2 "pt.vec3_component_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006265, VkglTestCase_006265_1, VkglTestCase_006265_2);

#define VkglTestCase_006266_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006266_2 "t.vec3_component_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006266, VkglTestCase_006266_1, VkglTestCase_006266_2);

#define VkglTestCase_006267_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006267_2 ".vec3_component_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006267, VkglTestCase_006267_1, VkglTestCase_006267_2);

#define VkglTestCase_006268_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006268_2 "vec3_component_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006268, VkglTestCase_006268_1, VkglTestCase_006268_2);

#define VkglTestCase_006269_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006269_2 ".vec3_component_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006269, VkglTestCase_006269_1, VkglTestCase_006269_2);

#define VkglTestCase_006270_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006270_2 "vec3_component_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006270, VkglTestCase_006270_1, VkglTestCase_006270_2);

#define VkglTestCase_006271_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006271_2 "ript.vec3_static_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006271, VkglTestCase_006271_1, VkglTestCase_006271_2);

#define VkglTestCase_006272_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006272_2 "ipt.vec3_static_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006272, VkglTestCase_006272_1, VkglTestCase_006272_2);

#define VkglTestCase_006273_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006273_2 "ipt.vec3_static_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006273, VkglTestCase_006273_1, VkglTestCase_006273_2);

#define VkglTestCase_006274_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006274_2 "pt.vec3_static_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006274, VkglTestCase_006274_1, VkglTestCase_006274_2);

#define VkglTestCase_006275_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006275_2 "vec3_static_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006275, VkglTestCase_006275_1, VkglTestCase_006275_2);

#define VkglTestCase_006276_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006276_2 "ec3_static_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006276, VkglTestCase_006276_1, VkglTestCase_006276_2);

#define VkglTestCase_006277_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006277_2 "vec3_static_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006277, VkglTestCase_006277_1, VkglTestCase_006277_2);

#define VkglTestCase_006278_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006278_2 "ec3_static_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006278, VkglTestCase_006278_1, VkglTestCase_006278_2);

#define VkglTestCase_006279_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_006279_2 "c3_static_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006279, VkglTestCase_006279_1, VkglTestCase_006279_2);

#define VkglTestCase_006280_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006280_2 "3_static_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006280, VkglTestCase_006280_1, VkglTestCase_006280_2);

#define VkglTestCase_006281_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006281_2 "3_static_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006281, VkglTestCase_006281_1, VkglTestCase_006281_2);

#define VkglTestCase_006282_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_006282_2 "_static_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006282, VkglTestCase_006282_1, VkglTestCase_006282_2);

#define VkglTestCase_006283_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006283_2 "ript.vec3_dynamic_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006283, VkglTestCase_006283_1, VkglTestCase_006283_2);

#define VkglTestCase_006284_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006284_2 "ipt.vec3_dynamic_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006284, VkglTestCase_006284_1, VkglTestCase_006284_2);

#define VkglTestCase_006285_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006285_2 "pt.vec3_dynamic_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006285, VkglTestCase_006285_1, VkglTestCase_006285_2);

#define VkglTestCase_006286_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006286_2 "t.vec3_dynamic_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006286, VkglTestCase_006286_1, VkglTestCase_006286_2);

#define VkglTestCase_006287_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006287_2 "vec3_dynamic_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006287, VkglTestCase_006287_1, VkglTestCase_006287_2);

#define VkglTestCase_006288_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006288_2 "ec3_dynamic_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006288, VkglTestCase_006288_1, VkglTestCase_006288_2);

#define VkglTestCase_006289_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006289_2 "ec3_dynamic_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006289, VkglTestCase_006289_1, VkglTestCase_006289_2);

#define VkglTestCase_006290_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_006290_2 "c3_dynamic_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006290, VkglTestCase_006290_1, VkglTestCase_006290_2);

#define VkglTestCase_006291_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006291_2 "3_dynamic_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006291, VkglTestCase_006291_1, VkglTestCase_006291_2);

#define VkglTestCase_006292_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_006292_2 "_dynamic_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006292, VkglTestCase_006292_1, VkglTestCase_006292_2);

#define VkglTestCase_006293_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006293_2 "3_dynamic_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006293, VkglTestCase_006293_1, VkglTestCase_006293_2);

#define VkglTestCase_006294_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_006294_2 "_dynamic_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006294, VkglTestCase_006294_1, VkglTestCase_006294_2);

#define VkglTestCase_006295_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006295_2 "pt.vec3_static_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006295, VkglTestCase_006295_1, VkglTestCase_006295_2);

#define VkglTestCase_006296_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006296_2 "t.vec3_static_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006296, VkglTestCase_006296_1, VkglTestCase_006296_2);

#define VkglTestCase_006297_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006297_2 ".vec3_static_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006297, VkglTestCase_006297_1, VkglTestCase_006297_2);

#define VkglTestCase_006298_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006298_2 "vec3_static_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006298, VkglTestCase_006298_1, VkglTestCase_006298_2);

#define VkglTestCase_006299_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_006299_2 "c3_static_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006299, VkglTestCase_006299_1, VkglTestCase_006299_2);

#define VkglTestCase_006300_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006300_2 "3_static_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006300, VkglTestCase_006300_1, VkglTestCase_006300_2);

#define VkglTestCase_006301_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006301_2 "3_static_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006301, VkglTestCase_006301_1, VkglTestCase_006301_2);

#define VkglTestCase_006302_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_006302_2 "_static_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006302, VkglTestCase_006302_1, VkglTestCase_006302_2);

#define VkglTestCase_006303_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_"
#define VkglTestCase_006303_2 "static_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006303, VkglTestCase_006303_1, VkglTestCase_006303_2);

#define VkglTestCase_006304_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_s"
#define VkglTestCase_006304_2 "tatic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006304, VkglTestCase_006304_1, VkglTestCase_006304_2);

#define VkglTestCase_006305_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_"
#define VkglTestCase_006305_2 "static_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006305, VkglTestCase_006305_1, VkglTestCase_006305_2);

#define VkglTestCase_006306_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_s"
#define VkglTestCase_006306_2 "tatic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006306, VkglTestCase_006306_1, VkglTestCase_006306_2);

#define VkglTestCase_006307_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006307_2 "t.vec3_dynamic_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006307, VkglTestCase_006307_1, VkglTestCase_006307_2);

#define VkglTestCase_006308_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006308_2 ".vec3_dynamic_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006308, VkglTestCase_006308_1, VkglTestCase_006308_2);

#define VkglTestCase_006309_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006309_2 ".vec3_dynamic_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006309, VkglTestCase_006309_1, VkglTestCase_006309_2);

#define VkglTestCase_006310_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006310_2 "vec3_dynamic_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006310, VkglTestCase_006310_1, VkglTestCase_006310_2);

#define VkglTestCase_006311_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006311_2 "3_dynamic_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006311, VkglTestCase_006311_1, VkglTestCase_006311_2);

#define VkglTestCase_006312_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_006312_2 "_dynamic_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006312, VkglTestCase_006312_1, VkglTestCase_006312_2);

#define VkglTestCase_006313_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006313_2 "3_dynamic_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006313, VkglTestCase_006313_1, VkglTestCase_006313_2);

#define VkglTestCase_006314_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_006314_2 "_dynamic_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006314, VkglTestCase_006314_1, VkglTestCase_006314_2);

#define VkglTestCase_006315_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_"
#define VkglTestCase_006315_2 "dynamic_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006315, VkglTestCase_006315_1, VkglTestCase_006315_2);

#define VkglTestCase_006316_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_d"
#define VkglTestCase_006316_2 "ynamic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006316, VkglTestCase_006316_1, VkglTestCase_006316_2);

#define VkglTestCase_006317_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_d"
#define VkglTestCase_006317_2 "ynamic_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006317, VkglTestCase_006317_1, VkglTestCase_006317_2);

#define VkglTestCase_006318_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_dy"
#define VkglTestCase_006318_2 "namic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006318, VkglTestCase_006318_1, VkglTestCase_006318_2);

#define VkglTestCase_006319_1 "dEQP-GLES3.functional.shaders.indexing.vector_"
#define VkglTestCase_006319_2 "subscript.vec4_direct_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006319, VkglTestCase_006319_1, VkglTestCase_006319_2);

#define VkglTestCase_006320_1 "dEQP-GLES3.functional.shaders.indexing.vector_s"
#define VkglTestCase_006320_2 "ubscript.vec4_direct_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006320, VkglTestCase_006320_1, VkglTestCase_006320_2);

#define VkglTestCase_006321_1 "dEQP-GLES3.functional.shaders.indexing.vector_s"
#define VkglTestCase_006321_2 "ubscript.vec4_direct_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006321, VkglTestCase_006321_1, VkglTestCase_006321_2);

#define VkglTestCase_006322_1 "dEQP-GLES3.functional.shaders.indexing.vector_su"
#define VkglTestCase_006322_2 "bscript.vec4_direct_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006322, VkglTestCase_006322_1, VkglTestCase_006322_2);

#define VkglTestCase_006323_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006323_2 "ript.vec4_direct_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006323, VkglTestCase_006323_1, VkglTestCase_006323_2);

#define VkglTestCase_006324_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006324_2 "ipt.vec4_direct_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006324, VkglTestCase_006324_1, VkglTestCase_006324_2);

#define VkglTestCase_006325_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006325_2 "ript.vec4_direct_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006325, VkglTestCase_006325_1, VkglTestCase_006325_2);

#define VkglTestCase_006326_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006326_2 "ipt.vec4_direct_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006326, VkglTestCase_006326_1, VkglTestCase_006326_2);

#define VkglTestCase_006327_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006327_2 "pt.vec4_direct_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006327, VkglTestCase_006327_1, VkglTestCase_006327_2);

#define VkglTestCase_006328_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006328_2 "t.vec4_direct_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006328, VkglTestCase_006328_1, VkglTestCase_006328_2);

#define VkglTestCase_006329_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006329_2 "t.vec4_direct_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006329, VkglTestCase_006329_1, VkglTestCase_006329_2);

#define VkglTestCase_006330_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006330_2 ".vec4_direct_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006330, VkglTestCase_006330_1, VkglTestCase_006330_2);

#define VkglTestCase_006331_1 "dEQP-GLES3.functional.shaders.indexing.vector_s"
#define VkglTestCase_006331_2 "ubscript.vec4_component_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006331, VkglTestCase_006331_1, VkglTestCase_006331_2);

#define VkglTestCase_006332_1 "dEQP-GLES3.functional.shaders.indexing.vector_su"
#define VkglTestCase_006332_2 "bscript.vec4_component_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006332, VkglTestCase_006332_1, VkglTestCase_006332_2);

#define VkglTestCase_006333_1 "dEQP-GLES3.functional.shaders.indexing.vector_sub"
#define VkglTestCase_006333_2 "script.vec4_component_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006333, VkglTestCase_006333_1, VkglTestCase_006333_2);

#define VkglTestCase_006334_1 "dEQP-GLES3.functional.shaders.indexing.vector_subs"
#define VkglTestCase_006334_2 "cript.vec4_component_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006334, VkglTestCase_006334_1, VkglTestCase_006334_2);

#define VkglTestCase_006335_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006335_2 "ipt.vec4_component_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006335, VkglTestCase_006335_1, VkglTestCase_006335_2);

#define VkglTestCase_006336_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006336_2 "pt.vec4_component_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006336, VkglTestCase_006336_1, VkglTestCase_006336_2);

#define VkglTestCase_006337_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006337_2 "pt.vec4_component_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006337, VkglTestCase_006337_1, VkglTestCase_006337_2);

#define VkglTestCase_006338_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006338_2 "t.vec4_component_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006338, VkglTestCase_006338_1, VkglTestCase_006338_2);

#define VkglTestCase_006339_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006339_2 ".vec4_component_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006339, VkglTestCase_006339_1, VkglTestCase_006339_2);

#define VkglTestCase_006340_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006340_2 "vec4_component_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006340, VkglTestCase_006340_1, VkglTestCase_006340_2);

#define VkglTestCase_006341_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006341_2 ".vec4_component_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006341, VkglTestCase_006341_1, VkglTestCase_006341_2);

#define VkglTestCase_006342_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006342_2 "vec4_component_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006342, VkglTestCase_006342_1, VkglTestCase_006342_2);

#define VkglTestCase_006343_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006343_2 "ript.vec4_static_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006343, VkglTestCase_006343_1, VkglTestCase_006343_2);

#define VkglTestCase_006344_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006344_2 "ipt.vec4_static_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006344, VkglTestCase_006344_1, VkglTestCase_006344_2);

#define VkglTestCase_006345_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006345_2 "ipt.vec4_static_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006345, VkglTestCase_006345_1, VkglTestCase_006345_2);

#define VkglTestCase_006346_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006346_2 "pt.vec4_static_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006346, VkglTestCase_006346_1, VkglTestCase_006346_2);

#define VkglTestCase_006347_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006347_2 "vec4_static_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006347, VkglTestCase_006347_1, VkglTestCase_006347_2);

#define VkglTestCase_006348_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006348_2 "ec4_static_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006348, VkglTestCase_006348_1, VkglTestCase_006348_2);

#define VkglTestCase_006349_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006349_2 "vec4_static_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006349, VkglTestCase_006349_1, VkglTestCase_006349_2);

#define VkglTestCase_006350_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006350_2 "ec4_static_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006350, VkglTestCase_006350_1, VkglTestCase_006350_2);

#define VkglTestCase_006351_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_006351_2 "c4_static_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006351, VkglTestCase_006351_1, VkglTestCase_006351_2);

#define VkglTestCase_006352_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006352_2 "4_static_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006352, VkglTestCase_006352_1, VkglTestCase_006352_2);

#define VkglTestCase_006353_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006353_2 "4_static_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006353, VkglTestCase_006353_1, VkglTestCase_006353_2);

#define VkglTestCase_006354_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_006354_2 "_static_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006354, VkglTestCase_006354_1, VkglTestCase_006354_2);

#define VkglTestCase_006355_1 "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_006355_2 "ript.vec4_dynamic_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006355, VkglTestCase_006355_1, VkglTestCase_006355_2);

#define VkglTestCase_006356_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_006356_2 "ipt.vec4_dynamic_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006356, VkglTestCase_006356_1, VkglTestCase_006356_2);

#define VkglTestCase_006357_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006357_2 "pt.vec4_dynamic_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006357, VkglTestCase_006357_1, VkglTestCase_006357_2);

#define VkglTestCase_006358_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006358_2 "t.vec4_dynamic_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006358, VkglTestCase_006358_1, VkglTestCase_006358_2);

#define VkglTestCase_006359_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006359_2 "vec4_dynamic_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006359, VkglTestCase_006359_1, VkglTestCase_006359_2);

#define VkglTestCase_006360_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006360_2 "ec4_dynamic_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006360, VkglTestCase_006360_1, VkglTestCase_006360_2);

#define VkglTestCase_006361_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_006361_2 "ec4_dynamic_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006361, VkglTestCase_006361_1, VkglTestCase_006361_2);

#define VkglTestCase_006362_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_006362_2 "c4_dynamic_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006362, VkglTestCase_006362_1, VkglTestCase_006362_2);

#define VkglTestCase_006363_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006363_2 "4_dynamic_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006363, VkglTestCase_006363_1, VkglTestCase_006363_2);

#define VkglTestCase_006364_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_006364_2 "_dynamic_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006364, VkglTestCase_006364_1, VkglTestCase_006364_2);

#define VkglTestCase_006365_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006365_2 "4_dynamic_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006365, VkglTestCase_006365_1, VkglTestCase_006365_2);

#define VkglTestCase_006366_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_006366_2 "_dynamic_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006366, VkglTestCase_006366_1, VkglTestCase_006366_2);

#define VkglTestCase_006367_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_006367_2 "pt.vec4_static_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006367, VkglTestCase_006367_1, VkglTestCase_006367_2);

#define VkglTestCase_006368_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006368_2 "t.vec4_static_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006368, VkglTestCase_006368_1, VkglTestCase_006368_2);

#define VkglTestCase_006369_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006369_2 ".vec4_static_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006369, VkglTestCase_006369_1, VkglTestCase_006369_2);

#define VkglTestCase_006370_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006370_2 "vec4_static_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006370, VkglTestCase_006370_1, VkglTestCase_006370_2);

#define VkglTestCase_006371_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_006371_2 "c4_static_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006371, VkglTestCase_006371_1, VkglTestCase_006371_2);

#define VkglTestCase_006372_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006372_2 "4_static_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006372, VkglTestCase_006372_1, VkglTestCase_006372_2);

#define VkglTestCase_006373_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006373_2 "4_static_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006373, VkglTestCase_006373_1, VkglTestCase_006373_2);

#define VkglTestCase_006374_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_006374_2 "_static_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006374, VkglTestCase_006374_1, VkglTestCase_006374_2);

#define VkglTestCase_006375_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_"
#define VkglTestCase_006375_2 "static_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006375, VkglTestCase_006375_1, VkglTestCase_006375_2);

#define VkglTestCase_006376_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_s"
#define VkglTestCase_006376_2 "tatic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006376, VkglTestCase_006376_1, VkglTestCase_006376_2);

#define VkglTestCase_006377_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_"
#define VkglTestCase_006377_2 "static_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006377, VkglTestCase_006377_1, VkglTestCase_006377_2);

#define VkglTestCase_006378_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_s"
#define VkglTestCase_006378_2 "tatic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006378, VkglTestCase_006378_1, VkglTestCase_006378_2);

#define VkglTestCase_006379_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_006379_2 "t.vec4_dynamic_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006379, VkglTestCase_006379_1, VkglTestCase_006379_2);

#define VkglTestCase_006380_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006380_2 ".vec4_dynamic_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006380, VkglTestCase_006380_1, VkglTestCase_006380_2);

#define VkglTestCase_006381_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_006381_2 ".vec4_dynamic_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006381, VkglTestCase_006381_1, VkglTestCase_006381_2);

#define VkglTestCase_006382_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_006382_2 "vec4_dynamic_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006382, VkglTestCase_006382_1, VkglTestCase_006382_2);

#define VkglTestCase_006383_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006383_2 "4_dynamic_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006383, VkglTestCase_006383_1, VkglTestCase_006383_2);

#define VkglTestCase_006384_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_006384_2 "_dynamic_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006384, VkglTestCase_006384_1, VkglTestCase_006384_2);

#define VkglTestCase_006385_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_006385_2 "4_dynamic_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006385, VkglTestCase_006385_1, VkglTestCase_006385_2);

#define VkglTestCase_006386_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_006386_2 "_dynamic_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006386, VkglTestCase_006386_1, VkglTestCase_006386_2);

#define VkglTestCase_006387_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_"
#define VkglTestCase_006387_2 "dynamic_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006387, VkglTestCase_006387_1, VkglTestCase_006387_2);

#define VkglTestCase_006388_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_d"
#define VkglTestCase_006388_2 "ynamic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006388, VkglTestCase_006388_1, VkglTestCase_006388_2);

#define VkglTestCase_006389_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_d"
#define VkglTestCase_006389_2 "ynamic_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006389, VkglTestCase_006389_1, VkglTestCase_006389_2);

#define VkglTestCase_006390_1 "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_dy"
#define VkglTestCase_006390_2 "namic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006390, VkglTestCase_006390_1, VkglTestCase_006390_2);
