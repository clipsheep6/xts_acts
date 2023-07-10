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
#include "../ActsSubgroups0005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017443, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017444, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017445, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017446, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017447, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017448, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017449, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017450, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017451, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017452, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017453, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017454, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017455, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017456, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017457, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017458, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017459, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017460, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017461, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017462, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017463, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017464, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017465, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017466, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017467, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017468, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017469, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017470, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017471, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017472, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017473, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017474, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017475, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017476, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017477, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017478, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017479, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017480, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017481, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017482, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017483, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017484, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017485, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017486, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017487, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017488, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017489, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017490, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017491, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017492, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017493, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017494, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017495, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017496, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017497, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017498, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017499, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017500, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017501, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017502, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017503, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017504, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017505, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017506, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017507, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017508, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017509, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017510, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017511, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017512, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017513, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017514, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017515, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017516, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017517, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017518, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017519, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017520, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017521, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017522, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017523, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017524, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017525, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017526, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017527, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017528, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017529, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017530, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017531, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017532, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017533, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017534, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017535, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017536, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017537, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017538, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017539, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017540, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017541, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017542, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017543, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017544, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017545, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017546, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017547, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017548, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017549, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017550, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017551, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017552, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017553, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017554, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017555, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017556, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017557, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017558, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017559, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017560, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017561, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017562, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017563, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017564, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017565, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017566, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017567, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017568, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017569, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017570, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017571, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017572, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017573, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017574, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017575, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017576, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017577, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017578, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017579, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017580, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017581, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017582, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017583, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017584, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017585, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017586, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017587, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017588, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017589, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017590, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017591, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017592, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017593, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017594, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017595, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017596, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017597, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017598, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017599, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017600, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017601, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017602, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017603, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017604, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017605, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017606, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017607, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017608, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017609, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017610, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017611, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017612, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017613, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017614, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017615, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017616, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017617, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017618, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017619, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017620, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017621, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017622, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017623, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017624, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017625, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017626, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017627, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017628, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017629, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017630, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017631, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffle_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017632, "dEQP-VK.subgroups.shuffle.graphics.subgroupshufflexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017633, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffleup_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017634, "dEQP-VK.subgroups.shuffle.graphics.subgroupshuffledown_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017635, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017636, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017637, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017638, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017639, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017640, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017641, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017642, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017643, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017644, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017645, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017646, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017647, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017648, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017649, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017650, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017651, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017652, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017653, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017654, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017655, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017656, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017657, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017658, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017659, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017660, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017661, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017662, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017663, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017664, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017665, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017666, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017667, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017668, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017669, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017670, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017671, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017672, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017673, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017674, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017675, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017676, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017677, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017678, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017679, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017680, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017681, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017682, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017683, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017684, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017685, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017686, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017687, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017688, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017689, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017690, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017691, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017692, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017693, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017694, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017695, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017696, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017697, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017698, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017699, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017700, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017701, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017702, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017703, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017704, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017705, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017706, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017707, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017708, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017709, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017710, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017711, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017712, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017713, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017714, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017715, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017716, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017717, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017718, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017719, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017720, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017721, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017722, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017723, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017724, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017725, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017726, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017727, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017728, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017729, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017730, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017731, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017732, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017733, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017734, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017735, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017736, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017737, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017738, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017739, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017740, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017741, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017742, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017743, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017744, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017745, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017746, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017747, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017748, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017749, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017750, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017751, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017752, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017753, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017754, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017755, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017756, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017757, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017758, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017759, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017760, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017761, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017762, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017763, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017764, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017765, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017766, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017767, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017768, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017769, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017770, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017771, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017772, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017773, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017774, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017775, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017776, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017777, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017778, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017779, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017780, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017781, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017782, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017783, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017784, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017785, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017786, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017787, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017788, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017789, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017790, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017791, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017792, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017793, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017794, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017795, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017796, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017797, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017798, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017799, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017800, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017801, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017802, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017803, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017804, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017805, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017806, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017807, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017808, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017809, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017810, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017811, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017812, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017813, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017814, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017815, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017816, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017817, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017818, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017819, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017820, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017821, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017822, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017823, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017824, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017825, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017826, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017827, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017828, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017829, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017830, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017831, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017832, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017833, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017834, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017835, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017836, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017837, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017838, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017839, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017840, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017841, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017842, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017843, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017844, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017845, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017846, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017847, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017848, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017849, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017850, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017851, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017852, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017853, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017854, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017855, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017856, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017857, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017858, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017859, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017860, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017861, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017862, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017863, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017864, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017865, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017866, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017867, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017868, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017869, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017870, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017871, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017872, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017873, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017874, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017875, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017876, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017877, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017878, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017879, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017880, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017881, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017882, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017883, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017884, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017885, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017886, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017887, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017888, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017889, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017890, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017891, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017892, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017893, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017894, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017895, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017896, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017897, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017898, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017899, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017900, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017901, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017902, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017903, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017904, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017905, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017906, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017907, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017908, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017909, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017910, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017911, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017912, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017913, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017914, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017915, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017916, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017917, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017918, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017919, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017920, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017921, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017922, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017923, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017924, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017925, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017926, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017927, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017928, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017929, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017930, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017931, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017932, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017933, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017934, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017935, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017936, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017937, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017938, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017939, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017940, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017941, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017942, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017943, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017944, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017945, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017946, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017947, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017948, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017949, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017950, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017951, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017952, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017953, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017954, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017955, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017956, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017957, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017958, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017959, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017960, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017961, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017962, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017963, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017964, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017965, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017966, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017967, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017968, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017969, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017970, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017971, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017972, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017973, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017974, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017975, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017976, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017977, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017978, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017979, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017980, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017981, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017982, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017983, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017984, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017985, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017986, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017987, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017988, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017989, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017990, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017991, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017992, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017993, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017994, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017995, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017996, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017997, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017998, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC017999, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018000, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018001, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018002, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018003, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018004, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018005, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018006, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018007, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018008, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018009, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018010, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018011, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018012, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffle_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018013, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018014, "dEQP-VK.subgroups.shuffle.compute.subgroupshufflexor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018015, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018016, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffleup_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018017, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018018, "dEQP-VK.subgroups.shuffle.compute.subgroupshuffledown_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018019, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018020, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018021, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018022, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018023, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018024, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018025, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018026, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018027, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018028, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018029, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018030, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018031, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018032, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018033, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018034, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018035, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018036, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018037, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018038, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018039, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018040, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018041, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018042, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018043, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018044, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018045, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018046, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018047, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018048, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018049, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018050, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018051, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018052, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018053, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018054, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018055, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018056, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018057, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018058, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018059, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018060, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018061, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018062, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018063, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018064, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018065, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018066, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018067, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018068, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018069, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018070, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018071, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018072, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018073, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018074, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018075, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018076, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018077, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018078, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018079, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018080, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018081, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018082, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018083, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018084, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018085, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018086, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018087, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018088, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018089, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018090, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018091, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018092, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018093, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018094, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018095, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018096, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018097, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018098, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018099, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018100, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018101, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018102, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018103, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018104, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018105, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018106, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018107, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018108, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018109, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018110, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018111, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018112, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018113, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018114, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018115, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018116, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018117, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018118, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018119, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018120, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018121, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018122, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018123, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018124, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018125, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018126, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018127, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018128, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018129, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018130, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018131, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018132, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018133, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018134, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018135, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018136, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018137, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018138, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018139, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018140, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018141, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018142, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018143, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018144, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018145, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018146, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018147, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018148, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018149, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018150, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018151, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018152, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018153, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018154, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018155, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018156, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018157, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018158, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018159, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018160, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018161, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018162, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018163, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018164, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018165, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018166, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018167, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018168, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018169, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018170, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018171, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018172, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018173, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018174, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018175, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018176, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018177, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018178, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018179, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018180, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018181, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018182, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018183, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018184, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018185, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018186, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018187, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018188, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018189, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018190, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018191, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018192, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018193, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018194, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018195, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018196, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018197, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018198, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018199, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018200, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018201, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018202, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018203, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018204, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018205, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018206, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018207, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018208, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018209, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018210, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018211, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018212, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018213, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018214, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018215, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018216, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018217, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018218, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018219, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018220, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018221, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018222, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018223, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018224, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018225, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018226, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018227, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018228, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018229, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018230, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018231, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018232, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018233, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018234, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018235, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018236, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018237, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018238, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018239, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018240, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018241, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018242, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018243, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018244, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018245, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018246, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018247, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018248, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018249, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018250, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018251, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018252, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018253, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018254, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018255, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018256, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018257, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018258, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018259, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018260, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018261, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018262, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018263, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018264, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018265, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018266, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018267, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018268, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018269, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018270, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018271, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018272, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018273, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018274, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018275, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018276, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018277, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018278, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018279, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018280, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018281, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018282, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018283, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018284, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018285, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018286, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018287, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018288, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018289, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018290, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018291, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018292, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018293, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018294, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018295, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018296, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018297, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018298, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018299, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018300, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018301, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018302, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018303, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018304, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018305, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018306, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018307, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018308, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018309, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018310, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018311, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018312, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018313, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018314, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018315, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018316, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018317, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018318, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018319, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018320, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018321, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018322, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018323, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018324, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018325, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018326, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018327, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018328, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018329, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018330, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018331, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018332, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018333, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018334, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018335, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018336, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018337, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018338, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018339, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018340, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018341, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018342, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018343, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018344, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018345, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018346, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018347, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018348, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018349, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018350, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018351, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018352, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018353, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018354, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018355, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018356, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018357, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018358, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018359, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018360, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018361, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018362, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018363, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018364, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018365, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018366, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018367, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018368, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018369, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018370, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018371, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018372, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018373, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018374, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018375, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018376, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018377, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018378, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018379, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018380, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018381, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018382, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018383, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018384, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018385, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018386, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018387, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018388, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018389, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018390, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018391, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018392, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018393, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018394, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018395, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018396, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018397, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018398, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018399, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018400, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018401, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018402, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018403, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018404, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018405, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018406, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018407, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018408, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018409, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018410, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018411, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018412, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018413, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018414, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018415, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018416, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018417, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018418, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018419, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018420, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018421, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018422, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018423, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018424, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018425, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018426, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018427, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018428, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018429, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018430, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018431, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018432, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018433, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018434, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018435, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018436, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018437, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018438, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018439, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018440, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018441, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018442, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018443, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018444, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018445, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018446, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018447, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018448, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018449, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018450, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018451, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018452, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018453, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018454, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018455, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018456, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018457, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018458, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018459, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018460, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018461, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018462, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018463, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018464, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018465, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018466, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018467, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018468, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018469, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018470, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018471, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018472, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018473, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018474, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018475, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018476, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018477, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018478, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018479, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018480, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018481, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018482, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018483, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018484, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018485, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018486, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018487, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018488, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018489, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018490, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018491, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018492, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018493, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018494, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018495, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018496, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018497, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018498, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018499, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018500, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018501, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018502, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018503, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018504, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018505, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018506, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018507, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018508, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018509, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018510, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018511, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018512, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018513, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018514, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018515, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018516, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018517, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018518, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018519, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018520, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018521, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018522, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018523, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018524, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018525, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018526, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018527, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018528, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018529, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018530, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018531, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018532, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018533, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018534, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018535, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018536, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018537, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018538, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018539, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018540, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018541, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018542, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018543, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018544, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018545, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018546, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018547, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018548, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018549, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018550, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018551, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018552, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018553, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018554, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018555, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018556, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018557, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018558, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018559, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018560, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018561, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018562, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018563, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018564, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018565, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018566, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018567, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018568, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018569, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018570, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018571, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018572, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018573, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018574, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018575, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018576, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018577, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018578, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018579, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018580, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018581, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018582, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018583, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018584, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018585, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018586, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018587, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018588, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018589, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018590, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018591, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018592, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018593, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018594, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018595, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018596, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018597, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018598, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018599, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018600, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018601, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018602, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018603, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018604, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018605, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018606, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018607, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018608, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018609, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018610, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018611, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018612, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018613, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018614, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018615, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018616, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018617, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018618, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018619, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018620, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018621, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018622, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018623, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018624, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018625, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018626, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018627, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018628, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018629, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018630, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018631, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018632, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018633, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018634, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018635, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018636, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018637, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018638, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018639, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018640, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018641, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018642, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018643, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018644, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018645, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018646, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018647, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018648, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018649, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018650, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018651, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018652, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018653, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018654, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018655, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018656, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018657, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018658, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018659, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018660, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018661, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018662, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018663, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018664, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018665, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018666, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018667, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018668, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018669, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018670, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018671, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018672, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018673, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018674, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018675, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018676, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018677, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018678, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018679, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018680, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018681, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018682, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018683, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018684, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018685, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018686, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018687, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018688, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018689, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018690, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018691, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018692, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018693, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018694, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018695, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018696, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018697, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018698, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018699, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018700, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018701, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018702, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018703, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018704, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018705, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018706, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018707, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018708, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018709, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018710, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018711, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018712, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018713, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018714, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018715, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018716, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018717, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018718, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018719, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018720, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018721, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018722, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018723, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018724, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018725, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018726, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018727, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018728, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018729, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018730, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018731, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018732, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018733, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018734, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018735, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018736, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018737, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018738, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018739, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018740, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018741, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018742, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018743, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018744, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018745, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018746, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018747, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018748, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018749, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018750, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018751, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018752, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018753, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018754, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018755, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018756, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018757, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018758, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018759, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018760, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018761, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018762, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018763, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018764, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018765, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018766, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018767, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018768, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018769, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018770, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018771, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018772, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018773, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018774, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffle_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018775, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018776, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018777, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018778, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshufflexor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018779, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018780, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018781, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018782, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffleup_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018783, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018784, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018785, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018786, "dEQP-VK.subgroups.shuffle.framebuffer.subgroupshuffledown_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018787, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018788, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018789, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018790, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018791, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018792, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018793, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018794, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018795, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018796, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018797, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018798, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018799, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018800, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018801, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018802, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018803, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018804, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018805, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018806, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018807, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018808, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018809, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018810, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018811, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018812, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018813, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018814, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018815, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018816, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018817, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018818, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018819, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018820, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018821, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018822, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018823, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018824, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018825, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018826, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018827, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018828, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018829, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018830, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018831, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018832, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018833, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018834, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018835, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018836, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018837, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018838, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018839, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018840, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018841, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018842, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018843, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018844, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018845, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018846, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018847, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018848, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018849, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018850, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018851, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018852, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018853, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018854, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018855, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018856, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018857, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018858, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018859, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018860, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018861, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018862, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018863, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018864, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018865, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018866, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018867, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018868, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018869, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018870, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018871, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffle_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018872, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshufflexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018873, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffleup_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC018874, "dEQP-VK.subgroups.shuffle.ray_tracing.subgroupshuffledown_bvec4.*");
