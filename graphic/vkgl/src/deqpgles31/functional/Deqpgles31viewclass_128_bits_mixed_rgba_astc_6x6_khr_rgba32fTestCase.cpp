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

#define VkglTestCase_034267_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034267_2 "ts_mixed.rgba_astc_6x6_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034267, VkglTestCase_034267_1, VkglTestCase_034267_2);

#define VkglTestCase_034268_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034268_2 "ts_mixed.rgba_astc_6x6_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034268, VkglTestCase_034268_1, VkglTestCase_034268_2);

#define VkglTestCase_034269_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034269_2 "its_mixed.rgba_astc_6x6_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034269, VkglTestCase_034269_1, VkglTestCase_034269_2);

#define VkglTestCase_034270_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034270_2 "mixed.rgba_astc_6x6_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034270, VkglTestCase_034270_1, VkglTestCase_034270_2);

#define VkglTestCase_034271_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034271_2 "ts_mixed.rgba_astc_6x6_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034271, VkglTestCase_034271_1, VkglTestCase_034271_2);

#define VkglTestCase_034272_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034272_2 "ts_mixed.rgba_astc_6x6_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034272, VkglTestCase_034272_1, VkglTestCase_034272_2);

#define VkglTestCase_034273_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034273_2 "its_mixed.rgba_astc_6x6_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034273, VkglTestCase_034273_1, VkglTestCase_034273_2);

#define VkglTestCase_034274_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034274_2 "mixed.rgba_astc_6x6_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034274, VkglTestCase_034274_1, VkglTestCase_034274_2);

#define VkglTestCase_034275_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034275_2 "its_mixed.rgba_astc_6x6_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034275, VkglTestCase_034275_1, VkglTestCase_034275_2);

#define VkglTestCase_034276_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034276_2 "its_mixed.rgba_astc_6x6_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034276, VkglTestCase_034276_1, VkglTestCase_034276_2);

#define VkglTestCase_034277_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034277_2 "bits_mixed.rgba_astc_6x6_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034277, VkglTestCase_034277_1, VkglTestCase_034277_2);

#define VkglTestCase_034278_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034278_2 "_mixed.rgba_astc_6x6_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034278, VkglTestCase_034278_1, VkglTestCase_034278_2);

#define VkglTestCase_034279_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034279_2 "mixed.rgba_astc_6x6_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034279, VkglTestCase_034279_1, VkglTestCase_034279_2);

#define VkglTestCase_034280_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034280_2 "mixed.rgba_astc_6x6_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034280, VkglTestCase_034280_1, VkglTestCase_034280_2);

#define VkglTestCase_034281_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034281_2 "_mixed.rgba_astc_6x6_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034281, VkglTestCase_034281_1, VkglTestCase_034281_2);

#define VkglTestCase_034282_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034282_2 "ed.rgba_astc_6x6_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034282, VkglTestCase_034282_1, VkglTestCase_034282_2);
