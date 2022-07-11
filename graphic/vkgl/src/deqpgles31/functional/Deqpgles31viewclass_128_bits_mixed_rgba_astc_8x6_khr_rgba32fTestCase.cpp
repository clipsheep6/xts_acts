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

#define VkglTestCase_034331_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034331_2 "ts_mixed.rgba_astc_8x6_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034331, VkglTestCase_034331_1, VkglTestCase_034331_2);

#define VkglTestCase_034332_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034332_2 "ts_mixed.rgba_astc_8x6_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034332, VkglTestCase_034332_1, VkglTestCase_034332_2);

#define VkglTestCase_034333_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034333_2 "its_mixed.rgba_astc_8x6_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034333, VkglTestCase_034333_1, VkglTestCase_034333_2);

#define VkglTestCase_034334_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034334_2 "mixed.rgba_astc_8x6_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034334, VkglTestCase_034334_1, VkglTestCase_034334_2);

#define VkglTestCase_034335_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034335_2 "ts_mixed.rgba_astc_8x6_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034335, VkglTestCase_034335_1, VkglTestCase_034335_2);

#define VkglTestCase_034336_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034336_2 "ts_mixed.rgba_astc_8x6_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034336, VkglTestCase_034336_1, VkglTestCase_034336_2);

#define VkglTestCase_034337_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034337_2 "its_mixed.rgba_astc_8x6_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034337, VkglTestCase_034337_1, VkglTestCase_034337_2);

#define VkglTestCase_034338_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034338_2 "mixed.rgba_astc_8x6_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034338, VkglTestCase_034338_1, VkglTestCase_034338_2);

#define VkglTestCase_034339_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034339_2 "its_mixed.rgba_astc_8x6_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034339, VkglTestCase_034339_1, VkglTestCase_034339_2);

#define VkglTestCase_034340_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034340_2 "its_mixed.rgba_astc_8x6_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034340, VkglTestCase_034340_1, VkglTestCase_034340_2);

#define VkglTestCase_034341_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034341_2 "bits_mixed.rgba_astc_8x6_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034341, VkglTestCase_034341_1, VkglTestCase_034341_2);

#define VkglTestCase_034342_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034342_2 "_mixed.rgba_astc_8x6_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034342, VkglTestCase_034342_1, VkglTestCase_034342_2);

#define VkglTestCase_034343_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034343_2 "mixed.rgba_astc_8x6_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034343, VkglTestCase_034343_1, VkglTestCase_034343_2);

#define VkglTestCase_034344_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034344_2 "mixed.rgba_astc_8x6_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034344, VkglTestCase_034344_1, VkglTestCase_034344_2);

#define VkglTestCase_034345_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034345_2 "_mixed.rgba_astc_8x6_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034345, VkglTestCase_034345_1, VkglTestCase_034345_2);

#define VkglTestCase_034346_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034346_2 "ed.rgba_astc_8x6_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034346, VkglTestCase_034346_1, VkglTestCase_034346_2);
