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

#define VkglTestCase_033547_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6"
#define VkglTestCase_033547_2 "_rgba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033547, VkglTestCase_033547_1, VkglTestCase_033547_2);

#define VkglTestCase_033548_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6"
#define VkglTestCase_033548_2 "_rgba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033548, VkglTestCase_033548_1, VkglTestCase_033548_2);

#define VkglTestCase_033549_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033549_2 "6_rgba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033549, VkglTestCase_033549_1, VkglTestCase_033549_2);

#define VkglTestCase_033550_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033550_2 "ba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033550, VkglTestCase_033550_1, VkglTestCase_033550_2);

#define VkglTestCase_033551_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6"
#define VkglTestCase_033551_2 "_rgba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033551, VkglTestCase_033551_1, VkglTestCase_033551_2);

#define VkglTestCase_033552_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6"
#define VkglTestCase_033552_2 "_rgba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033552, VkglTestCase_033552_1, VkglTestCase_033552_2);

#define VkglTestCase_033553_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033553_2 "6_rgba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033553, VkglTestCase_033553_1, VkglTestCase_033553_2);

#define VkglTestCase_033554_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033554_2 "ba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033554, VkglTestCase_033554_1, VkglTestCase_033554_2);

#define VkglTestCase_033555_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033555_2 "6_rgba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033555, VkglTestCase_033555_1, VkglTestCase_033555_2);

#define VkglTestCase_033556_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033556_2 "6_rgba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033556, VkglTestCase_033556_1, VkglTestCase_033556_2);

#define VkglTestCase_033557_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8"
#define VkglTestCase_033557_2 "x6_rgba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033557, VkglTestCase_033557_1, VkglTestCase_033557_2);

#define VkglTestCase_033558_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_r"
#define VkglTestCase_033558_2 "gba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033558, VkglTestCase_033558_1, VkglTestCase_033558_2);

#define VkglTestCase_033559_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033559_2 "ba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033559, VkglTestCase_033559_1, VkglTestCase_033559_2);

#define VkglTestCase_033560_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033560_2 "ba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033560, VkglTestCase_033560_1, VkglTestCase_033560_2);

#define VkglTestCase_033561_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_r"
#define VkglTestCase_033561_2 "gba.rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033561, VkglTestCase_033561_1, VkglTestCase_033561_2);

#define VkglTestCase_033562_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba."
#define VkglTestCase_033562_2 "rgba_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033562, VkglTestCase_033562_1, VkglTestCase_033562_2);
