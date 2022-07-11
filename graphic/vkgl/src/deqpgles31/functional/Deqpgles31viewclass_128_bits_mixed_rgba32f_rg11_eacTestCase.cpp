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

#define VkglTestCase_034091_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_034091_2 "8_bits_mixed.rgba32f_rg11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034091, VkglTestCase_034091_1, VkglTestCase_034091_2);

#define VkglTestCase_034092_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_034092_2 "28_bits_mixed.rgba32f_rg11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034092, VkglTestCase_034092_1, VkglTestCase_034092_2);

#define VkglTestCase_034093_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_034093_2 "8_bits_mixed.rgba32f_rg11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034093, VkglTestCase_034093_1, VkglTestCase_034093_2);

#define VkglTestCase_034094_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_034094_2 "28_bits_mixed.rgba32f_rg11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034094, VkglTestCase_034094_1, VkglTestCase_034094_2);

#define VkglTestCase_034095_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_034095_2 "28_bits_mixed.rgba32f_rg11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034095, VkglTestCase_034095_1, VkglTestCase_034095_2);

#define VkglTestCase_034096_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_034096_2 "128_bits_mixed.rgba32f_rg11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034096, VkglTestCase_034096_1, VkglTestCase_034096_2);

#define VkglTestCase_034097_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034097_2 "its_mixed.rgba32f_rg11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034097, VkglTestCase_034097_1, VkglTestCase_034097_2);

#define VkglTestCase_034098_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034098_2 "bits_mixed.rgba32f_rg11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034098, VkglTestCase_034098_1, VkglTestCase_034098_2);
