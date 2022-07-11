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

#define VkglTestCase_034299_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034299_2 "ts_mixed.rgba_astc_8x5_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034299, VkglTestCase_034299_1, VkglTestCase_034299_2);

#define VkglTestCase_034300_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034300_2 "ts_mixed.rgba_astc_8x5_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034300, VkglTestCase_034300_1, VkglTestCase_034300_2);

#define VkglTestCase_034301_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034301_2 "its_mixed.rgba_astc_8x5_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034301, VkglTestCase_034301_1, VkglTestCase_034301_2);

#define VkglTestCase_034302_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034302_2 "mixed.rgba_astc_8x5_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034302, VkglTestCase_034302_1, VkglTestCase_034302_2);

#define VkglTestCase_034303_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034303_2 "ts_mixed.rgba_astc_8x5_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034303, VkglTestCase_034303_1, VkglTestCase_034303_2);

#define VkglTestCase_034304_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034304_2 "ts_mixed.rgba_astc_8x5_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034304, VkglTestCase_034304_1, VkglTestCase_034304_2);

#define VkglTestCase_034305_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034305_2 "its_mixed.rgba_astc_8x5_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034305, VkglTestCase_034305_1, VkglTestCase_034305_2);

#define VkglTestCase_034306_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034306_2 "mixed.rgba_astc_8x5_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034306, VkglTestCase_034306_1, VkglTestCase_034306_2);

#define VkglTestCase_034307_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034307_2 "its_mixed.rgba_astc_8x5_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034307, VkglTestCase_034307_1, VkglTestCase_034307_2);

#define VkglTestCase_034308_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034308_2 "its_mixed.rgba_astc_8x5_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034308, VkglTestCase_034308_1, VkglTestCase_034308_2);

#define VkglTestCase_034309_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034309_2 "bits_mixed.rgba_astc_8x5_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034309, VkglTestCase_034309_1, VkglTestCase_034309_2);

#define VkglTestCase_034310_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034310_2 "_mixed.rgba_astc_8x5_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034310, VkglTestCase_034310_1, VkglTestCase_034310_2);

#define VkglTestCase_034311_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034311_2 "mixed.rgba_astc_8x5_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034311, VkglTestCase_034311_1, VkglTestCase_034311_2);

#define VkglTestCase_034312_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034312_2 "mixed.rgba_astc_8x5_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034312, VkglTestCase_034312_1, VkglTestCase_034312_2);

#define VkglTestCase_034313_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034313_2 "_mixed.rgba_astc_8x5_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034313, VkglTestCase_034313_1, VkglTestCase_034313_2);

#define VkglTestCase_034314_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034314_2 "ed.rgba_astc_8x5_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034314, VkglTestCase_034314_1, VkglTestCase_034314_2);
