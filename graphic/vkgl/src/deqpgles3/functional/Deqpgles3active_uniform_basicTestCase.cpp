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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036241_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036241_2 "query.active_uniform.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036241, VkglTestCase_036241_1, VkglTestCase_036241_2);

#define VkglTestCase_036242_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036242_2 "uery.active_uniform.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036242, VkglTestCase_036242_1, VkglTestCase_036242_2);

#define VkglTestCase_036243_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036243_2 "_query.active_uniform.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036243, VkglTestCase_036243_1, VkglTestCase_036243_2);

#define VkglTestCase_036244_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036244_2 "_query.active_uniform.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036244, VkglTestCase_036244_1, VkglTestCase_036244_2);

#define VkglTestCase_036245_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036245_2 "query.active_uniform.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036245, VkglTestCase_036245_1, VkglTestCase_036245_2);

#define VkglTestCase_036246_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036246_2 "o_query.active_uniform.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036246, VkglTestCase_036246_1, VkglTestCase_036246_2);

#define VkglTestCase_036247_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036247_2 "_query.active_uniform.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036247, VkglTestCase_036247_1, VkglTestCase_036247_2);

#define VkglTestCase_036248_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036248_2 "query.active_uniform.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036248, VkglTestCase_036248_1, VkglTestCase_036248_2);

#define VkglTestCase_036249_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036249_2 "o_query.active_uniform.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036249, VkglTestCase_036249_1, VkglTestCase_036249_2);

#define VkglTestCase_036250_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036250_2 "_query.active_uniform.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036250, VkglTestCase_036250_1, VkglTestCase_036250_2);

#define VkglTestCase_036251_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036251_2 "query.active_uniform.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036251, VkglTestCase_036251_1, VkglTestCase_036251_2);

#define VkglTestCase_036252_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036252_2 "o_query.active_uniform.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036252, VkglTestCase_036252_1, VkglTestCase_036252_2);

#define VkglTestCase_036253_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036253_2 "_query.active_uniform.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036253, VkglTestCase_036253_1, VkglTestCase_036253_2);

#define VkglTestCase_036254_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036254_2 "query.active_uniform.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036254, VkglTestCase_036254_1, VkglTestCase_036254_2);

#define VkglTestCase_036255_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036255_2 "o_query.active_uniform.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036255, VkglTestCase_036255_1, VkglTestCase_036255_2);

#define VkglTestCase_036256_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036256_2 "query.active_uniform.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036256, VkglTestCase_036256_1, VkglTestCase_036256_2);

#define VkglTestCase_036257_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036257_2 "uery.active_uniform.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036257, VkglTestCase_036257_1, VkglTestCase_036257_2);

#define VkglTestCase_036258_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036258_2 "_query.active_uniform.basic.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036258, VkglTestCase_036258_1, VkglTestCase_036258_2);

#define VkglTestCase_036259_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036259_2 "query.active_uniform.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036259, VkglTestCase_036259_1, VkglTestCase_036259_2);

#define VkglTestCase_036260_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036260_2 "uery.active_uniform.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036260, VkglTestCase_036260_1, VkglTestCase_036260_2);

#define VkglTestCase_036261_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036261_2 "_query.active_uniform.basic.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036261, VkglTestCase_036261_1, VkglTestCase_036261_2);

#define VkglTestCase_036262_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036262_2 "query.active_uniform.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036262, VkglTestCase_036262_1, VkglTestCase_036262_2);

#define VkglTestCase_036263_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036263_2 "uery.active_uniform.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036263, VkglTestCase_036263_1, VkglTestCase_036263_2);

#define VkglTestCase_036264_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036264_2 "_query.active_uniform.basic.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036264, VkglTestCase_036264_1, VkglTestCase_036264_2);

#define VkglTestCase_036265_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036265_2 "_query.active_uniform.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036265, VkglTestCase_036265_1, VkglTestCase_036265_2);

#define VkglTestCase_036266_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036266_2 "query.active_uniform.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036266, VkglTestCase_036266_1, VkglTestCase_036266_2);

#define VkglTestCase_036267_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036267_2 "o_query.active_uniform.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036267, VkglTestCase_036267_1, VkglTestCase_036267_2);

#define VkglTestCase_036268_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036268_2 "query.active_uniform.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036268, VkglTestCase_036268_1, VkglTestCase_036268_2);

#define VkglTestCase_036269_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036269_2 "uery.active_uniform.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036269, VkglTestCase_036269_1, VkglTestCase_036269_2);

#define VkglTestCase_036270_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036270_2 "_query.active_uniform.basic.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036270, VkglTestCase_036270_1, VkglTestCase_036270_2);

#define VkglTestCase_036271_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036271_2 "query.active_uniform.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036271, VkglTestCase_036271_1, VkglTestCase_036271_2);

#define VkglTestCase_036272_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036272_2 "uery.active_uniform.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036272, VkglTestCase_036272_1, VkglTestCase_036272_2);

#define VkglTestCase_036273_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036273_2 "_query.active_uniform.basic.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036273, VkglTestCase_036273_1, VkglTestCase_036273_2);

#define VkglTestCase_036274_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036274_2 "query.active_uniform.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036274, VkglTestCase_036274_1, VkglTestCase_036274_2);

#define VkglTestCase_036275_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036275_2 "uery.active_uniform.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036275, VkglTestCase_036275_1, VkglTestCase_036275_2);

#define VkglTestCase_036276_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036276_2 "_query.active_uniform.basic.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036276, VkglTestCase_036276_1, VkglTestCase_036276_2);

#define VkglTestCase_036277_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036277_2 "_query.active_uniform.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036277, VkglTestCase_036277_1, VkglTestCase_036277_2);

#define VkglTestCase_036278_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036278_2 "query.active_uniform.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036278, VkglTestCase_036278_1, VkglTestCase_036278_2);

#define VkglTestCase_036279_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036279_2 "o_query.active_uniform.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036279, VkglTestCase_036279_1, VkglTestCase_036279_2);

#define VkglTestCase_036280_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036280_2 "_query.active_uniform.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036280, VkglTestCase_036280_1, VkglTestCase_036280_2);

#define VkglTestCase_036281_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036281_2 "query.active_uniform.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036281, VkglTestCase_036281_1, VkglTestCase_036281_2);

#define VkglTestCase_036282_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036282_2 "o_query.active_uniform.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036282, VkglTestCase_036282_1, VkglTestCase_036282_2);

#define VkglTestCase_036283_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036283_2 "query.active_uniform.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036283, VkglTestCase_036283_1, VkglTestCase_036283_2);

#define VkglTestCase_036284_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036284_2 "uery.active_uniform.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036284, VkglTestCase_036284_1, VkglTestCase_036284_2);

#define VkglTestCase_036285_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036285_2 "_query.active_uniform.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036285, VkglTestCase_036285_1, VkglTestCase_036285_2);

#define VkglTestCase_036286_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036286_2 "query.active_uniform.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036286, VkglTestCase_036286_1, VkglTestCase_036286_2);

#define VkglTestCase_036287_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036287_2 "uery.active_uniform.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036287, VkglTestCase_036287_1, VkglTestCase_036287_2);

#define VkglTestCase_036288_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036288_2 "_query.active_uniform.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036288, VkglTestCase_036288_1, VkglTestCase_036288_2);

#define VkglTestCase_036289_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036289_2 "query.active_uniform.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036289, VkglTestCase_036289_1, VkglTestCase_036289_2);

#define VkglTestCase_036290_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036290_2 "uery.active_uniform.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036290, VkglTestCase_036290_1, VkglTestCase_036290_2);

#define VkglTestCase_036291_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036291_2 "_query.active_uniform.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036291, VkglTestCase_036291_1, VkglTestCase_036291_2);

#define VkglTestCase_036292_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036292_2 "_query.active_uniform.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036292, VkglTestCase_036292_1, VkglTestCase_036292_2);

#define VkglTestCase_036293_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036293_2 "query.active_uniform.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036293, VkglTestCase_036293_1, VkglTestCase_036293_2);

#define VkglTestCase_036294_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036294_2 "o_query.active_uniform.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036294, VkglTestCase_036294_1, VkglTestCase_036294_2);

#define VkglTestCase_036295_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036295_2 "query.active_uniform.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036295, VkglTestCase_036295_1, VkglTestCase_036295_2);

#define VkglTestCase_036296_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036296_2 "uery.active_uniform.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036296, VkglTestCase_036296_1, VkglTestCase_036296_2);

#define VkglTestCase_036297_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036297_2 "_query.active_uniform.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036297, VkglTestCase_036297_1, VkglTestCase_036297_2);

#define VkglTestCase_036298_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036298_2 "query.active_uniform.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036298, VkglTestCase_036298_1, VkglTestCase_036298_2);

#define VkglTestCase_036299_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036299_2 "uery.active_uniform.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036299, VkglTestCase_036299_1, VkglTestCase_036299_2);

#define VkglTestCase_036300_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036300_2 "_query.active_uniform.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036300, VkglTestCase_036300_1, VkglTestCase_036300_2);

#define VkglTestCase_036301_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036301_2 "query.active_uniform.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036301, VkglTestCase_036301_1, VkglTestCase_036301_2);

#define VkglTestCase_036302_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036302_2 "uery.active_uniform.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036302, VkglTestCase_036302_1, VkglTestCase_036302_2);

#define VkglTestCase_036303_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036303_2 "_query.active_uniform.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036303, VkglTestCase_036303_1, VkglTestCase_036303_2);

#define VkglTestCase_036304_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036304_2 "_query.active_uniform.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036304, VkglTestCase_036304_1, VkglTestCase_036304_2);

#define VkglTestCase_036305_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036305_2 "query.active_uniform.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036305, VkglTestCase_036305_1, VkglTestCase_036305_2);

#define VkglTestCase_036306_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036306_2 "o_query.active_uniform.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036306, VkglTestCase_036306_1, VkglTestCase_036306_2);

#define VkglTestCase_036307_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036307_2 "query.active_uniform.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036307, VkglTestCase_036307_1, VkglTestCase_036307_2);

#define VkglTestCase_036308_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036308_2 "uery.active_uniform.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036308, VkglTestCase_036308_1, VkglTestCase_036308_2);

#define VkglTestCase_036309_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036309_2 "_query.active_uniform.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036309, VkglTestCase_036309_1, VkglTestCase_036309_2);

#define VkglTestCase_036310_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036310_2 "query.active_uniform.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036310, VkglTestCase_036310_1, VkglTestCase_036310_2);

#define VkglTestCase_036311_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036311_2 "uery.active_uniform.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036311, VkglTestCase_036311_1, VkglTestCase_036311_2);

#define VkglTestCase_036312_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036312_2 "_query.active_uniform.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036312, VkglTestCase_036312_1, VkglTestCase_036312_2);

#define VkglTestCase_036313_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036313_2 "query.active_uniform.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036313, VkglTestCase_036313_1, VkglTestCase_036313_2);

#define VkglTestCase_036314_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036314_2 "uery.active_uniform.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036314, VkglTestCase_036314_1, VkglTestCase_036314_2);

#define VkglTestCase_036315_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036315_2 "_query.active_uniform.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036315, VkglTestCase_036315_1, VkglTestCase_036315_2);

#define VkglTestCase_036316_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036316_2 "ery.active_uniform.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036316, VkglTestCase_036316_1, VkglTestCase_036316_2);

#define VkglTestCase_036317_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036317_2 "ry.active_uniform.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036317, VkglTestCase_036317_1, VkglTestCase_036317_2);

#define VkglTestCase_036318_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036318_2 "uery.active_uniform.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036318, VkglTestCase_036318_1, VkglTestCase_036318_2);

#define VkglTestCase_036319_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036319_2 "ry.active_uniform.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036319, VkglTestCase_036319_1, VkglTestCase_036319_2);

#define VkglTestCase_036320_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036320_2 "y.active_uniform.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036320, VkglTestCase_036320_1, VkglTestCase_036320_2);

#define VkglTestCase_036321_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036321_2 "ery.active_uniform.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036321, VkglTestCase_036321_1, VkglTestCase_036321_2);
