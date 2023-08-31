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
#include "../ActsSubgroups0003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009011, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009012, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009013, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009014, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009015, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009016, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009017, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009018, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009019, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009020, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009021, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009022, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009023, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009024, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009025, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009026, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009027, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009028, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009029, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009030, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009031, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009032, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009033, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009034, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009035, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009036, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009037, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009038, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009039, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009040, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009041, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009042, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009043, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009044, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009045, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009046, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009047, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009048, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009049, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009050, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009051, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009052, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009053, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009054, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009055, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009056, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009057, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009058, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009059, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009060, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009061, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009062, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009063, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009064, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009065, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009066, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009067, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009068, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009069, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009070, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009071, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009072, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009073, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009074, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009075, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009076, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009077, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009078, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009079, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009080, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009081, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009082, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009083, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009084, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009085, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009086, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009087, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009088, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009089, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009090, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009091, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009092, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009093, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009094, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009095, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009096, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009097, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009098, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009099, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009100, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009101, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009102, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009103, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009104, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009105, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009106, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009107, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009108, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009109, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009110, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009111, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009112, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009113, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009114, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009115, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009116, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009117, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009118, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009119, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009120, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009121, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009122, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009123, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009124, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009125, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009126, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009127, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009128, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009129, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009130, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009131, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009132, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009133, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009134, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009135, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009136, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009137, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009138, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009139, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009140, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009141, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009142, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009143, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009144, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009145, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009146, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009147, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009148, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009149, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009150, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009151, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009152, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009153, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009154, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009155, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009156, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009157, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009158, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009159, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009160, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009161, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009162, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009163, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009164, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009165, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009166, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009167, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009168, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009169, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009170, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009171, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009172, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009173, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009174, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009175, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009176, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009177, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009178, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009179, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009180, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009181, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009182, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009183, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009184, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009185, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009186, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009187, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009188, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009189, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009190, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009191, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009192, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009193, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009194, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009195, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009196, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009197, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009198, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009199, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009200, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009201, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009202, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009203, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009204, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009205, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009206, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009207, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009208, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009209, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009210, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009211, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009212, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009213, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009214, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009215, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009216, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009217, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009218, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009219, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009220, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009221, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009222, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009223, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009224, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009225, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009226, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009227, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009228, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009229, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009230, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009231, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009232, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009233, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009234, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009235, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009236, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009237, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009238, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009239, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009240, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009241, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009242, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009243, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009244, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009245, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009246, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009247, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009248, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009249, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009250, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009251, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009252, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009253, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009254, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009255, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009256, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009257, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009258, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009259, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009260, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009261, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009262, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009263, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009264, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009265, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009266, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009267, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009268, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009269, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009270, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009271, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009272, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009273, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009274, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009275, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009276, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009277, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009278, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009279, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009280, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009281, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009282, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009283, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009284, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009285, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009286, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009287, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009288, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009289, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009290, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009291, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009292, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009293, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009294, "dEQP-VK.subgroups.clustered.graphics.subgroupclusteredxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009295, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009296, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009297, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009298, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009299, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009300, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009301, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009302, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009303, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009304, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009305, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009306, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009307, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009308, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009309, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009310, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009311, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009312, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009313, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009314, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009315, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009316, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009317, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009318, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009319, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009320, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009321, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009322, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009323, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009324, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009325, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009326, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009327, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009328, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009329, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009330, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009331, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009332, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009333, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009334, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009335, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009336, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009337, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009338, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009339, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009340, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009341, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009342, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009343, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009344, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009345, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009346, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009347, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009348, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009349, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009350, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009351, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009352, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009353, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009354, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009355, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009356, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009357, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009358, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009359, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009360, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009361, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009362, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009363, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009364, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009365, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009366, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009367, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009368, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009369, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009370, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009371, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009372, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009373, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009374, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009375, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009376, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009377, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009378, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009379, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009380, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009381, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009382, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009383, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009384, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009385, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009386, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009387, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009388, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009389, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009390, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009391, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009392, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009393, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009394, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009395, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009396, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009397, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009398, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009399, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009400, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009401, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009402, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009403, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009404, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009405, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009406, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009407, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009408, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009409, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009410, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009411, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009412, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009413, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009414, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009415, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009416, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009417, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009418, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009419, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009420, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009421, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009422, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009423, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009424, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009425, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009426, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009427, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009428, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009429, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009430, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009431, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009432, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009433, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009434, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009435, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009436, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009437, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009438, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009439, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009440, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009441, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009442, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009443, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009444, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009445, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009446, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009447, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009448, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009449, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009450, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009451, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009452, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009453, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009454, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009455, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009456, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009457, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009458, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009459, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009460, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009461, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009462, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009463, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009464, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009465, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009466, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009467, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009468, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009469, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009470, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009471, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009472, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009473, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009474, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009475, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009476, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009477, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009478, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009479, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009480, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009481, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009482, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009483, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009484, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009485, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009486, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009487, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009488, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009489, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009490, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009491, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009492, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009493, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009494, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009495, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009496, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009497, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009498, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009499, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009500, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009501, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009502, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009503, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009504, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009505, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009506, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009507, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009508, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009509, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009510, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009511, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009512, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009513, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009514, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009515, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009516, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009517, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009518, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009519, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009520, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009521, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009522, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009523, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009524, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009525, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009526, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009527, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009528, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009529, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009530, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009531, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009532, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009533, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009534, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009535, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009536, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009537, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009538, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009539, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009540, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009541, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009542, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009543, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009544, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009545, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009546, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009547, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009548, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009549, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009550, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009551, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009552, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009553, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009554, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009555, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009556, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009557, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009558, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009559, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009560, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009561, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009562, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009563, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009564, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009565, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009566, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009567, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009568, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009569, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009570, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009571, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009572, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009573, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009574, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009575, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009576, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009577, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009578, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009579, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009580, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009581, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009582, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009583, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009584, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009585, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009586, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009587, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009588, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009589, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009590, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009591, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009592, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009593, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009594, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009595, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009596, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009597, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009598, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009599, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009600, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009601, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009602, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009603, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009604, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009605, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009606, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009607, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009608, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009609, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009610, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009611, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009612, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009613, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009614, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009615, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009616, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009617, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009618, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009619, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009620, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009621, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009622, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009623, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009624, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009625, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009626, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009627, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009628, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009629, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009630, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009631, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009632, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009633, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009634, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009635, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009636, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009637, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009638, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009639, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009640, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009641, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009642, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009643, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009644, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009645, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009646, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009647, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009648, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009649, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009650, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009651, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009652, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009653, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009654, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009655, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009656, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009657, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009658, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009659, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009660, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009661, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009662, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009663, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009664, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009665, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009666, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009667, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009668, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009669, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009670, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009671, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009672, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009673, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009674, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009675, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009676, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009677, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009678, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009679, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009680, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009681, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009682, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009683, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009684, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009685, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009686, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009687, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009688, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009689, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009690, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009691, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009692, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009693, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009694, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009695, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009696, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009697, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009698, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009699, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009700, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009701, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009702, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009703, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009704, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009705, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009706, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009707, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009708, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009709, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009710, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009711, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009712, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009713, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009714, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009715, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009716, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009717, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009718, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009719, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009720, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009721, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009722, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009723, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009724, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009725, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009726, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009727, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009728, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009729, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009730, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009731, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009732, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009733, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009734, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009735, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009736, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009737, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009738, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009739, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009740, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009741, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009742, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009743, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009744, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009745, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009746, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009747, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009748, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009749, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009750, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009751, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009752, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009753, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009754, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009755, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009756, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009757, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009758, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009759, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009760, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009761, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009762, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009763, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009764, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009765, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009766, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009767, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009768, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009769, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009770, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009771, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009772, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009773, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009774, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009775, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009776, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009777, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009778, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009779, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009780, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009781, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009782, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009783, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009784, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009785, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009786, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009787, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009788, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009789, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009790, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009791, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009792, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009793, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009794, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009795, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009796, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009797, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009798, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009799, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009800, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009801, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009802, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009803, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009804, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009805, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009806, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009807, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009808, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009809, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009810, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009811, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009812, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009813, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009814, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009815, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009816, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009817, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009818, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009819, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009820, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009821, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009822, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009823, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009824, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009825, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009826, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009827, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009828, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009829, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009830, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009831, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009832, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredadd_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009833, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009834, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmul_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009835, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009836, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmin_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009837, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009838, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredmax_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009839, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009840, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009841, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009842, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009843, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009844, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009845, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009846, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009847, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009848, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009849, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009850, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009851, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009852, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009853, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009854, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009855, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009856, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009857, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009858, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredand_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009859, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009860, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009861, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009862, "dEQP-VK.subgroups.clustered.compute.subgroupclusteredxor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009863, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009864, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009865, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009866, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009867, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009868, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009869, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009870, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009871, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009872, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009873, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009874, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009875, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009876, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009877, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009878, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009879, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009880, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009881, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009882, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009883, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009884, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009885, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009886, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009887, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009888, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009889, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009890, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009891, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009892, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009893, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009894, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009895, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009896, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009897, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009898, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009899, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009900, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009901, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009902, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009903, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009904, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009905, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009906, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009907, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009908, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009909, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009910, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009911, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009912, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009913, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009914, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009915, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009916, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009917, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009918, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009919, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009920, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009921, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009922, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009923, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009924, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009925, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009926, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009927, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009928, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009929, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009930, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009931, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009932, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009933, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009934, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009935, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009936, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009937, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009938, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009939, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009940, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009941, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009942, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009943, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009944, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009945, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009946, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009947, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009948, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009949, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009950, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009951, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009952, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009953, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009954, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009955, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009956, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009957, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009958, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009959, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009960, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009961, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009962, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009963, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009964, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009965, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009966, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009967, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009968, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009969, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009970, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009971, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009972, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009973, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009974, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009975, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009976, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009977, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009978, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009979, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009980, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009981, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009982, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009983, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009984, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009985, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009986, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009987, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009988, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009989, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009990, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009991, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009992, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009993, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009994, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009995, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009996, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009997, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009998, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC009999, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010000, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010001, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010002, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010003, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010004, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010005, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010006, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010007, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010008, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010009, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010010, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010011, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010012, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010013, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010014, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010015, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010016, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010017, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010018, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010019, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010020, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010021, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010022, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010023, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010024, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010025, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010026, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010027, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010028, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010029, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010030, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010031, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010032, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010033, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010034, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010035, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010036, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010037, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010038, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010039, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010040, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010041, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010042, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010043, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010044, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010045, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010046, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010047, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010048, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010049, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010050, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010051, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010052, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010053, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010054, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010055, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010056, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010057, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010058, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010059, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010060, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010061, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010062, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010063, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010064, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010065, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010066, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010067, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010068, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010069, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010070, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010071, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010072, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010073, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010074, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010075, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010076, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010077, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010078, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010079, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010080, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010081, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010082, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010083, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010084, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010085, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010086, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010087, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010088, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010089, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010090, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010091, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010092, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010093, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010094, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010095, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010096, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010097, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010098, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010099, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010100, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010101, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010102, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010103, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010104, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010105, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010106, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010107, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010108, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010109, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010110, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010111, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010112, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010113, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010114, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010115, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010116, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010117, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010118, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010119, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010120, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010121, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010122, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010123, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010124, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010125, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010126, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010127, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010128, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010129, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010130, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010131, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010132, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010133, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010134, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010135, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010136, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010137, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010138, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010139, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010140, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010141, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010142, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010143, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010144, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010145, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010146, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010147, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010148, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010149, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010150, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010151, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010152, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010153, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010154, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010155, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010156, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010157, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010158, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010159, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010160, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010161, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010162, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010163, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010164, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010165, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010166, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010167, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010168, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010169, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010170, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010171, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010172, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010173, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010174, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010175, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010176, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010177, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010178, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010179, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010180, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010181, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010182, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010183, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010184, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010185, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010186, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010187, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010188, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010189, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010190, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010191, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010192, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010193, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010194, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010195, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010196, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010197, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010198, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010199, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010200, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010201, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010202, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010203, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010204, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010205, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010206, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010207, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010208, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010209, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010210, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010211, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010212, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010213, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010214, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010215, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010216, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010217, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010218, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010219, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010220, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010221, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010222, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010223, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010224, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010225, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010226, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010227, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010228, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010229, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010230, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010231, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010232, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010233, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010234, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010235, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010236, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010237, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010238, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010239, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010240, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010241, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010242, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010243, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010244, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010245, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010246, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010247, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010248, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010249, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010250, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010251, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010252, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010253, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010254, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010255, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010256, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010257, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010258, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010259, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010260, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010261, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010262, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010263, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010264, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010265, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010266, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010267, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010268, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010269, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010270, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010271, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010272, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010273, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010274, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010275, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010276, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010277, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010278, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010279, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010280, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010281, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010282, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010283, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010284, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010285, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010286, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010287, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010288, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010289, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010290, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010291, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010292, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010293, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010294, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010295, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010296, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010297, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010298, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010299, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010300, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010301, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010302, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010303, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010304, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010305, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010306, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010307, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010308, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010309, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010310, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010311, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010312, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010313, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010314, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010315, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010316, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010317, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010318, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010319, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010320, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010321, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010322, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010323, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010324, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010325, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010326, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010327, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010328, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010329, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010330, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010331, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010332, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010333, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010334, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010335, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010336, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010337, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010338, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010339, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010340, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010341, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010342, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010343, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010344, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010345, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010346, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010347, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010348, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010349, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010350, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010351, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010352, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010353, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010354, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010355, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010356, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010357, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010358, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010359, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010360, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010361, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010362, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010363, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010364, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010365, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010366, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010367, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010368, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010369, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010370, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010371, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010372, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010373, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010374, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010375, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010376, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010377, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010378, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010379, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010380, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010381, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010382, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010383, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010384, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010385, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010386, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010387, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010388, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010389, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010390, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010391, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010392, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010393, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010394, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010395, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010396, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010397, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010398, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010399, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010400, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010401, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010402, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010403, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010404, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010405, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010406, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010407, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010408, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010409, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010410, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010411, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010412, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010413, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010414, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010415, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010416, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010417, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010418, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010419, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010420, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010421, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010422, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010423, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010424, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010425, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010426, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010427, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010428, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010429, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010430, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010431, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010432, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010433, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010434, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010435, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010436, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010437, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010438, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010439, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010440, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010441, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010442, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010443, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010444, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010445, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010446, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010447, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010448, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010449, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010450, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010451, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010452, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010453, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010454, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010455, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010456, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010457, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010458, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010459, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010460, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010461, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010462, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010463, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010464, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010465, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010466, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010467, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010468, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010469, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010470, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010471, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010472, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010473, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010474, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010475, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010476, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010477, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010478, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010479, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010480, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010481, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010482, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010483, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010484, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010485, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010486, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010487, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010488, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010489, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010490, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010491, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010492, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010493, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010494, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010495, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010496, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010497, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010498, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010499, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010500, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010501, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010502, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010503, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010504, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010505, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010506, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010507, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010508, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010509, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010510, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010511, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010512, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010513, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010514, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010515, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010516, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010517, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010518, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010519, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010520, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010521, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010522, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010523, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010524, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010525, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010526, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010527, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010528, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010529, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010530, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010531, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010532, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010533, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010534, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010535, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010536, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010537, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010538, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010539, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010540, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010541, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010542, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010543, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010544, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010545, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010546, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010547, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010548, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010549, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010550, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010551, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010552, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010553, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010554, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010555, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010556, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010557, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010558, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010559, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010560, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010561, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010562, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010563, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010564, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010565, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010566, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010567, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010568, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010569, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010570, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010571, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010572, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010573, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010574, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010575, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010576, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010577, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010578, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010579, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010580, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010581, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010582, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010583, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010584, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010585, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010586, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010587, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010588, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010589, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010590, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010591, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010592, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010593, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010594, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010595, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010596, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010597, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010598, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010599, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010600, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010601, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010602, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010603, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010604, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010605, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010606, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010607, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010608, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010609, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010610, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010611, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010612, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010613, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010614, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010615, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010616, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010617, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010618, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010619, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010620, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010621, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010622, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010623, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010624, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010625, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010626, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010627, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010628, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010629, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010630, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010631, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010632, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010633, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010634, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010635, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010636, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010637, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010638, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010639, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010640, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010641, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010642, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010643, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010644, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010645, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010646, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010647, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010648, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010649, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010650, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010651, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010652, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010653, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010654, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010655, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010656, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010657, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010658, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010659, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010660, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010661, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010662, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010663, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010664, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010665, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010666, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010667, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010668, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010669, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010670, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010671, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010672, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010673, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010674, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010675, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010676, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010677, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010678, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010679, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010680, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010681, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010682, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010683, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010684, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010685, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010686, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010687, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010688, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010689, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010690, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010691, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010692, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010693, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010694, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010695, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010696, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010697, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010698, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010699, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010700, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010701, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010702, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010703, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010704, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010705, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010706, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010707, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010708, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010709, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010710, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010711, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010712, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010713, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010714, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010715, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010716, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010717, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010718, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010719, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010720, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010721, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010722, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010723, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010724, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010725, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010726, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010727, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010728, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010729, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010730, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010731, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010732, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010733, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010734, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010735, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010736, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010737, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010738, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010739, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010740, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010741, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010742, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010743, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010744, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010745, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010746, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010747, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010748, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010749, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010750, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010751, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010752, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010753, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010754, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010755, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010756, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010757, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010758, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010759, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010760, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010761, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010762, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010763, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010764, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010765, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010766, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010767, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010768, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010769, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010770, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010771, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010772, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010773, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010774, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010775, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010776, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010777, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010778, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010779, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010780, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010781, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010782, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010783, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010784, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010785, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010786, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010787, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010788, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010789, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010790, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010791, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010792, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010793, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010794, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010795, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010796, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010797, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010798, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010799, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010800, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010801, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010802, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010803, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010804, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010805, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010806, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010807, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010808, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010809, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010810, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010811, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010812, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010813, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010814, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010815, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010816, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010817, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010818, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010819, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010820, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010821, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010822, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010823, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010824, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010825, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010826, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010827, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010828, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010829, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010830, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010831, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010832, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010833, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010834, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010835, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010836, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010837, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010838, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010839, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010840, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010841, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010842, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010843, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010844, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010845, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010846, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010847, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010848, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010849, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010850, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010851, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010852, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010853, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010854, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010855, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010856, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010857, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010858, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010859, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010860, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010861, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010862, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010863, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010864, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010865, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010866, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010867, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010868, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010869, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010870, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010871, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010872, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010873, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010874, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010875, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010876, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010877, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010878, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010879, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010880, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010881, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010882, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010883, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010884, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010885, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010886, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010887, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010888, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010889, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010890, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010891, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010892, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010893, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010894, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010895, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010896, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010897, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010898, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010899, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010900, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010901, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010902, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010903, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010904, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010905, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010906, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010907, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010908, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010909, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010910, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010911, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010912, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010913, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010914, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010915, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010916, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010917, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010918, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010919, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010920, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010921, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010922, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010923, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010924, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010925, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010926, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010927, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010928, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010929, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010930, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010931, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010932, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010933, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010934, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010935, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010936, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010937, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010938, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredadd_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010939, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010940, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010941, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010942, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmul_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010943, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010944, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010945, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010946, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmin_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010947, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010948, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010949, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010950, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredmax_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010951, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010952, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010953, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010954, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010955, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010956, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010957, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010958, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010959, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010960, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010961, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010962, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010963, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010964, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010965, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010966, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010967, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010968, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010969, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010970, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010971, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010972, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010973, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010974, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010975, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010976, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010977, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010978, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010979, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010980, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010981, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010982, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010983, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010984, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010985, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010986, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010987, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010988, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010989, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010990, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredand_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010991, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010992, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010993, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010994, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010995, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010996, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010997, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010998, "dEQP-VK.subgroups.clustered.framebuffer.subgroupclusteredxor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC010999, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011000, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011001, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011002, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011003, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011004, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011005, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011006, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011007, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011008, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011009, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011010, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011011, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011012, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011013, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011014, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011015, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011016, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011017, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011018, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011019, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011020, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011021, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011022, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011023, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011024, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011025, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011026, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011027, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011028, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011029, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011030, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011031, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011032, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011033, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011034, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011035, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011036, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011037, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011038, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011039, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011040, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011041, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011042, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011043, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011044, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011045, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011046, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011047, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011048, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011049, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011050, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011051, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011052, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011053, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011054, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011055, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011056, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011057, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011058, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011059, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011060, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011061, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011062, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011063, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011064, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011065, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011066, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011067, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011068, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011069, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011070, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011071, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011072, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011073, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011074, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011075, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011076, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011077, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011078, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011079, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011080, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011081, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011082, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011083, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011084, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011085, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011086, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011087, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011088, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011089, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011090, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011091, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011092, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011093, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011094, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011095, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011096, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011097, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011098, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011099, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011100, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011101, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011102, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011103, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011104, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011105, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011106, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011107, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011108, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011109, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011110, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011111, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011112, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011113, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011114, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011115, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011116, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011117, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0003TS, TC011118, "dEQP-VK.subgroups.clustered.ray_tracing.subgroupclusteredxor_bvec4.*");
