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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039332_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039332_2 "_out.array.int.rgba32i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039332, VkglTestCase_039332_1, VkglTestCase_039332_2);

#define VkglTestCase_039333_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039333_2 "out.array.int.rgba32i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039333, VkglTestCase_039333_1, VkglTestCase_039333_2);

#define VkglTestCase_039334_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039334_2 "out.array.int.rgba32i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039334, VkglTestCase_039334_1, VkglTestCase_039334_2);

#define VkglTestCase_039335_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039335_2 "out.array.int.rgba32i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039335, VkglTestCase_039335_1, VkglTestCase_039335_2);

#define VkglTestCase_039336_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039336_2 "ut.array.int.rgba32i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039336, VkglTestCase_039336_1, VkglTestCase_039336_2);

#define VkglTestCase_039337_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039337_2 "t.array.int.rgba32i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039337, VkglTestCase_039337_1, VkglTestCase_039337_2);

#define VkglTestCase_039338_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039338_2 "t.array.int.rgba32i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039338, VkglTestCase_039338_1, VkglTestCase_039338_2);

#define VkglTestCase_039339_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039339_2 "t.array.int.rgba32i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039339, VkglTestCase_039339_1, VkglTestCase_039339_2);

#define VkglTestCase_039340_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039340_2 "out.array.int.rgba32i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039340, VkglTestCase_039340_1, VkglTestCase_039340_2);

#define VkglTestCase_039341_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039341_2 "ut.array.int.rgba32i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039341, VkglTestCase_039341_1, VkglTestCase_039341_2);

#define VkglTestCase_039342_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039342_2 "ut.array.int.rgba32i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039342, VkglTestCase_039342_1, VkglTestCase_039342_2);

#define VkglTestCase_039343_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039343_2 "ut.array.int.rgba32i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039343, VkglTestCase_039343_1, VkglTestCase_039343_2);

#define VkglTestCase_039344_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039344_2 "_out.array.int.rgba16i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039344, VkglTestCase_039344_1, VkglTestCase_039344_2);

#define VkglTestCase_039345_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039345_2 "out.array.int.rgba16i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039345, VkglTestCase_039345_1, VkglTestCase_039345_2);

#define VkglTestCase_039346_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039346_2 "out.array.int.rgba16i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039346, VkglTestCase_039346_1, VkglTestCase_039346_2);

#define VkglTestCase_039347_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039347_2 "out.array.int.rgba16i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039347, VkglTestCase_039347_1, VkglTestCase_039347_2);

#define VkglTestCase_039348_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039348_2 "ut.array.int.rgba16i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039348, VkglTestCase_039348_1, VkglTestCase_039348_2);

#define VkglTestCase_039349_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039349_2 "t.array.int.rgba16i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039349, VkglTestCase_039349_1, VkglTestCase_039349_2);

#define VkglTestCase_039350_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039350_2 "t.array.int.rgba16i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039350, VkglTestCase_039350_1, VkglTestCase_039350_2);

#define VkglTestCase_039351_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039351_2 "t.array.int.rgba16i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039351, VkglTestCase_039351_1, VkglTestCase_039351_2);

#define VkglTestCase_039352_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039352_2 "out.array.int.rgba16i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039352, VkglTestCase_039352_1, VkglTestCase_039352_2);

#define VkglTestCase_039353_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039353_2 "ut.array.int.rgba16i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039353, VkglTestCase_039353_1, VkglTestCase_039353_2);

#define VkglTestCase_039354_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039354_2 "ut.array.int.rgba16i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039354, VkglTestCase_039354_1, VkglTestCase_039354_2);

#define VkglTestCase_039355_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039355_2 "ut.array.int.rgba16i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039355, VkglTestCase_039355_1, VkglTestCase_039355_2);

#define VkglTestCase_039356_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039356_2 "_out.array.int.rgba8i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039356, VkglTestCase_039356_1, VkglTestCase_039356_2);

#define VkglTestCase_039357_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039357_2 "out.array.int.rgba8i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039357, VkglTestCase_039357_1, VkglTestCase_039357_2);

#define VkglTestCase_039358_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039358_2 "out.array.int.rgba8i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039358, VkglTestCase_039358_1, VkglTestCase_039358_2);

#define VkglTestCase_039359_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039359_2 "out.array.int.rgba8i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039359, VkglTestCase_039359_1, VkglTestCase_039359_2);

#define VkglTestCase_039360_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039360_2 "out.array.int.rgba8i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039360, VkglTestCase_039360_1, VkglTestCase_039360_2);

#define VkglTestCase_039361_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039361_2 "ut.array.int.rgba8i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039361, VkglTestCase_039361_1, VkglTestCase_039361_2);

#define VkglTestCase_039362_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039362_2 "ut.array.int.rgba8i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039362, VkglTestCase_039362_1, VkglTestCase_039362_2);

#define VkglTestCase_039363_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039363_2 "ut.array.int.rgba8i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039363, VkglTestCase_039363_1, VkglTestCase_039363_2);

#define VkglTestCase_039364_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039364_2 "_out.array.int.rgba8i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039364, VkglTestCase_039364_1, VkglTestCase_039364_2);

#define VkglTestCase_039365_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039365_2 "out.array.int.rgba8i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039365, VkglTestCase_039365_1, VkglTestCase_039365_2);

#define VkglTestCase_039366_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039366_2 "out.array.int.rgba8i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039366, VkglTestCase_039366_1, VkglTestCase_039366_2);

#define VkglTestCase_039367_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039367_2 "out.array.int.rgba8i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039367, VkglTestCase_039367_1, VkglTestCase_039367_2);

#define VkglTestCase_039368_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039368_2 "t_out.array.int.rg32i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039368, VkglTestCase_039368_1, VkglTestCase_039368_2);

#define VkglTestCase_039369_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039369_2 "_out.array.int.rg32i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039369, VkglTestCase_039369_1, VkglTestCase_039369_2);

#define VkglTestCase_039370_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039370_2 "_out.array.int.rg32i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039370, VkglTestCase_039370_1, VkglTestCase_039370_2);

#define VkglTestCase_039371_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039371_2 "_out.array.int.rg32i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039371, VkglTestCase_039371_1, VkglTestCase_039371_2);

#define VkglTestCase_039372_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039372_2 "out.array.int.rg32i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039372, VkglTestCase_039372_1, VkglTestCase_039372_2);

#define VkglTestCase_039373_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039373_2 "ut.array.int.rg32i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039373, VkglTestCase_039373_1, VkglTestCase_039373_2);

#define VkglTestCase_039374_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039374_2 "ut.array.int.rg32i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039374, VkglTestCase_039374_1, VkglTestCase_039374_2);

#define VkglTestCase_039375_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039375_2 "ut.array.int.rg32i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039375, VkglTestCase_039375_1, VkglTestCase_039375_2);

#define VkglTestCase_039376_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039376_2 "_out.array.int.rg32i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039376, VkglTestCase_039376_1, VkglTestCase_039376_2);

#define VkglTestCase_039377_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039377_2 "out.array.int.rg32i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039377, VkglTestCase_039377_1, VkglTestCase_039377_2);

#define VkglTestCase_039378_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039378_2 "out.array.int.rg32i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039378, VkglTestCase_039378_1, VkglTestCase_039378_2);

#define VkglTestCase_039379_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039379_2 "out.array.int.rg32i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039379, VkglTestCase_039379_1, VkglTestCase_039379_2);

#define VkglTestCase_039380_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039380_2 "t_out.array.int.rg16i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039380, VkglTestCase_039380_1, VkglTestCase_039380_2);

#define VkglTestCase_039381_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039381_2 "_out.array.int.rg16i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039381, VkglTestCase_039381_1, VkglTestCase_039381_2);

#define VkglTestCase_039382_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039382_2 "_out.array.int.rg16i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039382, VkglTestCase_039382_1, VkglTestCase_039382_2);

#define VkglTestCase_039383_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039383_2 "_out.array.int.rg16i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039383, VkglTestCase_039383_1, VkglTestCase_039383_2);

#define VkglTestCase_039384_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039384_2 "out.array.int.rg16i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039384, VkglTestCase_039384_1, VkglTestCase_039384_2);

#define VkglTestCase_039385_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039385_2 "ut.array.int.rg16i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039385, VkglTestCase_039385_1, VkglTestCase_039385_2);

#define VkglTestCase_039386_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039386_2 "ut.array.int.rg16i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039386, VkglTestCase_039386_1, VkglTestCase_039386_2);

#define VkglTestCase_039387_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039387_2 "ut.array.int.rg16i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039387, VkglTestCase_039387_1, VkglTestCase_039387_2);

#define VkglTestCase_039388_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039388_2 "_out.array.int.rg16i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039388, VkglTestCase_039388_1, VkglTestCase_039388_2);

#define VkglTestCase_039389_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039389_2 "out.array.int.rg16i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039389, VkglTestCase_039389_1, VkglTestCase_039389_2);

#define VkglTestCase_039390_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039390_2 "out.array.int.rg16i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039390, VkglTestCase_039390_1, VkglTestCase_039390_2);

#define VkglTestCase_039391_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039391_2 "out.array.int.rg16i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039391, VkglTestCase_039391_1, VkglTestCase_039391_2);

#define VkglTestCase_039392_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039392_2 "t_out.array.int.rg8i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039392, VkglTestCase_039392_1, VkglTestCase_039392_2);

#define VkglTestCase_039393_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039393_2 "_out.array.int.rg8i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039393, VkglTestCase_039393_1, VkglTestCase_039393_2);

#define VkglTestCase_039394_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039394_2 "_out.array.int.rg8i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039394, VkglTestCase_039394_1, VkglTestCase_039394_2);

#define VkglTestCase_039395_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039395_2 "_out.array.int.rg8i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039395, VkglTestCase_039395_1, VkglTestCase_039395_2);

#define VkglTestCase_039396_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039396_2 "_out.array.int.rg8i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039396, VkglTestCase_039396_1, VkglTestCase_039396_2);

#define VkglTestCase_039397_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039397_2 "out.array.int.rg8i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039397, VkglTestCase_039397_1, VkglTestCase_039397_2);

#define VkglTestCase_039398_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039398_2 "out.array.int.rg8i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039398, VkglTestCase_039398_1, VkglTestCase_039398_2);

#define VkglTestCase_039399_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039399_2 "out.array.int.rg8i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039399, VkglTestCase_039399_1, VkglTestCase_039399_2);

#define VkglTestCase_039400_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039400_2 "t_out.array.int.rg8i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039400, VkglTestCase_039400_1, VkglTestCase_039400_2);

#define VkglTestCase_039401_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039401_2 "_out.array.int.rg8i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039401, VkglTestCase_039401_1, VkglTestCase_039401_2);

#define VkglTestCase_039402_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039402_2 "_out.array.int.rg8i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039402, VkglTestCase_039402_1, VkglTestCase_039402_2);

#define VkglTestCase_039403_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039403_2 "_out.array.int.rg8i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039403, VkglTestCase_039403_1, VkglTestCase_039403_2);

#define VkglTestCase_039404_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039404_2 "t_out.array.int.r32i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039404, VkglTestCase_039404_1, VkglTestCase_039404_2);

#define VkglTestCase_039405_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039405_2 "_out.array.int.r32i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039405, VkglTestCase_039405_1, VkglTestCase_039405_2);

#define VkglTestCase_039406_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039406_2 "_out.array.int.r32i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039406, VkglTestCase_039406_1, VkglTestCase_039406_2);

#define VkglTestCase_039407_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039407_2 "_out.array.int.r32i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039407, VkglTestCase_039407_1, VkglTestCase_039407_2);

#define VkglTestCase_039408_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039408_2 "_out.array.int.r32i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039408, VkglTestCase_039408_1, VkglTestCase_039408_2);

#define VkglTestCase_039409_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039409_2 "out.array.int.r32i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039409, VkglTestCase_039409_1, VkglTestCase_039409_2);

#define VkglTestCase_039410_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039410_2 "out.array.int.r32i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039410, VkglTestCase_039410_1, VkglTestCase_039410_2);

#define VkglTestCase_039411_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039411_2 "out.array.int.r32i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039411, VkglTestCase_039411_1, VkglTestCase_039411_2);

#define VkglTestCase_039412_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039412_2 "t_out.array.int.r32i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039412, VkglTestCase_039412_1, VkglTestCase_039412_2);

#define VkglTestCase_039413_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039413_2 "_out.array.int.r32i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039413, VkglTestCase_039413_1, VkglTestCase_039413_2);

#define VkglTestCase_039414_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039414_2 "_out.array.int.r32i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039414, VkglTestCase_039414_1, VkglTestCase_039414_2);

#define VkglTestCase_039415_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039415_2 "_out.array.int.r32i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039415, VkglTestCase_039415_1, VkglTestCase_039415_2);

#define VkglTestCase_039416_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039416_2 "t_out.array.int.r16i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039416, VkglTestCase_039416_1, VkglTestCase_039416_2);

#define VkglTestCase_039417_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039417_2 "_out.array.int.r16i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039417, VkglTestCase_039417_1, VkglTestCase_039417_2);

#define VkglTestCase_039418_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039418_2 "_out.array.int.r16i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039418, VkglTestCase_039418_1, VkglTestCase_039418_2);

#define VkglTestCase_039419_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039419_2 "_out.array.int.r16i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039419, VkglTestCase_039419_1, VkglTestCase_039419_2);

#define VkglTestCase_039420_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039420_2 "_out.array.int.r16i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039420, VkglTestCase_039420_1, VkglTestCase_039420_2);

#define VkglTestCase_039421_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039421_2 "out.array.int.r16i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039421, VkglTestCase_039421_1, VkglTestCase_039421_2);

#define VkglTestCase_039422_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039422_2 "out.array.int.r16i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039422, VkglTestCase_039422_1, VkglTestCase_039422_2);

#define VkglTestCase_039423_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039423_2 "out.array.int.r16i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039423, VkglTestCase_039423_1, VkglTestCase_039423_2);

#define VkglTestCase_039424_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039424_2 "t_out.array.int.r16i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039424, VkglTestCase_039424_1, VkglTestCase_039424_2);

#define VkglTestCase_039425_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039425_2 "_out.array.int.r16i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039425, VkglTestCase_039425_1, VkglTestCase_039425_2);

#define VkglTestCase_039426_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039426_2 "_out.array.int.r16i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039426, VkglTestCase_039426_1, VkglTestCase_039426_2);

#define VkglTestCase_039427_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039427_2 "_out.array.int.r16i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039427, VkglTestCase_039427_1, VkglTestCase_039427_2);

#define VkglTestCase_039428_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_039428_2 "nt_out.array.int.r8i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039428, VkglTestCase_039428_1, VkglTestCase_039428_2);

#define VkglTestCase_039429_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039429_2 "t_out.array.int.r8i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039429, VkglTestCase_039429_1, VkglTestCase_039429_2);

#define VkglTestCase_039430_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039430_2 "t_out.array.int.r8i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039430, VkglTestCase_039430_1, VkglTestCase_039430_2);

#define VkglTestCase_039431_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039431_2 "t_out.array.int.r8i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039431, VkglTestCase_039431_1, VkglTestCase_039431_2);

#define VkglTestCase_039432_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039432_2 "_out.array.int.r8i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039432, VkglTestCase_039432_1, VkglTestCase_039432_2);

#define VkglTestCase_039433_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039433_2 "out.array.int.r8i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039433, VkglTestCase_039433_1, VkglTestCase_039433_2);

#define VkglTestCase_039434_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039434_2 "out.array.int.r8i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039434, VkglTestCase_039434_1, VkglTestCase_039434_2);

#define VkglTestCase_039435_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039435_2 "out.array.int.r8i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039435, VkglTestCase_039435_1, VkglTestCase_039435_2);

#define VkglTestCase_039436_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039436_2 "t_out.array.int.r8i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039436, VkglTestCase_039436_1, VkglTestCase_039436_2);

#define VkglTestCase_039437_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039437_2 "_out.array.int.r8i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039437, VkglTestCase_039437_1, VkglTestCase_039437_2);

#define VkglTestCase_039438_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039438_2 "_out.array.int.r8i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039438, VkglTestCase_039438_1, VkglTestCase_039438_2);

#define VkglTestCase_039439_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039439_2 "_out.array.int.r8i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039439, VkglTestCase_039439_1, VkglTestCase_039439_2);
