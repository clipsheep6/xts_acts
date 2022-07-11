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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034083_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034083_2 "_mixed.srgb8_alpha8_etc2_eac_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034083, VkglTestCase_034083_1, VkglTestCase_034083_2);

#define VkglTestCase_034084_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034084_2 "_mixed.srgb8_alpha8_etc2_eac_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034084, VkglTestCase_034084_1, VkglTestCase_034084_2);

#define VkglTestCase_034085_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034085_2 "s_mixed.srgb8_alpha8_etc2_eac_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034085, VkglTestCase_034085_1, VkglTestCase_034085_2);

#define VkglTestCase_034086_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034086_2 "xed.srgb8_alpha8_etc2_eac_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034086, VkglTestCase_034086_1, VkglTestCase_034086_2);

#define VkglTestCase_034087_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034087_2 "s_mixed.srgb8_alpha8_etc2_eac_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034087, VkglTestCase_034087_1, VkglTestCase_034087_2);

#define VkglTestCase_034088_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034088_2 "s_mixed.srgb8_alpha8_etc2_eac_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034088, VkglTestCase_034088_1, VkglTestCase_034088_2);

#define VkglTestCase_034089_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034089_2 "ts_mixed.srgb8_alpha8_etc2_eac_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034089, VkglTestCase_034089_1, VkglTestCase_034089_2);

#define VkglTestCase_034090_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034090_2 "ixed.srgb8_alpha8_etc2_eac_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034090, VkglTestCase_034090_1, VkglTestCase_034090_2);
