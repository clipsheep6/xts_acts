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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036679_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036679_2 "s_mixed.rgba_astc_10x6_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036679, VkglTestCase_036679_1, VkglTestCase_036679_2);

#define VkglTestCase_036680_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036680_2 "s_mixed.rgba_astc_10x6_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036680, VkglTestCase_036680_1, VkglTestCase_036680_2);

#define VkglTestCase_036681_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036681_2 "ts_mixed.rgba_astc_10x6_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036681, VkglTestCase_036681_1, VkglTestCase_036681_2);

#define VkglTestCase_036682_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036682_2 "ixed.rgba_astc_10x6_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036682, VkglTestCase_036682_1, VkglTestCase_036682_2);

#define VkglTestCase_036683_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036683_2 "_mixed.rgba_astc_10x6_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036683, VkglTestCase_036683_1, VkglTestCase_036683_2);

#define VkglTestCase_036684_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036684_2 "s_mixed.rgba_astc_10x6_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036684, VkglTestCase_036684_1, VkglTestCase_036684_2);

#define VkglTestCase_036685_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036685_2 "s_mixed.rgba_astc_10x6_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036685, VkglTestCase_036685_1, VkglTestCase_036685_2);

#define VkglTestCase_036686_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036686_2 "ts_mixed.rgba_astc_10x6_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036686, VkglTestCase_036686_1, VkglTestCase_036686_2);

#define VkglTestCase_036687_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036687_2 "ixed.rgba_astc_10x6_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036687, VkglTestCase_036687_1, VkglTestCase_036687_2);

#define VkglTestCase_036688_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036688_2 "_mixed.rgba_astc_10x6_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036688, VkglTestCase_036688_1, VkglTestCase_036688_2);

#define VkglTestCase_036689_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036689_2 "ts_mixed.rgba_astc_10x6_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036689, VkglTestCase_036689_1, VkglTestCase_036689_2);

#define VkglTestCase_036690_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036690_2 "ts_mixed.rgba_astc_10x6_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036690, VkglTestCase_036690_1, VkglTestCase_036690_2);

#define VkglTestCase_036691_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036691_2 "its_mixed.rgba_astc_10x6_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036691, VkglTestCase_036691_1, VkglTestCase_036691_2);

#define VkglTestCase_036692_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036692_2 "mixed.rgba_astc_10x6_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036692, VkglTestCase_036692_1, VkglTestCase_036692_2);

#define VkglTestCase_036693_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036693_2 "s_mixed.rgba_astc_10x6_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036693, VkglTestCase_036693_1, VkglTestCase_036693_2);

#define VkglTestCase_036694_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036694_2 "ixed.rgba_astc_10x6_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036694, VkglTestCase_036694_1, VkglTestCase_036694_2);

#define VkglTestCase_036695_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036695_2 "ixed.rgba_astc_10x6_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036695, VkglTestCase_036695_1, VkglTestCase_036695_2);

#define VkglTestCase_036696_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036696_2 "mixed.rgba_astc_10x6_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036696, VkglTestCase_036696_1, VkglTestCase_036696_2);

#define VkglTestCase_036697_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036697_2 "d.rgba_astc_10x6_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036697, VkglTestCase_036697_1, VkglTestCase_036697_2);

#define VkglTestCase_036698_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036698_2 "xed.rgba_astc_10x6_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036698, VkglTestCase_036698_1, VkglTestCase_036698_2);
