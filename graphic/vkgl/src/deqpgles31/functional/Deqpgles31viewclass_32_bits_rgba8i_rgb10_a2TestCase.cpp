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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028958_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028958_2 "wclass_32_bits.rgba8i_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028958, VkglTestCase_028958_1, VkglTestCase_028958_2);

#define VkglTestCase_028959_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028959_2 "wclass_32_bits.rgba8i_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028959, VkglTestCase_028959_1, VkglTestCase_028959_2);

#define VkglTestCase_028960_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028960_2 "ewclass_32_bits.rgba8i_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028960, VkglTestCase_028960_1, VkglTestCase_028960_2);

#define VkglTestCase_028961_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028961_2 "ass_32_bits.rgba8i_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028961, VkglTestCase_028961_1, VkglTestCase_028961_2);

#define VkglTestCase_028962_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028962_2 "lass_32_bits.rgba8i_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028962, VkglTestCase_028962_1, VkglTestCase_028962_2);

#define VkglTestCase_028963_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028963_2 "wclass_32_bits.rgba8i_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028963, VkglTestCase_028963_1, VkglTestCase_028963_2);

#define VkglTestCase_028964_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028964_2 "wclass_32_bits.rgba8i_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028964, VkglTestCase_028964_1, VkglTestCase_028964_2);

#define VkglTestCase_028965_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028965_2 "ewclass_32_bits.rgba8i_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028965, VkglTestCase_028965_1, VkglTestCase_028965_2);

#define VkglTestCase_028966_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028966_2 "ass_32_bits.rgba8i_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028966, VkglTestCase_028966_1, VkglTestCase_028966_2);

#define VkglTestCase_028967_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028967_2 "lass_32_bits.rgba8i_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028967, VkglTestCase_028967_1, VkglTestCase_028967_2);

#define VkglTestCase_028968_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028968_2 "ewclass_32_bits.rgba8i_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028968, VkglTestCase_028968_1, VkglTestCase_028968_2);

#define VkglTestCase_028969_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028969_2 "ewclass_32_bits.rgba8i_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028969, VkglTestCase_028969_1, VkglTestCase_028969_2);

#define VkglTestCase_028970_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028970_2 "iewclass_32_bits.rgba8i_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028970, VkglTestCase_028970_1, VkglTestCase_028970_2);

#define VkglTestCase_028971_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028971_2 "lass_32_bits.rgba8i_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028971, VkglTestCase_028971_1, VkglTestCase_028971_2);

#define VkglTestCase_028972_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028972_2 "class_32_bits.rgba8i_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028972, VkglTestCase_028972_1, VkglTestCase_028972_2);

#define VkglTestCase_028973_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028973_2 "ass_32_bits.rgba8i_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028973, VkglTestCase_028973_1, VkglTestCase_028973_2);

#define VkglTestCase_028974_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028974_2 "ass_32_bits.rgba8i_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028974, VkglTestCase_028974_1, VkglTestCase_028974_2);

#define VkglTestCase_028975_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028975_2 "lass_32_bits.rgba8i_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028975, VkglTestCase_028975_1, VkglTestCase_028975_2);

#define VkglTestCase_028976_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028976_2 "_32_bits.rgba8i_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028976, VkglTestCase_028976_1, VkglTestCase_028976_2);

#define VkglTestCase_028977_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028977_2 "s_32_bits.rgba8i_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028977, VkglTestCase_028977_1, VkglTestCase_028977_2);

#define VkglTestCase_028978_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028978_2 "lass_32_bits.rgba8i_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028978, VkglTestCase_028978_1, VkglTestCase_028978_2);

#define VkglTestCase_028979_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028979_2 "lass_32_bits.rgba8i_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028979, VkglTestCase_028979_1, VkglTestCase_028979_2);

#define VkglTestCase_028980_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028980_2 "class_32_bits.rgba8i_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028980, VkglTestCase_028980_1, VkglTestCase_028980_2);

#define VkglTestCase_028981_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028981_2 "s_32_bits.rgba8i_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028981, VkglTestCase_028981_1, VkglTestCase_028981_2);

#define VkglTestCase_028982_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028982_2 "ass_32_bits.rgba8i_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028982, VkglTestCase_028982_1, VkglTestCase_028982_2);
