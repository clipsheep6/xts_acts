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
#include "../SubgroupsBaseFunc.h"
#include "../ActsSubgroups0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000546, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000547, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000548, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000549, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000550, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000551, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000552, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000553, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000554, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000555, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000556, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000557, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000558, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000559, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000560, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000561, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000562, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000563, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000564, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000565, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000566, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000567, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000568, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000569, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000570, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000571, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000572, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000573, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000574, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000575, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000576, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000577, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000578, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000579, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000580, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000581, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000582, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000583, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000584, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000585, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000586, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000587, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000588, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000589, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000590, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000591, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000592, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000593, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000594, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000595, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000596, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000597, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000598, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000599, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000600, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000601, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000602, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000603, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000604, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000605, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000606, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000607, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000608, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000609, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000610, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000611, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000612, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000613, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000614, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000615, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000616, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000617, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000618, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000619, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000620, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000621, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000622, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000623, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000624, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000625, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000626, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000627, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000628, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000629, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000630, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000631, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000632, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000633, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000634, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000635, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000636, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000637, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000638, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000639, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000640, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000641, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000642, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000643, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000644, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000645, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000646, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000647, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000648, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000649, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000650, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000651, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000652, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000653, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000654, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000655, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000656, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000657, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000658, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000659, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000660, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000661, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000662, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000663, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000664, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000665, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000666, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000667, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000668, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000669, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000670, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000671, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000672, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000673, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000674, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000675, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000676, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000677, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000678, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000679, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000680, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000681, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000682, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000683, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000684, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000685, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000686, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000687, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000688, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcast_nonconst_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000689, "dEQP-VK.subgroups.ballot_broadcast.graphics.subgroupbroadcastfirst_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000690, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000691, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int8_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000692, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int8_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000693, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int8_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000694, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int8_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000695, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int8_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000696, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int8_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000697, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int8_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000698, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int8_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000699, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000700, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int8_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000701, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int8_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000702, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int8_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000703, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int8_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000704, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int8_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000705, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int8_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000706, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int8_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000707, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int8_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000708, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000709, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int8_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000710, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int8_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000711, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int8_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000712, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int8_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000713, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int8_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000714, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int8_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000715, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int8_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000716, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int8_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000717, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000718, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000719, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000720, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000721, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000722, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000723, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000724, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000725, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000726, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000727, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000728, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000729, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000730, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000731, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000732, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000733, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000734, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000735, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000736, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000737, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000738, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000739, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000740, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000741, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000742, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000743, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000744, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000745, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000746, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000747, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000748, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000749, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000750, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000751, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000752, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000753, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000754, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000755, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000756, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000757, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000758, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000759, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000760, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000761, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000762, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000763, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000764, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000765, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000766, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000767, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000768, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000769, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000770, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000771, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000772, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000773, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000774, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000775, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000776, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000777, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000778, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000779, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i8vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000780, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000781, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000782, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000783, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000784, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000785, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000786, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000787, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000788, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i8vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000789, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000790, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000791, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000792, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000793, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000794, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000795, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000796, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000797, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i8vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000798, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000799, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint8_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000800, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint8_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000801, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint8_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000802, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint8_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000803, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint8_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000804, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint8_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000805, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint8_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000806, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint8_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000807, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000808, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint8_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000809, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint8_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000810, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint8_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000811, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint8_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000812, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint8_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000813, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint8_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000814, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint8_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000815, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint8_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000816, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000817, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint8_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000818, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint8_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000819, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint8_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000820, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint8_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000821, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint8_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000822, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint8_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000823, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint8_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000824, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint8_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000825, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000826, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000827, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000828, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000829, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000830, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000831, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000832, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000833, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000834, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000835, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000836, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000837, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000838, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000839, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000840, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000841, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000842, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000843, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000844, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000845, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000846, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000847, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000848, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000849, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000850, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000851, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000852, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000853, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000854, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000855, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000856, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000857, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000858, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000859, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000860, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000861, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000862, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000863, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000864, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000865, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000866, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000867, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000868, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000869, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000870, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000871, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000872, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000873, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000874, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000875, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000876, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000877, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000878, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000879, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000880, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000881, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000882, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000883, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000884, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000885, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000886, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000887, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u8vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000888, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000889, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000890, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000891, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000892, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000893, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000894, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000895, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000896, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u8vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000897, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000898, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000899, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000900, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000901, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000902, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000903, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000904, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000905, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u8vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000906, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000907, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int16_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000908, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int16_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000909, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int16_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000910, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int16_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000911, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int16_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000912, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int16_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000913, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int16_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000914, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int16_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000915, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000916, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int16_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000917, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int16_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000918, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int16_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000919, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int16_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000920, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int16_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000921, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int16_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000922, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int16_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000923, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int16_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000924, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000925, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int16_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000926, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int16_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000927, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int16_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000928, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int16_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000929, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int16_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000930, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int16_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000931, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int16_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000932, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int16_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000933, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000934, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000935, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000936, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000937, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000938, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000939, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000940, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000941, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000942, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000943, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000944, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000945, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000946, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000947, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000948, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000949, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000950, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000951, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000952, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000953, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000954, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000955, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000956, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000957, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000958, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000959, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000960, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000961, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000962, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000963, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000964, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000965, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000966, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000967, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000968, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000969, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000970, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000971, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000972, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000973, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000974, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000975, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000976, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000977, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000978, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000979, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000980, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000981, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000982, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000983, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000984, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000985, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000986, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000987, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000988, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000989, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000990, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000991, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000992, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000993, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000994, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000995, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i16vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000996, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000997, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000998, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000999, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001000, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001001, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001002, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001003, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001004, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i16vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001005, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001006, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001007, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001008, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001009, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001010, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001011, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001012, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001013, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i16vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001014, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001015, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint16_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001016, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint16_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001017, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint16_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001018, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint16_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001019, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint16_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001020, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint16_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001021, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint16_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001022, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint16_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001023, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001024, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint16_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001025, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint16_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001026, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint16_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001027, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint16_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001028, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint16_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001029, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint16_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001030, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint16_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001031, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint16_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001032, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001033, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint16_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001034, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint16_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001035, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint16_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001036, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint16_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001037, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint16_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001038, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint16_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001039, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint16_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001040, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint16_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001041, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001042, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001043, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001044, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001045, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001046, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001047, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001048, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001049, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001050, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001051, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001052, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001053, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001054, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001055, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001056, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001057, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001058, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001059, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001060, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001061, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001062, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001063, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001064, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001065, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001066, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001067, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001068, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001069, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001070, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001071, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001072, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001073, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001074, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001075, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001076, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001077, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001078, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001079, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001080, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001081, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001082, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001083, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001084, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001085, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001086, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001087, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001088, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001089, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001090, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001091, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001092, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001093, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001094, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001095, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001096, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001097, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001098, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001099, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001100, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001101, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001102, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001103, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u16vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001104, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001105, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001106, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001107, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001108, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001109, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001110, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001111, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001112, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u16vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001113, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001114, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001115, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001116, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001117, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001118, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001119, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001120, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001121, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u16vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001122, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001123, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001124, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001125, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001126, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001127, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001128, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001129, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001130, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001131, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001132, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001133, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001134, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001135, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001136, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001137, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001138, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001139, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001140, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001141, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001142, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001143, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001144, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001145, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001146, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001147, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001148, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001149, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001150, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001151, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001152, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001153, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001154, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001155, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001156, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001157, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001158, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001159, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001160, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001161, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001162, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001163, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001164, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001165, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001166, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001167, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001168, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001169, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001170, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001171, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001172, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001173, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001174, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001175, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001176, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001177, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001178, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001179, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001180, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001181, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001182, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001183, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001184, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001185, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001186, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001187, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001188, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001189, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001190, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001191, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001192, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001193, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001194, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001195, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001196, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001197, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001198, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001199, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001200, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001201, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001202, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001203, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001204, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001205, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001206, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001207, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001208, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001209, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001210, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001211, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_ivec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001212, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001213, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001214, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001215, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001216, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001217, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001218, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001219, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001220, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_ivec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001221, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001222, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001223, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001224, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001225, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001226, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001227, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001228, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001229, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_ivec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001230, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001231, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001232, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001233, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001234, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001235, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001236, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001237, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001238, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001239, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001240, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001241, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001242, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001243, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001244, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001245, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001246, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001247, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001248, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001249, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001250, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001251, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001252, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001253, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001254, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001255, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001256, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001257, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001258, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001259, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001260, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001261, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001262, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001263, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001264, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001265, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001266, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001267, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001268, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001269, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001270, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001271, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001272, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001273, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001274, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001275, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001276, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001277, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001278, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001279, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001280, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001281, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001282, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001283, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001284, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001285, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001286, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001287, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001288, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001289, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001290, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001291, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001292, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001293, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001294, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001295, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001296, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001297, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001298, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001299, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001300, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001301, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001302, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001303, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001304, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001305, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001306, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001307, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001308, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001309, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001310, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001311, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001312, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001313, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001314, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001315, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001316, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001317, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001318, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001319, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uvec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001320, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001321, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001322, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001323, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001324, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001325, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001326, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001327, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001328, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uvec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001329, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001330, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001331, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001332, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001333, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001334, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001335, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001336, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001337, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uvec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001338, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001339, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int64_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001340, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int64_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001341, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int64_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001342, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int64_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001343, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int64_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001344, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int64_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001345, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int64_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001346, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_int64_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001347, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001348, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int64_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001349, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int64_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001350, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int64_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001351, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int64_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001352, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int64_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001353, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int64_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001354, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int64_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001355, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_int64_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001356, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001357, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int64_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001358, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int64_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001359, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int64_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001360, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int64_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001361, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int64_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001362, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int64_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001363, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int64_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001364, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_int64_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001365, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001366, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001367, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001368, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001369, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001370, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001371, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001372, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001373, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001374, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001375, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001376, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001377, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001378, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001379, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001380, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001381, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001382, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001383, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001384, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001385, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001386, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001387, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001388, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001389, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001390, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001391, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001392, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001393, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001394, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001395, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001396, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001397, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001398, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001399, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001400, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001401, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001402, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001403, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001404, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001405, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001406, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001407, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001408, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001409, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001410, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001411, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001412, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001413, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001414, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001415, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001416, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001417, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001418, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001419, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001420, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001421, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001422, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001423, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001424, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001425, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001426, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001427, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_i64vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001428, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001429, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001430, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001431, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001432, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001433, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001434, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001435, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001436, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_i64vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001437, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001438, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001439, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001440, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001441, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001442, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001443, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001444, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001445, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_i64vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001446, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001447, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint64_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001448, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint64_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001449, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint64_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001450, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint64_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001451, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint64_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001452, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint64_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001453, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint64_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001454, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_uint64_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001455, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001456, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint64_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001457, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint64_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001458, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint64_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001459, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint64_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001460, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint64_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001461, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint64_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001462, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint64_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001463, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_uint64_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001464, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001465, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint64_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001466, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint64_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001467, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint64_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001468, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint64_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001469, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint64_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001470, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint64_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001471, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint64_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001472, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_uint64_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001473, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001474, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001475, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001476, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001477, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001478, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001479, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001480, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001481, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001482, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001483, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001484, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001485, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001486, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001487, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001488, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001489, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001490, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001491, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001492, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001493, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001494, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001495, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001496, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001497, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001498, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001499, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001500, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001501, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001502, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001503, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001504, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001505, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001506, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001507, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001508, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001509, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001510, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001511, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001512, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001513, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001514, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001515, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001516, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001517, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001518, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001519, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001520, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001521, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001522, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001523, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001524, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001525, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001526, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001527, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001528, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001529, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001530, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001531, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001532, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001533, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001534, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001535, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_u64vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001536, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001537, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001538, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001539, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001540, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001541, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001542, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001543, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001544, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_u64vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001545, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001546, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001547, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001548, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001549, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001550, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001551, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001552, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001553, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_u64vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001554, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001555, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float16_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001556, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float16_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001557, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float16_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001558, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float16_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001559, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float16_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001560, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float16_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001561, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float16_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001562, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float16_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001563, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001564, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float16_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001565, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float16_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001566, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float16_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001567, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float16_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001568, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float16_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001569, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float16_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001570, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float16_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001571, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float16_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001572, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001573, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float16_t_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001574, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float16_t_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001575, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float16_t_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001576, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float16_t_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001577, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float16_t_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001578, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float16_t_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001579, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float16_t_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001580, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float16_t_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001581, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001582, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001583, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001584, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001585, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001586, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001587, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001588, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001589, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001590, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001591, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001592, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001593, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001594, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001595, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001596, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001597, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001598, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001599, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001600, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001601, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001602, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001603, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001604, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001605, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001606, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001607, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001608, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001609, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001610, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001611, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001612, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001613, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001614, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001615, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001616, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001617, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001618, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001619, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001620, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001621, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001622, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001623, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001624, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001625, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001626, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001627, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001628, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001629, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001630, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001631, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001632, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001633, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001634, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001635, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001636, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001637, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001638, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001639, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001640, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001641, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001642, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001643, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_f16vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001644, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001645, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001646, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001647, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001648, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001649, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001650, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001651, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001652, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_f16vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001653, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001654, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001655, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001656, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001657, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001658, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001659, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001660, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001661, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_f16vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001662, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001663, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001664, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001665, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001666, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001667, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001668, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001669, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001670, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_float_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001671, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001672, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001673, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001674, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001675, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001676, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001677, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001678, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001679, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_float_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001680, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001681, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001682, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001683, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001684, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001685, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001686, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001687, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001688, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_float_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001689, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001690, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001691, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001692, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001693, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001694, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001695, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001696, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001697, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001698, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001699, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001700, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001701, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001702, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001703, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001704, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001705, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001706, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001707, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001708, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001709, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001710, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001711, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001712, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001713, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001714, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001715, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001716, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001717, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001718, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001719, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001720, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001721, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001722, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001723, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001724, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001725, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001726, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001727, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001728, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001729, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001730, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001731, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001732, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001733, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001734, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001735, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001736, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001737, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001738, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001739, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001740, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001741, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001742, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001743, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001744, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001745, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001746, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001747, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001748, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001749, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001750, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001751, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001752, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001753, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001754, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001755, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001756, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001757, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001758, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001759, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001760, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001761, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001762, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001763, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001764, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001765, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001766, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001767, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001768, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001769, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_vec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001770, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001771, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_double_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001772, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_double_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001773, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_double_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001774, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_double_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001775, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_double_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001776, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_double_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001777, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_double_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001778, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_double_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001779, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001780, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_double_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001781, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_double_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001782, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_double_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001783, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_double_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001784, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_double_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001785, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_double_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001786, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_double_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001787, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_double_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001788, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001789, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_double_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001790, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_double_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001791, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_double_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001792, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_double_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001793, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_double_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001794, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_double_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001795, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_double_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001796, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_double_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001797, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001798, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001799, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001800, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001801, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001802, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001803, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001804, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001805, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001806, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001807, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001808, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001809, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001810, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001811, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001812, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001813, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001814, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001815, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001816, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001817, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001818, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001819, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001820, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001821, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001822, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001823, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001824, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001825, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001826, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001827, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001828, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001829, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001830, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001831, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001832, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001833, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001834, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001835, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001836, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001837, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001838, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001839, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001840, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001841, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001842, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001843, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001844, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001845, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001846, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001847, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001848, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001849, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001850, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001851, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001852, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001853, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001854, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001855, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001856, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001857, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001858, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001859, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_dvec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001860, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001861, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001862, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001863, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001864, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001865, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001866, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001867, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001868, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_dvec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001869, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001870, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001871, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001872, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001873, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001874, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001875, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001876, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001877, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_dvec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001878, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001879, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bool_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001880, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bool_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001881, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bool_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001882, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bool_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001883, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bool_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001884, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bool_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001885, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bool_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001886, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bool_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001887, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001888, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bool_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001889, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bool_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001890, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bool_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001891, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bool_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001892, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bool_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001893, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bool_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001894, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bool_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001895, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bool_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001896, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001897, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bool_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001898, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bool_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001899, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bool_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001900, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bool_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001901, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bool_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001902, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bool_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001903, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bool_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001904, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bool_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001905, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001906, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001907, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001908, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001909, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001910, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001911, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001912, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001913, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001914, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001915, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001916, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001917, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001918, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001919, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001920, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001921, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001922, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001923, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001924, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec2_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001925, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec2_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001926, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec2_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001927, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec2_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001928, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec2_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001929, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec2_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001930, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec2_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001931, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec2_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001932, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001933, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001934, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001935, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001936, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001937, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001938, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001939, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001940, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001941, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001942, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001943, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001944, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001945, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001946, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001947, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001948, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001949, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001950, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001951, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec3_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001952, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec3_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001953, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec3_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001954, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec3_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001955, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec3_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001956, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec3_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001957, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec3_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001958, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec3_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001959, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001960, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001961, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001962, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001963, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001964, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001965, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001966, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001967, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_bvec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001968, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001969, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001970, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001971, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001972, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001973, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001974, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001975, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001976, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcast_nonconst_bvec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001977, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001978, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec4_requiredsubgroupsize1.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001979, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec4_requiredsubgroupsize2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001980, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec4_requiredsubgroupsize4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001981, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec4_requiredsubgroupsize8.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001982, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec4_requiredsubgroupsize16.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001983, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec4_requiredsubgroupsize32.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001984, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec4_requiredsubgroupsize64.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001985, "dEQP-VK.subgroups.ballot_broadcast.compute.subgroupbroadcastfirst_bvec4_requiredsubgroupsize128.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001986, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int8_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001987, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int8_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001988, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int8_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001989, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int8_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001990, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int8_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001991, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int8_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001992, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int8_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001993, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int8_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001994, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int8_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001995, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int8_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001996, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int8_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001997, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int8_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001998, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC001999, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002000, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002001, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002002, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002003, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002004, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002005, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002006, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002007, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002008, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002009, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002010, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002011, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002012, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002013, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002014, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002015, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002016, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002017, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002018, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002019, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002020, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002021, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002022, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002023, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002024, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002025, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i8vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002026, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002027, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002028, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002029, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i8vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002030, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002031, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002032, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002033, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i8vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002034, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint8_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002035, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint8_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002036, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint8_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002037, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint8_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002038, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint8_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002039, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint8_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002040, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint8_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002041, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint8_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002042, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint8_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002043, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint8_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002044, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint8_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002045, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint8_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002046, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002047, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002048, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002049, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002050, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002051, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002052, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002053, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002054, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002055, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002056, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002057, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002058, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002059, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002060, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002061, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002062, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002063, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002064, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002065, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002066, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002067, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002068, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002069, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002070, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002071, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002072, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002073, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u8vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002074, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002075, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002076, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002077, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u8vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002078, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002079, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002080, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002081, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u8vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002082, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int16_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002083, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int16_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002084, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int16_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002085, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int16_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002086, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int16_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002087, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int16_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002088, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int16_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002089, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int16_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002090, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int16_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002091, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int16_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002092, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int16_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002093, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int16_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002094, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002095, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002096, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002097, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002098, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002099, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002100, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002101, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002102, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002103, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002104, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002105, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002106, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002107, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002108, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002109, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002110, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002111, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002112, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002113, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002114, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002115, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002116, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002117, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002118, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002119, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002120, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002121, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i16vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002122, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002123, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002124, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002125, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i16vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002126, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002127, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002128, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002129, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i16vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002130, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint16_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002131, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint16_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002132, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint16_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002133, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint16_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002134, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint16_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002135, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint16_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002136, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint16_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002137, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint16_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002138, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint16_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002139, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint16_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002140, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint16_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002141, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint16_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002142, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002143, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002144, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002145, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002146, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002147, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002148, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002149, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002150, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002151, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002152, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002153, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002154, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002155, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002156, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002157, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002158, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002159, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002160, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002161, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002162, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002163, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002164, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002165, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002166, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002167, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002168, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002169, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u16vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002170, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002171, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002172, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002173, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u16vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002174, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002175, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002176, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002177, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u16vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002178, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_intvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002179, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_inttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002180, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_inttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002181, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_intgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002182, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_intvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002183, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_inttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002184, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_inttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002185, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_intgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002186, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_intvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002187, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_inttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002188, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_inttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002189, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_intgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002190, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002191, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002192, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002193, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002194, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002195, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002196, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002197, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002198, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002199, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002200, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002201, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002202, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002203, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002204, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002205, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002206, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002207, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002208, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002209, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002210, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002211, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002212, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002213, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002214, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002215, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002216, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002217, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_ivec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002218, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002219, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002220, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002221, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_ivec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002222, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002223, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002224, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002225, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_ivec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002226, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uintvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002227, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uinttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002228, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uinttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002229, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uintgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002230, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uintvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002231, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uinttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002232, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uinttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002233, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uintgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002234, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uintvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002235, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uinttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002236, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uinttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002237, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uintgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002238, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002239, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002240, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002241, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002242, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002243, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002244, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002245, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002246, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002247, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002248, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002249, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002250, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002251, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002252, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002253, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002254, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002255, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002256, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002257, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002258, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002259, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002260, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002261, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002262, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002263, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002264, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002265, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uvec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002266, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002267, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002268, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002269, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uvec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002270, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002271, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002272, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002273, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uvec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002274, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int64_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002275, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int64_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002276, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int64_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002277, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_int64_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002278, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int64_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002279, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int64_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002280, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int64_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002281, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_int64_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002282, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int64_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002283, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int64_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002284, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int64_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002285, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_int64_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002286, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002287, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002288, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002289, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002290, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002291, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002292, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002293, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002294, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002295, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002296, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002297, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002298, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002299, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002300, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002301, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002302, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002303, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002304, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002305, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002306, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002307, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002308, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002309, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002310, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002311, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002312, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002313, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_i64vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002314, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002315, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002316, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002317, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_i64vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002318, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002319, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002320, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002321, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_i64vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002322, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint64_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002323, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint64_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002324, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint64_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002325, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_uint64_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002326, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint64_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002327, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint64_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002328, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint64_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002329, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_uint64_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002330, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint64_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002331, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint64_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002332, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint64_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002333, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_uint64_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002334, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002335, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002336, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002337, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002338, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002339, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002340, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002341, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002342, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002343, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002344, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002345, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002346, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002347, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002348, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002349, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002350, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002351, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002352, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002353, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002354, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002355, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002356, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002357, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002358, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002359, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002360, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002361, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_u64vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002362, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002363, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002364, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002365, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_u64vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002366, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002367, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002368, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002369, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_u64vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002370, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_float16_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002371, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_float16_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002372, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_float16_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002373, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_float16_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002374, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_float16_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002375, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_float16_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002376, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_float16_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002377, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_float16_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002378, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_float16_tvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002379, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_float16_ttess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002380, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_float16_ttess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002381, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_float16_tgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002382, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002383, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002384, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002385, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002386, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002387, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002388, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002389, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002390, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002391, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002392, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002393, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002394, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002395, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002396, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002397, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002398, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002399, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002400, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002401, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002402, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002403, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002404, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002405, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002406, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002407, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002408, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002409, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_f16vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002410, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002411, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002412, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002413, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_f16vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002414, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002415, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002416, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002417, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_f16vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002418, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_floatvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002419, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_floattess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002420, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_floattess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002421, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_floatgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002422, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_floatvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002423, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_floattess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002424, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_floattess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002425, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_floatgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002426, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_floatvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002427, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_floattess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002428, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_floattess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002429, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_floatgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002430, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002431, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002432, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002433, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002434, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002435, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002436, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002437, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002438, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002439, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002440, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002441, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002442, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002443, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002444, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002445, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002446, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002447, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002448, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002449, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002450, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002451, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002452, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002453, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002454, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002455, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002456, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002457, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002458, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002459, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002460, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002461, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002462, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002463, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002464, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002465, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_vec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002466, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_doublevertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002467, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_doubletess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002468, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_doubletess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002469, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_doublegeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002470, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_doublevertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002471, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_doubletess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002472, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_doubletess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002473, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_doublegeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002474, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_doublevertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002475, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_doubletess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002476, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_doubletess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002477, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_doublegeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002478, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002479, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002480, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002481, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002482, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002483, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002484, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002485, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002486, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002487, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002488, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002489, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002490, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002491, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002492, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002493, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002494, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002495, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002496, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002497, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002498, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002499, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002500, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002501, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002502, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002503, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002504, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002505, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_dvec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002506, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002507, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002508, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002509, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_dvec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002510, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002511, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002512, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002513, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_dvec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002514, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_boolvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002515, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_booltess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002516, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_booltess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002517, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_boolgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002518, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_boolvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002519, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_booltess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002520, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_booltess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002521, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_boolgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002522, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_boolvertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002523, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_booltess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002524, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_booltess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002525, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_boolgeometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002526, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002527, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002528, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002529, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002530, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002531, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002532, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002533, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002534, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec2vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002535, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec2tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002536, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec2tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002537, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec2geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002538, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002539, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002540, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002541, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002542, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002543, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002544, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002545, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002546, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec3vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002547, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec3tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002548, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec3tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002549, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec3geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002550, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002551, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002552, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002553, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_bvec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002554, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002555, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002556, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002557, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcast_nonconst_bvec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002558, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec4vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002559, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec4tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002560, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec4tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002561, "dEQP-VK.subgroups.ballot_broadcast.framebuffer.subgroupbroadcastfirst_bvec4geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002562, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002563, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002564, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002565, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002566, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002567, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002568, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002569, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002570, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002571, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002572, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002573, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002574, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002575, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002576, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002577, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002578, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002579, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002580, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002581, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002582, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002583, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002584, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002585, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002586, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002587, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002588, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002589, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002590, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002591, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002592, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002593, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002594, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002595, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002596, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002597, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002598, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002599, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002600, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002601, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002602, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002603, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002604, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002605, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002606, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002607, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002608, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002609, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002610, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002611, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002612, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002613, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002614, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002615, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002616, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002617, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002618, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002619, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002620, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002621, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002622, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002623, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002624, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002625, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002626, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcast_nonconst_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002627, "dEQP-VK.subgroups.ballot_broadcast.ray_tracing.subgroupbroadcastfirst_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002628, "dEQP-VK.subgroups.ballot_broadcast.ext_shader_subgroup_ballot.graphics.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002629, "dEQP-VK.subgroups.ballot_broadcast.ext_shader_subgroup_ballot.compute.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC002630, "dEQP-VK.subgroups.ballot_broadcast.ext_shader_subgroup_ballot.framebuffer.*");
