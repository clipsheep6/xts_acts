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

#define VkglTestCase_034539_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034539_2 "s_mixed.rgba32f_rgba_astc_12x12_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034539, VkglTestCase_034539_1, VkglTestCase_034539_2);

#define VkglTestCase_034540_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034540_2 "s_mixed.rgba32f_rgba_astc_12x12_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034540, VkglTestCase_034540_1, VkglTestCase_034540_2);

#define VkglTestCase_034541_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034541_2 "ts_mixed.rgba32f_rgba_astc_12x12_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034541, VkglTestCase_034541_1, VkglTestCase_034541_2);

#define VkglTestCase_034542_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034542_2 "ixed.rgba32f_rgba_astc_12x12_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034542, VkglTestCase_034542_1, VkglTestCase_034542_2);

#define VkglTestCase_034543_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034543_2 "s_mixed.rgba32f_rgba_astc_12x12_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034543, VkglTestCase_034543_1, VkglTestCase_034543_2);

#define VkglTestCase_034544_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034544_2 "s_mixed.rgba32f_rgba_astc_12x12_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034544, VkglTestCase_034544_1, VkglTestCase_034544_2);

#define VkglTestCase_034545_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034545_2 "ts_mixed.rgba32f_rgba_astc_12x12_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034545, VkglTestCase_034545_1, VkglTestCase_034545_2);

#define VkglTestCase_034546_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034546_2 "ixed.rgba32f_rgba_astc_12x12_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034546, VkglTestCase_034546_1, VkglTestCase_034546_2);

#define VkglTestCase_034547_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034547_2 "ts_mixed.rgba32f_rgba_astc_12x12_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034547, VkglTestCase_034547_1, VkglTestCase_034547_2);

#define VkglTestCase_034548_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034548_2 "ts_mixed.rgba32f_rgba_astc_12x12_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034548, VkglTestCase_034548_1, VkglTestCase_034548_2);

#define VkglTestCase_034549_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034549_2 "its_mixed.rgba32f_rgba_astc_12x12_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034549, VkglTestCase_034549_1, VkglTestCase_034549_2);

#define VkglTestCase_034550_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034550_2 "mixed.rgba32f_rgba_astc_12x12_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034550, VkglTestCase_034550_1, VkglTestCase_034550_2);

#define VkglTestCase_034551_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034551_2 "ixed.rgba32f_rgba_astc_12x12_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034551, VkglTestCase_034551_1, VkglTestCase_034551_2);

#define VkglTestCase_034552_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034552_2 "ixed.rgba32f_rgba_astc_12x12_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034552, VkglTestCase_034552_1, VkglTestCase_034552_2);

#define VkglTestCase_034553_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034553_2 "mixed.rgba32f_rgba_astc_12x12_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034553, VkglTestCase_034553_1, VkglTestCase_034553_2);

#define VkglTestCase_034554_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034554_2 "d.rgba32f_rgba_astc_12x12_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034554, VkglTestCase_034554_1, VkglTestCase_034554_2);
