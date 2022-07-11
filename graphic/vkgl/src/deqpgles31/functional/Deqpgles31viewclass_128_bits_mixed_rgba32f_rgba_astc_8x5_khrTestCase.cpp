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

#define VkglTestCase_034283_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034283_2 "ts_mixed.rgba32f_rgba_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034283, VkglTestCase_034283_1, VkglTestCase_034283_2);

#define VkglTestCase_034284_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034284_2 "ts_mixed.rgba32f_rgba_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034284, VkglTestCase_034284_1, VkglTestCase_034284_2);

#define VkglTestCase_034285_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034285_2 "its_mixed.rgba32f_rgba_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034285, VkglTestCase_034285_1, VkglTestCase_034285_2);

#define VkglTestCase_034286_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034286_2 "mixed.rgba32f_rgba_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034286, VkglTestCase_034286_1, VkglTestCase_034286_2);

#define VkglTestCase_034287_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034287_2 "ts_mixed.rgba32f_rgba_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034287, VkglTestCase_034287_1, VkglTestCase_034287_2);

#define VkglTestCase_034288_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034288_2 "ts_mixed.rgba32f_rgba_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034288, VkglTestCase_034288_1, VkglTestCase_034288_2);

#define VkglTestCase_034289_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034289_2 "its_mixed.rgba32f_rgba_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034289, VkglTestCase_034289_1, VkglTestCase_034289_2);

#define VkglTestCase_034290_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034290_2 "mixed.rgba32f_rgba_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034290, VkglTestCase_034290_1, VkglTestCase_034290_2);

#define VkglTestCase_034291_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034291_2 "its_mixed.rgba32f_rgba_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034291, VkglTestCase_034291_1, VkglTestCase_034291_2);

#define VkglTestCase_034292_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034292_2 "its_mixed.rgba32f_rgba_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034292, VkglTestCase_034292_1, VkglTestCase_034292_2);

#define VkglTestCase_034293_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034293_2 "bits_mixed.rgba32f_rgba_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034293, VkglTestCase_034293_1, VkglTestCase_034293_2);

#define VkglTestCase_034294_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034294_2 "_mixed.rgba32f_rgba_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034294, VkglTestCase_034294_1, VkglTestCase_034294_2);

#define VkglTestCase_034295_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034295_2 "mixed.rgba32f_rgba_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034295, VkglTestCase_034295_1, VkglTestCase_034295_2);

#define VkglTestCase_034296_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034296_2 "mixed.rgba32f_rgba_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034296, VkglTestCase_034296_1, VkglTestCase_034296_2);

#define VkglTestCase_034297_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034297_2 "_mixed.rgba32f_rgba_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034297, VkglTestCase_034297_1, VkglTestCase_034297_2);

#define VkglTestCase_034298_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034298_2 "ed.rgba32f_rgba_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034298, VkglTestCase_034298_1, VkglTestCase_034298_2);
