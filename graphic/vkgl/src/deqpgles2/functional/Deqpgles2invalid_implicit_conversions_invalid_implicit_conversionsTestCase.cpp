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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002481_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002481_2 "s.invalid_implicit_conversions.add_float_int_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002481, VkglTestCase_002481_1, VkglTestCase_002481_2);

#define VkglTestCase_002482_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002482_2 ".invalid_implicit_conversions.add_float_int_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002482, VkglTestCase_002482_1, VkglTestCase_002482_2);

#define VkglTestCase_002483_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002483_2 "ns.invalid_implicit_conversions.add_float_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002483, VkglTestCase_002483_1, VkglTestCase_002483_2);

#define VkglTestCase_002484_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002484_2 "s.invalid_implicit_conversions.add_float_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002484, VkglTestCase_002484_1, VkglTestCase_002484_2);

#define VkglTestCase_002485_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002485_2 ".invalid_implicit_conversions.add_float_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002485, VkglTestCase_002485_1, VkglTestCase_002485_2);

#define VkglTestCase_002486_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002486_2 "invalid_implicit_conversions.add_float_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002486, VkglTestCase_002486_1, VkglTestCase_002486_2);

#define VkglTestCase_002487_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002487_2 ".invalid_implicit_conversions.add_float_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002487, VkglTestCase_002487_1, VkglTestCase_002487_2);

#define VkglTestCase_002488_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002488_2 "invalid_implicit_conversions.add_float_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002488, VkglTestCase_002488_1, VkglTestCase_002488_2);

#define VkglTestCase_002489_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002489_2 ".invalid_implicit_conversions.add_float_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002489, VkglTestCase_002489_1, VkglTestCase_002489_2);

#define VkglTestCase_002490_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002490_2 "invalid_implicit_conversions.add_float_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002490, VkglTestCase_002490_1, VkglTestCase_002490_2);

#define VkglTestCase_002491_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002491_2 ".invalid_implicit_conversions.add_float_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002491, VkglTestCase_002491_1, VkglTestCase_002491_2);

#define VkglTestCase_002492_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002492_2 "invalid_implicit_conversions.add_float_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002492, VkglTestCase_002492_1, VkglTestCase_002492_2);

#define VkglTestCase_002493_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002493_2 ".invalid_implicit_conversions.add_float_ivec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002493, VkglTestCase_002493_1, VkglTestCase_002493_2);

#define VkglTestCase_002494_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002494_2 "invalid_implicit_conversions.add_float_ivec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002494, VkglTestCase_002494_1, VkglTestCase_002494_2);

#define VkglTestCase_002495_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002495_2 ".invalid_implicit_conversions.add_float_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002495, VkglTestCase_002495_1, VkglTestCase_002495_2);

#define VkglTestCase_002496_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002496_2 "invalid_implicit_conversions.add_float_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002496, VkglTestCase_002496_1, VkglTestCase_002496_2);

#define VkglTestCase_002497_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002497_2 "ns.invalid_implicit_conversions.add_vec2_int_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002497, VkglTestCase_002497_1, VkglTestCase_002497_2);

#define VkglTestCase_002498_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002498_2 "s.invalid_implicit_conversions.add_vec2_int_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002498, VkglTestCase_002498_1, VkglTestCase_002498_2);

#define VkglTestCase_002499_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002499_2 "ons.invalid_implicit_conversions.add_vec2_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002499, VkglTestCase_002499_1, VkglTestCase_002499_2);

#define VkglTestCase_002500_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002500_2 "ns.invalid_implicit_conversions.add_vec2_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002500, VkglTestCase_002500_1, VkglTestCase_002500_2);

#define VkglTestCase_002501_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002501_2 "s.invalid_implicit_conversions.add_vec2_ivec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002501, VkglTestCase_002501_1, VkglTestCase_002501_2);

#define VkglTestCase_002502_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002502_2 ".invalid_implicit_conversions.add_vec2_ivec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002502, VkglTestCase_002502_1, VkglTestCase_002502_2);

#define VkglTestCase_002503_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002503_2 "s.invalid_implicit_conversions.add_vec2_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002503, VkglTestCase_002503_1, VkglTestCase_002503_2);

#define VkglTestCase_002504_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002504_2 ".invalid_implicit_conversions.add_vec2_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002504, VkglTestCase_002504_1, VkglTestCase_002504_2);

#define VkglTestCase_002505_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002505_2 "s.invalid_implicit_conversions.add_vec2_ivec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002505, VkglTestCase_002505_1, VkglTestCase_002505_2);

#define VkglTestCase_002506_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002506_2 ".invalid_implicit_conversions.add_vec2_ivec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002506, VkglTestCase_002506_1, VkglTestCase_002506_2);

#define VkglTestCase_002507_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002507_2 "s.invalid_implicit_conversions.add_vec2_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002507, VkglTestCase_002507_1, VkglTestCase_002507_2);

#define VkglTestCase_002508_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002508_2 ".invalid_implicit_conversions.add_vec2_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002508, VkglTestCase_002508_1, VkglTestCase_002508_2);

#define VkglTestCase_002509_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002509_2 "s.invalid_implicit_conversions.add_vec2_ivec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002509, VkglTestCase_002509_1, VkglTestCase_002509_2);

#define VkglTestCase_002510_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002510_2 ".invalid_implicit_conversions.add_vec2_ivec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002510, VkglTestCase_002510_1, VkglTestCase_002510_2);

#define VkglTestCase_002511_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002511_2 "s.invalid_implicit_conversions.add_vec2_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002511, VkglTestCase_002511_1, VkglTestCase_002511_2);

#define VkglTestCase_002512_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002512_2 ".invalid_implicit_conversions.add_vec2_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002512, VkglTestCase_002512_1, VkglTestCase_002512_2);

#define VkglTestCase_002513_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002513_2 "ns.invalid_implicit_conversions.add_vec3_int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002513, VkglTestCase_002513_1, VkglTestCase_002513_2);

#define VkglTestCase_002514_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002514_2 "s.invalid_implicit_conversions.add_vec3_int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002514, VkglTestCase_002514_1, VkglTestCase_002514_2);

#define VkglTestCase_002515_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002515_2 "ons.invalid_implicit_conversions.add_vec3_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002515, VkglTestCase_002515_1, VkglTestCase_002515_2);

#define VkglTestCase_002516_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002516_2 "ns.invalid_implicit_conversions.add_vec3_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002516, VkglTestCase_002516_1, VkglTestCase_002516_2);

#define VkglTestCase_002517_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002517_2 "s.invalid_implicit_conversions.add_vec3_ivec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002517, VkglTestCase_002517_1, VkglTestCase_002517_2);

#define VkglTestCase_002518_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002518_2 ".invalid_implicit_conversions.add_vec3_ivec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002518, VkglTestCase_002518_1, VkglTestCase_002518_2);

#define VkglTestCase_002519_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002519_2 "s.invalid_implicit_conversions.add_vec3_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002519, VkglTestCase_002519_1, VkglTestCase_002519_2);

#define VkglTestCase_002520_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002520_2 ".invalid_implicit_conversions.add_vec3_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002520, VkglTestCase_002520_1, VkglTestCase_002520_2);

#define VkglTestCase_002521_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002521_2 "s.invalid_implicit_conversions.add_vec3_ivec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002521, VkglTestCase_002521_1, VkglTestCase_002521_2);

#define VkglTestCase_002522_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002522_2 ".invalid_implicit_conversions.add_vec3_ivec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002522, VkglTestCase_002522_1, VkglTestCase_002522_2);

#define VkglTestCase_002523_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002523_2 "s.invalid_implicit_conversions.add_vec3_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002523, VkglTestCase_002523_1, VkglTestCase_002523_2);

#define VkglTestCase_002524_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002524_2 ".invalid_implicit_conversions.add_vec3_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002524, VkglTestCase_002524_1, VkglTestCase_002524_2);

#define VkglTestCase_002525_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002525_2 "s.invalid_implicit_conversions.add_vec3_ivec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002525, VkglTestCase_002525_1, VkglTestCase_002525_2);

#define VkglTestCase_002526_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002526_2 ".invalid_implicit_conversions.add_vec3_ivec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002526, VkglTestCase_002526_1, VkglTestCase_002526_2);

#define VkglTestCase_002527_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002527_2 "s.invalid_implicit_conversions.add_vec3_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002527, VkglTestCase_002527_1, VkglTestCase_002527_2);

#define VkglTestCase_002528_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002528_2 ".invalid_implicit_conversions.add_vec3_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002528, VkglTestCase_002528_1, VkglTestCase_002528_2);

#define VkglTestCase_002529_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002529_2 "ns.invalid_implicit_conversions.add_vec4_int_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002529, VkglTestCase_002529_1, VkglTestCase_002529_2);

#define VkglTestCase_002530_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002530_2 "s.invalid_implicit_conversions.add_vec4_int_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002530, VkglTestCase_002530_1, VkglTestCase_002530_2);

#define VkglTestCase_002531_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002531_2 "ons.invalid_implicit_conversions.add_vec4_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002531, VkglTestCase_002531_1, VkglTestCase_002531_2);

#define VkglTestCase_002532_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002532_2 "ns.invalid_implicit_conversions.add_vec4_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002532, VkglTestCase_002532_1, VkglTestCase_002532_2);

#define VkglTestCase_002533_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002533_2 "s.invalid_implicit_conversions.add_vec4_ivec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002533, VkglTestCase_002533_1, VkglTestCase_002533_2);

#define VkglTestCase_002534_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002534_2 ".invalid_implicit_conversions.add_vec4_ivec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002534, VkglTestCase_002534_1, VkglTestCase_002534_2);

#define VkglTestCase_002535_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002535_2 "s.invalid_implicit_conversions.add_vec4_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002535, VkglTestCase_002535_1, VkglTestCase_002535_2);

#define VkglTestCase_002536_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002536_2 ".invalid_implicit_conversions.add_vec4_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002536, VkglTestCase_002536_1, VkglTestCase_002536_2);

#define VkglTestCase_002537_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002537_2 "s.invalid_implicit_conversions.add_vec4_ivec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002537, VkglTestCase_002537_1, VkglTestCase_002537_2);

#define VkglTestCase_002538_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002538_2 ".invalid_implicit_conversions.add_vec4_ivec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002538, VkglTestCase_002538_1, VkglTestCase_002538_2);

#define VkglTestCase_002539_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002539_2 "s.invalid_implicit_conversions.add_vec4_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002539, VkglTestCase_002539_1, VkglTestCase_002539_2);

#define VkglTestCase_002540_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002540_2 ".invalid_implicit_conversions.add_vec4_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002540, VkglTestCase_002540_1, VkglTestCase_002540_2);

#define VkglTestCase_002541_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002541_2 "s.invalid_implicit_conversions.add_vec4_ivec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002541, VkglTestCase_002541_1, VkglTestCase_002541_2);

#define VkglTestCase_002542_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002542_2 ".invalid_implicit_conversions.add_vec4_ivec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002542, VkglTestCase_002542_1, VkglTestCase_002542_2);

#define VkglTestCase_002543_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002543_2 "s.invalid_implicit_conversions.add_vec4_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002543, VkglTestCase_002543_1, VkglTestCase_002543_2);

#define VkglTestCase_002544_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002544_2 ".invalid_implicit_conversions.add_vec4_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002544, VkglTestCase_002544_1, VkglTestCase_002544_2);

#define VkglTestCase_002545_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002545_2 "s.invalid_implicit_conversions.mul_float_int_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002545, VkglTestCase_002545_1, VkglTestCase_002545_2);

#define VkglTestCase_002546_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002546_2 ".invalid_implicit_conversions.mul_float_int_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002546, VkglTestCase_002546_1, VkglTestCase_002546_2);

#define VkglTestCase_002547_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002547_2 "ns.invalid_implicit_conversions.mul_float_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002547, VkglTestCase_002547_1, VkglTestCase_002547_2);

#define VkglTestCase_002548_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002548_2 "s.invalid_implicit_conversions.mul_float_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002548, VkglTestCase_002548_1, VkglTestCase_002548_2);

#define VkglTestCase_002549_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002549_2 ".invalid_implicit_conversions.mul_float_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002549, VkglTestCase_002549_1, VkglTestCase_002549_2);

#define VkglTestCase_002550_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002550_2 "invalid_implicit_conversions.mul_float_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002550, VkglTestCase_002550_1, VkglTestCase_002550_2);

#define VkglTestCase_002551_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002551_2 ".invalid_implicit_conversions.mul_float_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002551, VkglTestCase_002551_1, VkglTestCase_002551_2);

#define VkglTestCase_002552_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002552_2 "invalid_implicit_conversions.mul_float_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002552, VkglTestCase_002552_1, VkglTestCase_002552_2);

#define VkglTestCase_002553_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002553_2 ".invalid_implicit_conversions.mul_float_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002553, VkglTestCase_002553_1, VkglTestCase_002553_2);

#define VkglTestCase_002554_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002554_2 "invalid_implicit_conversions.mul_float_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002554, VkglTestCase_002554_1, VkglTestCase_002554_2);

#define VkglTestCase_002555_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002555_2 ".invalid_implicit_conversions.mul_float_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002555, VkglTestCase_002555_1, VkglTestCase_002555_2);

#define VkglTestCase_002556_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002556_2 "invalid_implicit_conversions.mul_float_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002556, VkglTestCase_002556_1, VkglTestCase_002556_2);

#define VkglTestCase_002557_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002557_2 ".invalid_implicit_conversions.mul_float_ivec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002557, VkglTestCase_002557_1, VkglTestCase_002557_2);

#define VkglTestCase_002558_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002558_2 "invalid_implicit_conversions.mul_float_ivec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002558, VkglTestCase_002558_1, VkglTestCase_002558_2);

#define VkglTestCase_002559_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002559_2 ".invalid_implicit_conversions.mul_float_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002559, VkglTestCase_002559_1, VkglTestCase_002559_2);

#define VkglTestCase_002560_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002560_2 "invalid_implicit_conversions.mul_float_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002560, VkglTestCase_002560_1, VkglTestCase_002560_2);

#define VkglTestCase_002561_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002561_2 "ns.invalid_implicit_conversions.mul_vec2_int_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002561, VkglTestCase_002561_1, VkglTestCase_002561_2);

#define VkglTestCase_002562_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002562_2 "s.invalid_implicit_conversions.mul_vec2_int_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002562, VkglTestCase_002562_1, VkglTestCase_002562_2);

#define VkglTestCase_002563_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002563_2 "ons.invalid_implicit_conversions.mul_vec2_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002563, VkglTestCase_002563_1, VkglTestCase_002563_2);

#define VkglTestCase_002564_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002564_2 "ns.invalid_implicit_conversions.mul_vec2_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002564, VkglTestCase_002564_1, VkglTestCase_002564_2);

#define VkglTestCase_002565_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002565_2 "s.invalid_implicit_conversions.mul_vec2_ivec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002565, VkglTestCase_002565_1, VkglTestCase_002565_2);

#define VkglTestCase_002566_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002566_2 ".invalid_implicit_conversions.mul_vec2_ivec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002566, VkglTestCase_002566_1, VkglTestCase_002566_2);

#define VkglTestCase_002567_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002567_2 "s.invalid_implicit_conversions.mul_vec2_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002567, VkglTestCase_002567_1, VkglTestCase_002567_2);

#define VkglTestCase_002568_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002568_2 ".invalid_implicit_conversions.mul_vec2_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002568, VkglTestCase_002568_1, VkglTestCase_002568_2);

#define VkglTestCase_002569_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002569_2 "s.invalid_implicit_conversions.mul_vec2_ivec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002569, VkglTestCase_002569_1, VkglTestCase_002569_2);

#define VkglTestCase_002570_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002570_2 ".invalid_implicit_conversions.mul_vec2_ivec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002570, VkglTestCase_002570_1, VkglTestCase_002570_2);

#define VkglTestCase_002571_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002571_2 "s.invalid_implicit_conversions.mul_vec2_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002571, VkglTestCase_002571_1, VkglTestCase_002571_2);

#define VkglTestCase_002572_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002572_2 ".invalid_implicit_conversions.mul_vec2_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002572, VkglTestCase_002572_1, VkglTestCase_002572_2);

#define VkglTestCase_002573_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002573_2 "s.invalid_implicit_conversions.mul_vec2_ivec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002573, VkglTestCase_002573_1, VkglTestCase_002573_2);

#define VkglTestCase_002574_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002574_2 ".invalid_implicit_conversions.mul_vec2_ivec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002574, VkglTestCase_002574_1, VkglTestCase_002574_2);

#define VkglTestCase_002575_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002575_2 "s.invalid_implicit_conversions.mul_vec2_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002575, VkglTestCase_002575_1, VkglTestCase_002575_2);

#define VkglTestCase_002576_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002576_2 ".invalid_implicit_conversions.mul_vec2_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002576, VkglTestCase_002576_1, VkglTestCase_002576_2);

#define VkglTestCase_002577_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002577_2 "ns.invalid_implicit_conversions.mul_vec3_int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002577, VkglTestCase_002577_1, VkglTestCase_002577_2);

#define VkglTestCase_002578_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002578_2 "s.invalid_implicit_conversions.mul_vec3_int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002578, VkglTestCase_002578_1, VkglTestCase_002578_2);

#define VkglTestCase_002579_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002579_2 "ons.invalid_implicit_conversions.mul_vec3_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002579, VkglTestCase_002579_1, VkglTestCase_002579_2);

#define VkglTestCase_002580_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002580_2 "ns.invalid_implicit_conversions.mul_vec3_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002580, VkglTestCase_002580_1, VkglTestCase_002580_2);

#define VkglTestCase_002581_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002581_2 "s.invalid_implicit_conversions.mul_vec3_ivec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002581, VkglTestCase_002581_1, VkglTestCase_002581_2);

#define VkglTestCase_002582_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002582_2 ".invalid_implicit_conversions.mul_vec3_ivec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002582, VkglTestCase_002582_1, VkglTestCase_002582_2);

#define VkglTestCase_002583_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002583_2 "s.invalid_implicit_conversions.mul_vec3_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002583, VkglTestCase_002583_1, VkglTestCase_002583_2);

#define VkglTestCase_002584_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002584_2 ".invalid_implicit_conversions.mul_vec3_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002584, VkglTestCase_002584_1, VkglTestCase_002584_2);

#define VkglTestCase_002585_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002585_2 "s.invalid_implicit_conversions.mul_vec3_ivec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002585, VkglTestCase_002585_1, VkglTestCase_002585_2);

#define VkglTestCase_002586_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002586_2 ".invalid_implicit_conversions.mul_vec3_ivec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002586, VkglTestCase_002586_1, VkglTestCase_002586_2);

#define VkglTestCase_002587_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002587_2 "s.invalid_implicit_conversions.mul_vec3_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002587, VkglTestCase_002587_1, VkglTestCase_002587_2);

#define VkglTestCase_002588_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002588_2 ".invalid_implicit_conversions.mul_vec3_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002588, VkglTestCase_002588_1, VkglTestCase_002588_2);

#define VkglTestCase_002589_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002589_2 "s.invalid_implicit_conversions.mul_vec3_ivec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002589, VkglTestCase_002589_1, VkglTestCase_002589_2);

#define VkglTestCase_002590_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002590_2 ".invalid_implicit_conversions.mul_vec3_ivec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002590, VkglTestCase_002590_1, VkglTestCase_002590_2);

#define VkglTestCase_002591_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002591_2 "s.invalid_implicit_conversions.mul_vec3_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002591, VkglTestCase_002591_1, VkglTestCase_002591_2);

#define VkglTestCase_002592_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002592_2 ".invalid_implicit_conversions.mul_vec3_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002592, VkglTestCase_002592_1, VkglTestCase_002592_2);

#define VkglTestCase_002593_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002593_2 "ns.invalid_implicit_conversions.mul_vec4_int_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002593, VkglTestCase_002593_1, VkglTestCase_002593_2);

#define VkglTestCase_002594_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002594_2 "s.invalid_implicit_conversions.mul_vec4_int_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002594, VkglTestCase_002594_1, VkglTestCase_002594_2);

#define VkglTestCase_002595_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002595_2 "ons.invalid_implicit_conversions.mul_vec4_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002595, VkglTestCase_002595_1, VkglTestCase_002595_2);

#define VkglTestCase_002596_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002596_2 "ns.invalid_implicit_conversions.mul_vec4_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002596, VkglTestCase_002596_1, VkglTestCase_002596_2);

#define VkglTestCase_002597_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002597_2 "s.invalid_implicit_conversions.mul_vec4_ivec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002597, VkglTestCase_002597_1, VkglTestCase_002597_2);

#define VkglTestCase_002598_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002598_2 ".invalid_implicit_conversions.mul_vec4_ivec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002598, VkglTestCase_002598_1, VkglTestCase_002598_2);

#define VkglTestCase_002599_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002599_2 "s.invalid_implicit_conversions.mul_vec4_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002599, VkglTestCase_002599_1, VkglTestCase_002599_2);

#define VkglTestCase_002600_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002600_2 ".invalid_implicit_conversions.mul_vec4_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002600, VkglTestCase_002600_1, VkglTestCase_002600_2);

#define VkglTestCase_002601_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002601_2 "s.invalid_implicit_conversions.mul_vec4_ivec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002601, VkglTestCase_002601_1, VkglTestCase_002601_2);

#define VkglTestCase_002602_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002602_2 ".invalid_implicit_conversions.mul_vec4_ivec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002602, VkglTestCase_002602_1, VkglTestCase_002602_2);

#define VkglTestCase_002603_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002603_2 "s.invalid_implicit_conversions.mul_vec4_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002603, VkglTestCase_002603_1, VkglTestCase_002603_2);

#define VkglTestCase_002604_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002604_2 ".invalid_implicit_conversions.mul_vec4_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002604, VkglTestCase_002604_1, VkglTestCase_002604_2);

#define VkglTestCase_002605_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002605_2 "s.invalid_implicit_conversions.mul_vec4_ivec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002605, VkglTestCase_002605_1, VkglTestCase_002605_2);

#define VkglTestCase_002606_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002606_2 ".invalid_implicit_conversions.mul_vec4_ivec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002606, VkglTestCase_002606_1, VkglTestCase_002606_2);

#define VkglTestCase_002607_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002607_2 "s.invalid_implicit_conversions.mul_vec4_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002607, VkglTestCase_002607_1, VkglTestCase_002607_2);

#define VkglTestCase_002608_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002608_2 ".invalid_implicit_conversions.mul_vec4_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002608, VkglTestCase_002608_1, VkglTestCase_002608_2);

#define VkglTestCase_002609_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002609_2 "s.invalid_implicit_conversions.sub_float_int_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002609, VkglTestCase_002609_1, VkglTestCase_002609_2);

#define VkglTestCase_002610_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002610_2 ".invalid_implicit_conversions.sub_float_int_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002610, VkglTestCase_002610_1, VkglTestCase_002610_2);

#define VkglTestCase_002611_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002611_2 "ns.invalid_implicit_conversions.sub_float_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002611, VkglTestCase_002611_1, VkglTestCase_002611_2);

#define VkglTestCase_002612_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002612_2 "s.invalid_implicit_conversions.sub_float_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002612, VkglTestCase_002612_1, VkglTestCase_002612_2);

#define VkglTestCase_002613_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002613_2 ".invalid_implicit_conversions.sub_float_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002613, VkglTestCase_002613_1, VkglTestCase_002613_2);

#define VkglTestCase_002614_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002614_2 "invalid_implicit_conversions.sub_float_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002614, VkglTestCase_002614_1, VkglTestCase_002614_2);

#define VkglTestCase_002615_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002615_2 ".invalid_implicit_conversions.sub_float_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002615, VkglTestCase_002615_1, VkglTestCase_002615_2);

#define VkglTestCase_002616_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002616_2 "invalid_implicit_conversions.sub_float_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002616, VkglTestCase_002616_1, VkglTestCase_002616_2);

#define VkglTestCase_002617_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002617_2 ".invalid_implicit_conversions.sub_float_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002617, VkglTestCase_002617_1, VkglTestCase_002617_2);

#define VkglTestCase_002618_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002618_2 "invalid_implicit_conversions.sub_float_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002618, VkglTestCase_002618_1, VkglTestCase_002618_2);

#define VkglTestCase_002619_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002619_2 ".invalid_implicit_conversions.sub_float_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002619, VkglTestCase_002619_1, VkglTestCase_002619_2);

#define VkglTestCase_002620_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002620_2 "invalid_implicit_conversions.sub_float_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002620, VkglTestCase_002620_1, VkglTestCase_002620_2);

#define VkglTestCase_002621_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002621_2 ".invalid_implicit_conversions.sub_float_ivec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002621, VkglTestCase_002621_1, VkglTestCase_002621_2);

#define VkglTestCase_002622_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002622_2 "invalid_implicit_conversions.sub_float_ivec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002622, VkglTestCase_002622_1, VkglTestCase_002622_2);

#define VkglTestCase_002623_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002623_2 ".invalid_implicit_conversions.sub_float_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002623, VkglTestCase_002623_1, VkglTestCase_002623_2);

#define VkglTestCase_002624_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002624_2 "invalid_implicit_conversions.sub_float_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002624, VkglTestCase_002624_1, VkglTestCase_002624_2);

#define VkglTestCase_002625_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002625_2 "ns.invalid_implicit_conversions.sub_vec2_int_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002625, VkglTestCase_002625_1, VkglTestCase_002625_2);

#define VkglTestCase_002626_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002626_2 "s.invalid_implicit_conversions.sub_vec2_int_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002626, VkglTestCase_002626_1, VkglTestCase_002626_2);

#define VkglTestCase_002627_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002627_2 "ons.invalid_implicit_conversions.sub_vec2_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002627, VkglTestCase_002627_1, VkglTestCase_002627_2);

#define VkglTestCase_002628_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002628_2 "ns.invalid_implicit_conversions.sub_vec2_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002628, VkglTestCase_002628_1, VkglTestCase_002628_2);

#define VkglTestCase_002629_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002629_2 "s.invalid_implicit_conversions.sub_vec2_ivec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002629, VkglTestCase_002629_1, VkglTestCase_002629_2);

#define VkglTestCase_002630_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002630_2 ".invalid_implicit_conversions.sub_vec2_ivec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002630, VkglTestCase_002630_1, VkglTestCase_002630_2);

#define VkglTestCase_002631_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002631_2 "s.invalid_implicit_conversions.sub_vec2_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002631, VkglTestCase_002631_1, VkglTestCase_002631_2);

#define VkglTestCase_002632_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002632_2 ".invalid_implicit_conversions.sub_vec2_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002632, VkglTestCase_002632_1, VkglTestCase_002632_2);

#define VkglTestCase_002633_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002633_2 "s.invalid_implicit_conversions.sub_vec2_ivec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002633, VkglTestCase_002633_1, VkglTestCase_002633_2);

#define VkglTestCase_002634_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002634_2 ".invalid_implicit_conversions.sub_vec2_ivec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002634, VkglTestCase_002634_1, VkglTestCase_002634_2);

#define VkglTestCase_002635_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002635_2 "s.invalid_implicit_conversions.sub_vec2_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002635, VkglTestCase_002635_1, VkglTestCase_002635_2);

#define VkglTestCase_002636_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002636_2 ".invalid_implicit_conversions.sub_vec2_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002636, VkglTestCase_002636_1, VkglTestCase_002636_2);

#define VkglTestCase_002637_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002637_2 "s.invalid_implicit_conversions.sub_vec2_ivec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002637, VkglTestCase_002637_1, VkglTestCase_002637_2);

#define VkglTestCase_002638_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002638_2 ".invalid_implicit_conversions.sub_vec2_ivec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002638, VkglTestCase_002638_1, VkglTestCase_002638_2);

#define VkglTestCase_002639_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002639_2 "s.invalid_implicit_conversions.sub_vec2_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002639, VkglTestCase_002639_1, VkglTestCase_002639_2);

#define VkglTestCase_002640_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002640_2 ".invalid_implicit_conversions.sub_vec2_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002640, VkglTestCase_002640_1, VkglTestCase_002640_2);

#define VkglTestCase_002641_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002641_2 "ns.invalid_implicit_conversions.sub_vec3_int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002641, VkglTestCase_002641_1, VkglTestCase_002641_2);

#define VkglTestCase_002642_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002642_2 "s.invalid_implicit_conversions.sub_vec3_int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002642, VkglTestCase_002642_1, VkglTestCase_002642_2);

#define VkglTestCase_002643_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002643_2 "ons.invalid_implicit_conversions.sub_vec3_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002643, VkglTestCase_002643_1, VkglTestCase_002643_2);

#define VkglTestCase_002644_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002644_2 "ns.invalid_implicit_conversions.sub_vec3_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002644, VkglTestCase_002644_1, VkglTestCase_002644_2);

#define VkglTestCase_002645_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002645_2 "s.invalid_implicit_conversions.sub_vec3_ivec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002645, VkglTestCase_002645_1, VkglTestCase_002645_2);

#define VkglTestCase_002646_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002646_2 ".invalid_implicit_conversions.sub_vec3_ivec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002646, VkglTestCase_002646_1, VkglTestCase_002646_2);

#define VkglTestCase_002647_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002647_2 "s.invalid_implicit_conversions.sub_vec3_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002647, VkglTestCase_002647_1, VkglTestCase_002647_2);

#define VkglTestCase_002648_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002648_2 ".invalid_implicit_conversions.sub_vec3_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002648, VkglTestCase_002648_1, VkglTestCase_002648_2);

#define VkglTestCase_002649_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002649_2 "s.invalid_implicit_conversions.sub_vec3_ivec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002649, VkglTestCase_002649_1, VkglTestCase_002649_2);

#define VkglTestCase_002650_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002650_2 ".invalid_implicit_conversions.sub_vec3_ivec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002650, VkglTestCase_002650_1, VkglTestCase_002650_2);

#define VkglTestCase_002651_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002651_2 "s.invalid_implicit_conversions.sub_vec3_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002651, VkglTestCase_002651_1, VkglTestCase_002651_2);

#define VkglTestCase_002652_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002652_2 ".invalid_implicit_conversions.sub_vec3_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002652, VkglTestCase_002652_1, VkglTestCase_002652_2);

#define VkglTestCase_002653_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002653_2 "s.invalid_implicit_conversions.sub_vec3_ivec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002653, VkglTestCase_002653_1, VkglTestCase_002653_2);

#define VkglTestCase_002654_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002654_2 ".invalid_implicit_conversions.sub_vec3_ivec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002654, VkglTestCase_002654_1, VkglTestCase_002654_2);

#define VkglTestCase_002655_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002655_2 "s.invalid_implicit_conversions.sub_vec3_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002655, VkglTestCase_002655_1, VkglTestCase_002655_2);

#define VkglTestCase_002656_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002656_2 ".invalid_implicit_conversions.sub_vec3_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002656, VkglTestCase_002656_1, VkglTestCase_002656_2);

#define VkglTestCase_002657_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002657_2 "ns.invalid_implicit_conversions.sub_vec4_int_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002657, VkglTestCase_002657_1, VkglTestCase_002657_2);

#define VkglTestCase_002658_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002658_2 "s.invalid_implicit_conversions.sub_vec4_int_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002658, VkglTestCase_002658_1, VkglTestCase_002658_2);

#define VkglTestCase_002659_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002659_2 "ons.invalid_implicit_conversions.sub_vec4_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002659, VkglTestCase_002659_1, VkglTestCase_002659_2);

#define VkglTestCase_002660_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002660_2 "ns.invalid_implicit_conversions.sub_vec4_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002660, VkglTestCase_002660_1, VkglTestCase_002660_2);

#define VkglTestCase_002661_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002661_2 "s.invalid_implicit_conversions.sub_vec4_ivec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002661, VkglTestCase_002661_1, VkglTestCase_002661_2);

#define VkglTestCase_002662_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002662_2 ".invalid_implicit_conversions.sub_vec4_ivec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002662, VkglTestCase_002662_1, VkglTestCase_002662_2);

#define VkglTestCase_002663_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002663_2 "s.invalid_implicit_conversions.sub_vec4_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002663, VkglTestCase_002663_1, VkglTestCase_002663_2);

#define VkglTestCase_002664_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002664_2 ".invalid_implicit_conversions.sub_vec4_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002664, VkglTestCase_002664_1, VkglTestCase_002664_2);

#define VkglTestCase_002665_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002665_2 "s.invalid_implicit_conversions.sub_vec4_ivec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002665, VkglTestCase_002665_1, VkglTestCase_002665_2);

#define VkglTestCase_002666_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002666_2 ".invalid_implicit_conversions.sub_vec4_ivec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002666, VkglTestCase_002666_1, VkglTestCase_002666_2);

#define VkglTestCase_002667_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002667_2 "s.invalid_implicit_conversions.sub_vec4_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002667, VkglTestCase_002667_1, VkglTestCase_002667_2);

#define VkglTestCase_002668_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002668_2 ".invalid_implicit_conversions.sub_vec4_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002668, VkglTestCase_002668_1, VkglTestCase_002668_2);

#define VkglTestCase_002669_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002669_2 "s.invalid_implicit_conversions.sub_vec4_ivec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002669, VkglTestCase_002669_1, VkglTestCase_002669_2);

#define VkglTestCase_002670_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002670_2 ".invalid_implicit_conversions.sub_vec4_ivec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002670, VkglTestCase_002670_1, VkglTestCase_002670_2);

#define VkglTestCase_002671_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002671_2 "s.invalid_implicit_conversions.sub_vec4_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002671, VkglTestCase_002671_1, VkglTestCase_002671_2);

#define VkglTestCase_002672_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002672_2 ".invalid_implicit_conversions.sub_vec4_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002672, VkglTestCase_002672_1, VkglTestCase_002672_2);

#define VkglTestCase_002673_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002673_2 "s.invalid_implicit_conversions.div_float_int_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002673, VkglTestCase_002673_1, VkglTestCase_002673_2);

#define VkglTestCase_002674_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002674_2 ".invalid_implicit_conversions.div_float_int_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002674, VkglTestCase_002674_1, VkglTestCase_002674_2);

#define VkglTestCase_002675_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002675_2 "ns.invalid_implicit_conversions.div_float_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002675, VkglTestCase_002675_1, VkglTestCase_002675_2);

#define VkglTestCase_002676_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002676_2 "s.invalid_implicit_conversions.div_float_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002676, VkglTestCase_002676_1, VkglTestCase_002676_2);

#define VkglTestCase_002677_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002677_2 ".invalid_implicit_conversions.div_float_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002677, VkglTestCase_002677_1, VkglTestCase_002677_2);

#define VkglTestCase_002678_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002678_2 "invalid_implicit_conversions.div_float_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002678, VkglTestCase_002678_1, VkglTestCase_002678_2);

#define VkglTestCase_002679_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002679_2 ".invalid_implicit_conversions.div_float_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002679, VkglTestCase_002679_1, VkglTestCase_002679_2);

#define VkglTestCase_002680_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002680_2 "invalid_implicit_conversions.div_float_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002680, VkglTestCase_002680_1, VkglTestCase_002680_2);

#define VkglTestCase_002681_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002681_2 ".invalid_implicit_conversions.div_float_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002681, VkglTestCase_002681_1, VkglTestCase_002681_2);

#define VkglTestCase_002682_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002682_2 "invalid_implicit_conversions.div_float_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002682, VkglTestCase_002682_1, VkglTestCase_002682_2);

#define VkglTestCase_002683_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002683_2 ".invalid_implicit_conversions.div_float_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002683, VkglTestCase_002683_1, VkglTestCase_002683_2);

#define VkglTestCase_002684_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002684_2 "invalid_implicit_conversions.div_float_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002684, VkglTestCase_002684_1, VkglTestCase_002684_2);

#define VkglTestCase_002685_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002685_2 ".invalid_implicit_conversions.div_float_ivec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002685, VkglTestCase_002685_1, VkglTestCase_002685_2);

#define VkglTestCase_002686_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002686_2 "invalid_implicit_conversions.div_float_ivec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002686, VkglTestCase_002686_1, VkglTestCase_002686_2);

#define VkglTestCase_002687_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002687_2 ".invalid_implicit_conversions.div_float_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002687, VkglTestCase_002687_1, VkglTestCase_002687_2);

#define VkglTestCase_002688_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_002688_2 "invalid_implicit_conversions.div_float_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002688, VkglTestCase_002688_1, VkglTestCase_002688_2);

#define VkglTestCase_002689_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002689_2 "ns.invalid_implicit_conversions.div_vec2_int_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002689, VkglTestCase_002689_1, VkglTestCase_002689_2);

#define VkglTestCase_002690_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002690_2 "s.invalid_implicit_conversions.div_vec2_int_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002690, VkglTestCase_002690_1, VkglTestCase_002690_2);

#define VkglTestCase_002691_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002691_2 "ons.invalid_implicit_conversions.div_vec2_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002691, VkglTestCase_002691_1, VkglTestCase_002691_2);

#define VkglTestCase_002692_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002692_2 "ns.invalid_implicit_conversions.div_vec2_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002692, VkglTestCase_002692_1, VkglTestCase_002692_2);

#define VkglTestCase_002693_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002693_2 "s.invalid_implicit_conversions.div_vec2_ivec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002693, VkglTestCase_002693_1, VkglTestCase_002693_2);

#define VkglTestCase_002694_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002694_2 ".invalid_implicit_conversions.div_vec2_ivec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002694, VkglTestCase_002694_1, VkglTestCase_002694_2);

#define VkglTestCase_002695_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002695_2 "s.invalid_implicit_conversions.div_vec2_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002695, VkglTestCase_002695_1, VkglTestCase_002695_2);

#define VkglTestCase_002696_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002696_2 ".invalid_implicit_conversions.div_vec2_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002696, VkglTestCase_002696_1, VkglTestCase_002696_2);

#define VkglTestCase_002697_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002697_2 "s.invalid_implicit_conversions.div_vec2_ivec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002697, VkglTestCase_002697_1, VkglTestCase_002697_2);

#define VkglTestCase_002698_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002698_2 ".invalid_implicit_conversions.div_vec2_ivec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002698, VkglTestCase_002698_1, VkglTestCase_002698_2);

#define VkglTestCase_002699_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002699_2 "s.invalid_implicit_conversions.div_vec2_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002699, VkglTestCase_002699_1, VkglTestCase_002699_2);

#define VkglTestCase_002700_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002700_2 ".invalid_implicit_conversions.div_vec2_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002700, VkglTestCase_002700_1, VkglTestCase_002700_2);

#define VkglTestCase_002701_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002701_2 "s.invalid_implicit_conversions.div_vec2_ivec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002701, VkglTestCase_002701_1, VkglTestCase_002701_2);

#define VkglTestCase_002702_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002702_2 ".invalid_implicit_conversions.div_vec2_ivec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002702, VkglTestCase_002702_1, VkglTestCase_002702_2);

#define VkglTestCase_002703_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002703_2 "s.invalid_implicit_conversions.div_vec2_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002703, VkglTestCase_002703_1, VkglTestCase_002703_2);

#define VkglTestCase_002704_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002704_2 ".invalid_implicit_conversions.div_vec2_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002704, VkglTestCase_002704_1, VkglTestCase_002704_2);

#define VkglTestCase_002705_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002705_2 "ns.invalid_implicit_conversions.div_vec3_int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002705, VkglTestCase_002705_1, VkglTestCase_002705_2);

#define VkglTestCase_002706_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002706_2 "s.invalid_implicit_conversions.div_vec3_int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002706, VkglTestCase_002706_1, VkglTestCase_002706_2);

#define VkglTestCase_002707_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002707_2 "ons.invalid_implicit_conversions.div_vec3_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002707, VkglTestCase_002707_1, VkglTestCase_002707_2);

#define VkglTestCase_002708_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002708_2 "ns.invalid_implicit_conversions.div_vec3_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002708, VkglTestCase_002708_1, VkglTestCase_002708_2);

#define VkglTestCase_002709_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002709_2 "s.invalid_implicit_conversions.div_vec3_ivec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002709, VkglTestCase_002709_1, VkglTestCase_002709_2);

#define VkglTestCase_002710_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002710_2 ".invalid_implicit_conversions.div_vec3_ivec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002710, VkglTestCase_002710_1, VkglTestCase_002710_2);

#define VkglTestCase_002711_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002711_2 "s.invalid_implicit_conversions.div_vec3_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002711, VkglTestCase_002711_1, VkglTestCase_002711_2);

#define VkglTestCase_002712_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002712_2 ".invalid_implicit_conversions.div_vec3_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002712, VkglTestCase_002712_1, VkglTestCase_002712_2);

#define VkglTestCase_002713_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002713_2 "s.invalid_implicit_conversions.div_vec3_ivec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002713, VkglTestCase_002713_1, VkglTestCase_002713_2);

#define VkglTestCase_002714_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002714_2 ".invalid_implicit_conversions.div_vec3_ivec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002714, VkglTestCase_002714_1, VkglTestCase_002714_2);

#define VkglTestCase_002715_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002715_2 "s.invalid_implicit_conversions.div_vec3_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002715, VkglTestCase_002715_1, VkglTestCase_002715_2);

#define VkglTestCase_002716_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002716_2 ".invalid_implicit_conversions.div_vec3_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002716, VkglTestCase_002716_1, VkglTestCase_002716_2);

#define VkglTestCase_002717_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002717_2 "s.invalid_implicit_conversions.div_vec3_ivec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002717, VkglTestCase_002717_1, VkglTestCase_002717_2);

#define VkglTestCase_002718_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002718_2 ".invalid_implicit_conversions.div_vec3_ivec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002718, VkglTestCase_002718_1, VkglTestCase_002718_2);

#define VkglTestCase_002719_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002719_2 "s.invalid_implicit_conversions.div_vec3_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002719, VkglTestCase_002719_1, VkglTestCase_002719_2);

#define VkglTestCase_002720_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002720_2 ".invalid_implicit_conversions.div_vec3_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002720, VkglTestCase_002720_1, VkglTestCase_002720_2);

#define VkglTestCase_002721_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002721_2 "ns.invalid_implicit_conversions.div_vec4_int_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002721, VkglTestCase_002721_1, VkglTestCase_002721_2);

#define VkglTestCase_002722_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002722_2 "s.invalid_implicit_conversions.div_vec4_int_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002722, VkglTestCase_002722_1, VkglTestCase_002722_2);

#define VkglTestCase_002723_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_002723_2 "ons.invalid_implicit_conversions.div_vec4_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002723, VkglTestCase_002723_1, VkglTestCase_002723_2);

#define VkglTestCase_002724_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_002724_2 "ns.invalid_implicit_conversions.div_vec4_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002724, VkglTestCase_002724_1, VkglTestCase_002724_2);

#define VkglTestCase_002725_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002725_2 "s.invalid_implicit_conversions.div_vec4_ivec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002725, VkglTestCase_002725_1, VkglTestCase_002725_2);

#define VkglTestCase_002726_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002726_2 ".invalid_implicit_conversions.div_vec4_ivec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002726, VkglTestCase_002726_1, VkglTestCase_002726_2);

#define VkglTestCase_002727_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002727_2 "s.invalid_implicit_conversions.div_vec4_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002727, VkglTestCase_002727_1, VkglTestCase_002727_2);

#define VkglTestCase_002728_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002728_2 ".invalid_implicit_conversions.div_vec4_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002728, VkglTestCase_002728_1, VkglTestCase_002728_2);

#define VkglTestCase_002729_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002729_2 "s.invalid_implicit_conversions.div_vec4_ivec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002729, VkglTestCase_002729_1, VkglTestCase_002729_2);

#define VkglTestCase_002730_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002730_2 ".invalid_implicit_conversions.div_vec4_ivec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002730, VkglTestCase_002730_1, VkglTestCase_002730_2);

#define VkglTestCase_002731_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002731_2 "s.invalid_implicit_conversions.div_vec4_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002731, VkglTestCase_002731_1, VkglTestCase_002731_2);

#define VkglTestCase_002732_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002732_2 ".invalid_implicit_conversions.div_vec4_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002732, VkglTestCase_002732_1, VkglTestCase_002732_2);

#define VkglTestCase_002733_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002733_2 "s.invalid_implicit_conversions.div_vec4_ivec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002733, VkglTestCase_002733_1, VkglTestCase_002733_2);

#define VkglTestCase_002734_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002734_2 ".invalid_implicit_conversions.div_vec4_ivec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002734, VkglTestCase_002734_1, VkglTestCase_002734_2);

#define VkglTestCase_002735_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_002735_2 "s.invalid_implicit_conversions.div_vec4_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002735, VkglTestCase_002735_1, VkglTestCase_002735_2);

#define VkglTestCase_002736_1 "dEQP-GLES2.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_002736_2 ".invalid_implicit_conversions.div_vec4_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002736, VkglTestCase_002736_1, VkglTestCase_002736_2);
