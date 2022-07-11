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

#define VkglTestCase_034075_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034075_2 "_mixed.rgba32f_srgb8_alpha8_etc2_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034075, VkglTestCase_034075_1, VkglTestCase_034075_2);

#define VkglTestCase_034076_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034076_2 "s_mixed.rgba32f_srgb8_alpha8_etc2_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034076, VkglTestCase_034076_1, VkglTestCase_034076_2);

#define VkglTestCase_034077_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034077_2 "_mixed.rgba32f_srgb8_alpha8_etc2_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034077, VkglTestCase_034077_1, VkglTestCase_034077_2);

#define VkglTestCase_034078_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034078_2 "s_mixed.rgba32f_srgb8_alpha8_etc2_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034078, VkglTestCase_034078_1, VkglTestCase_034078_2);

#define VkglTestCase_034079_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034079_2 "s_mixed.rgba32f_srgb8_alpha8_etc2_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034079, VkglTestCase_034079_1, VkglTestCase_034079_2);

#define VkglTestCase_034080_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034080_2 "ts_mixed.rgba32f_srgb8_alpha8_etc2_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034080, VkglTestCase_034080_1, VkglTestCase_034080_2);

#define VkglTestCase_034081_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034081_2 "xed.rgba32f_srgb8_alpha8_etc2_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034081, VkglTestCase_034081_1, VkglTestCase_034081_2);

#define VkglTestCase_034082_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034082_2 "ixed.rgba32f_srgb8_alpha8_etc2_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034082, VkglTestCase_034082_1, VkglTestCase_034082_2);
