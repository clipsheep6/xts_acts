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

#define VkglTestCase_034315_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034315_2 "ts_mixed.rgba32f_rgba_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034315, VkglTestCase_034315_1, VkglTestCase_034315_2);

#define VkglTestCase_034316_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034316_2 "ts_mixed.rgba32f_rgba_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034316, VkglTestCase_034316_1, VkglTestCase_034316_2);

#define VkglTestCase_034317_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034317_2 "its_mixed.rgba32f_rgba_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034317, VkglTestCase_034317_1, VkglTestCase_034317_2);

#define VkglTestCase_034318_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034318_2 "mixed.rgba32f_rgba_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034318, VkglTestCase_034318_1, VkglTestCase_034318_2);

#define VkglTestCase_034319_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034319_2 "ts_mixed.rgba32f_rgba_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034319, VkglTestCase_034319_1, VkglTestCase_034319_2);

#define VkglTestCase_034320_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034320_2 "ts_mixed.rgba32f_rgba_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034320, VkglTestCase_034320_1, VkglTestCase_034320_2);

#define VkglTestCase_034321_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034321_2 "its_mixed.rgba32f_rgba_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034321, VkglTestCase_034321_1, VkglTestCase_034321_2);

#define VkglTestCase_034322_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034322_2 "mixed.rgba32f_rgba_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034322, VkglTestCase_034322_1, VkglTestCase_034322_2);

#define VkglTestCase_034323_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034323_2 "its_mixed.rgba32f_rgba_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034323, VkglTestCase_034323_1, VkglTestCase_034323_2);

#define VkglTestCase_034324_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034324_2 "its_mixed.rgba32f_rgba_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034324, VkglTestCase_034324_1, VkglTestCase_034324_2);

#define VkglTestCase_034325_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034325_2 "bits_mixed.rgba32f_rgba_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034325, VkglTestCase_034325_1, VkglTestCase_034325_2);

#define VkglTestCase_034326_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034326_2 "_mixed.rgba32f_rgba_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034326, VkglTestCase_034326_1, VkglTestCase_034326_2);

#define VkglTestCase_034327_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034327_2 "mixed.rgba32f_rgba_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034327, VkglTestCase_034327_1, VkglTestCase_034327_2);

#define VkglTestCase_034328_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034328_2 "mixed.rgba32f_rgba_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034328, VkglTestCase_034328_1, VkglTestCase_034328_2);

#define VkglTestCase_034329_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034329_2 "_mixed.rgba32f_rgba_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034329, VkglTestCase_034329_1, VkglTestCase_034329_2);

#define VkglTestCase_034330_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034330_2 "ed.rgba32f_rgba_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034330, VkglTestCase_034330_1, VkglTestCase_034330_2);
