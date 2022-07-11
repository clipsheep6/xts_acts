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

#define VkglTestCase_034171_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034171_2 "ts_mixed.rgba_astc_5x4_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034171, VkglTestCase_034171_1, VkglTestCase_034171_2);

#define VkglTestCase_034172_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034172_2 "ts_mixed.rgba_astc_5x4_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034172, VkglTestCase_034172_1, VkglTestCase_034172_2);

#define VkglTestCase_034173_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034173_2 "its_mixed.rgba_astc_5x4_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034173, VkglTestCase_034173_1, VkglTestCase_034173_2);

#define VkglTestCase_034174_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034174_2 "mixed.rgba_astc_5x4_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034174, VkglTestCase_034174_1, VkglTestCase_034174_2);

#define VkglTestCase_034175_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034175_2 "ts_mixed.rgba_astc_5x4_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034175, VkglTestCase_034175_1, VkglTestCase_034175_2);

#define VkglTestCase_034176_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034176_2 "ts_mixed.rgba_astc_5x4_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034176, VkglTestCase_034176_1, VkglTestCase_034176_2);

#define VkglTestCase_034177_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034177_2 "its_mixed.rgba_astc_5x4_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034177, VkglTestCase_034177_1, VkglTestCase_034177_2);

#define VkglTestCase_034178_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034178_2 "mixed.rgba_astc_5x4_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034178, VkglTestCase_034178_1, VkglTestCase_034178_2);

#define VkglTestCase_034179_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034179_2 "its_mixed.rgba_astc_5x4_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034179, VkglTestCase_034179_1, VkglTestCase_034179_2);

#define VkglTestCase_034180_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034180_2 "its_mixed.rgba_astc_5x4_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034180, VkglTestCase_034180_1, VkglTestCase_034180_2);

#define VkglTestCase_034181_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034181_2 "bits_mixed.rgba_astc_5x4_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034181, VkglTestCase_034181_1, VkglTestCase_034181_2);

#define VkglTestCase_034182_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034182_2 "_mixed.rgba_astc_5x4_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034182, VkglTestCase_034182_1, VkglTestCase_034182_2);

#define VkglTestCase_034183_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034183_2 "mixed.rgba_astc_5x4_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034183, VkglTestCase_034183_1, VkglTestCase_034183_2);

#define VkglTestCase_034184_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034184_2 "mixed.rgba_astc_5x4_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034184, VkglTestCase_034184_1, VkglTestCase_034184_2);

#define VkglTestCase_034185_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034185_2 "_mixed.rgba_astc_5x4_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034185, VkglTestCase_034185_1, VkglTestCase_034185_2);

#define VkglTestCase_034186_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034186_2 "ed.rgba_astc_5x4_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034186, VkglTestCase_034186_1, VkglTestCase_034186_2);
