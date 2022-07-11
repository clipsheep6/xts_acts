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

#define VkglTestCase_034123_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034123_2 "ts_mixed.rgba32f_rgba_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034123, VkglTestCase_034123_1, VkglTestCase_034123_2);

#define VkglTestCase_034124_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034124_2 "ts_mixed.rgba32f_rgba_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034124, VkglTestCase_034124_1, VkglTestCase_034124_2);

#define VkglTestCase_034125_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034125_2 "its_mixed.rgba32f_rgba_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034125, VkglTestCase_034125_1, VkglTestCase_034125_2);

#define VkglTestCase_034126_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034126_2 "mixed.rgba32f_rgba_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034126, VkglTestCase_034126_1, VkglTestCase_034126_2);

#define VkglTestCase_034127_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034127_2 "ts_mixed.rgba32f_rgba_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034127, VkglTestCase_034127_1, VkglTestCase_034127_2);

#define VkglTestCase_034128_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034128_2 "ts_mixed.rgba32f_rgba_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034128, VkglTestCase_034128_1, VkglTestCase_034128_2);

#define VkglTestCase_034129_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034129_2 "its_mixed.rgba32f_rgba_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034129, VkglTestCase_034129_1, VkglTestCase_034129_2);

#define VkglTestCase_034130_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034130_2 "mixed.rgba32f_rgba_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034130, VkglTestCase_034130_1, VkglTestCase_034130_2);

#define VkglTestCase_034131_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034131_2 "its_mixed.rgba32f_rgba_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034131, VkglTestCase_034131_1, VkglTestCase_034131_2);

#define VkglTestCase_034132_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034132_2 "its_mixed.rgba32f_rgba_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034132, VkglTestCase_034132_1, VkglTestCase_034132_2);

#define VkglTestCase_034133_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034133_2 "bits_mixed.rgba32f_rgba_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034133, VkglTestCase_034133_1, VkglTestCase_034133_2);

#define VkglTestCase_034134_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034134_2 "_mixed.rgba32f_rgba_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034134, VkglTestCase_034134_1, VkglTestCase_034134_2);

#define VkglTestCase_034135_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034135_2 "mixed.rgba32f_rgba_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034135, VkglTestCase_034135_1, VkglTestCase_034135_2);

#define VkglTestCase_034136_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034136_2 "mixed.rgba32f_rgba_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034136, VkglTestCase_034136_1, VkglTestCase_034136_2);

#define VkglTestCase_034137_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034137_2 "_mixed.rgba32f_rgba_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034137, VkglTestCase_034137_1, VkglTestCase_034137_2);

#define VkglTestCase_034138_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034138_2 "ed.rgba32f_rgba_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034138, VkglTestCase_034138_1, VkglTestCase_034138_2);
