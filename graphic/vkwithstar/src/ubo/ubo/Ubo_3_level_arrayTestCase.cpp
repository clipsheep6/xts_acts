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
#include "../UboBaseFunc.h"
#include "../ActsUbo0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000190, "dEQP-VK.ubo.3_level_array.std140.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000191, "dEQP-VK.ubo.3_level_array.std140.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000192, "dEQP-VK.ubo.3_level_array.std140.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000193, "dEQP-VK.ubo.3_level_array.std140.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000194, "dEQP-VK.ubo.3_level_array.std140.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000195, "dEQP-VK.ubo.3_level_array.std140.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000196, "dEQP-VK.ubo.3_level_array.std140.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000197, "dEQP-VK.ubo.3_level_array.std140.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000198, "dEQP-VK.ubo.3_level_array.std140.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000199, "dEQP-VK.ubo.3_level_array.std140.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000200, "dEQP-VK.ubo.3_level_array.std140.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000201, "dEQP-VK.ubo.3_level_array.std140.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000202, "dEQP-VK.ubo.3_level_array.std140.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000203, "dEQP-VK.ubo.3_level_array.std140.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000204, "dEQP-VK.ubo.3_level_array.std140.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000205, "dEQP-VK.ubo.3_level_array.std140.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000206, "dEQP-VK.ubo.3_level_array.std140.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000207, "dEQP-VK.ubo.3_level_array.std140.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000208, "dEQP-VK.ubo.3_level_array.std140.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000209, "dEQP-VK.ubo.3_level_array.std140.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000210, "dEQP-VK.ubo.3_level_array.std140.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000211, "dEQP-VK.ubo.3_level_array.std140.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000212, "dEQP-VK.ubo.3_level_array.std140.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000213, "dEQP-VK.ubo.3_level_array.std140.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000214, "dEQP-VK.ubo.3_level_array.std140.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000215, "dEQP-VK.ubo.3_level_array.std140.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000216, "dEQP-VK.ubo.3_level_array.std140.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000217, "dEQP-VK.ubo.3_level_array.std140.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000218, "dEQP-VK.ubo.3_level_array.std140.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000219, "dEQP-VK.ubo.3_level_array.std140.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000220, "dEQP-VK.ubo.3_level_array.std140.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000221, "dEQP-VK.ubo.3_level_array.std140.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000222, "dEQP-VK.ubo.3_level_array.std140.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000223, "dEQP-VK.ubo.3_level_array.std140.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000224, "dEQP-VK.ubo.3_level_array.std140.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000225, "dEQP-VK.ubo.3_level_array.std140.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000226, "dEQP-VK.ubo.3_level_array.std140.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000227, "dEQP-VK.ubo.3_level_array.std140.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000228, "dEQP-VK.ubo.3_level_array.std140.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000229, "dEQP-VK.ubo.3_level_array.std140.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000230, "dEQP-VK.ubo.3_level_array.std140.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000231, "dEQP-VK.ubo.3_level_array.std140.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000232, "dEQP-VK.ubo.3_level_array.std140.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000233, "dEQP-VK.ubo.3_level_array.std140.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000234, "dEQP-VK.ubo.3_level_array.std140.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000235, "dEQP-VK.ubo.3_level_array.std140.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000236, "dEQP-VK.ubo.3_level_array.std140.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000237, "dEQP-VK.ubo.3_level_array.std140.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000238, "dEQP-VK.ubo.3_level_array.std140.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000239, "dEQP-VK.ubo.3_level_array.std140.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000240, "dEQP-VK.ubo.3_level_array.std140.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000241, "dEQP-VK.ubo.3_level_array.std140.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000242, "dEQP-VK.ubo.3_level_array.std140.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000243, "dEQP-VK.ubo.3_level_array.std140.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000244, "dEQP-VK.ubo.3_level_array.std140.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000245, "dEQP-VK.ubo.3_level_array.std140.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000246, "dEQP-VK.ubo.3_level_array.std140.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000247, "dEQP-VK.ubo.3_level_array.std140.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000248, "dEQP-VK.ubo.3_level_array.std140.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000249, "dEQP-VK.ubo.3_level_array.std140.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000250, "dEQP-VK.ubo.3_level_array.std140.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000251, "dEQP-VK.ubo.3_level_array.std140.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000252, "dEQP-VK.ubo.3_level_array.std140.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000253, "dEQP-VK.ubo.3_level_array.std430.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000254, "dEQP-VK.ubo.3_level_array.std430.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000255, "dEQP-VK.ubo.3_level_array.std430.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000256, "dEQP-VK.ubo.3_level_array.std430.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000257, "dEQP-VK.ubo.3_level_array.std430.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000258, "dEQP-VK.ubo.3_level_array.std430.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000259, "dEQP-VK.ubo.3_level_array.std430.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000260, "dEQP-VK.ubo.3_level_array.std430.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000261, "dEQP-VK.ubo.3_level_array.std430.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000262, "dEQP-VK.ubo.3_level_array.std430.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000263, "dEQP-VK.ubo.3_level_array.std430.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000264, "dEQP-VK.ubo.3_level_array.std430.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000265, "dEQP-VK.ubo.3_level_array.std430.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000266, "dEQP-VK.ubo.3_level_array.std430.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000267, "dEQP-VK.ubo.3_level_array.std430.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000268, "dEQP-VK.ubo.3_level_array.std430.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000269, "dEQP-VK.ubo.3_level_array.std430.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000270, "dEQP-VK.ubo.3_level_array.std430.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000271, "dEQP-VK.ubo.3_level_array.std430.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000272, "dEQP-VK.ubo.3_level_array.std430.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000273, "dEQP-VK.ubo.3_level_array.std430.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000274, "dEQP-VK.ubo.3_level_array.std430.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000275, "dEQP-VK.ubo.3_level_array.std430.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000276, "dEQP-VK.ubo.3_level_array.std430.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000277, "dEQP-VK.ubo.3_level_array.std430.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000278, "dEQP-VK.ubo.3_level_array.std430.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000279, "dEQP-VK.ubo.3_level_array.std430.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000280, "dEQP-VK.ubo.3_level_array.std430.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000281, "dEQP-VK.ubo.3_level_array.std430.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000282, "dEQP-VK.ubo.3_level_array.std430.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000283, "dEQP-VK.ubo.3_level_array.std430.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000284, "dEQP-VK.ubo.3_level_array.std430.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000285, "dEQP-VK.ubo.3_level_array.std430.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000286, "dEQP-VK.ubo.3_level_array.std430.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000287, "dEQP-VK.ubo.3_level_array.std430.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000288, "dEQP-VK.ubo.3_level_array.std430.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000289, "dEQP-VK.ubo.3_level_array.std430.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000290, "dEQP-VK.ubo.3_level_array.std430.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000291, "dEQP-VK.ubo.3_level_array.std430.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000292, "dEQP-VK.ubo.3_level_array.std430.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000293, "dEQP-VK.ubo.3_level_array.std430.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000294, "dEQP-VK.ubo.3_level_array.std430.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000295, "dEQP-VK.ubo.3_level_array.std430.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000296, "dEQP-VK.ubo.3_level_array.std430.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000297, "dEQP-VK.ubo.3_level_array.std430.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000298, "dEQP-VK.ubo.3_level_array.std430.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000299, "dEQP-VK.ubo.3_level_array.std430.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000300, "dEQP-VK.ubo.3_level_array.std430.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000301, "dEQP-VK.ubo.3_level_array.std430.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000302, "dEQP-VK.ubo.3_level_array.std430.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000303, "dEQP-VK.ubo.3_level_array.std430.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000304, "dEQP-VK.ubo.3_level_array.std430.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000305, "dEQP-VK.ubo.3_level_array.std430.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000306, "dEQP-VK.ubo.3_level_array.std430.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000307, "dEQP-VK.ubo.3_level_array.std430.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000308, "dEQP-VK.ubo.3_level_array.std430.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000309, "dEQP-VK.ubo.3_level_array.std430.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000310, "dEQP-VK.ubo.3_level_array.std430.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000311, "dEQP-VK.ubo.3_level_array.std430.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000312, "dEQP-VK.ubo.3_level_array.std430.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000313, "dEQP-VK.ubo.3_level_array.std430.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000314, "dEQP-VK.ubo.3_level_array.std430.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000315, "dEQP-VK.ubo.3_level_array.std430.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000316, "dEQP-VK.ubo.3_level_array.scalar.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000317, "dEQP-VK.ubo.3_level_array.scalar.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000318, "dEQP-VK.ubo.3_level_array.scalar.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000319, "dEQP-VK.ubo.3_level_array.scalar.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000320, "dEQP-VK.ubo.3_level_array.scalar.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000321, "dEQP-VK.ubo.3_level_array.scalar.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000322, "dEQP-VK.ubo.3_level_array.scalar.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000323, "dEQP-VK.ubo.3_level_array.scalar.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000324, "dEQP-VK.ubo.3_level_array.scalar.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000325, "dEQP-VK.ubo.3_level_array.scalar.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000326, "dEQP-VK.ubo.3_level_array.scalar.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000327, "dEQP-VK.ubo.3_level_array.scalar.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000328, "dEQP-VK.ubo.3_level_array.scalar.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000329, "dEQP-VK.ubo.3_level_array.scalar.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000330, "dEQP-VK.ubo.3_level_array.scalar.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000331, "dEQP-VK.ubo.3_level_array.scalar.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000332, "dEQP-VK.ubo.3_level_array.scalar.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000333, "dEQP-VK.ubo.3_level_array.scalar.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000334, "dEQP-VK.ubo.3_level_array.scalar.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000335, "dEQP-VK.ubo.3_level_array.scalar.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000336, "dEQP-VK.ubo.3_level_array.scalar.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000337, "dEQP-VK.ubo.3_level_array.scalar.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000338, "dEQP-VK.ubo.3_level_array.scalar.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000339, "dEQP-VK.ubo.3_level_array.scalar.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000340, "dEQP-VK.ubo.3_level_array.scalar.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000341, "dEQP-VK.ubo.3_level_array.scalar.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000342, "dEQP-VK.ubo.3_level_array.scalar.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000343, "dEQP-VK.ubo.3_level_array.scalar.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000344, "dEQP-VK.ubo.3_level_array.scalar.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000345, "dEQP-VK.ubo.3_level_array.scalar.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000346, "dEQP-VK.ubo.3_level_array.scalar.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000347, "dEQP-VK.ubo.3_level_array.scalar.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000348, "dEQP-VK.ubo.3_level_array.scalar.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000349, "dEQP-VK.ubo.3_level_array.scalar.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000350, "dEQP-VK.ubo.3_level_array.scalar.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000351, "dEQP-VK.ubo.3_level_array.scalar.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000352, "dEQP-VK.ubo.3_level_array.scalar.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000353, "dEQP-VK.ubo.3_level_array.scalar.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000354, "dEQP-VK.ubo.3_level_array.scalar.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000355, "dEQP-VK.ubo.3_level_array.scalar.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000356, "dEQP-VK.ubo.3_level_array.scalar.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000357, "dEQP-VK.ubo.3_level_array.scalar.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000358, "dEQP-VK.ubo.3_level_array.scalar.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000359, "dEQP-VK.ubo.3_level_array.scalar.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000360, "dEQP-VK.ubo.3_level_array.scalar.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000361, "dEQP-VK.ubo.3_level_array.scalar.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000362, "dEQP-VK.ubo.3_level_array.scalar.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000363, "dEQP-VK.ubo.3_level_array.scalar.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000364, "dEQP-VK.ubo.3_level_array.scalar.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000365, "dEQP-VK.ubo.3_level_array.scalar.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000366, "dEQP-VK.ubo.3_level_array.scalar.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000367, "dEQP-VK.ubo.3_level_array.scalar.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000368, "dEQP-VK.ubo.3_level_array.scalar.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000369, "dEQP-VK.ubo.3_level_array.scalar.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000370, "dEQP-VK.ubo.3_level_array.scalar.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000371, "dEQP-VK.ubo.3_level_array.scalar.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000372, "dEQP-VK.ubo.3_level_array.scalar.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000373, "dEQP-VK.ubo.3_level_array.scalar.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000374, "dEQP-VK.ubo.3_level_array.scalar.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000375, "dEQP-VK.ubo.3_level_array.scalar.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000376, "dEQP-VK.ubo.3_level_array.scalar.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000377, "dEQP-VK.ubo.3_level_array.scalar.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000378, "dEQP-VK.ubo.3_level_array.scalar.f16vec4.*");
