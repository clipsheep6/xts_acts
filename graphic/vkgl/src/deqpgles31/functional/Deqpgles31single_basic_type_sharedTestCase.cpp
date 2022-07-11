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
#include "../ActsDeqpgles310009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008332_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008332_2 "single_basic_type.shared.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008332, VkglTestCase_008332_1, VkglTestCase_008332_2);

#define VkglTestCase_008333_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008333_2 "ingle_basic_type.shared.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008333, VkglTestCase_008333_1, VkglTestCase_008333_2);

#define VkglTestCase_008334_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008334_2 "single_basic_type.shared.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008334, VkglTestCase_008334_1, VkglTestCase_008334_2);

#define VkglTestCase_008335_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008335_2 ".single_basic_type.shared.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008335, VkglTestCase_008335_1, VkglTestCase_008335_2);

#define VkglTestCase_008336_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008336_2 "ingle_basic_type.shared.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008336, VkglTestCase_008336_1, VkglTestCase_008336_2);

#define VkglTestCase_008337_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008337_2 "single_basic_type.shared.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008337, VkglTestCase_008337_1, VkglTestCase_008337_2);

#define VkglTestCase_008338_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008338_2 ".single_basic_type.shared.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008338, VkglTestCase_008338_1, VkglTestCase_008338_2);

#define VkglTestCase_008339_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008339_2 "ingle_basic_type.shared.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008339, VkglTestCase_008339_1, VkglTestCase_008339_2);

#define VkglTestCase_008340_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008340_2 "single_basic_type.shared.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008340, VkglTestCase_008340_1, VkglTestCase_008340_2);

#define VkglTestCase_008341_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008341_2 ".single_basic_type.shared.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008341, VkglTestCase_008341_1, VkglTestCase_008341_2);

#define VkglTestCase_008342_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008342_2 "ingle_basic_type.shared.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008342, VkglTestCase_008342_1, VkglTestCase_008342_2);

#define VkglTestCase_008343_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008343_2 "single_basic_type.shared.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008343, VkglTestCase_008343_1, VkglTestCase_008343_2);

#define VkglTestCase_008344_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008344_2 ".single_basic_type.shared.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008344, VkglTestCase_008344_1, VkglTestCase_008344_2);

#define VkglTestCase_008345_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008345_2 "single_basic_type.shared.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008345, VkglTestCase_008345_1, VkglTestCase_008345_2);

#define VkglTestCase_008346_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008346_2 ".single_basic_type.shared.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008346, VkglTestCase_008346_1, VkglTestCase_008346_2);

#define VkglTestCase_008347_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008347_2 "single_basic_type.shared.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008347, VkglTestCase_008347_1, VkglTestCase_008347_2);

#define VkglTestCase_008348_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008348_2 "ingle_basic_type.shared.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008348, VkglTestCase_008348_1, VkglTestCase_008348_2);

#define VkglTestCase_008349_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008349_2 "single_basic_type.shared.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008349, VkglTestCase_008349_1, VkglTestCase_008349_2);

#define VkglTestCase_008350_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008350_2 "single_basic_type.shared.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008350, VkglTestCase_008350_1, VkglTestCase_008350_2);

#define VkglTestCase_008351_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008351_2 "ingle_basic_type.shared.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008351, VkglTestCase_008351_1, VkglTestCase_008351_2);

#define VkglTestCase_008352_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008352_2 "single_basic_type.shared.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008352, VkglTestCase_008352_1, VkglTestCase_008352_2);

#define VkglTestCase_008353_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008353_2 "single_basic_type.shared.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008353, VkglTestCase_008353_1, VkglTestCase_008353_2);

#define VkglTestCase_008354_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008354_2 "ingle_basic_type.shared.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008354, VkglTestCase_008354_1, VkglTestCase_008354_2);

#define VkglTestCase_008355_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008355_2 "single_basic_type.shared.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008355, VkglTestCase_008355_1, VkglTestCase_008355_2);

#define VkglTestCase_008356_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008356_2 ".single_basic_type.shared.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008356, VkglTestCase_008356_1, VkglTestCase_008356_2);

#define VkglTestCase_008357_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008357_2 "ingle_basic_type.shared.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008357, VkglTestCase_008357_1, VkglTestCase_008357_2);

#define VkglTestCase_008358_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008358_2 "single_basic_type.shared.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008358, VkglTestCase_008358_1, VkglTestCase_008358_2);

#define VkglTestCase_008359_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008359_2 "single_basic_type.shared.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008359, VkglTestCase_008359_1, VkglTestCase_008359_2);

#define VkglTestCase_008360_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008360_2 "ingle_basic_type.shared.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008360, VkglTestCase_008360_1, VkglTestCase_008360_2);

#define VkglTestCase_008361_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008361_2 "single_basic_type.shared.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008361, VkglTestCase_008361_1, VkglTestCase_008361_2);

#define VkglTestCase_008362_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008362_2 "single_basic_type.shared.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008362, VkglTestCase_008362_1, VkglTestCase_008362_2);

#define VkglTestCase_008363_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008363_2 "ingle_basic_type.shared.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008363, VkglTestCase_008363_1, VkglTestCase_008363_2);

#define VkglTestCase_008364_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008364_2 "single_basic_type.shared.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008364, VkglTestCase_008364_1, VkglTestCase_008364_2);

#define VkglTestCase_008365_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008365_2 "single_basic_type.shared.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008365, VkglTestCase_008365_1, VkglTestCase_008365_2);

#define VkglTestCase_008366_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008366_2 "ingle_basic_type.shared.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008366, VkglTestCase_008366_1, VkglTestCase_008366_2);

#define VkglTestCase_008367_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008367_2 "single_basic_type.shared.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008367, VkglTestCase_008367_1, VkglTestCase_008367_2);

#define VkglTestCase_008368_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008368_2 "ut.single_basic_type.shared.bool"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008368, VkglTestCase_008368_1, VkglTestCase_008368_2);

#define VkglTestCase_008369_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008369_2 "ut.single_basic_type.shared.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008369, VkglTestCase_008369_1, VkglTestCase_008369_2);

#define VkglTestCase_008370_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008370_2 "ut.single_basic_type.shared.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008370, VkglTestCase_008370_1, VkglTestCase_008370_2);

#define VkglTestCase_008371_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008371_2 "ut.single_basic_type.shared.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008371, VkglTestCase_008371_1, VkglTestCase_008371_2);

#define VkglTestCase_008372_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008372_2 ".single_basic_type.shared.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008372, VkglTestCase_008372_1, VkglTestCase_008372_2);

#define VkglTestCase_008373_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008373_2 "ingle_basic_type.shared.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008373, VkglTestCase_008373_1, VkglTestCase_008373_2);

#define VkglTestCase_008374_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008374_2 "single_basic_type.shared.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008374, VkglTestCase_008374_1, VkglTestCase_008374_2);

#define VkglTestCase_008375_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008375_2 "le_basic_type.shared.row_major_lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008375, VkglTestCase_008375_1, VkglTestCase_008375_2);

#define VkglTestCase_008376_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008376_2 "_basic_type.shared.row_major_mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008376, VkglTestCase_008376_1, VkglTestCase_008376_2);

#define VkglTestCase_008377_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008377_2 "e_basic_type.shared.row_major_highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008377, VkglTestCase_008377_1, VkglTestCase_008377_2);

#define VkglTestCase_008378_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008378_2 "_basic_type.shared.column_major_lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008378, VkglTestCase_008378_1, VkglTestCase_008378_2);

#define VkglTestCase_008379_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008379_2 "basic_type.shared.column_major_mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008379, VkglTestCase_008379_1, VkglTestCase_008379_2);

#define VkglTestCase_008380_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008380_2 "_basic_type.shared.column_major_highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008380, VkglTestCase_008380_1, VkglTestCase_008380_2);

#define VkglTestCase_008381_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008381_2 ".single_basic_type.shared.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008381, VkglTestCase_008381_1, VkglTestCase_008381_2);

#define VkglTestCase_008382_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008382_2 "ingle_basic_type.shared.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008382, VkglTestCase_008382_1, VkglTestCase_008382_2);

#define VkglTestCase_008383_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008383_2 "single_basic_type.shared.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008383, VkglTestCase_008383_1, VkglTestCase_008383_2);

#define VkglTestCase_008384_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008384_2 "le_basic_type.shared.row_major_lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008384, VkglTestCase_008384_1, VkglTestCase_008384_2);

#define VkglTestCase_008385_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008385_2 "_basic_type.shared.row_major_mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008385, VkglTestCase_008385_1, VkglTestCase_008385_2);

#define VkglTestCase_008386_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008386_2 "e_basic_type.shared.row_major_highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008386, VkglTestCase_008386_1, VkglTestCase_008386_2);

#define VkglTestCase_008387_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008387_2 "_basic_type.shared.column_major_lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008387, VkglTestCase_008387_1, VkglTestCase_008387_2);

#define VkglTestCase_008388_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008388_2 "basic_type.shared.column_major_mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008388, VkglTestCase_008388_1, VkglTestCase_008388_2);

#define VkglTestCase_008389_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008389_2 "_basic_type.shared.column_major_highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008389, VkglTestCase_008389_1, VkglTestCase_008389_2);

#define VkglTestCase_008390_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008390_2 ".single_basic_type.shared.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008390, VkglTestCase_008390_1, VkglTestCase_008390_2);

#define VkglTestCase_008391_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008391_2 "ingle_basic_type.shared.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008391, VkglTestCase_008391_1, VkglTestCase_008391_2);

#define VkglTestCase_008392_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008392_2 "single_basic_type.shared.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008392, VkglTestCase_008392_1, VkglTestCase_008392_2);

#define VkglTestCase_008393_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008393_2 "le_basic_type.shared.row_major_lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008393, VkglTestCase_008393_1, VkglTestCase_008393_2);

#define VkglTestCase_008394_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008394_2 "_basic_type.shared.row_major_mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008394, VkglTestCase_008394_1, VkglTestCase_008394_2);

#define VkglTestCase_008395_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008395_2 "e_basic_type.shared.row_major_highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008395, VkglTestCase_008395_1, VkglTestCase_008395_2);

#define VkglTestCase_008396_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008396_2 "_basic_type.shared.column_major_lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008396, VkglTestCase_008396_1, VkglTestCase_008396_2);

#define VkglTestCase_008397_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008397_2 "basic_type.shared.column_major_mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008397, VkglTestCase_008397_1, VkglTestCase_008397_2);

#define VkglTestCase_008398_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008398_2 "_basic_type.shared.column_major_highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008398, VkglTestCase_008398_1, VkglTestCase_008398_2);

#define VkglTestCase_008399_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008399_2 "single_basic_type.shared.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008399, VkglTestCase_008399_1, VkglTestCase_008399_2);

#define VkglTestCase_008400_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008400_2 "ngle_basic_type.shared.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008400, VkglTestCase_008400_1, VkglTestCase_008400_2);

#define VkglTestCase_008401_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008401_2 "ingle_basic_type.shared.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008401, VkglTestCase_008401_1, VkglTestCase_008401_2);

#define VkglTestCase_008402_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008402_2 "e_basic_type.shared.row_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008402, VkglTestCase_008402_1, VkglTestCase_008402_2);

#define VkglTestCase_008403_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008403_2 "basic_type.shared.row_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008403, VkglTestCase_008403_1, VkglTestCase_008403_2);

#define VkglTestCase_008404_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008404_2 "_basic_type.shared.row_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008404, VkglTestCase_008404_1, VkglTestCase_008404_2);

#define VkglTestCase_008405_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008405_2 "basic_type.shared.column_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008405, VkglTestCase_008405_1, VkglTestCase_008405_2);

#define VkglTestCase_008406_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008406_2 "asic_type.shared.column_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008406, VkglTestCase_008406_1, VkglTestCase_008406_2);

#define VkglTestCase_008407_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008407_2 "basic_type.shared.column_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008407, VkglTestCase_008407_1, VkglTestCase_008407_2);

#define VkglTestCase_008408_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008408_2 "single_basic_type.shared.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008408, VkglTestCase_008408_1, VkglTestCase_008408_2);

#define VkglTestCase_008409_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008409_2 "ngle_basic_type.shared.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008409, VkglTestCase_008409_1, VkglTestCase_008409_2);

#define VkglTestCase_008410_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008410_2 "ingle_basic_type.shared.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008410, VkglTestCase_008410_1, VkglTestCase_008410_2);

#define VkglTestCase_008411_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008411_2 "e_basic_type.shared.row_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008411, VkglTestCase_008411_1, VkglTestCase_008411_2);

#define VkglTestCase_008412_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008412_2 "basic_type.shared.row_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008412, VkglTestCase_008412_1, VkglTestCase_008412_2);

#define VkglTestCase_008413_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008413_2 "_basic_type.shared.row_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008413, VkglTestCase_008413_1, VkglTestCase_008413_2);

#define VkglTestCase_008414_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008414_2 "basic_type.shared.column_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008414, VkglTestCase_008414_1, VkglTestCase_008414_2);

#define VkglTestCase_008415_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008415_2 "asic_type.shared.column_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008415, VkglTestCase_008415_1, VkglTestCase_008415_2);

#define VkglTestCase_008416_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008416_2 "basic_type.shared.column_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008416, VkglTestCase_008416_1, VkglTestCase_008416_2);

#define VkglTestCase_008417_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008417_2 "single_basic_type.shared.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008417, VkglTestCase_008417_1, VkglTestCase_008417_2);

#define VkglTestCase_008418_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008418_2 "ngle_basic_type.shared.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008418, VkglTestCase_008418_1, VkglTestCase_008418_2);

#define VkglTestCase_008419_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008419_2 "ingle_basic_type.shared.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008419, VkglTestCase_008419_1, VkglTestCase_008419_2);

#define VkglTestCase_008420_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008420_2 "e_basic_type.shared.row_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008420, VkglTestCase_008420_1, VkglTestCase_008420_2);

#define VkglTestCase_008421_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008421_2 "basic_type.shared.row_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008421, VkglTestCase_008421_1, VkglTestCase_008421_2);

#define VkglTestCase_008422_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008422_2 "_basic_type.shared.row_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008422, VkglTestCase_008422_1, VkglTestCase_008422_2);

#define VkglTestCase_008423_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008423_2 "basic_type.shared.column_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008423, VkglTestCase_008423_1, VkglTestCase_008423_2);

#define VkglTestCase_008424_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008424_2 "asic_type.shared.column_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008424, VkglTestCase_008424_1, VkglTestCase_008424_2);

#define VkglTestCase_008425_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008425_2 "basic_type.shared.column_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008425, VkglTestCase_008425_1, VkglTestCase_008425_2);

#define VkglTestCase_008426_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008426_2 "single_basic_type.shared.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008426, VkglTestCase_008426_1, VkglTestCase_008426_2);

#define VkglTestCase_008427_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008427_2 "ngle_basic_type.shared.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008427, VkglTestCase_008427_1, VkglTestCase_008427_2);

#define VkglTestCase_008428_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008428_2 "ingle_basic_type.shared.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008428, VkglTestCase_008428_1, VkglTestCase_008428_2);

#define VkglTestCase_008429_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008429_2 "e_basic_type.shared.row_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008429, VkglTestCase_008429_1, VkglTestCase_008429_2);

#define VkglTestCase_008430_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008430_2 "basic_type.shared.row_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008430, VkglTestCase_008430_1, VkglTestCase_008430_2);

#define VkglTestCase_008431_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008431_2 "_basic_type.shared.row_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008431, VkglTestCase_008431_1, VkglTestCase_008431_2);

#define VkglTestCase_008432_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008432_2 "basic_type.shared.column_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008432, VkglTestCase_008432_1, VkglTestCase_008432_2);

#define VkglTestCase_008433_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008433_2 "asic_type.shared.column_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008433, VkglTestCase_008433_1, VkglTestCase_008433_2);

#define VkglTestCase_008434_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008434_2 "basic_type.shared.column_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008434, VkglTestCase_008434_1, VkglTestCase_008434_2);

#define VkglTestCase_008435_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008435_2 "single_basic_type.shared.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008435, VkglTestCase_008435_1, VkglTestCase_008435_2);

#define VkglTestCase_008436_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008436_2 "ngle_basic_type.shared.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008436, VkglTestCase_008436_1, VkglTestCase_008436_2);

#define VkglTestCase_008437_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008437_2 "ingle_basic_type.shared.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008437, VkglTestCase_008437_1, VkglTestCase_008437_2);

#define VkglTestCase_008438_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008438_2 "e_basic_type.shared.row_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008438, VkglTestCase_008438_1, VkglTestCase_008438_2);

#define VkglTestCase_008439_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008439_2 "basic_type.shared.row_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008439, VkglTestCase_008439_1, VkglTestCase_008439_2);

#define VkglTestCase_008440_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008440_2 "_basic_type.shared.row_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008440, VkglTestCase_008440_1, VkglTestCase_008440_2);

#define VkglTestCase_008441_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008441_2 "basic_type.shared.column_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008441, VkglTestCase_008441_1, VkglTestCase_008441_2);

#define VkglTestCase_008442_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008442_2 "asic_type.shared.column_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008442, VkglTestCase_008442_1, VkglTestCase_008442_2);

#define VkglTestCase_008443_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008443_2 "basic_type.shared.column_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008443, VkglTestCase_008443_1, VkglTestCase_008443_2);

#define VkglTestCase_008444_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008444_2 "single_basic_type.shared.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008444, VkglTestCase_008444_1, VkglTestCase_008444_2);

#define VkglTestCase_008445_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008445_2 "ngle_basic_type.shared.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008445, VkglTestCase_008445_1, VkglTestCase_008445_2);

#define VkglTestCase_008446_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008446_2 "ingle_basic_type.shared.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008446, VkglTestCase_008446_1, VkglTestCase_008446_2);

#define VkglTestCase_008447_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008447_2 "e_basic_type.shared.row_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008447, VkglTestCase_008447_1, VkglTestCase_008447_2);

#define VkglTestCase_008448_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008448_2 "basic_type.shared.row_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008448, VkglTestCase_008448_1, VkglTestCase_008448_2);

#define VkglTestCase_008449_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008449_2 "_basic_type.shared.row_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008449, VkglTestCase_008449_1, VkglTestCase_008449_2);

#define VkglTestCase_008450_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008450_2 "basic_type.shared.column_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008450, VkglTestCase_008450_1, VkglTestCase_008450_2);

#define VkglTestCase_008451_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008451_2 "asic_type.shared.column_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008451, VkglTestCase_008451_1, VkglTestCase_008451_2);

#define VkglTestCase_008452_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008452_2 "basic_type.shared.column_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008452, VkglTestCase_008452_1, VkglTestCase_008452_2);
