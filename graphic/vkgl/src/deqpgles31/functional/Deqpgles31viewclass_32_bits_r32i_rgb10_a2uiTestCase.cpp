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

#define VkglTestCase_026951_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026951_2 "wclass_32_bits.r32i_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026951, VkglTestCase_026951_1, VkglTestCase_026951_2);

#define VkglTestCase_026952_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026952_2 "wclass_32_bits.r32i_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026952, VkglTestCase_026952_1, VkglTestCase_026952_2);

#define VkglTestCase_026953_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026953_2 "ewclass_32_bits.r32i_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026953, VkglTestCase_026953_1, VkglTestCase_026953_2);

#define VkglTestCase_026954_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026954_2 "ass_32_bits.r32i_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026954, VkglTestCase_026954_1, VkglTestCase_026954_2);

#define VkglTestCase_026955_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026955_2 "lass_32_bits.r32i_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026955, VkglTestCase_026955_1, VkglTestCase_026955_2);

#define VkglTestCase_026956_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026956_2 "wclass_32_bits.r32i_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026956, VkglTestCase_026956_1, VkglTestCase_026956_2);

#define VkglTestCase_026957_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026957_2 "wclass_32_bits.r32i_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026957, VkglTestCase_026957_1, VkglTestCase_026957_2);

#define VkglTestCase_026958_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026958_2 "ewclass_32_bits.r32i_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026958, VkglTestCase_026958_1, VkglTestCase_026958_2);

#define VkglTestCase_026959_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026959_2 "ass_32_bits.r32i_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026959, VkglTestCase_026959_1, VkglTestCase_026959_2);

#define VkglTestCase_026960_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026960_2 "lass_32_bits.r32i_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026960, VkglTestCase_026960_1, VkglTestCase_026960_2);

#define VkglTestCase_026961_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026961_2 "ewclass_32_bits.r32i_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026961, VkglTestCase_026961_1, VkglTestCase_026961_2);

#define VkglTestCase_026962_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026962_2 "ewclass_32_bits.r32i_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026962, VkglTestCase_026962_1, VkglTestCase_026962_2);

#define VkglTestCase_026963_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026963_2 "iewclass_32_bits.r32i_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026963, VkglTestCase_026963_1, VkglTestCase_026963_2);

#define VkglTestCase_026964_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026964_2 "lass_32_bits.r32i_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026964, VkglTestCase_026964_1, VkglTestCase_026964_2);

#define VkglTestCase_026965_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026965_2 "class_32_bits.r32i_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026965, VkglTestCase_026965_1, VkglTestCase_026965_2);

#define VkglTestCase_026966_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026966_2 "ass_32_bits.r32i_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026966, VkglTestCase_026966_1, VkglTestCase_026966_2);

#define VkglTestCase_026967_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026967_2 "ass_32_bits.r32i_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026967, VkglTestCase_026967_1, VkglTestCase_026967_2);

#define VkglTestCase_026968_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026968_2 "lass_32_bits.r32i_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026968, VkglTestCase_026968_1, VkglTestCase_026968_2);

#define VkglTestCase_026969_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026969_2 "_32_bits.r32i_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026969, VkglTestCase_026969_1, VkglTestCase_026969_2);

#define VkglTestCase_026970_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026970_2 "s_32_bits.r32i_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026970, VkglTestCase_026970_1, VkglTestCase_026970_2);

#define VkglTestCase_026971_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026971_2 "lass_32_bits.r32i_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026971, VkglTestCase_026971_1, VkglTestCase_026971_2);

#define VkglTestCase_026972_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026972_2 "lass_32_bits.r32i_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026972, VkglTestCase_026972_1, VkglTestCase_026972_2);

#define VkglTestCase_026973_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026973_2 "class_32_bits.r32i_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026973, VkglTestCase_026973_1, VkglTestCase_026973_2);

#define VkglTestCase_026974_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026974_2 "s_32_bits.r32i_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026974, VkglTestCase_026974_1, VkglTestCase_026974_2);

#define VkglTestCase_026975_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026975_2 "ass_32_bits.r32i_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026975, VkglTestCase_026975_1, VkglTestCase_026975_2);
