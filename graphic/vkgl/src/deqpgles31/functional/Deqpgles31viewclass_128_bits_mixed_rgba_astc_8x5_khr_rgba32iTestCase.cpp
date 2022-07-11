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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036519_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036519_2 "ts_mixed.rgba_astc_8x5_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036519, VkglTestCase_036519_1, VkglTestCase_036519_2);

#define VkglTestCase_036520_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036520_2 "ts_mixed.rgba_astc_8x5_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036520, VkglTestCase_036520_1, VkglTestCase_036520_2);

#define VkglTestCase_036521_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036521_2 "its_mixed.rgba_astc_8x5_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036521, VkglTestCase_036521_1, VkglTestCase_036521_2);

#define VkglTestCase_036522_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036522_2 "mixed.rgba_astc_8x5_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036522, VkglTestCase_036522_1, VkglTestCase_036522_2);

#define VkglTestCase_036523_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036523_2 "_mixed.rgba_astc_8x5_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036523, VkglTestCase_036523_1, VkglTestCase_036523_2);

#define VkglTestCase_036524_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036524_2 "ts_mixed.rgba_astc_8x5_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036524, VkglTestCase_036524_1, VkglTestCase_036524_2);

#define VkglTestCase_036525_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036525_2 "ts_mixed.rgba_astc_8x5_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036525, VkglTestCase_036525_1, VkglTestCase_036525_2);

#define VkglTestCase_036526_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036526_2 "its_mixed.rgba_astc_8x5_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036526, VkglTestCase_036526_1, VkglTestCase_036526_2);

#define VkglTestCase_036527_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036527_2 "mixed.rgba_astc_8x5_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036527, VkglTestCase_036527_1, VkglTestCase_036527_2);

#define VkglTestCase_036528_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036528_2 "_mixed.rgba_astc_8x5_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036528, VkglTestCase_036528_1, VkglTestCase_036528_2);

#define VkglTestCase_036529_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036529_2 "its_mixed.rgba_astc_8x5_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036529, VkglTestCase_036529_1, VkglTestCase_036529_2);

#define VkglTestCase_036530_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036530_2 "its_mixed.rgba_astc_8x5_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036530, VkglTestCase_036530_1, VkglTestCase_036530_2);

#define VkglTestCase_036531_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036531_2 "bits_mixed.rgba_astc_8x5_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036531, VkglTestCase_036531_1, VkglTestCase_036531_2);

#define VkglTestCase_036532_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036532_2 "_mixed.rgba_astc_8x5_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036532, VkglTestCase_036532_1, VkglTestCase_036532_2);

#define VkglTestCase_036533_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036533_2 "s_mixed.rgba_astc_8x5_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036533, VkglTestCase_036533_1, VkglTestCase_036533_2);

#define VkglTestCase_036534_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036534_2 "mixed.rgba_astc_8x5_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036534, VkglTestCase_036534_1, VkglTestCase_036534_2);

#define VkglTestCase_036535_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036535_2 "mixed.rgba_astc_8x5_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036535, VkglTestCase_036535_1, VkglTestCase_036535_2);

#define VkglTestCase_036536_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036536_2 "_mixed.rgba_astc_8x5_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036536, VkglTestCase_036536_1, VkglTestCase_036536_2);

#define VkglTestCase_036537_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036537_2 "ed.rgba_astc_8x5_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036537, VkglTestCase_036537_1, VkglTestCase_036537_2);

#define VkglTestCase_036538_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036538_2 "xed.rgba_astc_8x5_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036538, VkglTestCase_036538_1, VkglTestCase_036538_2);
