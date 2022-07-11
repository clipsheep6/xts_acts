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

#define VkglTestCase_034155_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034155_2 "ts_mixed.rgba32f_rgba_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034155, VkglTestCase_034155_1, VkglTestCase_034155_2);

#define VkglTestCase_034156_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034156_2 "ts_mixed.rgba32f_rgba_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034156, VkglTestCase_034156_1, VkglTestCase_034156_2);

#define VkglTestCase_034157_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034157_2 "its_mixed.rgba32f_rgba_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034157, VkglTestCase_034157_1, VkglTestCase_034157_2);

#define VkglTestCase_034158_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034158_2 "mixed.rgba32f_rgba_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034158, VkglTestCase_034158_1, VkglTestCase_034158_2);

#define VkglTestCase_034159_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034159_2 "ts_mixed.rgba32f_rgba_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034159, VkglTestCase_034159_1, VkglTestCase_034159_2);

#define VkglTestCase_034160_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034160_2 "ts_mixed.rgba32f_rgba_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034160, VkglTestCase_034160_1, VkglTestCase_034160_2);

#define VkglTestCase_034161_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034161_2 "its_mixed.rgba32f_rgba_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034161, VkglTestCase_034161_1, VkglTestCase_034161_2);

#define VkglTestCase_034162_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034162_2 "mixed.rgba32f_rgba_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034162, VkglTestCase_034162_1, VkglTestCase_034162_2);

#define VkglTestCase_034163_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034163_2 "its_mixed.rgba32f_rgba_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034163, VkglTestCase_034163_1, VkglTestCase_034163_2);

#define VkglTestCase_034164_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034164_2 "its_mixed.rgba32f_rgba_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034164, VkglTestCase_034164_1, VkglTestCase_034164_2);

#define VkglTestCase_034165_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034165_2 "bits_mixed.rgba32f_rgba_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034165, VkglTestCase_034165_1, VkglTestCase_034165_2);

#define VkglTestCase_034166_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034166_2 "_mixed.rgba32f_rgba_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034166, VkglTestCase_034166_1, VkglTestCase_034166_2);

#define VkglTestCase_034167_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034167_2 "mixed.rgba32f_rgba_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034167, VkglTestCase_034167_1, VkglTestCase_034167_2);

#define VkglTestCase_034168_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034168_2 "mixed.rgba32f_rgba_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034168, VkglTestCase_034168_1, VkglTestCase_034168_2);

#define VkglTestCase_034169_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034169_2 "_mixed.rgba32f_rgba_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034169, VkglTestCase_034169_1, VkglTestCase_034169_2);

#define VkglTestCase_034170_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034170_2 "ed.rgba32f_rgba_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034170, VkglTestCase_034170_1, VkglTestCase_034170_2);
