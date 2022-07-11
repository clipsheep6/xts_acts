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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032962_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032962_2 "viewclass_8_bits.r8ui_r8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032962, VkglTestCase_032962_1, VkglTestCase_032962_2);

#define VkglTestCase_032963_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032963_2 "viewclass_8_bits.r8ui_r8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032963, VkglTestCase_032963_1, VkglTestCase_032963_2);

#define VkglTestCase_032964_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032964_2 ".viewclass_8_bits.r8ui_r8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032964, VkglTestCase_032964_1, VkglTestCase_032964_2);

#define VkglTestCase_032965_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032965_2 "wclass_8_bits.r8ui_r8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032965, VkglTestCase_032965_1, VkglTestCase_032965_2);

#define VkglTestCase_032966_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032966_2 "iewclass_8_bits.r8ui_r8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032966, VkglTestCase_032966_1, VkglTestCase_032966_2);

#define VkglTestCase_032967_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032967_2 "viewclass_8_bits.r8ui_r8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032967, VkglTestCase_032967_1, VkglTestCase_032967_2);

#define VkglTestCase_032968_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032968_2 "viewclass_8_bits.r8ui_r8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032968, VkglTestCase_032968_1, VkglTestCase_032968_2);

#define VkglTestCase_032969_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032969_2 ".viewclass_8_bits.r8ui_r8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032969, VkglTestCase_032969_1, VkglTestCase_032969_2);

#define VkglTestCase_032970_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032970_2 "wclass_8_bits.r8ui_r8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032970, VkglTestCase_032970_1, VkglTestCase_032970_2);

#define VkglTestCase_032971_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032971_2 "iewclass_8_bits.r8ui_r8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032971, VkglTestCase_032971_1, VkglTestCase_032971_2);

#define VkglTestCase_032972_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032972_2 ".viewclass_8_bits.r8ui_r8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032972, VkglTestCase_032972_1, VkglTestCase_032972_2);

#define VkglTestCase_032973_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032973_2 ".viewclass_8_bits.r8ui_r8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032973, VkglTestCase_032973_1, VkglTestCase_032973_2);

#define VkglTestCase_032974_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032974_2 "d.viewclass_8_bits.r8ui_r8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032974, VkglTestCase_032974_1, VkglTestCase_032974_2);

#define VkglTestCase_032975_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032975_2 "ewclass_8_bits.r8ui_r8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032975, VkglTestCase_032975_1, VkglTestCase_032975_2);

#define VkglTestCase_032976_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032976_2 "viewclass_8_bits.r8ui_r8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032976, VkglTestCase_032976_1, VkglTestCase_032976_2);

#define VkglTestCase_032977_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032977_2 "wclass_8_bits.r8ui_r8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032977, VkglTestCase_032977_1, VkglTestCase_032977_2);

#define VkglTestCase_032978_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032978_2 "wclass_8_bits.r8ui_r8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032978, VkglTestCase_032978_1, VkglTestCase_032978_2);

#define VkglTestCase_032979_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032979_2 "ewclass_8_bits.r8ui_r8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032979, VkglTestCase_032979_1, VkglTestCase_032979_2);

#define VkglTestCase_032980_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032980_2 "ass_8_bits.r8ui_r8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032980, VkglTestCase_032980_1, VkglTestCase_032980_2);

#define VkglTestCase_032981_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032981_2 "class_8_bits.r8ui_r8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032981, VkglTestCase_032981_1, VkglTestCase_032981_2);

#define VkglTestCase_032982_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032982_2 "iewclass_8_bits.r8ui_r8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032982, VkglTestCase_032982_1, VkglTestCase_032982_2);

#define VkglTestCase_032983_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032983_2 "iewclass_8_bits.r8ui_r8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032983, VkglTestCase_032983_1, VkglTestCase_032983_2);

#define VkglTestCase_032984_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032984_2 "viewclass_8_bits.r8ui_r8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032984, VkglTestCase_032984_1, VkglTestCase_032984_2);

#define VkglTestCase_032985_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032985_2 "class_8_bits.r8ui_r8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032985, VkglTestCase_032985_1, VkglTestCase_032985_2);

#define VkglTestCase_032986_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032986_2 "wclass_8_bits.r8ui_r8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032986, VkglTestCase_032986_1, VkglTestCase_032986_2);
