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

#define VkglTestCase_034203_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034203_2 "ts_mixed.rgba_astc_5x5_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034203, VkglTestCase_034203_1, VkglTestCase_034203_2);

#define VkglTestCase_034204_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034204_2 "ts_mixed.rgba_astc_5x5_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034204, VkglTestCase_034204_1, VkglTestCase_034204_2);

#define VkglTestCase_034205_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034205_2 "its_mixed.rgba_astc_5x5_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034205, VkglTestCase_034205_1, VkglTestCase_034205_2);

#define VkglTestCase_034206_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034206_2 "mixed.rgba_astc_5x5_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034206, VkglTestCase_034206_1, VkglTestCase_034206_2);

#define VkglTestCase_034207_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034207_2 "ts_mixed.rgba_astc_5x5_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034207, VkglTestCase_034207_1, VkglTestCase_034207_2);

#define VkglTestCase_034208_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034208_2 "ts_mixed.rgba_astc_5x5_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034208, VkglTestCase_034208_1, VkglTestCase_034208_2);

#define VkglTestCase_034209_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034209_2 "its_mixed.rgba_astc_5x5_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034209, VkglTestCase_034209_1, VkglTestCase_034209_2);

#define VkglTestCase_034210_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034210_2 "mixed.rgba_astc_5x5_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034210, VkglTestCase_034210_1, VkglTestCase_034210_2);

#define VkglTestCase_034211_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034211_2 "its_mixed.rgba_astc_5x5_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034211, VkglTestCase_034211_1, VkglTestCase_034211_2);

#define VkglTestCase_034212_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034212_2 "its_mixed.rgba_astc_5x5_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034212, VkglTestCase_034212_1, VkglTestCase_034212_2);

#define VkglTestCase_034213_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034213_2 "bits_mixed.rgba_astc_5x5_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034213, VkglTestCase_034213_1, VkglTestCase_034213_2);

#define VkglTestCase_034214_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034214_2 "_mixed.rgba_astc_5x5_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034214, VkglTestCase_034214_1, VkglTestCase_034214_2);

#define VkglTestCase_034215_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034215_2 "mixed.rgba_astc_5x5_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034215, VkglTestCase_034215_1, VkglTestCase_034215_2);

#define VkglTestCase_034216_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034216_2 "mixed.rgba_astc_5x5_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034216, VkglTestCase_034216_1, VkglTestCase_034216_2);

#define VkglTestCase_034217_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034217_2 "_mixed.rgba_astc_5x5_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034217, VkglTestCase_034217_1, VkglTestCase_034217_2);

#define VkglTestCase_034218_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034218_2 "ed.rgba_astc_5x5_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034218, VkglTestCase_034218_1, VkglTestCase_034218_2);
