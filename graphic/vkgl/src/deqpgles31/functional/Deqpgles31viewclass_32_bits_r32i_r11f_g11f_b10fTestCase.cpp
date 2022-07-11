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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026931_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026931_2 "lass_32_bits.r32i_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026931, VkglTestCase_026931_1, VkglTestCase_026931_2);

#define VkglTestCase_026932_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026932_2 "lass_32_bits.r32i_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026932, VkglTestCase_026932_1, VkglTestCase_026932_2);

#define VkglTestCase_026933_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026933_2 "class_32_bits.r32i_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026933, VkglTestCase_026933_1, VkglTestCase_026933_2);

#define VkglTestCase_026934_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026934_2 "s_32_bits.r32i_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026934, VkglTestCase_026934_1, VkglTestCase_026934_2);

#define VkglTestCase_026935_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026935_2 "lass_32_bits.r32i_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026935, VkglTestCase_026935_1, VkglTestCase_026935_2);

#define VkglTestCase_026936_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026936_2 "lass_32_bits.r32i_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026936, VkglTestCase_026936_1, VkglTestCase_026936_2);

#define VkglTestCase_026937_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026937_2 "class_32_bits.r32i_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026937, VkglTestCase_026937_1, VkglTestCase_026937_2);

#define VkglTestCase_026938_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026938_2 "s_32_bits.r32i_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026938, VkglTestCase_026938_1, VkglTestCase_026938_2);

#define VkglTestCase_026939_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026939_2 "class_32_bits.r32i_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026939, VkglTestCase_026939_1, VkglTestCase_026939_2);

#define VkglTestCase_026940_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026940_2 "class_32_bits.r32i_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026940, VkglTestCase_026940_1, VkglTestCase_026940_2);

#define VkglTestCase_026941_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026941_2 "wclass_32_bits.r32i_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026941, VkglTestCase_026941_1, VkglTestCase_026941_2);

#define VkglTestCase_026942_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026942_2 "ss_32_bits.r32i_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026942, VkglTestCase_026942_1, VkglTestCase_026942_2);

#define VkglTestCase_026943_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026943_2 "s_32_bits.r32i_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026943, VkglTestCase_026943_1, VkglTestCase_026943_2);

#define VkglTestCase_026944_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026944_2 "s_32_bits.r32i_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026944, VkglTestCase_026944_1, VkglTestCase_026944_2);

#define VkglTestCase_026945_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026945_2 "ss_32_bits.r32i_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026945, VkglTestCase_026945_1, VkglTestCase_026945_2);

#define VkglTestCase_026946_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_026946_2 "2_bits.r32i_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026946, VkglTestCase_026946_1, VkglTestCase_026946_2);

#define VkglTestCase_026947_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026947_2 "ss_32_bits.r32i_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026947, VkglTestCase_026947_1, VkglTestCase_026947_2);

#define VkglTestCase_026948_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026948_2 "ss_32_bits.r32i_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026948, VkglTestCase_026948_1, VkglTestCase_026948_2);

#define VkglTestCase_026949_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026949_2 "ass_32_bits.r32i_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026949, VkglTestCase_026949_1, VkglTestCase_026949_2);

#define VkglTestCase_026950_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_026950_2 "32_bits.r32i_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026950, VkglTestCase_026950_1, VkglTestCase_026950_2);
