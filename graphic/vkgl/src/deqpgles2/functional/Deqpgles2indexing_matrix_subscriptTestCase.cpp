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
#include "../ActsDeqpgles20004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003211_1 "dEQP-GLES2.functional.shaders.indexing.matrix_"
#define VkglTestCase_003211_2 "subscript.mat2_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003211, VkglTestCase_003211_1, VkglTestCase_003211_2);

#define VkglTestCase_003212_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003212_2 "ubscript.mat2_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003212, VkglTestCase_003212_1, VkglTestCase_003212_2);

#define VkglTestCase_003213_1 "dEQP-GLES2.functional.shaders.indexing.matrix_"
#define VkglTestCase_003213_2 "subscript.mat2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003213, VkglTestCase_003213_1, VkglTestCase_003213_2);

#define VkglTestCase_003214_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003214_2 "ubscript.mat2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003214, VkglTestCase_003214_1, VkglTestCase_003214_2);

#define VkglTestCase_003215_1 "dEQP-GLES2.functional.shaders.indexing.matrix_su"
#define VkglTestCase_003215_2 "bscript.mat2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003215, VkglTestCase_003215_1, VkglTestCase_003215_2);

#define VkglTestCase_003216_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003216_2 "script.mat2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003216, VkglTestCase_003216_1, VkglTestCase_003216_2);

#define VkglTestCase_003217_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003217_2 "script.mat2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003217, VkglTestCase_003217_1, VkglTestCase_003217_2);

#define VkglTestCase_003218_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003218_2 "cript.mat2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003218, VkglTestCase_003218_1, VkglTestCase_003218_2);

#define VkglTestCase_003219_1 "dEQP-GLES2.functional.shaders.indexing.matrix_"
#define VkglTestCase_003219_2 "subscript.mat2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003219, VkglTestCase_003219_1, VkglTestCase_003219_2);

#define VkglTestCase_003220_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003220_2 "ubscript.mat2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003220, VkglTestCase_003220_1, VkglTestCase_003220_2);

#define VkglTestCase_003221_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003221_2 "ubscript.mat2_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003221, VkglTestCase_003221_1, VkglTestCase_003221_2);

#define VkglTestCase_003222_1 "dEQP-GLES2.functional.shaders.indexing.matrix_su"
#define VkglTestCase_003222_2 "bscript.mat2_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003222, VkglTestCase_003222_1, VkglTestCase_003222_2);

#define VkglTestCase_003223_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003223_2 "script.mat2_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003223, VkglTestCase_003223_1, VkglTestCase_003223_2);

#define VkglTestCase_003224_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003224_2 "cript.mat2_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003224, VkglTestCase_003224_1, VkglTestCase_003224_2);

#define VkglTestCase_003225_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003225_2 "script.mat2_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003225, VkglTestCase_003225_1, VkglTestCase_003225_2);

#define VkglTestCase_003226_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003226_2 "cript.mat2_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003226, VkglTestCase_003226_1, VkglTestCase_003226_2);

#define VkglTestCase_003227_1 "dEQP-GLES2.functional.shaders.indexing.matrix_su"
#define VkglTestCase_003227_2 "bscript.mat2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003227, VkglTestCase_003227_1, VkglTestCase_003227_2);

#define VkglTestCase_003228_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003228_2 "script.mat2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003228, VkglTestCase_003228_1, VkglTestCase_003228_2);

#define VkglTestCase_003229_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003229_2 "script.mat2_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003229, VkglTestCase_003229_1, VkglTestCase_003229_2);

#define VkglTestCase_003230_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003230_2 "cript.mat2_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003230, VkglTestCase_003230_1, VkglTestCase_003230_2);

#define VkglTestCase_003231_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_003231_2 "ript.mat2_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003231, VkglTestCase_003231_1, VkglTestCase_003231_2);

#define VkglTestCase_003232_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003232_2 "ipt.mat2_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003232, VkglTestCase_003232_1, VkglTestCase_003232_2);

#define VkglTestCase_003233_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_003233_2 "ript.mat2_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003233, VkglTestCase_003233_1, VkglTestCase_003233_2);

#define VkglTestCase_003234_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003234_2 "ipt.mat2_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003234, VkglTestCase_003234_1, VkglTestCase_003234_2);

#define VkglTestCase_003235_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003235_2 "script.mat2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003235, VkglTestCase_003235_1, VkglTestCase_003235_2);

#define VkglTestCase_003236_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003236_2 "cript.mat2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003236, VkglTestCase_003236_1, VkglTestCase_003236_2);

#define VkglTestCase_003237_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003237_2 "script.mat2_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003237, VkglTestCase_003237_1, VkglTestCase_003237_2);

#define VkglTestCase_003238_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003238_2 "cript.mat2_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003238, VkglTestCase_003238_1, VkglTestCase_003238_2);

#define VkglTestCase_003239_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_003239_2 "ript.mat2_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003239, VkglTestCase_003239_1, VkglTestCase_003239_2);

#define VkglTestCase_003240_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003240_2 "ipt.mat2_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003240, VkglTestCase_003240_1, VkglTestCase_003240_2);

#define VkglTestCase_003241_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003241_2 "ipt.mat2_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003241, VkglTestCase_003241_1, VkglTestCase_003241_2);

#define VkglTestCase_003242_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_003242_2 "pt.mat2_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003242, VkglTestCase_003242_1, VkglTestCase_003242_2);

#define VkglTestCase_003243_1 "dEQP-GLES2.functional.shaders.indexing.matrix_"
#define VkglTestCase_003243_2 "subscript.mat3_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003243, VkglTestCase_003243_1, VkglTestCase_003243_2);

#define VkglTestCase_003244_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003244_2 "ubscript.mat3_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003244, VkglTestCase_003244_1, VkglTestCase_003244_2);

#define VkglTestCase_003245_1 "dEQP-GLES2.functional.shaders.indexing.matrix_"
#define VkglTestCase_003245_2 "subscript.mat3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003245, VkglTestCase_003245_1, VkglTestCase_003245_2);

#define VkglTestCase_003246_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003246_2 "ubscript.mat3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003246, VkglTestCase_003246_1, VkglTestCase_003246_2);

#define VkglTestCase_003247_1 "dEQP-GLES2.functional.shaders.indexing.matrix_su"
#define VkglTestCase_003247_2 "bscript.mat3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003247, VkglTestCase_003247_1, VkglTestCase_003247_2);

#define VkglTestCase_003248_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003248_2 "script.mat3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003248, VkglTestCase_003248_1, VkglTestCase_003248_2);

#define VkglTestCase_003249_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003249_2 "script.mat3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003249, VkglTestCase_003249_1, VkglTestCase_003249_2);

#define VkglTestCase_003250_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003250_2 "cript.mat3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003250, VkglTestCase_003250_1, VkglTestCase_003250_2);

#define VkglTestCase_003251_1 "dEQP-GLES2.functional.shaders.indexing.matrix_"
#define VkglTestCase_003251_2 "subscript.mat3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003251, VkglTestCase_003251_1, VkglTestCase_003251_2);

#define VkglTestCase_003252_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003252_2 "ubscript.mat3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003252, VkglTestCase_003252_1, VkglTestCase_003252_2);

#define VkglTestCase_003253_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003253_2 "ubscript.mat3_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003253, VkglTestCase_003253_1, VkglTestCase_003253_2);

#define VkglTestCase_003254_1 "dEQP-GLES2.functional.shaders.indexing.matrix_su"
#define VkglTestCase_003254_2 "bscript.mat3_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003254, VkglTestCase_003254_1, VkglTestCase_003254_2);

#define VkglTestCase_003255_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003255_2 "script.mat3_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003255, VkglTestCase_003255_1, VkglTestCase_003255_2);

#define VkglTestCase_003256_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003256_2 "cript.mat3_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003256, VkglTestCase_003256_1, VkglTestCase_003256_2);

#define VkglTestCase_003257_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003257_2 "script.mat3_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003257, VkglTestCase_003257_1, VkglTestCase_003257_2);

#define VkglTestCase_003258_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003258_2 "cript.mat3_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003258, VkglTestCase_003258_1, VkglTestCase_003258_2);

#define VkglTestCase_003259_1 "dEQP-GLES2.functional.shaders.indexing.matrix_su"
#define VkglTestCase_003259_2 "bscript.mat3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003259, VkglTestCase_003259_1, VkglTestCase_003259_2);

#define VkglTestCase_003260_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003260_2 "script.mat3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003260, VkglTestCase_003260_1, VkglTestCase_003260_2);

#define VkglTestCase_003261_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003261_2 "script.mat3_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003261, VkglTestCase_003261_1, VkglTestCase_003261_2);

#define VkglTestCase_003262_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003262_2 "cript.mat3_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003262, VkglTestCase_003262_1, VkglTestCase_003262_2);

#define VkglTestCase_003263_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_003263_2 "ript.mat3_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003263, VkglTestCase_003263_1, VkglTestCase_003263_2);

#define VkglTestCase_003264_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003264_2 "ipt.mat3_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003264, VkglTestCase_003264_1, VkglTestCase_003264_2);

#define VkglTestCase_003265_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_003265_2 "ript.mat3_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003265, VkglTestCase_003265_1, VkglTestCase_003265_2);

#define VkglTestCase_003266_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003266_2 "ipt.mat3_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003266, VkglTestCase_003266_1, VkglTestCase_003266_2);

#define VkglTestCase_003267_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003267_2 "script.mat3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003267, VkglTestCase_003267_1, VkglTestCase_003267_2);

#define VkglTestCase_003268_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003268_2 "cript.mat3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003268, VkglTestCase_003268_1, VkglTestCase_003268_2);

#define VkglTestCase_003269_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003269_2 "script.mat3_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003269, VkglTestCase_003269_1, VkglTestCase_003269_2);

#define VkglTestCase_003270_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003270_2 "cript.mat3_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003270, VkglTestCase_003270_1, VkglTestCase_003270_2);

#define VkglTestCase_003271_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_003271_2 "ript.mat3_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003271, VkglTestCase_003271_1, VkglTestCase_003271_2);

#define VkglTestCase_003272_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003272_2 "ipt.mat3_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003272, VkglTestCase_003272_1, VkglTestCase_003272_2);

#define VkglTestCase_003273_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003273_2 "ipt.mat3_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003273, VkglTestCase_003273_1, VkglTestCase_003273_2);

#define VkglTestCase_003274_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_003274_2 "pt.mat3_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003274, VkglTestCase_003274_1, VkglTestCase_003274_2);

#define VkglTestCase_003275_1 "dEQP-GLES2.functional.shaders.indexing.matrix_"
#define VkglTestCase_003275_2 "subscript.mat4_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003275, VkglTestCase_003275_1, VkglTestCase_003275_2);

#define VkglTestCase_003276_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003276_2 "ubscript.mat4_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003276, VkglTestCase_003276_1, VkglTestCase_003276_2);

#define VkglTestCase_003277_1 "dEQP-GLES2.functional.shaders.indexing.matrix_"
#define VkglTestCase_003277_2 "subscript.mat4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003277, VkglTestCase_003277_1, VkglTestCase_003277_2);

#define VkglTestCase_003278_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003278_2 "ubscript.mat4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003278, VkglTestCase_003278_1, VkglTestCase_003278_2);

#define VkglTestCase_003279_1 "dEQP-GLES2.functional.shaders.indexing.matrix_su"
#define VkglTestCase_003279_2 "bscript.mat4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003279, VkglTestCase_003279_1, VkglTestCase_003279_2);

#define VkglTestCase_003280_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003280_2 "script.mat4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003280, VkglTestCase_003280_1, VkglTestCase_003280_2);

#define VkglTestCase_003281_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003281_2 "script.mat4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003281, VkglTestCase_003281_1, VkglTestCase_003281_2);

#define VkglTestCase_003282_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003282_2 "cript.mat4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003282, VkglTestCase_003282_1, VkglTestCase_003282_2);

#define VkglTestCase_003283_1 "dEQP-GLES2.functional.shaders.indexing.matrix_"
#define VkglTestCase_003283_2 "subscript.mat4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003283, VkglTestCase_003283_1, VkglTestCase_003283_2);

#define VkglTestCase_003284_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003284_2 "ubscript.mat4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003284, VkglTestCase_003284_1, VkglTestCase_003284_2);

#define VkglTestCase_003285_1 "dEQP-GLES2.functional.shaders.indexing.matrix_s"
#define VkglTestCase_003285_2 "ubscript.mat4_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003285, VkglTestCase_003285_1, VkglTestCase_003285_2);

#define VkglTestCase_003286_1 "dEQP-GLES2.functional.shaders.indexing.matrix_su"
#define VkglTestCase_003286_2 "bscript.mat4_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003286, VkglTestCase_003286_1, VkglTestCase_003286_2);

#define VkglTestCase_003287_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003287_2 "script.mat4_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003287, VkglTestCase_003287_1, VkglTestCase_003287_2);

#define VkglTestCase_003288_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003288_2 "cript.mat4_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003288, VkglTestCase_003288_1, VkglTestCase_003288_2);

#define VkglTestCase_003289_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003289_2 "script.mat4_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003289, VkglTestCase_003289_1, VkglTestCase_003289_2);

#define VkglTestCase_003290_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003290_2 "cript.mat4_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003290, VkglTestCase_003290_1, VkglTestCase_003290_2);

#define VkglTestCase_003291_1 "dEQP-GLES2.functional.shaders.indexing.matrix_su"
#define VkglTestCase_003291_2 "bscript.mat4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003291, VkglTestCase_003291_1, VkglTestCase_003291_2);

#define VkglTestCase_003292_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003292_2 "script.mat4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003292, VkglTestCase_003292_1, VkglTestCase_003292_2);

#define VkglTestCase_003293_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003293_2 "script.mat4_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003293, VkglTestCase_003293_1, VkglTestCase_003293_2);

#define VkglTestCase_003294_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003294_2 "cript.mat4_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003294, VkglTestCase_003294_1, VkglTestCase_003294_2);

#define VkglTestCase_003295_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_003295_2 "ript.mat4_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003295, VkglTestCase_003295_1, VkglTestCase_003295_2);

#define VkglTestCase_003296_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003296_2 "ipt.mat4_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003296, VkglTestCase_003296_1, VkglTestCase_003296_2);

#define VkglTestCase_003297_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_003297_2 "ript.mat4_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003297, VkglTestCase_003297_1, VkglTestCase_003297_2);

#define VkglTestCase_003298_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003298_2 "ipt.mat4_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003298, VkglTestCase_003298_1, VkglTestCase_003298_2);

#define VkglTestCase_003299_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003299_2 "script.mat4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003299, VkglTestCase_003299_1, VkglTestCase_003299_2);

#define VkglTestCase_003300_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003300_2 "cript.mat4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003300, VkglTestCase_003300_1, VkglTestCase_003300_2);

#define VkglTestCase_003301_1 "dEQP-GLES2.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_003301_2 "script.mat4_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003301, VkglTestCase_003301_1, VkglTestCase_003301_2);

#define VkglTestCase_003302_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_003302_2 "cript.mat4_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003302, VkglTestCase_003302_1, VkglTestCase_003302_2);

#define VkglTestCase_003303_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_003303_2 "ript.mat4_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003303, VkglTestCase_003303_1, VkglTestCase_003303_2);

#define VkglTestCase_003304_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003304_2 "ipt.mat4_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003304, VkglTestCase_003304_1, VkglTestCase_003304_2);

#define VkglTestCase_003305_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_003305_2 "ipt.mat4_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003305, VkglTestCase_003305_1, VkglTestCase_003305_2);

#define VkglTestCase_003306_1 "dEQP-GLES2.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_003306_2 "pt.mat4_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003306, VkglTestCase_003306_1, VkglTestCase_003306_2);
