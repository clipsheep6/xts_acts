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

#define VkglTestCase_034235_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034235_2 "ts_mixed.rgba_astc_6x5_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034235, VkglTestCase_034235_1, VkglTestCase_034235_2);

#define VkglTestCase_034236_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034236_2 "ts_mixed.rgba_astc_6x5_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034236, VkglTestCase_034236_1, VkglTestCase_034236_2);

#define VkglTestCase_034237_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034237_2 "its_mixed.rgba_astc_6x5_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034237, VkglTestCase_034237_1, VkglTestCase_034237_2);

#define VkglTestCase_034238_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034238_2 "mixed.rgba_astc_6x5_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034238, VkglTestCase_034238_1, VkglTestCase_034238_2);

#define VkglTestCase_034239_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034239_2 "ts_mixed.rgba_astc_6x5_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034239, VkglTestCase_034239_1, VkglTestCase_034239_2);

#define VkglTestCase_034240_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034240_2 "ts_mixed.rgba_astc_6x5_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034240, VkglTestCase_034240_1, VkglTestCase_034240_2);

#define VkglTestCase_034241_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034241_2 "its_mixed.rgba_astc_6x5_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034241, VkglTestCase_034241_1, VkglTestCase_034241_2);

#define VkglTestCase_034242_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034242_2 "mixed.rgba_astc_6x5_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034242, VkglTestCase_034242_1, VkglTestCase_034242_2);

#define VkglTestCase_034243_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034243_2 "its_mixed.rgba_astc_6x5_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034243, VkglTestCase_034243_1, VkglTestCase_034243_2);

#define VkglTestCase_034244_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034244_2 "its_mixed.rgba_astc_6x5_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034244, VkglTestCase_034244_1, VkglTestCase_034244_2);

#define VkglTestCase_034245_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034245_2 "bits_mixed.rgba_astc_6x5_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034245, VkglTestCase_034245_1, VkglTestCase_034245_2);

#define VkglTestCase_034246_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034246_2 "_mixed.rgba_astc_6x5_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034246, VkglTestCase_034246_1, VkglTestCase_034246_2);

#define VkglTestCase_034247_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034247_2 "mixed.rgba_astc_6x5_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034247, VkglTestCase_034247_1, VkglTestCase_034247_2);

#define VkglTestCase_034248_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034248_2 "mixed.rgba_astc_6x5_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034248, VkglTestCase_034248_1, VkglTestCase_034248_2);

#define VkglTestCase_034249_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034249_2 "_mixed.rgba_astc_6x5_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034249, VkglTestCase_034249_1, VkglTestCase_034249_2);

#define VkglTestCase_034250_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034250_2 "ed.rgba_astc_6x5_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034250, VkglTestCase_034250_1, VkglTestCase_034250_2);
