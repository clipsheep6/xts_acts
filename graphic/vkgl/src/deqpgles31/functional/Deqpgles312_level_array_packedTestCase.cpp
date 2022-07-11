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

#define VkglTestCase_009203_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009203_2 "yout.2_level_array.packed.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009203, VkglTestCase_009203_1, VkglTestCase_009203_2);

#define VkglTestCase_009204_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009204_2 "yout.2_level_array.packed.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009204, VkglTestCase_009204_1, VkglTestCase_009204_2);

#define VkglTestCase_009205_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009205_2 "yout.2_level_array.packed.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009205, VkglTestCase_009205_1, VkglTestCase_009205_2);

#define VkglTestCase_009206_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009206_2 "yout.2_level_array.packed.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009206, VkglTestCase_009206_1, VkglTestCase_009206_2);

#define VkglTestCase_009207_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_009207_2 "ayout.2_level_array.packed.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009207, VkglTestCase_009207_1, VkglTestCase_009207_2);

#define VkglTestCase_009208_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009208_2 "yout.2_level_array.packed.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009208, VkglTestCase_009208_1, VkglTestCase_009208_2);

#define VkglTestCase_009209_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009209_2 "yout.2_level_array.packed.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009209, VkglTestCase_009209_1, VkglTestCase_009209_2);

#define VkglTestCase_009210_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009210_2 "yout.2_level_array.packed.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009210, VkglTestCase_009210_1, VkglTestCase_009210_2);

#define VkglTestCase_009211_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009211_2 "yout.2_level_array.packed.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009211, VkglTestCase_009211_1, VkglTestCase_009211_2);

#define VkglTestCase_009212_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009212_2 "yout.2_level_array.packed.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009212, VkglTestCase_009212_1, VkglTestCase_009212_2);

#define VkglTestCase_009213_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009213_2 "yout.2_level_array.packed.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009213, VkglTestCase_009213_1, VkglTestCase_009213_2);

#define VkglTestCase_009214_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009214_2 "yout.2_level_array.packed.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009214, VkglTestCase_009214_1, VkglTestCase_009214_2);

#define VkglTestCase_009215_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009215_2 "yout.2_level_array.packed.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009215, VkglTestCase_009215_1, VkglTestCase_009215_2);

#define VkglTestCase_009216_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009216_2 "yout.2_level_array.packed.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009216, VkglTestCase_009216_1, VkglTestCase_009216_2);

#define VkglTestCase_009217_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009217_2 "yout.2_level_array.packed.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009217, VkglTestCase_009217_1, VkglTestCase_009217_2);

#define VkglTestCase_009218_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009218_2 "yout.2_level_array.packed.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009218, VkglTestCase_009218_1, VkglTestCase_009218_2);

#define VkglTestCase_009219_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009219_2 "yout.2_level_array.packed.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009219, VkglTestCase_009219_1, VkglTestCase_009219_2);

#define VkglTestCase_009220_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009220_2 "2_level_array.packed.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009220, VkglTestCase_009220_1, VkglTestCase_009220_2);

#define VkglTestCase_009221_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009221_2 "_level_array.packed.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009221, VkglTestCase_009221_1, VkglTestCase_009221_2);

#define VkglTestCase_009222_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009222_2 "yout.2_level_array.packed.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009222, VkglTestCase_009222_1, VkglTestCase_009222_2);

#define VkglTestCase_009223_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009223_2 "2_level_array.packed.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009223, VkglTestCase_009223_1, VkglTestCase_009223_2);

#define VkglTestCase_009224_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009224_2 "_level_array.packed.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009224, VkglTestCase_009224_1, VkglTestCase_009224_2);

#define VkglTestCase_009225_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009225_2 "yout.2_level_array.packed.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009225, VkglTestCase_009225_1, VkglTestCase_009225_2);

#define VkglTestCase_009226_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009226_2 "2_level_array.packed.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009226, VkglTestCase_009226_1, VkglTestCase_009226_2);

#define VkglTestCase_009227_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009227_2 "_level_array.packed.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009227, VkglTestCase_009227_1, VkglTestCase_009227_2);

#define VkglTestCase_009228_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009228_2 "out.2_level_array.packed.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009228, VkglTestCase_009228_1, VkglTestCase_009228_2);

#define VkglTestCase_009229_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009229_2 "_level_array.packed.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009229, VkglTestCase_009229_1, VkglTestCase_009229_2);

#define VkglTestCase_009230_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009230_2 "level_array.packed.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009230, VkglTestCase_009230_1, VkglTestCase_009230_2);

#define VkglTestCase_009231_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009231_2 "out.2_level_array.packed.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009231, VkglTestCase_009231_1, VkglTestCase_009231_2);

#define VkglTestCase_009232_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009232_2 "_level_array.packed.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009232, VkglTestCase_009232_1, VkglTestCase_009232_2);

#define VkglTestCase_009233_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009233_2 "level_array.packed.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009233, VkglTestCase_009233_1, VkglTestCase_009233_2);

#define VkglTestCase_009234_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009234_2 "out.2_level_array.packed.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009234, VkglTestCase_009234_1, VkglTestCase_009234_2);

#define VkglTestCase_009235_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009235_2 "_level_array.packed.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009235, VkglTestCase_009235_1, VkglTestCase_009235_2);

#define VkglTestCase_009236_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009236_2 "level_array.packed.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009236, VkglTestCase_009236_1, VkglTestCase_009236_2);

#define VkglTestCase_009237_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009237_2 "out.2_level_array.packed.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009237, VkglTestCase_009237_1, VkglTestCase_009237_2);

#define VkglTestCase_009238_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009238_2 "_level_array.packed.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009238, VkglTestCase_009238_1, VkglTestCase_009238_2);

#define VkglTestCase_009239_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009239_2 "level_array.packed.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009239, VkglTestCase_009239_1, VkglTestCase_009239_2);

#define VkglTestCase_009240_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009240_2 "out.2_level_array.packed.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009240, VkglTestCase_009240_1, VkglTestCase_009240_2);

#define VkglTestCase_009241_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009241_2 "_level_array.packed.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009241, VkglTestCase_009241_1, VkglTestCase_009241_2);

#define VkglTestCase_009242_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009242_2 "level_array.packed.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009242, VkglTestCase_009242_1, VkglTestCase_009242_2);

#define VkglTestCase_009243_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009243_2 "out.2_level_array.packed.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009243, VkglTestCase_009243_1, VkglTestCase_009243_2);

#define VkglTestCase_009244_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009244_2 "_level_array.packed.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009244, VkglTestCase_009244_1, VkglTestCase_009244_2);

#define VkglTestCase_009245_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009245_2 "level_array.packed.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009245, VkglTestCase_009245_1, VkglTestCase_009245_2);

#define VkglTestCase_010522_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010522_2 "evel_array.packed.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010522, VkglTestCase_010522_1, VkglTestCase_010522_2);

#define VkglTestCase_010523_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010523_2 "vel_array.packed.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010523, VkglTestCase_010523_1, VkglTestCase_010523_2);

#define VkglTestCase_010524_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010524_2 "level_array.packed.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010524, VkglTestCase_010524_1, VkglTestCase_010524_2);

#define VkglTestCase_010525_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010525_2 "evel_array.packed.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010525, VkglTestCase_010525_1, VkglTestCase_010525_2);

#define VkglTestCase_010526_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010526_2 "level_array.packed.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010526, VkglTestCase_010526_1, VkglTestCase_010526_2);

#define VkglTestCase_010527_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010527_2 "evel_array.packed.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010527, VkglTestCase_010527_1, VkglTestCase_010527_2);

#define VkglTestCase_010528_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010528_2 "level_array.packed.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010528, VkglTestCase_010528_1, VkglTestCase_010528_2);

#define VkglTestCase_010529_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010529_2 "evel_array.packed.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010529, VkglTestCase_010529_1, VkglTestCase_010529_2);

#define VkglTestCase_010530_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010530_2 "level_array.packed.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010530, VkglTestCase_010530_1, VkglTestCase_010530_2);

#define VkglTestCase_010531_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010531_2 "evel_array.packed.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010531, VkglTestCase_010531_1, VkglTestCase_010531_2);

#define VkglTestCase_010532_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010532_2 "evel_array.packed.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010532, VkglTestCase_010532_1, VkglTestCase_010532_2);

#define VkglTestCase_010533_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010533_2 "vel_array.packed.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010533, VkglTestCase_010533_1, VkglTestCase_010533_2);

#define VkglTestCase_010534_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010534_2 "evel_array.packed.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010534, VkglTestCase_010534_1, VkglTestCase_010534_2);

#define VkglTestCase_010535_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010535_2 "vel_array.packed.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010535, VkglTestCase_010535_1, VkglTestCase_010535_2);

#define VkglTestCase_010536_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010536_2 "evel_array.packed.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010536, VkglTestCase_010536_1, VkglTestCase_010536_2);

#define VkglTestCase_010537_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010537_2 "vel_array.packed.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010537, VkglTestCase_010537_1, VkglTestCase_010537_2);

#define VkglTestCase_010538_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010538_2 "level_array.packed.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010538, VkglTestCase_010538_1, VkglTestCase_010538_2);

#define VkglTestCase_010539_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010539_2 "evel_array.packed.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010539, VkglTestCase_010539_1, VkglTestCase_010539_2);

#define VkglTestCase_010540_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010540_2 "evel_array.packed.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010540, VkglTestCase_010540_1, VkglTestCase_010540_2);

#define VkglTestCase_010541_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010541_2 "vel_array.packed.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010541, VkglTestCase_010541_1, VkglTestCase_010541_2);

#define VkglTestCase_010542_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010542_2 "evel_array.packed.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010542, VkglTestCase_010542_1, VkglTestCase_010542_2);

#define VkglTestCase_010543_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010543_2 "vel_array.packed.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010543, VkglTestCase_010543_1, VkglTestCase_010543_2);

#define VkglTestCase_010544_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010544_2 "evel_array.packed.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010544, VkglTestCase_010544_1, VkglTestCase_010544_2);

#define VkglTestCase_010545_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010545_2 "vel_array.packed.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010545, VkglTestCase_010545_1, VkglTestCase_010545_2);

#define VkglTestCase_010546_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010546_2 "level_array.packed.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010546, VkglTestCase_010546_1, VkglTestCase_010546_2);

#define VkglTestCase_010547_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010547_2 "evel_array.packed.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010547, VkglTestCase_010547_1, VkglTestCase_010547_2);

#define VkglTestCase_010548_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010548_2 "evel_array.packed.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010548, VkglTestCase_010548_1, VkglTestCase_010548_2);

#define VkglTestCase_010549_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010549_2 "vel_array.packed.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010549, VkglTestCase_010549_1, VkglTestCase_010549_2);

#define VkglTestCase_010550_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010550_2 "evel_array.packed.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010550, VkglTestCase_010550_1, VkglTestCase_010550_2);

#define VkglTestCase_010551_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010551_2 "vel_array.packed.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010551, VkglTestCase_010551_1, VkglTestCase_010551_2);

#define VkglTestCase_010552_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010552_2 "evel_array.packed.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010552, VkglTestCase_010552_1, VkglTestCase_010552_2);

#define VkglTestCase_010553_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010553_2 "vel_array.packed.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010553, VkglTestCase_010553_1, VkglTestCase_010553_2);

#define VkglTestCase_010554_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010554_2 "level_array.packed.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010554, VkglTestCase_010554_1, VkglTestCase_010554_2);

#define VkglTestCase_010555_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010555_2 "evel_array.packed.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010555, VkglTestCase_010555_1, VkglTestCase_010555_2);

#define VkglTestCase_010556_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010556_2 "_array.packed.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010556, VkglTestCase_010556_1, VkglTestCase_010556_2);

#define VkglTestCase_010557_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010557_2 "array.packed.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010557, VkglTestCase_010557_1, VkglTestCase_010557_2);

#define VkglTestCase_010558_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010558_2 "rray.packed.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010558, VkglTestCase_010558_1, VkglTestCase_010558_2);

#define VkglTestCase_010559_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010559_2 "ray.packed.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010559, VkglTestCase_010559_1, VkglTestCase_010559_2);

#define VkglTestCase_010560_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010560_2 "level_array.packed.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010560, VkglTestCase_010560_1, VkglTestCase_010560_2);

#define VkglTestCase_010561_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010561_2 "evel_array.packed.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010561, VkglTestCase_010561_1, VkglTestCase_010561_2);

#define VkglTestCase_010562_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010562_2 "_array.packed.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010562, VkglTestCase_010562_1, VkglTestCase_010562_2);

#define VkglTestCase_010563_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010563_2 "array.packed.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010563, VkglTestCase_010563_1, VkglTestCase_010563_2);

#define VkglTestCase_010564_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010564_2 "rray.packed.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010564, VkglTestCase_010564_1, VkglTestCase_010564_2);

#define VkglTestCase_010565_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010565_2 "ray.packed.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010565, VkglTestCase_010565_1, VkglTestCase_010565_2);

#define VkglTestCase_010566_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010566_2 "level_array.packed.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010566, VkglTestCase_010566_1, VkglTestCase_010566_2);

#define VkglTestCase_010567_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010567_2 "evel_array.packed.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010567, VkglTestCase_010567_1, VkglTestCase_010567_2);

#define VkglTestCase_010568_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010568_2 "_array.packed.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010568, VkglTestCase_010568_1, VkglTestCase_010568_2);

#define VkglTestCase_010569_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010569_2 "array.packed.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010569, VkglTestCase_010569_1, VkglTestCase_010569_2);

#define VkglTestCase_010570_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010570_2 "rray.packed.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010570, VkglTestCase_010570_1, VkglTestCase_010570_2);

#define VkglTestCase_010571_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010571_2 "ray.packed.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010571, VkglTestCase_010571_1, VkglTestCase_010571_2);

#define VkglTestCase_010572_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010572_2 "evel_array.packed.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010572, VkglTestCase_010572_1, VkglTestCase_010572_2);

#define VkglTestCase_010573_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010573_2 "vel_array.packed.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010573, VkglTestCase_010573_1, VkglTestCase_010573_2);

#define VkglTestCase_010574_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010574_2 "array.packed.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010574, VkglTestCase_010574_1, VkglTestCase_010574_2);

#define VkglTestCase_010575_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010575_2 "rray.packed.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010575, VkglTestCase_010575_1, VkglTestCase_010575_2);

#define VkglTestCase_010576_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010576_2 "ray.packed.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010576, VkglTestCase_010576_1, VkglTestCase_010576_2);

#define VkglTestCase_010577_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010577_2 "ay.packed.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010577, VkglTestCase_010577_1, VkglTestCase_010577_2);

#define VkglTestCase_010578_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010578_2 "evel_array.packed.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010578, VkglTestCase_010578_1, VkglTestCase_010578_2);

#define VkglTestCase_010579_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010579_2 "vel_array.packed.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010579, VkglTestCase_010579_1, VkglTestCase_010579_2);

#define VkglTestCase_010580_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010580_2 "array.packed.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010580, VkglTestCase_010580_1, VkglTestCase_010580_2);

#define VkglTestCase_010581_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010581_2 "rray.packed.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010581, VkglTestCase_010581_1, VkglTestCase_010581_2);

#define VkglTestCase_010582_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010582_2 "ray.packed.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010582, VkglTestCase_010582_1, VkglTestCase_010582_2);

#define VkglTestCase_010583_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010583_2 "ay.packed.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010583, VkglTestCase_010583_1, VkglTestCase_010583_2);

#define VkglTestCase_010584_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010584_2 "evel_array.packed.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010584, VkglTestCase_010584_1, VkglTestCase_010584_2);

#define VkglTestCase_010585_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010585_2 "vel_array.packed.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010585, VkglTestCase_010585_1, VkglTestCase_010585_2);

#define VkglTestCase_010586_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010586_2 "array.packed.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010586, VkglTestCase_010586_1, VkglTestCase_010586_2);

#define VkglTestCase_010587_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010587_2 "rray.packed.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010587, VkglTestCase_010587_1, VkglTestCase_010587_2);

#define VkglTestCase_010588_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010588_2 "ray.packed.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010588, VkglTestCase_010588_1, VkglTestCase_010588_2);

#define VkglTestCase_010589_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010589_2 "ay.packed.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010589, VkglTestCase_010589_1, VkglTestCase_010589_2);

#define VkglTestCase_010590_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010590_2 "evel_array.packed.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010590, VkglTestCase_010590_1, VkglTestCase_010590_2);

#define VkglTestCase_010591_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010591_2 "vel_array.packed.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010591, VkglTestCase_010591_1, VkglTestCase_010591_2);

#define VkglTestCase_010592_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010592_2 "array.packed.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010592, VkglTestCase_010592_1, VkglTestCase_010592_2);

#define VkglTestCase_010593_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010593_2 "rray.packed.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010593, VkglTestCase_010593_1, VkglTestCase_010593_2);

#define VkglTestCase_010594_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010594_2 "ray.packed.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010594, VkglTestCase_010594_1, VkglTestCase_010594_2);

#define VkglTestCase_010595_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010595_2 "ay.packed.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010595, VkglTestCase_010595_1, VkglTestCase_010595_2);

#define VkglTestCase_010596_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010596_2 "evel_array.packed.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010596, VkglTestCase_010596_1, VkglTestCase_010596_2);

#define VkglTestCase_010597_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010597_2 "vel_array.packed.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010597, VkglTestCase_010597_1, VkglTestCase_010597_2);

#define VkglTestCase_010598_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010598_2 "array.packed.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010598, VkglTestCase_010598_1, VkglTestCase_010598_2);

#define VkglTestCase_010599_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010599_2 "rray.packed.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010599, VkglTestCase_010599_1, VkglTestCase_010599_2);

#define VkglTestCase_010600_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010600_2 "ray.packed.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010600, VkglTestCase_010600_1, VkglTestCase_010600_2);

#define VkglTestCase_010601_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010601_2 "ay.packed.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010601, VkglTestCase_010601_1, VkglTestCase_010601_2);

#define VkglTestCase_010602_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010602_2 "evel_array.packed.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010602, VkglTestCase_010602_1, VkglTestCase_010602_2);

#define VkglTestCase_010603_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010603_2 "vel_array.packed.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010603, VkglTestCase_010603_1, VkglTestCase_010603_2);

#define VkglTestCase_010604_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010604_2 "array.packed.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010604, VkglTestCase_010604_1, VkglTestCase_010604_2);

#define VkglTestCase_010605_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010605_2 "rray.packed.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010605, VkglTestCase_010605_1, VkglTestCase_010605_2);

#define VkglTestCase_010606_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010606_2 "ray.packed.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010606, VkglTestCase_010606_1, VkglTestCase_010606_2);

#define VkglTestCase_010607_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010607_2 "ay.packed.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010607, VkglTestCase_010607_1, VkglTestCase_010607_2);
