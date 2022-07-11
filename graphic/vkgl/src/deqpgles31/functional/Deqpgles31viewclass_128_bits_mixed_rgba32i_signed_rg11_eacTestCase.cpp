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

#define VkglTestCase_036279_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036279_2 "its_mixed.rgba32i_signed_rg11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036279, VkglTestCase_036279_1, VkglTestCase_036279_2);

#define VkglTestCase_036280_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036280_2 "bits_mixed.rgba32i_signed_rg11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036280, VkglTestCase_036280_1, VkglTestCase_036280_2);

#define VkglTestCase_036281_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036281_2 "its_mixed.rgba32i_signed_rg11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036281, VkglTestCase_036281_1, VkglTestCase_036281_2);

#define VkglTestCase_036282_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036282_2 "bits_mixed.rgba32i_signed_rg11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036282, VkglTestCase_036282_1, VkglTestCase_036282_2);

#define VkglTestCase_036283_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036283_2 "bits_mixed.rgba32i_signed_rg11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036283, VkglTestCase_036283_1, VkglTestCase_036283_2);

#define VkglTestCase_036284_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_036284_2 "_bits_mixed.rgba32i_signed_rg11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036284, VkglTestCase_036284_1, VkglTestCase_036284_2);

#define VkglTestCase_036285_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036285_2 "_mixed.rgba32i_signed_rg11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036285, VkglTestCase_036285_1, VkglTestCase_036285_2);

#define VkglTestCase_036286_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036286_2 "s_mixed.rgba32i_signed_rg11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036286, VkglTestCase_036286_1, VkglTestCase_036286_2);

#define VkglTestCase_036287_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036287_2 "s_mixed.rgba32i_signed_rg11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036287, VkglTestCase_036287_1, VkglTestCase_036287_2);

#define VkglTestCase_036288_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036288_2 "ts_mixed.rgba32i_signed_rg11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036288, VkglTestCase_036288_1, VkglTestCase_036288_2);
