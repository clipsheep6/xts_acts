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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033467_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.sr"
#define VkglTestCase_033467_2 "gb8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033467, VkglTestCase_033467_1, VkglTestCase_033467_2);

#define VkglTestCase_033468_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.sr"
#define VkglTestCase_033468_2 "gb8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033468, VkglTestCase_033468_1, VkglTestCase_033468_2);

#define VkglTestCase_033469_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.s"
#define VkglTestCase_033469_2 "rgb8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033469, VkglTestCase_033469_1, VkglTestCase_033469_2);

#define VkglTestCase_033470_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.srgb8"
#define VkglTestCase_033470_2 "_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033470, VkglTestCase_033470_1, VkglTestCase_033470_2);

#define VkglTestCase_033471_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.sr"
#define VkglTestCase_033471_2 "gb8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033471, VkglTestCase_033471_1, VkglTestCase_033471_2);

#define VkglTestCase_033472_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.sr"
#define VkglTestCase_033472_2 "gb8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033472, VkglTestCase_033472_1, VkglTestCase_033472_2);

#define VkglTestCase_033473_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.s"
#define VkglTestCase_033473_2 "rgb8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033473, VkglTestCase_033473_1, VkglTestCase_033473_2);

#define VkglTestCase_033474_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.srgb8"
#define VkglTestCase_033474_2 "_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033474, VkglTestCase_033474_1, VkglTestCase_033474_2);

#define VkglTestCase_033475_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.s"
#define VkglTestCase_033475_2 "rgb8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033475, VkglTestCase_033475_1, VkglTestCase_033475_2);

#define VkglTestCase_033476_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.s"
#define VkglTestCase_033476_2 "rgb8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033476, VkglTestCase_033476_1, VkglTestCase_033476_2);

#define VkglTestCase_033477_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba."
#define VkglTestCase_033477_2 "srgb8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033477, VkglTestCase_033477_1, VkglTestCase_033477_2);

#define VkglTestCase_033478_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.srgb"
#define VkglTestCase_033478_2 "8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033478, VkglTestCase_033478_1, VkglTestCase_033478_2);

#define VkglTestCase_033479_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.srgb8"
#define VkglTestCase_033479_2 "_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033479, VkglTestCase_033479_1, VkglTestCase_033479_2);

#define VkglTestCase_033480_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.srgb8"
#define VkglTestCase_033480_2 "_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033480, VkglTestCase_033480_1, VkglTestCase_033480_2);

#define VkglTestCase_033481_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.srgb"
#define VkglTestCase_033481_2 "8_alpha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033481, VkglTestCase_033481_1, VkglTestCase_033481_2);

#define VkglTestCase_033482_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.srgb8_al"
#define VkglTestCase_033482_2 "pha8_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033482, VkglTestCase_033482_1, VkglTestCase_033482_2);
