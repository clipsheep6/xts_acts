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

#define VkglTestCase_033611_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8"
#define VkglTestCase_033611_2 "_rgba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033611, VkglTestCase_033611_1, VkglTestCase_033611_2);

#define VkglTestCase_033612_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8"
#define VkglTestCase_033612_2 "_rgba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033612, VkglTestCase_033612_1, VkglTestCase_033612_2);

#define VkglTestCase_033613_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033613_2 "8_rgba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033613, VkglTestCase_033613_1, VkglTestCase_033613_2);

#define VkglTestCase_033614_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033614_2 "ba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033614, VkglTestCase_033614_1, VkglTestCase_033614_2);

#define VkglTestCase_033615_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8"
#define VkglTestCase_033615_2 "_rgba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033615, VkglTestCase_033615_1, VkglTestCase_033615_2);

#define VkglTestCase_033616_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8"
#define VkglTestCase_033616_2 "_rgba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033616, VkglTestCase_033616_1, VkglTestCase_033616_2);

#define VkglTestCase_033617_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033617_2 "8_rgba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033617, VkglTestCase_033617_1, VkglTestCase_033617_2);

#define VkglTestCase_033618_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033618_2 "ba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033618, VkglTestCase_033618_1, VkglTestCase_033618_2);

#define VkglTestCase_033619_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033619_2 "8_rgba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033619, VkglTestCase_033619_1, VkglTestCase_033619_2);

#define VkglTestCase_033620_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033620_2 "8_rgba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033620, VkglTestCase_033620_1, VkglTestCase_033620_2);

#define VkglTestCase_033621_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8"
#define VkglTestCase_033621_2 "x8_rgba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033621, VkglTestCase_033621_1, VkglTestCase_033621_2);

#define VkglTestCase_033622_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_r"
#define VkglTestCase_033622_2 "gba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033622, VkglTestCase_033622_1, VkglTestCase_033622_2);

#define VkglTestCase_033623_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033623_2 "ba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033623, VkglTestCase_033623_1, VkglTestCase_033623_2);

#define VkglTestCase_033624_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033624_2 "ba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033624, VkglTestCase_033624_1, VkglTestCase_033624_2);

#define VkglTestCase_033625_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_r"
#define VkglTestCase_033625_2 "gba.rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033625, VkglTestCase_033625_1, VkglTestCase_033625_2);

#define VkglTestCase_033626_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba."
#define VkglTestCase_033626_2 "rgba_astc_8x8_khr_rgba_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033626, VkglTestCase_033626_1, VkglTestCase_033626_2);
