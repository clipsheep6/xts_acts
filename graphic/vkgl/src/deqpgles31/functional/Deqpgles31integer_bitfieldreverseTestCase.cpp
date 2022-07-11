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
#include "../ActsDeqpgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001521_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001521_2 "ions.integer.bitfieldreverse.int_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001521, VkglTestCase_001521_1, VkglTestCase_001521_2);

#define VkglTestCase_001522_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001522_2 "ons.integer.bitfieldreverse.int_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001522, VkglTestCase_001522_1, VkglTestCase_001522_2);

#define VkglTestCase_001523_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001523_2 "ons.integer.bitfieldreverse.int_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001523, VkglTestCase_001523_1, VkglTestCase_001523_2);

#define VkglTestCase_001524_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001524_2 "s.integer.bitfieldreverse.int_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001524, VkglTestCase_001524_1, VkglTestCase_001524_2);

#define VkglTestCase_001525_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001525_2 "ons.integer.bitfieldreverse.int_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001525, VkglTestCase_001525_1, VkglTestCase_001525_2);

#define VkglTestCase_001526_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001526_2 "ions.integer.bitfieldreverse.int_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001526, VkglTestCase_001526_1, VkglTestCase_001526_2);

#define VkglTestCase_001527_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001527_2 "ons.integer.bitfieldreverse.int_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001527, VkglTestCase_001527_1, VkglTestCase_001527_2);

#define VkglTestCase_001528_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001528_2 "ns.integer.bitfieldreverse.int_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001528, VkglTestCase_001528_1, VkglTestCase_001528_2);

#define VkglTestCase_001529_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001529_2 "ns.integer.bitfieldreverse.int_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001529, VkglTestCase_001529_1, VkglTestCase_001529_2);

#define VkglTestCase_001530_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001530_2 ".integer.bitfieldreverse.int_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001530, VkglTestCase_001530_1, VkglTestCase_001530_2);

#define VkglTestCase_001531_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001531_2 "s.integer.bitfieldreverse.int_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001531, VkglTestCase_001531_1, VkglTestCase_001531_2);

#define VkglTestCase_001532_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001532_2 "ns.integer.bitfieldreverse.int_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001532, VkglTestCase_001532_1, VkglTestCase_001532_2);

#define VkglTestCase_001533_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001533_2 "ions.integer.bitfieldreverse.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001533, VkglTestCase_001533_1, VkglTestCase_001533_2);

#define VkglTestCase_001534_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001534_2 "ons.integer.bitfieldreverse.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001534, VkglTestCase_001534_1, VkglTestCase_001534_2);

#define VkglTestCase_001535_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001535_2 "ons.integer.bitfieldreverse.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001535, VkglTestCase_001535_1, VkglTestCase_001535_2);

#define VkglTestCase_001536_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001536_2 "s.integer.bitfieldreverse.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001536, VkglTestCase_001536_1, VkglTestCase_001536_2);

#define VkglTestCase_001537_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001537_2 "ns.integer.bitfieldreverse.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001537, VkglTestCase_001537_1, VkglTestCase_001537_2);

#define VkglTestCase_001538_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001538_2 "ons.integer.bitfieldreverse.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001538, VkglTestCase_001538_1, VkglTestCase_001538_2);

#define VkglTestCase_001539_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001539_2 "ons.integer.bitfieldreverse.ivec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001539, VkglTestCase_001539_1, VkglTestCase_001539_2);

#define VkglTestCase_001540_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001540_2 "ns.integer.bitfieldreverse.ivec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001540, VkglTestCase_001540_1, VkglTestCase_001540_2);

#define VkglTestCase_001541_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001541_2 "ns.integer.bitfieldreverse.ivec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001541, VkglTestCase_001541_1, VkglTestCase_001541_2);

#define VkglTestCase_001542_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001542_2 ".integer.bitfieldreverse.ivec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001542, VkglTestCase_001542_1, VkglTestCase_001542_2);

#define VkglTestCase_001543_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001543_2 "ns.integer.bitfieldreverse.ivec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001543, VkglTestCase_001543_1, VkglTestCase_001543_2);

#define VkglTestCase_001544_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001544_2 "ons.integer.bitfieldreverse.ivec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001544, VkglTestCase_001544_1, VkglTestCase_001544_2);

#define VkglTestCase_001545_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001545_2 "ns.integer.bitfieldreverse.ivec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001545, VkglTestCase_001545_1, VkglTestCase_001545_2);

#define VkglTestCase_001546_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001546_2 "s.integer.bitfieldreverse.ivec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001546, VkglTestCase_001546_1, VkglTestCase_001546_2);

#define VkglTestCase_001547_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001547_2 "s.integer.bitfieldreverse.ivec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001547, VkglTestCase_001547_1, VkglTestCase_001547_2);

#define VkglTestCase_001548_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001548_2 "integer.bitfieldreverse.ivec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001548, VkglTestCase_001548_1, VkglTestCase_001548_2);

#define VkglTestCase_001549_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001549_2 ".integer.bitfieldreverse.ivec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001549, VkglTestCase_001549_1, VkglTestCase_001549_2);

#define VkglTestCase_001550_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001550_2 "s.integer.bitfieldreverse.ivec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001550, VkglTestCase_001550_1, VkglTestCase_001550_2);

#define VkglTestCase_001551_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001551_2 "ons.integer.bitfieldreverse.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001551, VkglTestCase_001551_1, VkglTestCase_001551_2);

#define VkglTestCase_001552_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001552_2 "ns.integer.bitfieldreverse.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001552, VkglTestCase_001552_1, VkglTestCase_001552_2);

#define VkglTestCase_001553_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001553_2 "ns.integer.bitfieldreverse.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001553, VkglTestCase_001553_1, VkglTestCase_001553_2);

#define VkglTestCase_001554_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001554_2 ".integer.bitfieldreverse.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001554, VkglTestCase_001554_1, VkglTestCase_001554_2);

#define VkglTestCase_001555_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001555_2 "s.integer.bitfieldreverse.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001555, VkglTestCase_001555_1, VkglTestCase_001555_2);

#define VkglTestCase_001556_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001556_2 "ns.integer.bitfieldreverse.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001556, VkglTestCase_001556_1, VkglTestCase_001556_2);

#define VkglTestCase_001557_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001557_2 "ons.integer.bitfieldreverse.ivec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001557, VkglTestCase_001557_1, VkglTestCase_001557_2);

#define VkglTestCase_001558_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001558_2 "ns.integer.bitfieldreverse.ivec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001558, VkglTestCase_001558_1, VkglTestCase_001558_2);

#define VkglTestCase_001559_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001559_2 "ns.integer.bitfieldreverse.ivec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001559, VkglTestCase_001559_1, VkglTestCase_001559_2);

#define VkglTestCase_001560_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001560_2 ".integer.bitfieldreverse.ivec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001560, VkglTestCase_001560_1, VkglTestCase_001560_2);

#define VkglTestCase_001561_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001561_2 "ns.integer.bitfieldreverse.ivec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001561, VkglTestCase_001561_1, VkglTestCase_001561_2);

#define VkglTestCase_001562_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001562_2 "ons.integer.bitfieldreverse.ivec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001562, VkglTestCase_001562_1, VkglTestCase_001562_2);

#define VkglTestCase_001563_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001563_2 "ns.integer.bitfieldreverse.ivec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001563, VkglTestCase_001563_1, VkglTestCase_001563_2);

#define VkglTestCase_001564_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001564_2 "s.integer.bitfieldreverse.ivec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001564, VkglTestCase_001564_1, VkglTestCase_001564_2);

#define VkglTestCase_001565_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001565_2 "s.integer.bitfieldreverse.ivec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001565, VkglTestCase_001565_1, VkglTestCase_001565_2);

#define VkglTestCase_001566_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001566_2 "integer.bitfieldreverse.ivec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001566, VkglTestCase_001566_1, VkglTestCase_001566_2);

#define VkglTestCase_001567_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001567_2 ".integer.bitfieldreverse.ivec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001567, VkglTestCase_001567_1, VkglTestCase_001567_2);

#define VkglTestCase_001568_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001568_2 "s.integer.bitfieldreverse.ivec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001568, VkglTestCase_001568_1, VkglTestCase_001568_2);

#define VkglTestCase_001569_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001569_2 "ons.integer.bitfieldreverse.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001569, VkglTestCase_001569_1, VkglTestCase_001569_2);

#define VkglTestCase_001570_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001570_2 "ns.integer.bitfieldreverse.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001570, VkglTestCase_001570_1, VkglTestCase_001570_2);

#define VkglTestCase_001571_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001571_2 "ns.integer.bitfieldreverse.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001571, VkglTestCase_001571_1, VkglTestCase_001571_2);

#define VkglTestCase_001572_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001572_2 ".integer.bitfieldreverse.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001572, VkglTestCase_001572_1, VkglTestCase_001572_2);

#define VkglTestCase_001573_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001573_2 "s.integer.bitfieldreverse.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001573, VkglTestCase_001573_1, VkglTestCase_001573_2);

#define VkglTestCase_001574_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001574_2 "ns.integer.bitfieldreverse.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001574, VkglTestCase_001574_1, VkglTestCase_001574_2);

#define VkglTestCase_001575_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001575_2 "ons.integer.bitfieldreverse.ivec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001575, VkglTestCase_001575_1, VkglTestCase_001575_2);

#define VkglTestCase_001576_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001576_2 "ns.integer.bitfieldreverse.ivec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001576, VkglTestCase_001576_1, VkglTestCase_001576_2);

#define VkglTestCase_001577_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001577_2 "ns.integer.bitfieldreverse.ivec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001577, VkglTestCase_001577_1, VkglTestCase_001577_2);

#define VkglTestCase_001578_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001578_2 ".integer.bitfieldreverse.ivec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001578, VkglTestCase_001578_1, VkglTestCase_001578_2);

#define VkglTestCase_001579_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001579_2 "ns.integer.bitfieldreverse.ivec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001579, VkglTestCase_001579_1, VkglTestCase_001579_2);

#define VkglTestCase_001580_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001580_2 "ons.integer.bitfieldreverse.ivec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001580, VkglTestCase_001580_1, VkglTestCase_001580_2);

#define VkglTestCase_001581_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001581_2 "ns.integer.bitfieldreverse.ivec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001581, VkglTestCase_001581_1, VkglTestCase_001581_2);

#define VkglTestCase_001582_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001582_2 "s.integer.bitfieldreverse.ivec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001582, VkglTestCase_001582_1, VkglTestCase_001582_2);

#define VkglTestCase_001583_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001583_2 "s.integer.bitfieldreverse.ivec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001583, VkglTestCase_001583_1, VkglTestCase_001583_2);

#define VkglTestCase_001584_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001584_2 "integer.bitfieldreverse.ivec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001584, VkglTestCase_001584_1, VkglTestCase_001584_2);

#define VkglTestCase_001585_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001585_2 ".integer.bitfieldreverse.ivec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001585, VkglTestCase_001585_1, VkglTestCase_001585_2);

#define VkglTestCase_001586_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001586_2 "s.integer.bitfieldreverse.ivec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001586, VkglTestCase_001586_1, VkglTestCase_001586_2);

#define VkglTestCase_001587_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001587_2 "ons.integer.bitfieldreverse.ivec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001587, VkglTestCase_001587_1, VkglTestCase_001587_2);

#define VkglTestCase_001588_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001588_2 "ns.integer.bitfieldreverse.ivec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001588, VkglTestCase_001588_1, VkglTestCase_001588_2);

#define VkglTestCase_001589_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001589_2 "ns.integer.bitfieldreverse.ivec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001589, VkglTestCase_001589_1, VkglTestCase_001589_2);

#define VkglTestCase_001590_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001590_2 ".integer.bitfieldreverse.ivec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001590, VkglTestCase_001590_1, VkglTestCase_001590_2);

#define VkglTestCase_001591_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001591_2 "s.integer.bitfieldreverse.ivec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001591, VkglTestCase_001591_1, VkglTestCase_001591_2);

#define VkglTestCase_001592_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001592_2 "ns.integer.bitfieldreverse.ivec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001592, VkglTestCase_001592_1, VkglTestCase_001592_2);

#define VkglTestCase_001593_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001593_2 "ions.integer.bitfieldreverse.uint_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001593, VkglTestCase_001593_1, VkglTestCase_001593_2);

#define VkglTestCase_001594_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001594_2 "ons.integer.bitfieldreverse.uint_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001594, VkglTestCase_001594_1, VkglTestCase_001594_2);

#define VkglTestCase_001595_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001595_2 "ons.integer.bitfieldreverse.uint_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001595, VkglTestCase_001595_1, VkglTestCase_001595_2);

#define VkglTestCase_001596_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001596_2 "s.integer.bitfieldreverse.uint_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001596, VkglTestCase_001596_1, VkglTestCase_001596_2);

#define VkglTestCase_001597_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001597_2 "ns.integer.bitfieldreverse.uint_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001597, VkglTestCase_001597_1, VkglTestCase_001597_2);

#define VkglTestCase_001598_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001598_2 "ons.integer.bitfieldreverse.uint_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001598, VkglTestCase_001598_1, VkglTestCase_001598_2);

#define VkglTestCase_001599_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001599_2 "ns.integer.bitfieldreverse.uint_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001599, VkglTestCase_001599_1, VkglTestCase_001599_2);

#define VkglTestCase_001600_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001600_2 "s.integer.bitfieldreverse.uint_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001600, VkglTestCase_001600_1, VkglTestCase_001600_2);

#define VkglTestCase_001601_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001601_2 "s.integer.bitfieldreverse.uint_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001601, VkglTestCase_001601_1, VkglTestCase_001601_2);

#define VkglTestCase_001602_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001602_2 "integer.bitfieldreverse.uint_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001602, VkglTestCase_001602_1, VkglTestCase_001602_2);

#define VkglTestCase_001603_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001603_2 "s.integer.bitfieldreverse.uint_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001603, VkglTestCase_001603_1, VkglTestCase_001603_2);

#define VkglTestCase_001604_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001604_2 "ns.integer.bitfieldreverse.uint_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001604, VkglTestCase_001604_1, VkglTestCase_001604_2);

#define VkglTestCase_001605_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001605_2 "ons.integer.bitfieldreverse.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001605, VkglTestCase_001605_1, VkglTestCase_001605_2);

#define VkglTestCase_001606_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001606_2 "ns.integer.bitfieldreverse.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001606, VkglTestCase_001606_1, VkglTestCase_001606_2);

#define VkglTestCase_001607_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001607_2 "ns.integer.bitfieldreverse.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001607, VkglTestCase_001607_1, VkglTestCase_001607_2);

#define VkglTestCase_001608_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001608_2 ".integer.bitfieldreverse.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001608, VkglTestCase_001608_1, VkglTestCase_001608_2);

#define VkglTestCase_001609_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001609_2 "ns.integer.bitfieldreverse.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001609, VkglTestCase_001609_1, VkglTestCase_001609_2);

#define VkglTestCase_001610_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001610_2 "ons.integer.bitfieldreverse.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001610, VkglTestCase_001610_1, VkglTestCase_001610_2);

#define VkglTestCase_001611_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001611_2 "ons.integer.bitfieldreverse.uvec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001611, VkglTestCase_001611_1, VkglTestCase_001611_2);

#define VkglTestCase_001612_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001612_2 "ns.integer.bitfieldreverse.uvec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001612, VkglTestCase_001612_1, VkglTestCase_001612_2);

#define VkglTestCase_001613_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001613_2 "ns.integer.bitfieldreverse.uvec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001613, VkglTestCase_001613_1, VkglTestCase_001613_2);

#define VkglTestCase_001614_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001614_2 ".integer.bitfieldreverse.uvec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001614, VkglTestCase_001614_1, VkglTestCase_001614_2);

#define VkglTestCase_001615_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001615_2 "ns.integer.bitfieldreverse.uvec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001615, VkglTestCase_001615_1, VkglTestCase_001615_2);

#define VkglTestCase_001616_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001616_2 "ons.integer.bitfieldreverse.uvec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001616, VkglTestCase_001616_1, VkglTestCase_001616_2);

#define VkglTestCase_001617_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001617_2 "ns.integer.bitfieldreverse.uvec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001617, VkglTestCase_001617_1, VkglTestCase_001617_2);

#define VkglTestCase_001618_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001618_2 "s.integer.bitfieldreverse.uvec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001618, VkglTestCase_001618_1, VkglTestCase_001618_2);

#define VkglTestCase_001619_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001619_2 "s.integer.bitfieldreverse.uvec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001619, VkglTestCase_001619_1, VkglTestCase_001619_2);

#define VkglTestCase_001620_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001620_2 "integer.bitfieldreverse.uvec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001620, VkglTestCase_001620_1, VkglTestCase_001620_2);

#define VkglTestCase_001621_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001621_2 ".integer.bitfieldreverse.uvec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001621, VkglTestCase_001621_1, VkglTestCase_001621_2);

#define VkglTestCase_001622_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001622_2 "s.integer.bitfieldreverse.uvec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001622, VkglTestCase_001622_1, VkglTestCase_001622_2);

#define VkglTestCase_001623_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001623_2 "ons.integer.bitfieldreverse.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001623, VkglTestCase_001623_1, VkglTestCase_001623_2);

#define VkglTestCase_001624_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001624_2 "ns.integer.bitfieldreverse.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001624, VkglTestCase_001624_1, VkglTestCase_001624_2);

#define VkglTestCase_001625_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001625_2 "ns.integer.bitfieldreverse.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001625, VkglTestCase_001625_1, VkglTestCase_001625_2);

#define VkglTestCase_001626_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001626_2 ".integer.bitfieldreverse.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001626, VkglTestCase_001626_1, VkglTestCase_001626_2);

#define VkglTestCase_001627_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001627_2 "s.integer.bitfieldreverse.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001627, VkglTestCase_001627_1, VkglTestCase_001627_2);

#define VkglTestCase_001628_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001628_2 "ns.integer.bitfieldreverse.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001628, VkglTestCase_001628_1, VkglTestCase_001628_2);

#define VkglTestCase_001629_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001629_2 "ons.integer.bitfieldreverse.uvec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001629, VkglTestCase_001629_1, VkglTestCase_001629_2);

#define VkglTestCase_001630_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001630_2 "ns.integer.bitfieldreverse.uvec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001630, VkglTestCase_001630_1, VkglTestCase_001630_2);

#define VkglTestCase_001631_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001631_2 "ns.integer.bitfieldreverse.uvec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001631, VkglTestCase_001631_1, VkglTestCase_001631_2);

#define VkglTestCase_001632_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001632_2 ".integer.bitfieldreverse.uvec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001632, VkglTestCase_001632_1, VkglTestCase_001632_2);

#define VkglTestCase_001633_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001633_2 "ns.integer.bitfieldreverse.uvec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001633, VkglTestCase_001633_1, VkglTestCase_001633_2);

#define VkglTestCase_001634_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001634_2 "ons.integer.bitfieldreverse.uvec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001634, VkglTestCase_001634_1, VkglTestCase_001634_2);

#define VkglTestCase_001635_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001635_2 "ns.integer.bitfieldreverse.uvec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001635, VkglTestCase_001635_1, VkglTestCase_001635_2);

#define VkglTestCase_001636_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001636_2 "s.integer.bitfieldreverse.uvec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001636, VkglTestCase_001636_1, VkglTestCase_001636_2);

#define VkglTestCase_001637_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001637_2 "s.integer.bitfieldreverse.uvec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001637, VkglTestCase_001637_1, VkglTestCase_001637_2);

#define VkglTestCase_001638_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001638_2 "integer.bitfieldreverse.uvec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001638, VkglTestCase_001638_1, VkglTestCase_001638_2);

#define VkglTestCase_001639_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001639_2 ".integer.bitfieldreverse.uvec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001639, VkglTestCase_001639_1, VkglTestCase_001639_2);

#define VkglTestCase_001640_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001640_2 "s.integer.bitfieldreverse.uvec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001640, VkglTestCase_001640_1, VkglTestCase_001640_2);

#define VkglTestCase_001641_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001641_2 "ons.integer.bitfieldreverse.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001641, VkglTestCase_001641_1, VkglTestCase_001641_2);

#define VkglTestCase_001642_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001642_2 "ns.integer.bitfieldreverse.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001642, VkglTestCase_001642_1, VkglTestCase_001642_2);

#define VkglTestCase_001643_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001643_2 "ns.integer.bitfieldreverse.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001643, VkglTestCase_001643_1, VkglTestCase_001643_2);

#define VkglTestCase_001644_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001644_2 ".integer.bitfieldreverse.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001644, VkglTestCase_001644_1, VkglTestCase_001644_2);

#define VkglTestCase_001645_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001645_2 "s.integer.bitfieldreverse.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001645, VkglTestCase_001645_1, VkglTestCase_001645_2);

#define VkglTestCase_001646_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001646_2 "ns.integer.bitfieldreverse.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001646, VkglTestCase_001646_1, VkglTestCase_001646_2);

#define VkglTestCase_001647_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001647_2 "ons.integer.bitfieldreverse.uvec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001647, VkglTestCase_001647_1, VkglTestCase_001647_2);

#define VkglTestCase_001648_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001648_2 "ns.integer.bitfieldreverse.uvec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001648, VkglTestCase_001648_1, VkglTestCase_001648_2);

#define VkglTestCase_001649_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001649_2 "ns.integer.bitfieldreverse.uvec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001649, VkglTestCase_001649_1, VkglTestCase_001649_2);

#define VkglTestCase_001650_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001650_2 ".integer.bitfieldreverse.uvec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001650, VkglTestCase_001650_1, VkglTestCase_001650_2);

#define VkglTestCase_001651_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001651_2 "ns.integer.bitfieldreverse.uvec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001651, VkglTestCase_001651_1, VkglTestCase_001651_2);

#define VkglTestCase_001652_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001652_2 "ons.integer.bitfieldreverse.uvec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001652, VkglTestCase_001652_1, VkglTestCase_001652_2);

#define VkglTestCase_001653_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001653_2 "ns.integer.bitfieldreverse.uvec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001653, VkglTestCase_001653_1, VkglTestCase_001653_2);

#define VkglTestCase_001654_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001654_2 "s.integer.bitfieldreverse.uvec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001654, VkglTestCase_001654_1, VkglTestCase_001654_2);

#define VkglTestCase_001655_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001655_2 "s.integer.bitfieldreverse.uvec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001655, VkglTestCase_001655_1, VkglTestCase_001655_2);

#define VkglTestCase_001656_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001656_2 "integer.bitfieldreverse.uvec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001656, VkglTestCase_001656_1, VkglTestCase_001656_2);

#define VkglTestCase_001657_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001657_2 ".integer.bitfieldreverse.uvec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001657, VkglTestCase_001657_1, VkglTestCase_001657_2);

#define VkglTestCase_001658_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001658_2 "s.integer.bitfieldreverse.uvec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001658, VkglTestCase_001658_1, VkglTestCase_001658_2);

#define VkglTestCase_001659_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001659_2 "ons.integer.bitfieldreverse.uvec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001659, VkglTestCase_001659_1, VkglTestCase_001659_2);

#define VkglTestCase_001660_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001660_2 "ns.integer.bitfieldreverse.uvec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001660, VkglTestCase_001660_1, VkglTestCase_001660_2);

#define VkglTestCase_001661_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001661_2 "ns.integer.bitfieldreverse.uvec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001661, VkglTestCase_001661_1, VkglTestCase_001661_2);

#define VkglTestCase_001662_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001662_2 ".integer.bitfieldreverse.uvec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001662, VkglTestCase_001662_1, VkglTestCase_001662_2);

#define VkglTestCase_001663_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001663_2 "s.integer.bitfieldreverse.uvec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001663, VkglTestCase_001663_1, VkglTestCase_001663_2);

#define VkglTestCase_001664_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001664_2 "ns.integer.bitfieldreverse.uvec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001664, VkglTestCase_001664_1, VkglTestCase_001664_2);
