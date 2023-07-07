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

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009011, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009012, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009013, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009014, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009015, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009016, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009017, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009018, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009019, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009020, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009021, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009022, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009023, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009024, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009025, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009026, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009027, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009028, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009029, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009030, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009031, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009032, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009033, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009034, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009035, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009036, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009037, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009038, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009039, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009040, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009041, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009042, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009043, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009044, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009045, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009046, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009047, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009048, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009049, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009050, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009051, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009052, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009053, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009054, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009055, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009056, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009057, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009058, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009059, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009060, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009061, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009062, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009063, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009064, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009065, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009066, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009067, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009068, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009069, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009070, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009071, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009072, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009073, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009074, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009075, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009076, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009077, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009078, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009079, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009080, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009081, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009082, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009083, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009084, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009085, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009086, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009087, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009088, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009089, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009090, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009091, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009092, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009093, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009094, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009095, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009096, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009097, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009098, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009099, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009100, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009101, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009102, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009103, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009104, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009105, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009106, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009107, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009108, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009109, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009110, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009111, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009112, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009113, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009114, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009115, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009116, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009117, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009118, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009119, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009120, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009121, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009122, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009123, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009124, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009125, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009126, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009127, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009128, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009129, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009130, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009131, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009132, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009133, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009134, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009135, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009136, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009137, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009138, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009139, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009140, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009141, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009142, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009143, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009144, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009145, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009146, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009147, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009148, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009149, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009150, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009151, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009152, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009153, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009154, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009155, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009156, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009157, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009158, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009159, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009160, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009161, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009162, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009163, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009164, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009165, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009166, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009167, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009168, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009169, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009170, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009171, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009172, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009173, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009174, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009175, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009176, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009177, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009178, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009179, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009180, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009181, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009182, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009183, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009184, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009185, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009186, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009187, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009188, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009189, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009190, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009191, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009192, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009193, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009194, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009195, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009196, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009197, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009198, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009199, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009200, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009201, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009202, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009203, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009204, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009205, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009206, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009207, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009208, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009209, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009210, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009211, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009212, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009213, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009214, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009215, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009216, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009217, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009218, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009219, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009220, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009221, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009222, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009223, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009224, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009225, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009226, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009227, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009228, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009229, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009230, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009231, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009232, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009233, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009234, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009235, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009236, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009237, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009238, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009239, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009240, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009241, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009242, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009243, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009244, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009245, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009246, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009247, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009248, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009249, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009250, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009251, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009252, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009253, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009254, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009255, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009256, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009257, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009258, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009259, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009260, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009261, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009262, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009263, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009264, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009265, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009266, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009267, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009268, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009269, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009270, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009271, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009272, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009273, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009274, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009275, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009276, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009277, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009278, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009279, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009280, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009281, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009282, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009283, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009284, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009285, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009286, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009287, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009288, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009289, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009290, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009291, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009292, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009293, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009294, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009295, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009296, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009297, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009298, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009299, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009300, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009301, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009302, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009303, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009304, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009305, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009306, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009307, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009308, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009309, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009310, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009311, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009312, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009313, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009314, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009315, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009316, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009317, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009318, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009319, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009320, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009321, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009322, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009323, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009324, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009325, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009326, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009327, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009328, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009329, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009330, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009331, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009332, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009333, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009334, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009335, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009336, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009337, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009338, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009339, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009340, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009341, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009342, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009343, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009344, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009345, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009346, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009347, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009348, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009349, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009350, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009351, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009352, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009353, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009354, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009355, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009356, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009357, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009358, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009359, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009360, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009361, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009362, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009363, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009364, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009365, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009366, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009367, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009368, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009369, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009370, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009371, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009372, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009373, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009374, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009375, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009376, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009377, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009378, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009379, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009380, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009381, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009382, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009383, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009384, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009385, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009386, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009387, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009388, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009389, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009390, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009391, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009392, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009393, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009394, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009395, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009396, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009397, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009398, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009399, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009400, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009401, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009402, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009403, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009404, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009405, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009406, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009407, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009408, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009409, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009410, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009411, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009412, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009413, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009414, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009415, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009416, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009417, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009418, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009419, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009420, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009421, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009422, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009423, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009424, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009425, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009426, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009427, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009428, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009429, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009430, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009431, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009432, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009433, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009434, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009435, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009436, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009437, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009438, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009439, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009440, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009441, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009442, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009443, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009444, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009445, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009446, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009447, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009448, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009449, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009450, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009451, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009452, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009453, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009454, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009455, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009456, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009457, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009458, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009459, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009460, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009461, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009462, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009463, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009464, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009465, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009466, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009467, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009468, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009469, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009470, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009471, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009472, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009473, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009474, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009475, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009476, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009477, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009478, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009479, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009480, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009481, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009482, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009483, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009484, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009485, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009486, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009487, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009488, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009489, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009490, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009491, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009492, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009493, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009494, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009495, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009496, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009497, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009498, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009499, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009500, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009501, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009502, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009503, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009504, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009505, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009506, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009507, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009508, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009509, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009510, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009511, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009512, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009513, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009514, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009515, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009516, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009517, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009518, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009519, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009520, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009521, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009522, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009523, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009524, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009525, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009526, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009527, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009528, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009529, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009530, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009531, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009532, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009533, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009534, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009535, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009536, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009537, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009538, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009539, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009540, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009541, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009542, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009543, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009544, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009545, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009546, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009547, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009548, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009549, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009550, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009551, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009552, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009553, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009554, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009555, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009556, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009557, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009558, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009559, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009560, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009561, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009562, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009563, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009564, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009565, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009566, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009567, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009568, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009569, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009570, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009571, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009572, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009573, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009574, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009575, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009576, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009577, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009578, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009579, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009580, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009581, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009582, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009583, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009584, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009585, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009586, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009587, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009588, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009589, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009590, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009591, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009592, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009593, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009594, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009595, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009596, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009597, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009598, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009599, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009600, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009601, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009602, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009603, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009604, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009605, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009606, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009607, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009608, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009609, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009610, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009611, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009612, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009613, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009614, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009615, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009616, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009617, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009618, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009619, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009620, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009621, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009622, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009623, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009624, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009625, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009626, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009627, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009628, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009629, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009630, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009631, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009632, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009633, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009634, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009635, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009636, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009637, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009638, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009639, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009640, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009641, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009642, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009643, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009644, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009645, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009646, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009647, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009648, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009649, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009650, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009651, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009652, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009653, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009654, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009655, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009656, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009657, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009658, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009659, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009660, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009661, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009662, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009663, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009664, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009665, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009666, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009667, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009668, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009669, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009670, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009671, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009672, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009673, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009674, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009675, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009676, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009677, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009678, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009679, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009680, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009681, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009682, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009683, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009684, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009685, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009686, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009687, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009688, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009689, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009690, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009691, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009692, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009693, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009694, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009695, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009696, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009697, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009698, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009699, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009700, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009701, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009702, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009703, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009704, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009705, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009706, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009707, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009708, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009709, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009710, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009711, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009712, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009713, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009714, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009715, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009716, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009717, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009718, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009719, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009720, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009721, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009722, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009723, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009724, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009725, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009726, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009727, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009728, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009729, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009730, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009731, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009732, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009733, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009734, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009735, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009736, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009737, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009738, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009739, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009740, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009741, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009742, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009743, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009744, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009745, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009746, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009747, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009748, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009749, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009750, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009751, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009752, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009753, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009754, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009755, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009756, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009757, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009758, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009759, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009760, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009761, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009762, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009763, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009764, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009765, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009766, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009767, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009768, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009769, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009770, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009771, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009772, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009773, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009774, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009775, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009776, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009777, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009778, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009779, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009780, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009781, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009782, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009783, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009784, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009785, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009786, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009787, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009788, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009789, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009790, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009791, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009792, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009793, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009794, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009795, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009796, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009797, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009798, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009799, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009800, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009801, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009802, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009803, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009804, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009805, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009806, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009807, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009808, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009809, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009810, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009811, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009812, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009813, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009814, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009815, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009816, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009817, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009818, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009819, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009820, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009821, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009822, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009823, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009824, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009825, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009826, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009827, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009828, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009829, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009830, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009831, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009832, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009833, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009834, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009835, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009836, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009837, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009838, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009839, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009840, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009841, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009842, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009843, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009844, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009845, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009846, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009847, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009848, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009849, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009850, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009851, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009852, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009853, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009854, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009855, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009856, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009857, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009858, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009859, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009860, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009861, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009862, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009863, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009864, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009865, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009866, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009867, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009868, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009869, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009870, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009871, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009872, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009873, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009874, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009875, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009876, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009877, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009878, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009879, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009880, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009881, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009882, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009883, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009884, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009885, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009886, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009887, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009888, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009889, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009890, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009891, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009892, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009893, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009894, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009895, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009896, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009897, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009898, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009899, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009900, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009901, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009902, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009903, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009904, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009905, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009906, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009907, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009908, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009909, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009910, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009911, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009912, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009913, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009914, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009915, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009916, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009917, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009918, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009919, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009920, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009921, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009922, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009923, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009924, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009925, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009926, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009927, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009928, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009929, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009930, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009931, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009932, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009933, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009934, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009935, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009936, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009937, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009938, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009939, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009940, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009941, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009942, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009943, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009944, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009945, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009946, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009947, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009948, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009949, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009950, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009951, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009952, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009953, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009954, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009955, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009956, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009957, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009958, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009959, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009960, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009961, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009962, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009963, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009964, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009965, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009966, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009967, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009968, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009969, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009970, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009971, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009972, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009973, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009974, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009975, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009976, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009977, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009978, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009979, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009980, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009981, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009982, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009983, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009984, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009985, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009986, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009987, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009988, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009989, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009990, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009991, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009992, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009993, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009994, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009995, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009996, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009997, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009998, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC009999, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010000, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010001, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010002, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010003, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010004, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010005, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010006, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010007, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010008, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010009, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010010, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010011, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010012, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010013, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010014, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010015, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010016, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010017, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010018, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010019, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010020, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010021, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010022, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010023, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010024, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010025, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010026, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010027, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010028, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010029, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010030, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010031, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010032, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010033, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010034, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010035, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010036, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010037, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010038, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010039, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010040, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010041, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010042, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010043, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010044, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010045, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010046, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010047, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010048, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010049, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010050, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010051, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010052, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010053, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010054, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010055, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010056, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010057, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010058, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010059, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010060, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010061, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010062, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010063, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010064, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010065, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010066, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010067, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010068, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010069, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010070, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010071, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010072, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010073, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010074, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010075, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010076, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010077, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010078, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010079, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010080, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010081, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010082, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010083, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010084, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010085, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010086, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010087, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010088, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010089, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010090, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010091, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010092, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010093, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010094, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010095, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010096, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010097, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010098, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010099, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010100, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010101, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010102, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010103, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010104, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010105, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010106, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010107, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010108, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010109, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010110, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010111, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010112, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010113, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010114, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010115, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010116, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010117, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010118, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010119, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010120, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010121, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010122, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010123, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010124, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010125, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010126, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010127, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010128, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010129, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010130, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010131, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010132, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010133, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010134, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010135, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010136, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010137, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010138, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010139, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010140, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010141, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010142, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010143, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010144, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010145, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010146, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010147, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010148, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010149, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010150, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010151, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010152, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010153, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010154, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010155, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010156, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010157, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010158, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010159, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010160, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010161, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010162, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010163, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010164, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010165, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010166, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010167, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010168, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010169, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010170, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010171, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010172, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010173, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010174, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010175, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010176, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010177, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010178, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010179, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010180, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010181, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010182, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010183, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010184, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010185, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010186, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010187, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010188, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010189, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010190, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010191, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010192, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010193, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010194, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010195, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010196, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010197, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010198, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010199, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010200, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010201, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010202, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010203, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010204, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010205, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010206, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010207, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010208, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010209, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010210, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010211, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010212, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010213, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010214, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010215, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010216, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010217, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010218, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010219, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010220, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010221, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010222, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010223, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010224, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010225, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010226, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010227, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010228, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010229, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010230, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010231, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010232, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010233, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010234, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010235, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010236, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010237, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010238, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010239, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010240, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010241, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010242, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010243, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010244, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010245, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010246, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010247, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010248, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010249, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010250, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010251, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010252, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010253, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010254, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010255, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010256, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010257, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010258, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010259, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010260, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010261, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010262, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010263, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010264, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010265, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010266, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010267, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010268, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010269, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010270, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010271, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010272, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010273, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010274, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010275, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010276, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010277, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010278, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010279, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010280, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010281, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010282, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010283, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010284, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010285, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010286, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010287, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010288, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010289, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010290, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010291, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010292, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010293, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010294, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010295, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010296, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010297, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010298, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010299, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010300, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010301, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010302, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010303, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010304, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010305, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010306, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010307, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010308, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010309, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010310, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010311, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010312, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010313, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010314, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010315, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010316, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010317, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010318, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010319, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010320, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010321, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010322, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010323, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010324, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010325, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010326, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010327, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010328, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010329, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010330, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010331, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010332, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010333, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010334, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010335, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010336, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010337, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010338, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010339, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010340, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010341, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010342, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010343, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010344, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010345, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010346, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010347, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010348, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010349, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010350, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010351, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010352, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010353, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010354, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010355, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010356, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010357, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010358, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010359, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010360, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010361, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010362, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010363, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010364, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010365, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010366, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010367, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010368, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010369, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010370, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010371, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010372, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010373, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010374, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010375, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010376, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010377, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010378, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010379, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010380, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010381, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010382, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010383, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010384, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010385, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010386, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010387, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010388, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010389, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010390, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010391, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010392, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010393, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010394, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010395, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010396, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010397, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010398, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010399, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010400, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010401, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010402, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010403, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010404, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010405, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010406, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010407, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010408, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010409, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010410, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010411, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010412, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010413, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010414, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010415, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010416, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010417, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010418, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010419, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010420, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010421, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010422, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010423, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010424, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010425, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010426, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010427, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010428, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010429, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010430, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010431, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010432, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010433, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010434, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010435, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010436, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010437, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010438, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010439, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010440, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010441, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010442, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010443, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010444, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010445, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010446, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010447, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010448, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010449, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010450, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010451, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010452, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010453, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010454, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010455, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010456, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010457, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010458, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010459, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010460, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010461, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010462, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010463, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010464, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010465, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010466, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010467, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010468, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010469, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010470, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010471, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010472, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010473, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010474, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010475, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010476, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010477, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010478, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010479, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010480, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010481, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010482, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010483, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010484, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010485, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010486, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010487, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010488, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010489, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010490, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010491, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010492, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010493, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010494, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010495, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010496, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010497, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010498, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010499, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010500, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010501, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010502, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010503, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010504, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010505, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010506, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010507, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010508, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010509, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010510, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010511, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010512, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010513, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010514, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010515, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010516, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010517, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010518, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010519, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010520, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010521, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010522, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010523, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010524, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010525, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010526, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010527, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010528, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010529, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010530, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010531, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010532, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010533, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010534, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010535, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010536, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010537, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010538, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010539, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010540, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010541, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010542, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010543, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010544, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010545, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010546, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010547, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010548, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010549, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010550, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010551, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010552, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010553, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010554, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010555, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010556, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010557, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010558, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010559, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010560, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010561, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010562, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010563, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010564, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010565, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010566, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010567, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010568, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010569, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010570, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010571, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010572, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010573, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010574, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010575, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010576, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010577, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010578, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010579, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010580, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010581, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010582, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010583, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010584, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010585, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010586, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010587, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010588, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010589, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010590, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010591, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010592, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010593, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010594, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010595, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010596, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010597, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010598, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010599, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010600, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010601, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010602, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010603, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010604, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010605, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010606, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010607, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010608, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010609, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010610, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010611, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010612, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010613, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010614, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010615, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010616, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010617, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010618, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010619, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010620, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010621, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010622, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010623, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010624, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010625, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010626, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010627, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010628, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010629, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010630, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010631, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010632, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010633, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010634, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010635, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010636, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010637, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010638, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010639, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010640, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010641, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010642, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010643, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010644, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010645, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010646, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010647, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010648, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010649, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010650, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010651, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010652, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010653, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010654, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010655, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010656, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010657, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010658, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010659, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010660, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010661, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010662, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010663, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010664, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010665, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010666, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010667, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010668, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010669, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010670, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010671, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010672, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010673, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010674, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010675, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010676, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010677, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010678, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010679, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010680, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010681, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010682, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010683, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010684, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010685, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010686, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010687, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010688, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010689, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010690, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010691, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010692, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010693, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010694, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010695, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010696, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010697, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010698, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010699, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010700, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010701, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010702, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010703, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010704, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010705, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010706, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010707, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010708, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010709, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010710, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010711, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010712, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010713, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010714, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010715, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010716, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010717, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010718, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010719, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010720, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010721, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010722, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010723, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010724, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010725, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010726, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010727, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010728, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010729, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010730, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010731, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010732, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010733, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010734, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010735, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010736, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010737, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010738, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010739, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010740, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010741, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010742, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010743, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010744, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010745, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010746, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010747, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010748, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010749, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010750, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010751, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010752, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010753, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010754, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010755, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010756, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010757, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010758, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010759, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010760, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010761, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010762, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010763, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010764, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010765, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010766, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010767, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010768, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010769, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010770, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010771, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010772, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010773, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010774, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010775, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010776, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010777, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010778, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010779, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010780, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010781, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010782, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010783, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010784, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010785, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010786, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010787, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010788, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010789, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010790, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010791, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010792, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010793, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010794, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010795, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010796, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010797, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010798, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010799, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010800, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010801, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010802, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010803, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010804, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010805, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010806, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010807, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010808, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010809, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010810, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010811, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010812, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010813, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010814, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010815, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010816, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010817, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010818, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010819, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010820, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010821, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010822, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010823, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010824, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010825, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010826, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010827, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010828, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010829, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010830, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010831, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010832, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010833, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010834, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010835, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010836, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010837, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010838, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010839, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010840, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010841, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010842, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010843, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010844, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010845, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010846, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010847, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010848, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010849, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010850, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010851, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010852, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010853, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010854, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010855, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010856, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010857, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010858, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010859, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010860, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010861, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010862, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010863, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010864, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010865, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010866, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010867, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010868, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010869, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010870, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010871, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010872, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010873, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010874, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010875, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010876, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010877, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010878, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010879, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010880, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010881, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010882, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010883, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010884, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010885, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010886, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010887, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010888, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010889, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010890, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010891, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010892, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010893, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010894, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010895, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010896, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010897, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010898, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010899, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010900, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010901, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010902, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010903, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010904, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010905, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010906, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010907, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010908, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010909, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010910, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010911, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010912, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010913, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010914, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010915, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010916, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010917, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010918, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010919, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010920, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010921, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010922, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010923, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010924, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010925, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010926, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010927, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010928, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010929, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010930, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010931, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010932, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010933, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010934, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010935, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010936, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010937, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010938, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010939, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010940, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010941, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010942, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010943, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010944, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010945, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010946, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010947, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010948, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010949, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010950, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010951, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010952, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010953, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010954, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010955, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010956, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010957, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010958, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010959, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010960, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010961, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010962, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010963, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010964, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010965, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010966, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010967, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010968, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010969, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010970, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010971, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010972, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010973, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010974, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010975, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010976, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010977, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010978, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010979, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010980, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010981, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010982, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010983, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010984, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010985, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010986, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010987, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010988, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010989, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010990, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010991, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010992, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010993, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010994, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010995, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010996, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010997, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010998, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC010999, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011000, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011001, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011002, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011003, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011004, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011005, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011006, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011007, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011008, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011009, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011010, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011011, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011012, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011013, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011014, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011015, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011016, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011017, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011018, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011019, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011020, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011021, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011022, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011023, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011024, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011025, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011026, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011027, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011028, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011029, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011030, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011031, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011032, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011033, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011034, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011035, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011036, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011037, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011038, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011039, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011040, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011041, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011042, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011043, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011044, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011045, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011046, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011047, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011048, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011049, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011050, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011051, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011052, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011053, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011054, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011055, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011056, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011057, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011058, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011059, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011060, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011061, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011062, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011063, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011064, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011065, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011066, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011067, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011068, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011069, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011070, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011071, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011072, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011073, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011074, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011075, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011076, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011077, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011078, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011079, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011080, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011081, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011082, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011083, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011084, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011085, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011086, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011087, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011088, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011089, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011090, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011091, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011092, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011093, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011094, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011095, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011096, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011097, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011098, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011099, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011100, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011101, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011102, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011103, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011104, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011105, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011106, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011107, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011108, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011109, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011110, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011111, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011112, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011113, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011114, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011115, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011116, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011117, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0005TS, TC011118, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_bvec4.*");
