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

#define VkglTestCase_039440_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039440_2 "ut.array.uint.rgba32ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039440, VkglTestCase_039440_1, VkglTestCase_039440_2);

#define VkglTestCase_039441_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039441_2 "ut.array.uint.rgba32ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039441, VkglTestCase_039441_1, VkglTestCase_039441_2);

#define VkglTestCase_039442_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039442_2 "ut.array.uint.rgba32ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039442, VkglTestCase_039442_1, VkglTestCase_039442_2);

#define VkglTestCase_039443_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039443_2 "ut.array.uint.rgba32ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039443, VkglTestCase_039443_1, VkglTestCase_039443_2);

#define VkglTestCase_039444_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039444_2 "t.array.uint.rgba32ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039444, VkglTestCase_039444_1, VkglTestCase_039444_2);

#define VkglTestCase_039445_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039445_2 ".array.uint.rgba32ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039445, VkglTestCase_039445_1, VkglTestCase_039445_2);

#define VkglTestCase_039446_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039446_2 ".array.uint.rgba32ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039446, VkglTestCase_039446_1, VkglTestCase_039446_2);

#define VkglTestCase_039447_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039447_2 ".array.uint.rgba32ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039447, VkglTestCase_039447_1, VkglTestCase_039447_2);

#define VkglTestCase_039448_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039448_2 "ut.array.uint.rgba32ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039448, VkglTestCase_039448_1, VkglTestCase_039448_2);

#define VkglTestCase_039449_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039449_2 "t.array.uint.rgba32ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039449, VkglTestCase_039449_1, VkglTestCase_039449_2);

#define VkglTestCase_039450_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039450_2 "t.array.uint.rgba32ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039450, VkglTestCase_039450_1, VkglTestCase_039450_2);

#define VkglTestCase_039451_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039451_2 "t.array.uint.rgba32ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039451, VkglTestCase_039451_1, VkglTestCase_039451_2);

#define VkglTestCase_039452_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039452_2 "ut.array.uint.rgba16ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039452, VkglTestCase_039452_1, VkglTestCase_039452_2);

#define VkglTestCase_039453_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039453_2 "ut.array.uint.rgba16ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039453, VkglTestCase_039453_1, VkglTestCase_039453_2);

#define VkglTestCase_039454_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039454_2 "ut.array.uint.rgba16ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039454, VkglTestCase_039454_1, VkglTestCase_039454_2);

#define VkglTestCase_039455_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039455_2 "ut.array.uint.rgba16ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039455, VkglTestCase_039455_1, VkglTestCase_039455_2);

#define VkglTestCase_039456_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039456_2 "t.array.uint.rgba16ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039456, VkglTestCase_039456_1, VkglTestCase_039456_2);

#define VkglTestCase_039457_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039457_2 ".array.uint.rgba16ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039457, VkglTestCase_039457_1, VkglTestCase_039457_2);

#define VkglTestCase_039458_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039458_2 ".array.uint.rgba16ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039458, VkglTestCase_039458_1, VkglTestCase_039458_2);

#define VkglTestCase_039459_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039459_2 ".array.uint.rgba16ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039459, VkglTestCase_039459_1, VkglTestCase_039459_2);

#define VkglTestCase_039460_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039460_2 "ut.array.uint.rgba16ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039460, VkglTestCase_039460_1, VkglTestCase_039460_2);

#define VkglTestCase_039461_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039461_2 "t.array.uint.rgba16ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039461, VkglTestCase_039461_1, VkglTestCase_039461_2);

#define VkglTestCase_039462_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039462_2 "t.array.uint.rgba16ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039462, VkglTestCase_039462_1, VkglTestCase_039462_2);

#define VkglTestCase_039463_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039463_2 "t.array.uint.rgba16ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039463, VkglTestCase_039463_1, VkglTestCase_039463_2);

#define VkglTestCase_039464_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039464_2 "out.array.uint.rgba8ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039464, VkglTestCase_039464_1, VkglTestCase_039464_2);

#define VkglTestCase_039465_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039465_2 "ut.array.uint.rgba8ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039465, VkglTestCase_039465_1, VkglTestCase_039465_2);

#define VkglTestCase_039466_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039466_2 "ut.array.uint.rgba8ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039466, VkglTestCase_039466_1, VkglTestCase_039466_2);

#define VkglTestCase_039467_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039467_2 "ut.array.uint.rgba8ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039467, VkglTestCase_039467_1, VkglTestCase_039467_2);

#define VkglTestCase_039468_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039468_2 "t.array.uint.rgba8ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039468, VkglTestCase_039468_1, VkglTestCase_039468_2);

#define VkglTestCase_039469_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039469_2 "t.array.uint.rgba8ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039469, VkglTestCase_039469_1, VkglTestCase_039469_2);

#define VkglTestCase_039470_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039470_2 "t.array.uint.rgba8ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039470, VkglTestCase_039470_1, VkglTestCase_039470_2);

#define VkglTestCase_039471_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039471_2 "t.array.uint.rgba8ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039471, VkglTestCase_039471_1, VkglTestCase_039471_2);

#define VkglTestCase_039472_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039472_2 "ut.array.uint.rgba8ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039472, VkglTestCase_039472_1, VkglTestCase_039472_2);

#define VkglTestCase_039473_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039473_2 "ut.array.uint.rgba8ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039473, VkglTestCase_039473_1, VkglTestCase_039473_2);

#define VkglTestCase_039474_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039474_2 "ut.array.uint.rgba8ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039474, VkglTestCase_039474_1, VkglTestCase_039474_2);

#define VkglTestCase_039475_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039475_2 "ut.array.uint.rgba8ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039475, VkglTestCase_039475_1, VkglTestCase_039475_2);

#define VkglTestCase_039476_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039476_2 "t.array.uint.rgb10_a2ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039476, VkglTestCase_039476_1, VkglTestCase_039476_2);

#define VkglTestCase_039477_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039477_2 "t.array.uint.rgb10_a2ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039477, VkglTestCase_039477_1, VkglTestCase_039477_2);

#define VkglTestCase_039478_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039478_2 "t.array.uint.rgb10_a2ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039478, VkglTestCase_039478_1, VkglTestCase_039478_2);

#define VkglTestCase_039479_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039479_2 "t.array.uint.rgb10_a2ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039479, VkglTestCase_039479_1, VkglTestCase_039479_2);

#define VkglTestCase_039480_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039480_2 ".array.uint.rgb10_a2ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039480, VkglTestCase_039480_1, VkglTestCase_039480_2);

#define VkglTestCase_039481_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039481_2 "array.uint.rgb10_a2ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039481, VkglTestCase_039481_1, VkglTestCase_039481_2);

#define VkglTestCase_039482_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039482_2 "array.uint.rgb10_a2ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039482, VkglTestCase_039482_1, VkglTestCase_039482_2);

#define VkglTestCase_039483_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039483_2 "array.uint.rgb10_a2ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039483, VkglTestCase_039483_1, VkglTestCase_039483_2);

#define VkglTestCase_039484_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039484_2 "t.array.uint.rgb10_a2ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039484, VkglTestCase_039484_1, VkglTestCase_039484_2);

#define VkglTestCase_039485_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039485_2 ".array.uint.rgb10_a2ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039485, VkglTestCase_039485_1, VkglTestCase_039485_2);

#define VkglTestCase_039486_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039486_2 ".array.uint.rgb10_a2ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039486, VkglTestCase_039486_1, VkglTestCase_039486_2);

#define VkglTestCase_039487_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039487_2 ".array.uint.rgb10_a2ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039487, VkglTestCase_039487_1, VkglTestCase_039487_2);

#define VkglTestCase_039488_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039488_2 "out.array.uint.rg32ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039488, VkglTestCase_039488_1, VkglTestCase_039488_2);

#define VkglTestCase_039489_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039489_2 "out.array.uint.rg32ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039489, VkglTestCase_039489_1, VkglTestCase_039489_2);

#define VkglTestCase_039490_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039490_2 "out.array.uint.rg32ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039490, VkglTestCase_039490_1, VkglTestCase_039490_2);

#define VkglTestCase_039491_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039491_2 "out.array.uint.rg32ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039491, VkglTestCase_039491_1, VkglTestCase_039491_2);

#define VkglTestCase_039492_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039492_2 "ut.array.uint.rg32ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039492, VkglTestCase_039492_1, VkglTestCase_039492_2);

#define VkglTestCase_039493_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039493_2 "t.array.uint.rg32ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039493, VkglTestCase_039493_1, VkglTestCase_039493_2);

#define VkglTestCase_039494_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039494_2 "t.array.uint.rg32ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039494, VkglTestCase_039494_1, VkglTestCase_039494_2);

#define VkglTestCase_039495_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039495_2 "t.array.uint.rg32ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039495, VkglTestCase_039495_1, VkglTestCase_039495_2);

#define VkglTestCase_039496_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039496_2 "out.array.uint.rg32ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039496, VkglTestCase_039496_1, VkglTestCase_039496_2);

#define VkglTestCase_039497_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039497_2 "ut.array.uint.rg32ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039497, VkglTestCase_039497_1, VkglTestCase_039497_2);

#define VkglTestCase_039498_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039498_2 "ut.array.uint.rg32ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039498, VkglTestCase_039498_1, VkglTestCase_039498_2);

#define VkglTestCase_039499_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039499_2 "ut.array.uint.rg32ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039499, VkglTestCase_039499_1, VkglTestCase_039499_2);

#define VkglTestCase_039500_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039500_2 "out.array.uint.rg16ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039500, VkglTestCase_039500_1, VkglTestCase_039500_2);

#define VkglTestCase_039501_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039501_2 "out.array.uint.rg16ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039501, VkglTestCase_039501_1, VkglTestCase_039501_2);

#define VkglTestCase_039502_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039502_2 "out.array.uint.rg16ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039502, VkglTestCase_039502_1, VkglTestCase_039502_2);

#define VkglTestCase_039503_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039503_2 "out.array.uint.rg16ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039503, VkglTestCase_039503_1, VkglTestCase_039503_2);

#define VkglTestCase_039504_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039504_2 "ut.array.uint.rg16ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039504, VkglTestCase_039504_1, VkglTestCase_039504_2);

#define VkglTestCase_039505_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039505_2 "t.array.uint.rg16ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039505, VkglTestCase_039505_1, VkglTestCase_039505_2);

#define VkglTestCase_039506_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039506_2 "t.array.uint.rg16ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039506, VkglTestCase_039506_1, VkglTestCase_039506_2);

#define VkglTestCase_039507_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039507_2 "t.array.uint.rg16ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039507, VkglTestCase_039507_1, VkglTestCase_039507_2);

#define VkglTestCase_039508_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039508_2 "out.array.uint.rg16ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039508, VkglTestCase_039508_1, VkglTestCase_039508_2);

#define VkglTestCase_039509_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039509_2 "ut.array.uint.rg16ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039509, VkglTestCase_039509_1, VkglTestCase_039509_2);

#define VkglTestCase_039510_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039510_2 "ut.array.uint.rg16ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039510, VkglTestCase_039510_1, VkglTestCase_039510_2);

#define VkglTestCase_039511_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039511_2 "ut.array.uint.rg16ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039511, VkglTestCase_039511_1, VkglTestCase_039511_2);

#define VkglTestCase_039512_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039512_2 "_out.array.uint.rg8ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039512, VkglTestCase_039512_1, VkglTestCase_039512_2);

#define VkglTestCase_039513_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039513_2 "out.array.uint.rg8ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039513, VkglTestCase_039513_1, VkglTestCase_039513_2);

#define VkglTestCase_039514_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039514_2 "out.array.uint.rg8ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039514, VkglTestCase_039514_1, VkglTestCase_039514_2);

#define VkglTestCase_039515_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039515_2 "out.array.uint.rg8ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039515, VkglTestCase_039515_1, VkglTestCase_039515_2);

#define VkglTestCase_039516_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039516_2 "ut.array.uint.rg8ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039516, VkglTestCase_039516_1, VkglTestCase_039516_2);

#define VkglTestCase_039517_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039517_2 "ut.array.uint.rg8ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039517, VkglTestCase_039517_1, VkglTestCase_039517_2);

#define VkglTestCase_039518_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039518_2 "ut.array.uint.rg8ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039518, VkglTestCase_039518_1, VkglTestCase_039518_2);

#define VkglTestCase_039519_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039519_2 "ut.array.uint.rg8ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039519, VkglTestCase_039519_1, VkglTestCase_039519_2);

#define VkglTestCase_039520_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039520_2 "out.array.uint.rg8ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039520, VkglTestCase_039520_1, VkglTestCase_039520_2);

#define VkglTestCase_039521_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039521_2 "out.array.uint.rg8ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039521, VkglTestCase_039521_1, VkglTestCase_039521_2);

#define VkglTestCase_039522_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039522_2 "out.array.uint.rg8ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039522, VkglTestCase_039522_1, VkglTestCase_039522_2);

#define VkglTestCase_039523_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039523_2 "out.array.uint.rg8ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039523, VkglTestCase_039523_1, VkglTestCase_039523_2);

#define VkglTestCase_039524_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039524_2 "_out.array.uint.r32ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039524, VkglTestCase_039524_1, VkglTestCase_039524_2);

#define VkglTestCase_039525_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039525_2 "out.array.uint.r32ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039525, VkglTestCase_039525_1, VkglTestCase_039525_2);

#define VkglTestCase_039526_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039526_2 "out.array.uint.r32ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039526, VkglTestCase_039526_1, VkglTestCase_039526_2);

#define VkglTestCase_039527_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039527_2 "out.array.uint.r32ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039527, VkglTestCase_039527_1, VkglTestCase_039527_2);

#define VkglTestCase_039528_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039528_2 "ut.array.uint.r32ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039528, VkglTestCase_039528_1, VkglTestCase_039528_2);

#define VkglTestCase_039529_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039529_2 "ut.array.uint.r32ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039529, VkglTestCase_039529_1, VkglTestCase_039529_2);

#define VkglTestCase_039530_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039530_2 "ut.array.uint.r32ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039530, VkglTestCase_039530_1, VkglTestCase_039530_2);

#define VkglTestCase_039531_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039531_2 "ut.array.uint.r32ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039531, VkglTestCase_039531_1, VkglTestCase_039531_2);

#define VkglTestCase_039532_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039532_2 "out.array.uint.r32ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039532, VkglTestCase_039532_1, VkglTestCase_039532_2);

#define VkglTestCase_039533_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039533_2 "out.array.uint.r32ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039533, VkglTestCase_039533_1, VkglTestCase_039533_2);

#define VkglTestCase_039534_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039534_2 "out.array.uint.r32ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039534, VkglTestCase_039534_1, VkglTestCase_039534_2);

#define VkglTestCase_039535_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039535_2 "out.array.uint.r32ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039535, VkglTestCase_039535_1, VkglTestCase_039535_2);

#define VkglTestCase_039536_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039536_2 "_out.array.uint.r16ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039536, VkglTestCase_039536_1, VkglTestCase_039536_2);

#define VkglTestCase_039537_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039537_2 "out.array.uint.r16ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039537, VkglTestCase_039537_1, VkglTestCase_039537_2);

#define VkglTestCase_039538_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039538_2 "out.array.uint.r16ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039538, VkglTestCase_039538_1, VkglTestCase_039538_2);

#define VkglTestCase_039539_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039539_2 "out.array.uint.r16ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039539, VkglTestCase_039539_1, VkglTestCase_039539_2);

#define VkglTestCase_039540_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039540_2 "ut.array.uint.r16ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039540, VkglTestCase_039540_1, VkglTestCase_039540_2);

#define VkglTestCase_039541_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039541_2 "ut.array.uint.r16ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039541, VkglTestCase_039541_1, VkglTestCase_039541_2);

#define VkglTestCase_039542_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039542_2 "ut.array.uint.r16ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039542, VkglTestCase_039542_1, VkglTestCase_039542_2);

#define VkglTestCase_039543_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039543_2 "ut.array.uint.r16ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039543, VkglTestCase_039543_1, VkglTestCase_039543_2);

#define VkglTestCase_039544_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039544_2 "out.array.uint.r16ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039544, VkglTestCase_039544_1, VkglTestCase_039544_2);

#define VkglTestCase_039545_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039545_2 "out.array.uint.r16ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039545, VkglTestCase_039545_1, VkglTestCase_039545_2);

#define VkglTestCase_039546_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039546_2 "out.array.uint.r16ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039546, VkglTestCase_039546_1, VkglTestCase_039546_2);

#define VkglTestCase_039547_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039547_2 "out.array.uint.r16ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039547, VkglTestCase_039547_1, VkglTestCase_039547_2);

#define VkglTestCase_039548_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039548_2 "_out.array.uint.r8ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039548, VkglTestCase_039548_1, VkglTestCase_039548_2);

#define VkglTestCase_039549_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039549_2 "_out.array.uint.r8ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039549, VkglTestCase_039549_1, VkglTestCase_039549_2);

#define VkglTestCase_039550_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039550_2 "_out.array.uint.r8ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039550, VkglTestCase_039550_1, VkglTestCase_039550_2);

#define VkglTestCase_039551_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039551_2 "_out.array.uint.r8ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039551, VkglTestCase_039551_1, VkglTestCase_039551_2);

#define VkglTestCase_039552_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039552_2 "out.array.uint.r8ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039552, VkglTestCase_039552_1, VkglTestCase_039552_2);

#define VkglTestCase_039553_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039553_2 "ut.array.uint.r8ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039553, VkglTestCase_039553_1, VkglTestCase_039553_2);

#define VkglTestCase_039554_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039554_2 "ut.array.uint.r8ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039554, VkglTestCase_039554_1, VkglTestCase_039554_2);

#define VkglTestCase_039555_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039555_2 "ut.array.uint.r8ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039555, VkglTestCase_039555_1, VkglTestCase_039555_2);

#define VkglTestCase_039556_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039556_2 "_out.array.uint.r8ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039556, VkglTestCase_039556_1, VkglTestCase_039556_2);

#define VkglTestCase_039557_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039557_2 "out.array.uint.r8ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039557, VkglTestCase_039557_1, VkglTestCase_039557_2);

#define VkglTestCase_039558_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039558_2 "out.array.uint.r8ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039558, VkglTestCase_039558_1, VkglTestCase_039558_2);

#define VkglTestCase_039559_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039559_2 "out.array.uint.r8ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039559, VkglTestCase_039559_1, VkglTestCase_039559_2);
