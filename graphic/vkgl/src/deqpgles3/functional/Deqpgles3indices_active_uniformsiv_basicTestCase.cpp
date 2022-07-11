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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036451_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036451_2 ".indices_active_uniformsiv.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036451, VkglTestCase_036451_1, VkglTestCase_036451_2);

#define VkglTestCase_036452_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036452_2 "indices_active_uniformsiv.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036452, VkglTestCase_036452_1, VkglTestCase_036452_2);

#define VkglTestCase_036453_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036453_2 "y.indices_active_uniformsiv.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036453, VkglTestCase_036453_1, VkglTestCase_036453_2);

#define VkglTestCase_036454_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036454_2 ".indices_active_uniformsiv.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036454, VkglTestCase_036454_1, VkglTestCase_036454_2);

#define VkglTestCase_036455_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036455_2 "indices_active_uniformsiv.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036455, VkglTestCase_036455_1, VkglTestCase_036455_2);

#define VkglTestCase_036456_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036456_2 "y.indices_active_uniformsiv.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036456, VkglTestCase_036456_1, VkglTestCase_036456_2);

#define VkglTestCase_036457_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036457_2 ".indices_active_uniformsiv.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036457, VkglTestCase_036457_1, VkglTestCase_036457_2);

#define VkglTestCase_036458_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036458_2 "indices_active_uniformsiv.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036458, VkglTestCase_036458_1, VkglTestCase_036458_2);

#define VkglTestCase_036459_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036459_2 "y.indices_active_uniformsiv.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036459, VkglTestCase_036459_1, VkglTestCase_036459_2);

#define VkglTestCase_036460_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036460_2 ".indices_active_uniformsiv.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036460, VkglTestCase_036460_1, VkglTestCase_036460_2);

#define VkglTestCase_036461_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036461_2 "indices_active_uniformsiv.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036461, VkglTestCase_036461_1, VkglTestCase_036461_2);

#define VkglTestCase_036462_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036462_2 "y.indices_active_uniformsiv.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036462, VkglTestCase_036462_1, VkglTestCase_036462_2);

#define VkglTestCase_036463_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036463_2 ".indices_active_uniformsiv.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036463, VkglTestCase_036463_1, VkglTestCase_036463_2);

#define VkglTestCase_036464_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036464_2 "indices_active_uniformsiv.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036464, VkglTestCase_036464_1, VkglTestCase_036464_2);

#define VkglTestCase_036465_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036465_2 "y.indices_active_uniformsiv.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036465, VkglTestCase_036465_1, VkglTestCase_036465_2);

#define VkglTestCase_036466_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036466_2 "indices_active_uniformsiv.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036466, VkglTestCase_036466_1, VkglTestCase_036466_2);

#define VkglTestCase_036467_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036467_2 "ndices_active_uniformsiv.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036467, VkglTestCase_036467_1, VkglTestCase_036467_2);

#define VkglTestCase_036468_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036468_2 ".indices_active_uniformsiv.basic.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036468, VkglTestCase_036468_1, VkglTestCase_036468_2);

#define VkglTestCase_036469_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036469_2 "indices_active_uniformsiv.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036469, VkglTestCase_036469_1, VkglTestCase_036469_2);

#define VkglTestCase_036470_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036470_2 "ndices_active_uniformsiv.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036470, VkglTestCase_036470_1, VkglTestCase_036470_2);

#define VkglTestCase_036471_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036471_2 ".indices_active_uniformsiv.basic.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036471, VkglTestCase_036471_1, VkglTestCase_036471_2);

#define VkglTestCase_036472_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036472_2 "indices_active_uniformsiv.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036472, VkglTestCase_036472_1, VkglTestCase_036472_2);

#define VkglTestCase_036473_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036473_2 "ndices_active_uniformsiv.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036473, VkglTestCase_036473_1, VkglTestCase_036473_2);

#define VkglTestCase_036474_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036474_2 ".indices_active_uniformsiv.basic.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036474, VkglTestCase_036474_1, VkglTestCase_036474_2);

#define VkglTestCase_036475_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036475_2 ".indices_active_uniformsiv.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036475, VkglTestCase_036475_1, VkglTestCase_036475_2);

#define VkglTestCase_036476_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036476_2 "indices_active_uniformsiv.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036476, VkglTestCase_036476_1, VkglTestCase_036476_2);

#define VkglTestCase_036477_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036477_2 "y.indices_active_uniformsiv.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036477, VkglTestCase_036477_1, VkglTestCase_036477_2);

#define VkglTestCase_036478_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036478_2 "indices_active_uniformsiv.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036478, VkglTestCase_036478_1, VkglTestCase_036478_2);

#define VkglTestCase_036479_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036479_2 "ndices_active_uniformsiv.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036479, VkglTestCase_036479_1, VkglTestCase_036479_2);

#define VkglTestCase_036480_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036480_2 ".indices_active_uniformsiv.basic.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036480, VkglTestCase_036480_1, VkglTestCase_036480_2);

#define VkglTestCase_036481_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036481_2 "indices_active_uniformsiv.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036481, VkglTestCase_036481_1, VkglTestCase_036481_2);

#define VkglTestCase_036482_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036482_2 "ndices_active_uniformsiv.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036482, VkglTestCase_036482_1, VkglTestCase_036482_2);

#define VkglTestCase_036483_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036483_2 ".indices_active_uniformsiv.basic.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036483, VkglTestCase_036483_1, VkglTestCase_036483_2);

#define VkglTestCase_036484_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036484_2 "indices_active_uniformsiv.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036484, VkglTestCase_036484_1, VkglTestCase_036484_2);

#define VkglTestCase_036485_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036485_2 "ndices_active_uniformsiv.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036485, VkglTestCase_036485_1, VkglTestCase_036485_2);

#define VkglTestCase_036486_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036486_2 ".indices_active_uniformsiv.basic.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036486, VkglTestCase_036486_1, VkglTestCase_036486_2);

#define VkglTestCase_036487_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036487_2 ".indices_active_uniformsiv.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036487, VkglTestCase_036487_1, VkglTestCase_036487_2);

#define VkglTestCase_036488_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036488_2 "indices_active_uniformsiv.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036488, VkglTestCase_036488_1, VkglTestCase_036488_2);

#define VkglTestCase_036489_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036489_2 "y.indices_active_uniformsiv.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036489, VkglTestCase_036489_1, VkglTestCase_036489_2);

#define VkglTestCase_036490_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036490_2 "y.indices_active_uniformsiv.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036490, VkglTestCase_036490_1, VkglTestCase_036490_2);

#define VkglTestCase_036491_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036491_2 ".indices_active_uniformsiv.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036491, VkglTestCase_036491_1, VkglTestCase_036491_2);

#define VkglTestCase_036492_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036492_2 "ry.indices_active_uniformsiv.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036492, VkglTestCase_036492_1, VkglTestCase_036492_2);

#define VkglTestCase_036493_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036493_2 ".indices_active_uniformsiv.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036493, VkglTestCase_036493_1, VkglTestCase_036493_2);

#define VkglTestCase_036494_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036494_2 "indices_active_uniformsiv.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036494, VkglTestCase_036494_1, VkglTestCase_036494_2);

#define VkglTestCase_036495_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036495_2 "y.indices_active_uniformsiv.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036495, VkglTestCase_036495_1, VkglTestCase_036495_2);

#define VkglTestCase_036496_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036496_2 ".indices_active_uniformsiv.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036496, VkglTestCase_036496_1, VkglTestCase_036496_2);

#define VkglTestCase_036497_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036497_2 "indices_active_uniformsiv.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036497, VkglTestCase_036497_1, VkglTestCase_036497_2);

#define VkglTestCase_036498_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036498_2 "y.indices_active_uniformsiv.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036498, VkglTestCase_036498_1, VkglTestCase_036498_2);

#define VkglTestCase_036499_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036499_2 ".indices_active_uniformsiv.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036499, VkglTestCase_036499_1, VkglTestCase_036499_2);

#define VkglTestCase_036500_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036500_2 "indices_active_uniformsiv.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036500, VkglTestCase_036500_1, VkglTestCase_036500_2);

#define VkglTestCase_036501_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036501_2 "y.indices_active_uniformsiv.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036501, VkglTestCase_036501_1, VkglTestCase_036501_2);

#define VkglTestCase_036502_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036502_2 ".indices_active_uniformsiv.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036502, VkglTestCase_036502_1, VkglTestCase_036502_2);

#define VkglTestCase_036503_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036503_2 "indices_active_uniformsiv.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036503, VkglTestCase_036503_1, VkglTestCase_036503_2);

#define VkglTestCase_036504_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036504_2 "y.indices_active_uniformsiv.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036504, VkglTestCase_036504_1, VkglTestCase_036504_2);

#define VkglTestCase_036505_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036505_2 ".indices_active_uniformsiv.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036505, VkglTestCase_036505_1, VkglTestCase_036505_2);

#define VkglTestCase_036506_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036506_2 "indices_active_uniformsiv.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036506, VkglTestCase_036506_1, VkglTestCase_036506_2);

#define VkglTestCase_036507_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036507_2 "y.indices_active_uniformsiv.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036507, VkglTestCase_036507_1, VkglTestCase_036507_2);

#define VkglTestCase_036508_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036508_2 ".indices_active_uniformsiv.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036508, VkglTestCase_036508_1, VkglTestCase_036508_2);

#define VkglTestCase_036509_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036509_2 "indices_active_uniformsiv.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036509, VkglTestCase_036509_1, VkglTestCase_036509_2);

#define VkglTestCase_036510_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036510_2 "y.indices_active_uniformsiv.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036510, VkglTestCase_036510_1, VkglTestCase_036510_2);

#define VkglTestCase_036511_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036511_2 ".indices_active_uniformsiv.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036511, VkglTestCase_036511_1, VkglTestCase_036511_2);

#define VkglTestCase_036512_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036512_2 "indices_active_uniformsiv.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036512, VkglTestCase_036512_1, VkglTestCase_036512_2);

#define VkglTestCase_036513_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036513_2 "y.indices_active_uniformsiv.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036513, VkglTestCase_036513_1, VkglTestCase_036513_2);

#define VkglTestCase_036514_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036514_2 ".indices_active_uniformsiv.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036514, VkglTestCase_036514_1, VkglTestCase_036514_2);

#define VkglTestCase_036515_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036515_2 "indices_active_uniformsiv.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036515, VkglTestCase_036515_1, VkglTestCase_036515_2);

#define VkglTestCase_036516_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036516_2 "y.indices_active_uniformsiv.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036516, VkglTestCase_036516_1, VkglTestCase_036516_2);

#define VkglTestCase_036517_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036517_2 ".indices_active_uniformsiv.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036517, VkglTestCase_036517_1, VkglTestCase_036517_2);

#define VkglTestCase_036518_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036518_2 "indices_active_uniformsiv.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036518, VkglTestCase_036518_1, VkglTestCase_036518_2);

#define VkglTestCase_036519_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036519_2 "y.indices_active_uniformsiv.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036519, VkglTestCase_036519_1, VkglTestCase_036519_2);

#define VkglTestCase_036520_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036520_2 ".indices_active_uniformsiv.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036520, VkglTestCase_036520_1, VkglTestCase_036520_2);

#define VkglTestCase_036521_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036521_2 "indices_active_uniformsiv.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036521, VkglTestCase_036521_1, VkglTestCase_036521_2);

#define VkglTestCase_036522_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036522_2 "y.indices_active_uniformsiv.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036522, VkglTestCase_036522_1, VkglTestCase_036522_2);

#define VkglTestCase_036523_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036523_2 ".indices_active_uniformsiv.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036523, VkglTestCase_036523_1, VkglTestCase_036523_2);

#define VkglTestCase_036524_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036524_2 "indices_active_uniformsiv.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036524, VkglTestCase_036524_1, VkglTestCase_036524_2);

#define VkglTestCase_036525_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036525_2 "y.indices_active_uniformsiv.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036525, VkglTestCase_036525_1, VkglTestCase_036525_2);

#define VkglTestCase_036526_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036526_2 "ndices_active_uniformsiv.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036526, VkglTestCase_036526_1, VkglTestCase_036526_2);

#define VkglTestCase_036527_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036527_2 "dices_active_uniformsiv.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036527, VkglTestCase_036527_1, VkglTestCase_036527_2);

#define VkglTestCase_036528_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036528_2 "indices_active_uniformsiv.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036528, VkglTestCase_036528_1, VkglTestCase_036528_2);

#define VkglTestCase_036529_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036529_2 "dices_active_uniformsiv.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036529, VkglTestCase_036529_1, VkglTestCase_036529_2);

#define VkglTestCase_036530_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036530_2 "ices_active_uniformsiv.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036530, VkglTestCase_036530_1, VkglTestCase_036530_2);

#define VkglTestCase_036531_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036531_2 "ndices_active_uniformsiv.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036531, VkglTestCase_036531_1, VkglTestCase_036531_2);
