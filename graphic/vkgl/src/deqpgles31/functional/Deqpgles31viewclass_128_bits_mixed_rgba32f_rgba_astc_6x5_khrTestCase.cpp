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

#define VkglTestCase_034219_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034219_2 "ts_mixed.rgba32f_rgba_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034219, VkglTestCase_034219_1, VkglTestCase_034219_2);

#define VkglTestCase_034220_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034220_2 "ts_mixed.rgba32f_rgba_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034220, VkglTestCase_034220_1, VkglTestCase_034220_2);

#define VkglTestCase_034221_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034221_2 "its_mixed.rgba32f_rgba_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034221, VkglTestCase_034221_1, VkglTestCase_034221_2);

#define VkglTestCase_034222_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034222_2 "mixed.rgba32f_rgba_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034222, VkglTestCase_034222_1, VkglTestCase_034222_2);

#define VkglTestCase_034223_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034223_2 "ts_mixed.rgba32f_rgba_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034223, VkglTestCase_034223_1, VkglTestCase_034223_2);

#define VkglTestCase_034224_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034224_2 "ts_mixed.rgba32f_rgba_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034224, VkglTestCase_034224_1, VkglTestCase_034224_2);

#define VkglTestCase_034225_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034225_2 "its_mixed.rgba32f_rgba_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034225, VkglTestCase_034225_1, VkglTestCase_034225_2);

#define VkglTestCase_034226_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034226_2 "mixed.rgba32f_rgba_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034226, VkglTestCase_034226_1, VkglTestCase_034226_2);

#define VkglTestCase_034227_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034227_2 "its_mixed.rgba32f_rgba_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034227, VkglTestCase_034227_1, VkglTestCase_034227_2);

#define VkglTestCase_034228_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034228_2 "its_mixed.rgba32f_rgba_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034228, VkglTestCase_034228_1, VkglTestCase_034228_2);

#define VkglTestCase_034229_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034229_2 "bits_mixed.rgba32f_rgba_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034229, VkglTestCase_034229_1, VkglTestCase_034229_2);

#define VkglTestCase_034230_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034230_2 "_mixed.rgba32f_rgba_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034230, VkglTestCase_034230_1, VkglTestCase_034230_2);

#define VkglTestCase_034231_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034231_2 "mixed.rgba32f_rgba_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034231, VkglTestCase_034231_1, VkglTestCase_034231_2);

#define VkglTestCase_034232_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034232_2 "mixed.rgba32f_rgba_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034232, VkglTestCase_034232_1, VkglTestCase_034232_2);

#define VkglTestCase_034233_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034233_2 "_mixed.rgba32f_rgba_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034233, VkglTestCase_034233_1, VkglTestCase_034233_2);

#define VkglTestCase_034234_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034234_2 "ed.rgba32f_rgba_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034234, VkglTestCase_034234_1, VkglTestCase_034234_2);
