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
#include "../ActsSubgroups0002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002687, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002688, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002689, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002690, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002691, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002692, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002693, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002694, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002695, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002696, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002697, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002698, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002699, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002700, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002701, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002702, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002703, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002704, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002705, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002706, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002707, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002708, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002709, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002710, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002711, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002712, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002713, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002714, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002715, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002716, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002717, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002718, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002719, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002720, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002721, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002722, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002723, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002724, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002725, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002726, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002727, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002728, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002729, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002730, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002731, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002732, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002733, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002734, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002735, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002736, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002737, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002738, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002739, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002740, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002741, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002742, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002743, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002744, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002745, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002746, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002747, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002748, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002749, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002750, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002751, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002752, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002753, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002754, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002755, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002756, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002757, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002758, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002759, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002760, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002761, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002762, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002763, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002764, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002765, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002766, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002767, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002768, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002769, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002770, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002771, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002772, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002773, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002774, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002775, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002776, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002777, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002778, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002779, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002780, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002781, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002782, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002783, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002784, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002785, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002786, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002787, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002788, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002789, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002790, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002791, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002792, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002793, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002794, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002795, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002796, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002797, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002798, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002799, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002800, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002801, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002802, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002803, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002804, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002805, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002806, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002807, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002808, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002809, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002810, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002811, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002812, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002813, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002814, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002815, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002816, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002817, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002818, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002819, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002820, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002821, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002822, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002823, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002824, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002825, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002826, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002827, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002828, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002829, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002830, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002831, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002832, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002833, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002834, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002835, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002836, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002837, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002838, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002839, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002840, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002841, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002842, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002843, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002844, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002845, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002846, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002847, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002848, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002849, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002850, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002851, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002852, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002853, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002854, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002855, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002856, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002857, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002858, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002859, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002860, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002861, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002862, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002863, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002864, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002865, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002866, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002867, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002868, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002869, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002870, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002871, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002872, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002873, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002874, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002875, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002876, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002877, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002878, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002879, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002880, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002881, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002882, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002883, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002884, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002885, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002886, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002887, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002888, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002889, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002890, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002891, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002892, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002893, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002894, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002895, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002896, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002897, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002898, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002899, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002900, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002901, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002902, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002903, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002904, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002905, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002906, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002907, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002908, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002909, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002910, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002911, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002912, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002913, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002914, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002915, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002916, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002917, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002918, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002919, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002920, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002921, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002922, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002923, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002924, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002925, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002926, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002927, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002928, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002929, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002930, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002931, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002932, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002933, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002934, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002935, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002936, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002937, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002938, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002939, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002940, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002941, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002942, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002943, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002944, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002945, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002946, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002947, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002948, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002949, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002950, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002951, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002952, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002953, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002954, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002955, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002956, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002957, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002958, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002959, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002960, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002961, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002962, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002963, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002964, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002965, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002966, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002967, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002968, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002969, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002970, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002971, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002972, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002973, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002974, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002975, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002976, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002977, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002978, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002979, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002980, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002981, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002982, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002983, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002984, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002985, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002986, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002987, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002988, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002989, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002990, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002991, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002992, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002993, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002994, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002995, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002996, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002997, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002998, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002999, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003000, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003001, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003002, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003003, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003004, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003005, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003006, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003007, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003008, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003009, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003010, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003011, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003012, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003013, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003014, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003015, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003016, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003017, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003018, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003019, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003020, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003021, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003022, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003023, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003024, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003025, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003026, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003027, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003028, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003029, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003030, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003031, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003032, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003033, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003034, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003035, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003036, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003037, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003038, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003039, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003040, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003041, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003042, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003043, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003044, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003045, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003046, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003047, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003048, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003049, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003050, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003051, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003052, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003053, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003054, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003055, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003056, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003057, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003058, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003059, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003060, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003061, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003062, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003063, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003064, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003065, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003066, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003067, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003068, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003069, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003070, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003071, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003072, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003073, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003074, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003075, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003076, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003077, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003078, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003079, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003080, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003081, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003082, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003083, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003084, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003085, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003086, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003087, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003088, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003089, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003090, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003091, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003092, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003093, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003094, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003095, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003096, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003097, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003098, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003099, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003100, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003101, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003102, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003103, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003104, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003105, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003106, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003107, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003108, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003109, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003110, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003111, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003112, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003113, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003114, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003115, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003116, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003117, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003118, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003119, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003120, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003121, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003122, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003123, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003124, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003125, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003126, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003127, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003128, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003129, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003130, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003131, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003132, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003133, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003134, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003135, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003136, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003137, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003138, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003139, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003140, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003141, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003142, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003143, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003144, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003145, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003146, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003147, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003148, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003149, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003150, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003151, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003152, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003153, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003154, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003155, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003156, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003157, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003158, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003159, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003160, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003161, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003162, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003163, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003164, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003165, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003166, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003167, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003168, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003169, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003170, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003171, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003172, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003173, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003174, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003175, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003176, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003177, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003178, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003179, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003180, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003181, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003182, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003183, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003184, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003185, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003186, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003187, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003188, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003189, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003190, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003191, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003192, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003193, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003194, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003195, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003196, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003197, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003198, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003199, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003200, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003201, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003202, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003203, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003204, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003205, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003206, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003207, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003208, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003209, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003210, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003211, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003212, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003213, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003214, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003215, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003216, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003217, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003218, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003219, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003220, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003221, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003222, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003223, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003224, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003225, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003226, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003227, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003228, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003229, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003230, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003231, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003232, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003233, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003234, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003235, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003236, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003237, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003238, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003239, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003240, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003241, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003242, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003243, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003244, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003245, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003246, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003247, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003248, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003249, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003250, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003251, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003252, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003253, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003254, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003255, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003256, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003257, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003258, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003259, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003260, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003261, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003262, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003263, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003264, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003265, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003266, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003267, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003268, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003269, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003270, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003271, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003272, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003273, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003274, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003275, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003276, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003277, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003278, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003279, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003280, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003281, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003282, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003283, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003284, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003285, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003286, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003287, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003288, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003289, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003290, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003291, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003292, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003293, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003294, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003295, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003296, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003297, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003298, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003299, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003300, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003301, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003302, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003303, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003304, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003305, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003306, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003307, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003308, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003309, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003310, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003311, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003312, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003313, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003314, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003315, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003316, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003317, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003318, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003319, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003320, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003321, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003322, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003323, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003324, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003325, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003326, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003327, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003328, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003329, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003330, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003331, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003332, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003333, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003334, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003335, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003336, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003337, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003338, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003339, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003340, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003341, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003342, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003343, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003344, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003345, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003346, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003347, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003348, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003349, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003350, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003351, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003352, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003353, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003354, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003355, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003356, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003357, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003358, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003359, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003360, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003361, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003362, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003363, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003364, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003365, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003366, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003367, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003368, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003369, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003370, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003371, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003372, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003373, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003374, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003375, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003376, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003377, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003378, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003379, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003380, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003381, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003382, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003383, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003384, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003385, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003386, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003387, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003388, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003389, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003390, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003391, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003392, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003393, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003394, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003395, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003396, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003397, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003398, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003399, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003400, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003401, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003402, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003403, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003404, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003405, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003406, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003407, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003408, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003409, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003410, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003411, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003412, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003413, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003414, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003415, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003416, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003417, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003418, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003419, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003420, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003421, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003422, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003423, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003424, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003425, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003426, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003427, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003428, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003429, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003430, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003431, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003432, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003433, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003434, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003435, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003436, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003437, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003438, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003439, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003440, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003441, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003442, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003443, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003444, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003445, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003446, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003447, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003448, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003449, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003450, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003451, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003452, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003453, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003454, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003455, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003456, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003457, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003458, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003459, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003460, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003461, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003462, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003463, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003464, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003465, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003466, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003467, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003468, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003469, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003470, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003471, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003472, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003473, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003474, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003475, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003476, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003477, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003478, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003479, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003480, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003481, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003482, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003483, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003484, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003485, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003486, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003487, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003488, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003489, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003490, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003491, "dEQP-VK.subgroups.arithmetic.graphics.subgroupadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003492, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003493, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003494, "dEQP-VK.subgroups.arithmetic.graphics.subgroupmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003495, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003496, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003497, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003498, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003499, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003500, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003501, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003502, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003503, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003504, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003505, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003506, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003507, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003508, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003509, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003510, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003511, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003512, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003513, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003514, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003515, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003516, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003517, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003518, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003519, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003520, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003521, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003522, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003523, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003524, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003525, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003526, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003527, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003528, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003529, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003530, "dEQP-VK.subgroups.arithmetic.graphics.subgroupand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003531, "dEQP-VK.subgroups.arithmetic.graphics.subgroupor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003532, "dEQP-VK.subgroups.arithmetic.graphics.subgroupxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003533, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003534, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003535, "dEQP-VK.subgroups.arithmetic.graphics.subgroupinclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003536, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003537, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003538, "dEQP-VK.subgroups.arithmetic.graphics.subgroupexclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003539, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003540, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003541, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003542, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003543, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003544, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003545, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003546, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003547, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003548, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003549, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003550, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003551, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003552, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003553, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003554, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003555, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003556, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003557, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003558, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003559, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003560, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003561, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003562, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003563, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003564, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003565, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003566, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003567, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003568, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003569, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003570, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003571, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003572, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003573, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003574, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003575, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003576, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003577, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003578, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003579, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003580, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003581, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003582, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003583, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003584, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003585, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003586, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003587, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003588, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003589, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003590, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003591, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003592, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003593, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003594, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003595, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003596, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003597, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003598, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003599, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003600, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003601, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003602, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003603, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003604, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003605, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003606, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003607, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003608, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003609, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003610, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003611, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003612, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003613, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003614, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003615, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003616, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003617, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003618, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003619, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003620, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003621, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003622, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003623, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003624, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003625, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003626, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003627, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003628, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003629, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003630, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003631, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003632, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003633, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003634, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003635, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003636, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003637, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003638, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003639, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003640, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003641, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003642, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003643, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003644, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003645, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003646, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003647, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003648, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003649, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003650, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003651, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003652, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003653, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003654, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003655, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003656, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003657, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003658, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003659, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003660, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003661, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003662, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003663, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003664, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003665, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003666, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003667, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003668, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003669, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003670, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003671, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003672, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003673, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003674, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003675, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003676, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003677, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003678, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003679, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003680, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003681, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003682, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003683, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003684, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003685, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003686, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003687, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003688, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003689, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003690, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003691, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003692, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003693, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003694, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003695, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003696, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003697, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003698, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003699, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003700, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003701, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003702, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003703, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003704, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003705, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003706, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003707, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003708, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003709, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003710, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003711, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003712, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003713, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003714, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003715, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003716, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003717, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003718, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003719, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003720, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003721, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003722, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003723, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003724, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003725, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003726, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003727, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003728, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003729, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003730, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003731, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003732, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003733, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003734, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003735, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003736, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003737, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003738, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003739, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003740, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003741, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003742, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003743, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003744, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003745, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003746, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003747, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003748, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003749, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003750, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003751, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003752, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003753, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003754, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003755, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003756, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003757, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003758, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003759, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003760, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003761, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003762, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003763, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003764, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003765, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003766, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003767, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003768, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003769, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003770, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003771, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003772, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003773, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003774, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003775, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003776, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003777, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003778, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003779, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003780, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003781, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003782, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003783, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003784, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003785, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003786, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003787, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003788, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003789, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003790, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003791, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003792, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003793, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003794, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003795, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003796, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003797, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003798, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003799, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003800, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003801, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003802, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003803, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003804, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003805, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003806, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003807, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003808, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003809, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003810, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003811, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003812, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003813, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003814, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003815, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003816, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003817, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003818, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003819, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003820, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003821, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003822, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003823, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003824, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003825, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003826, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003827, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003828, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003829, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003830, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003831, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003832, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003833, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003834, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003835, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003836, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003837, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003838, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003839, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003840, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003841, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003842, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003843, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003844, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003845, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003846, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003847, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003848, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003849, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003850, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003851, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003852, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003853, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003854, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003855, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003856, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003857, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003858, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003859, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003860, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003861, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003862, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003863, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003864, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003865, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003866, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003867, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003868, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003869, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003870, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003871, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003872, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003873, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003874, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003875, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003876, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003877, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003878, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003879, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003880, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003881, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003882, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003883, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003884, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003885, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003886, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003887, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003888, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003889, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003890, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003891, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003892, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003893, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003894, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003895, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003896, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003897, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003898, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003899, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003900, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003901, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003902, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003903, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003904, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003905, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003906, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003907, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003908, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003909, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003910, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003911, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003912, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003913, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003914, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003915, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003916, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003917, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003918, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003919, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003920, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003921, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003922, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003923, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003924, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003925, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003926, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003927, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003928, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003929, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003930, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003931, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003932, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003933, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003934, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003935, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003936, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003937, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003938, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003939, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003940, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003941, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003942, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003943, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003944, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003945, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003946, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003947, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003948, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003949, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003950, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003951, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003952, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003953, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003954, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003955, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003956, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003957, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003958, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003959, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003960, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003961, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003962, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003963, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003964, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003965, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003966, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003967, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003968, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003969, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003970, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003971, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003972, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003973, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003974, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003975, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003976, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003977, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003978, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003979, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003980, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003981, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003982, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003983, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003984, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003985, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003986, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003987, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003988, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003989, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003990, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003991, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003992, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003993, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003994, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003995, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003996, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003997, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003998, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC003999, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004000, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004001, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004002, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004003, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004004, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004005, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004006, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004007, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004008, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004009, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004010, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004011, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004012, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004013, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004014, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004015, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004016, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004017, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004018, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004019, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004020, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004021, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004022, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004023, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004024, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004025, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004026, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004027, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004028, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004029, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004030, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004031, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004032, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004033, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004034, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004035, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004036, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004037, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004038, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004039, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004040, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004041, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004042, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004043, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004044, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004045, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004046, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004047, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004048, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004049, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004050, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004051, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004052, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004053, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004054, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004055, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004056, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004057, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004058, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004059, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004060, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004061, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004062, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004063, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004064, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004065, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004066, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004067, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004068, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004069, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004070, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004071, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004072, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004073, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004074, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004075, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004076, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004077, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004078, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004079, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004080, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004081, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004082, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004083, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004084, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004085, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004086, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004087, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004088, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004089, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004090, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004091, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004092, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004093, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004094, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004095, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004096, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004097, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004098, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004099, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004100, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004101, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004102, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004103, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004104, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004105, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004106, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004107, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004108, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004109, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004110, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004111, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004112, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004113, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004114, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004115, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004116, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004117, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004118, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004119, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004120, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004121, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004122, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004123, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004124, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004125, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004126, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004127, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004128, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004129, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004130, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004131, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004132, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004133, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004134, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004135, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004136, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004137, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004138, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004139, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004140, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004141, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004142, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004143, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004144, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004145, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004146, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004147, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004148, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004149, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004150, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004151, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004152, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004153, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004154, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004155, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004156, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004157, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004158, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004159, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004160, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004161, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004162, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004163, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004164, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004165, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004166, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004167, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004168, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004169, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004170, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004171, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004172, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004173, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004174, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004175, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004176, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004177, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004178, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004179, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004180, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004181, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004182, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004183, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004184, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004185, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004186, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004187, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004188, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004189, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004190, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004191, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004192, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004193, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004194, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004195, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004196, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004197, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004198, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004199, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004200, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004201, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004202, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004203, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004204, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004205, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004206, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004207, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004208, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004209, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004210, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004211, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004212, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004213, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004214, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004215, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004216, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004217, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004218, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004219, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004220, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004221, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004222, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004223, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004224, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004225, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004226, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004227, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004228, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004229, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004230, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004231, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004232, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004233, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004234, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004235, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004236, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004237, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004238, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004239, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004240, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004241, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004242, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004243, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004244, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004245, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004246, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004247, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004248, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004249, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004250, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004251, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004252, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004253, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004254, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004255, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004256, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004257, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004258, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004259, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004260, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004261, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004262, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004263, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004264, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004265, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004266, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004267, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004268, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004269, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004270, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004271, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004272, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004273, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004274, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004275, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004276, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004277, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004278, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004279, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004280, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004281, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004282, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004283, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004284, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004285, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004286, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004287, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004288, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004289, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004290, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004291, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004292, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004293, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004294, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004295, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004296, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004297, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004298, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004299, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004300, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004301, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004302, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004303, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004304, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004305, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004306, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004307, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004308, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004309, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004310, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004311, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004312, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004313, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004314, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004315, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004316, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004317, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004318, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004319, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004320, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004321, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004322, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004323, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004324, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004325, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004326, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004327, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004328, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004329, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004330, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004331, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004332, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004333, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004334, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004335, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004336, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004337, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004338, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004339, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004340, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004341, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004342, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004343, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004344, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004345, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004346, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004347, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004348, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004349, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004350, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004351, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004352, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004353, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004354, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004355, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004356, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004357, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004358, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004359, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004360, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004361, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004362, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004363, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004364, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004365, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004366, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004367, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004368, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004369, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004370, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004371, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004372, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004373, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004374, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004375, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004376, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004377, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004378, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004379, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004380, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004381, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004382, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004383, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004384, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004385, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004386, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004387, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004388, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004389, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004390, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004391, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004392, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004393, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004394, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004395, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004396, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004397, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004398, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004399, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004400, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004401, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004402, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004403, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004404, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004405, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004406, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004407, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004408, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004409, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004410, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004411, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004412, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004413, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004414, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004415, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004416, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004417, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004418, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004419, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004420, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004421, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004422, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004423, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004424, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004425, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004426, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004427, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004428, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004429, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004430, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004431, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004432, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004433, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004434, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004435, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004436, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004437, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004438, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004439, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004440, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004441, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004442, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004443, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004444, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004445, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004446, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004447, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004448, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004449, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004450, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004451, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004452, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004453, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004454, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004455, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004456, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004457, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004458, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004459, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004460, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004461, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004462, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004463, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004464, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004465, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004466, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004467, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004468, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004469, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004470, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004471, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004472, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004473, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004474, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004475, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004476, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004477, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004478, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004479, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004480, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004481, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004482, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004483, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004484, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004485, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004486, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004487, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004488, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004489, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004490, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004491, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004492, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004493, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004494, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004495, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004496, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004497, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004498, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004499, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004500, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004501, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004502, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004503, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004504, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004505, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004506, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004507, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004508, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004509, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004510, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004511, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004512, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004513, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004514, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004515, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004516, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004517, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004518, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004519, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004520, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004521, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004522, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004523, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004524, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004525, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004526, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004527, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004528, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004529, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004530, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004531, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004532, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004533, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004534, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004535, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004536, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004537, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004538, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004539, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004540, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004541, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004542, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004543, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004544, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004545, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004546, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004547, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004548, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004549, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004550, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004551, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004552, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004553, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004554, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004555, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004556, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004557, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004558, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004559, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004560, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004561, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004562, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004563, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004564, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004565, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004566, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004567, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004568, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004569, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004570, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004571, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004572, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004573, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004574, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004575, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004576, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004577, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004578, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004579, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004580, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004581, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004582, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004583, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004584, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004585, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004586, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004587, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004588, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004589, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004590, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004591, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004592, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004593, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004594, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004595, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004596, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004597, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004598, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004599, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004600, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004601, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004602, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004603, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004604, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004605, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004606, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004607, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004608, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004609, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004610, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004611, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004612, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004613, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004614, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004615, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004616, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004617, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004618, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004619, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004620, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004621, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004622, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004623, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004624, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004625, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004626, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004627, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004628, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004629, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004630, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004631, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004632, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004633, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004634, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004635, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004636, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004637, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004638, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004639, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004640, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004641, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004642, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004643, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004644, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004645, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004646, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004647, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004648, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004649, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004650, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004651, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004652, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004653, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004654, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004655, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004656, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004657, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004658, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004659, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004660, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004661, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004662, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004663, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004664, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004665, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004666, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004667, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004668, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004669, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004670, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004671, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004672, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004673, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004674, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004675, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004676, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004677, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004678, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004679, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004680, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004681, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004682, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004683, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004684, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004685, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004686, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004687, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004688, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004689, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004690, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004691, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004692, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004693, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004694, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004695, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004696, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004697, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004698, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004699, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004700, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004701, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004702, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004703, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004704, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004705, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004706, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004707, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004708, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004709, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004710, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004711, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004712, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004713, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004714, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004715, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004716, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004717, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004718, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004719, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004720, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004721, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004722, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004723, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004724, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004725, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004726, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004727, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004728, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004729, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004730, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004731, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004732, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004733, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004734, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004735, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004736, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004737, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004738, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004739, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004740, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004741, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004742, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004743, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004744, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004745, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004746, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004747, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004748, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004749, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004750, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004751, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004752, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004753, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004754, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004755, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004756, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004757, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004758, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004759, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004760, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004761, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004762, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004763, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004764, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004765, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004766, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004767, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004768, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004769, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004770, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004771, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004772, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004773, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004774, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004775, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004776, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004777, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004778, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004779, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004780, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004781, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004782, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004783, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004784, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004785, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004786, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004787, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004788, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004789, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004790, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004791, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004792, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004793, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004794, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004795, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004796, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004797, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004798, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004799, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004800, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004801, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004802, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004803, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004804, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004805, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004806, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004807, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004808, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004809, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004810, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004811, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004812, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004813, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004814, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004815, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004816, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004817, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004818, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004819, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004820, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004821, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004822, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004823, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004824, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004825, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004826, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004827, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004828, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004829, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004830, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004831, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004832, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004833, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004834, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004835, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004836, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004837, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004838, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004839, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004840, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004841, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004842, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004843, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004844, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004845, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004846, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004847, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004848, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004849, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004850, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004851, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004852, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004853, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004854, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004855, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004856, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004857, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004858, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004859, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004860, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004861, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004862, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004863, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004864, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004865, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004866, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004867, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004868, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004869, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004870, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004871, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004872, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004873, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004874, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004875, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004876, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004877, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004878, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004879, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004880, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004881, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004882, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004883, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004884, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004885, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004886, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004887, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004888, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004889, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004890, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004891, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004892, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004893, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004894, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004895, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004896, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004897, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004898, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004899, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004900, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004901, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004902, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004903, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004904, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004905, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004906, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004907, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004908, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004909, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004910, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004911, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004912, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004913, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004914, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004915, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004916, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004917, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004918, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004919, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004920, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004921, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004922, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004923, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004924, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004925, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004926, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004927, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004928, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004929, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004930, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004931, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004932, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004933, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004934, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004935, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004936, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004937, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004938, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004939, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004940, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004941, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004942, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004943, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004944, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004945, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004946, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004947, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004948, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004949, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004950, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004951, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004952, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004953, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004954, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004955, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004956, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004957, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004958, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004959, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004960, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004961, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004962, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004963, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004964, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004965, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004966, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004967, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004968, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004969, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004970, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004971, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004972, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004973, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004974, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004975, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004976, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004977, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004978, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004979, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004980, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004981, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004982, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004983, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004984, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004985, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004986, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004987, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004988, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004989, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004990, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004991, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004992, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004993, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004994, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004995, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004996, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004997, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004998, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC004999, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005000, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005001, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005002, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005003, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005004, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005005, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005006, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005007, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005008, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005009, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005010, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005011, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005012, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005013, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005014, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005015, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005016, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005017, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005018, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005019, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005020, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005021, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005022, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005023, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005024, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005025, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005026, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005027, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005028, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005029, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005030, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005031, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005032, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005033, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005034, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005035, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005036, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005037, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005038, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005039, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005040, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005041, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005042, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005043, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005044, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005045, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005046, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005047, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005048, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005049, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005050, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005051, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005052, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005053, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005054, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005055, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005056, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005057, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005058, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005059, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005060, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005061, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005062, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005063, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005064, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005065, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005066, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005067, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005068, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005069, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005070, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005071, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005072, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005073, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005074, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005075, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005076, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005077, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005078, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005079, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005080, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005081, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005082, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005083, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005084, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005085, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005086, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005087, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005088, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005089, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005090, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005091, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005092, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005093, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005094, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005095, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005096, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005097, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005098, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005099, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005100, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005101, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005102, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005103, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005104, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005105, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005106, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005107, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005108, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005109, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005110, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005111, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005112, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005113, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005114, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005115, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005116, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005117, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005118, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005119, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005120, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005121, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005122, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005123, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005124, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005125, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005126, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005127, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005128, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005129, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005130, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005131, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005132, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005133, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005134, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005135, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005136, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005137, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005138, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005139, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005140, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005141, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005142, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005143, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005144, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005145, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005146, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005147, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005148, "dEQP-VK.subgroups.arithmetic.compute.subgroupadd_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005149, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005150, "dEQP-VK.subgroups.arithmetic.compute.subgroupmul_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005151, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005152, "dEQP-VK.subgroups.arithmetic.compute.subgroupmin_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005153, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005154, "dEQP-VK.subgroups.arithmetic.compute.subgroupmax_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005155, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005156, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveadd_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005157, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005158, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemul_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005159, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005160, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemin_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005161, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005162, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivemax_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005163, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005164, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveadd_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005165, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005166, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemul_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005167, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005168, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemin_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005169, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005170, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivemax_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005171, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005172, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005173, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005174, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005175, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005176, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005177, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005178, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005179, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005180, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005181, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005182, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005183, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005184, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005185, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005186, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005187, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005188, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005189, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005190, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005191, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005192, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005193, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005194, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005195, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005196, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005197, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005198, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005199, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005200, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005201, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005202, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005203, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005204, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005205, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005206, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005207, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005208, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005209, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005210, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005211, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005212, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005213, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005214, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005215, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005216, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005217, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005218, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005219, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005220, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005221, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005222, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005223, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005224, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005225, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005226, "dEQP-VK.subgroups.arithmetic.compute.subgroupand_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005227, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005228, "dEQP-VK.subgroups.arithmetic.compute.subgroupor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005229, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005230, "dEQP-VK.subgroups.arithmetic.compute.subgroupxor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005231, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005232, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveand_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005233, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005234, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusiveor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005235, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005236, "dEQP-VK.subgroups.arithmetic.compute.subgroupinclusivexor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005237, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005238, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveand_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005239, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005240, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusiveor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005241, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005242, "dEQP-VK.subgroups.arithmetic.compute.subgroupexclusivexor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005243, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005244, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005245, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005246, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005247, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005248, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005249, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005250, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005251, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005252, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005253, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005254, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005255, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005256, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005257, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005258, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005259, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005260, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005261, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005262, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005263, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005264, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005265, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005266, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005267, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005268, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005269, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005270, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005271, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005272, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005273, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005274, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005275, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005276, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005277, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005278, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005279, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005280, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005281, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005282, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005283, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005284, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005285, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005286, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005287, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005288, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005289, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005290, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005291, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005292, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005293, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005294, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005295, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005296, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005297, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005298, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005299, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005300, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005301, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005302, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005303, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005304, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005305, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005306, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005307, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005308, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005309, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005310, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005311, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005312, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005313, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005314, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005315, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005316, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005317, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005318, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005319, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005320, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005321, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005322, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005323, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005324, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005325, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005326, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005327, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005328, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005329, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005330, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005331, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005332, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005333, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005334, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005335, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005336, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005337, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005338, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005339, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005340, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005341, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005342, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005343, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005344, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005345, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005346, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005347, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005348, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005349, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005350, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005351, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005352, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005353, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005354, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005355, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005356, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005357, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005358, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005359, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005360, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005361, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005362, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005363, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005364, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005365, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005366, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005367, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005368, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005369, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005370, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005371, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005372, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005373, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005374, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005375, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005376, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005377, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005378, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005379, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005380, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005381, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005382, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005383, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005384, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005385, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005386, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005387, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005388, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005389, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005390, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005391, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005392, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005393, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005394, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005395, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005396, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005397, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005398, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005399, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005400, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005401, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005402, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005403, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005404, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005405, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005406, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005407, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005408, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005409, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005410, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005411, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005412, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005413, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005414, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005415, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005416, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005417, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005418, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005419, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005420, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005421, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005422, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005423, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005424, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005425, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005426, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005427, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005428, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005429, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005430, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005431, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005432, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005433, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005434, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005435, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005436, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005437, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005438, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005439, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005440, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005441, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005442, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005443, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005444, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005445, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005446, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005447, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005448, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005449, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005450, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005451, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005452, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005453, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005454, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005455, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005456, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005457, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005458, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005459, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005460, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005461, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005462, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005463, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005464, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005465, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005466, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005467, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005468, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005469, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005470, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005471, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005472, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005473, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005474, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005475, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005476, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005477, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005478, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005479, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005480, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005481, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005482, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005483, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005484, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005485, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005486, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005487, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005488, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005489, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005490, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005491, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005492, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005493, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005494, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005495, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005496, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005497, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005498, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005499, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005500, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005501, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005502, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005503, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005504, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005505, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005506, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005507, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005508, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005509, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005510, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005511, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005512, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005513, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005514, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005515, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005516, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005517, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005518, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005519, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005520, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005521, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005522, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005523, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005524, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005525, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005526, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005527, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005528, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005529, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005530, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005531, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005532, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005533, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005534, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005535, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005536, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005537, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005538, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005539, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005540, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005541, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005542, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005543, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005544, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005545, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005546, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005547, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005548, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005549, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005550, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005551, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005552, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005553, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005554, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005555, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005556, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005557, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005558, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005559, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005560, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005561, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005562, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005563, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005564, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005565, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005566, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005567, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005568, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005569, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005570, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005571, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005572, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005573, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005574, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005575, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005576, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005577, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005578, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005579, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005580, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005581, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005582, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005583, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005584, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005585, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005586, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005587, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005588, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005589, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005590, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005591, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005592, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005593, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005594, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005595, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005596, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005597, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005598, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005599, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005600, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005601, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005602, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005603, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005604, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005605, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005606, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005607, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005608, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005609, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005610, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005611, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005612, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005613, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005614, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005615, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005616, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005617, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005618, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005619, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005620, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005621, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005622, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005623, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005624, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005625, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005626, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005627, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005628, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005629, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005630, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005631, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005632, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005633, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005634, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005635, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005636, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005637, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005638, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005639, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005640, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005641, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005642, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005643, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005644, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005645, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005646, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005647, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005648, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005649, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005650, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005651, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005652, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005653, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005654, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005655, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005656, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005657, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005658, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005659, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005660, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005661, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005662, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005663, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005664, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005665, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005666, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005667, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005668, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005669, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005670, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005671, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005672, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005673, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005674, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005675, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005676, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005677, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005678, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005679, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005680, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005681, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005682, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005683, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005684, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005685, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005686, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005687, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005688, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005689, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005690, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005691, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005692, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005693, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005694, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005695, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005696, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005697, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005698, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005699, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005700, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005701, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005702, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005703, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005704, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005705, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005706, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005707, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005708, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005709, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005710, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005711, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005712, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005713, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005714, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005715, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005716, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005717, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005718, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005719, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005720, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005721, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005722, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005723, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005724, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005725, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005726, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005727, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005728, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005729, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005730, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005731, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005732, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005733, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005734, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005735, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005736, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005737, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005738, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005739, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005740, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005741, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005742, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005743, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005744, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005745, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005746, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005747, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005748, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005749, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005750, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005751, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005752, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005753, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005754, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005755, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005756, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005757, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005758, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005759, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005760, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005761, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005762, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005763, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005764, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005765, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005766, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005767, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005768, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005769, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005770, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005771, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005772, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005773, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005774, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005775, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005776, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005777, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005778, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005779, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005780, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005781, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005782, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005783, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005784, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005785, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005786, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005787, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005788, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005789, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005790, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005791, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005792, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005793, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005794, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005795, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005796, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005797, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005798, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005799, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005800, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005801, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005802, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005803, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005804, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005805, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005806, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005807, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005808, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005809, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005810, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005811, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005812, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005813, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005814, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005815, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005816, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005817, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005818, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005819, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005820, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005821, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005822, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005823, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005824, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005825, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005826, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005827, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005828, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005829, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005830, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005831, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005832, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005833, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005834, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005835, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005836, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005837, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005838, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005839, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005840, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005841, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005842, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005843, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005844, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005845, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005846, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005847, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005848, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005849, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005850, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005851, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005852, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005853, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005854, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005855, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005856, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005857, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005858, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005859, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005860, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005861, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005862, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005863, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005864, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005865, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005866, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005867, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005868, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005869, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005870, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005871, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005872, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005873, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005874, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005875, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005876, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005877, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005878, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005879, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005880, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005881, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005882, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005883, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005884, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005885, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005886, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005887, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005888, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005889, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005890, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005891, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005892, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005893, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005894, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005895, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005896, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005897, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005898, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005899, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005900, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005901, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005902, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005903, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005904, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005905, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005906, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005907, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005908, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005909, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005910, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005911, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005912, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005913, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005914, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005915, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005916, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005917, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005918, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005919, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005920, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005921, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005922, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005923, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005924, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005925, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005926, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005927, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005928, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005929, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005930, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005931, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005932, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005933, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005934, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005935, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005936, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005937, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005938, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005939, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005940, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005941, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005942, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005943, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005944, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005945, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005946, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005947, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005948, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005949, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005950, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005951, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005952, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005953, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005954, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005955, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005956, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005957, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005958, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005959, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005960, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005961, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005962, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005963, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005964, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005965, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005966, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005967, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005968, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005969, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005970, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005971, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005972, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005973, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005974, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005975, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005976, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005977, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005978, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005979, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005980, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005981, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005982, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005983, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005984, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005985, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005986, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005987, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005988, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005989, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005990, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005991, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005992, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005993, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005994, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005995, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005996, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005997, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005998, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC005999, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006000, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006001, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006002, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006003, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006004, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006005, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006006, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006007, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006008, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006009, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006010, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006011, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006012, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006013, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006014, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006015, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006016, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006017, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006018, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006019, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006020, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006021, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006022, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006023, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006024, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006025, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006026, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006027, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006028, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006029, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006030, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006031, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006032, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006033, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006034, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006035, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006036, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006037, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006038, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006039, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006040, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006041, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006042, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006043, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006044, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006045, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006046, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006047, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006048, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006049, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006050, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006051, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006052, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006053, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006054, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006055, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006056, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006057, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006058, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006059, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006060, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006061, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006062, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006063, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006064, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006065, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006066, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006067, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006068, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006069, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006070, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006071, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006072, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006073, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006074, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006075, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006076, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006077, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006078, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006079, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006080, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006081, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006082, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006083, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006084, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006085, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006086, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006087, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006088, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006089, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006090, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006091, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006092, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006093, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006094, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006095, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006096, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006097, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006098, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006099, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006100, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006101, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006102, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006103, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006104, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006105, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006106, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006107, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006108, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006109, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006110, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006111, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006112, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006113, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006114, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006115, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006116, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006117, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006118, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006119, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006120, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006121, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006122, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006123, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006124, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006125, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006126, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006127, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006128, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006129, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006130, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006131, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006132, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006133, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006134, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006135, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006136, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006137, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006138, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006139, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006140, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006141, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006142, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006143, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006144, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006145, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006146, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006147, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006148, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006149, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006150, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006151, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006152, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006153, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006154, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006155, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006156, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006157, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006158, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006159, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006160, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006161, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006162, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006163, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006164, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006165, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006166, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006167, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006168, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006169, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006170, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006171, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006172, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006173, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006174, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006175, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006176, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006177, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006178, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006179, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006180, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006181, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006182, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006183, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006184, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006185, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006186, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006187, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006188, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006189, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006190, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006191, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006192, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006193, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006194, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006195, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006196, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006197, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006198, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006199, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006200, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006201, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006202, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006203, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006204, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006205, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006206, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006207, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006208, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006209, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006210, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006211, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006212, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006213, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006214, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006215, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006216, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006217, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006218, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006219, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006220, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006221, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006222, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006223, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006224, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006225, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006226, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006227, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006228, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006229, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006230, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006231, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006232, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006233, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006234, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006235, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006236, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006237, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006238, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006239, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006240, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006241, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006242, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006243, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006244, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006245, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006246, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006247, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006248, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006249, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006250, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006251, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006252, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006253, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006254, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006255, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006256, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006257, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006258, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006259, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006260, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006261, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006262, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006263, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006264, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006265, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006266, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006267, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006268, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006269, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006270, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006271, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006272, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006273, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006274, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006275, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006276, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006277, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006278, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006279, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006280, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006281, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006282, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006283, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006284, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006285, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006286, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006287, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006288, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006289, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006290, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006291, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006292, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006293, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006294, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006295, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006296, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006297, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006298, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006299, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006300, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006301, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006302, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006303, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006304, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006305, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006306, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006307, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006308, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006309, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006310, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006311, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006312, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006313, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006314, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006315, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006316, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006317, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006318, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006319, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006320, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006321, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006322, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006323, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006324, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006325, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006326, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006327, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006328, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006329, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006330, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006331, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006332, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006333, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006334, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006335, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006336, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006337, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006338, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006339, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006340, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006341, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006342, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006343, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006344, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006345, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006346, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006347, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006348, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006349, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006350, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006351, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006352, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006353, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006354, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006355, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006356, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006357, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006358, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006359, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006360, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006361, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006362, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006363, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006364, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006365, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006366, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006367, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006368, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006369, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006370, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006371, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006372, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006373, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006374, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006375, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006376, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006377, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006378, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006379, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006380, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006381, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006382, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006383, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006384, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006385, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006386, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006387, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006388, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006389, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006390, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006391, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006392, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006393, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006394, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006395, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006396, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006397, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006398, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006399, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006400, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006401, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006402, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006403, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006404, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006405, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006406, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006407, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006408, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006409, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006410, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006411, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006412, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006413, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006414, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006415, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006416, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006417, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006418, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006419, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006420, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006421, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006422, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006423, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006424, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006425, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006426, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006427, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006428, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006429, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006430, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006431, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006432, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006433, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006434, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006435, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006436, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006437, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006438, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006439, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006440, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006441, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006442, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006443, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006444, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006445, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006446, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006447, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006448, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006449, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006450, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006451, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006452, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006453, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006454, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006455, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006456, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006457, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006458, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006459, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006460, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006461, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006462, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006463, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006464, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006465, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006466, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006467, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006468, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006469, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006470, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006471, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006472, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006473, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006474, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006475, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006476, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006477, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006478, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006479, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006480, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006481, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006482, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006483, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006484, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006485, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006486, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006487, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006488, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006489, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006490, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006491, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006492, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006493, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006494, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006495, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006496, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006497, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006498, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006499, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006500, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006501, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006502, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006503, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006504, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006505, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006506, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006507, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006508, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006509, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006510, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006511, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006512, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006513, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006514, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006515, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006516, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006517, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006518, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006519, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006520, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006521, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006522, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006523, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006524, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006525, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006526, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006527, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006528, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006529, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006530, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006531, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006532, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006533, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006534, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006535, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006536, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006537, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006538, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006539, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006540, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006541, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006542, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006543, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006544, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006545, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006546, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006547, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006548, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006549, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006550, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006551, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006552, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006553, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006554, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006555, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006556, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006557, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006558, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006559, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006560, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006561, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006562, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006563, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006564, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006565, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006566, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006567, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006568, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006569, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006570, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006571, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006572, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006573, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006574, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006575, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006576, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006577, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006578, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006579, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006580, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006581, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006582, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006583, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006584, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006585, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006586, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006587, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006588, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006589, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006590, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006591, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006592, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006593, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006594, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006595, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006596, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006597, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006598, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006599, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006600, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006601, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006602, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006603, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006604, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006605, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006606, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006607, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006608, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006609, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006610, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006611, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006612, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006613, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006614, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006615, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006616, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006617, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006618, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006619, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006620, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006621, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006622, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006623, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006624, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006625, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006626, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006627, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006628, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006629, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006630, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006631, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006632, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006633, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006634, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006635, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006636, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006637, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006638, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006639, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006640, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006641, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006642, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006643, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006644, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006645, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006646, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006647, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006648, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006649, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006650, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006651, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006652, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006653, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006654, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006655, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006656, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006657, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006658, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006659, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006660, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006661, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006662, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006663, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006664, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006665, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006666, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006667, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006668, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006669, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006670, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006671, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006672, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006673, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006674, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006675, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006676, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006677, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006678, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006679, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006680, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006681, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006682, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006683, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006684, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006685, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006686, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006687, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006688, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006689, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006690, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006691, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006692, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006693, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006694, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006695, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006696, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006697, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006698, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006699, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006700, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006701, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006702, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006703, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006704, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006705, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006706, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006707, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006708, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006709, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006710, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006711, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006712, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006713, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006714, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006715, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006716, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006717, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006718, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006719, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006720, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006721, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006722, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006723, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006724, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006725, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006726, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006727, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006728, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006729, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006730, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006731, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006732, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006733, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006734, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006735, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006736, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006737, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006738, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006739, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006740, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006741, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006742, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006743, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006744, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006745, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006746, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006747, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006748, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006749, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006750, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006751, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006752, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006753, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006754, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006755, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006756, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006757, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006758, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006759, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006760, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006761, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006762, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006763, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006764, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006765, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006766, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006767, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006768, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006769, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006770, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006771, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006772, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006773, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006774, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006775, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006776, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006777, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006778, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006779, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006780, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006781, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006782, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006783, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006784, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006785, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006786, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006787, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006788, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006789, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006790, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006791, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006792, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006793, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006794, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006795, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006796, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006797, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006798, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006799, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006800, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006801, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006802, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006803, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006804, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006805, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006806, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006807, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006808, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006809, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006810, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006811, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006812, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006813, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006814, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006815, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006816, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006817, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006818, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006819, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006820, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006821, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006822, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006823, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006824, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006825, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006826, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006827, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006828, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006829, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006830, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006831, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006832, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006833, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006834, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006835, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006836, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006837, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006838, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006839, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006840, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006841, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006842, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006843, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006844, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006845, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006846, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006847, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006848, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006849, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006850, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006851, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006852, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006853, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006854, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006855, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006856, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006857, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006858, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006859, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006860, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006861, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006862, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006863, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006864, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006865, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006866, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006867, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006868, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006869, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006870, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006871, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006872, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006873, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006874, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006875, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006876, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006877, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006878, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006879, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006880, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006881, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006882, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006883, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006884, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006885, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006886, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006887, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006888, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006889, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006890, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006891, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006892, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006893, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006894, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006895, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006896, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006897, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006898, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006899, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006900, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006901, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006902, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006903, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006904, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006905, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006906, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006907, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006908, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006909, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006910, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006911, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006912, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006913, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006914, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006915, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006916, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006917, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006918, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006919, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006920, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006921, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006922, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006923, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006924, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006925, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006926, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006927, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006928, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006929, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006930, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006931, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006932, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006933, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006934, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006935, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006936, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006937, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006938, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006939, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006940, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006941, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006942, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006943, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006944, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006945, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006946, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006947, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006948, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006949, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006950, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006951, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006952, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006953, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006954, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006955, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006956, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006957, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006958, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006959, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006960, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006961, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006962, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006963, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006964, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006965, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006966, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006967, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006968, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006969, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006970, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006971, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006972, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006973, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006974, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006975, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006976, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006977, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006978, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006979, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006980, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006981, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006982, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006983, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006984, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006985, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006986, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006987, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006988, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006989, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006990, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006991, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006992, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006993, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006994, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006995, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006996, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006997, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006998, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC006999, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007000, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007001, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007002, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007003, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007004, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007005, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007006, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007007, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007008, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007009, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007010, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007011, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007012, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007013, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007014, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007015, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007016, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007017, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007018, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007019, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007020, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007021, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007022, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007023, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007024, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007025, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007026, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007027, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007028, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007029, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007030, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007031, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007032, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007033, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007034, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007035, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007036, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007037, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007038, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007039, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007040, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007041, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007042, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007043, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007044, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007045, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007046, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007047, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007048, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007049, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007050, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007051, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007052, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007053, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007054, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007055, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007056, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007057, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007058, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007059, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007060, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007061, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007062, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007063, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007064, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007065, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007066, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007067, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007068, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007069, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007070, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007071, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007072, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007073, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007074, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007075, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007076, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007077, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007078, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007079, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007080, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007081, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007082, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007083, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007084, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007085, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007086, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007087, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007088, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007089, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007090, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007091, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007092, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007093, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007094, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007095, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007096, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007097, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007098, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007099, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007100, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007101, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007102, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007103, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007104, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007105, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007106, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007107, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007108, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007109, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007110, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007111, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007112, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007113, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007114, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007115, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007116, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007117, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007118, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007119, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007120, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007121, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007122, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007123, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007124, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007125, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007126, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007127, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007128, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007129, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007130, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007131, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007132, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007133, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007134, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007135, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007136, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007137, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007138, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007139, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007140, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007141, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007142, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007143, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007144, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007145, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007146, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007147, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007148, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007149, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007150, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007151, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007152, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007153, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007154, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007155, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007156, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007157, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007158, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007159, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007160, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007161, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007162, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007163, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007164, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007165, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007166, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007167, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007168, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007169, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007170, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007171, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007172, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007173, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007174, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007175, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007176, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007177, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007178, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007179, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007180, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007181, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007182, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007183, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007184, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007185, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007186, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007187, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007188, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007189, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007190, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007191, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007192, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007193, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007194, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007195, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007196, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007197, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007198, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007199, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007200, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007201, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007202, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007203, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007204, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007205, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007206, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007207, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007208, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007209, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007210, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007211, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007212, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007213, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007214, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007215, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007216, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007217, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007218, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007219, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007220, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007221, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007222, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007223, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007224, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007225, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007226, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007227, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007228, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007229, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007230, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007231, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007232, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007233, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007234, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007235, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007236, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007237, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007238, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007239, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007240, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007241, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007242, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007243, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007244, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007245, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007246, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007247, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007248, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007249, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007250, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007251, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007252, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007253, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007254, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007255, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007256, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007257, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007258, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007259, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007260, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007261, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007262, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007263, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007264, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007265, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007266, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007267, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007268, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007269, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007270, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007271, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007272, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007273, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007274, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007275, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007276, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007277, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007278, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007279, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007280, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007281, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007282, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007283, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007284, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007285, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007286, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007287, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007288, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007289, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007290, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007291, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007292, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007293, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007294, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007295, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007296, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007297, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007298, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007299, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007300, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007301, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007302, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007303, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007304, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007305, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007306, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007307, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007308, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007309, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007310, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007311, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007312, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007313, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007314, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007315, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007316, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007317, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007318, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007319, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007320, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007321, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007322, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007323, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007324, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007325, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007326, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007327, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007328, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007329, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007330, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007331, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007332, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007333, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007334, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007335, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007336, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007337, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007338, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007339, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007340, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007341, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007342, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007343, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007344, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007345, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007346, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007347, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007348, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007349, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007350, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007351, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007352, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007353, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007354, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007355, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007356, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007357, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007358, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007359, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007360, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007361, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007362, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007363, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007364, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007365, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007366, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007367, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007368, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007369, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007370, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007371, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007372, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007373, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007374, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007375, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007376, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007377, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007378, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007379, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007380, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007381, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007382, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007383, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007384, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007385, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007386, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007387, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007388, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007389, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007390, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007391, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007392, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007393, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007394, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007395, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007396, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007397, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007398, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007399, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007400, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007401, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007402, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007403, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007404, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007405, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007406, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007407, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007408, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007409, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007410, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007411, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007412, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007413, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007414, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007415, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007416, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007417, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007418, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007419, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007420, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007421, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007422, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007423, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007424, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007425, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007426, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007427, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007428, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007429, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007430, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007431, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007432, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007433, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007434, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007435, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007436, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007437, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007438, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007439, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007440, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007441, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007442, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007443, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007444, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007445, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007446, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007447, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007448, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007449, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007450, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007451, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007452, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007453, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007454, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007455, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007456, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007457, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007458, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007459, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007460, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007461, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007462, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007463, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007464, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007465, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007466, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007467, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007468, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007469, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007470, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007471, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007472, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007473, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007474, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007475, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007476, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007477, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007478, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007479, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007480, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007481, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007482, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007483, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007484, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007485, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007486, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007487, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007488, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007489, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007490, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007491, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007492, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007493, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007494, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007495, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007496, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007497, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007498, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007499, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007500, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007501, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007502, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007503, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007504, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007505, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007506, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007507, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007508, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007509, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007510, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007511, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007512, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007513, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007514, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007515, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007516, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007517, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007518, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007519, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007520, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007521, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007522, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007523, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007524, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007525, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007526, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007527, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007528, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007529, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007530, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007531, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007532, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007533, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007534, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007535, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007536, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007537, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007538, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007539, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007540, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007541, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007542, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007543, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007544, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007545, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007546, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007547, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007548, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007549, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007550, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007551, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007552, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007553, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007554, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007555, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007556, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007557, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007558, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007559, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007560, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007561, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007562, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007563, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007564, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007565, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007566, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007567, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007568, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007569, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007570, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007571, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007572, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007573, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007574, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007575, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007576, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007577, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007578, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007579, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007580, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007581, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007582, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007583, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007584, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007585, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007586, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007587, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007588, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007589, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007590, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007591, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007592, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007593, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007594, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007595, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007596, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007597, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007598, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007599, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007600, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007601, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007602, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007603, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007604, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007605, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007606, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007607, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007608, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007609, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007610, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007611, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007612, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007613, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007614, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007615, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007616, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007617, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007618, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007619, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007620, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007621, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007622, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007623, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007624, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007625, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007626, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007627, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007628, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007629, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007630, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007631, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007632, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007633, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007634, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007635, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007636, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007637, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007638, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007639, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007640, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007641, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007642, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007643, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007644, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007645, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007646, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007647, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007648, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007649, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007650, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007651, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007652, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007653, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007654, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007655, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007656, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007657, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007658, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007659, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007660, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007661, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007662, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007663, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007664, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007665, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007666, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007667, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007668, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007669, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007670, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007671, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007672, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007673, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007674, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007675, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007676, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007677, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007678, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007679, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007680, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007681, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007682, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007683, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007684, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007685, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007686, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007687, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007688, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007689, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007690, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007691, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007692, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007693, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007694, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007695, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007696, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007697, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007698, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007699, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007700, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007701, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007702, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007703, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007704, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007705, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007706, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007707, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007708, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007709, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007710, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007711, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007712, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007713, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007714, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007715, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007716, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007717, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007718, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007719, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007720, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007721, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007722, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007723, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007724, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007725, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007726, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007727, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007728, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007729, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007730, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007731, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007732, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007733, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007734, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007735, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007736, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007737, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007738, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007739, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007740, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007741, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007742, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007743, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007744, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007745, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007746, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007747, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007748, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007749, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007750, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007751, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007752, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007753, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007754, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007755, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007756, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007757, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007758, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007759, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007760, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007761, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007762, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007763, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007764, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007765, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007766, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007767, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007768, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007769, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007770, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007771, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007772, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007773, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007774, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007775, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007776, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007777, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007778, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007779, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007780, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007781, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007782, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007783, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007784, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007785, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007786, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007787, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007788, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007789, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007790, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007791, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007792, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007793, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007794, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007795, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007796, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007797, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007798, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007799, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007800, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007801, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007802, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007803, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007804, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007805, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007806, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007807, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007808, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007809, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007810, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007811, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007812, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007813, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007814, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007815, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007816, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007817, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007818, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007819, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007820, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007821, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007822, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007823, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007824, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007825, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007826, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007827, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007828, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007829, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007830, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007831, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007832, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007833, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007834, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007835, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007836, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007837, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007838, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007839, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007840, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007841, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007842, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007843, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007844, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007845, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007846, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007847, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007848, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007849, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007850, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007851, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007852, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007853, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007854, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007855, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007856, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007857, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007858, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007859, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007860, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007861, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007862, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007863, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007864, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007865, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007866, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007867, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007868, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007869, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007870, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007871, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007872, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007873, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007874, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007875, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007876, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007877, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007878, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007879, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007880, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007881, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007882, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007883, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007884, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007885, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007886, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007887, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007888, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007889, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007890, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007891, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007892, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007893, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007894, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007895, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007896, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007897, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007898, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007899, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007900, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007901, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007902, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007903, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007904, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007905, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007906, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007907, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007908, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007909, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007910, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007911, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007912, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007913, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007914, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007915, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007916, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007917, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007918, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007919, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007920, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007921, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007922, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007923, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007924, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007925, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007926, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007927, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007928, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007929, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007930, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007931, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007932, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007933, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007934, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007935, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007936, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007937, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007938, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007939, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007940, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007941, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007942, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007943, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007944, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007945, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007946, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007947, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007948, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007949, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007950, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007951, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007952, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007953, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007954, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007955, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007956, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007957, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007958, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007959, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007960, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007961, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007962, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007963, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007964, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007965, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007966, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007967, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007968, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007969, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007970, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007971, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007972, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007973, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007974, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007975, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007976, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007977, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007978, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007979, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007980, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007981, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007982, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007983, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007984, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007985, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007986, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007987, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007988, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007989, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007990, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007991, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007992, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007993, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007994, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007995, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007996, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007997, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007998, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC007999, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008000, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008001, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008002, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008003, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008004, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008005, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008006, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008007, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008008, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008009, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008010, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008011, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008012, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008013, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008014, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008015, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008016, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008017, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008018, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008019, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008020, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008021, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008022, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008023, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008024, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008025, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008026, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008027, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008028, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008029, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008030, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008031, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008032, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008033, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008034, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008035, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008036, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008037, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008038, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008039, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008040, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008041, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008042, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008043, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008044, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008045, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008046, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008047, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008048, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008049, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008050, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008051, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008052, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008053, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008054, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008055, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008056, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008057, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008058, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008059, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008060, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008061, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008062, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008063, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008064, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008065, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008066, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008067, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008068, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008069, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008070, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008071, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008072, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008073, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008074, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008075, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008076, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008077, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008078, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008079, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008080, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008081, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008082, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008083, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008084, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008085, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008086, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008087, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008088, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008089, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008090, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008091, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008092, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008093, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008094, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008095, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008096, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008097, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008098, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008099, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008100, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008101, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008102, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008103, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008104, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008105, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008106, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008107, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008108, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008109, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008110, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008111, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008112, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008113, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008114, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008115, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008116, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008117, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008118, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008119, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008120, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008121, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008122, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008123, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008124, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008125, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008126, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008127, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008128, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008129, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008130, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008131, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008132, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008133, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008134, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008135, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008136, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008137, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008138, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008139, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008140, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008141, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008142, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008143, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008144, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008145, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008146, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008147, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008148, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008149, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008150, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008151, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008152, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008153, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008154, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008155, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008156, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008157, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008158, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008159, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008160, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008161, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008162, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008163, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008164, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008165, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008166, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008167, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008168, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008169, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008170, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008171, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008172, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008173, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008174, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008175, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008176, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008177, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008178, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008179, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008180, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008181, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008182, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008183, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008184, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008185, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008186, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008187, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008188, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008189, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008190, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008191, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008192, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008193, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008194, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008195, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008196, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008197, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008198, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008199, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008200, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008201, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008202, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008203, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008204, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008205, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008206, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008207, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008208, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008209, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008210, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008211, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008212, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008213, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008214, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008215, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008216, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008217, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008218, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008219, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008220, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008221, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008222, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008223, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008224, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008225, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008226, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008227, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008228, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008229, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008230, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008231, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008232, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008233, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008234, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008235, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008236, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008237, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008238, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008239, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008240, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008241, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008242, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008243, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008244, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008245, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008246, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008247, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008248, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008249, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008250, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008251, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008252, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008253, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008254, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008255, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008256, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008257, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008258, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008259, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008260, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008261, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008262, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008263, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008264, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008265, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008266, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008267, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008268, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008269, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008270, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008271, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008272, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008273, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008274, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008275, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008276, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008277, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008278, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008279, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008280, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008281, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008282, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008283, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008284, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008285, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008286, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008287, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008288, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008289, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008290, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008291, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008292, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008293, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008294, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008295, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008296, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008297, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008298, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008299, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008300, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008301, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008302, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008303, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008304, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008305, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008306, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008307, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008308, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008309, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008310, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008311, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008312, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008313, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008314, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008315, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008316, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008317, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008318, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008319, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008320, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008321, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008322, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008323, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008324, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008325, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008326, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008327, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008328, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008329, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008330, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008331, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008332, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008333, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008334, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008335, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008336, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008337, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008338, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008339, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008340, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008341, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008342, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008343, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008344, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008345, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008346, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008347, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008348, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008349, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008350, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008351, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008352, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008353, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008354, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008355, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008356, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008357, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008358, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008359, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008360, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008361, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008362, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008363, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008364, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008365, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008366, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008367, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008368, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008369, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008370, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008371, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008372, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008373, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008374, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008375, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008376, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008377, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008378, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008379, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008380, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008381, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008382, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008383, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008384, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008385, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008386, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008387, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008388, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008389, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008390, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008391, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008392, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008393, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008394, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008395, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008396, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008397, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008398, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008399, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008400, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008401, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008402, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008403, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008404, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008405, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008406, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008407, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008408, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008409, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008410, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008411, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008412, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008413, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008414, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008415, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008416, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008417, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008418, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008419, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008420, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008421, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008422, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008423, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008424, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008425, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008426, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008427, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008428, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008429, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008430, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008431, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008432, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008433, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008434, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008435, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008436, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008437, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008438, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008439, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008440, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008441, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008442, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008443, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008444, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008445, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008446, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008447, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008448, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008449, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008450, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008451, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008452, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008453, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008454, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008455, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008456, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008457, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008458, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008459, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008460, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008461, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008462, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupadd_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008463, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008464, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008465, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008466, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmul_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008467, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008468, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008469, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008470, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmin_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008471, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008472, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008473, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008474, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupmax_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008475, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008476, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008477, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008478, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveadd_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008479, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008480, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008481, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008482, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemul_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008483, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008484, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008485, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008486, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemin_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008487, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008488, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008489, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008490, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivemax_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008491, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008492, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008493, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008494, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveadd_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008495, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008496, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008497, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008498, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemul_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008499, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008500, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008501, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008502, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemin_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008503, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008504, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008505, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008506, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivemax_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008507, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008508, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008509, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008510, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008511, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008512, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008513, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008514, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008515, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008516, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008517, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008518, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008519, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008520, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008521, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008522, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008523, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008524, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008525, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008526, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008527, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008528, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008529, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008530, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008531, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008532, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008533, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008534, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008535, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008536, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008537, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008538, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008539, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008540, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008541, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008542, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008543, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008544, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008545, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008546, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008547, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008548, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008549, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008550, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008551, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008552, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008553, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008554, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008555, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008556, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008557, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008558, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008559, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008560, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008561, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008562, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008563, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008564, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008565, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008566, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008567, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008568, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008569, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008570, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008571, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008572, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008573, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008574, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008575, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008576, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008577, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008578, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008579, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008580, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008581, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008582, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008583, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008584, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008585, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008586, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008587, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008588, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008589, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008590, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008591, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008592, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008593, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008594, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008595, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008596, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008597, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008598, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008599, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008600, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008601, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008602, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008603, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008604, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008605, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008606, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008607, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008608, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008609, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008610, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008611, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008612, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008613, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008614, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008615, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008616, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008617, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008618, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupand_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008619, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008620, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008621, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008622, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008623, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008624, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008625, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008626, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupxor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008627, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008628, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008629, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008630, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveand_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008631, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008632, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008633, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008634, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusiveor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008635, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008636, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008637, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008638, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupinclusivexor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008639, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008640, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008641, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008642, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveand_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008643, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008644, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008645, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008646, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusiveor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008647, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008648, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008649, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008650, "dEQP-VK.subgroups.arithmetic.framebuffer.subgroupexclusivexor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008651, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008652, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008653, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008654, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008655, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008656, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008657, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008658, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008659, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008660, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008661, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008662, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008663, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008664, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008665, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008666, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008667, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008668, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008669, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008670, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008671, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008672, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008673, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008674, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008675, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008676, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008677, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008678, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008679, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008680, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008681, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008682, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008683, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008684, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008685, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008686, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008687, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008688, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008689, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008690, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008691, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008692, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008693, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008694, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008695, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008696, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008697, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008698, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008699, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008700, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008701, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008702, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008703, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008704, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008705, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008706, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008707, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008708, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008709, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008710, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008711, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008712, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008713, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008714, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008715, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008716, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008717, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008718, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008719, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008720, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008721, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008722, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008723, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008724, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008725, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008726, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008727, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008728, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008729, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008730, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008731, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008732, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008733, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008734, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008735, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008736, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008737, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008738, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008739, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008740, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008741, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008742, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008743, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008744, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008745, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008746, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008747, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008748, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008749, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008750, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008751, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008752, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008753, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008754, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008755, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008756, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008757, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008758, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008759, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008760, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008761, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008762, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008763, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008764, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008765, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008766, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008767, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008768, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008769, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008770, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008771, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008772, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008773, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008774, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008775, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008776, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008777, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008778, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008779, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008780, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008781, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008782, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008783, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008784, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008785, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008786, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008787, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008788, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008789, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008790, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008791, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008792, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008793, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008794, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008795, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008796, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008797, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008798, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008799, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008800, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008801, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008802, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008803, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008804, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008805, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008806, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008807, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008808, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008809, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008810, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008811, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008812, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008813, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008814, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008815, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008816, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008817, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008818, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008819, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008820, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008821, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008822, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008823, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008824, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008825, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008826, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008827, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008828, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008829, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008830, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008831, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008832, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008833, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008834, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008835, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008836, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008837, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008838, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008839, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008840, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008841, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008842, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008843, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008844, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008845, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008846, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008847, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008848, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008849, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008850, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008851, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008852, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008853, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008854, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008855, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008856, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008857, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008858, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008859, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008860, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008861, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008862, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008863, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008864, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008865, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008866, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008867, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008868, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008869, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008870, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008871, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008872, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008873, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008874, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008875, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008876, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008877, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008878, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008879, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008880, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008881, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008882, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008883, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008884, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008885, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008886, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008887, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008888, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008889, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008890, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008891, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008892, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008893, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008894, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008895, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008896, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008897, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008898, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008899, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008900, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008901, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008902, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008903, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008904, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008905, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008906, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008907, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008908, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008909, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008910, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008911, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008912, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008913, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008914, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008915, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008916, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008917, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008918, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008919, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008920, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008921, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008922, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008923, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008924, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008925, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008926, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008927, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008928, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008929, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008930, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008931, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008932, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008933, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008934, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008935, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008936, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008937, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008938, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008939, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008940, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008941, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008942, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008943, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008944, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008945, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008946, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008947, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008948, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008949, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008950, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008951, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008952, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008953, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008954, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008955, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008956, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008957, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008958, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008959, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008960, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008961, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008962, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008963, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008964, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008965, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008966, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008967, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008968, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008969, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008970, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008971, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008972, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008973, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008974, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008975, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008976, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008977, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008978, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008979, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008980, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008981, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008982, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008983, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008984, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008985, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008986, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008987, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008988, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008989, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008990, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008991, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008992, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008993, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008994, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008995, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008996, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008997, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008998, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC008999, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009000, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009001, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009002, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009003, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009004, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009005, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009006, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009007, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupinclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009008, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009009, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC009010, "dEQP-VK.subgroups.arithmetic.ray_tracing.subgroupexclusivexor_bvec4.*");
