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

#define VkglTestCase_034395_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034395_2 "s_mixed.rgba_astc_10x5_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034395, VkglTestCase_034395_1, VkglTestCase_034395_2);

#define VkglTestCase_034396_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034396_2 "s_mixed.rgba_astc_10x5_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034396, VkglTestCase_034396_1, VkglTestCase_034396_2);

#define VkglTestCase_034397_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034397_2 "ts_mixed.rgba_astc_10x5_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034397, VkglTestCase_034397_1, VkglTestCase_034397_2);

#define VkglTestCase_034398_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034398_2 "ixed.rgba_astc_10x5_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034398, VkglTestCase_034398_1, VkglTestCase_034398_2);

#define VkglTestCase_034399_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034399_2 "s_mixed.rgba_astc_10x5_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034399, VkglTestCase_034399_1, VkglTestCase_034399_2);

#define VkglTestCase_034400_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034400_2 "s_mixed.rgba_astc_10x5_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034400, VkglTestCase_034400_1, VkglTestCase_034400_2);

#define VkglTestCase_034401_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034401_2 "ts_mixed.rgba_astc_10x5_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034401, VkglTestCase_034401_1, VkglTestCase_034401_2);

#define VkglTestCase_034402_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034402_2 "ixed.rgba_astc_10x5_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034402, VkglTestCase_034402_1, VkglTestCase_034402_2);

#define VkglTestCase_034403_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034403_2 "ts_mixed.rgba_astc_10x5_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034403, VkglTestCase_034403_1, VkglTestCase_034403_2);

#define VkglTestCase_034404_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034404_2 "ts_mixed.rgba_astc_10x5_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034404, VkglTestCase_034404_1, VkglTestCase_034404_2);

#define VkglTestCase_034405_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034405_2 "its_mixed.rgba_astc_10x5_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034405, VkglTestCase_034405_1, VkglTestCase_034405_2);

#define VkglTestCase_034406_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034406_2 "mixed.rgba_astc_10x5_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034406, VkglTestCase_034406_1, VkglTestCase_034406_2);

#define VkglTestCase_034407_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034407_2 "ixed.rgba_astc_10x5_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034407, VkglTestCase_034407_1, VkglTestCase_034407_2);

#define VkglTestCase_034408_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034408_2 "ixed.rgba_astc_10x5_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034408, VkglTestCase_034408_1, VkglTestCase_034408_2);

#define VkglTestCase_034409_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034409_2 "mixed.rgba_astc_10x5_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034409, VkglTestCase_034409_1, VkglTestCase_034409_2);

#define VkglTestCase_034410_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034410_2 "d.rgba_astc_10x5_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034410, VkglTestCase_034410_1, VkglTestCase_034410_2);
