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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001476_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001476_2 "ingle_basic_type.shared.lowp_float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001476, VkglTestCase_001476_1, VkglTestCase_001476_2);

#define VkglTestCase_001477_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001477_2 "gle_basic_type.shared.mediump_float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001477, VkglTestCase_001477_1, VkglTestCase_001477_2);

#define VkglTestCase_001478_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001478_2 "ngle_basic_type.shared.highp_float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001478, VkglTestCase_001478_1, VkglTestCase_001478_2);

#define VkglTestCase_001479_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001479_2 "ingle_basic_type.shared.lowp_vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001479, VkglTestCase_001479_1, VkglTestCase_001479_2);

#define VkglTestCase_001480_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001480_2 "ngle_basic_type.shared.mediump_vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001480, VkglTestCase_001480_1, VkglTestCase_001480_2);

#define VkglTestCase_001481_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001481_2 "ingle_basic_type.shared.highp_vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001481, VkglTestCase_001481_1, VkglTestCase_001481_2);

#define VkglTestCase_001482_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001482_2 "ingle_basic_type.shared.lowp_vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001482, VkglTestCase_001482_1, VkglTestCase_001482_2);

#define VkglTestCase_001483_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001483_2 "ngle_basic_type.shared.mediump_vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001483, VkglTestCase_001483_1, VkglTestCase_001483_2);

#define VkglTestCase_001484_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001484_2 "ingle_basic_type.shared.highp_vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001484, VkglTestCase_001484_1, VkglTestCase_001484_2);

#define VkglTestCase_001485_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001485_2 "ingle_basic_type.shared.lowp_vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001485, VkglTestCase_001485_1, VkglTestCase_001485_2);

#define VkglTestCase_001486_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001486_2 "ngle_basic_type.shared.mediump_vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001486, VkglTestCase_001486_1, VkglTestCase_001486_2);

#define VkglTestCase_001487_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001487_2 "ingle_basic_type.shared.highp_vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001487, VkglTestCase_001487_1, VkglTestCase_001487_2);

#define VkglTestCase_001488_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001488_2 "single_basic_type.shared.lowp_int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001488, VkglTestCase_001488_1, VkglTestCase_001488_2);

#define VkglTestCase_001489_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001489_2 "ngle_basic_type.shared.mediump_int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001489, VkglTestCase_001489_1, VkglTestCase_001489_2);

#define VkglTestCase_001490_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001490_2 "ingle_basic_type.shared.highp_int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001490, VkglTestCase_001490_1, VkglTestCase_001490_2);

#define VkglTestCase_001491_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001491_2 "ingle_basic_type.shared.lowp_ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001491, VkglTestCase_001491_1, VkglTestCase_001491_2);

#define VkglTestCase_001492_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001492_2 "gle_basic_type.shared.mediump_ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001492, VkglTestCase_001492_1, VkglTestCase_001492_2);

#define VkglTestCase_001493_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001493_2 "ngle_basic_type.shared.highp_ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001493, VkglTestCase_001493_1, VkglTestCase_001493_2);

#define VkglTestCase_001494_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001494_2 "ingle_basic_type.shared.lowp_ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001494, VkglTestCase_001494_1, VkglTestCase_001494_2);

#define VkglTestCase_001495_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001495_2 "gle_basic_type.shared.mediump_ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001495, VkglTestCase_001495_1, VkglTestCase_001495_2);

#define VkglTestCase_001496_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001496_2 "ngle_basic_type.shared.highp_ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001496, VkglTestCase_001496_1, VkglTestCase_001496_2);

#define VkglTestCase_001497_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001497_2 "ingle_basic_type.shared.lowp_ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001497, VkglTestCase_001497_1, VkglTestCase_001497_2);

#define VkglTestCase_001498_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001498_2 "gle_basic_type.shared.mediump_ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001498, VkglTestCase_001498_1, VkglTestCase_001498_2);

#define VkglTestCase_001499_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001499_2 "ngle_basic_type.shared.highp_ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001499, VkglTestCase_001499_1, VkglTestCase_001499_2);

#define VkglTestCase_001500_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001500_2 "ingle_basic_type.shared.lowp_uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001500, VkglTestCase_001500_1, VkglTestCase_001500_2);

#define VkglTestCase_001501_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001501_2 "ngle_basic_type.shared.mediump_uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001501, VkglTestCase_001501_1, VkglTestCase_001501_2);

#define VkglTestCase_001502_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001502_2 "ingle_basic_type.shared.highp_uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001502, VkglTestCase_001502_1, VkglTestCase_001502_2);

#define VkglTestCase_001503_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001503_2 "ingle_basic_type.shared.lowp_uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001503, VkglTestCase_001503_1, VkglTestCase_001503_2);

#define VkglTestCase_001504_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001504_2 "gle_basic_type.shared.mediump_uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001504, VkglTestCase_001504_1, VkglTestCase_001504_2);

#define VkglTestCase_001505_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001505_2 "ngle_basic_type.shared.highp_uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001505, VkglTestCase_001505_1, VkglTestCase_001505_2);

#define VkglTestCase_001506_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001506_2 "ingle_basic_type.shared.lowp_uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001506, VkglTestCase_001506_1, VkglTestCase_001506_2);

#define VkglTestCase_001507_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001507_2 "gle_basic_type.shared.mediump_uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001507, VkglTestCase_001507_1, VkglTestCase_001507_2);

#define VkglTestCase_001508_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001508_2 "ngle_basic_type.shared.highp_uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001508, VkglTestCase_001508_1, VkglTestCase_001508_2);

#define VkglTestCase_001509_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001509_2 "ingle_basic_type.shared.lowp_uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001509, VkglTestCase_001509_1, VkglTestCase_001509_2);

#define VkglTestCase_001510_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001510_2 "gle_basic_type.shared.mediump_uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001510, VkglTestCase_001510_1, VkglTestCase_001510_2);

#define VkglTestCase_001511_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001511_2 "ngle_basic_type.shared.highp_uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001511, VkglTestCase_001511_1, VkglTestCase_001511_2);

#define VkglTestCase_001512_1 "KHR-GLES3.shaders.uniform_bloc"
#define VkglTestCase_001512_2 "k.single_basic_type.shared.bool"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001512, VkglTestCase_001512_1, VkglTestCase_001512_2);

#define VkglTestCase_001513_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001513_2 ".single_basic_type.shared.bvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001513, VkglTestCase_001513_1, VkglTestCase_001513_2);

#define VkglTestCase_001514_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001514_2 ".single_basic_type.shared.bvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001514, VkglTestCase_001514_1, VkglTestCase_001514_2);

#define VkglTestCase_001515_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001515_2 ".single_basic_type.shared.bvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001515, VkglTestCase_001515_1, VkglTestCase_001515_2);

#define VkglTestCase_001516_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001516_2 "ingle_basic_type.shared.lowp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001516, VkglTestCase_001516_1, VkglTestCase_001516_2);

#define VkglTestCase_001517_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001517_2 "ngle_basic_type.shared.mediump_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001517, VkglTestCase_001517_1, VkglTestCase_001517_2);

#define VkglTestCase_001518_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001518_2 "ingle_basic_type.shared.highp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001518, VkglTestCase_001518_1, VkglTestCase_001518_2);

#define VkglTestCase_001519_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001519_2 "_basic_type.shared.row_major_lowp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001519, VkglTestCase_001519_1, VkglTestCase_001519_2);

#define VkglTestCase_001520_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001520_2 "basic_type.shared.row_major_mediump_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001520, VkglTestCase_001520_1, VkglTestCase_001520_2);

#define VkglTestCase_001521_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001521_2 "_basic_type.shared.row_major_highp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001521, VkglTestCase_001521_1, VkglTestCase_001521_2);

#define VkglTestCase_001522_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001522_2 "basic_type.shared.column_major_lowp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001522, VkglTestCase_001522_1, VkglTestCase_001522_2);

#define VkglTestCase_001523_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001523_2 "sic_type.shared.column_major_mediump_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001523, VkglTestCase_001523_1, VkglTestCase_001523_2);

#define VkglTestCase_001524_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001524_2 "asic_type.shared.column_major_highp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001524, VkglTestCase_001524_1, VkglTestCase_001524_2);

#define VkglTestCase_001525_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001525_2 "ingle_basic_type.shared.lowp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001525, VkglTestCase_001525_1, VkglTestCase_001525_2);

#define VkglTestCase_001526_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001526_2 "ngle_basic_type.shared.mediump_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001526, VkglTestCase_001526_1, VkglTestCase_001526_2);

#define VkglTestCase_001527_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001527_2 "ingle_basic_type.shared.highp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001527, VkglTestCase_001527_1, VkglTestCase_001527_2);

#define VkglTestCase_001528_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001528_2 "_basic_type.shared.row_major_lowp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001528, VkglTestCase_001528_1, VkglTestCase_001528_2);

#define VkglTestCase_001529_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001529_2 "basic_type.shared.row_major_mediump_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001529, VkglTestCase_001529_1, VkglTestCase_001529_2);

#define VkglTestCase_001530_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001530_2 "_basic_type.shared.row_major_highp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001530, VkglTestCase_001530_1, VkglTestCase_001530_2);

#define VkglTestCase_001531_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001531_2 "basic_type.shared.column_major_lowp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001531, VkglTestCase_001531_1, VkglTestCase_001531_2);

#define VkglTestCase_001532_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001532_2 "sic_type.shared.column_major_mediump_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001532, VkglTestCase_001532_1, VkglTestCase_001532_2);

#define VkglTestCase_001533_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001533_2 "asic_type.shared.column_major_highp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001533, VkglTestCase_001533_1, VkglTestCase_001533_2);

#define VkglTestCase_001534_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001534_2 "ingle_basic_type.shared.lowp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001534, VkglTestCase_001534_1, VkglTestCase_001534_2);

#define VkglTestCase_001535_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001535_2 "ngle_basic_type.shared.mediump_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001535, VkglTestCase_001535_1, VkglTestCase_001535_2);

#define VkglTestCase_001536_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001536_2 "ingle_basic_type.shared.highp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001536, VkglTestCase_001536_1, VkglTestCase_001536_2);

#define VkglTestCase_001537_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001537_2 "_basic_type.shared.row_major_lowp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001537, VkglTestCase_001537_1, VkglTestCase_001537_2);

#define VkglTestCase_001538_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001538_2 "basic_type.shared.row_major_mediump_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001538, VkglTestCase_001538_1, VkglTestCase_001538_2);

#define VkglTestCase_001539_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001539_2 "_basic_type.shared.row_major_highp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001539, VkglTestCase_001539_1, VkglTestCase_001539_2);

#define VkglTestCase_001540_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001540_2 "basic_type.shared.column_major_lowp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001540, VkglTestCase_001540_1, VkglTestCase_001540_2);

#define VkglTestCase_001541_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001541_2 "sic_type.shared.column_major_mediump_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001541, VkglTestCase_001541_1, VkglTestCase_001541_2);

#define VkglTestCase_001542_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001542_2 "asic_type.shared.column_major_highp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001542, VkglTestCase_001542_1, VkglTestCase_001542_2);

#define VkglTestCase_001543_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001543_2 "ngle_basic_type.shared.lowp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001543, VkglTestCase_001543_1, VkglTestCase_001543_2);

#define VkglTestCase_001544_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001544_2 "gle_basic_type.shared.mediump_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001544, VkglTestCase_001544_1, VkglTestCase_001544_2);

#define VkglTestCase_001545_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001545_2 "ngle_basic_type.shared.highp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001545, VkglTestCase_001545_1, VkglTestCase_001545_2);

#define VkglTestCase_001546_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001546_2 "basic_type.shared.row_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001546, VkglTestCase_001546_1, VkglTestCase_001546_2);

#define VkglTestCase_001547_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001547_2 "asic_type.shared.row_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001547, VkglTestCase_001547_1, VkglTestCase_001547_2);

#define VkglTestCase_001548_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001548_2 "basic_type.shared.row_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001548, VkglTestCase_001548_1, VkglTestCase_001548_2);

#define VkglTestCase_001549_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001549_2 "asic_type.shared.column_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001549, VkglTestCase_001549_1, VkglTestCase_001549_2);

#define VkglTestCase_001550_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001550_2 "ic_type.shared.column_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001550, VkglTestCase_001550_1, VkglTestCase_001550_2);

#define VkglTestCase_001551_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001551_2 "sic_type.shared.column_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001551, VkglTestCase_001551_1, VkglTestCase_001551_2);

#define VkglTestCase_001552_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001552_2 "ngle_basic_type.shared.lowp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001552, VkglTestCase_001552_1, VkglTestCase_001552_2);

#define VkglTestCase_001553_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001553_2 "gle_basic_type.shared.mediump_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001553, VkglTestCase_001553_1, VkglTestCase_001553_2);

#define VkglTestCase_001554_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001554_2 "ngle_basic_type.shared.highp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001554, VkglTestCase_001554_1, VkglTestCase_001554_2);

#define VkglTestCase_001555_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001555_2 "basic_type.shared.row_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001555, VkglTestCase_001555_1, VkglTestCase_001555_2);

#define VkglTestCase_001556_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001556_2 "asic_type.shared.row_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001556, VkglTestCase_001556_1, VkglTestCase_001556_2);

#define VkglTestCase_001557_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001557_2 "basic_type.shared.row_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001557, VkglTestCase_001557_1, VkglTestCase_001557_2);

#define VkglTestCase_001558_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001558_2 "asic_type.shared.column_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001558, VkglTestCase_001558_1, VkglTestCase_001558_2);

#define VkglTestCase_001559_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001559_2 "ic_type.shared.column_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001559, VkglTestCase_001559_1, VkglTestCase_001559_2);

#define VkglTestCase_001560_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001560_2 "sic_type.shared.column_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001560, VkglTestCase_001560_1, VkglTestCase_001560_2);

#define VkglTestCase_001561_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001561_2 "ngle_basic_type.shared.lowp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001561, VkglTestCase_001561_1, VkglTestCase_001561_2);

#define VkglTestCase_001562_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001562_2 "gle_basic_type.shared.mediump_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001562, VkglTestCase_001562_1, VkglTestCase_001562_2);

#define VkglTestCase_001563_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001563_2 "ngle_basic_type.shared.highp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001563, VkglTestCase_001563_1, VkglTestCase_001563_2);

#define VkglTestCase_001564_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001564_2 "basic_type.shared.row_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001564, VkglTestCase_001564_1, VkglTestCase_001564_2);

#define VkglTestCase_001565_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001565_2 "asic_type.shared.row_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001565, VkglTestCase_001565_1, VkglTestCase_001565_2);

#define VkglTestCase_001566_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001566_2 "basic_type.shared.row_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001566, VkglTestCase_001566_1, VkglTestCase_001566_2);

#define VkglTestCase_001567_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001567_2 "asic_type.shared.column_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001567, VkglTestCase_001567_1, VkglTestCase_001567_2);

#define VkglTestCase_001568_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001568_2 "ic_type.shared.column_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001568, VkglTestCase_001568_1, VkglTestCase_001568_2);

#define VkglTestCase_001569_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001569_2 "sic_type.shared.column_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001569, VkglTestCase_001569_1, VkglTestCase_001569_2);

#define VkglTestCase_001570_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001570_2 "ngle_basic_type.shared.lowp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001570, VkglTestCase_001570_1, VkglTestCase_001570_2);

#define VkglTestCase_001571_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001571_2 "gle_basic_type.shared.mediump_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001571, VkglTestCase_001571_1, VkglTestCase_001571_2);

#define VkglTestCase_001572_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001572_2 "ngle_basic_type.shared.highp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001572, VkglTestCase_001572_1, VkglTestCase_001572_2);

#define VkglTestCase_001573_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001573_2 "basic_type.shared.row_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001573, VkglTestCase_001573_1, VkglTestCase_001573_2);

#define VkglTestCase_001574_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001574_2 "asic_type.shared.row_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001574, VkglTestCase_001574_1, VkglTestCase_001574_2);

#define VkglTestCase_001575_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001575_2 "basic_type.shared.row_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001575, VkglTestCase_001575_1, VkglTestCase_001575_2);

#define VkglTestCase_001576_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001576_2 "asic_type.shared.column_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001576, VkglTestCase_001576_1, VkglTestCase_001576_2);

#define VkglTestCase_001577_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001577_2 "ic_type.shared.column_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001577, VkglTestCase_001577_1, VkglTestCase_001577_2);

#define VkglTestCase_001578_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001578_2 "sic_type.shared.column_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001578, VkglTestCase_001578_1, VkglTestCase_001578_2);

#define VkglTestCase_001579_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001579_2 "ngle_basic_type.shared.lowp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001579, VkglTestCase_001579_1, VkglTestCase_001579_2);

#define VkglTestCase_001580_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001580_2 "gle_basic_type.shared.mediump_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001580, VkglTestCase_001580_1, VkglTestCase_001580_2);

#define VkglTestCase_001581_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001581_2 "ngle_basic_type.shared.highp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001581, VkglTestCase_001581_1, VkglTestCase_001581_2);

#define VkglTestCase_001582_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001582_2 "basic_type.shared.row_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001582, VkglTestCase_001582_1, VkglTestCase_001582_2);

#define VkglTestCase_001583_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001583_2 "asic_type.shared.row_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001583, VkglTestCase_001583_1, VkglTestCase_001583_2);

#define VkglTestCase_001584_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001584_2 "basic_type.shared.row_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001584, VkglTestCase_001584_1, VkglTestCase_001584_2);

#define VkglTestCase_001585_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001585_2 "asic_type.shared.column_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001585, VkglTestCase_001585_1, VkglTestCase_001585_2);

#define VkglTestCase_001586_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001586_2 "ic_type.shared.column_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001586, VkglTestCase_001586_1, VkglTestCase_001586_2);

#define VkglTestCase_001587_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001587_2 "sic_type.shared.column_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001587, VkglTestCase_001587_1, VkglTestCase_001587_2);

#define VkglTestCase_001588_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001588_2 "ngle_basic_type.shared.lowp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001588, VkglTestCase_001588_1, VkglTestCase_001588_2);

#define VkglTestCase_001589_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001589_2 "gle_basic_type.shared.mediump_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001589, VkglTestCase_001589_1, VkglTestCase_001589_2);

#define VkglTestCase_001590_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001590_2 "ngle_basic_type.shared.highp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001590, VkglTestCase_001590_1, VkglTestCase_001590_2);

#define VkglTestCase_001591_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001591_2 "basic_type.shared.row_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001591, VkglTestCase_001591_1, VkglTestCase_001591_2);

#define VkglTestCase_001592_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001592_2 "asic_type.shared.row_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001592, VkglTestCase_001592_1, VkglTestCase_001592_2);

#define VkglTestCase_001593_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001593_2 "basic_type.shared.row_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001593, VkglTestCase_001593_1, VkglTestCase_001593_2);

#define VkglTestCase_001594_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001594_2 "asic_type.shared.column_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001594, VkglTestCase_001594_1, VkglTestCase_001594_2);

#define VkglTestCase_001595_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001595_2 "ic_type.shared.column_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001595, VkglTestCase_001595_1, VkglTestCase_001595_2);

#define VkglTestCase_001596_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001596_2 "sic_type.shared.column_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001596, VkglTestCase_001596_1, VkglTestCase_001596_2);
