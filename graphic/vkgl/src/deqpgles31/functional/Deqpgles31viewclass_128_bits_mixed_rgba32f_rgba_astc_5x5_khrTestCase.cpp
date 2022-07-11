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

#define VkglTestCase_034187_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034187_2 "ts_mixed.rgba32f_rgba_astc_5x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034187, VkglTestCase_034187_1, VkglTestCase_034187_2);

#define VkglTestCase_034188_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034188_2 "ts_mixed.rgba32f_rgba_astc_5x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034188, VkglTestCase_034188_1, VkglTestCase_034188_2);

#define VkglTestCase_034189_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034189_2 "its_mixed.rgba32f_rgba_astc_5x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034189, VkglTestCase_034189_1, VkglTestCase_034189_2);

#define VkglTestCase_034190_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034190_2 "mixed.rgba32f_rgba_astc_5x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034190, VkglTestCase_034190_1, VkglTestCase_034190_2);

#define VkglTestCase_034191_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034191_2 "ts_mixed.rgba32f_rgba_astc_5x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034191, VkglTestCase_034191_1, VkglTestCase_034191_2);

#define VkglTestCase_034192_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034192_2 "ts_mixed.rgba32f_rgba_astc_5x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034192, VkglTestCase_034192_1, VkglTestCase_034192_2);

#define VkglTestCase_034193_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034193_2 "its_mixed.rgba32f_rgba_astc_5x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034193, VkglTestCase_034193_1, VkglTestCase_034193_2);

#define VkglTestCase_034194_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034194_2 "mixed.rgba32f_rgba_astc_5x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034194, VkglTestCase_034194_1, VkglTestCase_034194_2);

#define VkglTestCase_034195_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034195_2 "its_mixed.rgba32f_rgba_astc_5x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034195, VkglTestCase_034195_1, VkglTestCase_034195_2);

#define VkglTestCase_034196_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034196_2 "its_mixed.rgba32f_rgba_astc_5x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034196, VkglTestCase_034196_1, VkglTestCase_034196_2);

#define VkglTestCase_034197_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034197_2 "bits_mixed.rgba32f_rgba_astc_5x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034197, VkglTestCase_034197_1, VkglTestCase_034197_2);

#define VkglTestCase_034198_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034198_2 "_mixed.rgba32f_rgba_astc_5x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034198, VkglTestCase_034198_1, VkglTestCase_034198_2);

#define VkglTestCase_034199_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034199_2 "mixed.rgba32f_rgba_astc_5x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034199, VkglTestCase_034199_1, VkglTestCase_034199_2);

#define VkglTestCase_034200_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034200_2 "mixed.rgba32f_rgba_astc_5x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034200, VkglTestCase_034200_1, VkglTestCase_034200_2);

#define VkglTestCase_034201_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034201_2 "_mixed.rgba32f_rgba_astc_5x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034201, VkglTestCase_034201_1, VkglTestCase_034201_2);

#define VkglTestCase_034202_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034202_2 "ed.rgba32f_rgba_astc_5x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034202, VkglTestCase_034202_1, VkglTestCase_034202_2);
