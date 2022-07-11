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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001167_1 "KHR-GLES32.core.texture_compatibility."
#define VkglTestCase_001167_2 "texsubimage_format_rgba4_unsigned_byte"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001167, VkglTestCase_001167_1, VkglTestCase_001167_2);

#define VkglTestCase_001168_1 "KHR-GLES32.core.texture_compatibility.t"
#define VkglTestCase_001168_2 "exsubimage_format_rgb5_a1_unsigned_byte"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001168, VkglTestCase_001168_1, VkglTestCase_001168_2);

#define VkglTestCase_001169_1 "KHR-GLES32.core.texture_compatibility.tex"
#define VkglTestCase_001169_2 "subimage_format_rgb5_a1_unsigned_int_10_a2"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001169, VkglTestCase_001169_1, VkglTestCase_001169_2);

#define VkglTestCase_001170_1 "KHR-GLES32.core.texture_compatibi"
#define VkglTestCase_001170_2 "lity.texsubimage_format_r16f_float"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001170, VkglTestCase_001170_1, VkglTestCase_001170_2);

#define VkglTestCase_001171_1 "KHR-GLES32.core.texture_compatibil"
#define VkglTestCase_001171_2 "ity.texsubimage_format_rg16f_float"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001171, VkglTestCase_001171_1, VkglTestCase_001171_2);

#define VkglTestCase_001172_1 "KHR-GLES32.core.texture_compatibil"
#define VkglTestCase_001172_2 "ity.texsubimage_format_rgb16f_float"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001172, VkglTestCase_001172_1, VkglTestCase_001172_2);

#define VkglTestCase_001173_1 "KHR-GLES32.core.texture_compatibili"
#define VkglTestCase_001173_2 "ty.texsubimage_format_rgba16f_float"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001173, VkglTestCase_001173_1, VkglTestCase_001173_2);

#define VkglTestCase_001174_1 "KHR-GLES32.core.texture_compatibility.tex"
#define VkglTestCase_001174_2 "subimage_format_r11f_g11f_b10f_half_float"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001174, VkglTestCase_001174_1, VkglTestCase_001174_2);

#define VkglTestCase_001175_1 "KHR-GLES32.core.texture_compatibility."
#define VkglTestCase_001175_2 "texsubimage_format_r11f_g11f_b10f_float"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001175, VkglTestCase_001175_1, VkglTestCase_001175_2);

#define VkglTestCase_001176_1 "KHR-GLES32.core.texture_compatibility"
#define VkglTestCase_001176_2 ".texsubimage_format_rgb9_e5_half_float"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001176, VkglTestCase_001176_1, VkglTestCase_001176_2);

#define VkglTestCase_001177_1 "KHR-GLES32.core.texture_compatibili"
#define VkglTestCase_001177_2 "ty.texsubimage_format_rgb9_e5_float"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001177, VkglTestCase_001177_1, VkglTestCase_001177_2);

#define VkglTestCase_001178_1 "KHR-GLES32.core.texture_compatibility."
#define VkglTestCase_001178_2 "texsubimage_format_rgb565_unsigned_byte"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001178, VkglTestCase_001178_1, VkglTestCase_001178_2);

#define VkglTestCase_001179_1 "KHR-GLES32.core.texture_compatibility.t"
#define VkglTestCase_001179_2 "exsubimage_format_depth_component16_uint"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001179, VkglTestCase_001179_1, VkglTestCase_001179_2);
