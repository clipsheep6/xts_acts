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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007448_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007448_2 "perator.pre_increment_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007448, VkglTestCase_007448_1, VkglTestCase_007448_2);

#define VkglTestCase_007449_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007449_2 "erator.pre_increment_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007449, VkglTestCase_007449_1, VkglTestCase_007449_2);

#define VkglTestCase_007450_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007450_2 "erator.pre_increment_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007450, VkglTestCase_007450_1, VkglTestCase_007450_2);

#define VkglTestCase_007451_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007451_2 "rator.pre_increment_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007451, VkglTestCase_007451_1, VkglTestCase_007451_2);

#define VkglTestCase_007452_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007452_2 "perator.pre_increment_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007452, VkglTestCase_007452_1, VkglTestCase_007452_2);

#define VkglTestCase_007453_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007453_2 "erator.pre_increment_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007453, VkglTestCase_007453_1, VkglTestCase_007453_2);

#define VkglTestCase_007454_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007454_2 "operator.pre_increment_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007454, VkglTestCase_007454_1, VkglTestCase_007454_2);

#define VkglTestCase_007455_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007455_2 "perator.pre_increment_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007455, VkglTestCase_007455_1, VkglTestCase_007455_2);

#define VkglTestCase_007456_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007456_2 "erator.pre_increment_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007456, VkglTestCase_007456_1, VkglTestCase_007456_2);

#define VkglTestCase_007457_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007457_2 "rator.pre_increment_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007457, VkglTestCase_007457_1, VkglTestCase_007457_2);

#define VkglTestCase_007458_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007458_2 "perator.pre_increment_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007458, VkglTestCase_007458_1, VkglTestCase_007458_2);

#define VkglTestCase_007459_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007459_2 "erator.pre_increment_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007459, VkglTestCase_007459_1, VkglTestCase_007459_2);

#define VkglTestCase_007460_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007460_2 "operator.pre_increment_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007460, VkglTestCase_007460_1, VkglTestCase_007460_2);

#define VkglTestCase_007461_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007461_2 "perator.pre_increment_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007461, VkglTestCase_007461_1, VkglTestCase_007461_2);

#define VkglTestCase_007462_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007462_2 "erator.pre_increment_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007462, VkglTestCase_007462_1, VkglTestCase_007462_2);

#define VkglTestCase_007463_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007463_2 "rator.pre_increment_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007463, VkglTestCase_007463_1, VkglTestCase_007463_2);

#define VkglTestCase_007464_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007464_2 "perator.pre_increment_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007464, VkglTestCase_007464_1, VkglTestCase_007464_2);

#define VkglTestCase_007465_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007465_2 "erator.pre_increment_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007465, VkglTestCase_007465_1, VkglTestCase_007465_2);

#define VkglTestCase_007466_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007466_2 "operator.pre_increment_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007466, VkglTestCase_007466_1, VkglTestCase_007466_2);

#define VkglTestCase_007467_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007467_2 "perator.pre_increment_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007467, VkglTestCase_007467_1, VkglTestCase_007467_2);

#define VkglTestCase_007468_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007468_2 "erator.pre_increment_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007468, VkglTestCase_007468_1, VkglTestCase_007468_2);

#define VkglTestCase_007469_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007469_2 "rator.pre_increment_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007469, VkglTestCase_007469_1, VkglTestCase_007469_2);

#define VkglTestCase_007470_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007470_2 "perator.pre_increment_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007470, VkglTestCase_007470_1, VkglTestCase_007470_2);

#define VkglTestCase_007471_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007471_2 "erator.pre_increment_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007471, VkglTestCase_007471_1, VkglTestCase_007471_2);

#define VkglTestCase_007472_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007472_2 "operator.pre_increment_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007472, VkglTestCase_007472_1, VkglTestCase_007472_2);

#define VkglTestCase_007473_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007473_2 "perator.pre_increment_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007473, VkglTestCase_007473_1, VkglTestCase_007473_2);

#define VkglTestCase_007474_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007474_2 "perator.pre_increment_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007474, VkglTestCase_007474_1, VkglTestCase_007474_2);

#define VkglTestCase_007475_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007475_2 "erator.pre_increment_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007475, VkglTestCase_007475_1, VkglTestCase_007475_2);

#define VkglTestCase_007476_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007476_2 "operator.pre_increment_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007476, VkglTestCase_007476_1, VkglTestCase_007476_2);

#define VkglTestCase_007477_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007477_2 "perator.pre_increment_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007477, VkglTestCase_007477_1, VkglTestCase_007477_2);

#define VkglTestCase_007478_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007478_2 "perator.pre_increment_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007478, VkglTestCase_007478_1, VkglTestCase_007478_2);

#define VkglTestCase_007479_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007479_2 "erator.pre_increment_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007479, VkglTestCase_007479_1, VkglTestCase_007479_2);

#define VkglTestCase_007480_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007480_2 "erator.pre_increment_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007480, VkglTestCase_007480_1, VkglTestCase_007480_2);

#define VkglTestCase_007481_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007481_2 "rator.pre_increment_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007481, VkglTestCase_007481_1, VkglTestCase_007481_2);

#define VkglTestCase_007482_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007482_2 "perator.pre_increment_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007482, VkglTestCase_007482_1, VkglTestCase_007482_2);

#define VkglTestCase_007483_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007483_2 "erator.pre_increment_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007483, VkglTestCase_007483_1, VkglTestCase_007483_2);

#define VkglTestCase_007484_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007484_2 "perator.pre_increment_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007484, VkglTestCase_007484_1, VkglTestCase_007484_2);

#define VkglTestCase_007485_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007485_2 "erator.pre_increment_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007485, VkglTestCase_007485_1, VkglTestCase_007485_2);

#define VkglTestCase_007486_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007486_2 "erator.pre_increment_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007486, VkglTestCase_007486_1, VkglTestCase_007486_2);

#define VkglTestCase_007487_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007487_2 "rator.pre_increment_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007487, VkglTestCase_007487_1, VkglTestCase_007487_2);

#define VkglTestCase_007488_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007488_2 "perator.pre_increment_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007488, VkglTestCase_007488_1, VkglTestCase_007488_2);

#define VkglTestCase_007489_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007489_2 "erator.pre_increment_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007489, VkglTestCase_007489_1, VkglTestCase_007489_2);

#define VkglTestCase_007490_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007490_2 "perator.pre_increment_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007490, VkglTestCase_007490_1, VkglTestCase_007490_2);

#define VkglTestCase_007491_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007491_2 "erator.pre_increment_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007491, VkglTestCase_007491_1, VkglTestCase_007491_2);

#define VkglTestCase_007492_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007492_2 "erator.pre_increment_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007492, VkglTestCase_007492_1, VkglTestCase_007492_2);

#define VkglTestCase_007493_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007493_2 "rator.pre_increment_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007493, VkglTestCase_007493_1, VkglTestCase_007493_2);

#define VkglTestCase_007494_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007494_2 "perator.pre_increment_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007494, VkglTestCase_007494_1, VkglTestCase_007494_2);

#define VkglTestCase_007495_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007495_2 "erator.pre_increment_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007495, VkglTestCase_007495_1, VkglTestCase_007495_2);

#define VkglTestCase_007496_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007496_2 "operator.pre_increment_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007496, VkglTestCase_007496_1, VkglTestCase_007496_2);

#define VkglTestCase_007497_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007497_2 "perator.pre_increment_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007497, VkglTestCase_007497_1, VkglTestCase_007497_2);

#define VkglTestCase_007498_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007498_2 "erator.pre_increment_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007498, VkglTestCase_007498_1, VkglTestCase_007498_2);

#define VkglTestCase_007499_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007499_2 "rator.pre_increment_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007499, VkglTestCase_007499_1, VkglTestCase_007499_2);

#define VkglTestCase_007500_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007500_2 "perator.pre_increment_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007500, VkglTestCase_007500_1, VkglTestCase_007500_2);

#define VkglTestCase_007501_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007501_2 "erator.pre_increment_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007501, VkglTestCase_007501_1, VkglTestCase_007501_2);

#define VkglTestCase_007502_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007502_2 "perator.pre_increment_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007502, VkglTestCase_007502_1, VkglTestCase_007502_2);

#define VkglTestCase_007503_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007503_2 "erator.pre_increment_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007503, VkglTestCase_007503_1, VkglTestCase_007503_2);

#define VkglTestCase_007504_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007504_2 "erator.pre_increment_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007504, VkglTestCase_007504_1, VkglTestCase_007504_2);

#define VkglTestCase_007505_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007505_2 "rator.pre_increment_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007505, VkglTestCase_007505_1, VkglTestCase_007505_2);

#define VkglTestCase_007506_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007506_2 "perator.pre_increment_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007506, VkglTestCase_007506_1, VkglTestCase_007506_2);

#define VkglTestCase_007507_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007507_2 "erator.pre_increment_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007507, VkglTestCase_007507_1, VkglTestCase_007507_2);

#define VkglTestCase_007508_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007508_2 "perator.pre_increment_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007508, VkglTestCase_007508_1, VkglTestCase_007508_2);

#define VkglTestCase_007509_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007509_2 "erator.pre_increment_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007509, VkglTestCase_007509_1, VkglTestCase_007509_2);

#define VkglTestCase_007510_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007510_2 "erator.pre_increment_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007510, VkglTestCase_007510_1, VkglTestCase_007510_2);

#define VkglTestCase_007511_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007511_2 "rator.pre_increment_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007511, VkglTestCase_007511_1, VkglTestCase_007511_2);

#define VkglTestCase_007512_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007512_2 "perator.pre_increment_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007512, VkglTestCase_007512_1, VkglTestCase_007512_2);

#define VkglTestCase_007513_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007513_2 "erator.pre_increment_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007513, VkglTestCase_007513_1, VkglTestCase_007513_2);

#define VkglTestCase_007514_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007514_2 "perator.pre_increment_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007514, VkglTestCase_007514_1, VkglTestCase_007514_2);

#define VkglTestCase_007515_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007515_2 "erator.pre_increment_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007515, VkglTestCase_007515_1, VkglTestCase_007515_2);

#define VkglTestCase_007516_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007516_2 "erator.pre_increment_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007516, VkglTestCase_007516_1, VkglTestCase_007516_2);

#define VkglTestCase_007517_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007517_2 "rator.pre_increment_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007517, VkglTestCase_007517_1, VkglTestCase_007517_2);

#define VkglTestCase_007518_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007518_2 "perator.pre_increment_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007518, VkglTestCase_007518_1, VkglTestCase_007518_2);

#define VkglTestCase_007519_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007519_2 "erator.pre_increment_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007519, VkglTestCase_007519_1, VkglTestCase_007519_2);
