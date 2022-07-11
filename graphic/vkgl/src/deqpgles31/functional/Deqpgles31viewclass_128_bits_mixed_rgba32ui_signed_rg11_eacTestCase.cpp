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

#define VkglTestCase_035079_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035079_2 "ts_mixed.rgba32ui_signed_rg11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035079, VkglTestCase_035079_1, VkglTestCase_035079_2);

#define VkglTestCase_035080_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035080_2 "its_mixed.rgba32ui_signed_rg11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035080, VkglTestCase_035080_1, VkglTestCase_035080_2);

#define VkglTestCase_035081_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035081_2 "ts_mixed.rgba32ui_signed_rg11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035081, VkglTestCase_035081_1, VkglTestCase_035081_2);

#define VkglTestCase_035082_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035082_2 "its_mixed.rgba32ui_signed_rg11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035082, VkglTestCase_035082_1, VkglTestCase_035082_2);

#define VkglTestCase_035083_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035083_2 "its_mixed.rgba32ui_signed_rg11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035083, VkglTestCase_035083_1, VkglTestCase_035083_2);

#define VkglTestCase_035084_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035084_2 "bits_mixed.rgba32ui_signed_rg11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035084, VkglTestCase_035084_1, VkglTestCase_035084_2);

#define VkglTestCase_035085_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035085_2 "mixed.rgba32ui_signed_rg11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035085, VkglTestCase_035085_1, VkglTestCase_035085_2);

#define VkglTestCase_035086_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035086_2 "_mixed.rgba32ui_signed_rg11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035086, VkglTestCase_035086_1, VkglTestCase_035086_2);

#define VkglTestCase_035087_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035087_2 "s_mixed.rgba32ui_signed_rg11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035087, VkglTestCase_035087_1, VkglTestCase_035087_2);

#define VkglTestCase_035088_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035088_2 "ts_mixed.rgba32ui_signed_rg11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035088, VkglTestCase_035088_1, VkglTestCase_035088_2);
