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
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037613_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037613_2 "64_bits_mixed.r11_eac_rg32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037613, VkglTestCase_037613_1, VkglTestCase_037613_2);

#define VkglTestCase_037614_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037614_2 "64_bits_mixed.r11_eac_rg32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037614, VkglTestCase_037614_1, VkglTestCase_037614_2);

#define VkglTestCase_037615_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037615_2 "_64_bits_mixed.r11_eac_rg32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037615, VkglTestCase_037615_1, VkglTestCase_037615_2);

#define VkglTestCase_037616_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037616_2 "bits_mixed.r11_eac_rg32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037616, VkglTestCase_037616_1, VkglTestCase_037616_2);

#define VkglTestCase_037617_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037617_2 "4_bits_mixed.r11_eac_rg32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037617, VkglTestCase_037617_1, VkglTestCase_037617_2);

#define VkglTestCase_037618_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037618_2 "_64_bits_mixed.r11_eac_rg32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037618, VkglTestCase_037618_1, VkglTestCase_037618_2);

#define VkglTestCase_037619_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037619_2 "_64_bits_mixed.r11_eac_rg32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037619, VkglTestCase_037619_1, VkglTestCase_037619_2);

#define VkglTestCase_037620_1 "dEQP-GLES31.functional.copy_image.mixed.viewclas"
#define VkglTestCase_037620_2 "s_64_bits_mixed.r11_eac_rg32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037620, VkglTestCase_037620_1, VkglTestCase_037620_2);

#define VkglTestCase_037621_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037621_2 "_bits_mixed.r11_eac_rg32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037621, VkglTestCase_037621_1, VkglTestCase_037621_2);

#define VkglTestCase_037622_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037622_2 "64_bits_mixed.r11_eac_rg32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037622, VkglTestCase_037622_1, VkglTestCase_037622_2);
