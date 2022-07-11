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

#define VkglTestCase_036659_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036659_2 "s_mixed.rgba32i_rgba_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036659, VkglTestCase_036659_1, VkglTestCase_036659_2);

#define VkglTestCase_036660_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036660_2 "s_mixed.rgba32i_rgba_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036660, VkglTestCase_036660_1, VkglTestCase_036660_2);

#define VkglTestCase_036661_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036661_2 "ts_mixed.rgba32i_rgba_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036661, VkglTestCase_036661_1, VkglTestCase_036661_2);

#define VkglTestCase_036662_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036662_2 "ixed.rgba32i_rgba_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036662, VkglTestCase_036662_1, VkglTestCase_036662_2);

#define VkglTestCase_036663_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036663_2 "s_mixed.rgba32i_rgba_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036663, VkglTestCase_036663_1, VkglTestCase_036663_2);

#define VkglTestCase_036664_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036664_2 "s_mixed.rgba32i_rgba_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036664, VkglTestCase_036664_1, VkglTestCase_036664_2);

#define VkglTestCase_036665_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036665_2 "ts_mixed.rgba32i_rgba_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036665, VkglTestCase_036665_1, VkglTestCase_036665_2);

#define VkglTestCase_036666_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036666_2 "ixed.rgba32i_rgba_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036666, VkglTestCase_036666_1, VkglTestCase_036666_2);

#define VkglTestCase_036667_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036667_2 "ts_mixed.rgba32i_rgba_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036667, VkglTestCase_036667_1, VkglTestCase_036667_2);

#define VkglTestCase_036668_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036668_2 "ts_mixed.rgba32i_rgba_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036668, VkglTestCase_036668_1, VkglTestCase_036668_2);

#define VkglTestCase_036669_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036669_2 "its_mixed.rgba32i_rgba_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036669, VkglTestCase_036669_1, VkglTestCase_036669_2);

#define VkglTestCase_036670_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036670_2 "mixed.rgba32i_rgba_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036670, VkglTestCase_036670_1, VkglTestCase_036670_2);

#define VkglTestCase_036671_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036671_2 "ixed.rgba32i_rgba_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036671, VkglTestCase_036671_1, VkglTestCase_036671_2);

#define VkglTestCase_036672_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036672_2 "ixed.rgba32i_rgba_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036672, VkglTestCase_036672_1, VkglTestCase_036672_2);

#define VkglTestCase_036673_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036673_2 "mixed.rgba32i_rgba_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036673, VkglTestCase_036673_1, VkglTestCase_036673_2);

#define VkglTestCase_036674_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036674_2 "d.rgba32i_rgba_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036674, VkglTestCase_036674_1, VkglTestCase_036674_2);

#define VkglTestCase_036675_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036675_2 "_mixed.rgba32i_rgba_astc_10x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036675, VkglTestCase_036675_1, VkglTestCase_036675_2);

#define VkglTestCase_036676_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036676_2 "_mixed.rgba32i_rgba_astc_10x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036676, VkglTestCase_036676_1, VkglTestCase_036676_2);

#define VkglTestCase_036677_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036677_2 "s_mixed.rgba32i_rgba_astc_10x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036677, VkglTestCase_036677_1, VkglTestCase_036677_2);

#define VkglTestCase_036678_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036678_2 "xed.rgba32i_rgba_astc_10x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036678, VkglTestCase_036678_1, VkglTestCase_036678_2);
