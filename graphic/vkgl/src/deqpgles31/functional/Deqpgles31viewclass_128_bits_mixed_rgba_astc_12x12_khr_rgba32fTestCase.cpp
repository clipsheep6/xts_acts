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

#define VkglTestCase_034555_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034555_2 "s_mixed.rgba_astc_12x12_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034555, VkglTestCase_034555_1, VkglTestCase_034555_2);

#define VkglTestCase_034556_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034556_2 "s_mixed.rgba_astc_12x12_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034556, VkglTestCase_034556_1, VkglTestCase_034556_2);

#define VkglTestCase_034557_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034557_2 "ts_mixed.rgba_astc_12x12_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034557, VkglTestCase_034557_1, VkglTestCase_034557_2);

#define VkglTestCase_034558_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034558_2 "ixed.rgba_astc_12x12_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034558, VkglTestCase_034558_1, VkglTestCase_034558_2);

#define VkglTestCase_034559_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034559_2 "s_mixed.rgba_astc_12x12_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034559, VkglTestCase_034559_1, VkglTestCase_034559_2);

#define VkglTestCase_034560_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034560_2 "s_mixed.rgba_astc_12x12_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034560, VkglTestCase_034560_1, VkglTestCase_034560_2);

#define VkglTestCase_034561_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034561_2 "ts_mixed.rgba_astc_12x12_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034561, VkglTestCase_034561_1, VkglTestCase_034561_2);

#define VkglTestCase_034562_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034562_2 "ixed.rgba_astc_12x12_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034562, VkglTestCase_034562_1, VkglTestCase_034562_2);

#define VkglTestCase_034563_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034563_2 "ts_mixed.rgba_astc_12x12_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034563, VkglTestCase_034563_1, VkglTestCase_034563_2);

#define VkglTestCase_034564_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034564_2 "ts_mixed.rgba_astc_12x12_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034564, VkglTestCase_034564_1, VkglTestCase_034564_2);

#define VkglTestCase_034565_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034565_2 "its_mixed.rgba_astc_12x12_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034565, VkglTestCase_034565_1, VkglTestCase_034565_2);

#define VkglTestCase_034566_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034566_2 "mixed.rgba_astc_12x12_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034566, VkglTestCase_034566_1, VkglTestCase_034566_2);

#define VkglTestCase_034567_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034567_2 "ixed.rgba_astc_12x12_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034567, VkglTestCase_034567_1, VkglTestCase_034567_2);

#define VkglTestCase_034568_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034568_2 "ixed.rgba_astc_12x12_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034568, VkglTestCase_034568_1, VkglTestCase_034568_2);

#define VkglTestCase_034569_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034569_2 "mixed.rgba_astc_12x12_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034569, VkglTestCase_034569_1, VkglTestCase_034569_2);

#define VkglTestCase_034570_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034570_2 "d.rgba_astc_12x12_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034570, VkglTestCase_034570_1, VkglTestCase_034570_2);
