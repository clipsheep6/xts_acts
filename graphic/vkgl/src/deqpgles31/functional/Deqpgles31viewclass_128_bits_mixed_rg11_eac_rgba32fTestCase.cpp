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

#define VkglTestCase_034099_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_034099_2 "8_bits_mixed.rg11_eac_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034099, VkglTestCase_034099_1, VkglTestCase_034099_2);

#define VkglTestCase_034100_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_034100_2 "8_bits_mixed.rg11_eac_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034100, VkglTestCase_034100_1, VkglTestCase_034100_2);

#define VkglTestCase_034101_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_034101_2 "28_bits_mixed.rg11_eac_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034101, VkglTestCase_034101_1, VkglTestCase_034101_2);

#define VkglTestCase_034102_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034102_2 "its_mixed.rg11_eac_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034102, VkglTestCase_034102_1, VkglTestCase_034102_2);

#define VkglTestCase_034103_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_034103_2 "28_bits_mixed.rg11_eac_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034103, VkglTestCase_034103_1, VkglTestCase_034103_2);

#define VkglTestCase_034104_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_034104_2 "28_bits_mixed.rg11_eac_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034104, VkglTestCase_034104_1, VkglTestCase_034104_2);

#define VkglTestCase_034105_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_034105_2 "128_bits_mixed.rg11_eac_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034105, VkglTestCase_034105_1, VkglTestCase_034105_2);

#define VkglTestCase_034106_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034106_2 "bits_mixed.rg11_eac_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034106, VkglTestCase_034106_1, VkglTestCase_034106_2);
