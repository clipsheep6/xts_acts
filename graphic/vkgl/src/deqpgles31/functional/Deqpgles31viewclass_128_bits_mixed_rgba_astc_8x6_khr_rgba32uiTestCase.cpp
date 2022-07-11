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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035359_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035359_2 "s_mixed.rgba_astc_8x6_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035359, VkglTestCase_035359_1, VkglTestCase_035359_2);

#define VkglTestCase_035360_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035360_2 "s_mixed.rgba_astc_8x6_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035360, VkglTestCase_035360_1, VkglTestCase_035360_2);

#define VkglTestCase_035361_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035361_2 "ts_mixed.rgba_astc_8x6_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035361, VkglTestCase_035361_1, VkglTestCase_035361_2);

#define VkglTestCase_035362_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035362_2 "ixed.rgba_astc_8x6_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035362, VkglTestCase_035362_1, VkglTestCase_035362_2);

#define VkglTestCase_035363_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035363_2 "_mixed.rgba_astc_8x6_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035363, VkglTestCase_035363_1, VkglTestCase_035363_2);

#define VkglTestCase_035364_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035364_2 "s_mixed.rgba_astc_8x6_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035364, VkglTestCase_035364_1, VkglTestCase_035364_2);

#define VkglTestCase_035365_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035365_2 "s_mixed.rgba_astc_8x6_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035365, VkglTestCase_035365_1, VkglTestCase_035365_2);

#define VkglTestCase_035366_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035366_2 "ts_mixed.rgba_astc_8x6_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035366, VkglTestCase_035366_1, VkglTestCase_035366_2);

#define VkglTestCase_035367_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035367_2 "ixed.rgba_astc_8x6_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035367, VkglTestCase_035367_1, VkglTestCase_035367_2);

#define VkglTestCase_035368_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035368_2 "_mixed.rgba_astc_8x6_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035368, VkglTestCase_035368_1, VkglTestCase_035368_2);

#define VkglTestCase_035369_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035369_2 "ts_mixed.rgba_astc_8x6_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035369, VkglTestCase_035369_1, VkglTestCase_035369_2);

#define VkglTestCase_035370_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035370_2 "ts_mixed.rgba_astc_8x6_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035370, VkglTestCase_035370_1, VkglTestCase_035370_2);

#define VkglTestCase_035371_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035371_2 "its_mixed.rgba_astc_8x6_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035371, VkglTestCase_035371_1, VkglTestCase_035371_2);

#define VkglTestCase_035372_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035372_2 "mixed.rgba_astc_8x6_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035372, VkglTestCase_035372_1, VkglTestCase_035372_2);

#define VkglTestCase_035373_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035373_2 "s_mixed.rgba_astc_8x6_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035373, VkglTestCase_035373_1, VkglTestCase_035373_2);

#define VkglTestCase_035374_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035374_2 "ixed.rgba_astc_8x6_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035374, VkglTestCase_035374_1, VkglTestCase_035374_2);

#define VkglTestCase_035375_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035375_2 "ixed.rgba_astc_8x6_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035375, VkglTestCase_035375_1, VkglTestCase_035375_2);

#define VkglTestCase_035376_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035376_2 "mixed.rgba_astc_8x6_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035376, VkglTestCase_035376_1, VkglTestCase_035376_2);

#define VkglTestCase_035377_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035377_2 "d.rgba_astc_8x6_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035377, VkglTestCase_035377_1, VkglTestCase_035377_2);

#define VkglTestCase_035378_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035378_2 "xed.rgba_astc_8x6_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035378, VkglTestCase_035378_1, VkglTestCase_035378_2);
