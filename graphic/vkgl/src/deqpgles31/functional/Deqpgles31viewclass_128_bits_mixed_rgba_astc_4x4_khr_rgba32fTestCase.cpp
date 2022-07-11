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

#define VkglTestCase_034139_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034139_2 "ts_mixed.rgba_astc_4x4_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034139, VkglTestCase_034139_1, VkglTestCase_034139_2);

#define VkglTestCase_034140_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034140_2 "ts_mixed.rgba_astc_4x4_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034140, VkglTestCase_034140_1, VkglTestCase_034140_2);

#define VkglTestCase_034141_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034141_2 "its_mixed.rgba_astc_4x4_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034141, VkglTestCase_034141_1, VkglTestCase_034141_2);

#define VkglTestCase_034142_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034142_2 "mixed.rgba_astc_4x4_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034142, VkglTestCase_034142_1, VkglTestCase_034142_2);

#define VkglTestCase_034143_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034143_2 "ts_mixed.rgba_astc_4x4_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034143, VkglTestCase_034143_1, VkglTestCase_034143_2);

#define VkglTestCase_034144_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034144_2 "ts_mixed.rgba_astc_4x4_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034144, VkglTestCase_034144_1, VkglTestCase_034144_2);

#define VkglTestCase_034145_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034145_2 "its_mixed.rgba_astc_4x4_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034145, VkglTestCase_034145_1, VkglTestCase_034145_2);

#define VkglTestCase_034146_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034146_2 "mixed.rgba_astc_4x4_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034146, VkglTestCase_034146_1, VkglTestCase_034146_2);

#define VkglTestCase_034147_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034147_2 "its_mixed.rgba_astc_4x4_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034147, VkglTestCase_034147_1, VkglTestCase_034147_2);

#define VkglTestCase_034148_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034148_2 "its_mixed.rgba_astc_4x4_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034148, VkglTestCase_034148_1, VkglTestCase_034148_2);

#define VkglTestCase_034149_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034149_2 "bits_mixed.rgba_astc_4x4_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034149, VkglTestCase_034149_1, VkglTestCase_034149_2);

#define VkglTestCase_034150_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034150_2 "_mixed.rgba_astc_4x4_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034150, VkglTestCase_034150_1, VkglTestCase_034150_2);

#define VkglTestCase_034151_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034151_2 "mixed.rgba_astc_4x4_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034151, VkglTestCase_034151_1, VkglTestCase_034151_2);

#define VkglTestCase_034152_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034152_2 "mixed.rgba_astc_4x4_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034152, VkglTestCase_034152_1, VkglTestCase_034152_2);

#define VkglTestCase_034153_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034153_2 "_mixed.rgba_astc_4x4_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034153, VkglTestCase_034153_1, VkglTestCase_034153_2);

#define VkglTestCase_034154_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034154_2 "ed.rgba_astc_4x4_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034154, VkglTestCase_034154_1, VkglTestCase_034154_2);
