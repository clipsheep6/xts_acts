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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029960_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029960_2 "lass_32_bits.rgb10_a2ui_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029960, VkglTestCase_029960_1, VkglTestCase_029960_2);

#define VkglTestCase_029961_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029961_2 "lass_32_bits.rgb10_a2ui_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029961, VkglTestCase_029961_1, VkglTestCase_029961_2);

#define VkglTestCase_029962_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029962_2 "class_32_bits.rgb10_a2ui_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029962, VkglTestCase_029962_1, VkglTestCase_029962_2);

#define VkglTestCase_029963_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029963_2 "s_32_bits.rgb10_a2ui_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029963, VkglTestCase_029963_1, VkglTestCase_029963_2);

#define VkglTestCase_029964_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029964_2 "lass_32_bits.rgb10_a2ui_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029964, VkglTestCase_029964_1, VkglTestCase_029964_2);

#define VkglTestCase_029965_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029965_2 "lass_32_bits.rgb10_a2ui_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029965, VkglTestCase_029965_1, VkglTestCase_029965_2);

#define VkglTestCase_029966_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029966_2 "class_32_bits.rgb10_a2ui_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029966, VkglTestCase_029966_1, VkglTestCase_029966_2);

#define VkglTestCase_029967_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029967_2 "s_32_bits.rgb10_a2ui_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029967, VkglTestCase_029967_1, VkglTestCase_029967_2);

#define VkglTestCase_029968_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029968_2 "class_32_bits.rgb10_a2ui_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029968, VkglTestCase_029968_1, VkglTestCase_029968_2);

#define VkglTestCase_029969_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029969_2 "class_32_bits.rgb10_a2ui_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029969, VkglTestCase_029969_1, VkglTestCase_029969_2);

#define VkglTestCase_029970_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029970_2 "wclass_32_bits.rgb10_a2ui_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029970, VkglTestCase_029970_1, VkglTestCase_029970_2);

#define VkglTestCase_029971_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029971_2 "ss_32_bits.rgb10_a2ui_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029971, VkglTestCase_029971_1, VkglTestCase_029971_2);

#define VkglTestCase_029972_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029972_2 "s_32_bits.rgb10_a2ui_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029972, VkglTestCase_029972_1, VkglTestCase_029972_2);

#define VkglTestCase_029973_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029973_2 "s_32_bits.rgb10_a2ui_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029973, VkglTestCase_029973_1, VkglTestCase_029973_2);

#define VkglTestCase_029974_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029974_2 "ss_32_bits.rgb10_a2ui_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029974, VkglTestCase_029974_1, VkglTestCase_029974_2);

#define VkglTestCase_029975_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029975_2 "2_bits.rgb10_a2ui_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029975, VkglTestCase_029975_1, VkglTestCase_029975_2);

#define VkglTestCase_029976_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029976_2 "ass_32_bits.rgb10_a2ui_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029976, VkglTestCase_029976_1, VkglTestCase_029976_2);

#define VkglTestCase_029977_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029977_2 "ass_32_bits.rgb10_a2ui_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029977, VkglTestCase_029977_1, VkglTestCase_029977_2);

#define VkglTestCase_029978_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029978_2 "lass_32_bits.rgb10_a2ui_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029978, VkglTestCase_029978_1, VkglTestCase_029978_2);

#define VkglTestCase_029979_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029979_2 "_32_bits.rgb10_a2ui_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029979, VkglTestCase_029979_1, VkglTestCase_029979_2);
