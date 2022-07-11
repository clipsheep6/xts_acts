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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009246_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009246_2 "yout.2_level_array.std140.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009246, VkglTestCase_009246_1, VkglTestCase_009246_2);

#define VkglTestCase_009247_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009247_2 "yout.2_level_array.std140.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009247, VkglTestCase_009247_1, VkglTestCase_009247_2);

#define VkglTestCase_009248_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009248_2 "yout.2_level_array.std140.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009248, VkglTestCase_009248_1, VkglTestCase_009248_2);

#define VkglTestCase_009249_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009249_2 "yout.2_level_array.std140.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009249, VkglTestCase_009249_1, VkglTestCase_009249_2);

#define VkglTestCase_009250_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_009250_2 "ayout.2_level_array.std140.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009250, VkglTestCase_009250_1, VkglTestCase_009250_2);

#define VkglTestCase_009251_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009251_2 "yout.2_level_array.std140.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009251, VkglTestCase_009251_1, VkglTestCase_009251_2);

#define VkglTestCase_009252_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009252_2 "yout.2_level_array.std140.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009252, VkglTestCase_009252_1, VkglTestCase_009252_2);

#define VkglTestCase_009253_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009253_2 "yout.2_level_array.std140.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009253, VkglTestCase_009253_1, VkglTestCase_009253_2);

#define VkglTestCase_009254_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009254_2 "yout.2_level_array.std140.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009254, VkglTestCase_009254_1, VkglTestCase_009254_2);

#define VkglTestCase_009255_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009255_2 "yout.2_level_array.std140.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009255, VkglTestCase_009255_1, VkglTestCase_009255_2);

#define VkglTestCase_009256_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009256_2 "yout.2_level_array.std140.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009256, VkglTestCase_009256_1, VkglTestCase_009256_2);

#define VkglTestCase_009257_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009257_2 "yout.2_level_array.std140.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009257, VkglTestCase_009257_1, VkglTestCase_009257_2);

#define VkglTestCase_009258_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009258_2 "yout.2_level_array.std140.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009258, VkglTestCase_009258_1, VkglTestCase_009258_2);

#define VkglTestCase_009259_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009259_2 "yout.2_level_array.std140.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009259, VkglTestCase_009259_1, VkglTestCase_009259_2);

#define VkglTestCase_009260_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009260_2 "yout.2_level_array.std140.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009260, VkglTestCase_009260_1, VkglTestCase_009260_2);

#define VkglTestCase_009261_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009261_2 "yout.2_level_array.std140.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009261, VkglTestCase_009261_1, VkglTestCase_009261_2);

#define VkglTestCase_009262_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009262_2 "yout.2_level_array.std140.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009262, VkglTestCase_009262_1, VkglTestCase_009262_2);

#define VkglTestCase_009263_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009263_2 "2_level_array.std140.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009263, VkglTestCase_009263_1, VkglTestCase_009263_2);

#define VkglTestCase_009264_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009264_2 "_level_array.std140.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009264, VkglTestCase_009264_1, VkglTestCase_009264_2);

#define VkglTestCase_009265_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009265_2 "yout.2_level_array.std140.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009265, VkglTestCase_009265_1, VkglTestCase_009265_2);

#define VkglTestCase_009266_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009266_2 "2_level_array.std140.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009266, VkglTestCase_009266_1, VkglTestCase_009266_2);

#define VkglTestCase_009267_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009267_2 "_level_array.std140.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009267, VkglTestCase_009267_1, VkglTestCase_009267_2);

#define VkglTestCase_009268_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009268_2 "yout.2_level_array.std140.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009268, VkglTestCase_009268_1, VkglTestCase_009268_2);

#define VkglTestCase_009269_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009269_2 "2_level_array.std140.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009269, VkglTestCase_009269_1, VkglTestCase_009269_2);

#define VkglTestCase_009270_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009270_2 "_level_array.std140.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009270, VkglTestCase_009270_1, VkglTestCase_009270_2);

#define VkglTestCase_009271_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009271_2 "out.2_level_array.std140.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009271, VkglTestCase_009271_1, VkglTestCase_009271_2);

#define VkglTestCase_009272_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009272_2 "_level_array.std140.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009272, VkglTestCase_009272_1, VkglTestCase_009272_2);

#define VkglTestCase_009273_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009273_2 "level_array.std140.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009273, VkglTestCase_009273_1, VkglTestCase_009273_2);

#define VkglTestCase_009274_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009274_2 "out.2_level_array.std140.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009274, VkglTestCase_009274_1, VkglTestCase_009274_2);

#define VkglTestCase_009275_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009275_2 "_level_array.std140.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009275, VkglTestCase_009275_1, VkglTestCase_009275_2);

#define VkglTestCase_009276_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009276_2 "level_array.std140.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009276, VkglTestCase_009276_1, VkglTestCase_009276_2);

#define VkglTestCase_009277_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009277_2 "out.2_level_array.std140.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009277, VkglTestCase_009277_1, VkglTestCase_009277_2);

#define VkglTestCase_009278_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009278_2 "_level_array.std140.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009278, VkglTestCase_009278_1, VkglTestCase_009278_2);

#define VkglTestCase_009279_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009279_2 "level_array.std140.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009279, VkglTestCase_009279_1, VkglTestCase_009279_2);

#define VkglTestCase_009280_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009280_2 "out.2_level_array.std140.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009280, VkglTestCase_009280_1, VkglTestCase_009280_2);

#define VkglTestCase_009281_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009281_2 "_level_array.std140.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009281, VkglTestCase_009281_1, VkglTestCase_009281_2);

#define VkglTestCase_009282_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009282_2 "level_array.std140.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009282, VkglTestCase_009282_1, VkglTestCase_009282_2);

#define VkglTestCase_009283_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009283_2 "out.2_level_array.std140.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009283, VkglTestCase_009283_1, VkglTestCase_009283_2);

#define VkglTestCase_009284_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009284_2 "_level_array.std140.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009284, VkglTestCase_009284_1, VkglTestCase_009284_2);

#define VkglTestCase_009285_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009285_2 "level_array.std140.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009285, VkglTestCase_009285_1, VkglTestCase_009285_2);

#define VkglTestCase_009286_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009286_2 "out.2_level_array.std140.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009286, VkglTestCase_009286_1, VkglTestCase_009286_2);

#define VkglTestCase_009287_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009287_2 "_level_array.std140.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009287, VkglTestCase_009287_1, VkglTestCase_009287_2);

#define VkglTestCase_009288_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009288_2 "level_array.std140.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009288, VkglTestCase_009288_1, VkglTestCase_009288_2);

#define VkglTestCase_010608_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010608_2 "evel_array.std140.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010608, VkglTestCase_010608_1, VkglTestCase_010608_2);

#define VkglTestCase_010609_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010609_2 "vel_array.std140.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010609, VkglTestCase_010609_1, VkglTestCase_010609_2);

#define VkglTestCase_010610_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010610_2 "level_array.std140.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010610, VkglTestCase_010610_1, VkglTestCase_010610_2);

#define VkglTestCase_010611_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010611_2 "level_array.std140.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010611, VkglTestCase_010611_1, VkglTestCase_010611_2);

#define VkglTestCase_010612_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010612_2 "evel_array.std140.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010612, VkglTestCase_010612_1, VkglTestCase_010612_2);

#define VkglTestCase_010613_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010613_2 "_level_array.std140.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010613, VkglTestCase_010613_1, VkglTestCase_010613_2);

#define VkglTestCase_010614_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010614_2 "level_array.std140.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010614, VkglTestCase_010614_1, VkglTestCase_010614_2);

#define VkglTestCase_010615_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010615_2 "evel_array.std140.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010615, VkglTestCase_010615_1, VkglTestCase_010615_2);

#define VkglTestCase_010616_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010616_2 "_level_array.std140.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010616, VkglTestCase_010616_1, VkglTestCase_010616_2);

#define VkglTestCase_010617_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010617_2 "level_array.std140.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010617, VkglTestCase_010617_1, VkglTestCase_010617_2);

#define VkglTestCase_010618_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010618_2 "evel_array.std140.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010618, VkglTestCase_010618_1, VkglTestCase_010618_2);

#define VkglTestCase_010619_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010619_2 "_level_array.std140.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010619, VkglTestCase_010619_1, VkglTestCase_010619_2);

#define VkglTestCase_010620_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010620_2 "level_array.std140.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010620, VkglTestCase_010620_1, VkglTestCase_010620_2);

#define VkglTestCase_010621_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010621_2 "evel_array.std140.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010621, VkglTestCase_010621_1, VkglTestCase_010621_2);

#define VkglTestCase_010622_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010622_2 "_level_array.std140.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010622, VkglTestCase_010622_1, VkglTestCase_010622_2);

#define VkglTestCase_010623_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010623_2 "evel_array.std140.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010623, VkglTestCase_010623_1, VkglTestCase_010623_2);

#define VkglTestCase_010624_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010624_2 "vel_array.std140.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010624, VkglTestCase_010624_1, VkglTestCase_010624_2);

#define VkglTestCase_010625_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010625_2 "level_array.std140.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010625, VkglTestCase_010625_1, VkglTestCase_010625_2);

#define VkglTestCase_010626_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010626_2 "evel_array.std140.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010626, VkglTestCase_010626_1, VkglTestCase_010626_2);

#define VkglTestCase_010627_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010627_2 "vel_array.std140.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010627, VkglTestCase_010627_1, VkglTestCase_010627_2);

#define VkglTestCase_010628_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010628_2 "level_array.std140.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010628, VkglTestCase_010628_1, VkglTestCase_010628_2);

#define VkglTestCase_010629_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010629_2 "evel_array.std140.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010629, VkglTestCase_010629_1, VkglTestCase_010629_2);

#define VkglTestCase_010630_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010630_2 "vel_array.std140.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010630, VkglTestCase_010630_1, VkglTestCase_010630_2);

#define VkglTestCase_010631_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010631_2 "level_array.std140.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010631, VkglTestCase_010631_1, VkglTestCase_010631_2);

#define VkglTestCase_010632_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010632_2 "level_array.std140.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010632, VkglTestCase_010632_1, VkglTestCase_010632_2);

#define VkglTestCase_010633_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010633_2 "evel_array.std140.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010633, VkglTestCase_010633_1, VkglTestCase_010633_2);

#define VkglTestCase_010634_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010634_2 "_level_array.std140.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010634, VkglTestCase_010634_1, VkglTestCase_010634_2);

#define VkglTestCase_010635_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010635_2 "evel_array.std140.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010635, VkglTestCase_010635_1, VkglTestCase_010635_2);

#define VkglTestCase_010636_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010636_2 "vel_array.std140.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010636, VkglTestCase_010636_1, VkglTestCase_010636_2);

#define VkglTestCase_010637_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010637_2 "level_array.std140.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010637, VkglTestCase_010637_1, VkglTestCase_010637_2);

#define VkglTestCase_010638_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010638_2 "evel_array.std140.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010638, VkglTestCase_010638_1, VkglTestCase_010638_2);

#define VkglTestCase_010639_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010639_2 "vel_array.std140.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010639, VkglTestCase_010639_1, VkglTestCase_010639_2);

#define VkglTestCase_010640_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010640_2 "level_array.std140.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010640, VkglTestCase_010640_1, VkglTestCase_010640_2);

#define VkglTestCase_010641_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010641_2 "evel_array.std140.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010641, VkglTestCase_010641_1, VkglTestCase_010641_2);

#define VkglTestCase_010642_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010642_2 "vel_array.std140.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010642, VkglTestCase_010642_1, VkglTestCase_010642_2);

#define VkglTestCase_010643_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010643_2 "level_array.std140.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010643, VkglTestCase_010643_1, VkglTestCase_010643_2);

#define VkglTestCase_010644_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010644_2 "level_array.std140.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010644, VkglTestCase_010644_1, VkglTestCase_010644_2);

#define VkglTestCase_010645_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010645_2 "evel_array.std140.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010645, VkglTestCase_010645_1, VkglTestCase_010645_2);

#define VkglTestCase_010646_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010646_2 "_level_array.std140.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010646, VkglTestCase_010646_1, VkglTestCase_010646_2);

#define VkglTestCase_010647_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010647_2 "evel_array.std140.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010647, VkglTestCase_010647_1, VkglTestCase_010647_2);

#define VkglTestCase_010648_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010648_2 "vel_array.std140.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010648, VkglTestCase_010648_1, VkglTestCase_010648_2);

#define VkglTestCase_010649_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010649_2 "level_array.std140.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010649, VkglTestCase_010649_1, VkglTestCase_010649_2);

#define VkglTestCase_010650_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010650_2 "evel_array.std140.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010650, VkglTestCase_010650_1, VkglTestCase_010650_2);

#define VkglTestCase_010651_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010651_2 "vel_array.std140.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010651, VkglTestCase_010651_1, VkglTestCase_010651_2);

#define VkglTestCase_010652_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010652_2 "level_array.std140.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010652, VkglTestCase_010652_1, VkglTestCase_010652_2);

#define VkglTestCase_010653_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010653_2 "evel_array.std140.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010653, VkglTestCase_010653_1, VkglTestCase_010653_2);

#define VkglTestCase_010654_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010654_2 "vel_array.std140.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010654, VkglTestCase_010654_1, VkglTestCase_010654_2);

#define VkglTestCase_010655_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010655_2 "level_array.std140.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010655, VkglTestCase_010655_1, VkglTestCase_010655_2);

#define VkglTestCase_010656_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010656_2 "level_array.std140.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010656, VkglTestCase_010656_1, VkglTestCase_010656_2);

#define VkglTestCase_010657_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010657_2 "evel_array.std140.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010657, VkglTestCase_010657_1, VkglTestCase_010657_2);

#define VkglTestCase_010658_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010658_2 "_level_array.std140.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010658, VkglTestCase_010658_1, VkglTestCase_010658_2);

#define VkglTestCase_010659_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010659_2 "_array.std140.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010659, VkglTestCase_010659_1, VkglTestCase_010659_2);

#define VkglTestCase_010660_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010660_2 "array.std140.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010660, VkglTestCase_010660_1, VkglTestCase_010660_2);

#define VkglTestCase_010661_1 "dEQP-GLES31.functional.ubo.2_leve"
#define VkglTestCase_010661_2 "l_array.std140.row_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010661, VkglTestCase_010661_1, VkglTestCase_010661_2);

#define VkglTestCase_010662_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010662_2 "rray.std140.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010662, VkglTestCase_010662_1, VkglTestCase_010662_2);

#define VkglTestCase_010663_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010663_2 "ray.std140.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010663, VkglTestCase_010663_1, VkglTestCase_010663_2);

#define VkglTestCase_010664_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010664_2 "array.std140.column_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010664, VkglTestCase_010664_1, VkglTestCase_010664_2);

#define VkglTestCase_010665_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010665_2 "level_array.std140.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010665, VkglTestCase_010665_1, VkglTestCase_010665_2);

#define VkglTestCase_010666_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010666_2 "evel_array.std140.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010666, VkglTestCase_010666_1, VkglTestCase_010666_2);

#define VkglTestCase_010667_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010667_2 "_level_array.std140.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010667, VkglTestCase_010667_1, VkglTestCase_010667_2);

#define VkglTestCase_010668_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010668_2 "_array.std140.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010668, VkglTestCase_010668_1, VkglTestCase_010668_2);

#define VkglTestCase_010669_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010669_2 "array.std140.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010669, VkglTestCase_010669_1, VkglTestCase_010669_2);

#define VkglTestCase_010670_1 "dEQP-GLES31.functional.ubo.2_leve"
#define VkglTestCase_010670_2 "l_array.std140.row_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010670, VkglTestCase_010670_1, VkglTestCase_010670_2);

#define VkglTestCase_010671_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010671_2 "rray.std140.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010671, VkglTestCase_010671_1, VkglTestCase_010671_2);

#define VkglTestCase_010672_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010672_2 "ray.std140.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010672, VkglTestCase_010672_1, VkglTestCase_010672_2);

#define VkglTestCase_010673_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010673_2 "array.std140.column_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010673, VkglTestCase_010673_1, VkglTestCase_010673_2);

#define VkglTestCase_010674_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010674_2 "level_array.std140.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010674, VkglTestCase_010674_1, VkglTestCase_010674_2);

#define VkglTestCase_010675_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010675_2 "evel_array.std140.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010675, VkglTestCase_010675_1, VkglTestCase_010675_2);

#define VkglTestCase_010676_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010676_2 "_level_array.std140.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010676, VkglTestCase_010676_1, VkglTestCase_010676_2);

#define VkglTestCase_010677_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010677_2 "_array.std140.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010677, VkglTestCase_010677_1, VkglTestCase_010677_2);

#define VkglTestCase_010678_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010678_2 "array.std140.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010678, VkglTestCase_010678_1, VkglTestCase_010678_2);

#define VkglTestCase_010679_1 "dEQP-GLES31.functional.ubo.2_leve"
#define VkglTestCase_010679_2 "l_array.std140.row_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010679, VkglTestCase_010679_1, VkglTestCase_010679_2);

#define VkglTestCase_010680_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010680_2 "rray.std140.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010680, VkglTestCase_010680_1, VkglTestCase_010680_2);

#define VkglTestCase_010681_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010681_2 "ray.std140.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010681, VkglTestCase_010681_1, VkglTestCase_010681_2);

#define VkglTestCase_010682_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010682_2 "array.std140.column_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010682, VkglTestCase_010682_1, VkglTestCase_010682_2);

#define VkglTestCase_010683_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010683_2 "evel_array.std140.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010683, VkglTestCase_010683_1, VkglTestCase_010683_2);

#define VkglTestCase_010684_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010684_2 "vel_array.std140.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010684, VkglTestCase_010684_1, VkglTestCase_010684_2);

#define VkglTestCase_010685_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010685_2 "level_array.std140.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010685, VkglTestCase_010685_1, VkglTestCase_010685_2);

#define VkglTestCase_010686_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010686_2 "array.std140.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010686, VkglTestCase_010686_1, VkglTestCase_010686_2);

#define VkglTestCase_010687_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010687_2 "rray.std140.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010687, VkglTestCase_010687_1, VkglTestCase_010687_2);

#define VkglTestCase_010688_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010688_2 "_array.std140.row_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010688, VkglTestCase_010688_1, VkglTestCase_010688_2);

#define VkglTestCase_010689_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010689_2 "ray.std140.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010689, VkglTestCase_010689_1, VkglTestCase_010689_2);

#define VkglTestCase_010690_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010690_2 "ay.std140.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010690, VkglTestCase_010690_1, VkglTestCase_010690_2);

#define VkglTestCase_010691_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010691_2 "rray.std140.column_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010691, VkglTestCase_010691_1, VkglTestCase_010691_2);

#define VkglTestCase_010692_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010692_2 "evel_array.std140.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010692, VkglTestCase_010692_1, VkglTestCase_010692_2);

#define VkglTestCase_010693_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010693_2 "vel_array.std140.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010693, VkglTestCase_010693_1, VkglTestCase_010693_2);

#define VkglTestCase_010694_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010694_2 "level_array.std140.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010694, VkglTestCase_010694_1, VkglTestCase_010694_2);

#define VkglTestCase_010695_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010695_2 "array.std140.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010695, VkglTestCase_010695_1, VkglTestCase_010695_2);

#define VkglTestCase_010696_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010696_2 "rray.std140.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010696, VkglTestCase_010696_1, VkglTestCase_010696_2);

#define VkglTestCase_010697_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010697_2 "_array.std140.row_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010697, VkglTestCase_010697_1, VkglTestCase_010697_2);

#define VkglTestCase_010698_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010698_2 "ray.std140.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010698, VkglTestCase_010698_1, VkglTestCase_010698_2);

#define VkglTestCase_010699_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010699_2 "ay.std140.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010699, VkglTestCase_010699_1, VkglTestCase_010699_2);

#define VkglTestCase_010700_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010700_2 "rray.std140.column_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010700, VkglTestCase_010700_1, VkglTestCase_010700_2);

#define VkglTestCase_010701_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010701_2 "evel_array.std140.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010701, VkglTestCase_010701_1, VkglTestCase_010701_2);

#define VkglTestCase_010702_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010702_2 "vel_array.std140.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010702, VkglTestCase_010702_1, VkglTestCase_010702_2);

#define VkglTestCase_010703_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010703_2 "level_array.std140.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010703, VkglTestCase_010703_1, VkglTestCase_010703_2);

#define VkglTestCase_010704_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010704_2 "array.std140.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010704, VkglTestCase_010704_1, VkglTestCase_010704_2);

#define VkglTestCase_010705_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010705_2 "rray.std140.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010705, VkglTestCase_010705_1, VkglTestCase_010705_2);

#define VkglTestCase_010706_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010706_2 "_array.std140.row_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010706, VkglTestCase_010706_1, VkglTestCase_010706_2);

#define VkglTestCase_010707_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010707_2 "ray.std140.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010707, VkglTestCase_010707_1, VkglTestCase_010707_2);

#define VkglTestCase_010708_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010708_2 "ay.std140.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010708, VkglTestCase_010708_1, VkglTestCase_010708_2);

#define VkglTestCase_010709_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010709_2 "rray.std140.column_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010709, VkglTestCase_010709_1, VkglTestCase_010709_2);

#define VkglTestCase_010710_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010710_2 "evel_array.std140.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010710, VkglTestCase_010710_1, VkglTestCase_010710_2);

#define VkglTestCase_010711_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010711_2 "vel_array.std140.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010711, VkglTestCase_010711_1, VkglTestCase_010711_2);

#define VkglTestCase_010712_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010712_2 "level_array.std140.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010712, VkglTestCase_010712_1, VkglTestCase_010712_2);

#define VkglTestCase_010713_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010713_2 "array.std140.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010713, VkglTestCase_010713_1, VkglTestCase_010713_2);

#define VkglTestCase_010714_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010714_2 "rray.std140.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010714, VkglTestCase_010714_1, VkglTestCase_010714_2);

#define VkglTestCase_010715_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010715_2 "_array.std140.row_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010715, VkglTestCase_010715_1, VkglTestCase_010715_2);

#define VkglTestCase_010716_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010716_2 "ray.std140.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010716, VkglTestCase_010716_1, VkglTestCase_010716_2);

#define VkglTestCase_010717_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010717_2 "ay.std140.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010717, VkglTestCase_010717_1, VkglTestCase_010717_2);

#define VkglTestCase_010718_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010718_2 "rray.std140.column_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010718, VkglTestCase_010718_1, VkglTestCase_010718_2);

#define VkglTestCase_010719_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010719_2 "evel_array.std140.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010719, VkglTestCase_010719_1, VkglTestCase_010719_2);

#define VkglTestCase_010720_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010720_2 "vel_array.std140.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010720, VkglTestCase_010720_1, VkglTestCase_010720_2);

#define VkglTestCase_010721_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010721_2 "level_array.std140.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010721, VkglTestCase_010721_1, VkglTestCase_010721_2);

#define VkglTestCase_010722_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010722_2 "array.std140.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010722, VkglTestCase_010722_1, VkglTestCase_010722_2);

#define VkglTestCase_010723_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010723_2 "rray.std140.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010723, VkglTestCase_010723_1, VkglTestCase_010723_2);

#define VkglTestCase_010724_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010724_2 "_array.std140.row_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010724, VkglTestCase_010724_1, VkglTestCase_010724_2);

#define VkglTestCase_010725_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010725_2 "ray.std140.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010725, VkglTestCase_010725_1, VkglTestCase_010725_2);

#define VkglTestCase_010726_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010726_2 "ay.std140.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010726, VkglTestCase_010726_1, VkglTestCase_010726_2);

#define VkglTestCase_010727_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010727_2 "rray.std140.column_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010727, VkglTestCase_010727_1, VkglTestCase_010727_2);

#define VkglTestCase_010728_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010728_2 "evel_array.std140.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010728, VkglTestCase_010728_1, VkglTestCase_010728_2);

#define VkglTestCase_010729_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010729_2 "vel_array.std140.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010729, VkglTestCase_010729_1, VkglTestCase_010729_2);

#define VkglTestCase_010730_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010730_2 "level_array.std140.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010730, VkglTestCase_010730_1, VkglTestCase_010730_2);

#define VkglTestCase_010731_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010731_2 "array.std140.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010731, VkglTestCase_010731_1, VkglTestCase_010731_2);

#define VkglTestCase_010732_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010732_2 "rray.std140.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010732, VkglTestCase_010732_1, VkglTestCase_010732_2);

#define VkglTestCase_010733_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010733_2 "_array.std140.row_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010733, VkglTestCase_010733_1, VkglTestCase_010733_2);

#define VkglTestCase_010734_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010734_2 "ray.std140.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010734, VkglTestCase_010734_1, VkglTestCase_010734_2);

#define VkglTestCase_010735_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010735_2 "ay.std140.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010735, VkglTestCase_010735_1, VkglTestCase_010735_2);

#define VkglTestCase_010736_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010736_2 "rray.std140.column_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010736, VkglTestCase_010736_1, VkglTestCase_010736_2);
