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

#define VkglTestCase_033723_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srg"
#define VkglTestCase_033723_2 "b8_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033723, VkglTestCase_033723_1, VkglTestCase_033723_2);

#define VkglTestCase_033724_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srg"
#define VkglTestCase_033724_2 "b8_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033724, VkglTestCase_033724_1, VkglTestCase_033724_2);

#define VkglTestCase_033725_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.sr"
#define VkglTestCase_033725_2 "gb8_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033725, VkglTestCase_033725_1, VkglTestCase_033725_2);

#define VkglTestCase_033726_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srgb8_"
#define VkglTestCase_033726_2 "alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033726, VkglTestCase_033726_1, VkglTestCase_033726_2);

#define VkglTestCase_033727_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srg"
#define VkglTestCase_033727_2 "b8_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033727, VkglTestCase_033727_1, VkglTestCase_033727_2);

#define VkglTestCase_033728_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srg"
#define VkglTestCase_033728_2 "b8_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033728, VkglTestCase_033728_1, VkglTestCase_033728_2);

#define VkglTestCase_033729_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.sr"
#define VkglTestCase_033729_2 "gb8_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033729, VkglTestCase_033729_1, VkglTestCase_033729_2);

#define VkglTestCase_033730_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srgb8_"
#define VkglTestCase_033730_2 "alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033730, VkglTestCase_033730_1, VkglTestCase_033730_2);

#define VkglTestCase_033731_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.sr"
#define VkglTestCase_033731_2 "gb8_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033731, VkglTestCase_033731_1, VkglTestCase_033731_2);

#define VkglTestCase_033732_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.sr"
#define VkglTestCase_033732_2 "gb8_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033732, VkglTestCase_033732_1, VkglTestCase_033732_2);

#define VkglTestCase_033733_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.s"
#define VkglTestCase_033733_2 "rgb8_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033733, VkglTestCase_033733_1, VkglTestCase_033733_2);

#define VkglTestCase_033734_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srgb8"
#define VkglTestCase_033734_2 "_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033734, VkglTestCase_033734_1, VkglTestCase_033734_2);

#define VkglTestCase_033735_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srgb8_"
#define VkglTestCase_033735_2 "alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033735, VkglTestCase_033735_1, VkglTestCase_033735_2);

#define VkglTestCase_033736_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srgb8_"
#define VkglTestCase_033736_2 "alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033736, VkglTestCase_033736_1, VkglTestCase_033736_2);

#define VkglTestCase_033737_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srgb8"
#define VkglTestCase_033737_2 "_alpha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033737, VkglTestCase_033737_1, VkglTestCase_033737_2);

#define VkglTestCase_033738_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.srgb8_alp"
#define VkglTestCase_033738_2 "ha8_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033738, VkglTestCase_033738_1, VkglTestCase_033738_2);
