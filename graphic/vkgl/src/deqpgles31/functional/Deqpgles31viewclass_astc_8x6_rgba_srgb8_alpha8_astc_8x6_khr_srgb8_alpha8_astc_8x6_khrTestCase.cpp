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

#define VkglTestCase_033595_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.sr"
#define VkglTestCase_033595_2 "gb8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033595, VkglTestCase_033595_1, VkglTestCase_033595_2);

#define VkglTestCase_033596_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.sr"
#define VkglTestCase_033596_2 "gb8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033596, VkglTestCase_033596_1, VkglTestCase_033596_2);

#define VkglTestCase_033597_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.s"
#define VkglTestCase_033597_2 "rgb8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033597, VkglTestCase_033597_1, VkglTestCase_033597_2);

#define VkglTestCase_033598_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.srgb8"
#define VkglTestCase_033598_2 "_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033598, VkglTestCase_033598_1, VkglTestCase_033598_2);

#define VkglTestCase_033599_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.sr"
#define VkglTestCase_033599_2 "gb8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033599, VkglTestCase_033599_1, VkglTestCase_033599_2);

#define VkglTestCase_033600_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.sr"
#define VkglTestCase_033600_2 "gb8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033600, VkglTestCase_033600_1, VkglTestCase_033600_2);

#define VkglTestCase_033601_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.s"
#define VkglTestCase_033601_2 "rgb8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033601, VkglTestCase_033601_1, VkglTestCase_033601_2);

#define VkglTestCase_033602_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.srgb8"
#define VkglTestCase_033602_2 "_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033602, VkglTestCase_033602_1, VkglTestCase_033602_2);

#define VkglTestCase_033603_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.s"
#define VkglTestCase_033603_2 "rgb8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033603, VkglTestCase_033603_1, VkglTestCase_033603_2);

#define VkglTestCase_033604_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.s"
#define VkglTestCase_033604_2 "rgb8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033604, VkglTestCase_033604_1, VkglTestCase_033604_2);

#define VkglTestCase_033605_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba."
#define VkglTestCase_033605_2 "srgb8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033605, VkglTestCase_033605_1, VkglTestCase_033605_2);

#define VkglTestCase_033606_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.srgb"
#define VkglTestCase_033606_2 "8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033606, VkglTestCase_033606_1, VkglTestCase_033606_2);

#define VkglTestCase_033607_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.srgb8"
#define VkglTestCase_033607_2 "_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033607, VkglTestCase_033607_1, VkglTestCase_033607_2);

#define VkglTestCase_033608_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.srgb8"
#define VkglTestCase_033608_2 "_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033608, VkglTestCase_033608_1, VkglTestCase_033608_2);

#define VkglTestCase_033609_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.srgb"
#define VkglTestCase_033609_2 "8_alpha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033609, VkglTestCase_033609_1, VkglTestCase_033609_2);

#define VkglTestCase_033610_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.srgb8_al"
#define VkglTestCase_033610_2 "pha8_astc_8x6_khr_srgb8_alpha8_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033610, VkglTestCase_033610_1, VkglTestCase_033610_2);
