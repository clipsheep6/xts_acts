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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031465_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031465_2 "wclass_24_bits.rgb8_snorm_rgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031465, VkglTestCase_031465_1, VkglTestCase_031465_2);

#define VkglTestCase_031466_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031466_2 "wclass_24_bits.rgb8_snorm_rgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031466, VkglTestCase_031466_1, VkglTestCase_031466_2);

#define VkglTestCase_031467_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031467_2 "ewclass_24_bits.rgb8_snorm_rgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031467, VkglTestCase_031467_1, VkglTestCase_031467_2);

#define VkglTestCase_031468_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031468_2 "ass_24_bits.rgb8_snorm_rgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031468, VkglTestCase_031468_1, VkglTestCase_031468_2);

#define VkglTestCase_031469_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031469_2 "lass_24_bits.rgb8_snorm_rgb8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031469, VkglTestCase_031469_1, VkglTestCase_031469_2);

#define VkglTestCase_031470_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031470_2 "wclass_24_bits.rgb8_snorm_rgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031470, VkglTestCase_031470_1, VkglTestCase_031470_2);

#define VkglTestCase_031471_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031471_2 "wclass_24_bits.rgb8_snorm_rgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031471, VkglTestCase_031471_1, VkglTestCase_031471_2);

#define VkglTestCase_031472_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031472_2 "ewclass_24_bits.rgb8_snorm_rgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031472, VkglTestCase_031472_1, VkglTestCase_031472_2);

#define VkglTestCase_031473_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031473_2 "ass_24_bits.rgb8_snorm_rgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031473, VkglTestCase_031473_1, VkglTestCase_031473_2);

#define VkglTestCase_031474_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031474_2 "lass_24_bits.rgb8_snorm_rgb8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031474, VkglTestCase_031474_1, VkglTestCase_031474_2);

#define VkglTestCase_031475_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031475_2 "ewclass_24_bits.rgb8_snorm_rgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031475, VkglTestCase_031475_1, VkglTestCase_031475_2);

#define VkglTestCase_031476_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031476_2 "ewclass_24_bits.rgb8_snorm_rgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031476, VkglTestCase_031476_1, VkglTestCase_031476_2);

#define VkglTestCase_031477_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031477_2 "iewclass_24_bits.rgb8_snorm_rgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031477, VkglTestCase_031477_1, VkglTestCase_031477_2);

#define VkglTestCase_031478_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031478_2 "lass_24_bits.rgb8_snorm_rgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031478, VkglTestCase_031478_1, VkglTestCase_031478_2);

#define VkglTestCase_031479_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031479_2 "class_24_bits.rgb8_snorm_rgb8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031479, VkglTestCase_031479_1, VkglTestCase_031479_2);

#define VkglTestCase_031480_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031480_2 "ass_24_bits.rgb8_snorm_rgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031480, VkglTestCase_031480_1, VkglTestCase_031480_2);

#define VkglTestCase_031481_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031481_2 "ass_24_bits.rgb8_snorm_rgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031481, VkglTestCase_031481_1, VkglTestCase_031481_2);

#define VkglTestCase_031482_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031482_2 "lass_24_bits.rgb8_snorm_rgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031482, VkglTestCase_031482_1, VkglTestCase_031482_2);

#define VkglTestCase_031483_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031483_2 "_24_bits.rgb8_snorm_rgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031483, VkglTestCase_031483_1, VkglTestCase_031483_2);

#define VkglTestCase_031484_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031484_2 "s_24_bits.rgb8_snorm_rgb8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031484, VkglTestCase_031484_1, VkglTestCase_031484_2);
