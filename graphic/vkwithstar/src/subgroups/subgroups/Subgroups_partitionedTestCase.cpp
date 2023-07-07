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
#include "../ActsSubgroups0006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011119, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011120, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011121, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011122, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011123, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011124, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011125, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011126, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011127, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011128, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011129, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011130, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011131, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011132, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011133, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011134, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011135, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011136, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011137, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011138, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011139, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011140, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011141, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011142, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011143, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011144, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011145, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011146, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011147, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011148, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011149, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011150, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011151, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011152, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011153, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011154, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011155, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011156, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011157, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011158, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011159, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011160, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011161, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011162, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011163, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011164, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011165, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011166, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011167, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011168, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011169, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011170, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011171, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011172, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011173, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011174, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011175, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011176, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011177, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011178, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011179, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011180, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011181, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011182, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011183, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011184, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011185, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011186, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011187, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011188, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011189, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011190, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011191, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011192, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011193, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011194, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011195, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011196, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011197, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011198, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011199, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011200, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011201, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011202, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011203, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011204, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011205, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011206, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011207, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011208, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011209, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011210, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011211, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011212, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011213, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011214, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011215, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011216, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011217, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011218, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011219, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011220, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011221, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011222, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011223, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011224, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011225, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011226, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011227, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011228, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011229, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011230, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011231, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011232, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011233, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011234, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011235, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011236, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011237, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011238, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011239, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011240, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011241, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011242, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011243, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011244, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011245, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011246, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011247, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011248, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011249, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011250, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011251, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011252, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011253, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011254, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011255, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011256, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011257, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011258, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011259, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011260, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011261, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011262, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011263, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011264, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011265, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011266, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011267, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011268, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011269, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011270, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011271, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011272, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011273, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011274, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011275, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011276, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011277, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011278, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011279, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011280, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011281, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011282, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011283, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011284, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011285, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011286, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011287, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011288, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011289, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011290, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011291, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011292, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011293, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011294, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011295, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011296, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011297, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011298, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011299, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011300, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011301, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011302, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011303, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011304, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011305, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011306, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011307, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011308, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011309, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011310, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011311, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011312, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011313, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011314, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011315, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011316, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011317, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011318, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011319, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011320, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011321, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011322, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011323, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011324, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011325, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011326, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011327, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011328, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011329, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011330, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011331, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011332, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011333, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011334, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011335, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011336, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011337, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011338, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011339, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011340, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011341, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011342, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011343, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011344, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011345, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011346, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011347, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011348, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011349, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011350, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011351, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011352, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011353, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011354, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011355, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011356, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011357, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011358, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011359, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011360, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011361, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011362, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011363, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011364, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011365, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011366, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011367, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011368, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011369, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011370, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011371, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011372, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011373, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011374, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011375, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011376, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011377, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011378, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011379, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011380, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011381, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011382, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011383, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011384, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011385, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011386, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011387, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011388, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011389, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011390, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011391, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011392, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011393, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011394, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011395, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011396, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011397, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011398, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011399, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011400, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011401, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011402, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011403, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011404, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011405, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011406, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011407, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011408, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011409, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011410, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011411, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011412, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011413, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011414, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011415, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011416, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011417, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011418, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011419, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011420, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011421, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011422, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011423, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011424, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011425, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011426, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011427, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011428, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011429, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011430, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011431, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011432, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011433, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011434, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011435, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011436, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011437, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011438, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011439, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011440, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011441, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011442, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011443, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011444, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011445, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011446, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011447, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011448, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011449, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011450, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011451, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011452, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011453, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011454, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011455, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011456, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011457, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011458, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011459, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011460, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011461, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011462, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011463, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011464, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011465, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011466, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011467, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011468, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011469, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011470, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011471, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011472, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011473, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011474, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011475, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011476, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011477, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011478, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011479, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011480, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011481, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011482, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011483, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011484, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011485, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011486, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011487, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011488, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011489, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011490, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011491, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011492, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011493, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011494, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011495, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011496, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011497, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011498, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011499, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011500, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011501, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011502, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011503, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011504, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011505, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011506, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011507, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011508, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011509, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011510, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011511, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011512, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011513, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011514, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011515, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011516, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011517, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011518, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011519, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011520, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011521, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011522, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011523, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011524, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011525, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011526, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011527, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011528, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011529, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011530, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011531, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011532, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011533, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011534, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011535, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011536, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011537, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011538, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011539, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011540, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011541, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011542, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011543, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011544, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011545, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011546, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011547, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011548, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011549, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011550, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011551, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011552, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011553, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011554, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011555, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011556, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011557, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011558, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011559, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011560, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011561, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011562, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011563, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011564, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011565, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011566, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011567, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011568, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011569, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011570, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011571, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011572, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011573, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011574, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011575, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011576, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011577, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011578, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011579, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011580, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011581, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011582, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011583, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011584, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011585, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011586, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011587, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011588, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011589, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011590, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011591, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011592, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011593, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011594, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011595, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011596, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011597, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011598, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011599, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011600, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011601, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011602, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011603, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011604, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011605, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011606, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011607, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011608, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011609, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011610, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011611, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011612, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011613, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011614, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011615, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011616, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011617, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011618, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011619, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011620, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011621, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011622, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011623, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011624, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011625, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011626, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011627, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011628, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011629, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011630, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011631, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011632, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011633, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011634, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011635, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011636, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011637, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011638, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011639, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011640, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011641, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011642, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011643, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011644, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011645, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011646, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011647, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011648, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011649, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011650, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011651, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011652, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011653, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011654, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011655, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011656, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011657, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011658, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011659, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011660, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011661, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011662, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011663, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011664, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011665, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011666, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011667, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011668, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011669, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011670, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011671, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011672, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011673, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011674, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011675, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011676, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011677, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011678, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011679, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011680, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011681, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011682, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011683, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011684, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011685, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011686, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011687, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011688, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011689, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011690, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011691, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011692, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011693, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011694, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011695, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011696, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011697, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011698, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011699, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011700, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011701, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011702, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011703, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011704, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011705, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011706, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011707, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011708, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011709, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011710, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011711, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011712, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011713, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011714, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011715, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011716, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011717, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011718, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011719, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011720, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011721, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011722, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011723, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011724, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011725, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011726, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011727, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011728, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011729, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011730, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011731, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011732, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011733, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011734, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011735, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011736, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011737, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011738, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011739, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011740, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011741, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011742, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011743, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011744, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011745, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011746, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011747, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011748, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011749, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011750, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011751, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011752, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011753, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011754, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011755, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011756, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011757, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011758, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011759, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011760, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011761, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011762, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011763, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011764, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011765, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011766, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011767, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011768, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011769, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011770, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011771, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011772, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011773, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011774, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011775, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011776, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011777, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011778, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011779, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011780, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011781, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011782, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011783, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011784, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011785, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011786, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011787, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011788, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011789, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011790, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011791, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011792, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011793, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011794, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011795, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011796, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011797, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011798, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011799, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011800, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011801, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011802, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011803, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011804, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011805, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011806, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011807, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011808, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011809, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011810, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011811, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011812, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011813, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011814, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011815, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011816, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011817, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011818, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011819, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011820, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011821, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011822, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011823, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011824, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011825, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011826, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011827, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011828, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011829, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011830, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011831, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011832, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011833, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011834, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011835, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011836, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011837, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011838, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011839, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011840, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011841, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011842, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011843, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011844, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011845, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011846, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011847, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011848, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011849, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011850, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011851, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011852, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011853, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011854, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011855, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011856, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011857, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011858, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011859, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011860, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011861, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011862, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011863, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011864, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011865, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011866, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011867, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011868, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011869, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011870, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011871, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011872, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011873, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011874, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011875, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011876, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011877, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011878, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011879, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011880, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011881, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011882, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011883, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011884, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011885, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011886, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011887, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011888, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011889, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011890, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011891, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011892, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011893, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011894, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011895, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011896, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011897, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011898, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011899, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011900, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011901, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011902, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011903, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011904, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011905, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011906, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011907, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011908, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011909, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011910, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011911, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011912, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011913, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011914, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011915, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011916, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011917, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011918, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011919, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011920, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011921, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011922, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011923, "dEQP-VK.subgroups.partitioned.graphics.subgroupadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011924, "dEQP-VK.subgroups.partitioned.graphics.subgroupmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011925, "dEQP-VK.subgroups.partitioned.graphics.subgroupmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011926, "dEQP-VK.subgroups.partitioned.graphics.subgroupmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011927, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011928, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011929, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011930, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011931, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011932, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011933, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011934, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011935, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011936, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011937, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011938, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011939, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011940, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011941, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011942, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011943, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011944, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011945, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011946, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011947, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011948, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011949, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011950, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011951, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011952, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011953, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011954, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011955, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011956, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011957, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011958, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011959, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011960, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011961, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011962, "dEQP-VK.subgroups.partitioned.graphics.subgroupand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011963, "dEQP-VK.subgroups.partitioned.graphics.subgroupor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011964, "dEQP-VK.subgroups.partitioned.graphics.subgroupxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011965, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011966, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011967, "dEQP-VK.subgroups.partitioned.graphics.subgroupinclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011968, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011969, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011970, "dEQP-VK.subgroups.partitioned.graphics.subgroupexclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011971, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011972, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011973, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011974, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011975, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011976, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011977, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011978, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011979, "dEQP-VK.subgroups.partitioned.compute.subgroupand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011980, "dEQP-VK.subgroups.partitioned.compute.subgroupand_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011981, "dEQP-VK.subgroups.partitioned.compute.subgroupor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011982, "dEQP-VK.subgroups.partitioned.compute.subgroupor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011983, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011984, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011985, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011986, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011987, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011988, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011989, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011990, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011991, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011992, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011993, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011994, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011995, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011996, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011997, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011998, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC011999, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012000, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012001, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012002, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012003, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012004, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012005, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012006, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012007, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012008, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012009, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012010, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012011, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012012, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012013, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012014, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012015, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012016, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012017, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012018, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012019, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012020, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012021, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012022, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012023, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012024, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012025, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012026, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012027, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012028, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012029, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012030, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012031, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012032, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012033, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012034, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012035, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012036, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012037, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012038, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012039, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012040, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012041, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012042, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012043, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012044, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012045, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012046, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012047, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012048, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012049, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012050, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012051, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012052, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012053, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012054, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012055, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012056, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012057, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012058, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012059, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012060, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012061, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012062, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012063, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012064, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012065, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012066, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012067, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012068, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012069, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012070, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012071, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012072, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012073, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012074, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012075, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012076, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012077, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012078, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012079, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012080, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012081, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012082, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012083, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012084, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012085, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012086, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012087, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012088, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012089, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012090, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012091, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012092, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012093, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012094, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012095, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012096, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012097, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012098, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012099, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012100, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012101, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012102, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012103, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012104, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012105, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012106, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012107, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012108, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012109, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012110, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012111, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012112, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012113, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012114, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012115, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012116, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012117, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012118, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012119, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012120, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012121, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012122, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012123, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012124, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012125, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012126, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012127, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012128, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012129, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012130, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012131, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012132, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012133, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012134, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012135, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012136, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012137, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012138, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012139, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012140, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012141, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012142, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012143, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012144, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012145, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012146, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012147, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012148, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012149, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012150, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012151, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012152, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012153, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012154, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012155, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012156, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012157, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012158, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012159, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012160, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012161, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012162, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012163, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012164, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012165, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012166, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012167, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012168, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012169, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012170, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012171, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012172, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012173, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012174, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012175, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012176, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012177, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012178, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012179, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012180, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012181, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012182, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012183, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012184, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012185, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012186, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012187, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012188, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012189, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012190, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012191, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012192, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012193, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012194, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012195, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012196, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012197, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012198, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012199, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012200, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012201, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012202, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012203, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012204, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012205, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012206, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012207, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012208, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012209, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012210, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012211, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012212, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012213, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012214, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012215, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012216, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012217, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012218, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012219, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012220, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012221, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012222, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012223, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012224, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012225, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012226, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012227, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012228, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012229, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012230, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012231, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012232, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012233, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012234, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012235, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012236, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012237, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012238, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012239, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012240, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012241, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012242, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012243, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012244, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012245, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012246, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012247, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012248, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012249, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012250, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012251, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012252, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012253, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012254, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012255, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012256, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012257, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012258, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012259, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012260, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012261, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012262, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012263, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012264, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012265, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012266, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012267, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012268, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012269, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012270, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012271, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012272, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012273, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012274, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012275, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012276, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012277, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012278, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012279, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012280, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012281, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012282, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012283, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012284, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012285, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012286, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012287, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012288, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012289, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012290, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012291, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012292, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012293, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012294, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012295, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012296, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012297, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012298, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012299, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012300, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012301, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012302, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012303, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012304, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012305, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012306, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012307, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012308, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012309, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012310, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012311, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012312, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012313, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012314, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012315, "dEQP-VK.subgroups.partitioned.compute.subgroupand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012316, "dEQP-VK.subgroups.partitioned.compute.subgroupand_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012317, "dEQP-VK.subgroups.partitioned.compute.subgroupor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012318, "dEQP-VK.subgroups.partitioned.compute.subgroupor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012319, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012320, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012321, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012322, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012323, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012324, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012325, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012326, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012327, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012328, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012329, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012330, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012331, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012332, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012333, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012334, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012335, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012336, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012337, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012338, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012339, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012340, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012341, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012342, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012343, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012344, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012345, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012346, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012347, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012348, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012349, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012350, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012351, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012352, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012353, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012354, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012355, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012356, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012357, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012358, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012359, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012360, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012361, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012362, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012363, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012364, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012365, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012366, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012367, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012368, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012369, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012370, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012371, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012372, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012373, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012374, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012375, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012376, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012377, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012378, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012379, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012380, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012381, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012382, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012383, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012384, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012385, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012386, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012387, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012388, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012389, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012390, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012391, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012392, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012393, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012394, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012395, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012396, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012397, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012398, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012399, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012400, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012401, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012402, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012403, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012404, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012405, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012406, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012407, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012408, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012409, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012410, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012411, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012412, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012413, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012414, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012415, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012416, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012417, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012418, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012419, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012420, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012421, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012422, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012423, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012424, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012425, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012426, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012427, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012428, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012429, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012430, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012431, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012432, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012433, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012434, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012435, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012436, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012437, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012438, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012439, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012440, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012441, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012442, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012443, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012444, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012445, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012446, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012447, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012448, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012449, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012450, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012451, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012452, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012453, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012454, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012455, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012456, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012457, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012458, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012459, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012460, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012461, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012462, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012463, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012464, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012465, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012466, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012467, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012468, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012469, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012470, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012471, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012472, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012473, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012474, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012475, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012476, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012477, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012478, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012479, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012480, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012481, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012482, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012483, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012484, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012485, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012486, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012487, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012488, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012489, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012490, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012491, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012492, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012493, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012494, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012495, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012496, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012497, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012498, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012499, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012500, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012501, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012502, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012503, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012504, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012505, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012506, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012507, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012508, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012509, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012510, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012511, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012512, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012513, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012514, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012515, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012516, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012517, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012518, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012519, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012520, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012521, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012522, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012523, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012524, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012525, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012526, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012527, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012528, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012529, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012530, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012531, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012532, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012533, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012534, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012535, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012536, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012537, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012538, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012539, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012540, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012541, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012542, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012543, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012544, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012545, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012546, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012547, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012548, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012549, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012550, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012551, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012552, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012553, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012554, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012555, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012556, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012557, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012558, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012559, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012560, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012561, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012562, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012563, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012564, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012565, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012566, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012567, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012568, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012569, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012570, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012571, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012572, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012573, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012574, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012575, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012576, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012577, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012578, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012579, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012580, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012581, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012582, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012583, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012584, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012585, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012586, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012587, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012588, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012589, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012590, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012591, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012592, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012593, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012594, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012595, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012596, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012597, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012598, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012599, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012600, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012601, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012602, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012603, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012604, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012605, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012606, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012607, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012608, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012609, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012610, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012611, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012612, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012613, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012614, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012615, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012616, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012617, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012618, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012619, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012620, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012621, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012622, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012623, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012624, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012625, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012626, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012627, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012628, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012629, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012630, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012631, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012632, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012633, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012634, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012635, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012636, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012637, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012638, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012639, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012640, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012641, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012642, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012643, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012644, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012645, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012646, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012647, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012648, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012649, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012650, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012651, "dEQP-VK.subgroups.partitioned.compute.subgroupand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012652, "dEQP-VK.subgroups.partitioned.compute.subgroupand_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012653, "dEQP-VK.subgroups.partitioned.compute.subgroupor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012654, "dEQP-VK.subgroups.partitioned.compute.subgroupor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012655, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012656, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012657, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012658, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012659, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012660, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012661, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012662, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012663, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012664, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012665, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012666, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012667, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012668, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012669, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012670, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012671, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012672, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012673, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012674, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012675, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012676, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012677, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012678, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012679, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012680, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012681, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012682, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012683, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012684, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012685, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012686, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012687, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012688, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012689, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012690, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012691, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012692, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012693, "dEQP-VK.subgroups.partitioned.compute.subgroupand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012694, "dEQP-VK.subgroups.partitioned.compute.subgroupand_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012695, "dEQP-VK.subgroups.partitioned.compute.subgroupor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012696, "dEQP-VK.subgroups.partitioned.compute.subgroupor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012697, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012698, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012699, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012700, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012701, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012702, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012703, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012704, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012705, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012706, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012707, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012708, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012709, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012710, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012711, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012712, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012713, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012714, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012715, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012716, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012717, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012718, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012719, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012720, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012721, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012722, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012723, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012724, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012725, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012726, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012727, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012728, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012729, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012730, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012731, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012732, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012733, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012734, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012735, "dEQP-VK.subgroups.partitioned.compute.subgroupand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012736, "dEQP-VK.subgroups.partitioned.compute.subgroupand_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012737, "dEQP-VK.subgroups.partitioned.compute.subgroupor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012738, "dEQP-VK.subgroups.partitioned.compute.subgroupor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012739, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012740, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012741, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012742, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012743, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012744, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012745, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012746, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012747, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012748, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012749, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012750, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012751, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012752, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012753, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012754, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012755, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012756, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012757, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012758, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012759, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012760, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012761, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012762, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012763, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012764, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012765, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012766, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012767, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012768, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012769, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012770, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012771, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012772, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012773, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012774, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012775, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012776, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012777, "dEQP-VK.subgroups.partitioned.compute.subgroupand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012778, "dEQP-VK.subgroups.partitioned.compute.subgroupand_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012779, "dEQP-VK.subgroups.partitioned.compute.subgroupor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012780, "dEQP-VK.subgroups.partitioned.compute.subgroupor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012781, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012782, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012783, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012784, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012785, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012786, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012787, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012788, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012789, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012790, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012791, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012792, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012793, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012794, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012795, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012796, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012797, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012798, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012799, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012800, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012801, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012802, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012803, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012804, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012805, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012806, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012807, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012808, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012809, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012810, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012811, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012812, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012813, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012814, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012815, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012816, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012817, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012818, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012819, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012820, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012821, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012822, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012823, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012824, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012825, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012826, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012827, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012828, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012829, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012830, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012831, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012832, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012833, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012834, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012835, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012836, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012837, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012838, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012839, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012840, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012841, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012842, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012843, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012844, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012845, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012846, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012847, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012848, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012849, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012850, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012851, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012852, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012853, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012854, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012855, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012856, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012857, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012858, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012859, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012860, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012861, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012862, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012863, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012864, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012865, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012866, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012867, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012868, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012869, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012870, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012871, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012872, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012873, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012874, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012875, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012876, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012877, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012878, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012879, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012880, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012881, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012882, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012883, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012884, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012885, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012886, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012887, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012888, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012889, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012890, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012891, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012892, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012893, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012894, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012895, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012896, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012897, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012898, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012899, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012900, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012901, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012902, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012903, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012904, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012905, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012906, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012907, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012908, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012909, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012910, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012911, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012912, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012913, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012914, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012915, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012916, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012917, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012918, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012919, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012920, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012921, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012922, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012923, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012924, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012925, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012926, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012927, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012928, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012929, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012930, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012931, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012932, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012933, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012934, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012935, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012936, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012937, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012938, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012939, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012940, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012941, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012942, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012943, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012944, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012945, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012946, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012947, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012948, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012949, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012950, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012951, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012952, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012953, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012954, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012955, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012956, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012957, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012958, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012959, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012960, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012961, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012962, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012963, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012964, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012965, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012966, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012967, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012968, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012969, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012970, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012971, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012972, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012973, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012974, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012975, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012976, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012977, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012978, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012979, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012980, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012981, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012982, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012983, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012984, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012985, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012986, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012987, "dEQP-VK.subgroups.partitioned.compute.subgroupand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012988, "dEQP-VK.subgroups.partitioned.compute.subgroupand_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012989, "dEQP-VK.subgroups.partitioned.compute.subgroupor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012990, "dEQP-VK.subgroups.partitioned.compute.subgroupor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012991, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012992, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012993, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012994, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012995, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012996, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012997, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012998, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC012999, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013000, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013001, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013002, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013003, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013004, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013005, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013006, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013007, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013008, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013009, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013010, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013011, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013012, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013013, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013014, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013015, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013016, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013017, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013018, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013019, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013020, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013021, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013022, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013023, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013024, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013025, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013026, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013027, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013028, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013029, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013030, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013031, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013032, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013033, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013034, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013035, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013036, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013037, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013038, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013039, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013040, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013041, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013042, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013043, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013044, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013045, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013046, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013047, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013048, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013049, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013050, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013051, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013052, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013053, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013054, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013055, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013056, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013057, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013058, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013059, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013060, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013061, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013062, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013063, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013064, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013065, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013066, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013067, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013068, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013069, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013070, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013071, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013072, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013073, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013074, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013075, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013076, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013077, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013078, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013079, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013080, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013081, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013082, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013083, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013084, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013085, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013086, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013087, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013088, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013089, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013090, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013091, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013092, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013093, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013094, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013095, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013096, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013097, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013098, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013099, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013100, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013101, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013102, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013103, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013104, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013105, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013106, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013107, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013108, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013109, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013110, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013111, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013112, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013113, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013114, "dEQP-VK.subgroups.partitioned.compute.subgroupand_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013115, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013116, "dEQP-VK.subgroups.partitioned.compute.subgroupor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013117, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013118, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013119, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013120, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013121, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013122, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013123, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013124, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013125, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013126, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013127, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013128, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013129, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013130, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013131, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013132, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013133, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013134, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013135, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013136, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013137, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013138, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013139, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013140, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013141, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013142, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013143, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013144, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013145, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013146, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013147, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013148, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013149, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013150, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013151, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013152, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013153, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013154, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013155, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013156, "dEQP-VK.subgroups.partitioned.compute.subgroupand_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013157, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013158, "dEQP-VK.subgroups.partitioned.compute.subgroupor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013159, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013160, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013161, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013162, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013163, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013164, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013165, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013166, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013167, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013168, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013169, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013170, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013171, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013172, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013173, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013174, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013175, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013176, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013177, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013178, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013179, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013180, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013181, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013182, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013183, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013184, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013185, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013186, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013187, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013188, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013189, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013190, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013191, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013192, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013193, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013194, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013195, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013196, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013197, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013198, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013199, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013200, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013201, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013202, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013203, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013204, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013205, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013206, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013207, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013208, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013209, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013210, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013211, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013212, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013213, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013214, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013215, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013216, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013217, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013218, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013219, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013220, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013221, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013222, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013223, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013224, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013225, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013226, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013227, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013228, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013229, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013230, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013231, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013232, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013233, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013234, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013235, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013236, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013237, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013238, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013239, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013240, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013241, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013242, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013243, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013244, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013245, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013246, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013247, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013248, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013249, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013250, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013251, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013252, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013253, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013254, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013255, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013256, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013257, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013258, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013259, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013260, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013261, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013262, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013263, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013264, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013265, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013266, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013267, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013268, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013269, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013270, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013271, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013272, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013273, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013274, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013275, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013276, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013277, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013278, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013279, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013280, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013281, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013282, "dEQP-VK.subgroups.partitioned.compute.subgroupand_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013283, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013284, "dEQP-VK.subgroups.partitioned.compute.subgroupor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013285, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013286, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013287, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013288, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013289, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013290, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013291, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013292, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013293, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013294, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013295, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013296, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013297, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013298, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013299, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013300, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013301, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013302, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013303, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013304, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013305, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013306, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013307, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013308, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013309, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013310, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013311, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013312, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013313, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013314, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013315, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013316, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013317, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013318, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013319, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013320, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013321, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013322, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013323, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013324, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013325, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013326, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013327, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013328, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013329, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013330, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013331, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013332, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013333, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013334, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013335, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013336, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013337, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013338, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013339, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013340, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013341, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013342, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013343, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013344, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013345, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013346, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013347, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013348, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013349, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013350, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013351, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013352, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013353, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013354, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013355, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013356, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013357, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013358, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013359, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013360, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013361, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013362, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013363, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013364, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013365, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013366, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013367, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013368, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013369, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013370, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013371, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013372, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013373, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013374, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013375, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013376, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013377, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013378, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013379, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013380, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013381, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013382, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013383, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013384, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013385, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013386, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013387, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013388, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013389, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013390, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013391, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013392, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013393, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013394, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013395, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013396, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013397, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013398, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013399, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013400, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013401, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013402, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013403, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013404, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013405, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013406, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013407, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013408, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013409, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013410, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013411, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013412, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013413, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013414, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013415, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013416, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013417, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013418, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013419, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013420, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013421, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013422, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013423, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013424, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013425, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013426, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013427, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013428, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013429, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013430, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013431, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013432, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013433, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013434, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013435, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013436, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013437, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013438, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013439, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013440, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013441, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013442, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013443, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013444, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013445, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013446, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013447, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013448, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013449, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013450, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013451, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013452, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013453, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013454, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013455, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013456, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013457, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013458, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013459, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013460, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013461, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013462, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013463, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013464, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013465, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013466, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013467, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013468, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013469, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013470, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013471, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013472, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013473, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013474, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013475, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013476, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013477, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013478, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013479, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013480, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013481, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013482, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013483, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013484, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013485, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013486, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013487, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013488, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013489, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013490, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013491, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013492, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013493, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013494, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013495, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013496, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013497, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013498, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013499, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013500, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013501, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013502, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013503, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013504, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013505, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013506, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013507, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013508, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013509, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013510, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013511, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013512, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013513, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013514, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013515, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013516, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013517, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013518, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013519, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013520, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013521, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013522, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013523, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013524, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013525, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013526, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013527, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013528, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013529, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013530, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013531, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013532, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013533, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013534, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013535, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013536, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013537, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013538, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013539, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013540, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013541, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013542, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013543, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013544, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013545, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013546, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013547, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013548, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013549, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013550, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013551, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013552, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013553, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013554, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013555, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013556, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013557, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013558, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013559, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013560, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013561, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013562, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013563, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013564, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013565, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013566, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013567, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013568, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013569, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013570, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013571, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013572, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013573, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013574, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013575, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013576, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013577, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013578, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013579, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013580, "dEQP-VK.subgroups.partitioned.compute.subgroupadd_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013581, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013582, "dEQP-VK.subgroups.partitioned.compute.subgroupmul_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013583, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013584, "dEQP-VK.subgroups.partitioned.compute.subgroupmin_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013585, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013586, "dEQP-VK.subgroups.partitioned.compute.subgroupmax_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013587, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013588, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveadd_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013589, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013590, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemul_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013591, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013592, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemin_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013593, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013594, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivemax_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013595, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013596, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveadd_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013597, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013598, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemul_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013599, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013600, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemin_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013601, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013602, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivemax_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013603, "dEQP-VK.subgroups.partitioned.compute.subgroupand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013604, "dEQP-VK.subgroups.partitioned.compute.subgroupand_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013605, "dEQP-VK.subgroups.partitioned.compute.subgroupor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013606, "dEQP-VK.subgroups.partitioned.compute.subgroupor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013607, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013608, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013609, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013610, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013611, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013612, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013613, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013614, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013615, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013616, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013617, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013618, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013619, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013620, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013621, "dEQP-VK.subgroups.partitioned.compute.subgroupand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013622, "dEQP-VK.subgroups.partitioned.compute.subgroupand_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013623, "dEQP-VK.subgroups.partitioned.compute.subgroupor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013624, "dEQP-VK.subgroups.partitioned.compute.subgroupor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013625, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013626, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013627, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013628, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013629, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013630, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013631, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013632, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013633, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013634, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013635, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013636, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013637, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013638, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013639, "dEQP-VK.subgroups.partitioned.compute.subgroupand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013640, "dEQP-VK.subgroups.partitioned.compute.subgroupand_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013641, "dEQP-VK.subgroups.partitioned.compute.subgroupor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013642, "dEQP-VK.subgroups.partitioned.compute.subgroupor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013643, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013644, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013645, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013646, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013647, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013648, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013649, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013650, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013651, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013652, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013653, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013654, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013655, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013656, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013657, "dEQP-VK.subgroups.partitioned.compute.subgroupand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013658, "dEQP-VK.subgroups.partitioned.compute.subgroupand_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013659, "dEQP-VK.subgroups.partitioned.compute.subgroupor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013660, "dEQP-VK.subgroups.partitioned.compute.subgroupor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013661, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013662, "dEQP-VK.subgroups.partitioned.compute.subgroupxor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013663, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013664, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveand_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013665, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013666, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusiveor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013667, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013668, "dEQP-VK.subgroups.partitioned.compute.subgroupinclusivexor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013669, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013670, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveand_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013671, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013672, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusiveor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013673, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013674, "dEQP-VK.subgroups.partitioned.compute.subgroupexclusivexor_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013675, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013676, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013677, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013678, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013679, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013680, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013681, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013682, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013683, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013684, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013685, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013686, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013687, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013688, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013689, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013690, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013691, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013692, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013693, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013694, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013695, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013696, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013697, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013698, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013699, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013700, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013701, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013702, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013703, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013704, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013705, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013706, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013707, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013708, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013709, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013710, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013711, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013712, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013713, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013714, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013715, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013716, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013717, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013718, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013719, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013720, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013721, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013722, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013723, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013724, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013725, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013726, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013727, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013728, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013729, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013730, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013731, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013732, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013733, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013734, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013735, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013736, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013737, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013738, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013739, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013740, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013741, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013742, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013743, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013744, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013745, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013746, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013747, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013748, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013749, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013750, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013751, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013752, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013753, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013754, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013755, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013756, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013757, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013758, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013759, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013760, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013761, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013762, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013763, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013764, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013765, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013766, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013767, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013768, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013769, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013770, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013771, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013772, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013773, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013774, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013775, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013776, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013777, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013778, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013779, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013780, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013781, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013782, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013783, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013784, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013785, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013786, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013787, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013788, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013789, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013790, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013791, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013792, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013793, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013794, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013795, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013796, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013797, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013798, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013799, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013800, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013801, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013802, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013803, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013804, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013805, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013806, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013807, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013808, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013809, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013810, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013811, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013812, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013813, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013814, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013815, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013816, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013817, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013818, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013819, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013820, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013821, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013822, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013823, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013824, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013825, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013826, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013827, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013828, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013829, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013830, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013831, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013832, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013833, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013834, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013835, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013836, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013837, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013838, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013839, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013840, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013841, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013842, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013843, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013844, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013845, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013846, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013847, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013848, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013849, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013850, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013851, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013852, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013853, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013854, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013855, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013856, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013857, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013858, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013859, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013860, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013861, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013862, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013863, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013864, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013865, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013866, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013867, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013868, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013869, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013870, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013871, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013872, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013873, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013874, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013875, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013876, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013877, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013878, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013879, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013880, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013881, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013882, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013883, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013884, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013885, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013886, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013887, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013888, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013889, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013890, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013891, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013892, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013893, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013894, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013895, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013896, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013897, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013898, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013899, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013900, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013901, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013902, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013903, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013904, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013905, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013906, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013907, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013908, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013909, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013910, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013911, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013912, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013913, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013914, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013915, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013916, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013917, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013918, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013919, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013920, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013921, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013922, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013923, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013924, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013925, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013926, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013927, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013928, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013929, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013930, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013931, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013932, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013933, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013934, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013935, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013936, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013937, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013938, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013939, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013940, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013941, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013942, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013943, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013944, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013945, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013946, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013947, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013948, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013949, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013950, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013951, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013952, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013953, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013954, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013955, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013956, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013957, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013958, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013959, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013960, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013961, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013962, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013963, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013964, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013965, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013966, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013967, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013968, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013969, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013970, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013971, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013972, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013973, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013974, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013975, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013976, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013977, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013978, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013979, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013980, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013981, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013982, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013983, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013984, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013985, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013986, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013987, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013988, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013989, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013990, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013991, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013992, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013993, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013994, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013995, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013996, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013997, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013998, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC013999, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014000, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014001, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014002, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014003, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014004, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014005, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014006, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014007, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014008, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014009, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014010, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014011, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014012, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014013, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014014, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014015, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014016, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014017, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014018, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014019, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014020, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014021, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014022, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014023, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014024, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014025, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014026, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014027, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014028, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014029, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014030, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014031, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014032, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014033, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014034, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014035, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014036, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014037, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014038, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014039, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014040, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014041, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014042, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014043, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014044, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014045, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014046, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014047, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014048, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014049, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014050, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014051, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014052, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014053, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014054, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014055, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014056, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014057, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014058, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014059, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014060, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014061, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014062, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014063, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014064, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014065, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014066, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014067, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014068, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014069, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014070, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014071, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014072, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014073, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014074, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014075, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014076, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014077, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014078, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014079, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014080, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014081, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014082, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014083, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014084, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014085, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014086, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014087, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014088, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014089, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014090, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014091, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014092, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014093, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014094, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014095, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014096, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014097, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014098, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014099, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014100, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014101, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014102, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014103, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014104, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014105, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014106, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014107, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014108, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014109, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014110, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014111, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014112, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014113, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014114, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014115, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014116, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014117, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014118, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014119, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014120, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014121, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014122, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014123, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014124, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014125, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014126, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014127, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014128, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014129, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014130, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014131, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014132, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014133, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014134, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014135, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014136, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014137, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014138, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014139, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014140, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014141, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014142, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014143, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014144, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014145, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014146, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014147, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014148, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014149, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014150, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014151, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014152, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014153, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014154, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014155, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014156, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014157, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014158, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014159, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014160, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014161, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014162, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014163, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014164, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014165, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014166, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014167, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014168, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014169, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014170, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014171, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014172, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014173, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014174, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014175, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014176, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014177, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014178, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014179, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014180, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014181, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014182, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014183, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014184, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014185, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014186, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014187, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014188, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014189, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014190, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014191, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014192, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014193, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014194, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014195, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014196, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014197, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014198, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014199, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014200, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014201, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014202, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014203, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014204, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014205, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014206, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014207, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014208, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014209, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014210, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014211, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014212, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014213, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014214, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014215, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014216, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014217, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014218, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014219, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014220, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014221, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014222, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014223, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014224, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014225, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014226, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014227, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014228, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014229, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014230, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014231, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014232, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014233, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014234, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014235, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014236, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014237, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014238, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014239, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014240, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014241, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014242, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014243, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014244, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014245, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014246, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014247, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014248, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014249, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014250, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014251, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014252, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014253, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014254, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014255, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014256, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014257, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014258, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014259, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014260, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014261, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014262, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014263, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014264, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014265, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014266, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014267, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014268, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014269, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014270, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014271, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014272, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014273, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014274, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014275, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014276, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014277, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014278, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014279, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014280, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014281, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014282, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014283, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014284, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014285, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014286, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014287, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014288, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014289, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014290, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014291, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014292, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014293, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014294, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014295, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014296, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014297, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014298, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014299, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014300, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014301, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014302, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014303, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014304, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014305, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014306, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014307, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014308, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014309, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014310, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014311, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014312, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014313, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014314, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014315, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014316, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014317, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014318, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014319, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014320, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014321, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014322, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014323, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014324, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014325, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014326, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014327, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014328, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014329, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014330, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014331, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014332, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014333, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014334, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014335, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014336, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014337, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014338, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014339, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014340, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014341, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014342, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014343, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014344, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014345, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014346, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014347, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014348, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014349, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014350, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014351, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014352, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014353, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014354, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014355, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014356, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014357, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014358, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014359, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014360, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014361, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014362, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014363, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014364, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014365, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014366, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014367, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014368, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014369, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014370, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014371, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014372, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014373, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014374, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014375, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014376, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014377, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014378, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014379, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014380, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014381, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014382, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014383, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014384, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014385, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014386, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014387, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014388, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014389, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014390, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014391, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014392, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014393, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014394, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014395, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014396, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014397, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014398, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014399, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014400, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014401, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014402, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014403, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014404, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014405, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014406, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014407, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014408, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014409, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014410, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014411, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014412, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014413, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014414, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014415, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014416, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014417, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014418, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014419, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014420, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014421, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014422, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014423, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014424, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014425, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014426, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014427, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014428, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014429, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014430, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014431, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014432, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014433, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014434, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014435, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014436, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014437, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014438, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014439, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014440, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014441, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014442, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014443, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014444, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014445, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014446, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014447, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014448, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014449, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014450, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014451, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014452, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014453, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014454, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014455, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014456, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014457, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014458, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014459, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014460, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014461, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014462, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014463, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014464, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014465, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014466, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014467, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014468, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014469, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014470, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014471, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014472, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014473, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014474, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014475, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014476, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014477, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014478, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014479, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014480, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014481, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014482, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014483, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014484, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014485, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014486, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014487, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014488, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014489, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014490, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014491, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014492, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014493, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014494, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014495, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014496, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014497, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014498, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014499, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014500, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014501, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014502, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014503, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014504, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014505, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014506, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014507, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014508, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014509, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014510, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014511, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014512, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014513, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014514, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014515, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014516, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014517, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014518, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014519, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014520, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014521, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014522, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014523, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014524, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014525, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014526, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014527, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014528, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014529, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014530, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014531, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014532, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014533, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014534, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014535, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014536, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014537, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014538, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014539, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014540, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014541, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014542, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014543, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014544, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014545, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014546, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014547, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014548, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014549, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014550, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014551, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014552, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014553, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014554, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014555, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014556, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014557, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014558, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014559, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014560, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014561, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014562, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014563, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014564, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014565, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014566, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014567, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014568, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014569, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014570, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014571, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014572, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014573, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014574, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014575, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014576, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014577, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014578, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014579, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014580, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014581, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014582, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014583, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014584, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014585, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014586, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014587, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014588, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014589, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014590, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014591, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014592, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014593, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014594, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014595, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014596, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014597, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014598, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014599, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014600, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014601, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014602, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014603, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014604, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014605, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014606, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014607, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014608, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014609, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014610, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014611, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014612, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014613, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014614, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014615, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014616, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014617, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014618, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014619, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014620, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014621, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014622, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014623, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014624, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014625, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014626, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014627, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014628, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014629, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014630, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014631, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014632, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014633, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014634, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014635, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014636, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014637, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014638, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014639, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014640, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014641, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014642, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014643, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014644, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014645, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014646, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014647, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014648, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014649, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014650, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014651, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014652, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014653, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014654, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014655, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014656, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014657, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014658, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014659, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014660, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014661, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014662, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014663, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014664, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014665, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014666, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014667, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014668, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014669, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014670, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014671, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014672, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014673, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014674, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014675, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014676, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014677, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014678, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014679, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014680, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014681, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014682, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014683, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014684, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014685, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014686, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014687, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014688, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014689, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014690, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014691, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014692, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014693, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014694, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014695, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014696, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014697, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014698, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014699, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014700, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014701, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014702, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014703, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014704, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014705, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014706, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014707, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014708, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014709, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014710, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014711, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014712, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014713, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014714, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014715, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014716, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014717, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014718, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014719, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014720, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014721, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014722, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014723, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014724, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014725, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014726, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014727, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014728, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014729, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014730, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014731, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014732, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014733, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014734, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014735, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014736, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014737, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014738, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014739, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014740, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014741, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014742, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014743, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014744, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014745, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014746, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014747, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014748, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014749, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014750, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014751, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014752, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014753, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014754, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014755, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014756, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014757, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014758, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014759, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014760, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014761, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014762, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014763, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014764, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014765, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014766, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014767, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014768, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014769, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014770, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014771, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014772, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014773, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014774, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014775, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014776, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014777, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014778, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014779, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014780, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014781, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014782, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014783, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014784, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014785, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014786, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014787, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014788, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014789, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014790, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014791, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014792, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014793, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014794, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014795, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014796, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014797, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014798, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014799, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014800, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014801, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014802, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014803, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014804, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014805, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014806, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014807, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014808, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014809, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014810, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014811, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014812, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014813, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014814, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014815, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014816, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014817, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014818, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014819, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014820, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014821, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014822, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014823, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014824, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014825, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014826, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014827, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014828, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014829, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014830, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014831, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014832, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014833, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014834, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014835, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014836, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014837, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014838, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014839, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014840, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014841, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014842, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014843, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014844, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014845, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014846, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014847, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014848, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014849, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014850, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014851, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014852, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014853, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014854, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014855, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014856, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014857, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014858, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014859, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014860, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014861, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014862, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014863, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014864, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014865, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014866, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014867, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014868, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014869, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014870, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014871, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014872, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014873, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014874, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014875, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014876, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014877, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014878, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014879, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014880, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014881, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014882, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014883, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014884, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014885, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014886, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014887, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014888, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014889, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014890, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014891, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014892, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014893, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014894, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014895, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014896, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014897, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014898, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014899, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014900, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014901, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014902, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014903, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014904, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014905, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014906, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014907, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014908, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014909, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014910, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014911, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014912, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014913, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014914, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014915, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014916, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014917, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014918, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014919, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014920, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014921, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014922, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014923, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014924, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014925, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014926, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014927, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014928, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014929, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014930, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014931, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014932, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014933, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014934, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014935, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014936, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014937, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014938, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014939, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014940, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014941, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014942, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014943, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014944, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014945, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014946, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014947, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014948, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014949, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014950, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014951, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014952, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014953, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014954, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014955, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014956, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014957, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014958, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014959, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014960, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014961, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014962, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014963, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014964, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014965, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014966, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014967, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014968, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014969, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014970, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014971, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014972, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014973, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014974, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014975, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014976, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014977, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014978, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014979, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014980, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014981, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014982, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014983, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014984, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014985, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014986, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014987, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014988, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014989, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014990, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014991, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014992, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014993, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014994, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014995, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014996, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014997, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014998, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC014999, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015000, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015001, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015002, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015003, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015004, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015005, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015006, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015007, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015008, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015009, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015010, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015011, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015012, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015013, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015014, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015015, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015016, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015017, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015018, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015019, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015020, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015021, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015022, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015023, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015024, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015025, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015026, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015027, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015028, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015029, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015030, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015031, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015032, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015033, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015034, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015035, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015036, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015037, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015038, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015039, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015040, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015041, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015042, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015043, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015044, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015045, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015046, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015047, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015048, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015049, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015050, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015051, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015052, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015053, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015054, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015055, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015056, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015057, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015058, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015059, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015060, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015061, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015062, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015063, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015064, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015065, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015066, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015067, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015068, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015069, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015070, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015071, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015072, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015073, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015074, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015075, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015076, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015077, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015078, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015079, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015080, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015081, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015082, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015083, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015084, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015085, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015086, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015087, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015088, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015089, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015090, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015091, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015092, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015093, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015094, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015095, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015096, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015097, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015098, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015099, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015100, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015101, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015102, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015103, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015104, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015105, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015106, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015107, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015108, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015109, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015110, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015111, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015112, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015113, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015114, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015115, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015116, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015117, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015118, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015119, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015120, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015121, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015122, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015123, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015124, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015125, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015126, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015127, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015128, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015129, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015130, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015131, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015132, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015133, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015134, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015135, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015136, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015137, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015138, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015139, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015140, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015141, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015142, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015143, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015144, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015145, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015146, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015147, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015148, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015149, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015150, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015151, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015152, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015153, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015154, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015155, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015156, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015157, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015158, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015159, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015160, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015161, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015162, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015163, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015164, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015165, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015166, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015167, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015168, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015169, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015170, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015171, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015172, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015173, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015174, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015175, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015176, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015177, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015178, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015179, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015180, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015181, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015182, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015183, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015184, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015185, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015186, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015187, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015188, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015189, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015190, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015191, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015192, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015193, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015194, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015195, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015196, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015197, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015198, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015199, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015200, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015201, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015202, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015203, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015204, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015205, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015206, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015207, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015208, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015209, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015210, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015211, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015212, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015213, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015214, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015215, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015216, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015217, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015218, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015219, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015220, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015221, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015222, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015223, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015224, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015225, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015226, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015227, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015228, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015229, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015230, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015231, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015232, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015233, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015234, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015235, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015236, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015237, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015238, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015239, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015240, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015241, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015242, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015243, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015244, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015245, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015246, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015247, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015248, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015249, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015250, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015251, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015252, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015253, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015254, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015255, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015256, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015257, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015258, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015259, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015260, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015261, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015262, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015263, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015264, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015265, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015266, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015267, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015268, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015269, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015270, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015271, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015272, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015273, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015274, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015275, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015276, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015277, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015278, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015279, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015280, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015281, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015282, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015283, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015284, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015285, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015286, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015287, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015288, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015289, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015290, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015291, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015292, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015293, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015294, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015295, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015296, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015297, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015298, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015299, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015300, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015301, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015302, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015303, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015304, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015305, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015306, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015307, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015308, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015309, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015310, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015311, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015312, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015313, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015314, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015315, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015316, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015317, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015318, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015319, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015320, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015321, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015322, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015323, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015324, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015325, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015326, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015327, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015328, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015329, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015330, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015331, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015332, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015333, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015334, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015335, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015336, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015337, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015338, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015339, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015340, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015341, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015342, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015343, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015344, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015345, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015346, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015347, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015348, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015349, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015350, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015351, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015352, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015353, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015354, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015355, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015356, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015357, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015358, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015359, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015360, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015361, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015362, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015363, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015364, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015365, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015366, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015367, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015368, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015369, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015370, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015371, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015372, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015373, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015374, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015375, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015376, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015377, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015378, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015379, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015380, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015381, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015382, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015383, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015384, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015385, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015386, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015387, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015388, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015389, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015390, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015391, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015392, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015393, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015394, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015395, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015396, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015397, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015398, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015399, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015400, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015401, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015402, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015403, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015404, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015405, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015406, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015407, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015408, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015409, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015410, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015411, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015412, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015413, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015414, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015415, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015416, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015417, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015418, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015419, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015420, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015421, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015422, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015423, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015424, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015425, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015426, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015427, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015428, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015429, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015430, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015431, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015432, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015433, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015434, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015435, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015436, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015437, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015438, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015439, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015440, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015441, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015442, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015443, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015444, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015445, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015446, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015447, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015448, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015449, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015450, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015451, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015452, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015453, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015454, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015455, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015456, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015457, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015458, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015459, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015460, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015461, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015462, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015463, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015464, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015465, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015466, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015467, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015468, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015469, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015470, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015471, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015472, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015473, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015474, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015475, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015476, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015477, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015478, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015479, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015480, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015481, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015482, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015483, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015484, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015485, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015486, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015487, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015488, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015489, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015490, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015491, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015492, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015493, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015494, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015495, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015496, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015497, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015498, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015499, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015500, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015501, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015502, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015503, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015504, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015505, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015506, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015507, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015508, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015509, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015510, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015511, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015512, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015513, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015514, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015515, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015516, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015517, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015518, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015519, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015520, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015521, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015522, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015523, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015524, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015525, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015526, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015527, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015528, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015529, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015530, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015531, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015532, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015533, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015534, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015535, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015536, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015537, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015538, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015539, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015540, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015541, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015542, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015543, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015544, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015545, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015546, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015547, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015548, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015549, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015550, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015551, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015552, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015553, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015554, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015555, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015556, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015557, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015558, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015559, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015560, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015561, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015562, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015563, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015564, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015565, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015566, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015567, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015568, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015569, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015570, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015571, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015572, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015573, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015574, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015575, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015576, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015577, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015578, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015579, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015580, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015581, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015582, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015583, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015584, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015585, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015586, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015587, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015588, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015589, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015590, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015591, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015592, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015593, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015594, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015595, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015596, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015597, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015598, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015599, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015600, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015601, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015602, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015603, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015604, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015605, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015606, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015607, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015608, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015609, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015610, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015611, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015612, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015613, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015614, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015615, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015616, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015617, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015618, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015619, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015620, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015621, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015622, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015623, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015624, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015625, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015626, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015627, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015628, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015629, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015630, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015631, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015632, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015633, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015634, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015635, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015636, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015637, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015638, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015639, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015640, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015641, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015642, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015643, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015644, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015645, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015646, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015647, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015648, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015649, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015650, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015651, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015652, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015653, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015654, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015655, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015656, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015657, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015658, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015659, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015660, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015661, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015662, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015663, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015664, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015665, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015666, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015667, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015668, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015669, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015670, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015671, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015672, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015673, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015674, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015675, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015676, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015677, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015678, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015679, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015680, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015681, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015682, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015683, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015684, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015685, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015686, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015687, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015688, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015689, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015690, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015691, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015692, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015693, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015694, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015695, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015696, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015697, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015698, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015699, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015700, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015701, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015702, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015703, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015704, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015705, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015706, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015707, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015708, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015709, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015710, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015711, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015712, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015713, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015714, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015715, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015716, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015717, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015718, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015719, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015720, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015721, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015722, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015723, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015724, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015725, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015726, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015727, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015728, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015729, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015730, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015731, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015732, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015733, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015734, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015735, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015736, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015737, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015738, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015739, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015740, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015741, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015742, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015743, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015744, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015745, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015746, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015747, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015748, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015749, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015750, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015751, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015752, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015753, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015754, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015755, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015756, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015757, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015758, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015759, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015760, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015761, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015762, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015763, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015764, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015765, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015766, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015767, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015768, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015769, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015770, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015771, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015772, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015773, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015774, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015775, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015776, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015777, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015778, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015779, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015780, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015781, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015782, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015783, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015784, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015785, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015786, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015787, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015788, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015789, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015790, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015791, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015792, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015793, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015794, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015795, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015796, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015797, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015798, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015799, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015800, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015801, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015802, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015803, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015804, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015805, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015806, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015807, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015808, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015809, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015810, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015811, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015812, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015813, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015814, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015815, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015816, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015817, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015818, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015819, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015820, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015821, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015822, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015823, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015824, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015825, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015826, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015827, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015828, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015829, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015830, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015831, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015832, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015833, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015834, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015835, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015836, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015837, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015838, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015839, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015840, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015841, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015842, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015843, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015844, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015845, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015846, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015847, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015848, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015849, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015850, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015851, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015852, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015853, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015854, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015855, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015856, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015857, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015858, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015859, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015860, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015861, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015862, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015863, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015864, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015865, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015866, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015867, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015868, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015869, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015870, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015871, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015872, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015873, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015874, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015875, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015876, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015877, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015878, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015879, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015880, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015881, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015882, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015883, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015884, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015885, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015886, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015887, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015888, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015889, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015890, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015891, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015892, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015893, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015894, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015895, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015896, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015897, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015898, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015899, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015900, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015901, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015902, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015903, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015904, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015905, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015906, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015907, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015908, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015909, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015910, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015911, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015912, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015913, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015914, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015915, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015916, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015917, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015918, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015919, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015920, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015921, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015922, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015923, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015924, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015925, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015926, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015927, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015928, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015929, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015930, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015931, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015932, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015933, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015934, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015935, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015936, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015937, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015938, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015939, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015940, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015941, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015942, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015943, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015944, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015945, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015946, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015947, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015948, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015949, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015950, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015951, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015952, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015953, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015954, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015955, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015956, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015957, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015958, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015959, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015960, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015961, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015962, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015963, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015964, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015965, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015966, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015967, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015968, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015969, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015970, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015971, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015972, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015973, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015974, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015975, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015976, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015977, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015978, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015979, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015980, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015981, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015982, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015983, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015984, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015985, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015986, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015987, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015988, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015989, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015990, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015991, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015992, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015993, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015994, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015995, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015996, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015997, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015998, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC015999, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016000, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016001, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016002, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016003, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016004, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016005, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016006, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016007, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016008, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016009, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016010, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016011, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016012, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016013, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016014, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016015, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016016, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016017, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016018, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016019, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016020, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016021, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016022, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016023, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016024, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016025, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016026, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016027, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016028, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016029, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016030, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016031, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016032, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016033, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016034, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016035, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016036, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016037, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016038, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016039, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016040, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016041, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016042, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016043, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016044, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016045, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016046, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016047, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016048, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016049, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016050, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016051, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016052, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016053, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016054, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016055, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016056, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016057, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016058, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016059, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016060, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016061, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016062, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016063, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016064, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016065, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016066, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016067, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016068, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016069, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016070, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016071, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016072, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016073, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016074, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016075, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016076, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016077, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016078, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016079, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016080, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016081, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016082, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016083, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016084, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016085, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016086, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016087, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016088, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016089, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016090, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016091, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016092, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016093, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016094, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016095, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016096, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016097, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016098, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016099, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016100, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016101, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016102, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016103, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016104, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016105, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016106, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016107, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016108, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016109, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016110, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016111, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016112, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016113, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016114, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016115, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016116, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016117, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016118, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016119, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016120, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016121, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016122, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016123, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016124, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016125, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016126, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016127, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016128, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016129, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016130, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016131, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016132, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016133, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016134, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016135, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016136, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016137, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016138, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016139, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016140, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016141, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016142, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016143, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016144, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016145, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016146, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016147, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016148, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016149, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016150, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016151, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016152, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016153, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016154, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016155, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016156, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016157, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016158, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016159, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016160, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016161, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016162, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016163, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016164, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016165, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016166, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016167, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016168, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016169, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016170, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016171, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016172, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016173, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016174, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016175, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016176, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016177, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016178, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016179, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016180, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016181, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016182, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016183, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016184, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016185, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016186, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016187, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016188, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016189, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016190, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016191, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016192, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016193, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016194, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016195, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016196, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016197, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016198, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016199, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016200, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016201, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016202, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016203, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016204, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016205, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016206, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016207, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016208, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016209, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016210, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016211, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016212, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016213, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016214, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016215, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016216, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016217, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016218, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016219, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016220, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016221, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016222, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016223, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016224, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016225, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016226, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016227, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016228, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016229, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016230, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016231, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016232, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016233, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016234, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016235, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016236, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016237, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016238, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016239, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016240, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016241, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016242, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016243, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016244, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016245, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016246, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016247, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016248, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016249, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016250, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016251, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016252, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016253, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016254, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016255, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016256, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016257, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016258, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016259, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016260, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016261, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016262, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016263, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016264, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016265, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016266, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016267, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016268, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016269, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016270, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016271, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016272, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016273, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016274, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016275, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016276, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016277, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016278, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016279, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016280, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016281, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016282, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016283, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016284, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016285, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016286, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016287, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016288, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016289, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016290, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016291, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016292, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016293, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016294, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016295, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016296, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016297, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016298, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016299, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016300, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016301, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016302, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016303, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016304, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016305, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016306, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016307, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016308, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016309, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016310, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016311, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016312, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016313, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016314, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016315, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016316, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016317, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016318, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016319, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016320, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016321, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016322, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016323, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016324, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016325, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016326, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016327, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016328, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016329, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016330, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016331, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016332, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016333, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016334, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016335, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016336, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016337, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016338, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016339, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016340, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016341, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016342, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016343, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016344, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016345, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016346, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016347, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016348, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016349, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016350, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016351, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016352, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016353, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016354, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016355, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016356, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016357, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016358, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016359, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016360, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016361, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016362, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016363, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016364, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016365, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016366, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016367, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016368, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016369, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016370, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016371, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016372, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016373, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016374, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016375, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016376, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016377, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016378, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016379, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016380, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016381, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016382, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016383, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016384, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016385, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016386, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016387, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016388, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016389, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016390, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016391, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016392, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016393, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016394, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016395, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016396, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016397, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016398, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016399, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016400, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016401, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016402, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016403, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016404, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016405, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016406, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016407, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016408, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016409, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016410, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016411, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016412, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016413, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016414, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016415, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016416, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016417, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016418, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016419, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016420, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016421, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016422, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016423, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016424, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016425, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016426, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016427, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016428, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016429, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016430, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016431, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016432, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016433, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016434, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016435, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016436, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016437, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016438, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016439, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016440, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016441, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016442, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016443, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016444, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016445, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016446, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016447, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016448, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016449, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016450, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016451, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016452, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016453, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016454, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016455, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016456, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016457, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016458, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016459, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016460, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016461, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016462, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016463, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016464, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016465, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016466, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016467, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016468, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016469, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016470, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016471, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016472, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016473, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016474, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016475, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016476, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016477, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016478, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016479, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016480, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016481, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016482, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016483, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016484, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016485, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016486, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016487, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016488, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016489, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016490, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016491, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016492, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016493, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016494, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016495, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016496, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016497, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016498, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016499, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016500, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016501, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016502, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016503, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016504, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016505, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016506, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016507, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016508, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016509, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016510, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016511, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016512, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016513, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016514, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016515, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016516, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016517, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016518, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016519, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016520, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016521, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016522, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016523, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016524, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016525, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016526, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016527, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016528, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016529, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016530, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016531, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016532, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016533, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016534, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016535, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016536, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016537, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016538, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016539, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016540, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016541, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016542, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016543, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016544, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016545, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016546, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016547, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016548, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016549, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016550, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016551, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016552, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016553, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016554, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016555, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016556, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016557, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016558, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016559, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016560, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016561, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016562, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016563, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016564, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016565, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016566, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016567, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016568, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016569, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016570, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016571, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016572, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016573, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016574, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016575, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016576, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016577, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016578, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016579, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016580, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016581, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016582, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016583, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016584, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016585, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016586, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016587, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016588, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016589, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016590, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016591, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016592, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016593, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016594, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016595, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016596, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016597, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016598, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016599, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016600, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016601, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016602, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016603, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016604, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016605, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016606, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016607, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016608, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016609, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016610, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016611, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016612, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016613, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016614, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016615, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016616, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016617, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016618, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016619, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016620, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016621, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016622, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016623, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016624, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016625, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016626, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016627, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016628, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016629, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016630, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016631, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016632, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016633, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016634, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016635, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016636, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016637, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016638, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016639, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016640, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016641, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016642, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016643, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016644, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016645, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016646, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016647, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016648, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016649, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016650, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016651, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016652, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016653, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016654, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016655, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016656, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016657, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016658, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016659, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016660, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016661, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016662, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016663, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016664, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016665, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016666, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016667, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016668, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016669, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016670, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016671, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016672, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016673, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016674, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016675, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016676, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016677, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016678, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016679, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016680, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016681, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016682, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016683, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016684, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016685, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016686, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016687, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016688, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016689, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016690, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016691, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016692, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016693, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016694, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016695, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016696, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016697, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016698, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016699, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016700, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016701, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016702, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016703, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016704, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016705, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016706, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016707, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016708, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016709, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016710, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016711, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016712, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016713, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016714, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016715, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016716, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016717, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016718, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016719, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016720, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016721, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016722, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016723, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016724, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016725, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016726, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016727, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016728, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016729, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016730, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016731, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016732, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016733, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016734, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016735, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016736, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016737, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016738, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016739, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016740, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016741, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016742, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016743, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016744, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016745, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016746, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016747, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016748, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016749, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016750, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016751, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016752, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016753, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016754, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016755, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016756, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016757, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016758, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016759, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016760, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016761, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016762, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016763, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016764, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016765, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016766, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016767, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016768, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016769, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016770, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016771, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016772, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016773, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016774, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016775, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016776, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016777, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016778, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016779, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016780, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016781, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016782, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016783, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016784, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016785, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016786, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016787, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016788, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016789, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016790, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016791, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016792, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016793, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016794, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016795, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016796, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016797, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016798, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016799, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016800, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016801, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016802, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016803, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016804, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016805, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016806, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016807, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016808, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016809, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016810, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016811, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016812, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016813, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016814, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016815, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016816, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016817, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016818, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016819, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016820, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016821, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016822, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016823, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016824, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016825, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016826, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016827, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016828, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016829, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016830, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016831, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016832, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016833, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016834, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016835, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016836, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016837, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016838, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016839, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016840, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016841, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016842, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016843, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016844, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016845, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016846, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016847, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016848, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016849, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016850, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016851, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016852, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016853, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016854, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016855, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016856, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016857, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016858, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016859, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016860, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016861, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016862, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016863, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016864, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016865, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016866, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016867, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016868, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016869, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016870, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016871, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016872, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016873, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016874, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016875, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016876, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016877, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016878, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016879, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016880, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016881, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016882, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016883, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016884, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016885, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016886, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016887, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016888, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016889, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016890, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016891, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016892, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016893, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016894, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupadd_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016895, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016896, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016897, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016898, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmul_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016899, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016900, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016901, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016902, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmin_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016903, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016904, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016905, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016906, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupmax_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016907, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016908, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016909, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016910, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveadd_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016911, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016912, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016913, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016914, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemul_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016915, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016916, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016917, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016918, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemin_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016919, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016920, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016921, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016922, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivemax_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016923, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016924, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016925, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016926, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveadd_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016927, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016928, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016929, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016930, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemul_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016931, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016932, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016933, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016934, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemin_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016935, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016936, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016937, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016938, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivemax_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016939, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016940, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016941, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016942, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016943, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016944, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016945, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016946, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016947, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016948, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016949, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016950, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016951, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016952, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016953, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016954, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016955, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016956, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016957, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016958, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016959, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016960, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016961, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016962, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016963, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016964, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016965, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016966, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016967, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016968, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016969, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016970, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016971, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016972, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016973, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016974, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016975, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016976, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016977, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016978, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016979, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016980, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016981, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016982, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016983, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016984, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016985, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016986, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016987, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016988, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016989, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016990, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016991, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016992, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016993, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016994, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016995, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016996, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016997, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016998, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC016999, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017000, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017001, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017002, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017003, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017004, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017005, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017006, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017007, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017008, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017009, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017010, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017011, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017012, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017013, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017014, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017015, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017016, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017017, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017018, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017019, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017020, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017021, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017022, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017023, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017024, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017025, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017026, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017027, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017028, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017029, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017030, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017031, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017032, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017033, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017034, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017035, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017036, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017037, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017038, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017039, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017040, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017041, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017042, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017043, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017044, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017045, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017046, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017047, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017048, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017049, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017050, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupand_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017051, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017052, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017053, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017054, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017055, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017056, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017057, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017058, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupxor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017059, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017060, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017061, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017062, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveand_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017063, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017064, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017065, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017066, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusiveor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017067, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017068, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017069, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017070, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupinclusivexor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017071, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017072, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017073, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017074, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveand_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017075, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017076, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017077, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017078, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusiveor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017079, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017080, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017081, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017082, "dEQP-VK.subgroups.partitioned.framebuffer.subgroupexclusivexor_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017083, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017084, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017085, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017086, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017087, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017088, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017089, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017090, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017091, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017092, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017093, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017094, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017095, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017096, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017097, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017098, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017099, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017100, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017101, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017102, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017103, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017104, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017105, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017106, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017107, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017108, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017109, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017110, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017111, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017112, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017113, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017114, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017115, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017116, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017117, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017118, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017119, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017120, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017121, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017122, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017123, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017124, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017125, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017126, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017127, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017128, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017129, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017130, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017131, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017132, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017133, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017134, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017135, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017136, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017137, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017138, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017139, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017140, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017141, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017142, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017143, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017144, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017145, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017146, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017147, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017148, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017149, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017150, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017151, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017152, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017153, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017154, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017155, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017156, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017157, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017158, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017159, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017160, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017161, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017162, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017163, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017164, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017165, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017166, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017167, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017168, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017169, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017170, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017171, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017172, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017173, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017174, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017175, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017176, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017177, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017178, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017179, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017180, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017181, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017182, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017183, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017184, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017185, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017186, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017187, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017188, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017189, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017190, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017191, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017192, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017193, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017194, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017195, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017196, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017197, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017198, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017199, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017200, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017201, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017202, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017203, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017204, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017205, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017206, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017207, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017208, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017209, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017210, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017211, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017212, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017213, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017214, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017215, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017216, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017217, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017218, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017219, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017220, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017221, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017222, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017223, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017224, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017225, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017226, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017227, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017228, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017229, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017230, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017231, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017232, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017233, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017234, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017235, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017236, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017237, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017238, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017239, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017240, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017241, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017242, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017243, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017244, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017245, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017246, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017247, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017248, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017249, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017250, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017251, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017252, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017253, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017254, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017255, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017256, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017257, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017258, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017259, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017260, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017261, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017262, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017263, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017264, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017265, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017266, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017267, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017268, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017269, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017270, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017271, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017272, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017273, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017274, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017275, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017276, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017277, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017278, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017279, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017280, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017281, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017282, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017283, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017284, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017285, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017286, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017287, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017288, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017289, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017290, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017291, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017292, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017293, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017294, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017295, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017296, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017297, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017298, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017299, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017300, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017301, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017302, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017303, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017304, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017305, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017306, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017307, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017308, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017309, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017310, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017311, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017312, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017313, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017314, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017315, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017316, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017317, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017318, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017319, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017320, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017321, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017322, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017323, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017324, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017325, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017326, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017327, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017328, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017329, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017330, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017331, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017332, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017333, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017334, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017335, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017336, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017337, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017338, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017339, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017340, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017341, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017342, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017343, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017344, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017345, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017346, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017347, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017348, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017349, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017350, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017351, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017352, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017353, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017354, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017355, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017356, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017357, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017358, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017359, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017360, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017361, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017362, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017363, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017364, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017365, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017366, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017367, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017368, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017369, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017370, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017371, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017372, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017373, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017374, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017375, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017376, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017377, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017378, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017379, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017380, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017381, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017382, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017383, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017384, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017385, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017386, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017387, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017388, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017389, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017390, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017391, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017392, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017393, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017394, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017395, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017396, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017397, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017398, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupmax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017399, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017400, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017401, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017402, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017403, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveadd_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017404, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemul_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017405, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemin_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017406, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivemax_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017407, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017408, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017409, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017410, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017411, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017412, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017413, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017414, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017415, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017416, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017417, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017418, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017419, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017420, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017421, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017422, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017423, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017424, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017425, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017426, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017427, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017428, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017429, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017430, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017431, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017432, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017433, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017434, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017435, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017436, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupxor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017437, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017438, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017439, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupinclusivexor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017440, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveand_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017441, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusiveor_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC017442, "dEQP-VK.subgroups.partitioned.ray_tracing.subgroupexclusivexor_bvec4.*");
