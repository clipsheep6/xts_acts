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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035239_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035239_2 "s_mixed.rgba_astc_6x5_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035239, VkglTestCase_035239_1, VkglTestCase_035239_2);

#define VkglTestCase_035240_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035240_2 "s_mixed.rgba_astc_6x5_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035240, VkglTestCase_035240_1, VkglTestCase_035240_2);

#define VkglTestCase_035241_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035241_2 "ts_mixed.rgba_astc_6x5_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035241, VkglTestCase_035241_1, VkglTestCase_035241_2);

#define VkglTestCase_035242_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035242_2 "ixed.rgba_astc_6x5_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035242, VkglTestCase_035242_1, VkglTestCase_035242_2);

#define VkglTestCase_035243_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035243_2 "_mixed.rgba_astc_6x5_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035243, VkglTestCase_035243_1, VkglTestCase_035243_2);

#define VkglTestCase_035244_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035244_2 "s_mixed.rgba_astc_6x5_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035244, VkglTestCase_035244_1, VkglTestCase_035244_2);

#define VkglTestCase_035245_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035245_2 "s_mixed.rgba_astc_6x5_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035245, VkglTestCase_035245_1, VkglTestCase_035245_2);

#define VkglTestCase_035246_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035246_2 "ts_mixed.rgba_astc_6x5_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035246, VkglTestCase_035246_1, VkglTestCase_035246_2);

#define VkglTestCase_035247_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035247_2 "ixed.rgba_astc_6x5_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035247, VkglTestCase_035247_1, VkglTestCase_035247_2);

#define VkglTestCase_035248_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035248_2 "_mixed.rgba_astc_6x5_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035248, VkglTestCase_035248_1, VkglTestCase_035248_2);

#define VkglTestCase_035249_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035249_2 "ts_mixed.rgba_astc_6x5_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035249, VkglTestCase_035249_1, VkglTestCase_035249_2);

#define VkglTestCase_035250_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035250_2 "ts_mixed.rgba_astc_6x5_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035250, VkglTestCase_035250_1, VkglTestCase_035250_2);

#define VkglTestCase_035251_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035251_2 "its_mixed.rgba_astc_6x5_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035251, VkglTestCase_035251_1, VkglTestCase_035251_2);

#define VkglTestCase_035252_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035252_2 "mixed.rgba_astc_6x5_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035252, VkglTestCase_035252_1, VkglTestCase_035252_2);

#define VkglTestCase_035253_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035253_2 "s_mixed.rgba_astc_6x5_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035253, VkglTestCase_035253_1, VkglTestCase_035253_2);

#define VkglTestCase_035254_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035254_2 "ixed.rgba_astc_6x5_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035254, VkglTestCase_035254_1, VkglTestCase_035254_2);

#define VkglTestCase_035255_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035255_2 "ixed.rgba_astc_6x5_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035255, VkglTestCase_035255_1, VkglTestCase_035255_2);

#define VkglTestCase_035256_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035256_2 "mixed.rgba_astc_6x5_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035256, VkglTestCase_035256_1, VkglTestCase_035256_2);

#define VkglTestCase_035257_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035257_2 "d.rgba_astc_6x5_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035257, VkglTestCase_035257_1, VkglTestCase_035257_2);

#define VkglTestCase_035258_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035258_2 "xed.rgba_astc_6x5_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035258, VkglTestCase_035258_1, VkglTestCase_035258_2);
