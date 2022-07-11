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

#define VkglTestCase_034251_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034251_2 "ts_mixed.rgba32f_rgba_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034251, VkglTestCase_034251_1, VkglTestCase_034251_2);

#define VkglTestCase_034252_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034252_2 "ts_mixed.rgba32f_rgba_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034252, VkglTestCase_034252_1, VkglTestCase_034252_2);

#define VkglTestCase_034253_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034253_2 "its_mixed.rgba32f_rgba_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034253, VkglTestCase_034253_1, VkglTestCase_034253_2);

#define VkglTestCase_034254_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034254_2 "mixed.rgba32f_rgba_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034254, VkglTestCase_034254_1, VkglTestCase_034254_2);

#define VkglTestCase_034255_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034255_2 "ts_mixed.rgba32f_rgba_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034255, VkglTestCase_034255_1, VkglTestCase_034255_2);

#define VkglTestCase_034256_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034256_2 "ts_mixed.rgba32f_rgba_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034256, VkglTestCase_034256_1, VkglTestCase_034256_2);

#define VkglTestCase_034257_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034257_2 "its_mixed.rgba32f_rgba_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034257, VkglTestCase_034257_1, VkglTestCase_034257_2);

#define VkglTestCase_034258_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034258_2 "mixed.rgba32f_rgba_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034258, VkglTestCase_034258_1, VkglTestCase_034258_2);

#define VkglTestCase_034259_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034259_2 "its_mixed.rgba32f_rgba_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034259, VkglTestCase_034259_1, VkglTestCase_034259_2);

#define VkglTestCase_034260_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034260_2 "its_mixed.rgba32f_rgba_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034260, VkglTestCase_034260_1, VkglTestCase_034260_2);

#define VkglTestCase_034261_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034261_2 "bits_mixed.rgba32f_rgba_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034261, VkglTestCase_034261_1, VkglTestCase_034261_2);

#define VkglTestCase_034262_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034262_2 "_mixed.rgba32f_rgba_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034262, VkglTestCase_034262_1, VkglTestCase_034262_2);

#define VkglTestCase_034263_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034263_2 "mixed.rgba32f_rgba_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034263, VkglTestCase_034263_1, VkglTestCase_034263_2);

#define VkglTestCase_034264_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034264_2 "mixed.rgba32f_rgba_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034264, VkglTestCase_034264_1, VkglTestCase_034264_2);

#define VkglTestCase_034265_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034265_2 "_mixed.rgba32f_rgba_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034265, VkglTestCase_034265_1, VkglTestCase_034265_2);

#define VkglTestCase_034266_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034266_2 "ed.rgba32f_rgba_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034266, VkglTestCase_034266_1, VkglTestCase_034266_2);
